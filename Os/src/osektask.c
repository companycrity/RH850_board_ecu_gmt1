/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osektask.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.76
|
|  Description: osek API-functions for controlling tasks
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

/* CovComment 0:  file: osektask.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */


/*
 *  MICROSAR OS timing hooks call macro, used by task API below
 */
/* CovComment 4:  Macro: OS_VTH_CALL_ACTIVATION_HOOK */
#if osdCallTimingHooks
#define OS_VTH_CALL_ACTIVATION_HOOK(TaskId)                                      \
   COVER(0x02DB)                                                                       \
   OS_VTH_ACTIVATION(TaskId, 0, 0)
#else
#define OS_VTH_CALL_ACTIVATION_HOOK(TaskId)  \
   COVER(0x02DC)
#endif


/*-+--------------------------------------------------------------------------
 / ActivateTask
 / ============
 /
 / Syntax:          StatusType ActivateTask ( TaskType <TaskID> )
 / Parameter (In):  TaskID Task reference
 / Parameter (Out): none
 / Description:     The task <TaskID> is transferred from the suspended state
 /                  into the ready state. The operating system ensures that the 
 /                  task code is being executed from the first statement.
 / Particularities: The service may be called from interrupt level and from 
 /                  task level.
 /                  Rescheduling after the call to ActivateTask depends on the
 /                  place it is called from (ISR, non preemptable task, 
 /                  preemptable task).
 /                  If E_OS_LIMIT is returned the activation is ignored.
 /                  When an extended task is transferred from suspended state
 /                  into ready state all its events are cleared.
 / Status:
 /  -Standard:      - No error, E_OK
 /                  - Too many task activations of <TaskID>, E_OS_LIMIT
 /  -Extended:      - Task <TaskID> is invalid, E_OS_ID
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:
 /  -General:       Task, Cat2-ISR, interrupts not disabled by the 
 /                  application
 /  -SC1/SC2 only:  StartupHook (compatibility to older OSEK-OS)
 /     
 /--------------------------------------------------------------------------*/
/*
 * MISRA RULE 14.1 VIOLATION: The function osActivateTask is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osActivateTask(TaskType taskIndex) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osActivateTask */
/* KB begin actTaskBody (default) */


   OS_AT_ENTRY()
   COVER(0x02DD)
   /* check call context */
   if ((osdValidCtx_ActivateTask & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x02DE)
      osAPIError(E_OS_CALLEVEL, osdErrATCallContext);
      OS_AT_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x02DF)

   if (taskIndex >= osrNumberOfAllTasks)
   {
      COVER(0x02E0)
      osAPIError(E_OS_ID, osdErrATWrongTaskID);
      OS_AT_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x02E1)
   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x02E2)
      osAPIError(E_OS_DISABLEDINT, osdErrATIntAPIDisabled);
      OS_AT_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x02E3)
   /* check access rights for this object */
   if (((oskApplTaskAccess[taskIndex] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x02E4)
      osAPIError(E_OS_ACCESS, osdErrATNoAccess);
      OS_AT_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x02E5)


   COVER(0x02E6)
   /* user API may only be called with enabled interrupts, no nesting necessary. */
   /* KB begin osekHWosSaveDisableLevel (overwritten) */
   osSaveDisableLevel() /* save level and disable up to system level, no nesting */
   /* KB end osekHWosSaveDisableLevel */
   OS_AT_START_CRITICAL()



   if (osTcbActivationCount[taskIndex] >= oskTcbAllowedActivations[taskIndex])
   {
      COVER(0x02E7)
      osSaveActivateTask_TaskID(taskIndex)
      COVER(0x02E8)
      osAPIError(E_OS_LIMIT, osdErrATMultipleActivation);
      COVER(0x02E9)
      OS_AT_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevel (overwritten) */
      osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
      /* KB end osekHWosRestoreEnableLevel */
      OS_AT_EXIT()
      return E_OS_LIMIT;
   }
   ELSEWITHCOVER(0x02EA)


      COVER(0x02EB)
      /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
      /* KB end osekHWosDisableTimProtInterrupt */

      OS_VTH_CALL_ACTIVATION_HOOK(((TaskType) taskIndex))

      if (osTcbActivationCount[taskIndex] == 0)
      {
         COVER(0x02EC)
         osTcbTaskState[taskIndex] = PRE_READY;
      }
      ELSEWITHCOVER(0x02ED)
      osTcbActivationCount[taskIndex]++;

      if(taskIndex<osrNumberOfExtendedTasks)
      {
         COVER(0x02EE)
         osTcbSetEventMask[taskIndex]= 0;    /* with extended tasks clear event field */
      }
      ELSEWITHCOVER(0x02EF)

      osSchedInsertTask(taskIndex);

      /* start dispatcher only if requested by the scheduler */

      if (osdTRUE == ptrToCcb->ossStartDispatcher)
      {
         COVER(0x02F0)
            if (osOwnCcb->LockIsNotNeeded.ossLockDispatcher == 0)
            {
               /* trigger the dispatcher on the current core */
               COVER(0x02F1)
               COVER(0x02F2)
               /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
               /* KB end osekHWosEnableTimProtInterrupt */

               OS_AT_END_CRITICAL()

               /* KB begin osekHWosRestoreEnableLevel (overwritten) */
               osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
               /* KB end osekHWosRestoreEnableLevel */
               OS_AT_EXIT()
               OS_START_DISPATCH()
               /* KB begin osekHWosLocalDispatcher (overwritten) */
               ptrToCcb2->ossCallDispatcher = 1;
               /* KB end osekHWosLocalDispatcher */
               return E_OK;
            }
            ELSEWITHCOVER(0x02F3)
      }
      ELSEWITHCOVER(0x02F4)


      /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
      /* KB end osekHWosEnableTimProtInterrupt */



   OS_AT_END_CRITICAL()

   OS_AT_EXIT()
   COVER(0x02F5)
   /* KB begin osekHWosRestoreEnableLevel (overwritten) */
   osRestoreEnableLevel() /* restore level saved by osSaveDisableLevel */
   /* KB end osekHWosRestoreEnableLevel */
   COVER(0x02F6)
   return E_OK;

/* KB end actTaskBody */
}



