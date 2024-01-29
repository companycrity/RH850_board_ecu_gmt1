/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osektime.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.61
|
|  Description: osek timer handling
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH        All rights reserved.
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

/* CovComment 0:  file: osektime.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */

#if (osdNumberOfAlarms + osdNumberOfScheduleTables > 0)



/*-+--------------------------------------------------------------------------
 / osClimbUpMinHeap
 / Funktion:
 /   - move last element up to correct position
 / Context:
 /   Interrupts are disabled up to the system level at least.
 /   This function is meant to be OS internal.
 / Parameter:
 / Returnvalue:
 /--------------------------------------------------------------------------*/

static osqFunc1 void osqFunc2 osClimbUpMinHeap(osAlarmIndexType i, osHeapType const * const h, CounterType ctr);
static osqFunc1 void osqFunc2 osClimbUpMinHeap(osAlarmIndexType i, osHeapType const * const h, CounterType ctr)
{
   /* CovComment 4:  Function: osClimbUpMinHeap */
   osHeapElementType hItem;
   osAlarmIndexType iPreIdx;

   COVER(0x0346)
   hItem = h->heap[i];  /* copy (last) item */
   IFCOVER(i!=0,0x03B0,0x03B1)
   while (i != 0)
   {
      COVER(0x0347)
      /* calculate index of predecessor */
      iPreIdx = (osAlarmIndexType)(((osAlarmIndexType)(i-1)) >> 1U);

      IFCOVER(osGetHeapTime(hItem) <= oskCounterHalfrange[ctr],0x03B2,0x03B3)
      if(osdCounterCompareGe(osGetHeapTime(hItem), osGetHeapTime(h->heap[iPreIdx]), oskCounterHalfrange[ctr]))
      {
         COVER(0x0348)
         break;   /* correct position found */
      }
      ELSEWITHCOVER(0x0349)

      /* swap items */
      h->heap[i] = h->heap[iPreIdx];
      i = iPreIdx;
      COVER(0x034A)
      IFCOVER(i != 0,0x03B4,0x03B5)
   }
   h->heap[i] = hItem;   /* insert at correct position */
   COVER(0x034B)
}


/*-+--------------------------------------------------------------------------
 / osClimbDownMinHeap
 / Funktion:
 /   - move element i down to correct position
 / Context:
 /   Interrupts are disabled up to the system level at least.
 /   This function is meant to be OS internal.
 / Parameter:     i = element index
 / Returnvalue:
 /--------------------------------------------------------------------------*/

static osqFunc1 void osqFunc2 osClimbDownMinHeap(osAlarmIndexType i, osHeapType const * const h, CounterType ctr);
static osqFunc1 void osqFunc2 osClimbDownMinHeap(osAlarmIndexType i, osHeapType const * const h, CounterType ctr)
{
   /* CovComment 4:  Function: osClimbDownMinHeap */
   osHeapElementType hItem;
   osAlarmIndexType iPostIdx;
   COVER(0x034C)
   iPostIdx = (osAlarmIndexType)(((osAlarmIndexType)2*i) + (osAlarmIndexType)1);/*lint !e734*/
   /*
    * Info 734 Loss of precision (assignment)
    * The number of alarms is checked to be less than 2^(sizeof(osAlarmIndexType)-1).
    * So no overflow can occur here.
    */
   hItem = h->heap[i];  /* copy root item */

   osSysErrAssert(hItem < (osrNumberOfAlarms + osrNumberOfScheduleTables), osdErrWAWrongIDonHeap)

   IFCOVER(iPostIdx < (*h->count),0x03B6,0x03B7)
   while (iPostIdx < (*h->count))
   {
      COVER(0x034D)
      /* MISRA RULE 21.1 not violated: (3 times) QAC may state that the array h->heap is definitely (3685) or 
       * appropriately (3689) indexed with an out or bounds value. However, QAC cannot see that this is prevented 
       * by the comparison of iPostIdx with *h->count above. The variable *h->count is in the range 
       * of 0..NumberOfAlarms while h->heap has size NumberOfAlarms+1. */
      IFCOVER(osGetHeapTime(h->heap[iPostIdx]) <= oskCounterHalfrange[ctr],0x03B8,0x03B9)
      if(osdCounterCompareGt(osGetHeapTime(h->heap[iPostIdx]), osGetHeapTime(h->heap[iPostIdx+1]), oskCounterHalfrange[ctr])) /* PRQA S 3685 */
      {
         COVER(0x034E)
         iPostIdx++;   /* set iPostIdx to smaller successor */

      }
      ELSEWITHCOVER(0x034F)

      IFCOVER(osGetHeapTime(h->heap[iPostIdx]) <= oskCounterHalfrange[ctr],0x03BA,0x03BB)
      if(osdCounterCompareGe(osGetHeapTime(h->heap[iPostIdx]), osGetHeapTime(hItem), oskCounterHalfrange[ctr])) /* PRQA S 3689 */
      {
         COVER(0x0350)
         break;        /* correct position found */

      }
      ELSEWITHCOVER(0x0351)

      h->heap[i] = h->heap[iPostIdx]; /* PRQA S 3689 */
      i = iPostIdx;
      iPostIdx = (osAlarmIndexType)(((osAlarmIndexType)2*i) + (osAlarmIndexType)1);/*lint !e734, same arguments as above*/
      IFCOVER(iPostIdx >= (*h->count),0x03BC,0x03BD)
   }
   COVER(0x0352)
   h->heap[i] = hItem;
   IFCOVER(iPostIdx < (*h->count),0x03BE,0x03BF)
}


/*-+--------------------------------------------------------------------------
 / osInsertMinHeapStd
 / Funktion:
 /   - insert new item
 / Context:
 /   Interrupts are disabled up to the system level at least.
 /   This function is meant to be OS internal.
 / Parameter:     newItem = item to insert
 / Returnvalue:
 /--------------------------------------------------------------------------*/

/* MISRA RULE 8.10 VIOLATION: Depending on the configuration the function osInsertMinHeap is called by several modules
 * or only by this module. A static implementation in these cases would increase code complexity, too much.
 */
