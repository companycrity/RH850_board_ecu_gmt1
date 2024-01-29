/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekrsrc.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.75
|
|  Description: osek API-functions for handling resources
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

/* CovComment 0:  file: osekrsrc.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */

#if (osdNumberOfInterruptResources != 0)
 #error You are not allowed to configure Resources with ISRs in SafeContext
#endif
#if (osdNumberOfInternalResources != 0)
 #error You are not allowed to configure Resources with RESOURCEPROPERTY INTERNAL in SafeContext
#endif


/*
 *  MICROSAR OS timing hooks call macro, used by resource API below
 */
/* CovComment 4:  Macro: OS_VTH_CALL_GOT_RES_HOOK */
#if osdCallTimingHooks
#define OS_VTH_CALL_GOT_RES_HOOK(ResId)                           \
   COVER(0x0273)                                                        \
   OS_VTH_GOT_RES((ResId), 0)
#else
#define OS_VTH_CALL_GOT_RES_HOOK(ResId)         \
   COVER(0x0274)
#endif

/* CovComment 4:  Macro: OS_VTH_CALL_REL_RES_HOOK */
#if osdCallTimingHooks
#define OS_VTH_CALL_REL_RES_HOOK(ResId)                           \
   COVER(0x0275)                                                        \
   OS_VTH_REL_RES((ResId), 0)
#else
#define OS_VTH_CALL_REL_RES_HOOK(ResId)         \
   COVER(0x0276)
#endif



#if (STATUS_LEVEL == EXTENDED_STATUS) || osdORTIDebug
   #ifndef osdGRNeedActiveTaskID
   #define osdGRNeedActiveTaskID 1
   #endif
#endif /* STATUS_LEVEL == EXTENDED_STATUS */
#if (osdNumberOfInterruptResources > 0)
#if (osdEnableAssertions == 1)
   #ifndef osdGRNeedActiveTaskID
   #define osdGRNeedActiveTaskID 1
   #endif
#endif /* (osdEnableAssertions == 1) */
#endif /* (osdNumberOfInterruptResources > 0) */
#if (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4))
   #ifndef osdGRNeedActiveTaskID
   #define osdGRNeedActiveTaskID 1
   #endif
#endif /* (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4)) */
#ifndef osdGRNeedActiveTaskID
   #define osdGRNeedActiveTaskID 0
#endif

#if STATUS_LEVEL == EXTENDED_STATUS
   #ifndef osdGRNeedIntNestingDepth
      #define osdGRNeedIntNestingDepth 1
   #endif
#endif /* STATUS_LEVEL == EXTENDED_STATUS */
#if (osdNumberOfInterruptResources > 0)
#if (osdEnableAssertions == 1)
   #ifndef osdGRNeedIntNestingDepth
      #define osdGRNeedIntNestingDepth 1
   #endif
#endif /* (osdEnableAssertions == 1) */
#if osdORTIDebug
   #ifndef osdGRNeedIntNestingDepth
      #define osdGRNeedIntNestingDepth 1
   #endif
#endif /* osdORTIDebug */
 #if (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4))
   #ifndef osdGRNeedIntNestingDepth
      #define osdGRNeedIntNestingDepth 1
   #endif
 #endif /* (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4)) */
#endif /* (osdNumberOfInterruptResources > 0) */
#if (osdNumberOfTaskResources > 0)
   #ifndef osdGRNeedIntNestingDepth
      #define osdGRNeedIntNestingDepth 1
   #endif
#endif /* (osdNumberOfTaskResources > 0) */
#ifndef osdGRNeedIntNestingDepth
   #define osdGRNeedIntNestingDepth 0
#endif