/* version for OS internal use, not using osDisable/osEnable */
/*
 * MISRA RULE 14.1 VIOLATION: The function osSysActivateTask is unused in some configurations. In order to keep the code 
 * simple and error free, it is available in more configurations than necessary.
 */
osqFunc1 StatusType osqFunc2 osSysActivateTask(TaskType taskIndex) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osSysActivateTask */
/* KB begin sysActTaskBody (default) */

   OS_AT_ENTRY()
   COVER(0x02F7)

   COVER(0x02F8)
   /* this function is called with disabled interrupts, no disabling necessary. */



   if (osTcbActivationCount[taskIndex] >= oskTcbAllowedActivations[taskIndex])
   {
      COVER(0x02F9)
      osSaveActivateTask_TaskID(taskIndex)
      COVER(0x02FA)
      osAPIError(E_OS_LIMIT, osdErrATAlarmMultipleActivation);
      OS_AT_EXIT()
      return E_OS_LIMIT;
   }
   ELSEWITHCOVER(0x02FB)


      OS_VTH_CALL_ACTIVATION_HOOK(((TaskType) taskIndex))

      if (osTcbActivationCount[taskIndex] == 0)
      {
         COVER(0x02FC)
         osTcbTaskState[taskIndex] = PRE_READY;
      }
      ELSEWITHCOVER(0x02FD)
      osTcbActivationCount[taskIndex]++;

      if(taskIndex<osrNumberOfExtendedTasks)
      {
         COVER(0x02FE)
         osTcbSetEventMask[taskIndex]= 0;    /* with extended tasks clear event field */
      }
      ELSEWITHCOVER(0x02FF)

      osSchedInsertTask(taskIndex);



   OS_AT_EXIT()
   COVER(0x0300)
   return E_OK;

/* KB end sysActTaskBody */
}

