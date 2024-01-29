/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: testmac1.h
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.40
|
|  Description: test API macro definitions
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: testmac1.h */
/* double include preventer */
#ifndef _TESTMAC1_H
#define _TESTMAC1_H

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


#define osdORTINoService              0

/*******************/
/* Task management */
/*******************/
#define osdORTIActivateTask           1
#define osdORTITerminateTask          2
#define osdORTIChainTask              3
#define osdORTISchedule               4
#define osdORTIGetTaskID              5
#define osdORTIGetTaskState           6

/**********************/
/* Interrupt handling */
/**********************/
#define osdORTIResumeAllInterrupts    7
#define osdORTISuspendAllInterrupts   8
#define osdORTIEnableAllInterrupts    12
#define osdORTIDisableAllInterrupts   13
#define osdORTIResumeOSInterrupts     14
#define osdORTISuspendOSInterrupts    15

/***********************/
/* Resource management */
/***********************/
#define osdORTIGetResource            16
#define osdORTIReleaseResource        17

/*****************/
/* Event control */
/*****************/
#define osdORTISetEvent               18
#define osdORTIClearEvent             19
#define osdORTIGetEvent               20
#define osdORTIWaitEvent              21

/**********/
/* Alarms */
/**********/
#define osdORTIGetAlarmBase           22
#define osdORTIGetAlarm               23
#define osdORTISetRelAlarm            24
#define osdORTISetAbsAlarm            25
#define osdORTICancelAlarm            26


/************/
/* Counters */
/************/

#define osdORTIIncrementCounter       27

/*******************/
/* Schedule tables */
/*******************/

#define osdORTIStartScheduleTableRel  28
#define osdORTIStartScheduleTableAbs  29
#define osdORTIStopScheduleTable      30
#define osdORTIGetScheduleTableStatus 31
#define osdORTINextScheduleTable      32

/**************************************/
/* Operating system execution control */
/**************************************/
#define osdORTIGetActiveApplicationMode 33
#define osdORTIStartOS                34
#define osdORTIShutdownOS             35

/*****************/
/* Hook routines */
/*****************/
#define osdORTIErrorHook              36
#define osdORTIPreTaskHook            37 
#define osdORTIPostTaskHook           38
#define osdORTIStartupHook            39
#define osdORTIShutdownHook           40

/*****************/
/* Misc routines */
/*****************/
#define osdORTIIdleEntry              52
#define osdORTISytemTimer             53 
#define osdORTIStartDispatch          54
#define osdORTIGetISRID               55

/************************/
/* Application routines */
/************************/
#define osdORTIGetApplicationID       56
/********************/
/* SC3/SC4 routines */
/********************/
#define osdORTITerminateApplication   57
#define osdORTICallTrustedFunction    58
#define osdORTICheckObjectAccess      59
#define osdORTICheckObjectOwnership   60
#define osdORTICheckTaskMemoryAccess  61
#define osdORTICheckISRMemoryAccess   62
#define osdORTICallNonTrustedFunction 63

/********************/
/* SC2/SC4 routines */
/********************/
#define osdORTISyncScheduleTable      64
#define osdORTISetScheduleTableAsync  65
#define osdORTIStartScheduleTableSynchron  66

#define osdORTIGetSemaphore           67
#define osdORTIReleaseSemaphore       68

#define osdORTIGetApplicationState    69
#define osdORTIAllowAccess            70

#define osdORTIGetCounterValue        71
#define osdORTIGetElapsedValue        72



  #define osORTISetCurrentServiceId(x)   (osOwnCcb->LockIsNotNeeded.ossORTICurrentServiceId = (((x)<<1)+1) )
  #define osORTIResetCurrentServiceId(x) (osOwnCcb->LockIsNotNeeded.ossORTICurrentServiceId = ( (x)<<1   ) )




/*******************/
/* Task management */
/*******************/

/* ActivateTask */
#define OS_AT_ENTRY()            osORTISetCurrentServiceId(osdORTIActivateTask);
#define OS_AT_EXIT()             osORTIResetCurrentServiceId(osdORTIActivateTask);
#define OS_AT_START_CRITICAL()
#define OS_AT_END_CRITICAL()

