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
 *          File:  Rte_HwTqCorrln.h
 *     SW-C Type:  HwTqCorrln
 *  Generated at:  Fri Apr 15 08:57:56 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTqCorrln> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQCORRLN_H
# define _RTE_HWTQCORRLN_H

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

# include "Rte_HwTqCorrln_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwTqCorrln
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChACmnModCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChACmnModCmpLpFilSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChAImdtCorrlnChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChAStabStLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChATraLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChBCmnModCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChBCmnModCmpLpFilSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChBImdtCorrlnChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChBStabStLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqChBTraLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwTqCorrln, RTE_CONST, RTE_CONST) Rte_Inst_HwTqCorrln; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwTqCorrln, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

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
# define Rte_InitValue_HwTqChACorrlnTraErr_Val (0.0F)
# define Rte_InitValue_HwTqChB_Val (0.0F)
# define Rte_InitValue_HwTqChBCorrlnTraErr_Val (0.0F)
# define Rte_InitValue_HwTqCorrlnSts_Val (15U)
# define Rte_InitValue_HwTqD_Val (0.0F)
# define Rte_InitValue_HwTqDQlfr_Val (0U)
# define Rte_InitValue_HwTqDRollgCntr_Val (0U)
# define Rte_InitValue_HwTqIdptSig_Val (4U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqA_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqAQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqARollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqB_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqBQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqBRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqC_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqCQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqCRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqChA_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqChB_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqD_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqDQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqCorrln_HwTqDRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqCorrln_HwTqChACorrlnTraErr_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqCorrln_HwTqChBCorrlnTraErr_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqCorrln_HwTqCorrlnSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqCorrln_HwTqIdptSig_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTqCorrln_FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTqCorrln_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQCORRLN_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTqCorrln_HwTqChACmnModCmpLpFilSt_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTqCorrln_HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTqCorrln_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChACmnModCmpLpFilActvnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChACmnModCmpLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChACmnModCmpLpFilOutpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChAImdtCorrlnChkFailThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChAImdtCorrlnChkPassThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChAStabStClrFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChAStabStLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChAStabStSetFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChATqSumMaxLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChATraSumClrFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChATraSumSetFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBCmnModCmpLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBImdtCorrlnChkFailThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBImdtCorrlnChkPassThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBStabStClrFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBStabStLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBStabStSetFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBTqSumMaxLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraSumClrFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraSumSetFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqA_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqB_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqC_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqD_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChATraLpFilX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_17, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChATraLpFilX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u6p10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChATraLpFilY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u6p10_17, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChATraLpFilY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraLpFilX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_17, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraLpFilX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u6p10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraLpFilY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u6p10_17, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraLpFilY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer1_HwTqChAAvl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer1_HwTqChBAvl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer2_HwTqChAAvl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer2_HwTqChBAvl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer2_HwTqChATqSumLim(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer2_HwTqChBTqSumLim(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer3_HwTqChATqSumLim(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer3_HwTqChBTqSumLim(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(float32, RTE_CODE) Rte_CData_HwTqCorrln_HwTqChACmnModCmpLpFilStDft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_CData_HwTqCorrln_HwTqChBCmnModCmpLpFilStDft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTqA_Val Rte_Read_HwTqCorrln_HwTqA_Val
# define Rte_Read_HwTqAQlfr_Val Rte_Read_HwTqCorrln_HwTqAQlfr_Val
# define Rte_Read_HwTqARollgCntr_Val Rte_Read_HwTqCorrln_HwTqARollgCntr_Val
# define Rte_Read_HwTqB_Val Rte_Read_HwTqCorrln_HwTqB_Val
# define Rte_Read_HwTqBQlfr_Val Rte_Read_HwTqCorrln_HwTqBQlfr_Val
# define Rte_Read_HwTqBRollgCntr_Val Rte_Read_HwTqCorrln_HwTqBRollgCntr_Val
# define Rte_Read_HwTqC_Val Rte_Read_HwTqCorrln_HwTqC_Val
# define Rte_Read_HwTqCQlfr_Val Rte_Read_HwTqCorrln_HwTqCQlfr_Val
# define Rte_Read_HwTqCRollgCntr_Val Rte_Read_HwTqCorrln_HwTqCRollgCntr_Val
# define Rte_Read_HwTqChA_Val Rte_Read_HwTqCorrln_HwTqChA_Val
# define Rte_Read_HwTqChB_Val Rte_Read_HwTqCorrln_HwTqChB_Val
# define Rte_Read_HwTqD_Val Rte_Read_HwTqCorrln_HwTqD_Val
# define Rte_Read_HwTqDQlfr_Val Rte_Read_HwTqCorrln_HwTqDQlfr_Val
# define Rte_Read_HwTqDRollgCntr_Val Rte_Read_HwTqCorrln_HwTqDRollgCntr_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTqChACorrlnTraErr_Val Rte_Write_HwTqCorrln_HwTqChACorrlnTraErr_Val
# define Rte_Write_HwTqChBCorrlnTraErr_Val Rte_Write_HwTqCorrln_HwTqChBCorrlnTraErr_Val
# define Rte_Write_HwTqCorrlnSts_Val Rte_Write_HwTqCorrln_HwTqCorrlnSts_Val
# define Rte_Write_HwTqIdptSig_Val Rte_Write_HwTqCorrln_HwTqIdptSig_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_u08_Oper Rte_Call_HwTqCorrln_FltInj_u08_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwTqCorrln_GetNtcQlfrSts_Oper
# define Rte_Call_HwTqChACmnModCmpLpFilSt_SetRamBlockStatus Rte_Call_HwTqCorrln_HwTqChACmnModCmpLpFilSt_SetRamBlockStatus
# define Rte_Call_HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus Rte_Call_HwTqCorrln_HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwTqCorrln_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwTqCorrlnPer1_HwTqChAAvl(data) \
  Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer1_HwTqChAAvl(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwTqCorrlnPer1_HwTqChBAvl(data) \
  Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer1_HwTqChBAvl(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwTqCorrlnPer2_HwTqChAAvl() \
  Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer2_HwTqChAAvl()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwTqCorrlnPer2_HwTqChBAvl() \
  Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer2_HwTqChBAvl()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwTqCorrlnPer2_HwTqChATqSumLim(data) \
  Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer2_HwTqChATqSumLim(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwTqCorrlnPer2_HwTqChBTqSumLim(data) \
  Rte_IrvWrite_HwTqCorrln_HwTqCorrlnPer2_HwTqChBTqSumLim(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwTqCorrlnPer3_HwTqChATqSumLim() \
  Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer3_HwTqChATqSumLim()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwTqCorrlnPer3_HwTqChBTqSumLim() \
  Rte_IrvRead_HwTqCorrln_HwTqCorrlnPer3_HwTqChBTqSumLim()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_HwTqChACmnModCmpLpFilStDft Rte_CData_HwTqCorrln_HwTqChACmnModCmpLpFilStDft

# define Rte_CData_HwTqChBCmnModCmpLpFilStDft Rte_CData_HwTqCorrln_HwTqChBCmnModCmpLpFilStDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTqCorrlnChACmnModCmpLpFilActvnThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChACmnModCmpLpFilActvnThd_Val

# define Rte_Prm_HwTqCorrlnChACmnModCmpLpFilFrq_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChACmnModCmpLpFilFrq_Val

# define Rte_Prm_HwTqCorrlnChACmnModCmpLpFilOutpLim_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChACmnModCmpLpFilOutpLim_Val

# define Rte_Prm_HwTqCorrlnChAImdtCorrlnChkFailThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChAImdtCorrlnChkFailThd_Val

# define Rte_Prm_HwTqCorrlnChAImdtCorrlnChkPassThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChAImdtCorrlnChkPassThd_Val

# define Rte_Prm_HwTqCorrlnChAStabStClrFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChAStabStClrFltThd_Val

# define Rte_Prm_HwTqCorrlnChAStabStLpFilFrq_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChAStabStLpFilFrq_Val

# define Rte_Prm_HwTqCorrlnChAStabStSetFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChAStabStSetFltThd_Val

# define Rte_Prm_HwTqCorrlnChATqSumMaxLim_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChATqSumMaxLim_Val

# define Rte_Prm_HwTqCorrlnChATraSumClrFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChATraSumClrFltThd_Val

# define Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChATraSumSetFltThd_Val

# define Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val

# define Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilFrq_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBCmnModCmpLpFilFrq_Val

# define Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val

# define Rte_Prm_HwTqCorrlnChBImdtCorrlnChkFailThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBImdtCorrlnChkFailThd_Val

# define Rte_Prm_HwTqCorrlnChBImdtCorrlnChkPassThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBImdtCorrlnChkPassThd_Val

# define Rte_Prm_HwTqCorrlnChBStabStClrFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBStabStClrFltThd_Val

# define Rte_Prm_HwTqCorrlnChBStabStLpFilFrq_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBStabStLpFilFrq_Val

# define Rte_Prm_HwTqCorrlnChBStabStSetFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBStabStSetFltThd_Val

# define Rte_Prm_HwTqCorrlnChBTqSumMaxLim_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBTqSumMaxLim_Val

# define Rte_Prm_HwTqCorrlnChBTraSumClrFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraSumClrFltThd_Val

# define Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraSumSetFltThd_Val

# define Rte_Prm_HwTqCorrlnMaxStallTqA_Val Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqA_Val

# define Rte_Prm_HwTqCorrlnMaxStallTqB_Val Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqB_Val

# define Rte_Prm_HwTqCorrlnMaxStallTqC_Val Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqC_Val

# define Rte_Prm_HwTqCorrlnMaxStallTqD_Val Rte_Prm_HwTqCorrln_HwTqCorrlnMaxStallTqD_Val

# define Rte_Prm_HwTqCorrlnChATraLpFilX_Ary1D Rte_Prm_HwTqCorrln_HwTqCorrlnChATraLpFilX_Ary1D

# define Rte_Prm_HwTqCorrlnChATraLpFilY_Ary1D Rte_Prm_HwTqCorrln_HwTqCorrlnChATraLpFilY_Ary1D

# define Rte_Prm_HwTqCorrlnChBTraLpFilX_Ary1D Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraLpFilX_Ary1D

# define Rte_Prm_HwTqCorrlnChBTraLpFilY_Ary1D Rte_Prm_HwTqCorrln_HwTqCorrlnChBTraLpFilY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTqChACmnModCmpLpFilSt() (Rte_Inst_HwTqCorrln->Pim_HwTqChACmnModCmpLpFilSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChBCmnModCmpLpFilSt() (Rte_Inst_HwTqCorrln->Pim_HwTqChBCmnModCmpLpFilSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqARollgCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqARollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqAStallCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqAStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqBRollgCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqBRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqBStallCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqBStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqCRollgCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqCRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqCStallCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqCStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqDRollgCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqDRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqDStallCntrPrev() (Rte_Inst_HwTqCorrln->Pim_HwTqDStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChAImdtCorrlnChk() (Rte_Inst_HwTqCorrln->Pim_HwTqChAImdtCorrlnChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChBImdtCorrlnChk() (Rte_Inst_HwTqCorrln->Pim_HwTqChBImdtCorrlnChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChACmnModCmpLpFil() (Rte_Inst_HwTqCorrln->Pim_HwTqChACmnModCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChAStabStLpFil() (Rte_Inst_HwTqCorrln->Pim_HwTqChAStabStLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChATraLpFil() (Rte_Inst_HwTqCorrln->Pim_HwTqChATraLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChBCmnModCmpLpFil() (Rte_Inst_HwTqCorrln->Pim_HwTqChBCmnModCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChBStabStLpFil() (Rte_Inst_HwTqCorrln->Pim_HwTqChBStabStLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqChBTraLpFil() (Rte_Inst_HwTqCorrln->Pim_HwTqChBTraLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTqChACmnModCmpLpFilSt(void)
 *   float32 *Rte_Pim_HwTqChBCmnModCmpLpFilSt(void)
 *   uint8 *Rte_Pim_HwTqARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDStallCntrPrev(void)
 *   boolean *Rte_Pim_HwTqChAImdtCorrlnChk(void)
 *   boolean *Rte_Pim_HwTqChBImdtCorrlnChk(void)
 *   FilLpRec1 *Rte_Pim_HwTqChACmnModCmpLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqChAStabStLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqChATraLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqChBCmnModCmpLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqChBStabStLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqChBTraLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   float32 Rte_CData_HwTqChACmnModCmpLpFilStDft(void)
 *   float32 Rte_CData_HwTqChBCmnModCmpLpFilStDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwTqCorrlnChACmnModCmpLpFilActvnThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChACmnModCmpLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChACmnModCmpLpFilOutpLim_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChAImdtCorrlnChkFailThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChAImdtCorrlnChkPassThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChAStabStClrFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChAStabStLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChAStabStSetFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChATqSumMaxLim_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChATraSumClrFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBImdtCorrlnChkFailThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBImdtCorrlnChkPassThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBStabStClrFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBStabStLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBStabStSetFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBTqSumMaxLim_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBTraSumClrFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val(void)
 *   uint8 Rte_Prm_HwTqCorrlnMaxStallTqA_Val(void)
 *   uint8 Rte_Prm_HwTqCorrlnMaxStallTqB_Val(void)
 *   uint8 Rte_Prm_HwTqCorrlnMaxStallTqC_Val(void)
 *   uint8 Rte_Prm_HwTqCorrlnMaxStallTqD_Val(void)
 *   u5p11 *Rte_Prm_HwTqCorrlnChATraLpFilX_Ary1D(void)
 *   u6p10 *Rte_Prm_HwTqCorrlnChATraLpFilY_Ary1D(void)
 *   u5p11 *Rte_Prm_HwTqCorrlnChBTraLpFilX_Ary1D(void)
 *   u6p10 *Rte_Prm_HwTqCorrlnChBTraLpFilY_Ary1D(void)
 *
 *********************************************************************************************************************/


# define HwTqCorrln_START_SEC_CODE
# include "HwTqCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqCorrlnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTqCorrlnInit1 HwTqCorrlnInit1
FUNC(void, HwTqCorrln_CODE) HwTqCorrlnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqCorrlnPer1
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
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTqCorrlnSts_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwTqCorrlnPer1_HwTqChAAvl(boolean data)
 *   void Rte_IrvWrite_HwTqCorrlnPer1_HwTqChBAvl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTqCorrlnPer1 HwTqCorrlnPer1
FUNC(void, HwTqCorrln_CODE) HwTqCorrlnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqCorrlnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTqA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTqChACorrlnTraErr_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqChBCorrlnTraErr_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqIdptSig_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_HwTqCorrlnPer2_HwTqChAAvl(void)
 *   boolean Rte_IrvRead_HwTqCorrlnPer2_HwTqChBAvl(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwTqCorrlnPer2_HwTqChATqSumLim(float32 data)
 *   void Rte_IrvWrite_HwTqCorrlnPer2_HwTqChBTqSumLim(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTqCorrlnPer2 HwTqCorrlnPer2
FUNC(void, HwTqCorrln_CODE) HwTqCorrlnPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqCorrlnPer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTqChA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqChB_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_HwTqCorrlnPer3_HwTqChATqSumLim(void)
 *   float32 Rte_IrvRead_HwTqCorrlnPer3_HwTqChBTqSumLim(void)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTqChACmnModCmpLpFilSt_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTqCorrlnPer3 HwTqCorrlnPer3
FUNC(void, HwTqCorrln_CODE) HwTqCorrlnPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwTqCorrln_STOP_SEC_CODE
# include "HwTqCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1460716785
#    error "The magic number of the generated file <C:/component/ES229A_HwTqCorrln_Impl/tools/contract/Rte_HwTqCorrln.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1460716785
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWTQCORRLN_H */
