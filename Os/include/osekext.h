/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekext.h
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.78
|
|  Description: external declarations (only for system internal use)
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: osekext.h */
/* MISRA RULE 19.15 VIOLATION: The QAC-Tool states a violation of rule 19.15 with 
 * message 0883 below. Anyhow, there is a double include prevention and therefore,
 * the message is considered to be wrong. */
/* double include preventer */
#ifndef _OSEKEXT_H      /* PRQA S 0883 EOF */ /* see MISRA comment above */
#define _OSEKEXT_H

/*lint -save Messages inhibited in this file, will be re-enabled at the end of file */
/*lint -e539 Did not expect positive indentation */

#if defined __cplusplus
extern "C"
{
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

#if defined USE_QUOTE_INCLUDES
 #include "osekSched.h"
#else
 #include <osekSched.h>
#endif

/* KB begin osekextSpecificHeaderInclude (overwritten) */
/* KB end osekextSpecificHeaderInclude */

/* KB begin osekStartOfHModule (overwritten) */
/* KB end osekStartOfHModule */

/* KB begin osekHwDefinitions (overwritten) */
#define osdOSTM_CMP(x)     (*((volatile osuint32*)(osdOSTMBaseAddr+0x00UL+(0x1000UL*(x))))) /* compare value          */
#define osdOSTM_CNT(x)     (*((volatile osuint32*)(osdOSTMBaseAddr+0x04UL+(0x1000UL*(x))))) /* current count          */
#define osdOSTM_TO(x)      (*((volatile osuint8* )(osdOSTMBaseAddr+0x08UL+(0x1000UL*(x))))) /* output register        */
#define osdOSTM_TOE(x)     (*((volatile osuint8* )(osdOSTMBaseAddr+0x0CUL+(0x1000UL*(x))))) /* output enable register */
#define osdOSTM_TE(x)      (*((volatile osuint8* )(osdOSTMBaseAddr+0x10UL+(0x1000UL*(x))))) /* count enable status register */
#define osdOSTM_TS(x)      (*((volatile osuint8* )(osdOSTMBaseAddr+0x14UL+(0x1000UL*(x))))) /* count start trigger    */
#define osdOSTM_TT(x)      (*((volatile osuint8* )(osdOSTMBaseAddr+0x18UL+(0x1000UL*(x))))) /* count stop trigger     */
#define osdOSTM_CTL(x)     (*((volatile osuint8* )(osdOSTMBaseAddr+0x20UL+(0x1000UL*(x))))) /* control register       */
/* KB end osekHwDefinitions */


/* KB begin osekHWinterHooksPrototypes (default) */
#define osPreTaskHook  osInterPreTaskHook
#define osPostTaskHook osInterPostTaskHook
extern void osInterPreTaskHook(void);
extern void osInterPostTaskHook(void);
extern void osInterStartupHook(void);
extern void osInterErrorHook(StatusType Error);
/* KB end osekHWinterHooksPrototypes */

osqRAM0 extern osqRAM1 osqRAM2 osStackPtrType osqRAM3 osTcbSP[osdNumberOfAllTasks];
osqRAM0 extern osqRAM1 osqRAM2 ApplicationType osqRAM3 osTcbApplicationID[osdNumberOfAllTasks];
osqRAM0 extern osqRAM1 osqRAM2 osbool osqRAM3 osTcbValid[osdNumberOfAllTasks];

/* prototypes for OSEK internal functions */

osqFunc1 void osqFunc2 osHandleProtectionErrors(ProtectionReturnType proRet, StatusType Fatalerror);

osqFunc1 void osqFunc2 osInitAlarms(void); /* TR:SPMF20:0014 */
osqFunc1 void osqFunc2 osSysCancelAlarm(AlarmType alarmID);

osqFunc1 void osqFunc2 osSysStopScheduleTable(ScheduleTableType ScheduleTableID);

osqFunc1 void osqFunc2 osStartOSc(void);

osqFunc1 StatusType osqFunc2 osSysActivateTask( TaskType taskIndex);

osqFunc1 StatusType osqFunc2 osSysSetEvent(TaskType taskIndex, EventMaskType setMask);

/* KB begin osekOsSysShutdownOSPrototype (default) */
osqFunc1 void osqFunc2 osSysShutdownOS(StatusType Error);
/* KB end osekOsSysShutdownOSPrototype */

osqFunc1 void osqFunc2 osErrorHookWrapper(StatusType ErrorCode);

osqFunc1 ProtectionReturnType osqFunc2 osProtectionHookWrapper(StatusType argErr);

/* KB begin osekHwosFillTaskStacksPrototype (default) */
/* KB end osekHwosFillTaskStacksPrototype */

osqFunc1 void osqFunc2 osWorkHeap(osHeapType const * const h, CounterType counterID);
osqFunc1 void osqFunc2 osWorkAlarm(AlarmType alarmID, osHeapType const * const h);
osqFunc1 void osqFunc2 osWorkScheduleTable(osTIPType TIPid);

#define osGetHeapTime(x) (osAlarmTime[x])
#define osGetFirstAlarm(h) ((h)->heap[0])
#define osGetActiveAlarmCount(h) (*((h)->count))

#define osdHeapItemNotFound     0U
#define osdHeapMinItemUnchanged 1U
#define osdHeapMinItemChanged   2U
#define osdHeapLastItemRemoved  3U

osqFunc1 osuint8 osqFunc2 osRemoveItemMinHeap(osHeapElementType aItem, osHeapType const * const h, CounterType ctr);

osqFunc1 void osqFunc2 osInsertMinHeapStd(osHeapElementType newItem, osHeapType const * const h, CounterType ctr);

#if (osdUseHighResolutionTimer != 0)
osqFunc1 void osqFunc2 osInsertMinHeapHiRes(osHeapElementType newItem, osHeapType const * const h, CounterType ctr);
#endif


/* KB begin osekHWosInitTimerPrototype (default) */
osqFunc1 void osqFunc2 osInitTimer(void);
/* KB end osekHWosInitTimerPrototype */

/* KB begin osekHWosPreInitTimerPrototype (default) */
osqFunc1 void osqFunc2 osPreInitTimer(void);
/* KB end osekHWosPreInitTimerPrototype */

osqFunc1 void osqFunc2 osSysDisableISRSource(ISRType isrID);


osqFunc1 void osqFunc2 osMissingTerminateError(void);

/* KB begin osekHwosUnhandledExceptionPrototype (default) */
osqFunc1 void osqFunc2 osUnhandledException(void); /* TR:SPMF78:0002 */
/* KB end osekHwosUnhandledExceptionPrototype */

osqFunc1 void osqFunc2 osStackOverflow(void);

osqFunc1 void osqFunc2 osSysIncrementCounter(CounterType CounterID);

osqFunc1 void osqFunc2 osInitScheduleTables(void);


/* KB begin osekHwPrototypes (overwritten) */
#ifdef osdSoftwareStackCheck
osqFunc1 void osqFunc2 osStackError(osuint32 onSystemStack);
osqFunc1 void osqFunc2 osStackOverflowDetected(void);
#else
#define osCheckCurrentStack()  
#define osCheckStackPattern()
#endif

#define osErrorHookWrapper(err)     ErrorHook(err)
#define osShutdownHookWrapper(err)  ShutdownHook(err)

osqFunc1 void osqFunc2 osEnterSafeState(StatusType SystemError, osuint16 ErrorReason);

osqFunc1 void osqFunc2 osSaveDisableLevelNested(void);
osqFunc1 void osqFunc2 osRestoreEnableLevelNested(void);

osqFunc1 osStackPtrType osqFunc2 osDispatcher(osStackPtrType stackPtr);
osqFunc1 osuint32 osqFunc2 osCallCat2ISR(ISRType ISRID);

osqFunc1 void osqFunc2 osUnhandledCoreException(osuint32 Status);
osqFunc1 void osqFunc2 osCoreExceptionHandler(osuint32 Status);
osqFunc1 void osqFunc2 osUnhandledDirectBranchException(osuint32 Status);
osqFunc1 void osqFunc2 osDirectBranchExceptionHandler(osuint32 Status);
osqFunc1 void osqFunc2 osUnhandledEIINTException(osuint32 Status);
osqFunc1 void osqFunc2 osEIINTExceptionHandler(osuint32 Status);

osqFunc1 void osqFunc2 osStartupHook(void);
osqFunc1 void osqFunc2 osEnterSafeState(StatusType SystemError, osuint16 ErrorReason);

osqFunc1 void osqFunc2 osStartTrustedTask(osuint32 stack_start, osuint32 stack_end, const osTaskFctType task_addr);
osqFunc1 void osqFunc2 osStartNonTrustedTask(osuint32 stack_start, osuint32 stack_end, const osTaskFctType task_addr);

osqFunc1 void osqFunc2 osStartTrustedISR(osuint32 ISRAddr, osuint32 newPSW);
osqFunc1 void osqFunc2 osStartNonTrustedISR(osuint32 ISRAddr, osuint32 newPSW);

osqFunc1 osuint8 osqFunc2 osCheckMpuAsm(osuint32 addr);

osqFunc1 void osqFunc2 osMemoryProtectionHandler(void);
osqFunc1 void osqFunc2 osInstructProtectionHandler(void);

osqFunc1 void osqFunc2 osCheckPeripheralAccess8(osuint32 addr, osuint16 area);
osqFunc1 void osqFunc2 osCheckPeripheralAccess16(osuint32 addr, osuint16 area);
osqFunc1 void osqFunc2 osCheckPeripheralAccess32(osuint32 addr, osuint16 area);

osqFunc1 void osqFunc2 osStartNonTrustedFunc(NonTrustedFunctionIndexType FuncIndex,
                                             NonTrustedFunctionParameterRefType FunctParams, 
                                             osuint32 FuncAddr);

osqFunc1 void osqFunc2 osPsysEnterSafeState(StatusType SystemError, osuint16 ErrorReason);

/* MISRA RULE 19.12 not violated: The operator ## is used for symbol assignment in this macro. */
#define osCAT2ISRC0(IsrName, Level)\
   .align  4                                       ;\
   .globl  _##IsrName##_CAT2                       ;\
_##IsrName##_CAT2:                                 ;\
   pushsp  r1-r2                                   ;\
   pushsp  r4-r31                                  ;\
   mov     IsrName##_index, r6                     ;\
   mov     _osIntStackLevel##Level##_c0_StartAddr, r7 ;\
   mov     _osIntStackLevel##Level##_c0_EndAddr, r8   ;\
   jr      _osCat2IsrWrapper /* PRQA S 881 */
   
/* MISRA RULE 19.12 not violated: The operator ## is used for symbol assignment in this macro. */
#define osCAT2ISRC1(IsrName, Level)\
   .align  4                                       ;\
   .globl  _##IsrName##_CAT2                       ;\
_##IsrName##_CAT2:                                 ;\
   pushsp  r1-r2                                   ;\
   pushsp  r4-r31                                  ;\
   mov     IsrName##_index, r6                     ;\
   mov     _osIntStackLevel##Level##_c1_StartAddr, r7 ;\
   mov     _osIntStackLevel##Level##_c1_EndAddr, r8   ;\
   jr      _osCat2IsrWrapper /* PRQA S 881 */


#if (osdRH850_FPU == 0)
#define osdIsrContext   28
#define osdTaskContext  136
#else
#define osdIsrContext   36
#define osdTaskContext  144
#endif

#ifdef osdNOASM
#define osSetMpuConfig_c0(x)
#define osGetSPR(x,y)     (0)
#define osSetSPR(x,y,z)
#endif

#if (osdNumberOfDynamicMpuRegions_c0 == 0)
#define osSetMpuConfig_c0(x)
#endif

#ifdef osdASIDUsed
#define osSetASID(x)    osSetSPR(7, 2, (x))
#else
#define osSetASID(x)
#endif

#define osSetEBASE(x)   osSetSPR(3, 1, (x))

#define osSetINTBP(x)   osSetSPR(4, 1, (x))
#define osSetINTCFG(x)  osSetSPR(13, 2, (x))

#define osSetSCCFG(x)   osSetSPR(11, 1, (x))
#define osSetSCBP(x)    osSetSPR(12, 1, (x))                                             

#define osSetMPM(x)     osSetSPR(0, 5, (x))
#define osSetMPRC(x)    osSetSPR(1, 5, (x))

#define osSetMPLA0(x)   osSetSPR(0, 6, (x))
#define osSetMPUA0(x)   osSetSPR(1, 6, (x))
#define osSetMPAT0(x)   osSetSPR(2, 6, (x))

#define osSetMPLA1(x)   osSetSPR(4, 6, (x))
#define osSetMPUA1(x)   osSetSPR(5, 6, (x))
#define osSetMPAT1(x)   osSetSPR(6, 6, (x))

#define osSetMPLA2(x)   osSetSPR(8, 6, (x))
#define osSetMPUA2(x)   osSetSPR(9, 6, (x))
#define osSetMPAT2(x)   osSetSPR(10, 6, (x))

#define osSetMPLA3(x)   osSetSPR(12, 6, (x))
#define osSetMPUA3(x)   osSetSPR(13, 6, (x))
#define osSetMPAT3(x)   osSetSPR(14, 6, (x))

#define osSetMPLA4(x)   osSetSPR(16, 6, (x))
#define osSetMPUA4(x)   osSetSPR(17, 6, (x))
#define osSetMPAT4(x)   osSetSPR(18, 6, (x))

#define osSetMPLA5(x)   osSetSPR(20, 6, (x))
#define osSetMPUA5(x)   osSetSPR(21, 6, (x))
#define osSetMPAT5(x)   osSetSPR(22, 6, (x))

#define osSetMPLA6(x)   osSetSPR(24, 6, (x))
#define osSetMPUA6(x)   osSetSPR(25, 6, (x))
#define osSetMPAT6(x)   osSetSPR(26, 6, (x))

#define osSetMPLA7(x)   osSetSPR(28, 6, (x))
#define osSetMPUA7(x)   osSetSPR(29, 6, (x))
#define osSetMPAT7(x)   osSetSPR(30, 6, (x))

#define osSetMPLA8(x)   osSetSPR(0, 7, (x))
#define osSetMPUA8(x)   osSetSPR(1, 7, (x))
#define osSetMPAT8(x)   osSetSPR(2, 7, (x))

#define osSetMPLA9(x)   osSetSPR(4, 7, (x))
#define osSetMPUA9(x)   osSetSPR(5, 7, (x))
#define osSetMPAT9(x)   osSetSPR(6, 7, (x))

#define osSetMPLA10(x)  osSetSPR(8, 7, (x))
#define osSetMPUA10(x)  osSetSPR(9, 7, (x))
#define osSetMPAT10(x)  osSetSPR(10, 7, (x))

#define osSetMPLA11(x)  osSetSPR(12, 7, (x))
#define osSetMPUA11(x)  osSetSPR(13, 7, (x))
#define osSetMPAT11(x)  osSetSPR(14, 7, (x))

#define osSetMPLA12(x)  osSetSPR(16, 7, (x))
#define osSetMPUA12(x)  osSetSPR(17, 7, (x))
#define osSetMPAT12(x)  osSetSPR(18, 7, (x))

#define osSetMPLA13(x)  osSetSPR(20, 7, (x))
#define osSetMPUA13(x)  osSetSPR(21, 7, (x))
#define osSetMPAT13(x)  osSetSPR(22, 7, (x))

#define osSetMPLA14(x)  osSetSPR(24, 7, (x))
#define osSetMPUA14(x)  osSetSPR(25, 7, (x))
#define osSetMPAT14(x)  osSetSPR(26, 7, (x))

#define osSetMPLA15(x)  osSetSPR(28, 7, (x))
#define osSetMPUA15(x)  osSetSPR(29, 7, (x))
#define osSetMPAT15(x)  osSetSPR(30, 7, (x))

#define osGetEIIC()    osGetSPR(13, 0)

#define osGetMPM()     osGetSPR(0, 5)
#define osGetMPRC()    osGetSPR(1, 5)

#define osGetMPLA0()   osGetSPR(0, 6)
#define osGetMPUA0()   osGetSPR(1, 6)
#define osGetMPAT0()   osGetSPR(2, 6)

#define osGetMPLA1()   osGetSPR(4, 6)
#define osGetMPUA1()   osGetSPR(5, 6)
#define osGetMPAT1()   osGetSPR(6, 6)

#define osGetMPLA2()   osGetSPR(8, 6)
#define osGetMPUA2()   osGetSPR(9, 6)
#define osGetMPAT2()   osGetSPR(10, 6)

#define osGetMPLA3()   osGetSPR(12, 6)
#define osGetMPUA3()   osGetSPR(13, 6)
#define osGetMPAT3()   osGetSPR(14, 6)

#define osGetMPLA4()   osGetSPR(16, 6)
#define osGetMPUA4()   osGetSPR(17, 6)
#define osGetMPAT4()   osGetSPR(18, 6)

#define osGetMPLA5()   osGetSPR(20, 6)
#define osGetMPUA5()   osGetSPR(21, 6)
#define osGetMPAT5()   osGetSPR(22, 6)

#define osGetMPLA6()   osGetSPR(24, 6)
#define osGetMPUA6()   osGetSPR(25, 6)
#define osGetMPAT6()   osGetSPR(26, 6)

#define osGetMPLA7()   osGetSPR(28, 6)
#define osGetMPUA7()   osGetSPR(29, 6)
#define osGetMPAT7()   osGetSPR(30, 6)

#define osGetMPLA8()   osGetSPR(0, 7)
#define osGetMPUA8()   osGetSPR(1, 7)
#define osGetMPAT8()   osGetSPR(2, 7)

#define osGetMPLA9()   osGetSPR(4, 7)
#define osGetMPUA9()   osGetSPR(5, 7)
#define osGetMPAT9()   osGetSPR(6, 7)

#define osGetMPLA10()  osGetSPR(8, 7)
#define osGetMPUA10()  osGetSPR(9, 7)
#define osGetMPAT10()  osGetSPR(10, 7)

#define osGetMPLA11()  osGetSPR(12, 7)
#define osGetMPUA11()  osGetSPR(13, 7)
#define osGetMPAT11()  osGetSPR(14, 7)

#define osGetMPLA12()  osGetSPR(16, 7)
#define osGetMPUA12()  osGetSPR(17, 7)
#define osGetMPAT12()  osGetSPR(18, 7)

#define osGetMPLA13()  osGetSPR(20, 7)
#define osGetMPUA13()  osGetSPR(21, 7)
#define osGetMPAT13()  osGetSPR(22, 7)

#define osGetMPLA14()  osGetSPR(24, 7)
#define osGetMPUA14()  osGetSPR(25, 7)
#define osGetMPAT14()  osGetSPR(26, 7)

#define osGetMPLA15()  osGetSPR(28, 7)
#define osGetMPUA15()  osGetSPR(29, 7)
#define osGetMPAT15()  osGetSPR(30, 7)

#define osSetMPU0()   osSetMPLA0(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA0);\
                      osSetMPUA0(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA0);\
                      osSetMPAT0(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT0)

#define osSetMPU1()   osSetMPLA1(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA1);\
                      osSetMPUA1(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA1);\
                      osSetMPAT1(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT1)                      
                      
#define osSetMPU2()   osSetMPLA2(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA2);\
                      osSetMPUA2(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA2);\
                      osSetMPAT2(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT2)
                      
#define osSetMPU3()   osSetMPLA3(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA3);\
                      osSetMPUA3(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA3);\
                      osSetMPAT3(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT3)                      
                      
#define osSetMPU4()   osSetMPLA4(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA4);\
                      osSetMPUA4(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA4);\
                      osSetMPAT4(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT4)                      

#define osSetMPU5()   osSetMPLA5(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA5);\
                      osSetMPUA5(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA5);\
                      osSetMPAT5(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT5)                      

#define osSetMPU6()   osSetMPLA6(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA6);\
                      osSetMPUA6(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA6);\
                      osSetMPAT6(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT6)                      

#define osSetMPU7()   osSetMPLA7(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA7);\
                      osSetMPUA7(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA7);\
                      osSetMPAT7(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT7)                      

#define osSetMPU8()   osSetMPLA8(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA8);\
                      osSetMPUA8(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA8);\
                      osSetMPAT8(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT8)                      

#define osSetMPU9()   osSetMPLA9(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA9);\
                      osSetMPUA9(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA9);\
                      osSetMPAT9(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT9)                      

#define osSetMPU10()  osSetMPLA10(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA10);\
                      osSetMPUA10(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA10);\
                      osSetMPAT10(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT10)                      

#define osSetMPU11()  osSetMPLA11(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA11);\
                      osSetMPUA11(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA11);\
                      osSetMPAT11(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT11)
                      
#define osSetMPU12()  osSetMPLA12(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA12);\
                      osSetMPUA12(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA12);\
                      osSetMPAT12(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT12)

#define osSetMPU13()  osSetMPLA13(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA13);\
                      osSetMPUA13(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA13);\
                      osSetMPAT13(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT13)

#define osSetMPU14()  osSetMPLA14(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA14);\
                      osSetMPUA14(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA14);\
                      osSetMPAT14(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT14)

#define osSetMPU15()  osSetMPLA15(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA15);\
                      osSetMPUA15(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA15);\
                      osSetMPAT15(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT15)
/* KB end osekHwPrototypes */


/* OSEK internal defines */

/* Task flags */
#define osdTaskFlagScheduleAllowed  ((osTaskFlagType)0U)
#define osdTaskFlagNotUsingSchedule ((osTaskFlagType)2U)

/* Preemption Type */
#define osdTaskTypeNonPreempt       ((osTaskPreemptionType) 0U)
#define osdTaskTypePreempt          ((osTaskPreemptionType) 1U)


/* alarm action */
#define osdAlarmActionSetEvent     ((osuint8)0U)
#define osdAlarmActionActivateTask ((osuint8)1U)
#define osdAlarmActionCallback     ((osuint8)2U)
#define osdAlarmActionIncrementCounter ((osuint8)3U)
/* KB begin osekHWosDiffTickTypeComparison (default) */
typedef union
{
   TickType           unsignedNumber;
   osTickTimeDiffType signedNumber;
}TickTypeTmp;

#define osdCounterCompareLt(left,right,halfrange) \
   (((left) <= (halfrange)) ? \
   (((right) > (left)) && ((right) <= ( (left) + (halfrange)     ))) : \
   (((right) > (left)) || ((right) <= (((left) - (halfrange)) - 1))))
#define osdCounterCompareLe(left,right,halfrange) \
   (((left) <= (halfrange)) ? \
   (((right) >= (left)) && ((right) <= ( (left) + (halfrange)     ))) : \
   (((right) >= (left)) || ((right) <= (((left) - (halfrange)) - 1))))
#define osdCounterCompareGt(left,right,halfrange) (!osdCounterCompareLe((left),(right),(halfrange)))
#define osdCounterCompareGe(left,right,halfrange) (!osdCounterCompareLt((left),(right),(halfrange)))


#define osdCounterOverflowRange(x) ((oskCounterInternalMaximumValue[x] - oskCounterMaxAllowedValue[x]) - 1)

/* KB end osekHWosDiffTickTypeComparison */

 
   #define osdSystemCounterMask    ((TickType)(0xC0000000UL))

/* KB begin osekAssignStack (default) */
/* stack grows from high to lower addresses; decrement before push */
#define osAssignStack(stack)    ((osStackDataType*)((&(stack)[0])+(sizeof(stack)/sizeof((stack)[0])))) 
/* KB end osekAssignStack */
/* KB begin osekBottomofStack (default) */
#define osBottomOfStack(stack)  ((osStackDataType*)(stack))
/* KB end osekBottomofStack */


/* KB begin osekHWVariableSectionStartHeader (overwritten) */
/* KB end osekHWVariableSectionStartHeader */

/****************************************************************************/
/* schedule table synchronization */
#define osdSTSyncNon           ((osuint8)0U)
#define osdSTSyncImplicit      ((osuint8)1U) /* "Implicit" and "Non" need to be distinguished in StartScheduleTableRel */
#define osdSTSyncExplicit      ((osuint8)2U)

osqRAM0 extern osqRAM1 osqRAM2 osAlarmIndexType osqRAM3 osAlarmHeapCount[osdNumberOfCounters];    /* Number of heap elements */

/* KB begin osekHwExternalDeclarations (overwritten) */
/* MISRA RULE 8.12 VIOLATION: The compiler requires the [] notation and the size of the 
   section is unknown at generation time. No problem because the symbol is never used as array. */
extern osuint8 osStartupStack_StartAddr[]; /* PRQA S 3684 */
/* KB end osekHwExternalDeclarations */
typedef osuint8 osSTReactionType;
#define osdSTReact_Continue     ((osSTReactionType)0U)
#define osdSTReact_FinalDelay   ((osSTReactionType)1U)
#define osdSTReact_InitialDelay ((osSTReactionType)2U)
#define osdSTReact_Repeat       ((osSTReactionType)3U)
#define osdSTReact_Stop         ((osSTReactionType)4U)


osqFunc1 osSTReactionType osqFunc2 osSTWorkActions(GlobalTimeTickType* diff, 
                                                   osSTIndexType CurrentEP   );



/****************************************************************************/
/* spinlock methode and type */
#define osdSpLockMethodLOCK_NOTHING            (0U)
#define osdSpLockMethodLOCK_WITH_RES_SCHEDULER (1U)
#define osdSpLockMethodLOCK_CAT2_INTERRUPTS    (2U)
#define osdSpLockMethodLOCK_ALL_INTERRUPTS     (3U)

#define osdSpLockTypeStandardAutosar           (0U)
#define osdSpLockTypeOptimized                 (1U)


/* KB begin osekHWVariableSectionEndHeader (overwritten) */
/* KB end osekHWVariableSectionEndHeader */

/* KB begin osekEndOfHModule (overwritten) */
/* KB end osekEndOfHModule */

/*lint -restore re-enable messages*/

#if defined __cplusplus
} /* ENDOF extern "C" */
#endif

#endif /* _OSEKEXT_H, double include preventer */

/* END OF HEADER osekext.h */

