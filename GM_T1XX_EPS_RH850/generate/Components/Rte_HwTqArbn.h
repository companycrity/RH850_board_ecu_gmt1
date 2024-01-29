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
 *          File:  Rte_HwTqArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTqArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQARBN_H
# define _RTE_HWTQARBN_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_HwTqArbn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTqChA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTqChB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqCorrlnSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqA_Val (0.0F)
#  define Rte_InitValue_HwTqAQlfr_Val (0U)
#  define Rte_InitValue_HwTqARollgCntr_Val (0U)
#  define Rte_InitValue_HwTqB_Val (0.0F)
#  define Rte_InitValue_HwTqBQlfr_Val (0U)
#  define Rte_InitValue_HwTqBRollgCntr_Val (0U)
#  define Rte_InitValue_HwTqC_Val (0.0F)
#  define Rte_InitValue_HwTqCQlfr_Val (0U)
#  define Rte_InitValue_HwTqCRollgCntr_Val (0U)
#  define Rte_InitValue_HwTqChA_Val (0.0F)
#  define Rte_InitValue_HwTqChB_Val (0.0F)
#  define Rte_InitValue_HwTqCorrlnSts_Val (15U)
#  define Rte_InitValue_HwTqD_Val (0.0F)
#  define Rte_InitValue_HwTqDQlfr_Val (0U)
#  define Rte_InitValue_HwTqDRollgCntr_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTqA_Val Rte_Read_HwTqArbn_HwTqA_Val
#  define Rte_Read_HwTqArbn_HwTqA_Val(data) (*(data) = Rte_CDD_HwTq0Meas_HwTq0_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqAQlfr_Val Rte_Read_HwTqArbn_HwTqAQlfr_Val
#  define Rte_Read_HwTqArbn_HwTqAQlfr_Val(data) (*(data) = Rte_CDD_HwTq0Meas_HwTq0Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqARollgCntr_Val Rte_Read_HwTqArbn_HwTqARollgCntr_Val
#  define Rte_Read_HwTqArbn_HwTqARollgCntr_Val(data) (*(data) = Rte_CDD_HwTq0Meas_HwTq0RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqB_Val Rte_Read_HwTqArbn_HwTqB_Val
#  define Rte_Read_HwTqArbn_HwTqB_Val(data) (*(data) = Rte_CDD_HwTq1Meas_HwTq1_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqBQlfr_Val Rte_Read_HwTqArbn_HwTqBQlfr_Val
#  define Rte_Read_HwTqArbn_HwTqBQlfr_Val(data) (*(data) = Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqBRollgCntr_Val Rte_Read_HwTqArbn_HwTqBRollgCntr_Val
#  define Rte_Read_HwTqArbn_HwTqBRollgCntr_Val(data) (*(data) = Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqC_Val Rte_Read_HwTqArbn_HwTqC_Val
#  define Rte_Read_HwTqArbn_HwTqC_Val(data) (*(data) = Rte_CDD_HwTq2Meas_HwTq2_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqCQlfr_Val Rte_Read_HwTqArbn_HwTqCQlfr_Val
#  define Rte_Read_HwTqArbn_HwTqCQlfr_Val(data) (*(data) = Rte_CDD_HwTq2Meas_HwTq2Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqCRollgCntr_Val Rte_Read_HwTqArbn_HwTqCRollgCntr_Val
#  define Rte_Read_HwTqArbn_HwTqCRollgCntr_Val(data) (*(data) = Rte_CDD_HwTq2Meas_HwTq2RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqCorrlnSts_Val Rte_Read_HwTqArbn_HwTqCorrlnSts_Val
#  define Rte_Read_HwTqArbn_HwTqCorrlnSts_Val(data) (*(data) = Rte_HwTqCorrln_HwTqCorrlnSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqD_Val Rte_Read_HwTqArbn_HwTqD_Val
#  define Rte_Read_HwTqArbn_HwTqD_Val(data) (*(data) = Rte_CDD_HwTq3Meas_HwTq3_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqDQlfr_Val Rte_Read_HwTqArbn_HwTqDQlfr_Val
#  define Rte_Read_HwTqArbn_HwTqDQlfr_Val(data) (*(data) = Rte_CDD_HwTq3Meas_HwTq3Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqDRollgCntr_Val Rte_Read_HwTqArbn_HwTqDRollgCntr_Val
#  define Rte_Read_HwTqArbn_HwTqDRollgCntr_Val(data) (*(data) = Rte_CDD_HwTq3Meas_HwTq3RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwTq_Val Rte_Write_HwTqArbn_HwTq_Val
#  define Rte_Write_HwTqArbn_HwTq_Val(data) (Rte_HwTqArbn_HwTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqChA_Val Rte_Write_HwTqArbn_HwTqChA_Val
#  define Rte_Write_HwTqArbn_HwTqChA_Val(data) (Rte_HwTqArbn_HwTqChA_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqChB_Val Rte_Write_HwTqArbn_HwTqChB_Val
#  define Rte_Write_HwTqArbn_HwTqChB_Val(data) (Rte_HwTqArbn_HwTqChB_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwTqArbnMaxStallTqA_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqArbnMaxStallTqA_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqArbnMaxStallTqB_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqArbnMaxStallTqB_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqArbnMaxStallTqC_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqArbnMaxStallTqC_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqArbnMaxStallTqD_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqArbnMaxStallTqD_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnChAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnChBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwTqArbnTqARollgCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqARollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqArbnTqAStallCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqAStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqArbnTqBRollgCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqBRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqArbnTqBStallCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqBStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqArbnTqCRollgCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqCRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqArbnTqCStallCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqCStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqArbnTqDRollgCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqDRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqArbnTqDStallCntrPrev() \
  (&Rte_HwTqArbn_HwTqArbnTqDStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwTqArbnChAAvl() \
  (&Rte_HwTqArbn_dHwTqArbnChAAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwTqArbnChBAvl() \
  (&Rte_HwTqArbn_dHwTqArbnChBAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HwTqArbn_START_SEC_CODE
# include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwTqArbnPer1 HwTqArbnPer1
# endif

FUNC(void, HwTqArbn_CODE) HwTqArbnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HwTqArbn_STOP_SEC_CODE
# include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWTQARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
