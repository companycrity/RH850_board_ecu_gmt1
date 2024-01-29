/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekalrm.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.60
|  Description: osek API-functions for handling alarms and counters
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/
/* KB begin VeryFirstTokenInAllCSourceFiles (default) */
/* KB end VeryFirstTokenInAllCSourceFiles */



#if defined USE_QUOTE_INCLUDES
 #include "osek.h"
 #include "osekext.h"
#else
 #include <osek.h>
 #include <osekext.h>
#endif

/* Vector release management */
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif
/* KB begin vrmReleaseNumber (overwritten) */
/* Source release number */
#define osdVrmMajRelNum 1
#define osdVrmMinRelNum 6
/* KB end vrmReleaseNumber */
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif

/* CovComment 0:  file: osekalrm.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */

#if (osdNumberOfAlarms > 0)

/*-+--------------------------------------------------------------------------
 / GetAlarm
 / ========
 /
 / Syntax:          StatusType GetAlarm ( AlarmType <AlarmID>, 
 /                                        TickRefType <Tick>)
 / Parameter (In):  AlarmID Reference to an alarm
 / Parameter (Out): Tick Relative value in ticks before the alarm <AlarmID> 
 /                  expires.
 / Description:     The system service GetAlarm returns the relative value in 
 /                  ticks before the alarm <AlarmID> expires.
 / Particularities: It is up to the application to decide whether for example 
 /                  a CancelAlarm may still be useful.
 /                  If <AlarmID> is not in use, <Tick> is not defined.
 /                  Allowed on task level, ISR, and in several hook routines.
 / Status:
 /  -Standard:      - No error, E_OK
 /                  - Alarm <AlarmID> is not used, E_OS_NOFUNC
 /  -Extended:      - Alarm <AlarmID> is invalid, E_OS_ID
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, Cat2-ISR, ErrorHook, PreTaskHook, PostTaskHook,
 /                  interrupts not disabled by the application
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osGetAlarm is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osGetAlarm(AlarmType alarmID, TickRefType diffTickTime)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetAlarm */
   /* KB begin osekHWGetAlarmLocalVars (overwritten) */
   CounterType CounterID;
   /* KB end osekHWGetAlarmLocalVars */

   OS_GA_ENTRY()
   COVER(0x01AD)

   COVER(0x01AE)
   /* check call context */
   if ((osdValidCtx_GetAlarm & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x01AF)
      osAPIError(E_OS_CALLEVEL, osdErrGACallContext);
      OS_GA_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x01B0)

   /* check timer ID */
   if (alarmID >= osrNumberOfAlarms)
   {
      COVER(0x01B1)
      osAPIError(E_OS_ID, osdErrGAWrongAlarmID);
      OS_GA_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x01B2)
   /* check access rights for this object */
   if (((oskApplAlarmAccess[alarmID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x01B3)
      osAPIError(E_OS_ACCESS, osdErrGANoAccess);
      OS_GA_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x01B4)


   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x01B5)
      osAPIError(E_OS_DISABLEDINT, osdErrGAIntAPIDisabled);
      OS_GA_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x01B6)


   /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
   osSaveDisableLevelNested();
   /* KB end osekHWosSaveDisableLevelNested */
   OS_GA_START_CRITICAL()


   /* if timer is inactive, return at once */
   if (osAlarmActivated[alarmID] == 0)
   {
      COVER(0x01B7)
      osSaveGetAlarm_AlarmID(alarmID)
      osSaveGetAlarm_Tick(diffTickTime)
      osAPIError(E_OS_NOFUNC, osdErrGANotActive);
      OS_GA_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_GA_EXIT()
      return E_OS_NOFUNC;
   }
   ELSEWITHCOVER(0x01B8)

   COVER(0x01B9)
   /* KB begin osekHWGetAlarmParamWrite (overwritten) */
   CounterID = oskAlarmCounterRef[alarmID];
   #if (osdUseHighResolutionTimer != 0)
   /* System with HiRes Timer must distinguish */
   if (osdTRUE == osdIsHiResCounter(CounterID)) 
   {
      /* HiRes Timer must be read from hardware */
      TickType now;     /* hardware timer value */
      now = osGetCurrentTime(CounterID);
      /* Is the alarm still in the future? */
      IFCOVER(osAlarmTime[alarmID] <= oskCounterHalfrange[CounterID],0x0200,0x0201)
      if(osdCounterCompareGt(osAlarmTime[alarmID], now, oskCounterHalfrange[CounterID]))
      {
         /* Yes, alarm is still to come */
         /* Do we have to consider an overflow? */
         if(osAlarmTime[alarmID] > now)
         {
            COVER(0x01BA)
            /* No, simple case without overflow consideration */
            *diffTickTime = osAlarmTime[alarmID] - now;
         }
         else
         {
            COVER(0x01BB)
            *diffTickTime = ((oskCounterInternalMaximumValue[CounterID] - now) + 1) + osAlarmTime[alarmID];
         }
      }
      else
      {  
         COVER(0x01BC)
         /* No, alarm time already passed, alarm will be handled with next timer interrupt */
         *diffTickTime = 1;
      }
   }
   else
   {  
   #endif /* (osdUseHighResolutionTimer != 0) */
   #if (osdNumberOfSWAndSRCounters > 0)
      /* For non-HiRes Timers just read the counter value */
      /* Do we have to consider an overflow? */
      if(osAlarmTime[alarmID] > osGetCurrentTime(CounterID))
      {
         COVER(0x01BD)
         /* No, simple case without overflow consideration */
         *diffTickTime = osAlarmTime[alarmID] - osGetCurrentTime(CounterID);
      }
      else
      {
         COVER(0x01BE)
         /* Yes, an overflow will occur before the alarm expires - add it to the calculation */
         *diffTickTime = ((oskCounterInternalMaximumValue[CounterID] - osGetCurrentTime(CounterID)) + 1) + osAlarmTime[alarmID];
      }
   #endif /* (osdNumberOfSWAndSRCounters > 0) */
   #if (osdUseHighResolutionTimer != 0)
   }
   #endif /* (osdUseHighResolutionTimer != 0) */
   /* KB end osekHWGetAlarmParamWrite */


   OS_GA_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
   osRestoreEnableLevelNested();
   /* KB end osekHWosRestoreEnableLevelNested */

   OS_GA_EXIT()
   return E_OK;
} /* END OF osGetAlarm */
/*-+--------------------------------------------------------------------------
 / SetRelAlarm
 / ===========
 /
 / Syntax:          StatusType SetRelAlarm ( AlarmType <AlarmID>,
 /                                           TickType <increment>,
 /                                           TickType <cycle> )
 / Parameter (In):  -AlarmID Reference to the alarm element
 /                  -increment Relative value in ticks
 /                  -cycle Cycle value in case of cyclic alarm. In case of 
 /                   single alarms, cycle has to be zero.
 / Parameter (Out): none
 / Description:     The system service occupies the alarm <AlarmID> element.
 /                  After <increment> ticks have elapsed, the task assigned 
 /                  to the alarm <AlarmID> is activated or the assigned event
 /                  (only for extended tasks) is set or the alarm-callback 
 /                  routine is called.
 / Particularities: The value of <increment> must be unequal to 0.
 /                  If the relative value <increment> is very small, 
 /                  the alarm may expire, and the task may become ready or 
 /                  the alarm-callback may be called before the system 
 /                  service returns to the user.
 /                  If <cycle> is unequal zero, the alarm element is logged 
 /                  on again immediately after expiry with the relative 
 /                  value <cycle>.
 /                  The alarm <AlarmID> must not already be in use.
 /                  To change values of alarms already in use the alarm has 
 /                  to be cancelled first.
 /                  If the alarm is already in use, this call is
 /                  ignored and the error E_OS_STATE is returned.
 /                  Allowed on task level and in ISR, but not in hook 
 /                  routines.
 / Status:
 /  -Standard:      - No error, E_OK
 /                  - Alarm <AlarmID> is already in use, E_OS_STATE
 /  -Extended:      - Alarm <AlarmID> is invalid, E_OS_ID
 /                  - Value of <increment> outside of the admissible 
 /                    limits (lower or equal zero or bigger than 
 /                    maxallowedvalue), E_OS_VALUE
 /                  - Value of <cycle> unequal to 0 and outside of the 
 /                    admissible counter limits (less than mincycle 
 /                    or bigger than maxallowedvalue), E_OS_VALUE
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:       BCC1, BCC2, ECC1, ECC2, Events only ECC1, ECC2
 /  -General:       Task, Cat2-ISR, interrupts enabled
 /  -SC1/SC2 only:  StartupHook (compatibility to older OSEK-OS)
 /--------------------------------------------------------------------------*/

