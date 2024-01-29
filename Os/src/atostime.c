/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: atostime.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.68
|
|  Description: functions for schedule tables and synchronisation
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

/* CovComment 0:  file: atostime.c */
/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */

#define osdSTINIT_AUTO       1
#define osdSTINIT_SYNCSTART  2
#define osdSTINIT_HRST       4      



/* MISRA RULE 8.7 VIOLATION: Depending on the configuration, osSTTime might be used by several functions. Conditional
 * compiling of the variable for these configurations would increase the code complexity to unacceptable level (3218).
 */
osqRAM0 static osqRAM1 volatile osqRAM2 TickType             osqRAM3 osSTTime        [osdNumberOfScheduleTables]; /* PRQA S 3218 */

#define osConvertTIP2ST(TIPid) ((ScheduleTableType)((TIPid) - osdNumberOfAlarms))
#define osConvertST2TIP(STid)  ((osTIPType)((STid) + osdNumberOfAlarms))

#define osGetCurrentEP(ST)   (osSTCurrentIndex[ST])
#define osIncCurrentEP(ST)   (++(osSTCurrentIndex[ST]))
#define osResetCurrentEP(ST) (osSTCurrentIndex[ST] = oskSTStartIndex[ST])

#define osGetTargetTIPTime(TIP)               (osAlarmTime[TIP])
#define osSetTargetTIPTime(TIP, value)        (osAlarmTime[TIP] = (value))
/* CovComment 4:  Macro: osAddToTargetTIPTime */
#define osAddToTargetTIPTime(TIP, value, ctr) \
   IF2ANDCOVER(((oskCounterInternalMaximumValue[ctr] - osAlarmTime[TIP]) < (value)), (osAlarmTime[TIP] > osdCounterOverflowRange(ctr)),0x0466,0x0467,0x0468) \
   if(((oskCounterInternalMaximumValue[ctr] - osAlarmTime[TIP]) < (value)) && (osAlarmTime[TIP] > osdCounterOverflowRange(ctr))) \
   { \
      osAlarmTime[TIP] = ((osAlarmTime[TIP] - (oskCounterHalfrange[ctr] + 1)) + (value)) - (oskCounterHalfrange[ctr] + 1); \
      COVER(0x03D9) \
   } \
   else \
   { \
      osAlarmTime[TIP] = osAlarmTime[TIP] + (value); \
      COVER(0x03DA) \
   }

#define osGetSTTime(ST)                  (osSTTime[ST])
#define osSetSTTime(ST,value)            osSTTime[ST]=(value);
#define osAddToSTTime(ST, value)         osSTTime[ST] += (value); if (osSTTime[ST] > oskSTMaxAllowed[ST]) { osSTTime[ST] %= (oskSTMaxAllowed[ST] + 1) ; }
#define osGetTimeOfLastUpdate(ST)        (osSTTimeOfLastUpdate[ST])
#define osSetTimeOfLastUpdate(ST,value)  (osSTTimeOfLastUpdate[ST] = (value))



#if (osdNumberOfScheduleTables > 0)
/********************************************************************************
 * Scheduletable Time Support
 *
 * Time associated with ScheduleTable, 
 * same resolution and period as Global Time,
 * same resolution but potentially different period than Local Time 
 *********************************************************************************/  

/*********************************************************************************
osCalculateAbsTimes
- Calculates the Scheduletable times for setting Scheduletables absolute
- Calculates also the counter value to be set for the underlying counter
- considers overflows and max allowed values of the underlying counters

Return Value: The new time which should be set for Scheduletables (written into osAlarmTime)
Parameters IN  : CounterID (underlying counter of the Scheduletable)
                 AbsVal    (Absolute Value which should be set)
                 Now       (Current value of the underlying counter)
Parameters OUT : Delta     (the new scheduletable time; is written into osSTTime after the calculation)
**********************************************************************************/
static osqRAM0 osqRAM1 osqRAM2 TickType osqRAM3 osCalculateAbsTimes(CounterType CounterID, TickType AbsVal, TickType Now, TickType* Delta);
static osqRAM0 osqRAM1 osqRAM2 TickType osqRAM3 osCalculateAbsTimes(CounterType CounterID, TickType AbsVal, TickType Now, TickType* Delta)
{
   /* CovComment 4:  Function: osCalculateAbsTimes */
   TickType usernow; /* timer or counter value visible to the user */
   TickType target;  /* internally calculated expiry target */

   /* what time does the user believe it is? */
   /* This will work for HiRes Timers (internal count up to (MaxAllowed*4)+3) as well as all others (internal count up to (MaxAllowed*2)+1) */
   IFCOVER( Now <= oskCounterMaxAllowedValue[CounterID],0x0452,0x0453)
   for(usernow = Now; usernow > oskCounterMaxAllowedValue[CounterID]; usernow -= (oskCounterMaxAllowedValue[CounterID] + 1)) 
   { 
      IFCOVER( (usernow - (oskCounterMaxAllowedValue[CounterID] + 1)) > oskCounterMaxAllowedValue[CounterID],0x0454,0x0455)
   }

   /* Did the user consider an overflow? */
   if(usernow < AbsVal)
   {
      COVER(0x03DB)
      /* No, user has set a AbsVal greater than his current time */
      /* simple calculations, no overflow considerations necessary */
      *Delta = AbsVal - usernow;
      target = Now + *Delta;
   }
   else
   {
      /* Yes, user believes timer will overflow before the desired expiry. */
      /* Consider during calculation of the Delta. */
      *Delta = ((oskCounterMaxAllowedValue[CounterID] - usernow) + AbsVal) + 1;
      /* Now, we have to check if we will have an overflow internally. */
      if(Now > osdCounterOverflowRange(CounterID))
      {
         COVER(0x03DC)
         /* Yes, there will be an internal overflow. Calculate backwards. */
         /* Note that we intentionally do one calculation more than the theoretical minimum:
          * a) In non-HiRes Systems, (oskCounterHalfrange[oskAlarmCounterRef[alarmID]] + 1) is identical to
          *    (oskCounterMaxAllowedValue[oskAlarmCounterRef[alarmID]] + 1), which we can assume that the compiler holds 
          *    in a register, as it is frequently used in this function.
          * b) for SafeContext systems, we can improve Polyspace results here, because we ensure there will be no
          *    overflows throughout all calculations.
          */
         target = ((Now                                                         /* start Now */
                  - (oskCounterHalfrange[CounterID] + 1)) /* move backwards into the first half of the counter */
                  + *Delta)                                                      /* here we can safely add the Delta. */
                                                                                /* Note that this will cause we are back in the second half of the counter. */
                  - (oskCounterHalfrange[CounterID] + 1); /* And Now we go and subtract the second half of the range */
      }
      else
      {
         COVER(0x03DD)
         /* No, within the internal count range, it is safe to just add Delta to the internal timestamp. */
         target = Now + *Delta;
      }
   }
   return target;
}