/* TerminateTask */
#define OS_TT_ENTRY()            osORTISetCurrentServiceId(osdORTITerminateTask);
#define OS_TT_EXIT()             osORTIResetCurrentServiceId(osdORTITerminateTask);
#define OS_TT_START_CRITICAL()
#define OS_TT_END_CRITICAL()

/* ChainTask */
#define OS_HT_ENTRY()            osORTISetCurrentServiceId(osdORTIChainTask);
#define OS_HT_EXIT()             osORTIResetCurrentServiceId(osdORTIChainTask);
#define OS_HT_START_CRITICAL()
#define OS_HT_END_CRITICAL()

/* Schedule */
#define OS_SH_ENTRY()            osORTISetCurrentServiceId(osdORTISchedule);
#define OS_SH_EXIT()             osORTIResetCurrentServiceId(osdORTISchedule);
#define OS_SH_START_CRITICAL()
#define OS_SH_END_CRITICAL()

/* osGetTaskID */
#define OS_GI_ENTRY()            osORTISetCurrentServiceId(osdORTIGetTaskID);
#define OS_GI_EXIT()             osORTIResetCurrentServiceId(osdORTIGetTaskID);
#define OS_GI_START_CRITICAL()
#define OS_GI_END_CRITICAL()
             
/* osGetTaskState */
#define OS_GS_ENTRY()            osORTISetCurrentServiceId(osdORTIGetTaskState);
#define OS_GS_EXIT()             osORTIResetCurrentServiceId(osdORTIGetTaskState);
#define OS_GS_START_CRITICAL()
#define OS_GS_END_CRITICAL()


/**********************/
/* Interrupt handling */
/**********************/

/* ResumeAllInterrupts */
#define OS_RA_ENTRY()            osORTISetCurrentServiceId(osdORTIResumeAllInterrupts);
#define OS_RA_EXIT()             osORTIResetCurrentServiceId(osdORTIResumeAllInterrupts);
#define OS_RA_START_CRITICAL()
#define OS_RA_END_CRITICAL()

/* SuspendAllInterrupts */
#define OS_PA_ENTRY()            osORTISetCurrentServiceId(osdORTISuspendAllInterrupts);
#define OS_PA_EXIT()             osORTIResetCurrentServiceId(osdORTISuspendAllInterrupts);
#define OS_PA_START_CRITICAL()
#define OS_PA_END_CRITICAL()

/* EnableAllInterrupts */
#define OS_EA_ENTRY()            osORTISetCurrentServiceId(osdORTIEnableAllInterrupts);
#define OS_EA_EXIT()             osORTIResetCurrentServiceId(osdORTIEnableAllInterrupts);
#define OS_EA_START_CRITICAL()
#define OS_EA_END_CRITICAL()
 
/* DisableAllInterrupts */
#define OS_DA_ENTRY()            osORTISetCurrentServiceId(osdORTIDisableAllInterrupts);
#define OS_DA_EXIT()             osORTIResetCurrentServiceId(osdORTIDisableAllInterrupts);
#define OS_DA_START_CRITICAL()
#define OS_DA_END_CRITICAL()

/* ResumeOSInterrupts */
#define OS_RI_ENTRY()            osORTISetCurrentServiceId(osdORTIResumeOSInterrupts);
#define OS_RI_EXIT()             osORTIResetCurrentServiceId(osdORTIResumeOSInterrupts);
#define OS_RI_START_CRITICAL()
#define OS_RI_END_CRITICAL()

/* SuspendOSInterrupts */
#define OS_SI_ENTRY()            osORTISetCurrentServiceId(osdORTISuspendOSInterrupts);
#define OS_SI_EXIT()             osORTIResetCurrentServiceId(osdORTISuspendOSInterrupts);
#define OS_SI_START_CRITICAL()
#define OS_SI_END_CRITICAL()


/***********************/
/* Resource management */
/***********************/

/* GetResource */
#define OS_GR_ENTRY()            osORTISetCurrentServiceId(osdORTIGetResource);
#define OS_GR_EXIT()             osORTIResetCurrentServiceId(osdORTIGetResource);
#define OS_GR_START_CRITICAL()
#define OS_GR_END_CRITICAL()

