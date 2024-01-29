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
 *          File:  Rte_Hook.h
 *        Config:  D:/Rte/Rte_Analyzer/trunk/Application/demo/RteAnalyzerDemo.dpa
 *   ECU-Project:  ecu
 *  Generated at:  Mon Jul 11 16:29:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unknown license
 *
 *   Description:  Header file containing definitions for VFB tracing
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Names of available VFB-Trace-Hooks
 **********************************************************************************************************************
 *
 * Not configured:
 *
 *  Rte_CallHook_ctQMSwc0_csRecursion_Operation_Return
 *  Rte_CallHook_ctQMSwc0_csRecursion_Operation_Start
 *  Rte_CallHook_ctQMSwc1_csRecursion_1_Operation_Return
 *  Rte_CallHook_ctQMSwc1_csRecursion_1_Operation_Start
 *  Rte_IrvReadHook_ctASILSwc1_RunnableCyclicASILSwc1_IrvAtomic_Return
 *  Rte_IrvReadHook_ctASILSwc1_RunnableCyclicASILSwc1_IrvAtomic_Start
 *  Rte_IrvReadHook_ctQMSwc0_RunnableCyclicQMSwc0_IrvWithoutProtection_Return
 *  Rte_IrvReadHook_ctQMSwc0_RunnableCyclicQMSwc0_IrvWithoutProtection_Start
 *  Rte_IrvWriteHook_ctASILSwc1_RunnableCyclicASILSwc1_IrvAtomic_Return
 *  Rte_IrvWriteHook_ctASILSwc1_RunnableCyclicASILSwc1_IrvAtomic_Start
 *  Rte_IrvWriteHook_ctQMSwc0_RunnableCylic2QMSwc0_IrvWithoutProtection_Return
 *  Rte_IrvWriteHook_ctQMSwc0_RunnableCylic2QMSwc0_IrvWithoutProtection_Start
 *  Rte_ReadHook_ctASILSwc1_srNotTypesafe_Element_Return
 *  Rte_ReadHook_ctASILSwc1_srNotTypesafe_Element_Start
 *  Rte_ReadHook_ctQMSwc2_srMissingNOCACHE_Element_Return
 *  Rte_ReadHook_ctQMSwc2_srMissingNOCACHE_Element_Start
 *  Rte_ReceiveHook_ctQMSwc1_srQueuedLockSequenceError_Element_Return
 *  Rte_ReceiveHook_ctQMSwc1_srQueuedLockSequenceError_Element_Start
 *  Rte_Runnable_ctASILSwc0_RunnableCyclicASILSwc0_Return
 *  Rte_Runnable_ctASILSwc0_RunnableCyclicASILSwc0_Start
 *  Rte_Runnable_ctASILSwc1_RunnableCyclicASILSwc1_Return
 *  Rte_Runnable_ctASILSwc1_RunnableCyclicASILSwc1_Start
 *  Rte_Runnable_ctQMSwc0_RunnableCyclicQMSwc0_Return
 *  Rte_Runnable_ctQMSwc0_RunnableCyclicQMSwc0_Start
 *  Rte_Runnable_ctQMSwc0_RunnableCylic2QMSwc0_Return
 *  Rte_Runnable_ctQMSwc0_RunnableCylic2QMSwc0_Start
 *  Rte_Runnable_ctQMSwc0_csRecursion_1_Operation_Return
 *  Rte_Runnable_ctQMSwc0_csRecursion_1_Operation_Start
 *  Rte_Runnable_ctQMSwc1_RunnableCyclicQMSwc1_Return
 *  Rte_Runnable_ctQMSwc1_RunnableCyclicQMSwc1_Start
 *  Rte_Runnable_ctQMSwc1_csRecursion_Operation_Return
 *  Rte_Runnable_ctQMSwc1_csRecursion_Operation_Start
 *  Rte_Runnable_ctQMSwc1_csUnreachable_Operation_Return
 *  Rte_Runnable_ctQMSwc1_csUnreachable_Operation_Start
 *  Rte_Runnable_ctQMSwc2_RunnableCyclicQMSwc2_Return
 *  Rte_Runnable_ctQMSwc2_RunnableCyclicQMSwc2_Start
 *  Rte_SendHook_ctQMSwc0_srQueuedWritesOutOfBounds_Element_Return
 *  Rte_SendHook_ctQMSwc0_srQueuedWritesOutOfBounds_Element_Start
 *  Rte_Task_Activate
 *  Rte_Task_Dispatch
 *  Rte_Task_WaitEvent
 *  Rte_Task_WaitEventRet
 *  Rte_WriteHook_ctASILSwc0_srNotTypesafe_Element_Return
 *  Rte_WriteHook_ctASILSwc0_srNotTypesafe_Element_Start
 *  Rte_WriteHook_ctQMSwc1_srMissingNOCACHE_Element_Return
 *  Rte_WriteHook_ctQMSwc1_srMissingNOCACHE_Element_Start
 *  SchM_Schedulable_Rte_Rte_ComSendSignalProxyPeriodic_Return
 *  SchM_Schedulable_Rte_Rte_ComSendSignalProxyPeriodic_Start
 *
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HOOK_H
# define _RTE_HOOK_H

# include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */

# include "Rte_Type.h"
# include "Rte_Cfg.h"

# ifndef RTE_VFB_TRACE
#  define RTE_VFB_TRACE (0)
# endif

#endif /* _RTE_HOOK_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