/*-+--------------------------------------------------------------------------
 / GetResource
 / ===========
 /
 / Syntax:          StatusType GetResource ( ResourceType <ResID> )
 / Parameter (In):  ResID Reference to resource
 / Parameter (Out): none
 / Description:     This call serves to enter critical sections in the code 
 /                  that are assigned to the resource referenced by <ResID>. 
 /                  A critical section must always be left using 
 /                  ReleaseResource.
 / Particularities: Nested resource occupation is only allowed if the 
 /                  inner critical sections are completely executed within 
 /                  the surrounding critical section. Occupation of an already
 /                  occupied resource is also strictly forbidden!
 /                  Corresponding calls to GetResource and ReleaseResource
 /                  should appear within the same function on the same function
 /                  level.
 /                  Services which are points of rescheduling for non preemptable
 /                  tasks (TerminateTask, ChainTask, Schedule and WaitEvent,
 /                  GetSemaphore, ReleaseSemaphore,
 /                  must not be used in critical sections.
 /                  Additionally, critical sections must be left before 
 /                  completion of an interrupt service routine.
 /                  Generally speaking, critical sections should be short.
 /                  The service may be called from an ISR and from task level.
 / Status:
 /  -Standard:      - No error, E_OK
 /  -Extended:      - Resource <ResID> is invalid, E_OS_ID
 /                  - Attempt to get resource which is already occupied by any 
 /                    task or ISR, or the statically assigned priority of the
 /                    calling task or interrupt routine is higher than the 
 /                    calculated ceiling priority, E_OS_ACCESS
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, Cat2-ISR, interrupts not disabled by the application
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osGetResource is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osGetResource(ResourceType ResId)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetResource */

   /* KB begin osekHWosGRLocalCeilingPrioDecl (default) */
   osPrioType ceilingPrio; /* task priority or interrupt level depending on type of resource */
   /* KB end osekHWosGRLocalCeilingPrioDecl */
#if osdGRNeedActiveTaskID
   TaskType activeTaskID;
#endif
#if osdGRNeedIntNestingDepth
   osuint8 intNestingDepth;
#endif
   
   OS_GR_ENTRY()
   COVER(0x0277)

   COVER(0x0278)
   /* check call context */
   if ((osdValidCtx_GetResource & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0279)
      osAPIError(E_OS_CALLEVEL, osdErrGRCallContext);
      OS_GR_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x027A)

   IFCOVER(ResId >= osrNumberOfAllResources,0x02D3,0x02D4)
   if (ResId >= osrNumberOfAllResources)  
   {
      COVER(0x027B)
      osAPIError(E_OS_ID, osdErrGRWrongResourceID);
      OS_GR_EXIT()
      return  E_OS_ID;
   }
   ELSEWITHCOVER(0x027C)


   /* check access rights for this object */
   if (((oskApplResourceAccess[ResId] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x027D)
      osAPIError(E_OS_ACCESS, osdErrGRNoAccess);
      OS_GR_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x027E)

   /* checks if resource is already occupied */
   if (osResOccupationCounter[ResId] != 0)
   {
      COVER(0x027F)
      osAPIError(E_OS_ACCESS, osdErrGRResourceOccupied);
      OS_GR_EXIT()
      return  E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0280)


   /* KB begin osekHWosGRCeilingPrioAssignment (default) */
   COVER(0x0281)
   ceilingPrio = oskResCeilingPrio[ResId];
   /* KB end osekHWosGRCeilingPrioAssignment */

#if osdGRNeedActiveTaskID
   activeTaskID = osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex;
#endif
#if osdGRNeedIntNestingDepth
   intNestingDepth = osOwnCcb->LockIsNotNeeded.ossIntNestingDepth;
#endif


#if (osdNumberOfTaskResources > 0)

      if (intNestingDepth != 0)
      {
         COVER(0x0282)
         osAPIError(E_OS_ACCESS, osdErrGRISRNoAccessRights);
         OS_GR_EXIT()
         return E_OS_ACCESS;
      }
      ELSEWITHCOVER(0x0283)

      if (osCheckInterruptsEnabled() == 0)
      {
         COVER(0x0284)
         osAPIError(E_OS_DISABLEDINT, osdErrGRIntAPIDisabled);
         OS_GR_EXIT()
         return E_OS_DISABLEDINT;
      }
      ELSEWITHCOVER(0x0285)

      osSysErrAssert(activeTaskID < osrNumberOfAllTasks, osdErrGRWrongTaskID)

      if (oskTcbHomePrio[activeTaskID] < ceilingPrio)
      {
         COVER(0x0286)
         osAPIError(E_OS_ACCESS, osdErrGRWrongPrio);
         OS_GR_EXIT()
         return  E_OS_ACCESS;
      }
      ELSEWITHCOVER(0x0287)

   COVER(0x0288)
   COVER(0x0289)
      /* checks access-rights of the task */
      if ((oskResAccessMask[ResId][activeTaskID/osdResAccessMaskBits] &
           ((((osResAccessMaskType)1U) << (osdResAccessMaskBits-1U)) >> 
            (osuint8)(activeTaskID % osdResAccessMaskBits))) == 0U)
      {
         COVER(0x028A)
         osAPIError(E_OS_SYS_API_ERROR, osdErrGRNoAccessRights); /* TR:SPMF12:0009 */
         OS_GR_EXIT()
         return  E_OS_SYS_API_ERROR;
      }
      ELSEWITHCOVER(0x028B)


   COVER(0x028C)
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_GR_START_CRITICAL()
   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */


   OS_VTH_CALL_GOT_RES_HOOK(((ResourceType) ResId))

   osResSavedPrio[ResId]= osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio;

   osSchedGetResource(ResId);

   osTcbActualPrio[activeTaskID]=osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio;

   COVER(0x028D)

   osOwnCcb->LockIsNotNeeded.ossResGlobalOccupationCounter++;

   COVER(0x028E)
   /* link all previously locked resources to new one */
   osResNextLockedResource[ResId] = osTcbLockedResource[activeTaskID];
   /* new one is the last locked resource */
   osTcbLockedResource[activeTaskID] = ResId;

   COVER(0x028F)
   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_GR_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */

   COVER(0x0290)
   osResActualTask[ResId] = activeTaskID;
   COVER(0x0291)
   osResOccupationCounter[ResId]= osOwnCcb->LockIsNotNeeded.ossResGlobalOccupationCounter;

#endif /* (osdNumberOfTaskResources > 0) */


   COVER(0x0292)
   OS_GR_EXIT()
   return E_OK;
} /* END OF osGetResource */