/* ReleaseResource */
#define OS_RR_ENTRY()            osORTISetCurrentServiceId(osdORTIReleaseResource);
#define OS_RR_EXIT()             osORTIResetCurrentServiceId(osdORTIReleaseResource);
#define OS_RR_START_CRITICAL()
#define OS_RR_END_CRITICAL()

/* GetSemaphore */
#define OS_GM_ENTRY()            osORTISetCurrentServiceId(osdORTIGetSemaphore);
#define OS_GM_EXIT()             osORTIResetCurrentServiceId(osdORTIGetSemaphore);
#define OS_GM_START_CRITICAL()
#define OS_GM_END_CRITICAL()

/* ReleaseSemaphore */
#define OS_RS_ENTRY()            osORTISetCurrentServiceId(osdORTIReleaseSemaphore);
#define OS_RS_EXIT()             osORTIResetCurrentServiceId(osdORTIReleaseSemaphore);
#define OS_RS_START_CRITICAL()
#define OS_RS_END_CRITICAL()


/*****************/
/* Event control */
/*****************/
#define OS_IM_ENTRY()
#define OS_IM_EXIT()
#define OS_IM_START_CRITICAL()
#define OS_IM_END_CRITICAL()

/* SetEvent */
#define OS_SE_ENTRY()            osORTISetCurrentServiceId(osdORTISetEvent);
#define OS_SE_EXIT()             osORTIResetCurrentServiceId(osdORTISetEvent);
#define OS_SE_START_CRITICAL()
#define OS_SE_END_CRITICAL()
                           
/* ClearEvent */
#define OS_CE_ENTRY()            osORTISetCurrentServiceId(osdORTIClearEvent);
#define OS_CE_EXIT()             osORTIResetCurrentServiceId(osdORTIClearEvent);
#define OS_CE_START_CRITICAL()
#define OS_CE_END_CRITICAL()
                           
/* GetEvent */
#define OS_GE_ENTRY()            osORTISetCurrentServiceId(osdORTIGetEvent);
#define OS_GE_EXIT()             osORTIResetCurrentServiceId(osdORTIGetEvent);
#define OS_GE_START_CRITICAL()
#define OS_GE_END_CRITICAL()
                           
/* WaitEvent */
#define OS_WE_ENTRY()            osORTISetCurrentServiceId(osdORTIWaitEvent);
#define OS_WE_EXIT()             osORTIResetCurrentServiceId(osdORTIWaitEvent);
#define OS_WE_START_CRITICAL()
#define OS_WE_END_CRITICAL()


/**********/
/* Alarms */
/**********/

/* GetAlarmBase */
#define OS_GB_ENTRY()            osORTISetCurrentServiceId(osdORTIGetAlarmBase);
#define OS_GB_EXIT()             osORTIResetCurrentServiceId(osdORTIGetAlarmBase);
#define OS_GB_START_CRITICAL()
#define OS_GB_END_CRITICAL()
                  
/* SetRelAlarm */
#define OS_SA_ENTRY()            osORTISetCurrentServiceId(osdORTISetRelAlarm);
#define OS_SA_EXIT()             osORTIResetCurrentServiceId(osdORTISetRelAlarm);
#define OS_SA_START_CRITICAL()
#define OS_SA_END_CRITICAL()

/* SetAbsAlarm */
#define OS_SL_ENTRY()            osORTISetCurrentServiceId(osdORTISetAbsAlarm);
#define OS_SL_EXIT()             osORTIResetCurrentServiceId(osdORTISetAbsAlarm);
#define OS_SL_START_CRITICAL()
#define OS_SL_END_CRITICAL()

/* CancelAlarm */
#define OS_CA_ENTRY()            osORTISetCurrentServiceId(osdORTICancelAlarm);
#define OS_CA_EXIT()             osORTIResetCurrentServiceId(osdORTICancelAlarm);
#define OS_CA_START_CRITICAL()
#define OS_CA_END_CRITICAL()