osqFunc1 void osqFunc2 osInsertMinHeapStd(osHeapElementType newItem, osHeapType const * const h, CounterType ctr) /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osInsertMinHeap */
   osAlarmIndexType endOfHeap = *h->count;

   osSysErrAssert(endOfHeap < (oskAlarmHeapSize[ctr] - 1), osdErrWAHeapOverflow)
   osSysErrAssert(newItem < (osdNumberOfAlarms + osdNumberOfScheduleTables), osdErrWAWrongIDonHeap)

   h->heap[endOfHeap] = newItem;  /* insert new item at last position */
   (*h->count)++;
   osClimbUpMinHeap(endOfHeap, h, ctr);  /* climb up until correct position reached */
   COVER(0x0353)
}

#if (osdUseHighResolutionTimer != 0)
/*-+--------------------------------------------------------------------------
 / osInsertMinHeapHiRes
 / Funktion:
 /   - insert new item with optionally reprogramming the timer
 / Parameter:     newItem = item to insert
 / Returnvalue:   -
 /--------------------------------------------------------------------------*/

 /* MISRA RULE 14.1 VIOLATION: The function osInsertMinHeapHiRes might not be 
 *  called in some configurations. Conditional compiling of the function 
 *  would increase the code complexity to unacceptable level (1503).
 */
osqFunc1 void osqFunc2 osInsertMinHeapHiRes(osHeapElementType newItem, osHeapType const * const h, CounterType ctr) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osInsertMinHeapHiRes */

   osAlarmIndexType endOfHeap = *h->count;
   osSysErrAssert(endOfHeap < (oskAlarmHeapSize[ctr] - 1), osdErrWAHeapOverflow)
   osSysErrAssert(newItem < (osdNumberOfAlarms + osdNumberOfScheduleTables), osdErrWAWrongIDonHeap)

   h->heap[*h->count] = newItem;  /* insert new item at last position */
   (*h->count)++;
   osClimbUpMinHeap((osAlarmIndexType)((*h->count)-1), h, ctr);  /* climb up until correct position reached */
   if (h->heap[0] == newItem)       /* is the new item the one that will become due next? */
   {
      (void)osSetTimerInterruptPoint(ctr, osAlarmTime[newItem]);
      COVER(0x0354)
   }
   ELSEWITHCOVER(0x0355)
}
#endif


/*-+--------------------------------------------------------------------------
 / osRemoveMinItemMinHeap
 / Funktion:
 /   - get minimum item and remove item from heap
 / Context:
 /   Interrupts are disabled up to the system level at least.
 /   This function is meant to be OS internal.
 / Parameter:
 / Returnvalue: index of minimum item
 /--------------------------------------------------------------------------*/

static osqFunc1 osHeapElementType osqFunc2 osRemoveMinItemMinHeap(osHeapType const * const h, CounterType ctr);
static osqFunc1 osHeapElementType osqFunc2 osRemoveMinItemMinHeap(osHeapType const * const h, CounterType ctr)
{
   /* CovComment 4:  Function: osRemoveMinItemMinHeap */
   osHeapElementType hItem;

   hItem = h->heap[0];   /* copy first = minimum item */
   (*h->count)--;
   h->heap[0] = h->heap[*h->count];   /* move last element to first position */
   osClimbDownMinHeap(0, h, ctr);   /* climb down until correct position reached */
   COVER(0x0356)
   return hItem;
}

/*-+--------------------------------------------------------------------------
 / osRemoveItemMinHeap
 / Funktion:
 /   - find and remove Item
 / Context:
 /   Interrupts are disabled up to the system level at least.
 /   This function is meant to be OS internal.
 / Parameter:    aItem   = Item to remove
 / Returnvalue:   osdHeapItemNotFound     = Item not found
 /                osdHeapMinItemUnchanged = Min Item did not change (in non-HiRes Systems,
 /                                          it is only relevant whether or not we found something
 /                                          at all. So we use this return value by default)
 /                osdHeapMinItemChanged   = Min Item did change (call osSetTimerInterruptPoint)
 /                osdHeapLastItemRemoved  = Heap is empty now (call osClearTimerInterruptPoint)
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osRemoveItemMinHeap might not be 
 *  called in some configurations. Conditional compiling of the function 
 *  would increase the code complexity to unacceptable level (1503).
 */
osqFunc1 osuint8 osqFunc2 osRemoveItemMinHeap(osHeapElementType aItem, osHeapType const * const h, CounterType ctr) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osRemoveItemMinHeap */
   osAlarmIndexType iPreIdx;
   osAlarmIndexType i = 0;
   osAlarmIndexType endOfHeap = *h->count;

   osSysErrAssert(endOfHeap < oskAlarmHeapSize[ctr], osdErrWAHeapOverflow)

   COVER(0x0357)
   h->heap[endOfHeap] = aItem;
   /* now the following loop will always terminate without range control */

   IFCOVER(h->heap[i] != aItem,0x03C0,0x03C1)
   while(h->heap[i] != aItem)
   {
      i++;
      IFCOVER(h->heap[i] != aItem,0x03C2,0x03C3)
   }
  
   if (i >= endOfHeap)
   {
      COVER(0x0358)
      return osdHeapItemNotFound;/*heap item not found*/
   }
   ELSEWITHCOVER(0x0359)
   COVER(0x035A)
   (*h->count)--;
   endOfHeap = *h->count;
   h->heap[i] = h->heap[endOfHeap];  /* move last item to found item */
   if (i > 0) /* (if heap element has predecessor) check array boundaries */
   {
      COVER(0x035B)
      iPreIdx =  (osAlarmIndexType)(((osAlarmIndexType)(i-1)) >> 1U);

      IFCOVER(osGetHeapTime(h->heap[i]) <= oskCounterHalfrange[ctr],0x03C4,0x03C5)
      if(osdCounterCompareLt(osGetHeapTime(h->heap[i]), osGetHeapTime(h->heap[iPreIdx]), oskCounterHalfrange[ctr]))
      {
         (void) osClimbUpMinHeap(i, h, ctr);
         COVER(0x035C)
         return osdHeapMinItemUnchanged;
      }
      ELSEWITHCOVER(0x035D)
   }