#if (STATUS_LEVEL == EXTENDED_STATUS) || (osdORTIDebug && (osdNumberOfTaskResources > 0))
   #ifndef osdRRNeedActiveTaskID
   #define osdRRNeedActiveTaskID 1
   #endif
#endif /* STATUS_LEVEL == EXTENDED_STATUS */
#if (osdNumberOfInterruptResources > 0)
#if (osdEnableAssertions == 1)
   #ifndef osdRRNeedActiveTaskID
   #define osdRRNeedActiveTaskID 1
   #endif
#endif /* (osdEnableAssertions == 1) */
#endif /* (osdNumberOfInterruptResources > 0) */
#if (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4))
   #ifndef osdRRNeedActiveTaskID
   #define osdRRNeedActiveTaskID 1
   #endif
#endif /* (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4)) */
#ifndef osdRRNeedActiveTaskID
   #define osdRRNeedActiveTaskID 0
#endif

#if STATUS_LEVEL == EXTENDED_STATUS
   #ifndef osdRRNeedIntNestingDepth
      #define osdRRNeedIntNestingDepth 1
   #endif
#endif /* STATUS_LEVEL == EXTENDED_STATUS */
#if (osdNumberOfInterruptResources > 0)
#if (osdEnableAssertions == 1)
   #ifndef osdRRNeedIntNestingDepth
      #define osdRRNeedIntNestingDepth 1
   #endif
#endif /* (osdEnableAssertions == 1) */
 #if (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4))
   #ifndef osdRRNeedIntNestingDepth
      #define osdRRNeedIntNestingDepth 1
   #endif
 #endif /* (osdKillTaskIsrPossible || (osdSC== SC3) || (osdSC== SC4)) */
#endif /* (osdNumberOfInterruptResources > 0) */
#if (osdNumberOfTaskResources > 0)
   #ifndef osdRRNeedIntNestingDepth
      #define osdRRNeedIntNestingDepth 1
   #endif
#endif /* (osdNumberOfTaskResources > 0) */
#ifndef osdRRNeedIntNestingDepth
   #define osdRRNeedIntNestingDepth 0
#endif