/* GetAlarm */
#define OS_GA_ENTRY()            osORTISetCurrentServiceId(osdORTIGetAlarm);
#define OS_GA_EXIT()             osORTIResetCurrentServiceId(osdORTIGetAlarm);
#define OS_GA_START_CRITICAL()
#define OS_GA_END_CRITICAL()

/************/
/* Counters */
/************/

/* IncrementCounter */
#define OS_IC_ENTRY()            osORTISetCurrentServiceId(osdORTIIncrementCounter);
#define OS_IC_EXIT()             osORTIResetCurrentServiceId(osdORTIIncrementCounter);
/*x = counter index*/
#define OS_IC_START_CRITICAL()
#define OS_IC_END_CRITICAL()

/* GetCounterValue */
#define OS_GC_ENTRY()            osORTISetCurrentServiceId(osdORTIGetCounterValue);
#define OS_GC_EXIT()             osORTIResetCurrentServiceId(osdORTIGetCounterValue);
#define OS_GC_START_CRITICAL()
#define OS_GC_END_CRITICAL()

/* GetElapsed(Counter)Value */
#define OS_GV_ENTRY()            osORTISetCurrentServiceId(osdORTIGetElapsedValue);
#define OS_GV_EXIT()             osORTIResetCurrentServiceId(osdORTIGetElapsedValue);

#define OS_GV_START_CRITICAL()
#define OS_GV_END_CRITICAL()

/*******************/
/* Schedule tables */
/*******************/

/* StartScheduleTableRel */
#define OS_SR_ENTRY()            osORTISetCurrentServiceId(osdORTIStartScheduleTableRel);
#define OS_SR_EXIT()             osORTIResetCurrentServiceId(osdORTIStartScheduleTableRel);
#define OS_SR_START_CRITICAL()
#define OS_SR_END_CRITICAL()

/* StartScheduleTableAbs */
#define OS_SS_ENTRY()            osORTISetCurrentServiceId(osdORTIStartScheduleTableAbs);
#define OS_SS_EXIT()             osORTIResetCurrentServiceId(osdORTIStartScheduleTableAbs);
#define OS_SS_START_CRITICAL()
#define OS_SS_END_CRITICAL()


/* StopScheduleTable */
#define OS_SP_ENTRY()            osORTISetCurrentServiceId(osdORTIStopScheduleTable);
#define OS_SP_EXIT()             osORTIResetCurrentServiceId(osdORTIStopScheduleTable);
#define OS_SP_START_CRITICAL()
#define OS_SP_END_CRITICAL()

/* GetScheduleTableStatus */
#define OS_SG_ENTRY()            osORTISetCurrentServiceId(osdORTIGetScheduleTableStatus);
#define OS_SG_EXIT()             osORTIResetCurrentServiceId(osdORTIGetScheduleTableStatus);
#define OS_SG_START_CRITICAL()
#define OS_SG_END_CRITICAL()

/* NextScheduleTable */
#define OS_SN_ENTRY()            osORTISetCurrentServiceId(osdORTINextScheduleTable);
#define OS_SN_EXIT()             osORTIResetCurrentServiceId(osdORTINextScheduleTable);
#define OS_SN_START_CRITICAL()
#define OS_SN_END_CRITICAL()


/************************/
/* Application routines */
/************************/

/* TerminateApplication */
#define OS_TA_ENTRY()            osORTISetCurrentServiceId(osdORTITerminateApplication);
#define OS_TA_EXIT()             osORTIResetCurrentServiceId(osdORTITerminateApplication);
#define OS_TA_START_CRITICAL()
#define OS_TA_END_CRITICAL()

/* CallTrustedFunction */
#define OS_CT_ENTRY()            osORTISetCurrentServiceId(osdORTICallTrustedFunction);
#define OS_CT_EXIT()             osORTIResetCurrentServiceId(osdORTICallTrustedFunction);
#define OS_CT_START_CRITICAL()
#define OS_CT_END_CRITICAL()

/* CallNonTrustedFunction */
#define OS_NT_ENTRY()            osORTISetCurrentServiceId(osdORTICallNonTrustedFunction);
#define OS_NT_EXIT()             osORTIResetCurrentServiceId(osdORTICallNonTrustedFunction);
#define OS_NT_START_CRITICAL()
#define OS_NT_END_CRITICAL()

