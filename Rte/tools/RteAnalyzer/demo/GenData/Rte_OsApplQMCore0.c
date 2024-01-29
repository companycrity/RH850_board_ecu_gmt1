/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_OsApplQMCore0.c
 *        Config:  D:/Rte/Rte_Analyzer/trunk/Application/demo/RteAnalyzerDemo.dpa
 *   ECU-Project:  ecu
 *  Generated at:  Mon Jul 11 16:29:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unknown license
 *
 *   Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0781, 0857 EOF */ /* MD_Rte_0777, MD_Rte_0779, MD_Rte_0781, MD_MSR_1.1_857 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_ctASILSwc0.h"
#include "Rte_ctASILSwc1.h"
#include "Rte_ctQMSwc0.h"
#include "Rte_ctQMSwc1.h"
#include "Rte_ctQMSwc2.h"

#include "Rte_Hook.h"

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (STATIC)
# define STATIC static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelUM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelUM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint32, RTE_VAR_INIT_NOCACHE) Rte_QMSwc1_srMissingNOCACHE_Element = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint32, RTE_VAR_INIT) Rte_Irv_QMSwc0_IrvWithoutProtection = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Data structures for queue handling
 *********************************************************************************************************************/

#define RTE_Q_OK     ((Rte_QReturnType)0)
#define RTE_Q_EMPTY  ((Rte_QReturnType)1)
#define RTE_Q_FULL   ((Rte_QReturnType)2)

#define RTE_Q_QMSwc1_srQueuedLockSequenceError_Element (0)

typedef uint8 Rte_QReturnType;
typedef uint8 Rte_QIndexType;

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
STATIC FUNC(Rte_QReturnType, RTE_CODE) Rte_QAddElement(Rte_QIndexType q, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) pData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
STATIC FUNC(Rte_QReturnType, RTE_CODE) Rte_QUnqueueElement(Rte_QIndexType q, P2VAR(void, AUTOMATIC, RTE_APPL_VAR) pData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define Rte_QOverflow_QMSwc1_srQueuedLockSequenceError_Element (Rte_OsApplQMCore0_QOverflow.Rte_b0)

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplQMCore0_QOverflowType, RTE_VAR_NOINIT) Rte_OsApplQMCore0_QOverflow; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#define RTE_USEC_SystemTimerCore0(val) ((TickType)RTE_CONST_USEC_SystemTimerCore0_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */
#define RTE_MSEC_SystemTimerCore0(val) ((TickType)RTE_CONST_MSEC_SystemTimerCore0_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */
#define RTE_SEC_SystemTimerCore0(val)  ((TickType)RTE_CONST_SEC_SystemTimerCore0_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */
#define RTE_USEC_SystemTimerCore1(val) ((TickType)RTE_CONST_USEC_SystemTimerCore1_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */
#define RTE_MSEC_SystemTimerCore1(val) ((TickType)RTE_CONST_MSEC_SystemTimerCore1_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */
#define RTE_SEC_SystemTimerCore1(val)  ((TickType)RTE_CONST_SEC_SystemTimerCore1_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */

#define RTE_CONST_MSEC_SystemTimerCore0_0 (0UL)
#define RTE_CONST_MSEC_SystemTimerCore1_0 (0UL)
#define RTE_CONST_MSEC_SystemTimerCore0_10 (10UL)
#define RTE_CONST_MSEC_SystemTimerCore0_5 (5UL)
#define RTE_CONST_MSEC_SystemTimerCore1_5 (5UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