/*-+--------------------------------------------------------------------------
 / ReleaseResource
 / ===============
 /
 / Syntax:          StatusType ReleaseResource ( ResourceType <ResID> )
 / Parameter (In):  ResID Reference to resource
 / Parameter (Out): none
 / Description:     ReleaseResource is the counterpart of GetResource and
 /                  serves to leave critical sections in the code that are 
 /                  assigned to the resource referenced by <ResID>.
 / Particularities: Resources have to be released in the opposit order of
 /                  occupation.  
 /                  Corresponding calls to GetResource and ReleaseResource
 /                  should appear within the same function on the same function
 /                  level.
 /                  Services which are points of rescheduling for non preemptable
 /                  tasks (TerminateTask, ChainTask, Schedule and WaitEvent,
 /                  GetSemaphore, ReleaseSemaphore,
 /                  must not be used in critical sections.
 /                  Additionally, critical sections must be left before 
 /                  completion of an interrupt service routine.
 /                  Generally speaking, critical sections should be short.
 /                  The service may be called from an ISR and from task level.
 / Status:
 /  -Standard:      - No error, E_OK
 /  -Extended:      - Resource <ResID> is invalid, E_OS_ID
 /                  - Attempt to release a resource which is not occupied by 
 /                    any task or ISR, or another resource has to be released 
 /                    before, E_OS_NOFUNC
 /                  - Attempt to release a resource which has a lower ceiling 
 /                    priority than the statically assigned priority of the 
 /                    calling task or interrupt servide routine, E_OS_ACCESS
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, Cat2-ISR, interrupts not disabled by the application
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osReleaseResource is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osReleaseResource(ResourceType ResId)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osReleaseResource */
   
#if osdRRNeedActiveTaskID
   TaskType activeTaskID;
#endif
#if osdRRNeedIntNestingDepth
   osuint8 intNestingDepth;
#endif

   OS_RR_ENTRY()
   COVER(0x0293)

   /* check call context */
   if ((osdValidCtx_ReleaseResource & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0294)
      osAPIError(E_OS_CALLEVEL, osdErrRRCallContext);
      OS_RR_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x0295)

   IFCOVER(ResId >= osrNumberOfAllResources,0x02D5,0x02D6)
   if (ResId >= osrNumberOfAllResources)  
   {
      COVER(0x0296)
      osAPIError(E_OS_ID, osdErrRRWrongResourceID);
      OS_RR_EXIT()
      return  E_OS_ID;
   }
   ELSEWITHCOVER(0x0297)


   /* check access rights for this object */
   if (((oskApplResourceAccess[ResId] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x0298)
      osAPIError(E_OS_ACCESS, osdErrRRNoAccess);
      OS_RR_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0299)

   if (osResOccupationCounter[ResId] == 0)
   {
      COVER(0x029A)
      osAPIError(E_OS_NOFUNC, osdErrRRNotOccupied);
      OS_RR_EXIT()
      return E_OS_NOFUNC;
   }
   ELSEWITHCOVER(0x029B)

   if (osResOccupationCounter[ResId] != osOwnCcb->LockIsNotNeeded.ossResGlobalOccupationCounter)
   {
      COVER(0x029C)
      osAPIError(E_OS_NOFUNC, osdErrRRWrongSequence);
      OS_RR_EXIT()
      return E_OS_NOFUNC;
   }
   ELSEWITHCOVER(0x029D)


#if osdRRNeedActiveTaskID
   activeTaskID = osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex;
#endif
#if osdRRNeedIntNestingDepth
   intNestingDepth = osOwnCcb->LockIsNotNeeded.ossIntNestingDepth;
#endif
   

#if (osdNumberOfTaskResources > 0)
   if (intNestingDepth != 0)
   {
      COVER(0x029E)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveReleaseResource_ResID(ResId)
      osAPIError(E_OS_ACCESS, osdErrRRISRNoAccessRights);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_RR_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x029F)

      if (osCheckInterruptsEnabled() == 0)
      {
         COVER(0x02A0)
         osAPIError(E_OS_DISABLEDINT, osdErrRRIntAPIDisabled);
         OS_RR_EXIT()
         return E_OS_DISABLEDINT;
      }
      ELSEWITHCOVER(0x02A1)

      osSysErrAssert(activeTaskID < osrNumberOfAllTasks, osdErrRRWrongTaskID)

   if (oskTcbHomePrio[activeTaskID] < oskResCeilingPrio[ResId])
   {
      COVER(0x02A2)
      osAPIError(E_OS_ACCESS, osdErrRRWrongPrio);
      OS_RR_EXIT()
      return  E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x02A3)

   COVER(0x02A4)
   /* next assertion checks if releasing task is the same as the occupying task */
   osSysErrAssert(osResActualTask[ResId] == activeTaskID, osdErrRRWrongTask)

   osResActualTask[ResId]= osdNoActiveTask;
   COVER(0x02A5)


   osResOccupationCounter[ResId]= 0; /* not occupied */
   
   COVER(0x02A6)
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_RR_START_CRITICAL()
   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   
      OS_VTH_CALL_REL_RES_HOOK(((ResourceType) ResId))

   COVER(0x02A7)
   /* remove resource from linked list */
   osTcbLockedResource[activeTaskID] = osResNextLockedResource[ResId];

   COVER(0x02A8)
   osOwnCcb->LockIsNotNeeded.ossResGlobalOccupationCounter--;

   osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio = osResSavedPrio[ResId];

   osTcbActualPrio[activeTaskID] = osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio;

   osSchedReleaseResource(ResId);

   if (osOwnCcb->LockIsNotNeeded.ossLockDispatcher == 0)
   {
      if (osdTRUE == ptrToCcb->ossStartDispatcher)
      {
         COVER(0x02A9)
         OS_RR_END_CRITICAL()
         OS_RR_EXIT()

         /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
         /* KB end osekHWosEnableTimProtInterrupt */
         /* KB begin osekHWosRestoreEnableLevel (overwritten) */
         osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
         /* KB end osekHWosRestoreEnableLevel */

         /* start dispatcher */
         OS_START_DISPATCH()
         /* KB begin osekHWosLocalDispatcher (overwritten) */
         ptrToCcb2->ossCallDispatcher = 1;
         /* KB end osekHWosLocalDispatcher */
         return E_OK;
      }
      ELSEWITHCOVER(0x02AA)
   }
   ELSEWITHCOVER(0x02AB)
   OS_RR_END_CRITICAL()
   OS_RR_EXIT()

   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */

#endif /* (osdNumberOfTaskResources > 0) */

   return E_OK;
} /* END OF osReleaseResource */