/*-+--------------------------------------------------------------------------
 / TerminateTask
 / =============
 /
 / Syntax:          StatusType TerminateTask ( void )
 / Parameter (In):  none
 / Parameter (Out): none
 / Description:     This service causes the termination of the calling task. 
 /                  The calling task is transferred from the running state 
 /                  into the suspended state.
 / Particularities: An internal resource assigned to the calling task is
 /                  automatically released. Other resources occupied by the 
 /                  task must have been released before the call of 
 /                  TerminateTask. If a resource is still occupied in standard 
 /                  status the behaviour is undefined.
 /                  If the call was successful, TerminateTask does not return 
 /                  to the call level and the status can not be evaluated.
 /                  If the version with extended status is used, the service 
 /                  returns in case of error, and provides a status which 
 /                  can be evaluated in the application.
 /                  If the service TerminateTask is called successfully, 
 /                  it enforces a rescheduling.
 /  -SC1/SC2 only:  Ending a task function without call of TerminateTask or
 /                  ChainTask is strictly forbidden and may leave the system 
 /                  in an undefined state. This error is detected and reported
 /                  by osCAN in extended status.
 /  -SC3/SC4 only:  Ending a task function without call of TerminateTask or
 /                  ChainTask is reported by a call of the ErrorHook, 
 /                  afterwards interrupts are enabled, resources released
 /                  and a task switch is performed like TerminateTask had
 /                  been called.
 / Status:
 /  -Standard:      No return to call level
 /  -Extended:      - Task still occupies resources, E_OS_RESOURCE
 /                  - Call at interrupt level, E_OS_CALLEVEL
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, interrupts enabled, no resources occupied
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osTerminateTask is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osTerminateTask (void)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osTerminateTask */
   
   TaskType taskIndex = osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex;
   
   OS_TT_ENTRY()
   COVER(0x0301)

   /* check call context */
   if ((osdValidCtx_TerminateTask & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0302)
      osAPIError(E_OS_CALLEVEL, osdErrTTCallContext);
      OS_TT_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x0303)

   osSysErrAssert(taskIndex < osrNumberOfAllTasks, osdErrTTWrongActiveTaskID)


   /* check for task resources only system */
   if (osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio != oskTcbHomePrio[taskIndex])
   {
      COVER(0x0304)
      osAPIError(E_OS_RESOURCE, osdErrTTResourcesOccupied);
      OS_TT_EXIT()
      return E_OS_RESOURCE;
   }
   ELSEWITHCOVER(0x0305)

   if (osCheckInterruptsEnabled() == 0)
   {
      COVER(0x0306)
      osAPIError(E_OS_DISABLEDINT, osdErrTTDisabledInterrupts);
      OS_TT_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0307)

   COVER(0x0308)
   /* KB begin osekHWosDisableLevel (overwritten) */
   osDisableLevel(); /* disable interrupts up to system level */
   /* KB end osekHWosDisableLevel */
   OS_TT_START_CRITICAL()

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

#if osdPostTaskHook
   COVER(0x0309)
   /* call PostTaskHook before clearing osRunTaskIndex! */
   osPostTaskHook();
#endif


   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */


   COVER(0x030A)
   osSysErrAssert(osTcbActivationCount[taskIndex], osdErrTTNotActivated)
   
   COVER(0x030B)
   osTcbActivationCount[taskIndex]--;
   
   if (osTcbActivationCount[taskIndex] != 0)
   {  
      COVER(0x030C)
      osTcbTaskState[taskIndex] = PRE_READY;
   }
   else
   {
      COVER(0x030D)
      osTcbTaskState[taskIndex] = SUSPENDED;
   }
   
   osSchedRemoveRunningTask();

   COVER(0x030E)
   /* KB begin osPrepareForStackCorrection (default) */
   /* KB end osPrepareForStackCorrection */

   osOwnCcb->LockIsNotNeeded.ossLastActiveTaskIndex = taskIndex;

   osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex = osdNoActiveTask;
   osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio  = osdNoActivePrio;

   /* for TerminateTask, osSchedRemoveRunningTask() always sets
    * ossStartDispatcher to osdTRUE
    * (same task is never running when reaching this point of code) */

   OS_TT_END_CRITICAL()
   OS_TT_EXIT()

   /* KB begin osekHWosEnableLevel (overwritten) */
   osEnableLevel(); /* enable task level interrupt */
   /* KB end osekHWosEnableLevel */

   /* start dispatcher */
   OS_START_DISPATCH()
   /* KB begin osekHWosLocalDispatcher (overwritten) */
   ptrToCcb2->ossCallDispatcher = 1;
   /* KB end osekHWosLocalDispatcher */

   /* KB begin osekHWosRollBackStack (default) */
   /* KB end osekHWosRollBackStack */