FUNC(void, RTE_CODE) Rte_InitMemory_OsApplQMCore0(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* set default values for internal data */
  Rte_QMSwc1_srMissingNOCACHE_Element = 0U;

  /* initialize inter-runnable variables */
  Rte_Irv_QMSwc0_IrvWithoutProtection = 0U;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_ctQMSwc0_srQueuedWritesOutOfBounds_Element(NvM_RequestResultType data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  if (Rte_QAddElement(RTE_Q_QMSwc1_srQueuedLockSequenceError_Element, (P2CONST(void, AUTOMATIC, RTE_APPL_DATA))(&data)) == RTE_Q_FULL) /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_QOverflow_QMSwc1_srQueuedLockSequenceError_Element = 1;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ctQMSwc1_srMissingNOCACHE_Element(uint32 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_QMSwc1_srMissingNOCACHE_Element = *(&data);
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_ctQMSwc1_srQueuedLockSequenceError_Element(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTQMSWC1_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  {
    Std_ReturnType lost_data = RTE_E_OK;
    Rte_QReturnType retQueue;
    SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if (Rte_QOverflow_QMSwc1_srQueuedLockSequenceError_Element == 1)
    {
      /* reset errorflag */
      Rte_QOverflow_QMSwc1_srQueuedLockSequenceError_Element = 0;
      lost_data = RTE_E_LOST_DATA;
    }
    ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    retQueue = Rte_QUnqueueElement(RTE_Q_QMSwc1_srQueuedLockSequenceError_Element, (P2VAR(void, AUTOMATIC, RTE_APPL_VAR))(data));
    if (retQueue == RTE_Q_EMPTY)
    {
      ret = RTE_E_NO_DATA;
    }
    ret |= lost_data;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Inter-runnable variable access
 *********************************************************************************************************************/

FUNC(uint32, RTE_CODE) Rte_IrvRead_ctQMSwc0_RunnableCyclicQMSwc0_IrvWithoutProtection(void) /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
{
  uint32 irvValue;


  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  irvValue = Rte_Irv_QMSwc0_IrvWithoutProtection;


  return irvValue;
}


/**********************************************************************************************************************
 * Queue handling functions
 *********************************************************************************************************************/
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
STATIC FUNC(Rte_QReturnType, RTE_CODE) Rte_QAddElement(Rte_QIndexType q, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) pData)
{
  Rte_QReturnType ret = RTE_Q_FULL;
  P2VAR(Rte_QRamInfoType, AUTOMATIC, RTE_VAR_NOINIT) pRamI = &(Rte_QRamInfo[q]);
  P2CONST(Rte_QRomInfoType, AUTOMATIC, RTE_CONST) pRomI = &(Rte_QRomInfo[q]);

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if (pRamI->Rte_ElementCtr < pRomI->Rte_MaxElements)
  {
    uint8 writeCtr = pRamI->Rte_WriteCtr;
    if (writeCtr < (pRomI->Rte_MaxElements - 1U))
    {
      ++writeCtr;
    }
    else
    {
      writeCtr = 0U;
    }
    pRamI->Rte_WriteCtr = writeCtr;
    pRamI->Rte_ElementCtr++;
    Rte_MemCpy((void *)&((uint8 *)pRomI->Rte_BasePtr)[writeCtr * pRomI->Rte_BytesPerElement], pData, pRomI->Rte_BytesPerElement);
    ret = RTE_Q_OK;
  }
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return(ret);
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
STATIC FUNC(Rte_QReturnType, RTE_CODE) Rte_QUnqueueElement(Rte_QIndexType q, P2VAR(void, AUTOMATIC, RTE_APPL_VAR) pData)
{
  Rte_QReturnType ret = RTE_Q_EMPTY;
  P2VAR(Rte_QRamInfoType, AUTOMATIC, RTE_VAR_NOINIT) pRamI = &(Rte_QRamInfo[q]); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2CONST(Rte_QRomInfoType, AUTOMATIC, RTE_CONST) pRomI = &(Rte_QRomInfo[q]); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if (0 < pRamI->Rte_ElementCtr)
  {
    uint8 readCtr = pRamI->Rte_ReadCtr;
    if (readCtr < (pRomI->Rte_MaxElements - 1U))
    {
      ++readCtr;
    }
    else
    {
      readCtr = 0U;
    }
    pRamI->Rte_ReadCtr = readCtr;
    pRamI->Rte_ElementCtr--;
    Rte_MemCpy(pData, (void *)&((uint8 *)pRomI->Rte_BasePtr)[readCtr * pRomI->Rte_BytesPerElement], pRomI->Rte_BytesPerElement);
    ret = RTE_Q_OK;
  }
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return(ret);
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     HighPrioQMTaskCore0
 * Priority: 100
 * Schedule: NON
 * Alarm:    Cycle Time 0.005 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(HighPrioQMTaskCore0) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  RunnableCyclicQMSwc1();

  /* call runnable */
  RunnableCylic2QMSwc0();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     PreemptiveQMTaskCore0
 * Priority: 2
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(PreemptiveQMTaskCore0) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Run_QMSwc0_RunnableCyclicQMSwc0 | Rte_Ev_Run_Rte_Rte_ComSendSignalProxyPeriodic); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(PreemptiveQMTaskCore0, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Run_QMSwc0_RunnableCyclicQMSwc0 | Rte_Ev_Run_Rte_Rte_ComSendSignalProxyPeriodic)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Run_Rte_Rte_ComSendSignalProxyPeriodic) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Rte_ComSendSignalProxyPeriodic();
    }

    if ((ev & Rte_Ev_Run_QMSwc0_RunnableCyclicQMSwc0) != (EventMaskType)0)
    {
      /* call runnable */
      RunnableCyclicQMSwc0();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0342:  MISRA rule: 19.13
     Reason:     For efficient code the use of macros and the operator '##' is necessary.
     Risk:       The used compiler is not ANSI/ISO C89 compatible. No functional risk.
     Prevention: AUTOSAR is based on ANSI/ISO C89. Compatible compilers are required.

   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3447:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Qac:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 7.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
