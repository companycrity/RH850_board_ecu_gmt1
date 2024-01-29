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
 *          File:  Rte_WhlImbRejctn.h
 *     SW-C Type:  WhlImbRejctn
 *  Generated at:  Fri Feb  3 08:16:57 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <WhlImbRejctn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_WHLIMBREJCTN_H
# define _RTE_WHLIMBREJCTN_H

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

# include "Rte_WhlImbRejctn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_WhlImbRejctn
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BlndCmdMgnLp1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BlndCmdMgnLp2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmdMgnLp1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmdMgnLp2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(WhlImbRejctnCmpPeakRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmpPeakData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(PassFailCntrDiagcRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendLrngEnaPrevTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendLrngEnaPrevTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendRefTiEnaLrngTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DcTrendRefTiEnaLrngTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DistbnMagEnadPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DistbnMgnLeLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DistbnMgnRiLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EnaSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(PassFailCntrDiagcRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcLrngEnaPrevTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcRefTiEnaLrngTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcUgr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrqDiagcUgr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LeCurrMgnSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_30, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LeStDlyUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_30, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LeStVariUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxMgnFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(PassFailCntrDiagcRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxMgnFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxMgnFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxMgnLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxMgnRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaAdjFil1Coeff1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaAdjFil1Coeff2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaAdjFil2Coeff1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaAdjFil2Coeff2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RampNo; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RampYes; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RiCurrMgnSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_30, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RiStDlyUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_30, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RiStVariUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ScaLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ScaRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SlowSpdDiagcLrngEnaPrevTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SlowSpdDiagcRefTiEnaLrngTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_30, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StordValLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_30, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StordValRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_UgrLe1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_UgrLe2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_UgrRi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_UgrRi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdCorrFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdCorrFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdCorrlnDiagcLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdCorrlnDiagcRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(PassFailCntrDiagcRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdCorrlnFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdCorrlnLrngEnaPrevTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdCorrlnRefTiEnaLrngTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdLeLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdRiLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnCnclTqOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnCurrMgnLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnCurrMgnRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnFildWhlSpdLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnFildWhlSpdRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnLMSqdOutLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnLMSqdOutRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnScaLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnScaRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dWhlImbRejctnWhlSpdCorrPerc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_WhlImbRejctn, RTE_CONST, RTE_CONST) Rte_Inst_WhlImbRejctn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_WhlImbRejctn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (TRUE)
# define Rte_InitValue_WhlFrqVld_Logl (TRUE)
# define Rte_InitValue_WhlImbRejctnActv_Logl (FALSE)
# define Rte_InitValue_WhlImbRejctnAmp_Val (0.0F)
# define Rte_InitValue_WhlImbRejctnCmd_Val (0.0F)
# define Rte_InitValue_WhlImbRejctnCustEna_Logl (TRUE)
# define Rte_InitValue_WhlImbRejctnDi_Logl (FALSE)
# define Rte_InitValue_WhlLeFrq_Val (0.01F)
# define Rte_InitValue_WhlRiFrq_Val (0.01F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_WhlFrqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_WhlImbRejctnCustEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_WhlImbRejctnDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_WhlLeFrq_Val(P2VAR(float32, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_WhlImbRejctn_WhlRiFrq_Val(P2VAR(float32, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_WhlImbRejctn_WhlImbRejctnActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_WhlImbRejctn_WhlImbRejctnAmp_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_WhlImbRejctn_WhlImbRejctnCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_WhlImbRejctn_CmpPeakData_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_WhlImbRejctn_CmpPeakData_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_WhlImbRejctn_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_WhlImbRejctn_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_WHLIMBREJCTN_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_WhlImbRejctn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnAdpvFac_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnAutScaTar_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnCmdMgnLp1FilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnCmdMgnLp2FilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnCurrMgnSlewPerLoop_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryDly_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryNegStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryPosStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendTh2Tq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendThTq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendTi2Sec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendTiSec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnDistbnMgnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnEnaSlewPerLoop_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcAmpThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryDly_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcUgrPoleMgn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltNegStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltPosStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryDly_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryNegStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryPosStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnDeltaSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnDiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnEnaThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnFrqDelta_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnLeak_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnScaCncl_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnUgrPoleMgn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnVehSpdEna_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcTout_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxDurn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnRampDwnTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnAutScaEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFctEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u6p10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqScaTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u6p10_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqScaTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqScaTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqScaTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u7p9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnPhaAdjX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u7p9_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnPhaAdjX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s8p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnPhaAdjY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s8p7_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_WhlImbRejctn_WhlImbRejctnPhaAdjY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnInit1_CurrMgnSlewRate(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnInit1_EnaSlewRate(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnInit1_IniCmpFlt(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_CurrMgnSlewRate(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_EnaSlewRate(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_IniCmpFlt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_SlowSpdDiagc(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_CmdAmp(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_DcTrendFlt(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_FrqDiagcFlt(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_MaxMgnFlt(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_WhlSpdCorrlnFlt(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_CmdAmp(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_DcTrendFlt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_FrqDiagcFlt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_MaxMgnFlt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_WhlSpdCorrlnFlt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer2_SlowSpdDiagc(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(uint32, RTE_CODE) Rte_CData_WhlImbRejctn_ActvCmpBand1Dft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(uint32, RTE_CODE) Rte_CData_WhlImbRejctn_ActvCmpBand2Dft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(uint32, RTE_CODE) Rte_CData_WhlImbRejctn_ActvCmpBand3Dft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_CData_WhlImbRejctn_LePeakPrevDft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_CData_WhlImbRejctn_MaxCompPercDft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_CData_WhlImbRejctn_RiPeakPrevDft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq_Val Rte_Read_WhlImbRejctn_HwTq_Val
# define Rte_Read_SysSt_Val Rte_Read_WhlImbRejctn_SysSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_WhlImbRejctn_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_WhlImbRejctn_VehSpdVld_Logl
# define Rte_Read_WhlFrqVld_Logl Rte_Read_WhlImbRejctn_WhlFrqVld_Logl
# define Rte_Read_WhlImbRejctnCustEna_Logl Rte_Read_WhlImbRejctn_WhlImbRejctnCustEna_Logl
# define Rte_Read_WhlImbRejctnDi_Logl Rte_Read_WhlImbRejctn_WhlImbRejctnDi_Logl
# define Rte_Read_WhlLeFrq_Val Rte_Read_WhlImbRejctn_WhlLeFrq_Val
# define Rte_Read_WhlRiFrq_Val Rte_Read_WhlImbRejctn_WhlRiFrq_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_WhlImbRejctnActv_Logl Rte_Write_WhlImbRejctn_WhlImbRejctnActv_Logl
# define Rte_Write_WhlImbRejctnAmp_Val Rte_Write_WhlImbRejctn_WhlImbRejctnAmp_Val
# define Rte_Write_WhlImbRejctnCmd_Val Rte_Write_WhlImbRejctn_WhlImbRejctnCmd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CmpPeakData_GetErrorStatus Rte_Call_WhlImbRejctn_CmpPeakData_GetErrorStatus
# define Rte_Call_CmpPeakData_SetRamBlockStatus Rte_Call_WhlImbRejctn_CmpPeakData_SetRamBlockStatus
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_WhlImbRejctn_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_WhlImbRejctn_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_WhlImbRejctn_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnInit1_CurrMgnSlewRate(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnInit1_EnaSlewRate(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnInit1_IniCmpFlt(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_CurrMgnSlewRate()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_EnaSlewRate()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_IniCmpFlt()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer1_SlowSpdDiagc()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_CmdAmp(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_DcTrendFlt(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_FrqDiagcFlt(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_MaxMgnFlt(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer1_WhlSpdCorrlnFlt(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer2_CmdAmp() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_CmdAmp()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_DcTrendFlt()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_FrqDiagcFlt()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_MaxMgnFlt()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt() \
  Rte_IrvRead_WhlImbRejctn_WhlImbRejctnPer2_WhlSpdCorrlnFlt()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc(data) \
  Rte_IrvWrite_WhlImbRejctn_WhlImbRejctnPer2_SlowSpdDiagc(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_LePeakPrevDft Rte_CData_WhlImbRejctn_LePeakPrevDft

# define Rte_CData_MaxCompPercDft Rte_CData_WhlImbRejctn_MaxCompPercDft

# define Rte_CData_RiPeakPrevDft Rte_CData_WhlImbRejctn_RiPeakPrevDft

# define Rte_CData_ActvCmpBand1Dft Rte_CData_WhlImbRejctn_ActvCmpBand1Dft

# define Rte_CData_ActvCmpBand2Dft Rte_CData_WhlImbRejctn_ActvCmpBand2Dft

# define Rte_CData_ActvCmpBand3Dft Rte_CData_WhlImbRejctn_ActvCmpBand3Dft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_WhlImbRejctnAdpvFac_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnAdpvFac_Val

# define Rte_Prm_WhlImbRejctnAutScaTar_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnAutScaTar_Val

# define Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val

# define Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val

# define Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnCmdMgnLp1FilFrq_Val

# define Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnCmdMgnLp2FilFrq_Val

# define Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnCurrMgnSlewPerLoop_Val

# define Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryDly_Val

# define Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryNegStep_Val

# define Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryPosStep_Val

# define Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendFltRcvryThd_Val

# define Rte_Prm_WhlImbRejctnDcTrendLpFil_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendLpFil_Val

# define Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendTh2Tq_Val

# define Rte_Prm_WhlImbRejctnDcTrendThTq_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendThTq_Val

# define Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendTi2Sec_Val

# define Rte_Prm_WhlImbRejctnDcTrendTiSec_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDcTrendTiSec_Val

# define Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnDistbnMgnLpFil_Val

# define Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnEnaSlewPerLoop_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcAmpThd_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryDly_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcFltRcvryThd_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcLpFil_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcThd_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcUgrPoleMgn_Val

# define Rte_Prm_WhlImbRejctnMaxMgn_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgn_Val

# define Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltNegStep_Val

# define Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltPosStep_Val

# define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryDly_Val

# define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryNegStep_Val

# define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryPosStep_Val

# define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltRcvryThd_Val

# define Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxMgnFltThd_Val

# define Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnDeltaSca_Val

# define Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnDiThd_Val

# define Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnEnaThd_Val

# define Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnFrq_Val

# define Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnFrqDelta_Val

# define Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMgnEstimnLeak_Val

# define Rte_Prm_WhlImbRejctnScaCncl_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnScaCncl_Val

# define Rte_Prm_WhlImbRejctnUgrPoleMgn_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnUgrPoleMgn_Val

# define Rte_Prm_WhlImbRejctnVehSpdEna_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnVehSpdEna_Val

# define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val

# define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val

# define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val

# define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val

# define Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnThd_Val

# define Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdLpFil_Val

# define Rte_Prm_WhlImbRejctnFrqDiagcTout_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcTout_Val

# define Rte_Prm_WhlImbRejctnMaxDurn_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnMaxDurn_Val

# define Rte_Prm_WhlImbRejctnRampDwnTi_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnRampDwnTi_Val

# define Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val Rte_Prm_WhlImbRejctn_WhlImbRejctnWhlSpdCorrlnTi_Val

# define Rte_Prm_WhlImbRejctnAutScaEna_Logl Rte_Prm_WhlImbRejctn_WhlImbRejctnAutScaEna_Logl

# define Rte_Prm_WhlImbRejctnFctEna_Logl Rte_Prm_WhlImbRejctn_WhlImbRejctnFctEna_Logl

# define Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqDiagcEna_Logl

# define Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqScaTblX_Ary1D

# define Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D Rte_Prm_WhlImbRejctn_WhlImbRejctnFrqScaTblY_Ary1D

# define Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D Rte_Prm_WhlImbRejctn_WhlImbRejctnPhaAdjX_Ary1D

# define Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D Rte_Prm_WhlImbRejctn_WhlImbRejctnPhaAdjY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_EnaSlewPerLoop() (Rte_Inst_WhlImbRejctn->Pim_EnaSlewPerLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcUgr1() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcUgr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcUgr2() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcUgr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LeCurrMgnSlewPerLoop() (Rte_Inst_WhlImbRejctn->Pim_LeCurrMgnSlewPerLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaAdjFil1Coeff1() (Rte_Inst_WhlImbRejctn->Pim_PhaAdjFil1Coeff1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaAdjFil1Coeff2() (Rte_Inst_WhlImbRejctn->Pim_PhaAdjFil1Coeff2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaAdjFil2Coeff1() (Rte_Inst_WhlImbRejctn->Pim_PhaAdjFil2Coeff1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaAdjFil2Coeff2() (Rte_Inst_WhlImbRejctn->Pim_PhaAdjFil2Coeff2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevFlt() (Rte_Inst_WhlImbRejctn->Pim_PrevFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwTq() (Rte_Inst_WhlImbRejctn->Pim_PrevHwTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RiCurrMgnSlewPerLoop() (Rte_Inst_WhlImbRejctn->Pim_RiCurrMgnSlewPerLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ScaLe() (Rte_Inst_WhlImbRejctn->Pim_ScaLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ScaRi() (Rte_Inst_WhlImbRejctn->Pim_ScaRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_UgrLe1() (Rte_Inst_WhlImbRejctn->Pim_UgrLe1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_UgrLe2() (Rte_Inst_WhlImbRejctn->Pim_UgrLe2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_UgrRi1() (Rte_Inst_WhlImbRejctn->Pim_UgrRi1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_UgrRi2() (Rte_Inst_WhlImbRejctn->Pim_UgrRi2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnCnclTqOutp() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnCnclTqOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnCurrMgnLe() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnCurrMgnLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnCurrMgnRi() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnCurrMgnRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnFildWhlSpdLe() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnFildWhlSpdLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnFildWhlSpdRi() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnFildWhlSpdRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnLMSqdOutLe() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnLMSqdOutLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnLMSqdOutRi() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnLMSqdOutRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnScaLe() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnScaLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnScaRi() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnScaRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc() (Rte_Inst_WhlImbRejctn->Pim_dWhlImbRejctnWhlSpdCorrPerc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendRefTiEnaLrng() (Rte_Inst_WhlImbRejctn->Pim_DcTrendRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendRefTiEnaLrngTmr1() (Rte_Inst_WhlImbRejctn->Pim_DcTrendRefTiEnaLrngTmr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendRefTiEnaLrngTmr2() (Rte_Inst_WhlImbRejctn->Pim_DcTrendRefTiEnaLrngTmr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcRefTiEnaLrng() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcRefTiEnaLrngTiOut() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcRefTiEnaLrngTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxMgnRefTiEnaLrng() (Rte_Inst_WhlImbRejctn->Pim_MaxMgnRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr() (Rte_Inst_WhlImbRejctn->Pim_SlowSpdDiagcRefTiEnaLrngTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdCorrlnDiagcRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdCorrlnRefTiEnaLrngTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendFltFaild() (Rte_Inst_WhlImbRejctn->Pim_DcTrendFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendFltRst() (Rte_Inst_WhlImbRejctn->Pim_DcTrendFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendLrngEnaPrev() (Rte_Inst_WhlImbRejctn->Pim_DcTrendLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendLrngEnaPrevTmr1() (Rte_Inst_WhlImbRejctn->Pim_DcTrendLrngEnaPrevTmr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendLrngEnaPrevTmr2() (Rte_Inst_WhlImbRejctn->Pim_DcTrendLrngEnaPrevTmr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DistbnMagEnadPrev() (Rte_Inst_WhlImbRejctn->Pim_DistbnMagEnadPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcFltFaild() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcFltRst() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcLrngEnaPrev() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcLrngEnaPrevTiOut() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcLrngEnaPrevTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxMgnFltFaild() (Rte_Inst_WhlImbRejctn->Pim_MaxMgnFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxMgnFltRst() (Rte_Inst_WhlImbRejctn->Pim_MaxMgnFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxMgnLrngEnaPrev() (Rte_Inst_WhlImbRejctn->Pim_MaxMgnLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSts() (Rte_Inst_WhlImbRejctn->Pim_PrevSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RampNo() (Rte_Inst_WhlImbRejctn->Pim_RampNo) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RampYes() (Rte_Inst_WhlImbRejctn->Pim_RampYes) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr() (Rte_Inst_WhlImbRejctn->Pim_SlowSpdDiagcLrngEnaPrevTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdCorrFltFaild() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdCorrFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdCorrFltRst() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdCorrFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdCorrlnDiagcLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdCorrlnLrngEnaPrevTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_LeStDlyUpd() (*Rte_Inst_WhlImbRejctn->Pim_LeStDlyUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_LeStDlyUpd() (Rte_Inst_WhlImbRejctn->Pim_LeStDlyUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_LeStVariUpd() (*Rte_Inst_WhlImbRejctn->Pim_LeStVariUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_LeStVariUpd() (Rte_Inst_WhlImbRejctn->Pim_LeStVariUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RiStDlyUpd() (*Rte_Inst_WhlImbRejctn->Pim_RiStDlyUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RiStDlyUpd() (Rte_Inst_WhlImbRejctn->Pim_RiStDlyUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RiStVariUpd() (*Rte_Inst_WhlImbRejctn->Pim_RiStVariUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RiStVariUpd() (Rte_Inst_WhlImbRejctn->Pim_RiStVariUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_StordValLe() (*Rte_Inst_WhlImbRejctn->Pim_StordValLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_StordValLe() (Rte_Inst_WhlImbRejctn->Pim_StordValLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_StordValRi() (*Rte_Inst_WhlImbRejctn->Pim_StordValRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_StordValRi() (Rte_Inst_WhlImbRejctn->Pim_StordValRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Rte_Pim_BlndCmdMgnLp1Fil() (Rte_Inst_WhlImbRejctn->Pim_BlndCmdMgnLp1Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BlndCmdMgnLp2Fil() (Rte_Inst_WhlImbRejctn->Pim_BlndCmdMgnLp2Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CmdMgnLp1Fil() (Rte_Inst_WhlImbRejctn->Pim_CmdMgnLp1Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CmdMgnLp2Fil() (Rte_Inst_WhlImbRejctn->Pim_CmdMgnLp2Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CmpPeakData() (Rte_Inst_WhlImbRejctn->Pim_CmpPeakData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendFltRcvry() (Rte_Inst_WhlImbRejctn->Pim_DcTrendFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DcTrendLpFil() (Rte_Inst_WhlImbRejctn->Pim_DcTrendLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DistbnMgnLeLpFil() (Rte_Inst_WhlImbRejctn->Pim_DistbnMgnLeLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DistbnMgnRiLpFil() (Rte_Inst_WhlImbRejctn->Pim_DistbnMgnRiLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcFltRcvry() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrqDiagcLpFil() (Rte_Inst_WhlImbRejctn->Pim_FrqDiagcLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxMgnFltRcvry() (Rte_Inst_WhlImbRejctn->Pim_MaxMgnFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdCorrlnFltRcvry() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdCorrlnFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdLeLpFil() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdLeLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdRiLpFil() (Rte_Inst_WhlImbRejctn->Pim_WhlSpdRiLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_EnaSlewPerLoop(void)
 *   float32 *Rte_Pim_FrqDiagcUgr1(void)
 *   float32 *Rte_Pim_FrqDiagcUgr2(void)
 *   float32 *Rte_Pim_LeCurrMgnSlewPerLoop(void)
 *   float32 *Rte_Pim_PhaAdjFil1Coeff1(void)
 *   float32 *Rte_Pim_PhaAdjFil1Coeff2(void)
 *   float32 *Rte_Pim_PhaAdjFil2Coeff1(void)
 *   float32 *Rte_Pim_PhaAdjFil2Coeff2(void)
 *   float32 *Rte_Pim_PrevFlt(void)
 *   float32 *Rte_Pim_PrevHwTq(void)
 *   float32 *Rte_Pim_RiCurrMgnSlewPerLoop(void)
 *   float32 *Rte_Pim_ScaLe(void)
 *   float32 *Rte_Pim_ScaRi(void)
 *   float32 *Rte_Pim_UgrLe1(void)
 *   float32 *Rte_Pim_UgrLe2(void)
 *   float32 *Rte_Pim_UgrRi1(void)
 *   float32 *Rte_Pim_UgrRi2(void)
 *   float32 *Rte_Pim_dWhlImbRejctnCnclTqOutp(void)
 *   float32 *Rte_Pim_dWhlImbRejctnCurrMgnLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnCurrMgnRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnFildWhlSpdLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnFildWhlSpdRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnLMSqdOutLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnLMSqdOutRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnScaLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnScaRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc(void)
 *   uint32 *Rte_Pim_DcTrendRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_DcTrendRefTiEnaLrngTmr1(void)
 *   uint32 *Rte_Pim_DcTrendRefTiEnaLrngTmr2(void)
 *   uint32 *Rte_Pim_FrqDiagcRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_FrqDiagcRefTiEnaLrngTiOut(void)
 *   uint32 *Rte_Pim_MaxMgnRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr(void)
 *   uint32 *Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr(void)
 *   boolean *Rte_Pim_DcTrendFltFaild(void)
 *   boolean *Rte_Pim_DcTrendFltRst(void)
 *   boolean *Rte_Pim_DcTrendLrngEnaPrev(void)
 *   boolean *Rte_Pim_DcTrendLrngEnaPrevTmr1(void)
 *   boolean *Rte_Pim_DcTrendLrngEnaPrevTmr2(void)
 *   boolean *Rte_Pim_DistbnMagEnadPrev(void)
 *   boolean *Rte_Pim_FrqDiagcFltFaild(void)
 *   boolean *Rte_Pim_FrqDiagcFltRst(void)
 *   boolean *Rte_Pim_FrqDiagcLrngEnaPrev(void)
 *   boolean *Rte_Pim_FrqDiagcLrngEnaPrevTiOut(void)
 *   boolean *Rte_Pim_MaxMgnFltFaild(void)
 *   boolean *Rte_Pim_MaxMgnFltRst(void)
 *   boolean *Rte_Pim_MaxMgnLrngEnaPrev(void)
 *   boolean *Rte_Pim_PrevSts(void)
 *   boolean *Rte_Pim_RampNo(void)
 *   boolean *Rte_Pim_RampYes(void)
 *   boolean *Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr(void)
 *   boolean *Rte_Pim_WhlSpdCorrFltFaild(void)
 *   boolean *Rte_Pim_WhlSpdCorrFltRst(void)
 *   boolean *Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev(void)
 *   boolean *Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr(void)
 *   float32 *Rte_Pim_LeStDlyUpd(void)
 *   float32 *Rte_Pim_LeStVariUpd(void)
 *   float32 *Rte_Pim_RiStDlyUpd(void)
 *   float32 *Rte_Pim_RiStVariUpd(void)
 *   float32 *Rte_Pim_StordValLe(void)
 *   float32 *Rte_Pim_StordValRi(void)
 *   FilLpRec1 *Rte_Pim_BlndCmdMgnLp1Fil(void)
 *   FilLpRec1 *Rte_Pim_BlndCmdMgnLp2Fil(void)
 *   FilLpRec1 *Rte_Pim_CmdMgnLp1Fil(void)
 *   FilLpRec1 *Rte_Pim_CmdMgnLp2Fil(void)
 *   WhlImbRejctnCmpPeakRec1 *Rte_Pim_CmpPeakData(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_DcTrendFltRcvry(void)
 *   FilLpRec1 *Rte_Pim_DcTrendLpFil(void)
 *   FilLpRec1 *Rte_Pim_DistbnMgnLeLpFil(void)
 *   FilLpRec1 *Rte_Pim_DistbnMgnRiLpFil(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_FrqDiagcFltRcvry(void)
 *   FilLpRec1 *Rte_Pim_FrqDiagcLpFil(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_MaxMgnFltRcvry(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_WhlSpdCorrlnFltRcvry(void)
 *   FilLpRec1 *Rte_Pim_WhlSpdLeLpFil(void)
 *   FilLpRec1 *Rte_Pim_WhlSpdRiLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   float32 Rte_CData_LePeakPrevDft(void)
 *   float32 Rte_CData_MaxCompPercDft(void)
 *   float32 Rte_CData_RiPeakPrevDft(void)
 *   uint32 Rte_CData_ActvCmpBand1Dft(void)
 *   uint32 Rte_CData_ActvCmpBand2Dft(void)
 *   uint32 Rte_CData_ActvCmpBand3Dft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_WhlImbRejctnAdpvFac_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnAutScaTar_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendLpFil_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendThTq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendTiSec_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgn_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnScaCncl_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnUgrPoleMgn_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnVehSpdEna_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val(void)
 *   u16p0 Rte_Prm_WhlImbRejctnFrqDiagcTout_Val(void)
 *   uint16 Rte_Prm_WhlImbRejctnMaxDurn_Val(void)
 *   u16p0 Rte_Prm_WhlImbRejctnRampDwnTi_Val(void)
 *   u16p0 Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val(void)
 *   boolean Rte_Prm_WhlImbRejctnAutScaEna_Logl(void)
 *   boolean Rte_Prm_WhlImbRejctnFctEna_Logl(void)
 *   boolean Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl(void)
 *   u6p10 *Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D(void)
 *   u1p15 *Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D(void)
 *   u7p9 *Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D(void)
 *   s8p7 *Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D(void)
 *
 *********************************************************************************************************************/


# define WhlImbRejctn_START_SEC_CODE
# include "WhlImbRejctn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: WhlImbRejctnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate(float32 data)
 *   void Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate(float32 data)
 *   void Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CmpPeakData_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_CmpPeakData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_WhlImbRejctnInit1 WhlImbRejctnInit1
FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: WhlImbRejctnPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlFrqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnCustEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlLeFrq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlRiFrq_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlImbRejctnActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlImbRejctnAmp_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlImbRejctnCmd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate(void)
 *   float32 Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp(float32 data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt(boolean data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt(boolean data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt(boolean data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_WhlImbRejctnPer1 WhlImbRejctnPer1
FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: WhlImbRejctnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_WhlImbRejctnPer2_CmdAmp(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_WhlImbRejctnPer2 WhlImbRejctnPer2
FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define WhlImbRejctn_STOP_SEC_CODE
# include "WhlImbRejctn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1486131525
#    error "The magic number of the generated file <C:/component/SF015A_WhlImbRejctn_Impl/tools/contract/Rte_WhlImbRejctn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1486131525
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_WHLIMBREJCTN_H */