/* TR:SPMF12:0011 Start */
   /* KB begin osekHWAfterOsDispatchInTT (overwritten) */
   osDisableGlobal();
   return E_OK;
   /* KB end osekHWAfterOsDispatchInTT */
/* TR:SPMF12:0011 End */

} /* END OF osTerminateTask */

/*-+--------------------------------------------------------------------------
 / ChainTask
 / =========
 /
 / Syntax:          StatusType ChainTask ( TaskType <TaskID> )
 / Parameter (In):  TaskID Reference to the task to be activated after the 
 /                  current task has been terminated.
 / Parameter (Out): none
 / Description:     This service causes the termination of the calling task. 
 /                  After termination of the calling task a succeeding 
 /                  task <TaskID> is activated. Using this service 
 /                  ensures that the succeeding task starts to run 
 /                  earliest after the calling task has been terminated.
 / Particularities: If the succeeding task is identical with the current task, 
 /                  this does not result in multiple requests. The task is not 
 /                  transferred to the suspended state. An internal resource 
 /                  assigned to the calling task is automatically released, 
 /                  even if the succeeding task is identical with the current 
 /                  task. Other resources occupied by the calling task must 
 /                  have been released before ChainTask is called. If a 
 /                  resource is still occupied in standard status the 
 /                  behaviour is undefined.
 /                  If called successfully, ChainTask does not return to the 
 /                  call level and the status can not be evaluated.
 /                  In case of error the service returns to the calling task 
 /                  and provides a status which can then be evaluated in the
 /                  application.
 /                  If the service ChainTask is called successfully, this 
 /                  enforces a rescheduling.
 /                  If E_OS_LIMIT is returned the activation is ignored.
 /                  When an extended task is transferred from suspended state
 /                  into ready state all its events are cleared.
 /  -SC1/SC2 only:  Ending a task function without call of TerminateTask or
 /                  ChainTask is strictly forbidden and may leave the system 
 /                  in an undefined state. This error is detected and reported
 /                  by osCAN in extended status.
 /  -SC3/SC4 only:  Ending a task function without call of TerminateTask or
 /                  ChainTask is reported by a call of the ErrorHook, 
 /                  afterwards interrupts are enabled, resources released
 /                  and a task switch is performed like TerminateTask had
 /                  been called.
 / Status:
 /  -Standard:      - No return to call level
 /                  - Too many task activations of <TaskID>, E_OS_LIMIT
 /  -Extended:      - Task <TaskID> is invalid, E_OS_ID
 /                  - Calling task still occupies resources, E_OS_RESOURCE
 /                  - Call at interrupt level, E_OS_CALLEVEL
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, interrupts enabled, no resources occupied
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osChainTask is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osChainTask(TaskType taskIndex)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osChainTask */
   
   TaskType activeTaskID;

   OS_HT_ENTRY()
   COVER(0x030F)

   /* check call context */
   if ((osdValidCtx_ChainTask & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0310)
      osAPIError(E_OS_CALLEVEL, osdErrHTCallContext);
      OS_HT_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x0311)

   activeTaskID = osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex;
   
   osSysErrAssert(activeTaskID < osrNumberOfAllTasks, osdErrHTWrongActiveTaskID)


   if (osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio != oskTcbHomePrio[activeTaskID])
   {
      COVER(0x0312)
      osAPIError(E_OS_RESOURCE, osdErrHTResourcesOccupied);
      OS_HT_EXIT()
      return E_OS_RESOURCE;
   }
   ELSEWITHCOVER(0x0313)

   if (taskIndex >= osrNumberOfAllTasks)
   {
      COVER(0x0314)
      osAPIError(E_OS_ID, osdErrHTWrongTaskID);
      OS_HT_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x0315)

   if (osCheckInterruptsEnabled() == 0)
   {
      COVER(0x0316)
      osAPIError(E_OS_DISABLEDINT, osdErrHTInterruptsDisabled);
      OS_HT_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0317)
   /* check access rights for this object */
   if (((oskApplTaskAccess[taskIndex] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x0318)
      osAPIError(E_OS_ACCESS, osdErrHTNoAccess);
      OS_HT_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0319)

   COVER(0x031A)
   /* KB begin osekHWosDisableLevel (overwritten) */
   osDisableLevel(); /* disable interrupts up to system level */
   /* KB end osekHWosDisableLevel */
   OS_HT_START_CRITICAL()



   if (taskIndex != activeTaskID)
   {
      if (osTcbActivationCount[taskIndex] >= oskTcbAllowedActivations[taskIndex])
      {
         COVER(0x031B)
         osSaveChainTask_TaskID(taskIndex)
         osAPIError(E_OS_LIMIT, osdErrHTMultipleActivation);
         OS_HT_END_CRITICAL()
         OS_HT_EXIT()
         /* KB begin osekHWosEnableLevel (overwritten) */
         osEnableLevel(); /* enable task level interrupt */
         /* KB end osekHWosEnableLevel */
         return E_OS_LIMIT;
      }
      ELSEWITHCOVER(0x031C)
   }
   ELSEWITHCOVER(0x031D)

   /*************************************************************************
    * terminate old task
    *************************************************************************/

   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   /* call hook routine for the terminated task */
#if osdPostTaskHook
   COVER(0x031E)
   /* call PostTaskHook before clearing osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex! */
   osPostTaskHook();
#endif

   COVER(0x031F)
   osSysErrAssert(osTcbActivationCount[activeTaskID], osdErrHTNotActivated)

   osTcbActivationCount[activeTaskID]--;

   if (osTcbActivationCount[activeTaskID] != 0)
   {  
      COVER(0x0320)
      osTcbTaskState[activeTaskID] = PRE_READY;
   }
   else
   {
      COVER(0x0321)
      osTcbTaskState[activeTaskID] = SUSPENDED;
   }

   COVER(0x0322)
   osSchedRemoveRunningTask();

   /* KB begin osPrepareForStackCorrection (default) */
   /* KB end osPrepareForStackCorrection */

   osOwnCcb->LockIsNotNeeded.ossLastActiveTaskIndex = activeTaskID;


   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex = osdNoActiveTask;
   osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio  = osdNoActivePrio;



      /*************************************************************************
       * now activate the new task
       *************************************************************************/

      OS_VTH_CALL_ACTIVATION_HOOK(((TaskType) taskIndex))

         /* with extended tasks clear event field */
         if(taskIndex < osrNumberOfExtendedTasks)
         {
            COVER(0x0323)
            osTcbSetEventMask[taskIndex]= 0;
         }
         ELSEWITHCOVER(0x0324)

         if (osTcbActivationCount[taskIndex] == 0)
         {
            COVER(0x0325)
            osTcbTaskState[taskIndex] = PRE_READY;
         }
         ELSEWITHCOVER(0x0326)
         osTcbActivationCount[taskIndex]++;
         COVER(0x0327)
         osSchedInsertTask(taskIndex);
   COVER(0x0328)


   OS_HT_END_CRITICAL()
   OS_HT_EXIT()

   /* KB begin osekHWosEnableLevel (overwritten) */
   osEnableLevel(); /* enable task level interrupt */
   /* KB end osekHWosEnableLevel */

   /* for ChainTask, osSchedRemoveRunningTask() always sets
    * ossStartDispatcher to osdTRUE
    * (same task is never running when reaching this point of code) */
   /* start dispatcher */
   OS_START_DISPATCH()
   /* KB begin osekHWosLocalDispatcher (overwritten) */
   ptrToCcb2->ossCallDispatcher = 1;
   /* KB end osekHWosLocalDispatcher */

   /* KB begin osekHWosRollBackStack (default) */
   /* KB end osekHWosRollBackStack */
   /* TR:SPMF12:0012 Start */
   /* KB begin osekHWAfterOsDispatchInHT (overwritten) */
   osDisableGlobal();
   return E_OK;
   /* KB end osekHWAfterOsDispatchInHT */
   /* TR:SPMF12:0012 End */

} /* END OF osChainTask */
/*-+--------------------------------------------------------------------------
 / Schedule
 / ========
 /
 / Syntax:          StatusType Schedule ( void )
 / Parameter (In):  none
 / Parameter (Out): none
 / Description:     If a higher-priority task is ready, the internal resource 
 /                  of the current task is released, the current task is put 
 /                  into the ready state, its context is saved and the 
 /                  higher-priority task is executed.
 /                  Otherwise the calling task is continued.
 / Particularities: Rescheduling can only take place if an internal resource is
 /                  assigned to the calling task during system generation.
 /                  (A non-preemptable task is seen as a task with a resource
 /                  of highest task priority assigned.) For these tasks, Schedule 
 /                  enables a processor assignment to other tasks with lower 
 /                  priority than the ceiling priority of the internal
 /                  resource and higher priority than the priority of the 
 /                  calling task in application-specific locations. 
 /                  When returning from Schedule, the internal resource has 
 /                  been taken again.
 /                  This service has no influence on tasks with no internal 
 /                  resource assigned (preemptable tasks).
 / Status:
 /  -Standard:      - No error, E_OK
 /  -Extended:      - Call at interrupt level, E_OS_CALLEVEL
 /                  - Calling task occupies resources, E_OS_RESOURCE
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, interrupts enabled, no resources occupied
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osSchedule is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osSchedule(void)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osSchedule */
   
   TaskType activeTaskID;

   OS_SH_ENTRY()

   COVER(0x0329)
   /* check call context */
   if ((osdValidCtx_Schedule & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x032A)
      osAPIError(E_OS_CALLEVEL, osdErrSHCallContext);
      OS_SH_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x032B)

   if (osCheckInterruptsEnabled() == 0)
   {
      COVER(0x032C)
      osAPIError(E_OS_DISABLEDINT, osdErrSHInterruptsDisabled);
      OS_SH_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x032D)

   activeTaskID = osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex;
   osSysErrAssert(activeTaskID < osrNumberOfAllTasks, osdErrSHWrongActiveTaskID)


   /* check for task resources only system */
   if (osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio != oskTcbHomePrio[activeTaskID])
   {
      COVER(0x032E)
      osAPIError(E_OS_RESOURCE, osdErrSHResourcesOccupied);
      OS_SH_EXIT()
      return E_OS_RESOURCE;
   }
   ELSEWITHCOVER(0x032F)

   osSysErrAssert(((oskTcbTaskFlags[activeTaskID] & osdTaskFlagNotUsingSchedule) == 0U),
       osdErrSHScheduleNotAllowed)   /* NOCOV */     


   COVER(0x0330)
   /* KB begin osekHWosDisableLevel (overwritten) */
   osDisableLevel(); /* disable interrupts up to system level */
   /* KB end osekHWosDisableLevel */
   OS_SH_START_CRITICAL()
   /* KB begin osekHWosDisableTimProtInterrupt (overwritten) */
   /* KB end osekHWosDisableTimProtInterrupt */

   osSchedOnHomePrio();

   if (osdTRUE == ptrToCcb->ossStartDispatcher)
   {
      COVER(0x0331)
      OS_SH_END_CRITICAL()
      OS_SH_EXIT()
      /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
      /* KB end osekHWosEnableTimProtInterrupt */
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
   ELSEWITHCOVER(0x0332)


   COVER(0x0333)
   
   /* KB begin osekHWosEnableTimProtInterrupt (overwritten) */
   /* KB end osekHWosEnableTimProtInterrupt */
   OS_SH_END_CRITICAL()
   OS_SH_EXIT()
   /* KB begin osekHWosEnableLevel (overwritten) */
   osEnableLevel(); /* enable task level interrupt */
   /* KB end osekHWosEnableLevel */
   return E_OK;
} /* END OF osSchedule */