#if (osdUseHighResolutionTimer != 0)
   else if(osdTRUE == osdIsHiResCounter(ctr))
   {
      if (endOfHeap == 0)
      {
         COVER(0x035E)
         return osdHeapLastItemRemoved; /*heap empty*/
      }
      ELSEWITHCOVER(0x035F)
      osClimbDownMinHeap(i, h, ctr); /* climb down until correct position reached */
      COVER(0x0360)
      return osdHeapMinItemChanged;/*minimum heap item changed*/
   }
#else
   ELSEWITHCOVER(0x0361)
#endif
   
   osClimbDownMinHeap(i, h, ctr);  /* climb down until correct position reached */
   COVER(0x0362)
   return osdHeapMinItemUnchanged;
}


/* TR:SPMF24:0007 Start */
/*-+--------------------------------------------------------------------------
 / osWorkHeap
 / Funktion:
 /   - Work all expired Alarms on a specific Heap
 / Context:
 /   Interrupts are enabled.
 /   This function is meant to be OS internal.
 / Parameter: Pointer to the Heap that shall be worked on.
 / Returnvalue:
 /--------------------------------------------------------------------------*/
/* MISRA RULE 8.10 VIOLATION: (2 times) The function osWorkHeap is general code for 
 * different platform specific OS implementations. Depending on the implementation,
 * the calling function might be located in the same file or be generated 
 * (i.e. in tcb.c). Making the function static for only some implementations would
 * increase code complexity too much. */
osqFunc1 void osqFunc2 osWorkHeap(osHeapType const * const h, CounterType counterID)   /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osWorkHeap */
   AlarmType alarmID;
   TickType currentTime;
#if (osdUseHighResolutionTimer == 1)
   osbool    clearTIP;
#endif

   COVER(0x0363)
   /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
   osSaveDisableLevelNested();
   /* KB end osekHWosSaveDisableLevelNested */
   OS_TI_START_CRITICAL()
#if (osdUseHighResolutionTimer == 1)
   clearTIP = osdTRUE; /* if the below while()-condition evaluates to FALSE, we have to
                          clear the HiRes Timer Interrupt */
#endif
   IFCOVER(osGetActiveAlarmCount(h) != 0,0x03C6,0x03C7)
   while (osGetActiveAlarmCount(h) != 0)
   {
      COVER(0x0364)
      alarmID = osGetFirstAlarm(h);
      osSysErrAssert(alarmID < (osdNumberOfAlarms + osdNumberOfScheduleTables), osdErrWAWrongIDonHeap)

      /* is timer expired? */
      currentTime = osGetCurrentTime(counterID);
      IFCOVER(currentTime <= oskCounterHalfrange[counterID],0x03C8,0x03C9)
      if(osdCounterCompareGe(currentTime, osAlarmTime[alarmID], oskCounterHalfrange[counterID]))
      {
         COVER(0x0365)
         (void)osRemoveMinItemMinHeap(h, counterID);  /* remove alarm */
         /* alarm has become due now: work actions */
         #if ((osdNumberOfAlarms > 0) && (osdNumberOfScheduleTables > 0))
         if (alarmID >= osdNumberOfAlarms)
         {
            COVER(0x0366)
         #endif
         #if (osdNumberOfScheduleTables > 0)
            osWorkScheduleTable(alarmID);
         #endif
         #if ((osdNumberOfAlarms > 0) && (osdNumberOfScheduleTables > 0))
         }
         else
         {
            COVER(0x0367)
         #endif
         #if (osdNumberOfAlarms > 0)
            osWorkAlarm(alarmID, h);
         #endif
         #if ((osdNumberOfAlarms > 0) && (osdNumberOfScheduleTables > 0))
         }
         #endif
      }
      else
      {
         COVER(0x0368)
#if (osdUseHighResolutionTimer == 1)
         COVER(0x0369)
         /* Not yet expired, program it */
         if (osdTRUE == osdIsHiResCounter(counterID))
         {
            COVER(0x036A)
            if (osSetTimerInterruptPoint(counterID, osAlarmTime[alarmID]) == osdTRUE)
            { /* Successfully programmed, end this routine */
               COVER(0x036B)
               clearTIP = osdFALSE; /* we just set a new HiRes Interrupt point, don't clear it again */
#endif
               break;
#if (osdUseHighResolutionTimer == 1)
            }
            ELSEWITHCOVER(0x036C)
         }
#if (osdNumberOfSWAndSRCounters > 0)
         else
         {
            COVER(0x036D)
            break;
         }
#endif /* (osdNumberOfSWAndSRCounters > 0) */
#endif /* (osdUseHighResolutionTimer == 1) */
      }
      COVER(0x036E)
      IFCOVER(osGetActiveAlarmCount(h) != 0,0x03CA,0x03CB)
   }/*while osGetActiveAlarmCount(h) != 0*/
#if (osdUseHighResolutionTimer == 1)
   /* Push the next interrupt far into the future if currently nothing depends on it */
   if (osdTRUE == osdIsHiResCounter(counterID))
   {
      COVER(0x036F)
      if (osdTRUE == clearTIP)
      {
         COVER(0x0370)
         osClearTimerInterruptPoint(counterID);
      }
      ELSEWITHCOVER(0x0371)
   }
   ELSEWITHCOVER(0x0372)
#endif

   OS_TI_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
   osRestoreEnableLevelNested();
   /* KB end osekHWosRestoreEnableLevelNested */
   COVER(0x0373)
} /* END OF osWorkHeap */
/* TR:SPMF24:0007 End */