/* MISRA RULE 8.7 VIOLATION: Depending on the configuration, osSTTimeOfLastUpdate might be used by several functions. 
 * Conditional compiling of the variable would increase the code complexity to unacceptable level (3218).
 */
osqRAM0 static osqRAM1 volatile osqRAM2 TickType osqRAM3 osSTTimeOfLastUpdate[osdNumberOfScheduleTables]; /* PRQA S 3218 */

/* Updates the Shifted Estimated Global Time and the STTime of all HRSTs
   Not reentrant! 
 */
static osqFunc1 void osqFunc2 osSTUpdateSTTime(ScheduleTableType STid);
static osqFunc1 void osqFunc2 osSTUpdateSTTime(ScheduleTableType STid)
{
   /* CovComment 4:  Function: osSTUpdateSTTime */
   TickType currentHWTime;
   TickType elapsedTime;
   
   currentHWTime = osGetCurrentTime(oskCounterOfST[STid]);
   elapsedTime   = currentHWTime - osSTTimeOfLastUpdate[STid];
   
   osAddToSTTime(STid, elapsedTime)
   osSTTimeOfLastUpdate[STid] = currentHWTime;
   COVER(0x03DE)
}
/*******************************************************************************
 * Switch To Next
 ******************************************************************************/  

static osqFunc1 void osqFunc2 osSTSwitchTo(ScheduleTableType current, ScheduleTableType next);
static osqFunc1 void osqFunc2 osSTSwitchTo(ScheduleTableType current, ScheduleTableType next)
{
   /* CovComment 4:  Function: osSTSwitchTo */
   

   /* There is a nexted ST, switch to it */
   osSTNextTable[current] = INVALID_SCHEDULETABLE;
   osSetTargetTIPTime(osConvertST2TIP(next), osGetTargetTIPTime(osConvertST2TIP(current)));
      
   COVER(0x03DF)
   osSTState[next]            = SCHEDULETABLE_RUNNING;
   osSTState[current]         = SCHEDULETABLE_STOPPED;
   osResetCurrentEP(next); 
}