/* CovComment 4:  Function: osSetRelAlarm */
/* KB begin osekHWosSetRelAlarmHead (default) */
/* MISRA RULE 14.1 VIOLATION: The function osSetRelAlarm is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osSetRelAlarm(AlarmType alarmID, TickType deltaTicks, TickType cycle)   /* PRQA S 1503 */
{
   COVER(0x01BF)
/* KB end osekHWosSetRelAlarmHead */
 {/* extra curly brace to allow coverage code above and variable declarations inside OS_SA_ENTRY below */
   CounterType CounterID;
   TickType now;
   OS_SA_ENTRY()

   COVER(0x01C0)
   /* check call context */
   if ((osdValidCtx_SetRelAlarm & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x01C1)
      osAPIError(E_OS_CALLEVEL, osdErrSACallContext);
      OS_SA_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x01C2)

   /* check timer ID */
   if (alarmID >= osrNumberOfAlarms)
   {
      COVER(0x01C3)
      osAPIError(E_OS_ID, osdErrSAWrongAlarmID); 
      OS_SA_EXIT()
      return  E_OS_ID;
   }
   ELSEWITHCOVER(0x01C4)
   /* check access rights for this object */
   if (((oskApplAlarmAccess[alarmID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x01C5)
      osAPIError(E_OS_ACCESS, osdErrSANoAccess);
      OS_SA_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x01C6)
   

   CounterID = oskAlarmCounterRef[alarmID];

#if (osdNumberOfAlarms > 0)
   COVER(0x01C7)
      /* TR:SPMF09:0012 Start */
      /* delta ticks must not be zero according to AutosarOS */
      if (deltaTicks == 0)
      {
         /* fullfills [SR:005] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
         COVER(0x01C8)
         osAPIError(E_OS_VALUE, osdErrSAZeroIncrement);
         OS_SA_EXIT()
         return  E_OS_VALUE;
      }/* TR:SPMF09:0012 End */
      ELSEWITHCOVER(0x01C9)
      COVER(0x01CA)
      /* check timer limits */
      if (cycle != 0)
      {
         IF2ORCOVER( (cycle > oskCounterMaxAllowedValue[CounterID]) , (cycle < oskCounterMinCycle[CounterID]),0x0206,0x0207,0x0208)
         if ((cycle > oskCounterMaxAllowedValue[CounterID])
             || (cycle < oskCounterMinCycle[CounterID]))
         {
            COVER(0x01CB)
            osAPIError(E_OS_VALUE, osdErrSAWrongCycle);  
            OS_SA_EXIT()
            return E_OS_VALUE;
         }
         ELSEWITHCOVER(0x01CC)
      }
      ELSEWITHCOVER(0x01CD)
      if (deltaTicks > oskCounterMaxAllowedValue[CounterID]) 
      {
         COVER(0x01CE)
         osAPIError(E_OS_VALUE, osdErrSAWrongDelta);
         OS_SA_EXIT()
         return E_OS_VALUE;
      }
      ELSEWITHCOVER(0x01CF)

#endif /* (osdNumberOfAlarms > 0) */


   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x01D0)
      osAPIError(E_OS_DISABLEDINT, osdErrSAIntAPIDisabled);
      OS_SA_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x01D1)
   

   COVER(0x01D2)
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_SA_START_CRITICAL()


   /* timer running? */
   if (osAlarmActivated[alarmID] != 0)
   {
      COVER(0x01D3)
      osAPIError(E_OS_STATE, osdErrSAAlreadyActive);
      OS_SA_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_SA_EXIT()
      return E_OS_STATE;
   }
   ELSEWITHCOVER(0x01D4)

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   /*start alarm*/
   osAlarmCycleTime[alarmID] = cycle;
   now = osGetCurrentTime(CounterID);

   /* Will addition of the delta overflow the internal counter? */
   IF2ANDCOVER(((oskCounterInternalMaximumValue[CounterID] - now) < deltaTicks) , (now > osdCounterOverflowRange(CounterID)),0x0209,0x020A,0x020B)
   if(((oskCounterInternalMaximumValue[CounterID] - now) < deltaTicks) && (now > osdCounterOverflowRange(CounterID)))
   {
      /* Yes, there will be an internal overflow. Calculate backwards. */
      /* Note that we intentionally do one calculation more than the theoretical minimum:
       * a) In non-HiRes Systems, (oskCounterHalfrange[CounterID] + 1) is identical to
       *    (oskCounterMaxAllowedValue[CounterID] + 1), which we can assume that the compiler holds 
       *    in a register, as it is frequently used in this function.
       * b) for SafeContext systems, we can improve Polyspace results here, because we ensure there will be no
       *    overflows throughout all calculations.
       */
      COVER(0x01D5) 
      osAlarmTime[alarmID] = ((now                                       /* start now */
               - (oskCounterHalfrange[CounterID] + 1)) /* move backwards into the first half of the counter */
               + deltaTicks)                                             /* here we can safely add the delta. */
                                                                         /* Note that this will cause we are back in the second half of the counter. */
               - (oskCounterHalfrange[CounterID] + 1); /* And now we go and subtract the second half of the range */
   }
   else
   {
      COVER(0x01D6)
      /* No, within the internal count range, it is safe to just add delta to the internal timestamp. */
      osAlarmTime[alarmID] = now + deltaTicks;
   }
   osAlarmActivated[alarmID] = 1;
   osInsertMinHeap(alarmID, &oskAlarmHeaps[CounterID], CounterID);

   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_SA_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */
   OS_SA_EXIT()
   COVER(0x01D7)
   return E_OK;
 }/* extra curly brace (see start of osSetRelAlarm) */
} /* END OF osSetRelAlarm */


/*-+--------------------------------------------------------------------------
 / SetAbsAlarm
 / ===========
 /
 / Syntax:          StatusType SetAbsAlarm ( AlarmType <AlarmID>, 
 /                                           TickType <start>,
 /                                           TickType <cycle> )
 / Parameter (In):  -AlarmID Reference to the alarm element
 /                  -start Absolute value in ticks
 /                  -cycle Cycle value in case of cyclic alarm. In case 
 /                   of single alarms, cycle has to be zero.
 / Parameter (Out): none
 / Description:     The system service occupies the alarm <AlarmID> element.
 /                  When <start> ticks are reached, the task assigned to 
 /                  the alarm <AlarmID> is activated or the assigned event
 /                  (only for extended tasks) is set or the alarm-callback 
 /                  routine is called.
 / Particularities: If the absolute value <start> is very close to the 
 /                  current counter value, the alarm may expire, and the 
 /                  task may become ready or the alarm-callback may be 
 /                  called before the system service returns to the user.
 /                  If the absolute value <start> was already reached 
 /                  before the system call, the alarm will only expire 
 /                  when the absolute value <start> is reached again,
 /                  i.e. after the next overrun of the counter.
 /                  If <cycle> is unequal zero, the alarm element is 
 /                  logged on again immediately after expiry with the 
 /                  relative value <cycle>.
 /                  The alarm <AlarmID> must not be already in use.
 /                  To change values of alarms already in use the alarm 
 /                  has to be cancelled first.
 /                  If the alarm is already in use, this call is ignored 
 /                  and the error E_OS_STATE is returned.
 /                  Allowed on task level and in ISR, but not in hook 
 /                  routines.
 / Status:
 /  -Standard:      - No error, E_OK
 /                  - Alarm <AlarmID> is already in use, E_OS_STATE
 /  -Extended:      - Alarm <AlarmID> is invalid, E_OS_ID
 /                  - Value of <start> outside of the admissible counter 
 /                    limit (less than zero or bigger than maxallowedvalue),
 /                    E_OS_VALUE
 /                  - Value of <cycle> unequal to 0 and outside of the 
 /                    admissible counter limits (less than mincycle or 
 /                    bigger than maxallowedvalue), E_OS_VALUE
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2, Events only ECC1, ECC2
 / Context:
 /  -General:       Task, Cat2-ISR, interrupts not disabled by the 
 /                  application
 /  -SC1/SC2 only:  StartupHook (compatibility to older OSEK-OS)
 /--------------------------------------------------------------------------*/

/* CovComment 4:  Function: osSetAbsAlarm */
/* KB begin osekHWosSetAbsAlarmHead (default) */
/* MISRA RULE 14.1 VIOLATION: The function osSetAbsAlarm is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osSetAbsAlarm(AlarmType alarmID, TickType start, TickType cycle)    /* PRQA S 1503 */
{
   COVER(0x01D8)
/* KB end osekHWosSetAbsAlarmHead */
 {/* extra curly brace to allow coverage code above and variable declarations inside OS_SL_ENTRY below */
   TickType now;     /* hardware timer value */
   TickType usernow; /* timer value visible to the user */
   TickType delta;   /* internally calculated difference between current time and desired expiry */
   CounterType CounterID;
   OS_SL_ENTRY()
   COVER(0x01D9)
   /* check call context */
   if ((osdValidCtx_SetAbsAlarm & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x01DA)
      osAPIError(E_OS_CALLEVEL, osdErrSLCallContext);
      OS_SL_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x01DB)

   /* check timer ID */
   if (alarmID >= osrNumberOfAlarms)
   {
      COVER(0x01DC)
      osAPIError(E_OS_ID, osdErrSLWrongAlarmID);
      OS_SL_EXIT()
      return  E_OS_ID;
   }
   ELSEWITHCOVER(0x01DD)
   /* check access rights for this object */
   if (((oskApplAlarmAccess[alarmID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x01DE)
      osAPIError(E_OS_ACCESS, osdErrSLNoAccess);
      OS_SL_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x01DF)
   

  CounterID = oskAlarmCounterRef[alarmID];

   COVER(0x01E0)
#if (osdNumberOfAlarms > 0)
   COVER(0x01E1)
      
      /* check timer limits */
      if (cycle != 0)
      {
         IF2ORCOVER( (cycle > oskCounterMaxAllowedValue[CounterID]) , (cycle < oskCounterMinCycle[CounterID]),0x020C,0x020D,0x020E)
         if ((cycle > oskCounterMaxAllowedValue[CounterID])
             || (cycle < oskCounterMinCycle[CounterID]))
         {
            COVER(0x01E2)
            osAPIError(E_OS_VALUE, osdErrSLWrongCycle);  
            OS_SL_EXIT()
            return E_OS_VALUE;
         }
         ELSEWITHCOVER(0x01E3)
      }
      ELSEWITHCOVER(0x01E4)
      if (start > oskCounterMaxAllowedValue[CounterID]) 
      {
         COVER(0x01E5)
         osAPIError(E_OS_VALUE, osdErrSLWrongStart);
         OS_SL_EXIT()
         return E_OS_VALUE;
      }
      ELSEWITHCOVER(0x01E6)

#endif /* (osdNumberOfAlarms > 0) */

   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x01E7)
      osAPIError(E_OS_DISABLEDINT, osdErrSLIntAPIDisabled);
      OS_SL_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x01E8)

   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_SL_START_CRITICAL()


   /* timer running? */
   if (osAlarmActivated[alarmID] != 0)
   {
      COVER(0x01E9)
      osAPIError(E_OS_STATE, osdErrSLAlreadyActive);
      OS_SL_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_SL_EXIT()
      return E_OS_STATE;
   }
   ELSEWITHCOVER(0x01EA)

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */
   /* start alarm */
   osAlarmCycleTime[alarmID] = cycle;
   now = osGetCurrentTime(CounterID);

   /* what time does the user believe it is? */
   /* This will work for HiRes Timers (internal count up to (MaxAllowed*4)+3) as well as all others (internal count up to (MaxAllowed*2)+1) */
   IFCOVER( now<=oskCounterMaxAllowedValue[CounterID],0x0202,0x0203)
   for(usernow = now; usernow > oskCounterMaxAllowedValue[CounterID]; usernow -= (oskCounterMaxAllowedValue[CounterID] + 1))
   {  
      ;
      IFCOVER( (usernow-(oskCounterMaxAllowedValue[CounterID] + 1)) > oskCounterMaxAllowedValue[CounterID],0x0204,0x0205)
   }

   /* Did the user consider an overflow? */
   if(usernow < start)
   {
      COVER(0x01EB)
      /* No, user has set a start greater than his current time */
      /* simple calculations, no overflow considerations necessary */
      delta = start - usernow;
      osAlarmTime[alarmID] = now + delta;
   }
   else
   {
      /* Yes, user believes timer will overflow before the desired expiry. */
      /* Consider during calculation of the delta. */
      delta = ((oskCounterMaxAllowedValue[CounterID] - usernow) + start) + 1;
      /* Now, we have to check if we will also have an overflow internally. */
      if(now > osdCounterOverflowRange(CounterID))
      {
         COVER(0x01EC)
         /* Yes, there will be an internal overflow. Calculate backwards. */
         /* Note that we intentionally do one calculation more than the theoretical minimum:
          * a) In non-HiRes Systems, (oskCounterHalfrange[CounterID] + 1) is identical to
          *    (oskCounterMaxAllowedValue[CounterID] + 1), which we can assume that the compiler holds 
          *    in a register, as it is frequently used in this function.
          * b) for SafeContext systems, we can improve Polyspace results here, because we ensure there will be no
          *    overflows throughout all calculations.
          */
         osAlarmTime[alarmID] = ((now                                       /* start now */
                  - (oskCounterHalfrange[CounterID] + 1)) /* move backwards into the first half of the counter */
                  + delta)                                                  /* here we can safely add the delta. */
                                                                            /* Note that this will cause we are back in the second half of the counter. */
                  - (oskCounterHalfrange[CounterID] + 1); /* And now we go and subtract the second half of the range */
      }
      else
      {
         COVER(0x01ED)
         /* No, within the internal count range, it is safe to just add delta to the internal timestamp. */
         osAlarmTime[alarmID] = now + delta;
      }
   }
   osAlarmActivated[alarmID] = 1;
   osInsertMinHeap(alarmID, &oskAlarmHeaps[CounterID], CounterID);

   COVER(0x01EE)
   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_SL_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */
   OS_SL_EXIT()

   return E_OK;
 }/* extra curly brace (see start of osSetAbsAlarm) */
} /* END OF SetAbsAlarm */
/*-+--------------------------------------------------------------------------
 / CancelAlarm
 / ===========
 /
 / Syntax:          StatusType CancelAlarm ( AlarmType <AlarmID> )
 / Parameter (In):  AlarmID Reference to an alarm
 / Parameter (Out): none
 / Description:     The system service cancels the alarm <AlarmID>.
 / Particularities: Allowed on task level and in ISR, but not in hook routines.
 / Status:
 /  -Standard:      - No error, E_OK
 /                  - Alarm <AlarmID> not in use, E_OS_NOFUNC
 /  -Extended:      - Alarm <AlarmID> is invalid, E_OS_ID
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, Cat2-ISR, interrupts not disabled by the application
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osCancelAlarm is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osCancelAlarm(AlarmType alarmID)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osCancelAlarm */
   CounterType CounterID;
   OS_CA_ENTRY()
   COVER(0x01EF)

   COVER(0x01F0)
   /* check call context */
   if ((osdValidCtx_CancelAlarm & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x01F1)
      osAPIError(E_OS_CALLEVEL, osdErrCACallContext);
      OS_CA_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x01F2)

   /* check alarm ID */
   if (alarmID >= osrNumberOfAlarms)
   {
      COVER(0x01F3)
      osAPIError(E_OS_ID, osdErrCAWrongAlarmID);
      OS_CA_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x01F4)
   /* check access rights for this object */
   if (((oskApplAlarmAccess[alarmID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x01F5)
      osAPIError(E_OS_ACCESS, osdErrCANoAccess);
      OS_CA_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x01F6)

   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x01F7)
      osAPIError(E_OS_DISABLEDINT, osdErrCAIntAPIDisabled);
      OS_CA_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x01F8)

   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_CA_START_CRITICAL()

  CounterID = oskAlarmCounterRef[alarmID];
   if (osAlarmActivated[alarmID] == 0)
   {
      /* timer is inactive => return at once */
      COVER(0x01F9)
      osAPIError(E_OS_NOFUNC, osdErrCANotActive);
      OS_CA_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_CA_EXIT()
      return E_OS_NOFUNC;
   }
   ELSEWITHCOVER(0x01FA)

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   switch(osRemoveItemMinHeap(alarmID, &oskAlarmHeaps[CounterID], CounterID))
   {
#if (osdUseHighResolutionTimer != 0)
      case osdHeapLastItemRemoved:
         osClearTimerInterruptPoint(CounterID);
         COVER(0x01FB)
         break;
      case osdHeapMinItemChanged:
         (void)osSetTimerInterruptPoint(CounterID, osAlarmTime[oskAlarmHeaps[CounterID].heap[0]] );
         COVER(0x01FC)
         break;
#endif /* #if (osdUseHighResolutionTimer != 0) */
      case osdHeapMinItemUnchanged:
         COVER(0x01FD)
         break;
      case osdHeapItemNotFound:
      default:
         ; /*empty instruction, required for MISRA*/
         /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
         /* KB end osekHWosEnableTimProtInterrupt */
         osAbortSystem(osdErrCAAlarmInternal); /* TR:SPMF12:0008 */
   }/*switch*/
   osAlarmActivated[alarmID] = 0;
   COVER(0x01FE)

   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_CA_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */
   OS_CA_EXIT()
   COVER(0x01FF)
   return E_OK;

} /* END OF osCancelAlarm */



#endif /* (osdNumberOfAlarms > 0) */

/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */
/* END OF MODULE osekalrm.c */