#if (osdNumberOfSemaphores > 0)


/*
 *  MICROSAR OS timing hooks call macro, used by semaphore API below
 */
/* CovComment 4:  Macro: OS_VTH_CALL_TRANSFER_SEMA_HOOK */
#if osdCallTimingHooks
#define OS_VTH_CALL_TRANSFER_SEMA_HOOK(ToTaskId, SemaId)                                                           \
   if (osOwnCcb->LockIsNotNeeded.ossIntNestingDepth != 0)                                                          \
   {                                                                                                               \
      COVER(0x02AC)                                                                                                      \
      OS_VTH_TRANSFER_SEMA(((osProcessType) osdNumberOfAllTasks + osOwnCcb->LockIsNotNeeded.ossActiveISRID),       \
                           (ToTaskId), (SemaId) , 0, 0)                                                            \
   } /* if (osOwnCcb->LockIsNotNeeded.ossIntNestingDepth != 0) */                                                  \
   else                                                                                                            \
   {                                                                                                               \
      COVER(0x02AD)                                                                                                      \
      OS_VTH_TRANSFER_SEMA(((osProcessType) osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex),                         \
                           (ToTaskId), (SemaId) , 0, 0)                                                            \
   } /* if (osOwnCcb->LockIsNotNeeded.ossIntNestingDepth != 0) else */
#else
#define OS_VTH_CALL_TRANSFER_SEMA_HOOK(ToTaskId, SemaId) \
   COVER(0x02AE)
#endif

/* CovComment 4:  Macro: OS_VTH_CALL_TOOK_SEMA_HOOK */
#if osdCallTimingHooks
#define OS_VTH_CALL_TOOK_SEMA_HOOK(TaskId, SemaId)                         \
   COVER(0x02AF)                                                                 \
   OS_VTH_TOOK_SEMA((TaskId), (SemaId), 0)
#else
#define OS_VTH_CALL_TOOK_SEMA_HOOK(TaskId, SemaId) \
   COVER(0x02B0)
#endif

/* CovComment 4:  Macro: OS_VTH_CALL_REL_SEMA_HOOK */
#if osdCallTimingHooks
#define OS_VTH_CALL_REL_SEMA_HOOK(SemaId)                                                                     \
   if (osOwnCcb->LockIsNotNeeded.ossIntNestingDepth != 0)                                                     \
   {                                                                                                          \
      COVER(0x02B1)                                                                                                 \
      OS_VTH_REL_SEMA(((osProcessType) osdNumberOfAllTasks + osOwnCcb->LockIsNotNeeded.ossActiveISRID),       \
                      (SemaId), 0                                                                     )       \
   } /* if (osOwnCcb->LockIsNotNeeded.ossIntNestingDepth != 0) */                                             \
   else                                                                                                       \
   {                                                                                                          \
      COVER(0x02B2)                                                                                                 \
      OS_VTH_REL_SEMA(((osProcessType) osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex),                         \
                      (SemaId), 0                                                   )                         \
   } /* if (osOwnCcb->LockIsNotNeeded.ossIntNestingDepth != 0) else */
