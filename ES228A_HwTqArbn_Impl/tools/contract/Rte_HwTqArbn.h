/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_HwTqArbn.h
 *     SW-C Type:  HwTqArbn
 *  Generated at:  Mon May 11 14:13:54 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTqArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQARBN_H
# define _RTE_HWTQARBN_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_HwTqArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwTqArbn
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqArbnTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnChAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnChBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwTqArbn, RTE_CONST, RTE_CONST) Rte_Inst_HwTqArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwTqArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqA_Val (0.0F)
# define Rte_InitValue_HwTqAQlfr_Val (0U)
# define Rte_InitValue_HwTqARollgCntr_Val (0U)
# define Rte_InitValue_HwTqB_Val (0.0F)
# define Rte_InitValue_HwTqBQlfr_Val (0U)
# define Rte_InitValue_HwTqBRollgCntr_Val (0U)
# define Rte_InitValue_HwTqC_Val (0.0F)
# define Rte_InitValue_HwTqCQlfr_Val (0U)
# define Rte_InitValue_HwTqCRollgCntr_Val (0U)
# define Rte_InitValue_HwTqChA_Val (0.0F)
# define Rte_InitValue_HwTqChB_Val (0.0F)
# define Rte_InitValue_HwTqCorrlnSts_Val (15U)
# define Rte_InitValue_HwTqD_Val (0.0F)
# define Rte_InitValue_HwTqDQlfr_Val (0U)
# define Rte_InitValue_HwTqDRollgCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqA_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqAQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqARollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqB_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqBQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqBRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqC_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqCQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqCRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqCorrlnSts_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqD_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqDQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqDRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqArbn_HwTq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqArbn_HwTqChA_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqArbn_HwTqChB_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqA_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqB_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqC_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqD_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTqA_Val Rte_Read_HwTqArbn_HwTqA_Val
# define Rte_Read_HwTqAQlfr_Val Rte_Read_HwTqArbn_HwTqAQlfr_Val
# define Rte_Read_HwTqARollgCntr_Val Rte_Read_HwTqArbn_HwTqARollgCntr_Val
# define Rte_Read_HwTqB_Val Rte_Read_HwTqArbn_HwTqB_Val
# define Rte_Read_HwTqBQlfr_Val Rte_Read_HwTqArbn_HwTqBQlfr_Val
# define Rte_Read_HwTqBRollgCntr_Val Rte_Read_HwTqArbn_HwTqBRollgCntr_Val
# define Rte_Read_HwTqC_Val Rte_Read_HwTqArbn_HwTqC_Val
# define Rte_Read_HwTqCQlfr_Val Rte_Read_HwTqArbn_HwTqCQlfr_Val
# define Rte_Read_HwTqCRollgCntr_Val Rte_Read_HwTqArbn_HwTqCRollgCntr_Val
# define Rte_Read_HwTqCorrlnSts_Val Rte_Read_HwTqArbn_HwTqCorrlnSts_Val
# define Rte_Read_HwTqD_Val Rte_Read_HwTqArbn_HwTqD_Val
# define Rte_Read_HwTqDQlfr_Val Rte_Read_HwTqArbn_HwTqDQlfr_Val
# define Rte_Read_HwTqDRollgCntr_Val Rte_Read_HwTqArbn_HwTqDRollgCntr_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTq_Val Rte_Write_HwTqArbn_HwTq_Val
# define Rte_Write_HwTqChA_Val Rte_Write_HwTqArbn_HwTqChA_Val
# define Rte_Write_HwTqChB_Val Rte_Write_HwTqArbn_HwTqChB_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTqArbnMaxStallTqA_Val Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqA_Val

# define Rte_Prm_HwTqArbnMaxStallTqB_Val Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqB_Val

# define Rte_Prm_HwTqArbnMaxStallTqC_Val Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqC_Val

# define Rte_Prm_HwTqArbnMaxStallTqD_Val Rte_Prm_HwTqArbn_HwTqArbnMaxStallTqD_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTqArbnTqARollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqARollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqArbnTqAStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqAStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqArbnTqBRollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqBRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqArbnTqBStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqBStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqArbnTqCRollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqCRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqArbnTqCStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqCStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqArbnTqDRollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqDRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqArbnTqDStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqArbnTqDStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnChAAvl() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnChAAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnChBAvl() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnChBAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_HwTqArbnTqARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqBStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqCRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqCStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqDRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqDStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwTqArbnChAAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnChBAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqA_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqB_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqC_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqD_Val(void)
 *
 *********************************************************************************************************************/


# define HwTqArbn_START_SEC_CODE
# include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqArbnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTqA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqChA_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqChB_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTqArbnPer1 HwTqArbnPer1
FUNC(void, HwTqArbn_CODE) HwTqArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwTqArbn_STOP_SEC_CODE
# include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1431365982
#    error "The magic number of the generated file <C:/component/ES228A_HwTqArbn_Impl/tools/contract/Rte_HwTqArbn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1431365982
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWTQARBN_H */