/*-+--------------------------------------------------------------------------
 / GetTaskID
 / =========
 /
 / Syntax:          StatusType GetTaskID ( TaskRefType <TaskID> )
 / Parameter (In):  none
 / Parameter (Out): TaskID Reference to the task which is currently running
 / Description:     GetTaskID writes the information about the TaskID of the 
 /                  task which is currently running to the location, defined
 /                  by the reference TaskID.
 / Particularities: Allowed on task level, ISR level and in several hook 
 /                  routines.
 /                  This service is intended to be used by library functions 
 /                  and hook routines.
 /                  If <TaskID> can't be evaluated (no task currently 
 /                  running), the service returns INVALID_TASK as TaskID.
 / Status:
 /  -Standard:      - No error, E_OK
 /  -Extended:      - No error, E_OK
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, Cat2-ISR, ErrorHook, PreTaskHook, PostTaskHook,
 /                  ProtectionHook, interrupts not disabled by the 
 /                  application
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osGetTaskID is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osGetTaskID (TaskRefType TaskId)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetTaskID */
   /* KB begin osekHWGetTaskIDLocalVars (overwritten) */
   /* KB end osekHWGetTaskIDLocalVars */

   OS_GI_ENTRY()
   COVER(0x0334)

   /* check call context */
   if ((osdValidCtx_GetTaskID & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0335)
      osAPIError(E_OS_CALLEVEL, osdErrGICallContext);
      OS_GI_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x0336)


   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0337)
      osAPIError(E_OS_DISABLEDINT, osdErrGIIntAPIDisabled);
      OS_GI_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0338)

   COVER(0x0339)
   COVER(0x033A)
   /* KB begin osekHWGetTaskIDParamWrite (overwritten) */
   *TaskId= ptrToCcb2->ossActiveTaskIndex;
   /* KB end osekHWGetTaskIDParamWrite */

   OS_GI_EXIT()
   return E_OK;
} /* END OF osGetTaskID */