/* CheckObjectAccess */
#define OS_OA_ENTRY()            osORTISetCurrentServiceId(osdORTICheckObjectAccess);
#define OS_OA_EXIT()             osORTIResetCurrentServiceId(osdORTICheckObjectAccess);
#define OS_OA_START_CRITICAL()
#define OS_OA_END_CRITICAL()

/* CheckObjectOwnership */
#define OS_OO_ENTRY()            osORTISetCurrentServiceId(osdORTICheckObjectOwnership);
#define OS_OO_EXIT()             osORTIResetCurrentServiceId(osdORTICheckObjectOwnership);
#define OS_OO_START_CRITICAL()
#define OS_OO_END_CRITICAL()

/* CheckTaskMemoryAccess */
#define OS_TM_ENTRY()            osORTISetCurrentServiceId(osdORTICheckTaskMemoryAccess);
#define OS_TM_EXIT()             osORTIResetCurrentServiceId(osdORTICheckTaskMemoryAccess);
#define OS_TM_START_CRITICAL()
#define OS_TM_END_CRITICAL()

/* CheckISRMemoryAccess */
#define OS_MA_ENTRY()            osORTISetCurrentServiceId(osdORTICheckISRMemoryAccess);
#define OS_MA_EXIT()             osORTIResetCurrentServiceId(osdORTICheckISRMemoryAccess);
#define OS_MA_START_CRITICAL()
#define OS_MA_END_CRITICAL()

/* GetApplicationState */
#define OS_AS_ENTRY()            osORTISetCurrentServiceId(osdORTIGetApplicationState);
#define OS_AS_EXIT()             osORTIResetCurrentServiceId(osdORTIGetApplicationState);
#define OS_AS_START_CRITICAL()
#define OS_AS_END_CRITICAL()

/* AllowAccess */
#define OS_AA_ENTRY()            osORTISetCurrentServiceId(osdORTIAllowAccess);
#define OS_AA_EXIT()             osORTIResetCurrentServiceId(osdORTIAllowAccess);
#define OS_AA_START_CRITICAL()
#define OS_AA_END_CRITICAL()



/**************************************/
/* Operating system execution control */
/**************************************/
                 
/* StartOS */
#define OS_ST_ENTRY()            osORTISetCurrentServiceId(osdORTIStartOS);
#define OS_ST_EXIT()             osORTIResetCurrentServiceId(osdORTIStartOS);
#define OS_ST_START_CRITICAL()
#define OS_ST_END_CRITICAL()

/* ShutdownOS */
#define OS_SD_ENTRY()            osORTISetCurrentServiceId(osdORTIShutdownOS);
#define OS_SD_EXIT()             osORTIResetCurrentServiceId(osdORTIShutdownOS);
#define OS_SD_START_CRITICAL()
#define OS_SD_END_CRITICAL()


/*****************/
/* Hook routines */
/*****************/

/* ErrorHook */
#define OS_ERHOOK_ENTRY()        osORTISetCurrentServiceId(osdORTIErrorHook);
#define OS_ERHOOK_EXIT()         osORTIResetCurrentServiceId(osdORTIErrorHook);
                                                
/* StartupHook */
#define OS_STHOOK_ENTRY()        osORTISetCurrentServiceId(osdORTIStartupHook);
#define OS_STHOOK_EXIT()         osORTIResetCurrentServiceId(osdORTIStartupHook);

/* ShutdownHook */               
#define OS_SDHOOK_ENTRY()        osORTISetCurrentServiceId(osdORTIShutdownHook);
#define OS_SDHOOK_EXIT()         osORTIResetCurrentServiceId(osdORTIShutdownHook);

/* PreTaskHook */
#define OS_PREHOOK_ENTRY()       osORTISetCurrentServiceId(osdORTIPreTaskHook);
#define OS_PREHOOK_EXIT()        osORTIResetCurrentServiceId(osdORTIPreTaskHook);

/* PostTaskHook */
#define OS_POSTHOOK_ENTRY()      osORTISetCurrentServiceId(osdORTIPostTaskHook);
#define OS_POSTHOOK_EXIT()       osORTIResetCurrentServiceId(osdORTIPostTaskHook);