#if (osdNumberOfAlarms > 0)
/*-+--------------------------------------------------------------------------
 / osWorkAlarm
 / Funktion:
 /   - Perform the action for exactly one expired Alarm.
 /   - If the alarm is cyclic, re-insert it into the Heap; mark as deactivated otherwise.
 /   - Perform the SetEvent, AlarmCallback, IncrementCounter or ActivateTask that is 
 /     configured for this Alarm.
 / Context:
 /   Interrupts are disabled on Level.
 /   This function is meant to be OS internal.
 / Parameter:
 /   - alarmID of the Alarm to be handled
 /   - Heap of the Counter to which the Alarm is attached (only used for re-insertion
 /     in case of a cyclic Alarm)
 / Returnvalue:
 /--------------------------------------------------------------------------*/
osqFunc1 void osqFunc2 osWorkAlarm(AlarmType alarmID, osHeapType const * const h)   /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osWorkAlarm */

   COVER(0x0374)
   if (osAlarmCycleTime[alarmID] != 0)
   {
      COVER(0x0375)
      /* cyclic alarm */
      if(((oskCounterInternalMaximumValue[oskAlarmCounterRef[alarmID]] - osAlarmTime[alarmID]) < osAlarmCycleTime[alarmID]) && (osAlarmTime[alarmID] > osdCounterOverflowRange(oskAlarmCounterRef[alarmID])))
      {
         COVER(0x0376)
         osAlarmTime[alarmID] = ((osAlarmTime[alarmID] - (oskCounterHalfrange[oskAlarmCounterRef[alarmID]] + 1)) + osAlarmCycleTime[alarmID]) - (oskCounterHalfrange[oskAlarmCounterRef[alarmID]] + 1);
      }
      else
      {
         COVER(0x0377)
         osAlarmTime[alarmID] = osAlarmTime[alarmID] + osAlarmCycleTime[alarmID];
      }
      osInsertMinHeap(alarmID, h, oskAlarmCounterRef[alarmID]);      /* reinsert  TR:SPMF20:0015 */ 
   }
   else
   {
      COVER(0x0378)
      osAlarmActivated[alarmID]= 0;
   }

   switch (oskAlarmAction[alarmID])
   {
#if (osdNumberOfAlarmSetEvent > 0)
      case osdAlarmActionSetEvent:
         /* event timer */
         COVER(0x0379)
         (void)osSysSetEvent(oskAlarmTask[alarmID], oskAlarmEvent[alarmID]);
         break;
#endif
#if (osdNumberOfAlarmIncrementCounter > 0)
      case osdAlarmActionIncrementCounter:
         {
            CounterType CounterID;
            CounterID = oskAlarmIncrementCounterID[alarmID];
            osSysErrAssert(CounterID < osdNumberOfSWCounters, osdErrWAWrongCounterID)
            COVER(0x037A)
            {
               COVER(0x037B)
               osSysIncrementCounter(CounterID);
            }

         }
         break;
#endif
#if (osdNumberOfAlarmActivateTask > 0)
      case osdAlarmActionActivateTask:
         COVER(0x037C)
         (void)osSysActivateTask(oskAlarmTask[alarmID]);
         break;
#endif
      default:
         osSysErrAssertFailed(osdErrWAUnknownAction)
         /* MISRA RULE 14.1 VIOLATION: break is never reached because osSysErrAssertFailed
          * never returns (3201)
          */
         break; /* PRQA S 3201 */
   }
   COVER(0x037D)
} /* END OF osWorkAlarm */
#endif /* #if (osdNumberOfAlarms > 0) */

#endif /* #if (osdNumberOfAlarms + osdNumberOfScheduleTables > 0) */

#if (osdNumberOfAlarms > 0)

/*-+--------------------------------------------------------------------------
 / osInitAlarms
 / Funktion:
 /   - prepares the RAM part of all alarms
 / Context:
 /   OS initialization.
 /   This function is meant to be OS internal.
 / Parameter:
 / Returnvalue:
 /--------------------------------------------------------------------------*/
/* TR:SPMF20:0014 Start */
osqFunc1 void osqFunc2 osInitAlarms(void)
{
   /* CovComment 4:  Function: osInitAlarms */
   osAlarmIndexType alarmID;
#if (osdNumberOfAlarmsOnHiResCounter > 0)
   CounterType CounterID;
   TickType now;
#endif

   COVER(0x037E)
   /* counters were already initialized (in StartOSc) */

   for (alarmID = 0; alarmID < osrNumberOfAlarms; alarmID++)
   {
#if (osdNumberOfAlarmsOnHiResCounter > 0)
     CounterID = oskAlarmCounterRef[alarmID];
     now = osGetCurrentTime(CounterID);
     COVER(0x037F)
#endif
         if ((oskAlarmAutoStart[alarmID] & osActiveAppMode) != 0)
         {
            COVER(0x0380)
#if (osdNumberOfAlarmsOnHiResCounter > 0)
         IF2ANDCOVER( osdIsHiResCounter(CounterID) , (oskAlarmAutoStartType[alarmID] == osdAlarmAutostartRELATIVE),0x03D6,0x03D7,0x03D8)
            if (osdIsHiResCounter(CounterID) && (oskAlarmAutoStartType[alarmID] == osdAlarmAutostartRELATIVE))
            {
               if(((oskCounterInternalMaximumValue[oskAlarmCounterRef[alarmID]] - now) < oskStaticAlarmTime[alarmID]) && (now > osdCounterOverflowRange(oskAlarmCounterRef[alarmID])))
               {
                  COVER(0x0381)
                  osAlarmTime[alarmID] = ((now - (oskCounterHalfrange[oskAlarmCounterRef[alarmID]] + 1)) + oskStaticAlarmTime[alarmID]) - (oskCounterHalfrange[oskAlarmCounterRef[alarmID]] + 1);
               }
               else
               {
                  COVER(0x0382)
                  osAlarmTime[alarmID] = now + oskStaticAlarmTime[alarmID];
               }
            }
            else
#endif
            {
               osAlarmTime[alarmID] = oskStaticAlarmTime[alarmID]; /* TR:SASR40:0476*/
               COVER(0x0383)
            }
            osAlarmActivated[alarmID] = 1;
            osInsertMinHeap(alarmID, &oskAlarmHeaps[oskAlarmCounterRef[alarmID]], oskAlarmCounterRef[alarmID]);
            osAlarmCycleTime[alarmID] = oskStaticAlarmCycleTime[alarmID]; /* TR:SASR40:0476 */
         }
         else /* no autostart for this alarm */
         {
            COVER(0x0384)
            osAlarmActivated[alarmID] = 0;
            osAlarmCycleTime[alarmID] = 0;
         }
      IFCOVER( (alarmID+1) < osrNumberOfAlarms,0x03CC,0x03CD)
   } /* for (alarmID= 0; alarmID < osrNumberOfAlarms; alarmID++) */
} /* END OF osInitAlarms */ /* TR:SPMF20:0014 End */