osqFunc1 void osqFunc2 osWorkScheduleTable(osTIPType TIPid)
{
   /* CovComment 4:  Function: osWorkScheduleTable */
   TickType            distToNextEP;
   osSTReactionType    react;
   ScheduleTableType   STcurrent;
   ScheduleTableType   STnext;
   
   STcurrent = osConvertTIP2ST(TIPid);
   osSysErrAssert(STcurrent < osrNumberOfScheduleTables, osdErrWSWrongID)
   osSysErrAssert(TIPid < (osrNumberOfAlarms + osrNumberOfScheduleTables), osdErrWSWrongID)

   osSTUpdateSTTime(STcurrent);
   
   COVER(0x03E0)
   /* entering this routine implies that we reached an expiry point */
   do
   {
      /* Execute the actions of this expiry point*/
      react = osSTWorkActions(&distToNextEP, osGetCurrentEP(STcurrent));
      
      /* Now what? */   
      switch (react)
      {
         case osdSTReact_Continue   :
         case osdSTReact_InitialDelay :
         case osdSTReact_FinalDelay :
            IFCOVER(react==osdSTReact_Continue,0x0456,0x0457)
            IFCOVER(react==osdSTReact_InitialDelay,0x0458,0x0459)
            IFCOVER(react==osdSTReact_FinalDelay,0x045A,0x045B)
            /* Normal EP of a table 
               Just add the time offset to next ep to current time and continue */
            COVER(0x03E1)
            osIncCurrentEP(STcurrent);
            break;
            
         case osdSTReact_Repeat     : 
            /* this is the end of a repeating non-sync table (distance to next EP is 0)
               if something is nexted, switch to it. Else: stop. */
            /* fullfills [SR:023] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
            COVER(0x03E2)
            STnext = osSTNextTable[STcurrent];
            if (STnext >= osrNumberOfScheduleTables)
            {
               /* no nexted ST */
               COVER(0x03E3)
               osResetCurrentEP(STcurrent);
            }
            else
            {
               /* there is a nexted ST, switch to it */
               COVER(0x03E4)
               osSTSwitchTo(STcurrent, STnext);
               STcurrent = STnext;
               TIPid = osConvertST2TIP(STcurrent);
            }
            break;
            
         case osdSTReact_Stop       :  
            /* this is the end of the period of a non-sync or smooth sync table (distance to next EP is 0)
               if something is nexted, switch to it. Else: stop. */
            STnext = osSTNextTable[STcurrent];
            if (STnext >= osrNumberOfScheduleTables)
            {
               /* no nexted ST */
               COVER(0x03E5)
               osSTState[STcurrent] = SCHEDULETABLE_STOPPED;
               return;
            }
            else
            {
               /* there is a nexted ST, switch to it */
               COVER(0x03E6)
               osSTSwitchTo(STcurrent, STnext);
               STcurrent = STnext;
               TIPid = osConvertST2TIP(STcurrent);
            }
            break;
         default:
            /* No COVER token required here: this default case defends against a fatal internal error only */
            osSysErrAssertFailed(osdErrWSUnknownReaction)
            /* MISRA RULE 14.1 VIOLATION: return is never reached because osSysErrAssertFailed
             * never returns (3201)
             */
            return; /* PRQA S 3201 */
      } /* switch (react) */
      COVER(0x03E7)
      IFCOVER(distToNextEP == 0,0x045C,0x045D)
   } while (distToNextEP == 0); /* Repeat if two EP are on top of each other (start/stop of a ST) */
            
   COVER(0x03E8)
   /* Now, insert the next EP into the heap */
   osAddToTargetTIPTime(TIPid, distToNextEP, oskCounterOfST[STcurrent])
   osInsertMinHeap(TIPid, &oskAlarmHeaps[oskCounterOfST[STcurrent]], oskCounterOfST[STcurrent]);
   
}

#endif /* #if (osdNumberOfScheduleTables > 0) */




/*-+--------------------------------------------------------------------------
 / StartScheduleTableRel
 / =====================
 /
 / Syntax: 
 /    StatusType StartScheduleTableRel(
 /                                      ScheduleTableType ScheduleTableID, 
 /                                      TickType Offset
 /                                    )
 / Parameter (In):
 /   ScheduleTableType ScheduleTableID
 /   TickType Offset
 / Parameter (Out):
 /   none
 / Description:
 /   If its input parameters are valid, StartScheduleTableRel() starts the
 /   processing of a schedule table <ScheduleTableID> at its first expiry point
 /   after offset <Offset> ticks have elapsed.
 / Return value (depends on OIL-Attribute STATUS):
 /    STANDARD:
 /       - No error, E_OK
 /       - Schedule table <ScheduleTableID> is in any other state than 
 /         SCHEDULETABLE_STOPPED, E_OS_STATE
 /    EXTENDED: 
 /       - <ScheduleTableID> not valid, or schedule table is implicitely 
           synchronized E_OS_ID
 /       - <Offset> too big or zero, E_OS_VALUE
 /       - The service has been called with interrupts disabled, 
 /         E_OS_DISABLEDINT
 / Scalability Classes:
 /    SC1, SC2, SC3, SC4
 /--------------------------------------------------------------------------*/