/**************************/
/* miscellaneous routines */
/**************************/

/* osTimerInterrupt */             
#define OS_TI_ENTRY()            
#define OS_TI_EXIT()
#define OS_TI_START_CRITICAL()
#define OS_TI_END_CRITICAL()

/* GetISRID */           
#define OS_II_ENTRY()            osORTISetCurrentServiceId(osdORTIGetISRID);
#define OS_II_EXIT()             osORTIResetCurrentServiceId(osdORTIGetISRID);
#define OS_II_START_CRITICAL()
#define OS_II_END_CRITICAL()

/* dispatcher */
#define OS_START_DISPATCH()

/* idle loop */
#define OS_IDLE_ENTRY()
#define OS_IDLE_PROC()      


  /****************************/
 /* MICROSAR OS Timing Hooks */
/****************************/
/* task activation hooks */
#ifndef OS_VTH_ACTIVATION
#define OS_VTH_ACTIVATION(TaskId, DestCoreId, CallerCoreId)
#endif
#ifndef OS_VTH_SETEVENT
#define OS_VTH_SETEVENT(TaskId, EventMask, StateChange, DestCoreId, CallerCoreId)
#endif
#ifndef OS_VTH_TRANSFER_SEMA
#define OS_VTH_TRANSFER_SEMA(FromThreadId, ToTaskId, SemaId, DestCoreId, CallerCoreId)
#endif

/* thread switch hook */
#ifndef OS_VTH_SCHEDULE
#define OS_VTH_SCHEDULE(FromThreadId, FromThreadReason, ToThreadId, ToThreadReason, CallerCoreId)
#endif

/* lock hooks */
#ifndef OS_VTH_GOT_RES
#define OS_VTH_GOT_RES(ResId, CallerCoreId)
#endif
#ifndef OS_VTH_REL_RES
#define OS_VTH_REL_RES(ResId, CallerCoreId)
#endif
#ifndef OS_VTH_REQ_SPINLOCK
#define OS_VTH_REQ_SPINLOCK(SpinlockId, CallerCoreId)
#endif
#ifndef OS_VTH_GOT_SPINLOCK
#define OS_VTH_GOT_SPINLOCK(SpinlockId, CallerCoreId)
#endif
#ifndef OS_VTH_REL_SPINLOCK
#define OS_VTH_REL_SPINLOCK(SpinlockId, CallerCoreId)
#endif
#ifndef OS_VTH_REQ_ISPINLOCK
#define OS_VTH_REQ_ISPINLOCK(SpinlockId, CallerCoreId)
#endif
#ifndef OS_VTH_GOT_ISPINLOCK
#define OS_VTH_GOT_ISPINLOCK(SpinlockId, CallerCoreId)
#endif
#ifndef OS_VTH_REL_ISPINLOCK
#define OS_VTH_REL_ISPINLOCK(SpinlockId, CallerCoreId)
#endif
#ifndef OS_VTH_TOOK_SEMA
#define OS_VTH_TOOK_SEMA(TaskId, SemaId, CallerCoreId)
#endif
#ifndef OS_VTH_REL_SEMA
#define OS_VTH_REL_SEMA(ThreadId, SemaId, CallerCoreId)
#endif
#ifndef OS_VTH_DISABLEDINT
#define OS_VTH_DISABLEDINT(IntLockId, CallerCoreId)
#endif
#ifndef OS_VTH_ENABLEDINT
#define OS_VTH_ENABLEDINT(IntLockId, CallerCoreId)
#endif
#ifndef OS_VTH_IDISABLEDINT
#define OS_VTH_IDISABLEDINT(IntLockId, CallerCoreId)
#endif
#ifndef OS_VTH_IENABLEDINT
#define OS_VTH_IENABLEDINT(IntLockId, CallerCoreId)
#endif

/* Hardware specific macro */
/* KB begin osekHwTestMacro1 (overwritten) */
#define OS_INT_ENTRY(x)
#define OS_INT_EXIT(x)
/* KB end osekHwTestMacro1 */


#endif /* _TESTMAC1_H */