#endif  /* (osdNumberOfAlarms > 0) */

/* KB begin osekHWInitTimerSrc (overwritten) */
osqFunc1 void osqFunc2 osPreInitTimer(void)
{
   /* CovComment 4:  Function: osPreInitTimer */
   CoreIdType coreId = osSysGetCoreID();
   COVER(0x0385)
   osdOSTM_TT(coreId)  = 0x01; /* stop the timer */
         #if osdHwTimerNeeded0_OSTM_HIRES
         COVER(0x0386)
         osdOSTM_CTL(coreId) = 0x02; /* configure free running timer mode, no interrupt on timer start */
         osdOSTM_CMP(coreId) = 0xffffffffUL; /* set the reload value */ 
         #endif
}

/*****************************************************************************
  osInitTimer
  Description: initialize and start system timer OSTM0 or HiResTimer
  Parameter: -
  ReturnValue: -
*****************************************************************************/
osqFunc1 void osqFunc2 osInitTimer(void)
{
   /* CovComment 4:  Function: osInitTimer */
   CoreIdType coreId = osSysGetCoreID();
   COVER(0x0387) 
         #if osdHwTimerNeeded0_OSTM
         COVER(0x0388)
         osdOSTM_CTL(coreId) = 0x00; /* configure interval timer mode, no interrupt on timer start */
         osdOSTM_CMP(coreId) = oskCounterTicksPerBase[osdTimer0OSTMID] - 1; /* set the reload value */
         #endif
   osdOSTM_TS(coreId)  = 0x01; /* start the timer */   
}
/* KB end osekHWInitTimerSrc */

/* KB begin osekHWPreInitTimerSrc (overwritten) */
/* KB end osekHWPreInitTimerSrc */

/* KB begin osekHWTimerInterruptSrc (overwritten) */
#if (osdHardwareTimerNeeded)
/*****************************************************************************
  osTimerInterrupt
  Description: ISR function for system timer OSTM0 or HiResTimer
  Parameter: -
  ReturnValue: -
*****************************************************************************/
ISR(osOstmInterrupt)
{
   /* CovComment 4:  Function: osOstmInterruptfunc */
         #if osdHwTimerNeeded0_OSTM_HIRES
         COVER(0x0389)
         osHandleCounterInterruptHiRes(osdTimer0OSTM_HIRESID);
         #endif
         #if osdHwTimerNeeded0_OSTM
         COVER(0x038A)
         osHandleCounterInterruptStd(osdTimer0OSTMID);   
         #endif
}
#endif
/* KB end osekHWTimerInterruptSrc */


/*-+--------------------------------------------------------------------------
 / GetCounterValue
 / ===============
 /
 / Syntax: StatusType GetCounterValue (CounterType CounterID, TickRefType Value)
 /
 / Parameter (In):  CounterID        The Count from which the value is requested
 / Parameter (Out): Value             The current value of coutner <CounterID>
 / Return value:    E_OK             Success
 /                  E_OS_ID          CounterID is invalid (only in Extended Status)
 / Description:
 /                  If no error occurs, the GetCounterValue writes the current 
 /                  counter value of <CounterID> into Value and returns E_OK.
 / Scalability Classes: ALL
 /--------------------------------------------------------------------------*/
 /* MISRA RULE 14.1 VIOLATION: The function osGetCounterValue is unused in some configurations. In order to keep the code 
 * simple and error free, it is available in more configurations than necessary.
 */
osqFunc1 StatusType osqFunc2 osGetCounterValue(CounterType CounterID, TickRefType Value) /* TR:SASR30:5108 *//* PRQA S 1503 */ 
{
   /* CovComment 4:  Function: osGetCounterValue  */
   
   /* KB begin osekHWGetCounterValueLocalVars (overwritten) */
   /* KB end osekHWGetCounterValueLocalVars */
   
   OS_GC_ENTRY()
   COVER(0x038B)

   COVER(0x038C)
   COVER(0x038D)
   /* check call context */
   /* TR:SASR30:0088 Start */
   if ((osdValidCtx_GetCounterValue & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x038E)
      osAPIError(E_OS_CALLEVEL, osdErrGCCallContext);
      OS_GC_EXIT()
      return E_OS_CALLEVEL;
   }
   /* TR:SASR30:0088 End */
   ELSEWITHCOVER(0x038F)
   /* TR:SASR30:0093 Start */
   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0390)
      osAPIError(E_OS_DISABLEDINT, osdErrGCIntAPIDisabled);
      OS_GC_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0391)
   /* TR:SASR30:0093 End */
#if (osdNumberOfCounters != 0)
   /* TR:SASR30:0376 Start */
   if (CounterID >= osrNumberOfCounters)
   {
#endif /* (osdNumberOfCounters != 0) */
      COVER(0x0392)
      osAPIError(E_OS_ID, osdErrGCWrongID);
      
      #if (osdNumberOfCounters == 0)
      osdDummyRead(CounterID)
      osdDummyRead(Value)
      #endif /*(osdNumberOfCounters == 0)*/
      
      OS_GC_EXIT()
      return E_OS_ID;
#if (osdNumberOfCounters != 0)
   }