#else
#define OS_VTH_CALL_REL_SEMA_HOOK(SemaId)  \
   COVER(0x02B3)
#endif



/*-+--------------------------------------------------------------------------
 / GetSemaphore
 / ===========
 /
 / Syntax: StatusType GetSemaphore ( osSemaphoreType <SemaId> )
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osGetSemaphore is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osGetSemaphore(osSemaphoreType SemaId)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetSemaphore */
   OS_GM_ENTRY()

   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x02B4)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveGetSemaphore_SemaID(SemaId)
      COVER(0x02B5)
      osAPIError(E_OS_DISABLEDINT, osdErrGMInterruptsDisabled);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_GM_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x02B6)

   if (SemaId >= osrNumberOfSemaphores)
   {
      COVER(0x02B7)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveGetSemaphore_SemaID(SemaId)
      osAPIError(E_OS_ID, osdErrGMWrongSemaphoreID);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_GM_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x02B8)

   if (osOwnCcb->LockIsNotNeeded.ossIntNestingDepth != 0)
   {
      COVER(0x02B9)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveGetSemaphore_SemaID(SemaId)
      osAPIError(E_OS_CALLEVEL, osdErrGMOnInterruptLevel);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_GM_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x02BA)

#if osdNumberOfExtendedTasks != osdNumberOfAllTasks
   if (osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex >= osrNumberOfExtendedTasks)
   {
      COVER(0x02BB)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveGetSemaphore_SemaID(SemaId)
      osAPIError(E_OS_ACCESS, osdErrGMNotExtendedTask);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_GM_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x02BC)