/*-+--------------------------------------------------------------------------
 / GetTaskState
 / ============
 /
 / Syntax:          StatusType GetTaskState ( TaskType <TaskID>,
 /                                            TaskStateRefType <State> )
 / Parameter (In):  TaskID Task reference
 / Parameter (Out): State Reference to the state of the task <TaskID>
 / Description:     Writes the current state of a task (RUNNING, READY, WAITING, 
 /                  SUSPENDED) to the location, defined by the parameter
 /                  State.
 / Particularities: The service may be called from interrupt service routines, 
 /                  task level, and some hook routines.
 /                  When a call is made from a task in a full preemptive system,
 /                  the result may already be incorrect at the time of 
 /                  evaluation.
 /                  When the service is called for a task, which is multiply
 /                  activated, the state is set to running if any instance 
 /                  of the task is running.
 / Status:
 /  -Standard:      - No error, E_OK
 /  -Extended:      - Task <TaskID> is invalid, E_OS_ID
 /                  - Call with disabled interrupts, E_OS_DISABLEDINT
 / Conformance:     BCC1, BCC2, ECC1, ECC2
 / Context:         Task, Cat2-ISR, ErrorHook, PreTaskHook, PostTaskHook,
 /                  interrupts not disabled by the application
/--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osGetTaskState is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osGetTaskState(TaskType TaskId, TaskStateRefType State)   /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetTaskState */
   /* KB begin osekHWGetTaskStateLocalVars (overwritten) */
   /* KB end osekHWGetTaskStateLocalVars */

   OS_GS_ENTRY()
   COVER(0x033B) 

   /* check call context */
   if ((osdValidCtx_GetTaskState & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x033C) 
      osAPIError(E_OS_CALLEVEL, osdErrGSCallContext);
      OS_GS_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x033D) 

   if (TaskId >= osrNumberOfAllTasks)
   {
      COVER(0x033E) 
      osAPIError(E_OS_ID, osdErrGSWrongTaskID);
      OS_GS_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x033F) 

   /* check access rights for this object */
   if (((oskApplTaskAccess[TaskId] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x0340) 
      osAPIError(E_OS_ACCESS, osdErrGSNoAccess);
      OS_GS_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x0341) 



   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0342) 
      osAPIError(E_OS_DISABLEDINT, osdErrGSIntAPIDisabled);
      OS_GS_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0343) 


   COVER(0x0344) 
   /* KB begin osekHWGetTaskStateParamWrite (overwritten) */
   *State = osTcbTaskState[TaskId];
   if ((*State) == PRE_READY)
   {
      COVER(0x0345)
      (*State) = READY; /* change PRE_READY to READY */
   }
   /* KB end osekHWGetTaskStateParamWrite */

   OS_GS_EXIT()
   return E_OK;
} /* END OF osGetTaskState */


#if (osdNumberOfAllTasks == 0)
/* KB begin osekHWosOsekTaskDummy (default) */
/* KB end osekHWosOsekTaskDummy */
#endif /* (osdNumberOfAllTasks == 0) */

/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */

/* END OF MODULE osektask.c */