#endif /* (osdNumberOfCounters != 0) */
   ELSEWITHCOVER(0x0393)
   /* TR:SASR30:0376 End */


   if ((oskApplCounterAccess[CounterID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0)
   {
      COVER(0x0394)
      osAPIError(E_OS_ACCESS, osdErrGCNoAccess);
      OS_GC_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0395)


   COVER(0x0396)
   /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
   osSaveDisableLevelNested();
   /* KB end osekHWosSaveDisableLevelNested */
   OS_GC_START_CRITICAL()


   {
      TickType retval;
#if osdUseHighResolutionTimer
      if(osdTRUE == osdIsHiResCounter(CounterID))
      {
         COVER(0x0397)
         retval = osGetCurrentTime(CounterID); /* TR:SASR40:0531 */
         IFCOVER(retval > oskCounterMaxAllowedValue[CounterID],0x03CE,0x03CF)
         while(retval > oskCounterMaxAllowedValue[CounterID])
         {
            retval -= (oskCounterMaxAllowedValue[CounterID] + 1U);
            IFCOVER(retval > oskCounterMaxAllowedValue[CounterID],0x03D0,0x03D1)
         }
      }
      else
      {
         COVER(0x0398)
#endif /* osdUseHighResolutionTimer */
#if (osdNumberOfSWAndSRCounters > 0)
         retval = osGetCurrentTime(CounterID);  /* TR:SASR30:0377 */
         if(retval > oskCounterMaxAllowedValue[CounterID])
         {
            COVER(0x0399)
            retval -= (oskCounterMaxAllowedValue[CounterID] + 1U);
         }
         ELSEWITHCOVER(0x039A)
#endif /* (osdNumberOfSWAndSRCounters > 0) */
#if osdUseHighResolutionTimer
      }
#endif /* osdUseHighResolutionTimer */
      *Value = retval;
   }

   OS_GC_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
   osRestoreEnableLevelNested();
   /* KB end osekHWosRestoreEnableLevelNested */
   OS_GC_EXIT()
   return E_OK; /* TR:SASR30:0377 */
}

/* TR:SASR30:5109 Start */
/*-+--------------------------------------------------------------------------
 / GetElapsedValue
 / ===============
 /
 / Syntax: StatusType GetElapsedValue (CounterType CounterID, TickRefType Value, TickRefType ElapsedValue)
 /
 / Parameter (In):    CounterID        The Count from which the value is requested
 / Parameter (InOut): Value            In: the previous tick value of the Counter <CounterID>
 /                                     Out: the current value of Counter <CounterID>
 / Parameter (Out):   ElapsedValue     The tick difference since count <Value> of counter <CounterID>
 / Return value:      E_OK             Success
 /                    E_OS_ID          CounterID is invalid (only in Extended Status)
 / Description:
 /                    If no error occurs, the GetElapsedValue writes the current 
 /                    counter value of <CounterID> into Value and returns E_OK.
 / Scalability Classes: ALL
 /--------------------------------------------------------------------------*/
 /* MISRA RULE 14.1 VIOLATION: The function osGetElapsedValue is unused in some configurations. In order to keep the code 
 * simple and error free, it is available in more configurations than necessary.
 */
osqFunc1 StatusType osqFunc2 osGetElapsedValue(CounterType CounterID, TickRefType Value, TickRefType ElapsedValue) /* PRQA S 1503 */ 
{
   /* CovComment 4:  Function: osGetElapsedValue */
   TickType now;

   /* KB begin osekHWGetElapsedValueLocalVars (overwritten) */
   /* KB end osekHWGetElapsedValueLocalVars */
   
   OS_GV_ENTRY()
   COVER(0x039B)
   COVER(0x039C)
   /* check call context */
   /* TR:SASR30:0088 Start */
   if ((osdValidCtx_GetElapsedValue & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x039D)
      osAPIError(E_OS_CALLEVEL, osdErrGVCallContext);
      OS_GV_EXIT()
      return E_OS_CALLEVEL;
   }
   /* TR:SASR30:0088 End */
   ELSEWITHCOVER(0x039E)
   /* TR:SASR30:0093 Start */
   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x039F)
      osAPIError(E_OS_DISABLEDINT, osdErrGVIntAPIDisabled);
      OS_GV_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x03A0)
   /* TR:SASR30:0093 End */
   /* TR:SASR30:0381 Start */
#if (osdNumberOfCounters != 0)
   if (CounterID >= osrNumberOfCounters)
   {
#endif /* (osdNumberOfCounters != 0) */
      COVER(0x03A1)
      osAPIError(E_OS_ID, osdErrGVWrongID);
      #if (osdNumberOfCounters == 0) 
      osdDummyRead(CounterID)
      osdDummyRead(Value)
      osdDummyRead(ElapsedValue)
      #endif /*(osdNumberOfCounters == 0)*/
      OS_GV_EXIT()
      return E_OS_ID;
#if (osdNumberOfCounters != 0)
   }