/* fullfills [SR:191] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/*
 * MISRA RULE 14.1 VIOLATION: The function osStartScheduleTableRel is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osStartScheduleTableRel(ScheduleTableType ScheduleTableID, TickType Offset) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osStartScheduleTableRel */
   TickType HWnow;
   OS_SR_ENTRY()
   COVER(0x03E9)

   COVER(0x03EA)
   /* check call context */
   if ((osdValidCtx_StartScheduleTableRel & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x03EB)
      osAPIError(E_OS_CALLEVEL, osdErrSRCallContext);
      OS_SR_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x03EC)

   if (ScheduleTableID >= osrNumberOfScheduleTables)
   {
      /* fullfills [SR:187] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x03ED)
      osAPIError(E_OS_ID, osdErrSRWrongID);
      OS_SR_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x03EE)

   /* check access rights for this object */
   if (((oskApplScheduleTableAccess[ScheduleTableID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x03EF)
      osAPIError(E_OS_ACCESS, osdErrSRNoAccess);
      OS_SR_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x03F0)

   if (Offset == 0)
   {
      /* fullfills [SR:188] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x03F1)
      osAPIError(E_OS_VALUE, osdErrSRZeroOffset);
      OS_SR_EXIT()
      return E_OS_VALUE;
   }
   ELSEWITHCOVER(0x03F2)
   /* check against MAXALLOWEDVALUE */

   /* fullfills [SR:189] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
   if (Offset > (TickType)(oskCounterMaxAllowedValue[oskCounterOfST[ScheduleTableID]]-
                           oskScheduleTableInitialOffset[ScheduleTableID])) 
   {
      COVER(0x03F3)
      osAPIError(E_OS_VALUE, osdErrSROffsetTooBig);
      OS_SR_EXIT()
      return E_OS_VALUE;
   }
   ELSEWITHCOVER(0x03F4)
   
   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x03F5)
      osAPIError(E_OS_DISABLEDINT, osdErrSRIntAPIDisabled);
      OS_SR_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x03F6)

   COVER(0x03F7)
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_SR_START_CRITICAL()


   HWnow = osGetCurrentTime(oskCounterOfST[ScheduleTableID]);


   if (osSTState[ScheduleTableID] != SCHEDULETABLE_STOPPED)
   {
      /* fullfills [SR:190] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x03F8)
         osSaveStartScheduleTableRel_ScheduleTableID(ScheduleTableID)
         osSaveStartScheduleTableRel_Offset(Offset)
      osAPIError(E_OS_STATE, osdErrSRAlreadyRunningOrNext);
      OS_SR_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_SR_EXIT()
      return E_OS_STATE;
   }
   ELSEWITHCOVER(0x03F9)
   
   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */


   osSTState[ScheduleTableID] = SCHEDULETABLE_RUNNING;



   COVER(0x03FA)
   /* Calculate the local start time */
   /* fullfills [SR:018] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
   /* fullfills [SR:041] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
   /* initial offset needs no consideration as we have a fake expiry point at zero if there is no user expiry point */
   osResetCurrentEP(ScheduleTableID);
   /* Set ST time */
   osSetSTTime(ScheduleTableID, ((1 + oskSTMaxAllowed[ScheduleTableID]) - Offset) )
   osSetTimeOfLastUpdate(ScheduleTableID, HWnow);
   /* Insert into heap */
   osSetTargetTIPTime(osConvertST2TIP(ScheduleTableID), HWnow);
   osAddToTargetTIPTime(osConvertST2TIP(ScheduleTableID), Offset, oskCounterOfST[ScheduleTableID])
   osInsertMinHeap(osConvertST2TIP(ScheduleTableID), &oskAlarmHeaps[oskCounterOfST[ScheduleTableID]], oskCounterOfST[ScheduleTableID]);
   COVER(0x03FB)

   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   
   
   OS_SR_END_CRITICAL()
   OS_SR_EXIT()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */

   return E_OK;
}
/*-+--------------------------------------------------------------------------
 / StartScheduleTableAbs
 / =====================
 /
 / Syntax: 
 /    StatusType StartScheduleTableAbs(
 /                                      ScheduleTableType ScheduleTableID, 
 /                                      TickType Tickvalue
 /                                    )
 / Parameter (In):
 /   ScheduleTableType ScheduleTableID
 /   TickType Tickvalue
 / Parameter (Out):
 /   none
 / Description:
 /   If its input parameters are valid, StartScheduleTableAbs() starts the
 /   processing of a schedule table <ScheduleTableID> at its first expiry point
 /   when the underlaying counter reaches the value <Tickvalue>.
 / Return value (depends on OIL-Attribute STATUS):
 /    STANDARD:
 /       - No error, E_OK
 /       - Schedule table <ScheduleTableID> is in any other state than 
 /         SCHEDULETABLE_STOPPED, E_OS_STATE
 /    EXTENDED: 
 /       - <ScheduleTableID> not valid, E_OS_ID
 /       - <Tickvalue> too big, E_OS_VALUE
 /       - The service has been called with interrupts disabled, 
 /         E_OS_DISABLEDINT
 / Scalability Classes:
 /    SC1, SC2, SC3, SC4
 /--------------------------------------------------------------------------*/
/* fullfills [SR:196] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/*
 * MISRA RULE 14.1 VIOLATION: The function osStartScheduleTableAbs is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osStartScheduleTableAbs(ScheduleTableType ScheduleTableID, TickType Tickvalue) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osStartScheduleTableAbs */
   TickType now;     /* hardware timer value, or internal counter value */
   TickType delta;   /* internally calculated difference between current time and desired expiry */
   TickType target;  /* internally calculated expiry target */
   OS_SS_ENTRY()
   COVER(0x03FC)

   COVER(0x03FD)
   /* check call context */
   if ((osdValidCtx_StartScheduleTableAbs & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x03FE)
      osAPIError(E_OS_CALLEVEL, osdErrSSCallContext);
      OS_SS_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x03FF)

   if (ScheduleTableID >= osrNumberOfScheduleTables)
   {
      COVER(0x0400)
      osAPIError(E_OS_ID, osdErrSSWrongID);
      OS_SS_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x0401)
   /* check access rights for this object */
   if (((oskApplScheduleTableAccess[ScheduleTableID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x0402)
      osAPIError(E_OS_ACCESS, osdErrSSNoAccess);
      OS_SS_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0403)

   /* check against MAXALLOWEDVALUE */
   if (Tickvalue > oskCounterMaxAllowedValue[oskCounterOfST[ScheduleTableID]]) 
   {
      /* fullfills [SR:194] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x0404)
      osAPIError(E_OS_VALUE, osdErrSSTickvalueTooBig);
      OS_SS_EXIT()
      return E_OS_VALUE;
   }
   ELSEWITHCOVER(0x0405)

   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0406)
      osAPIError(E_OS_DISABLEDINT, osdErrSSIntAPIDisabled);
      OS_SS_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0407)
   
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_SS_START_CRITICAL()


   if (osSTState[ScheduleTableID] != SCHEDULETABLE_STOPPED)
   {
      /* fullfills [SR:195] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x0408)
      osAPIError(E_OS_STATE, osdErrSSAlreadyRunningOrNext);
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_SS_EXIT()
      return E_OS_STATE;
   }
   ELSEWITHCOVER(0x0409)
  
   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   COVER(0x040A)

      COVER(0x040B)
      osSTState[ScheduleTableID] = SCHEDULETABLE_RUNNING;


   osResetCurrentEP(ScheduleTableID);
   COVER(0x040C)
   now = osGetCurrentTime(oskCounterOfST[ScheduleTableID]);
   osSetTimeOfLastUpdate(ScheduleTableID, now);

   target = osCalculateAbsTimes(oskCounterOfST[ScheduleTableID], Tickvalue, now, &delta);
   
   /* Set ST time */
   /* Note: this calculation may overflow if the user has given a Tickvalue more than oskSTMaxAllowed[ScheduleTableID] ahead of the current counter value. */
   /* Probably this needs more consideration for Polyspace checks... */
   osSetSTTime(ScheduleTableID, (oskSTMaxAllowed[ScheduleTableID] - delta) + 1)
   /* Insert into heap */
   osSetTargetTIPTime(osConvertST2TIP(ScheduleTableID), target);
   osInsertMinHeap(osConvertST2TIP(ScheduleTableID), &oskAlarmHeaps[oskCounterOfST[ScheduleTableID]], oskCounterOfST[ScheduleTableID]);
   COVER(0x040D)

   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */

   OS_SS_END_CRITICAL()
   OS_SS_EXIT()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */

   return E_OK;
}


/*-+--------------------------------------------------------------------------
 / StopScheduleTable
 / =================
 /
 / Syntax: 
 /    StatusType StopScheduleTable(ScheduleTableType ScheduleTableID)
 / Parameter (In):
 /   ScheduleTableType ScheduleTableID
 / Parameter (Out):
 /   none
 / Description:
 /   If its input parameter is valid, StopScheduleTable() stops the schedule 
 /   table <ScheduleTableID> from processing any further expiry points.
 / Return value (depends on OIL-Attribute STATUS):
 /    STANDARD:
 /       - No error, E_OK
 /       - Schedule table <ScheduleTableID> is in the state 
 /         SCHEDULETABLE_STOPPED or SCHEDULETABLE_NEXT, E_OS_NOFUNC
 /    EXTENDED: 
 /       - <ScheduleTableID> not valid, E_OS_ID
 /       - The service has been called with interrupts disabled, 
 /         E_OS_DISABLEDINT
 / Scalability Classes:
 /    SC1, SC2, SC3, SC4
 /--------------------------------------------------------------------------*/
/* fullfills [SR:019] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/* fullfills [SR:199] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/*
 * MISRA RULE 14.1 VIOLATION: The function osStopScheduleTable is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osStopScheduleTable(ScheduleTableType ScheduleTableID) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osStopScheduleTable */
   osHeapRefType h;
   CounterType ctr;
   OS_SP_ENTRY()
   COVER(0x040E)

   COVER(0x040F)
   /* check call context */
   if ((osdValidCtx_StopScheduleTable & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0410)
      osAPIError(E_OS_CALLEVEL, osdErrSPCallContext);
      OS_SP_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x0411)

   if (ScheduleTableID >= osrNumberOfScheduleTables)
   {
      /* fullfills [SR:197] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x0412)
      osAPIError(E_OS_ID, osdErrSPWrongID);
      OS_SP_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x0413)
   /* check access rights for this object */
   if (((oskApplScheduleTableAccess[ScheduleTableID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x0414)
      osAPIError(E_OS_ACCESS, osdErrSPNoAccess);
      OS_SP_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0415)

   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0416)
      osAPIError(E_OS_DISABLEDINT, osdErrSPIntAPIDisabled);
      OS_SP_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0417)
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_SP_START_CRITICAL()


   IF2ORCOVER( (osSTState[ScheduleTableID] == SCHEDULETABLE_STOPPED) , (osSTState[ScheduleTableID] == SCHEDULETABLE_NEXT),0x0469,0x046A,0x046B)
   if (
       (osSTState[ScheduleTableID] == SCHEDULETABLE_STOPPED) ||
       (osSTState[ScheduleTableID] == SCHEDULETABLE_NEXT)
      )
   {
      /* fullfills [SR:198] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x0418)
      osAPIError(E_OS_NOFUNC, osdErrSPNotRunning);
      COVER(0x0419)
      OS_SP_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_SP_EXIT()
      return E_OS_NOFUNC;
   }
   ELSEWITHCOVER(0x041A)
   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   ctr = oskCounterOfST[ScheduleTableID];
   h = &oskAlarmHeaps[ctr];
   {
      ScheduleTableType nextedTable;
      nextedTable = osSTNextTable[ScheduleTableID];
      /* Is there already a schedule table planned for next? */
      if (nextedTable < osrNumberOfScheduleTables)
      {
         COVER(0x041B)
         /* Yes: set its state back to not started */
         osSTState[nextedTable] = SCHEDULETABLE_STOPPED;
      }
      ELSEWITHCOVER(0x041C)
   }

   osSTNextTable[ScheduleTableID] = INVALID_SCHEDULETABLE;
   osSTState[ScheduleTableID] = SCHEDULETABLE_STOPPED;

   COVER(0x041D)
   #if (osdUseHighResolutionTimer)
   if (osdTRUE == osdIsHiResCounter(ctr))
   {
      COVER(0x041E)
      switch (osRemoveItemMinHeap(osConvertST2TIP(ScheduleTableID), h, ctr))
      {
         case osdHeapMinItemUnchanged: /* Min item did not change, nothing to do */
            COVER(0x041F)
            break;
         case osdHeapMinItemChanged: /* Min item did change, reprogram */
            COVER(0x0420)
            (void)osSetTimerInterruptPoint(ctr, osAlarmTime[osGetFirstAlarm(h)]);
            break;
         case osdHeapLastItemRemoved: /* Heap is empty now, stop interrupt */
            COVER(0x0421)
            osClearTimerInterruptPoint(ctr);
            break;
         default: /* Impossible case, just for Misra compatibility */
            COVER(0x0422)
            osSysErrAssertFailed(osdErrSPUnknownCase)
            /* MISRA RULE 14.1 VIOLATION: break is never reached because osSysErrAssertFailed
             * never returns (3201)
             */
            break; /* PRQA S 3201 */
      }
   }
   else
   {
   #endif /* #if (osdUseHighResolutionTimer) */
   #if (osdNumberOfSWAndSRCounters > 0)
      COVER(0x0423)
      (void)osRemoveItemMinHeap(osConvertST2TIP(ScheduleTableID), h, ctr);
   #endif /* (osdNumberOfSWAndSRCounters > 0) */
   #if (osdUseHighResolutionTimer)
   }
   #endif /* #if (osdUseHighResolutionTimer) */
   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_SP_END_CRITICAL()
   OS_SP_EXIT()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */

   return E_OK;
}




/*-+--------------------------------------------------------------------------
 / NextScheduleTable
 / ===================
 /
 / Syntax: 
 /   StatusType NextScheduleTable( 
 /                                 ScheduleTableType ScheduleTableID_current,
 /                                 ScheduleTableType ScheduleTableID_next 
 /                               )
 / Parameter (In):
 /   ScheduleTableType ScheduleTableID_current,
 /   ScheduleTableType ScheduleTableID_next 
 / Parameter (Out):
 /   none
 / Description:
 /   Start the schedule table <ScheduleTableID_next> after 
 /   <ScheduleTableID_current> reaches its period/length. In case, an other 
 /   schedule table is already configured to be started after 
 /   <ScheduleTableID_current> reaches its period/length, that other schedule
 /   table is replaced by <ScheduleTableID_next>.
 / Return value (depends on OIL-Attribute STATUS):
 /    STANDARD:
 /       - No error, E_OK
 /       - The schedule table <ScheduleTableID_current> is in the state
 /         SCHEDULETABLE_STOPPED, E_OS_NOFUNC
 /       - The schedule table <ScheduleTableID_current> is in the state
 /         SCHEDULETABLE_NEXT, E_OS_NOFUNC
 /       - Schedule table <ScheduleTableID_next> is in any other state than
 /         SCHEDULETABLE_STOPPED, E_OS_STATE
 /    EXTENDED: 
 /       - <ScheduleTableID_current> not valid, E_OS_ID
 /       - <ScheduleTableID_nest> not valid, E_OS_ID
 /       - The service has been called with interrupts disabled, 
 /         E_OS_DISABLEDINT
 / Scalability Classes:
 /    SC1, SC2, SC3, SC4
 /--------------------------------------------------------------------------*/
/* fullfills [SR:020] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/* fullfills [SR:204] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/*
 * MISRA RULE 14.1 VIOLATION: The function osNextScheduleTable is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osNextScheduleTable(ScheduleTableType ScheduleTableID_current, ScheduleTableType ScheduleTableID_next) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osNextScheduleTable */
   OS_SN_ENTRY()
   COVER(0x0424)

   COVER(0x0425)
   /* check call context */
   if ((osdValidCtx_NextScheduleTable & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0426)
      osAPIError(E_OS_CALLEVEL, osdErrSNCallContext);
      OS_SN_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x0427)

   if (ScheduleTableID_current >= osrNumberOfScheduleTables)
   {
      /* fullfills [SR:200] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x0428)
      osAPIError(E_OS_ID, osdErrSNWrongCurrentID);
      OS_SN_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x0429)
   if (ScheduleTableID_next >= osrNumberOfScheduleTables)
   {
      /* fullfills [SR:200] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x042A)
      osAPIError(E_OS_ID, osdErrSNWrongNextID);
      OS_SN_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x042B)
   /* check access rights for these objects */
   IF2ORCOVER( ((oskApplScheduleTableAccess[ScheduleTableID_current] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0)  , ((oskApplScheduleTableAccess[ScheduleTableID_next] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0),0x046C,0x046D,0x046E)
   if (    ((oskApplScheduleTableAccess[ScheduleTableID_current] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0) 
        || ((oskApplScheduleTableAccess[ScheduleTableID_next] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0)
      )
   {
      COVER(0x042C)
      osAPIError(E_OS_ACCESS, osdErrSNNoAccess);
      OS_SN_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x042D)

#if (osdNumberOfCounters > 1)
   if (oskCounterOfST[ScheduleTableID_next] != 
       oskCounterOfST[ScheduleTableID_current] )
   {
      /* fullfills [SR:201] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x042E)
      osAPIError(E_OS_ID, osdErrSNDifferentCounters);
      OS_SN_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x042F)
#endif

   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0430)
      osAPIError(E_OS_DISABLEDINT, osdErrSNIntAPIDisabled);
      OS_SN_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0431)


   COVER(0x0432)
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_SN_START_CRITICAL()


   if (osSTState[ScheduleTableID_current] < SCHEDULETABLE_WAITING)
   {
      /* fullfills [SR:202] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x0433)
         osSaveNextScheduleTable_ScheduleTableID_current(ScheduleTableID_current)
         osSaveNextScheduleTable_ScheduleTableID_next(ScheduleTableID_next)
      osAPIError(E_OS_NOFUNC, osdErrSNNotRunning);
      COVER(0x0434)
      OS_SN_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_SN_EXIT()
      return E_OS_NOFUNC;
   }
   ELSEWITHCOVER(0x0435)

   if (osSTState[ScheduleTableID_next] != SCHEDULETABLE_STOPPED)
   {
      /* fullfills [SR:203] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x0436)
      osAPIError(E_OS_STATE, osdErrSNAlreadyRunningOrNext);
      COVER(0x0437)
      OS_SN_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_SN_EXIT()
      return E_OS_STATE;
   }
   ELSEWITHCOVER(0x0438)

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   {
      ScheduleTableType nextedTable;
      nextedTable = osSTNextTable[ScheduleTableID_current];
      /* Is there already a schedule table planned for next? */
      if (nextedTable < osrNumberOfScheduleTables)
      {
         COVER(0x0439)
         /* Yes: set its state back to not started */
         osSTState[nextedTable] = SCHEDULETABLE_STOPPED;
      }
      ELSEWITHCOVER(0x043A)
   }

   osSTNextTable[ScheduleTableID_current] = ScheduleTableID_next;
   osSTState[ScheduleTableID_next] = SCHEDULETABLE_NEXT;

   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_SN_END_CRITICAL()
   OS_SN_EXIT()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */

   return E_OK;
}
/*-+--------------------------------------------------------------------------
 / GetScheduleTableStatus
 / ======================
 /
 / Syntax: 
 /   StatusType osGetScheduleTableStatus(
 /                                  ScheduleTableType ScheduleTableID,
 /                                  ScheduleTableStatusRefType ScheduleStatus
 /                                      )
 / Parameter (In):
 /   ScheduleTableType ScheduleTableID,
 / Parameter (Out):
 /   ScheduleTableStatusRefType ScheduleStatus
 / Description:
 /   Returns the state of the schedule table <ScheduleTableID> via the 
 /   (out) parameter ScheduleTableStatusRefType.
 / Return value (depends on OIL-Attribute STATUS):
 /    STANDARD:
 /       - No error, E_OK
 /    EXTENDED: 
 /       - <ScheduleTableID> not valid, E_OS_ID
 /       - The service has been called with interrupts disabled, 
 /         E_OS_DISABLEDINT
 / Scalability Classes:
 /    SC1, SC2, SC3, SC4
 /--------------------------------------------------------------------------*/
/* fullfills [SR:021] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/*
 * MISRA RULE 14.1 VIOLATION: The function osGetScheduleTableStatus is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osGetScheduleTableStatus(ScheduleTableType ScheduleTableID, ScheduleTableStatusRefType ScheduleStatus) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetScheduleTableStatus */
   /* KB begin osekHWGetScheduleTableStatusLocalVars (overwritten) */
   /* KB end osekHWGetScheduleTableStatusLocalVars */
   OS_SG_ENTRY()
   COVER(0x043B)

   COVER(0x043C)
   /* check call context */
   if ((osdValidCtx_GetScheduleTableStatus & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x043D)
      osAPIError(E_OS_CALLEVEL, osdErrSGCallContext);
      OS_SG_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x043E)

   if (ScheduleTableID >= osrNumberOfScheduleTables)
   {
      /* fullfills [SR:225] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
      COVER(0x043F)
      osAPIError(E_OS_ID, osdErrSGWrongID);
      OS_SG_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x0440)
   /* check access rights for this object */
   if (((oskApplScheduleTableAccess[ScheduleTableID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x0441)
      osAPIError(E_OS_ACCESS, osdErrSGNoAccess);
      OS_SG_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0442)
   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0443)
      osAPIError(E_OS_DISABLEDINT, osdErrSGIntAPIDisabled);
      OS_SG_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0444)

   COVER(0x0445)
   /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
   osSaveDisableLevelNested();
   /* KB end osekHWosSaveDisableLevelNested */
   OS_SG_START_CRITICAL()


   /* fullfills [SR:220] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
   /* fullfills [SR:221] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
   COVER(0x0446)
   /* KB begin osekHWGetScheduleTableStatusParamWrite (overwritten) */
   *ScheduleStatus = osSTState[ScheduleTableID];
   /* KB end osekHWGetScheduleTableStatusParamWrite */

   OS_SG_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
   osRestoreEnableLevelNested();
   /* KB end osekHWosRestoreEnableLevelNested */

   OS_SG_EXIT()
   return E_OK;
}


/*-+--------------------------------------------------------------------------
 / osInitScheduleTables
 /
 / Funktion:
 /   Initializes the variables, used for schedule tables.
 / Context:
 /   Interrupts have to be disabled up to the system level at least.
 / Parameter:
 /   none
 / Returnvalue:
 /   none
 /--------------------------------------------------------------------------*/

osqFunc1 void osqFunc2 osInitScheduleTables(void)
{
   /* CovComment 4:  Function: osInitScheduleTables */
   ScheduleTableType stID;
   TickType HWnow;
   #if (osdUseHighResolutionTimer)    
   CounterType ctr;
   #endif
   COVER(0x0447)

   for (stID = osrNumberOfAlarms; stID < (osrNumberOfAlarms + osrNumberOfScheduleTables); stID++)
   {
      osAlarmTime[stID] = 0;
      IFCOVER( (stID+1) < (osrNumberOfAlarms + osrNumberOfScheduleTables),0x045E,0x045F)
   }
   
   /* loop through all schedule tables */
   for (stID = 0; stID < osrNumberOfScheduleTables; stID++)
   {
      COVER(0x0448)
         if ((oskScheduleTableAutoStart[stID] & osActiveAppMode) == 0)
         {
            /* No Autostart */
            osSTNextTable[stID]     = INVALID_SCHEDULETABLE;
            osSTState[stID]         = SCHEDULETABLE_STOPPED;
            COVER(0x0449)
         }
         else if (oskScheduleTableAutoStartType[stID] == osdScheduleTableAutostartRELATIVE)
         {
            /* Relative Autostart */
            osSTNextTable[stID]     = INVALID_SCHEDULETABLE;
            osSTState[stID]         = SCHEDULETABLE_RUNNING;
            osResetCurrentEP(stID);
            COVER(0x044A)
            /* Set ST time */
            osSetSTTime(stID, (1 + oskSTMaxAllowed[stID]) - oskAutostartScheduleTableOffset[stID] )
            HWnow = osGetCurrentTime(oskCounterOfST[stID]);
            osSetTimeOfLastUpdate(stID, HWnow); /* PRQA S 3682 */
            /* Insert into heap */
            osSetTargetTIPTime(osConvertST2TIP(stID), HWnow);
            osAddToTargetTIPTime(osConvertST2TIP(stID), oskAutostartScheduleTableOffset[stID], oskCounterOfST[stID])
            osInsertMinHeap(osConvertST2TIP(stID), &oskAlarmHeaps[oskCounterOfST[stID]], oskCounterOfST[stID]);
            COVER(0x044B)
         }
         else if (oskScheduleTableAutoStartType[stID] == osdScheduleTableAutostartABSOLUT)  
         {
            TickType target;
            TickType delta;
            /* Absolute Autostart */
            osSTNextTable[stID]     = INVALID_SCHEDULETABLE;
            osSTState[stID]         = SCHEDULETABLE_RUNNING;
            osResetCurrentEP(stID);
            COVER(0x044C)
            HWnow = osGetCurrentTime(oskCounterOfST[stID]);
            target = osCalculateAbsTimes(oskCounterOfST[stID], oskAutostartScheduleTableOffset[stID], HWnow, &delta);
               /* Set ST time */
            osSetSTTime(stID, (1 + oskSTMaxAllowed[stID]) - delta)
            osSetTimeOfLastUpdate(stID, 0); /* PRQA S 3682 */
            /* Insert into heap */
            osSetTargetTIPTime(osConvertST2TIP(stID), target);
            osInsertMinHeap(osConvertST2TIP(stID), &oskAlarmHeaps[oskCounterOfST[stID]], oskCounterOfST[stID]);
            COVER(0x044D)
         }
         else
         /* polyspace<RTE:UNR:Not a defect:No action planned> This else is only here for MISRA, Rule 60. Intentionally left blank. */
         {
            /* This else is only here for MISRA, Rule 60. Intentionally left blank. */
            osSysErrAssertFailed(osdErrSTInvalidSTCfg)
         }
      IFCOVER( (stID+1) < osrNumberOfScheduleTables,0x0460,0x0461)
   } /* for (stID = 0; stID < osrNumberOfScheduleTables; stID++) (all schedule tables) */
   
   
#if (osdUseHighResolutionTimer)      
   /* Now, actually autostart scheduletables (and alarms) */
   IFCOVER( (CounterType)0 >= osdNumberOfCounters,0x0462,0x0463)
   for(ctr = (CounterType)0; ctr < osdNumberOfCounters; ctr++)
   {
      osHeapRefType h;
      h = &oskAlarmHeaps[ctr];
#if (osdNumberOfSWAndSRCounters < osdNumberOfCounters)      
      if (osdTRUE == osdIsHiResCounter(ctr))
#endif
      {
         /* Interrupts only need to be programmed for HiRes timer(s) */
         if (osGetActiveAlarmCount(h) > 0)
         {
            (void)osSetTimerInterruptPoint(ctr, osAlarmTime[osGetFirstAlarm(h)]);
            COVER(0x044E)
         }
         ELSEWITHCOVER(0x044F)
      }
      ELSEWITHCOVER(0x0450)
      IFCOVER( (ctr+1) < osdNumberOfCounters,0x0464,0x0465)
   } /* for(ctr = (CounterType)0; ctr < osdNumberOfCounters; ctr++) */
#endif      
   COVER(0x0451)
}


 






/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */

/* END OF MODULE atostime.c */

