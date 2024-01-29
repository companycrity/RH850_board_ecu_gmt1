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
 *          File:  Rte_StHlthSigNormn.h
 *     SW-C Type:  StHlthSigNormn
 *  Generated at:  Wed Sep 28 16:12:24 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StHlthSigNormn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STHLTHSIGNORMN_H
# define _RTE_STHLTHSIGNORMN_H

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

# include "Rte_StHlthSigNormn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_StHlthSigNormn
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AbsltMotPosABDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AbsltMotPosACDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AbsltMotPosBCDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMotSumABCStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMotSumDEFStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DigTqIdptSigStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DigTqSnsrAStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DigTqSnsrBStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EcuTRngIgnCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EntrEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EotImpctCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u0p16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgCorrlnErrThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotPosStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaAStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaBStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaCStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaDStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaEStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaFStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VltgRngIgnCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_StHlthSigNormn, RTE_CONST, RTE_CONST) Rte_Inst_StHlthSigNormn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_StHlthSigNormn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AbsltMotPosABDifStHlth_Val (100U)
# define Rte_InitValue_AbsltMotPosACDifStHlth_Val (100U)
# define Rte_InitValue_AbsltMotPosBCDifStHlth_Val (100U)
# define Rte_InitValue_CtrlrTRng_Val (0U)
# define Rte_InitValue_CtrlrTStHlth_Val (100U)
# define Rte_InitValue_CurrMotSumABC_Val (0.0F)
# define Rte_InitValue_CurrMotSumABCStHlth_Val (100U)
# define Rte_InitValue_CurrMotSumDEF_Val (0.0F)
# define Rte_InitValue_CurrMotSumDEFStHlth_Val (100U)
# define Rte_InitValue_DigTqIdptSigStHlth_Val (100U)
# define Rte_InitValue_DigTqSnsrAStHlth_Val (100U)
# define Rte_InitValue_DigTqSnsrBStHlth_Val (100U)
# define Rte_InitValue_DutyCycStHlth_Val (100U)
# define Rte_InitValue_DutyCycThermProtnMaxOutp_Val (0U)
# define Rte_InitValue_EcuTFild_Val (0.0F)
# define Rte_InitValue_EotImpctStHlth_Val (100U)
# define Rte_InitValue_FricEstimnStHlth_Val (100U)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_HwAuthy_Val (0.0F)
# define Rte_InitValue_HwTqChACorrlnTraErr_Val (0.0F)
# define Rte_InitValue_HwTqChBCorrlnTraErr_Val (0.0F)
# define Rte_InitValue_HwTqIdptSig_Val (4U)
# define Rte_InitValue_LclRamEccSngBitCntrOutp_Val (0U)
# define Rte_InitValue_MaxLrndFric_Val (0.0F)
# define Rte_InitValue_MotAg2VltgSqd_Val (1.755625F)
# define Rte_InitValue_MotAgABErrTerm_Val (0U)
# define Rte_InitValue_MotAgACErrTerm_Val (0U)
# define Rte_InitValue_MotAgBCErrTerm_Val (0U)
# define Rte_InitValue_MotDrvErrA_Val (0.0F)
# define Rte_InitValue_MotDrvErrB_Val (0.0F)
# define Rte_InitValue_MotDrvErrC_Val (0.0F)
# define Rte_InitValue_MotDrvErrD_Val (0.0F)
# define Rte_InitValue_MotDrvErrE_Val (0.0F)
# define Rte_InitValue_MotDrvErrF_Val (0.0F)
# define Rte_InitValue_MotPosStHlth_Val (100U)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_OutpAssiStHlth_Val (100U)
# define Rte_InitValue_PhaAStHlth_Val (100U)
# define Rte_InitValue_PhaBStHlth_Val (100U)
# define Rte_InitValue_PhaCStHlth_Val (100U)
# define Rte_InitValue_PhaDStHlth_Val (100U)
# define Rte_InitValue_PhaEStHlth_Val (100U)
# define Rte_InitValue_PhaFStHlth_Val (100U)
# define Rte_InitValue_RackLimrEotSig0Avl_Logl (FALSE)
# define Rte_InitValue_RackLimrEotSig1Avl_Logl (FALSE)
# define Rte_InitValue_RamEccSngBitCorrnStHlth_Val (100U)
# define Rte_InitValue_VltgRng_Val (0U)
# define Rte_InitValue_WhlImbMaxCmpStHlth_Val (100U)
# define Rte_InitValue_WhlImbRejctnCmd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_CurrMotSumABC_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_CurrMotSumDEF_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_DutyCycThermProtnMaxOutp_Val(P2VAR(uint16, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_HwAgEotCcw_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_HwAgEotCw_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_HwAuthy_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_HwTqChACorrlnTraErr_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_HwTqChBCorrlnTraErr_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_HwTqIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_LclRamEccSngBitCntrOutp_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MaxLrndFric_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotAg2VltgSqd_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotAgABErrTerm_Val(P2VAR(u0p16, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotAgACErrTerm_Val(P2VAR(u0p16, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotAgBCErrTerm_Val(P2VAR(u0p16, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotDrvErrA_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotDrvErrB_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotDrvErrC_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotDrvErrD_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotDrvErrE_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotDrvErrF_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_RackLimrEotSig0Avl_Logl(P2VAR(boolean, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_RackLimrEotSig1Avl_Logl(P2VAR(boolean, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigNormn_WhlImbRejctnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_AbsltMotPosABDifStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_AbsltMotPosACDifStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_CtrlrTRng_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_CtrlrTStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_CurrMotSumABCStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_CurrMotSumDEFStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_DigTqIdptSigStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_DigTqSnsrAStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_DigTqSnsrBStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_DutyCycStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_EotImpctStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_FricEstimnStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_MotPosStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_OutpAssiStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_PhaAStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_PhaBStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_PhaCStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_PhaDStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_PhaEStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_PhaFStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_VltgRng_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StHlthSigNormn_WhlImbMaxCmpStHlth_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StHlthSigNormn_GetFricLrngData_Oper(P2VAR(boolean, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) FricLrngEna_Arg, P2VAR(boolean, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) FricLrngOffsOutpEna_Arg, P2VAR(SysFricLrngOperMod1, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) FricLrngOperMod_Arg, P2VAR(float32, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StHlthSigNormn_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_STHLTHSIGNORMN_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StHlthSigNormn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_CurrMeasCorrlnMaxErrCurr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_EcuTMeasRngDiagcMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_EcuTMeasRngDiagcMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_EotLrngAuthyStrtLrn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_HwTqCorrlnChATraSumSetFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_HwTqCorrlnChBTraSumSetFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnHiCtrlrT_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnLoCtrlrT_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnMaxFricThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnMinRackTrvlLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnMotVelCal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnStHlthCurrMotSum_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnStHlthPhaInfo_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnValMaxStHlthErr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnValMinStHlthErr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnWhlImbRejctnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_StHlthSigNormn_MotDrvDiagcErrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_StHlthSigNormn_DutyCycThermProtnDutyCycFildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnDutyCycFltLimThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u0p16, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnStHlthCorrlnErr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnCurrMotSumStHlthDiagThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnDigTqStHlthDiagThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnIdptSigStHlthSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnMotPosStHlthDiagThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_StHlthSigNormn_StHlthSigNormnPhaInfoStHlthDiagThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_StHlthSigNormn_SysGlbPrmMotPoleCnt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_StHlthSigNormn_StHlthSigNormnInit1_EolFric(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_StHlthSigNormn_UpdRawSig_Oper_EolFric(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CurrMotSumABC_Val Rte_Read_StHlthSigNormn_CurrMotSumABC_Val
# define Rte_Read_CurrMotSumDEF_Val Rte_Read_StHlthSigNormn_CurrMotSumDEF_Val
# define Rte_Read_DutyCycThermProtnMaxOutp_Val Rte_Read_StHlthSigNormn_DutyCycThermProtnMaxOutp_Val
# define Rte_Read_EcuTFild_Val Rte_Read_StHlthSigNormn_EcuTFild_Val
# define Rte_Read_HwAg_Val Rte_Read_StHlthSigNormn_HwAg_Val
# define Rte_Read_HwAgEotCcw_Val Rte_Read_StHlthSigNormn_HwAgEotCcw_Val
# define Rte_Read_HwAgEotCw_Val Rte_Read_StHlthSigNormn_HwAgEotCw_Val
# define Rte_Read_HwAuthy_Val Rte_Read_StHlthSigNormn_HwAuthy_Val
# define Rte_Read_HwTqChACorrlnTraErr_Val Rte_Read_StHlthSigNormn_HwTqChACorrlnTraErr_Val
# define Rte_Read_HwTqChBCorrlnTraErr_Val Rte_Read_StHlthSigNormn_HwTqChBCorrlnTraErr_Val
# define Rte_Read_HwTqIdptSig_Val Rte_Read_StHlthSigNormn_HwTqIdptSig_Val
# define Rte_Read_LclRamEccSngBitCntrOutp_Val Rte_Read_StHlthSigNormn_LclRamEccSngBitCntrOutp_Val
# define Rte_Read_MaxLrndFric_Val Rte_Read_StHlthSigNormn_MaxLrndFric_Val
# define Rte_Read_MotAg2VltgSqd_Val Rte_Read_StHlthSigNormn_MotAg2VltgSqd_Val
# define Rte_Read_MotAgABErrTerm_Val Rte_Read_StHlthSigNormn_MotAgABErrTerm_Val
# define Rte_Read_MotAgACErrTerm_Val Rte_Read_StHlthSigNormn_MotAgACErrTerm_Val
# define Rte_Read_MotAgBCErrTerm_Val Rte_Read_StHlthSigNormn_MotAgBCErrTerm_Val
# define Rte_Read_MotDrvErrA_Val Rte_Read_StHlthSigNormn_MotDrvErrA_Val
# define Rte_Read_MotDrvErrB_Val Rte_Read_StHlthSigNormn_MotDrvErrB_Val
# define Rte_Read_MotDrvErrC_Val Rte_Read_StHlthSigNormn_MotDrvErrC_Val
# define Rte_Read_MotDrvErrD_Val Rte_Read_StHlthSigNormn_MotDrvErrD_Val
# define Rte_Read_MotDrvErrE_Val Rte_Read_StHlthSigNormn_MotDrvErrE_Val
# define Rte_Read_MotDrvErrF_Val Rte_Read_StHlthSigNormn_MotDrvErrF_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_StHlthSigNormn_MotVelCrf_Val
# define Rte_Read_RackLimrEotSig0Avl_Logl Rte_Read_StHlthSigNormn_RackLimrEotSig0Avl_Logl
# define Rte_Read_RackLimrEotSig1Avl_Logl Rte_Read_StHlthSigNormn_RackLimrEotSig1Avl_Logl
# define Rte_Read_WhlImbRejctnCmd_Val Rte_Read_StHlthSigNormn_WhlImbRejctnCmd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AbsltMotPosABDifStHlth_Val Rte_Write_StHlthSigNormn_AbsltMotPosABDifStHlth_Val
# define Rte_Write_AbsltMotPosACDifStHlth_Val Rte_Write_StHlthSigNormn_AbsltMotPosACDifStHlth_Val
# define Rte_Write_AbsltMotPosBCDifStHlth_Val Rte_Write_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val
# define Rte_Write_CtrlrTRng_Val Rte_Write_StHlthSigNormn_CtrlrTRng_Val
# define Rte_Write_CtrlrTStHlth_Val Rte_Write_StHlthSigNormn_CtrlrTStHlth_Val
# define Rte_Write_CurrMotSumABCStHlth_Val Rte_Write_StHlthSigNormn_CurrMotSumABCStHlth_Val
# define Rte_Write_CurrMotSumDEFStHlth_Val Rte_Write_StHlthSigNormn_CurrMotSumDEFStHlth_Val
# define Rte_Write_DigTqIdptSigStHlth_Val Rte_Write_StHlthSigNormn_DigTqIdptSigStHlth_Val
# define Rte_Write_DigTqSnsrAStHlth_Val Rte_Write_StHlthSigNormn_DigTqSnsrAStHlth_Val
# define Rte_Write_DigTqSnsrBStHlth_Val Rte_Write_StHlthSigNormn_DigTqSnsrBStHlth_Val
# define Rte_Write_DutyCycStHlth_Val Rte_Write_StHlthSigNormn_DutyCycStHlth_Val
# define Rte_Write_EotImpctStHlth_Val Rte_Write_StHlthSigNormn_EotImpctStHlth_Val
# define Rte_Write_FricEstimnStHlth_Val Rte_Write_StHlthSigNormn_FricEstimnStHlth_Val
# define Rte_Write_MotPosStHlth_Val Rte_Write_StHlthSigNormn_MotPosStHlth_Val
# define Rte_Write_OutpAssiStHlth_Val Rte_Write_StHlthSigNormn_OutpAssiStHlth_Val
# define Rte_Write_PhaAStHlth_Val Rte_Write_StHlthSigNormn_PhaAStHlth_Val
# define Rte_Write_PhaBStHlth_Val Rte_Write_StHlthSigNormn_PhaBStHlth_Val
# define Rte_Write_PhaCStHlth_Val Rte_Write_StHlthSigNormn_PhaCStHlth_Val
# define Rte_Write_PhaDStHlth_Val Rte_Write_StHlthSigNormn_PhaDStHlth_Val
# define Rte_Write_PhaEStHlth_Val Rte_Write_StHlthSigNormn_PhaEStHlth_Val
# define Rte_Write_PhaFStHlth_Val Rte_Write_StHlthSigNormn_PhaFStHlth_Val
# define Rte_Write_RamEccSngBitCorrnStHlth_Val Rte_Write_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val
# define Rte_Write_VltgRng_Val Rte_Write_StHlthSigNormn_VltgRng_Val
# define Rte_Write_WhlImbMaxCmpStHlth_Val Rte_Write_StHlthSigNormn_WhlImbMaxCmpStHlth_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetFricLrngData_Oper Rte_Call_StHlthSigNormn_GetFricLrngData_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_StHlthSigNormn_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_StHlthSigNormn_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_StHlthSigNormnInit1_EolFric(data) \
  Rte_IrvWrite_StHlthSigNormn_StHlthSigNormnInit1_EolFric(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_UpdRawSig_Oper_EolFric() \
  Rte_IrvRead_StHlthSigNormn_UpdRawSig_Oper_EolFric()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val Rte_Prm_StHlthSigNormn_CurrMeasCorrlnMaxErrCurr_Val

# define Rte_Prm_EcuTMeasRngDiagcMax_Val Rte_Prm_StHlthSigNormn_EcuTMeasRngDiagcMax_Val

# define Rte_Prm_EcuTMeasRngDiagcMin_Val Rte_Prm_StHlthSigNormn_EcuTMeasRngDiagcMin_Val

# define Rte_Prm_EotLrngAuthyStrtLrn_Val Rte_Prm_StHlthSigNormn_EotLrngAuthyStrtLrn_Val

# define Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val Rte_Prm_StHlthSigNormn_HwTqCorrlnChATraSumSetFltThd_Val

# define Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val Rte_Prm_StHlthSigNormn_HwTqCorrlnChBTraSumSetFltThd_Val

# define Rte_Prm_StHlthSigNormnHiCtrlrT_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnHiCtrlrT_Val

# define Rte_Prm_StHlthSigNormnLoCtrlrT_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnLoCtrlrT_Val

# define Rte_Prm_StHlthSigNormnMaxFricThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnMaxFricThd_Val

# define Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnMinRackTrvlLim_Val

# define Rte_Prm_StHlthSigNormnMotVelCal_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnMotVelCal_Val

# define Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnStHlthCurrMotSum_Val

# define Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnStHlthPhaInfo_Val

# define Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnValMaxStHlthErr_Val

# define Rte_Prm_StHlthSigNormnValMinStHlthErr_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnValMinStHlthErr_Val

# define Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnWhlImbRejctnThd_Val

# define Rte_Prm_MotDrvDiagcErrThd_Val Rte_Prm_StHlthSigNormn_MotDrvDiagcErrThd_Val

# define Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val Rte_Prm_StHlthSigNormn_DutyCycThermProtnDutyCycFildThd_Val

# define Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnDutyCycFltLimThd_Val

# define Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnStHlthCorrlnErr_Val

# define Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val

# define Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnCurrMotSumStHlthDiagThd_Val

# define Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnDigTqStHlthDiagThd_Val

# define Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnIdptSigStHlthSca_Val

# define Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnMotPosStHlthDiagThd_Val

# define Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val Rte_Prm_StHlthSigNormn_StHlthSigNormnPhaInfoStHlthDiagThd_Val

# define Rte_Prm_SysGlbPrmMotPoleCnt_Val Rte_Prm_StHlthSigNormn_SysGlbPrmMotPoleCnt_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MotAgCorrlnErrThd() (Rte_Inst_StHlthSigNormn->Pim_MotAgCorrlnErrThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AbsltMotPosABDifStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_AbsltMotPosABDifStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AbsltMotPosACDifStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_AbsltMotPosACDifStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AbsltMotPosBCDifStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_AbsltMotPosBCDifStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrMotSumABCStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_CurrMotSumABCStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrMotSumDEFStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_CurrMotSumDEFStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DigTqIdptSigStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_DigTqIdptSigStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DigTqSnsrAStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_DigTqSnsrAStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DigTqSnsrBStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_DigTqSnsrBStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EcuTRngIgnCyc() (Rte_Inst_StHlthSigNormn->Pim_EcuTRngIgnCyc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EotImpctCntr() (Rte_Inst_StHlthSigNormn->Pim_EotImpctCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotPosStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_MotPosStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaAStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_PhaAStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaBStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_PhaBStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaCStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_PhaCStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaDStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_PhaDStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaEStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_PhaEStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaFStHlthSts() (Rte_Inst_StHlthSigNormn->Pim_PhaFStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VltgRngIgnCyc() (Rte_Inst_StHlthSigNormn->Pim_VltgRngIgnCyc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EntrEot() (Rte_Inst_StHlthSigNormn->Pim_EntrEot) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   u0p16 *Rte_Pim_MotAgCorrlnErrThd(void)
 *   uint8 *Rte_Pim_AbsltMotPosABDifStHlthSts(void)
 *   uint8 *Rte_Pim_AbsltMotPosACDifStHlthSts(void)
 *   uint8 *Rte_Pim_AbsltMotPosBCDifStHlthSts(void)
 *   uint8 *Rte_Pim_CurrMotSumABCStHlthSts(void)
 *   uint8 *Rte_Pim_CurrMotSumDEFStHlthSts(void)
 *   uint8 *Rte_Pim_DigTqIdptSigStHlthSts(void)
 *   uint8 *Rte_Pim_DigTqSnsrAStHlthSts(void)
 *   uint8 *Rte_Pim_DigTqSnsrBStHlthSts(void)
 *   uint8 *Rte_Pim_EcuTRngIgnCyc(void)
 *   uint8 *Rte_Pim_EotImpctCntr(void)
 *   uint8 *Rte_Pim_MotPosStHlthSts(void)
 *   uint8 *Rte_Pim_PhaAStHlthSts(void)
 *   uint8 *Rte_Pim_PhaBStHlthSts(void)
 *   uint8 *Rte_Pim_PhaCStHlthSts(void)
 *   uint8 *Rte_Pim_PhaDStHlthSts(void)
 *   uint8 *Rte_Pim_PhaEStHlthSts(void)
 *   uint8 *Rte_Pim_PhaFStHlthSts(void)
 *   uint8 *Rte_Pim_VltgRngIgnCyc(void)
 *   boolean *Rte_Pim_EntrEot(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val(void)
 *   float32 Rte_Prm_EcuTMeasRngDiagcMax_Val(void)
 *   float32 Rte_Prm_EcuTMeasRngDiagcMin_Val(void)
 *   float32 Rte_Prm_EotLrngAuthyStrtLrn_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnHiCtrlrT_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnLoCtrlrT_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnMaxFricThd_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnMotVelCal_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnValMinStHlthErr_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val(void)
 *   uint32 Rte_Prm_MotDrvDiagcErrThd_Val(void)
 *   uint16 Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val(void)
 *   uint16 Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val(void)
 *   u0p16 Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *
 *********************************************************************************************************************/


# define StHlthSigNormn_START_SEC_CODE
# include "StHlthSigNormn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: StHlthSigNormnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AbsltMotPosABDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosACDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosBCDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTRng_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumABCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumDEFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqIdptSigStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DutyCycStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EotImpctStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotPosStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutpAssiStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaDStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaEStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RamEccSngBitCorrnStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VltgRng_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_StHlthSigNormnInit1_EolFric(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StHlthSigNormnInit1 StHlthSigNormnInit1
FUNC(void, StHlthSigNormn_CODE) StHlthSigNormnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: UpdRawSig_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <UpdRawSig>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CurrMotSumABC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumDEF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DutyCycThermProtnMaxOutp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqChACorrlnTraErr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqChBCorrlnTraErr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LclRamEccSngBitCntrOutp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MaxLrndFric_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg2VltgSqd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAgABErrTerm_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAgACErrTerm_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAgBCErrTerm_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrE_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RackLimrEotSig0Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RackLimrEotSig1Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AbsltMotPosABDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosACDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosBCDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTRng_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumABCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumDEFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqIdptSigStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DutyCycStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EotImpctStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FricEstimnStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotPosStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutpAssiStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaDStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaEStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RamEccSngBitCorrnStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VltgRng_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlImbMaxCmpStHlth_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_UpdRawSig_Oper_EolFric(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void UpdRawSig_Oper(StHlthMonSig3 SigId_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_UpdRawSig_Oper UpdRawSig_Oper
FUNC(void, StHlthSigNormn_CODE) UpdRawSig_Oper(StHlthMonSig3 SigId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StHlthSigNormn_STOP_SEC_CODE
# include "StHlthSigNormn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1475084454
#    error "The magic number of the generated file <C:/Component/ES105A_StHlthSigNormn_Impl/tools/contract/Rte_StHlthSigNormn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1475084454
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_STHLTHSIGNORMN_H */