#endif /* (osdNumberOfCounters != 0) */
   ELSEWITHCOVER(0x03A2)
   /* TR:SASR30:0381 End */


   if ((oskApplCounterAccess[CounterID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0)
   {
      COVER(0x03A3)
      osAPIError(E_OS_ACCESS, osdErrGVNoAccess);
      OS_GV_EXIT()
      return E_OS_ACCESS;
   }

   COVER(0x03A4)
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_GV_START_CRITICAL()

   COVER(0x03A5)
   /* TR:SASR30:0391 Start */
   if (*Value > oskCounterMaxAllowedValue[CounterID])
   {
      COVER(0x03A6)
      OS_GV_END_CRITICAL()
      osAPIError(E_OS_VALUE, osdErrGVIllegalValue);
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_GV_EXIT()
      return E_OS_VALUE;
   }
   /* TR:SASR30:0391 End */
   ELSEWITHCOVER(0x03A7)

   COVER(0x03A8)
   COVER(0x03A9)
   /* check that the pointers differ */
   osSysErrAssert((Value != ElapsedValue), osdErrGVIllegalPointers)

   now = osGetCurrentTime(CounterID);  /* TR:SASR30:0377 */

   IFCOVER(now > oskCounterMaxAllowedValue[CounterID],0x03D2,0x03D3)
   while(now > oskCounterMaxAllowedValue[CounterID])
   {
      COVER(0x03AA)
      now -= (oskCounterMaxAllowedValue[CounterID] + 1);
      IFCOVER(now > oskCounterMaxAllowedValue[CounterID],0x03D4,0x03D5)
   }

   COVER(0x03AB)
   /* KB begin osekHWGetElapsedValueParamWrite (overwritten) */
   if (now < (*Value))
   {
      *ElapsedValue = ((oskCounterMaxAllowedValue[CounterID] - (*Value)) + 1) + now;
   }
   else
   {
      *ElapsedValue = now - *Value;
   }
   *Value = now;
   /* KB end osekHWGetElapsedValueParamWrite */

   OS_GV_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */
   OS_GV_EXIT()
   return E_OK; /* TR:SASR30:0382 */
}
/* TR:SASR30:5109 End */


/*-+--------------------------------------------------------------------------
/ osClearTimerInterruptPoint
/ Function:    shift next timer interrupt into the future as far as possible
/ Parameter:   CounterID: A hardware counter id.
/ Returnvalue: -
/--------------------------------------------------------------------------*/
#if (osdClearTIPAbsIdx != -1)
osqFunc1 void osqFunc2 osClearTimerInterruptPointAbs(CounterType CounterID)
{
  CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);
  osSetHWTimerCompareValue(CounterID, (osHWTimerCompType)osGetCurrentTime(CounterID) + oskHWTimerSemiCount[CounterHiResId]);
}
#endif

#if (osdClearTIPRelIdx != -1)
osqFunc1 void osqFunc2 osClearTimerInterruptPointRel(CounterType CounterID)
{
  CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);
  osSetHWTimerDeltaValue(CounterID, oskHWTimerSemiCount[CounterHiResId]);
}
#endif

/*-+--------------------------------------------------------------------------
/ osSetTimerInterruptPoint
/ Function:    used in SetRelAlarm, SetAbsAlarm and CancelAlarm
/              Sets the hardware timer to the next alarm time
/ Parameter:   CounterID: A hardware counter id.
/              timeToSet: Next alarm time
/ Returnvalue: osdTRUE if next alarm time lies in the future
/              osdFALSE if next alarm time lies in the past
/ Environment: interrupts are disabled
/--------------------------------------------------------------------------*/
/**
 * for OSMAXALLOWEDVALUE > oskHWTimerSemiCount[CounterHiResId]
 * Absolute
 */
#if (osdSetTIPAbsMaxGtSemiCountIdx != -1)
osqFunc1 osbool osqFunc2 osSetTIPAbsMaxGtSemiCount(CounterType CounterID, TickType timeToSet)
{
  TickType Now;
  CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);

  Now = osGetCurrentTime(CounterID);
  if( oskMinTimeBetweenTimerIrqs[CounterHiResId] > 0 )
  {
    if(osdCounterCompareLt(timeToSet, osNextAllowedTimerInt[CounterHiResId], oskCounterHalfrange[CounterID]))
    {
      timeToSet = osNextAllowedTimerInt[CounterHiResId];
    }
  }

  if(osdCounterCompareGe(Now + oskHWTimerSemiCount[CounterHiResId], timeToSet, oskCounterHalfrange[CounterID]))
  {
    osSetHWTimerCompareValue(CounterID, timeToSet);
    osReleaseHiResTimerISR(CounterID);
    /* check whether timeToSet is (still / at all) in the future */
    Now = osGetCurrentTime(CounterID);
    if(osdCounterCompareLe(timeToSet, Now, oskCounterHalfrange[CounterID]))
    {
      osTriggerHiResTimerISR(CounterID);
      return osdFALSE;
    }
    else
    {
      return osdTRUE;
    }
  }
  else
  {
    osSetHWTimerCompareValue(CounterID, Now + oskHWTimerSemiCount[CounterHiResId]);
    return osdTRUE;
  }
}
#endif

#if (osdSetTIPRelMaxGtSemiCountIdx != -1)
/**
 * for OSMAXALLOWEDVALUE > oskHWTimerSemiCount[CounterHiResId]
 * Relative
 */
osqFunc1 osbool osqFunc2 osSetTIPRelMaxGtSemiCount(CounterType CounterID, TickType timeToSet)
{
  TickType Now;
  CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);

  Now = osGetCurrentTime(CounterID);
  if( oskMinTimeBetweenTimerIrqs[CounterHiResId] > 0 )
  {
    if(osdCounterCompareLt(timeToSet, osNextAllowedTimerInt[CounterHiResId], oskCounterHalfrange[CounterID]))
    {
      timeToSet = osNextAllowedTimerInt[CounterHiResId];  
    }
  }

  if(osdCounterCompareGe(Now + oskHWTimerSemiCount[CounterHiResId], timeToSet, oskCounterHalfrange[CounterID]))
  {
    if(osdCounterCompareLe(timeToSet, Now, oskCounterHalfrange[CounterID]))
    {
      osTriggerHiResTimerISR(CounterID);
      return osdFALSE;
    }
    else
    {
      osSetHWTimerDeltaValue(CounterID, timeToSet - Now);
      return osdTRUE;
    }
  }
  else
  {
    osSetHWTimerDeltaValue(CounterID, oskHWTimerSemiCount[CounterHiResId]);
    return osdTRUE;
  }
}
#endif

/**
 * for OSMAXALLOWEDVALUE <= oskHWTimerSemiCount[CounterHiResId]
 * Absolute
 */
#if (osdSetTIPAbsMaxLeSemiCountIdx != -1)
osqFunc1 osbool osqFunc2 osSetTIPAbsMaxLeSemiCount(CounterType CounterID, TickType timeToSet)
{
  TickType Now;
  CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);

  if( oskMinTimeBetweenTimerIrqs[CounterHiResId] > 0 )
  {
    if(osdCounterCompareGt(osNextAllowedTimerInt[CounterHiResId], timeToSet, oskCounterHalfrange[CounterID]))
    {
      timeToSet = osNextAllowedTimerInt[CounterHiResId];  
    }
  }

   osSetHWTimerCompareValue(CounterID, timeToSet);
   osReleaseHiResTimerISR(CounterID);
   /* check whether timeToSet is still in the future */

   Now = osGetCurrentTime(CounterID);
   if(osdCounterCompareGe(Now, timeToSet, oskCounterHalfrange[CounterID]))
   {
      osTriggerHiResTimerISR(CounterID);
      return osdFALSE;
   }
   else
   {
      return osdTRUE;
   }
}
#endif