#endif


   /* check for task resources only system */
   if (osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio != oskTcbHomePrio[osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex])
   {
      COVER(0x02BD)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveGetSemaphore_SemaID(SemaId)
      osAPIError(E_OS_RESOURCE, osdErrGMResourcesOccupied);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_GM_EXIT()
      return E_OS_RESOURCE;
   }
   ELSEWITHCOVER(0x02BE)


   /* KB begin osekHWosDisableLevel (overwritten) */
   osDisableLevel(); /* disable interrupts up to system level */
   /* KB end osekHWosDisableLevel */ /* (GetSemaphore is only called from task level) */
   OS_GM_START_CRITICAL()

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   if (osSemaphoreState[SemaId] > 0)
   {
      /* decrement (set zero) and go on */
      osSemaphoreState[SemaId]= 0;
      
      OS_VTH_CALL_TOOK_SEMA_HOOK(((TaskType) osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex),
                                 ((osSemaphoreType) SemaId)                               )

      COVER(0x02BF)
      osSemaOwner[SemaId] = osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex;

      /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
      /* KB end osekHWosEnableTimProtInterrupt */
      OS_GM_END_CRITICAL()
      OS_GM_EXIT()
      /* KB begin osekHWosEnableLevel (overwritten) */
      osEnableLevel(); /* enable task level interrupt */
      /* KB end osekHWosEnableLevel */

      COVER(0x02C0)
      return E_OK;
   }
   else
   {
      COVER(0x02C1)
      /* semaphore occupied, put into waiting state */
#if osdPostTaskHook
      osPostTaskHook();
      COVER(0x02C2)
#endif

      /* change task state from ready to waiting */
      osTcbTaskState[osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex] = WAIT_SEMAPHORE;
      osTcbWaitForSemaphore[osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex]= SemaId;

      osSchedRemoveRunningTask();

      /* for GetSemaphore, osSchedRemoveRunningTask() always sets
       * ossStartDispatcher to osdTRUE
       * (same task is never running when reaching this point of code) */
      /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
      /* KB end osekHWosEnableTimProtInterrupt */
      OS_GM_END_CRITICAL()
      OS_GM_EXIT()
      /* KB begin osekHWosEnableLevel (overwritten) */
      osEnableLevel(); /* enable task level interrupt */
      /* KB end osekHWosEnableLevel */

      /* start dispatcher */
      OS_START_DISPATCH()
      /* KB begin osekHWosLocalDispatcher (overwritten) */
      ptrToCcb2->ossCallDispatcher = 1;
      /* KB end osekHWosLocalDispatcher */

      return E_OK;
   }

}
/*-+--------------------------------------------------------------------------
 / ReleaseSemaphore
 / ===========
 /
 / Syntax: StatusType ReleaseSemaphore ( osSemaphoreType <SemaId> )
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osReleaseSemaphore is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osReleaseSemaphore(osSemaphoreType SemaId)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osReleaseSemaphore */
   TaskType taskIndex;

   OS_RS_ENTRY()

   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x02C3)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveReleaseSemaphore_SemaID(SemaId)
      osAPIError(E_OS_DISABLEDINT, osdErrRSInterruptsDisabled);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_RS_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x02C4)

   if (SemaId >= osrNumberOfSemaphores)
   {
      COVER(0x02C5)
      /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
      osSaveDisableLevelNested();
      /* KB end osekHWosSaveDisableLevelNested */
      osSaveReleaseSemaphore_SemaID(SemaId)
      osAPIError(E_OS_ID, osdErrRSWrongSemaphoreID);
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_RS_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x02C6)


   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_RS_START_CRITICAL()

   if (osSemaphoreState[SemaId] > 0)
   {
      COVER(0x02C7)
      osSaveReleaseSemaphore_SemaID(SemaId)
      osAPIError(E_OS_ACCESS, osdErrRSAlreadyReleased);
      OS_RS_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_RS_EXIT()
      return E_OS_STATE;
   }
   ELSEWITHCOVER(0x02C8)

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   /* now check if a task is waiting */
   IFCOVER( 0>=osrNumberOfExtendedTasks,0x02D7,0x02D8)
   for (taskIndex= 0; taskIndex < osrNumberOfExtendedTasks; taskIndex++)
   {
      if (osTcbTaskState[taskIndex] == WAIT_SEMAPHORE)
      {
         if (osTcbWaitForSemaphore[taskIndex] == SemaId)
         {
            /* this is the highest priority task waiting for this sema */
            osTcbTaskState[taskIndex] = READY;
            /* semaphore stays occupied */
            COVER(0x02C9)
            osSemaOwner[SemaId] = taskIndex;

            OS_VTH_CALL_TRANSFER_SEMA_HOOK(((TaskType) taskIndex), ((osSemaphoreType) SemaId))

            osSchedInsertTask(taskIndex);

            if (osdTRUE == ptrToCcb->ossStartDispatcher)
            {
               COVER(0x02CA)
               /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
               /* KB end osekHWosEnableTimProtInterrupt */
               OS_RS_END_CRITICAL()
               /* KB begin osekHWosRestoreEnableLevel (overwritten) */
               osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
               /* KB end osekHWosRestoreEnableLevel */
               if (osOwnCcb->LockIsNotNeeded.ossLockDispatcher == 0)
               {
                  COVER(0x02CB)
                  OS_START_DISPATCH()
                  OS_RS_EXIT()
                  /* KB begin osekHWosLocalDispatcher (overwritten) */
                  ptrToCcb2->ossCallDispatcher = 1;
                  /* KB end osekHWosLocalDispatcher */
                  COVER(0x02CC)
               }
               ELSEWITHCOVER(0x02CD)
               return E_OK;
            }
            ELSEWITHCOVER(0x02CE)
            /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
            /* KB end osekHWosEnableTimProtInterrupt */
            OS_RS_END_CRITICAL()
            /* KB begin osekHWosRestoreEnableLevel (overwritten) */
            osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
            /* KB end osekHWosRestoreEnableLevel */
            OS_RS_EXIT()
            return E_OK;
         }
         ELSEWITHCOVER(0x02CF)
      }
      ELSEWITHCOVER(0x02D0)
      IFCOVER((taskIndex+1) < osrNumberOfExtendedTasks,0x02D9,0x02DA)
   } /* for (taskIndex= 0; taskIndex < osrNumberOfExtendedTasks; taskIndex++) */
   osSemaphoreState[SemaId]= 1;
   COVER(0x02D1)
   osSemaOwner[SemaId] = osdNoActiveTask;

   OS_VTH_CALL_REL_SEMA_HOOK(((osSemaphoreType) SemaId))

   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_RS_END_CRITICAL()
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */
   OS_RS_EXIT()
   COVER(0x02D2)
   return E_OK;
}

#endif /* if (osdNumberOfSemaphores > 0) */


/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */
/* END OF MODULE osekrsrc.c */