/**
 * for OSMAXALLOWEDVALUE <= oskHWTimerSemiCount[CounterHiResId]
 * Relative
 */
#if (osdSetTIPRelMaxLeSemiCountIdx != -1)
osqFunc1 osbool osqFunc2 osSetTIPRelMaxLeSemiCount(CounterType CounterID, TickType timeToSet)
{
  TickType Now;
  CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);

  if( oskMinTimeBetweenTimerIrqs[CounterID] > 0 )
  {
    if(osdCounterCompareGt(osNextAllowedTimerInt[CounterHiResId], timeToSet, oskCounterHalfrange[CounterID]))
    {
      timeToSet = osNextAllowedTimerInt[CounterHiResId];  
    }
  }

  Now = osGetCurrentTime(CounterID);
  if(osdCounterCompareGe(Now, timeToSet, oskCounterHalfrange[CounterID]))
  {
    osTriggerHiResTimerISR(CounterID);
    return osdFALSE;
  }
  else
  {
    osSetHWTimerDeltaValue(CounterID, timeToSet - Now);
    return osdTRUE;
  }
}
#endif

/*-+--------------------------------------------------------------------------
/ osGetCurrentTime
/ Function:    sync system counter variable to the hw counter
/ Parameter:    CounterID: A hardware counter id.
/ Returnvalue: a snapshot of the system counter
/--------------------------------------------------------------------------*/
#if (osdGetCurrentTimeHighResHybridIdx != -1)
osqFunc1 TickType osqFunc2 osGetCurrentTimeHiResHybrid(CounterType CounterID)
{
  CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);
   TickType CounterSnapshot;
  
   CounterSnapshot      = osCounter[CounterID];
   CounterSnapshot     += oskHiResTimerBitMask[CounterHiResId] & (osGetHWTimerCounterValue(CounterID) - osCounter[CounterID]);
   osCounter[CounterID] = CounterSnapshot;

   return CounterSnapshot;
}
#endif

#if (osdGetCurrentTimeHighResMonoIdx != -1)
osqFunc1 TickType osqFunc2 osGetCurrentTimeHiResMono(CounterType CounterID)
{
   TickType CounterSnapshot;
   CounterSnapshot = (TickType)osGetHWTimerCounterValue(CounterID);
   osCounter[CounterID] = CounterSnapshot;

   return CounterSnapshot;
}
#endif

#if (osdGetCurrentTimeStdIdx != -1)
osqFunc1 TickType osqFunc2 osGetCurrentTimeStd(CounterType CounterID)
{
  return osCounter[CounterID];
}
#endif

/* KB begin osekosHandleCounterInterruptStd (default) */

/*-+--------------------------------------------------------------------------
/ osHandleCounterInterruptStd
/ Function:     handles a counter interrupt for a standard resolution 
/               hardware counter
/ Parameter:    CounterID: A hardware counter id.
/--------------------------------------------------------------------------*/
#if (osdHandleCounterInterruptStdIdx != -1)
/* MISRA RULE 8.10 VIOLATION: The function osHandleCounterInterruptStd is general 
 * code for different platform specific OS implementations. Depending on the implementation,
 * the calling function might be located in the same file or be generated (i.e. in tcb.c).
 * Making the function static for only some implementations would increase code complexity
 * too much. */
osqFunc1 void osqFunc2 osHandleCounterInterruptStd(CounterType CounterID) /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osHandleCounterInterruptStd */
   if(osCounter[CounterID] == oskCounterInternalMaximumValue[CounterID])
   {
      COVER(0x03AC)
      /* internal overflow to zero */
      osCounter[CounterID] = 0;
   }
   else
   {
      COVER(0x03AD)
      osCounter[CounterID]++;
   }

   osWorkHeap(&oskAlarmHeaps[CounterID], CounterID);
}
#endif

/* KB end osekosHandleCounterInterruptStd */

/* KB begin osekosHandleCounterInterruptHiRes (default) */
 /*-+--------------------------------------------------------------------------
/ osHandleCounterInterrupt
/ Function:     handles a counter interrupt for a high resolution hardware 
/               counter
/ Parameter:    CounterID: A hardware counter id.
/--------------------------------------------------------------------------*/
#if (osdHandleCounterInterruptHiResIdx != -1)
/* MISRA RULE 8.10 VIOLATION: The function osHandleCounterInterruptHiRes is general 
 * code for different platform specific OS implementations. Depending on the implementation,
 * the calling function might be located in the same file or be generated (i.e. in tcb.c).
 * Making the function static for only some implementations would increase code complexity
 * too much. */
osqFunc1 void osqFunc2 osHandleCounterInterruptHiRes(CounterType CounterID) /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osHandleCounterInterruptHiRes */
   CounterType CounterHiResId = osdCounterId2HiResCounterId(CounterID);
    
   if (oskMinTimeBetweenTimerIrqs[CounterHiResId] == 0)
   {
      COVER(0x03AE)
      (void)osGetCurrentTime(CounterID);           /* update os variable */
   }
   else  /*(osMinTimeBetweenTimerIrqs[] > 0)*/
   {
      TickType nextAllowedTimerInt;

      COVER(0x03AF)
      nextAllowedTimerInt = osGetCurrentTime(CounterID) + oskMinTimeBetweenTimerIrqs[CounterHiResId];

      osNextAllowedTimerInt[CounterHiResId] = nextAllowedTimerInt;

  } 

   osWorkHeap(&oskAlarmHeaps[CounterID], CounterID);
}
#endif

/* KB end osekosHandleCounterInterruptHiRes */


/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */

/* END OF MODULE osektime.c */

