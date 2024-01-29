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
 *          File:  Rte_CDD_CurrMeas.h
 *     SW-C Type:  CDD_CurrMeas
 *  Generated at:  Thu Dec  8 14:09:28 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_CurrMeas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_CURRMEAS_H
# define _RTE_CDD_CURRMEAS_H

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

# include "Rte_CDD_CurrMeas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_CurrMeas
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrdgVltgSumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(CurrMeasEolGainCalRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMeasEolGainCalSet; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(CurrMeasEolOffsCalRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMeasEolOffsCalSet; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EolGainSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EolOffsHiBrdgVltg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EolOffsSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EolTranCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GainEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCtrlNtc5DErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCtrlNtc6DErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(MotCurrEolCalSt2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolCalStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolGainA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolGainB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolGainC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolGainD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolGainE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolGainF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrEolOffsProcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsDeltaA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsDeltaB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsDeltaC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsDeltaD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsDeltaE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsDeltaF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsHiAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsHiAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsHiAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsHiAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsHiAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsHiAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsLoAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsLoAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsLoAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsLoAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsLoAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsLoAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsZeroAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsZeroAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsZeroAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsZeroAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsZeroAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrOffsZeroAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrRollgCnt1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrRollgCnt2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrSumDPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrSumEPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrSumFPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ntc5DErrCnt2MilliSecPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ntc6DErrCnt2MilliSecPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OffsEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TempMotCurrAdcVlySum1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TempMotCurrAdcVlySum2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WrmIninTestCmplPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_CurrMeas, RTE_CONST, RTE_CONST) Rte_Inst_CDD_CurrMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_CurrMeas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BrdgVltg_Val (6.0F)
# define Rte_InitValue_CurrMeasWrmIninTestCmpl_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
# define Rte_InitValue_MotCurrAdcVlyA_Val (0.0F)
# define Rte_InitValue_MotCurrAdcVlyB_Val (0.0F)
# define Rte_InitValue_MotCurrAdcVlyC_Val (0.0F)
# define Rte_InitValue_MotCurrAdcVlyD_Val (0.0F)
# define Rte_InitValue_MotCurrAdcVlyE_Val (0.0F)
# define Rte_InitValue_MotCurrAdcVlyF_Val (0.0F)
# define Rte_InitValue_MotCurrEolCalSt_Val (0U)
# define Rte_InitValue_MotCurrQlfr1_Val (0U)
# define Rte_InitValue_MotCurrQlfr2_Val (0U)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_Ntc5DErrCnt_Val (0U)
# define Rte_InitValue_Ntc6DErrCnt_Val (0U)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_BrdgVltg_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_DiagcStsIvtr1Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_DiagcStsIvtr2Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_MotCurrAdcVlyA_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_MotCurrAdcVlyB_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_MotCurrAdcVlyC_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_MotCurrAdcVlyD_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_MotCurrAdcVlyE_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_MotCurrAdcVlyF_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_Ntc5DErrCnt_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_Ntc6DErrCnt_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_CurrMeas_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_CurrMeas_MotCurrEolCalSt_Val(MotCurrEolCalSt2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_CurrMeas_MotCurrQlfr1_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_CurrMeas_MotCurrQlfr2_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_CurrMeasEolGainCalSet_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_CurrMeasEolOffsCalSet_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolGainMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolGainMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolGainNumer_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolMaxMotVel_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsHiBrdgVltgMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasMotCurrAdcVlyWrmIninMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasMotCurrAdcVlyWrmIninMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolFixdPwmPerd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsHiCmuOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsLoCmuOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasMinRqrdPhaOnTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasMotAgCompuDly_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolGainNrOfSample_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsNrOfSample_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x05DFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x05DPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x06DFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x06DPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_CDD_CurrMeas_CurrMeasEolTranCntrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_CDD_CurrMeas_SysGlbPrmMotPoleCnt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(CurrMeasEolGainCalRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_CurrMeas_CurrMeasEolGainCalSetDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC_P2CONST(CurrMeasEolOffsCalRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_CurrMeas_CurrMeasEolOffsCalSetDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BrdgVltg_Val Rte_Read_CDD_CurrMeas_BrdgVltg_Val
# define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_CDD_CurrMeas_DiagcStsIvtr1Inactv_Logl
# define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_CDD_CurrMeas_DiagcStsIvtr2Inactv_Logl
# define Rte_Read_MotCurrAdcVlyA_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyA_Val
# define Rte_Read_MotCurrAdcVlyB_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyB_Val
# define Rte_Read_MotCurrAdcVlyC_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyC_Val
# define Rte_Read_MotCurrAdcVlyD_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyD_Val
# define Rte_Read_MotCurrAdcVlyE_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyE_Val
# define Rte_Read_MotCurrAdcVlyF_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyF_Val
# define Rte_Read_MotVelMrf_Val Rte_Read_CDD_CurrMeas_MotVelMrf_Val
# define Rte_Read_Ntc5DErrCnt_Val Rte_Read_CDD_CurrMeas_Ntc5DErrCnt_Val
# define Rte_Read_Ntc6DErrCnt_Val Rte_Read_CDD_CurrMeas_Ntc6DErrCnt_Val
# define Rte_Read_StrtUpSt_Val Rte_Read_CDD_CurrMeas_StrtUpSt_Val
# define Rte_Read_SysSt_Val Rte_Read_CDD_CurrMeas_SysSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_CDD_CurrMeas_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_CDD_CurrMeas_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CurrMeasWrmIninTestCmpl_Logl Rte_Write_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl
# define Rte_Write_MotCurrEolCalSt_Val Rte_Write_CDD_CurrMeas_MotCurrEolCalSt_Val
# define Rte_Write_MotCurrQlfr1_Val Rte_Write_CDD_CurrMeas_MotCurrQlfr1_Val
# define Rte_Write_MotCurrQlfr2_Val Rte_Write_CDD_CurrMeas_MotCurrQlfr2_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus Rte_Call_CDD_CurrMeas_CurrMeasEolGainCalSet_SetRamBlockStatus
# define Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus Rte_Call_CDD_CurrMeas_CurrMeasEolOffsCalSet_SetRamBlockStatus
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CDD_CurrMeas_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_CurrMeas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_CurrMeasEolGainCalSetDft Rte_CData_CDD_CurrMeas_CurrMeasEolGainCalSetDft

# define Rte_CData_CurrMeasEolOffsCalSetDft Rte_CData_CDD_CurrMeas_CurrMeasEolOffsCalSetDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_CurrMeasEolGainMax_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolGainMax_Val

# define Rte_Prm_CurrMeasEolGainMin_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolGainMin_Val

# define Rte_Prm_CurrMeasEolGainNumer_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolGainNumer_Val

# define Rte_Prm_CurrMeasEolMaxMotVel_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolMaxMotVel_Val

# define Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsHiBrdgVltgMin_Val

# define Rte_Prm_CurrMeasEolOffsMax_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsMax_Val

# define Rte_Prm_CurrMeasEolOffsMin_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsMin_Val

# define Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val Rte_Prm_CDD_CurrMeas_CurrMeasMotCurrAdcVlyWrmIninMax_Val

# define Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val Rte_Prm_CDD_CurrMeas_CurrMeasMotCurrAdcVlyWrmIninMin_Val

# define Rte_Prm_CurrMeasEolFixdPwmPerd_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolFixdPwmPerd_Val

# define Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsHiCmuOffs_Val

# define Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsLoCmuOffs_Val

# define Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val Rte_Prm_CDD_CurrMeas_CurrMeasMinRqrdPhaOnTi_Val

# define Rte_Prm_CurrMeasMotAgCompuDly_Val Rte_Prm_CDD_CurrMeas_CurrMeasMotAgCompuDly_Val

# define Rte_Prm_CurrMeasEolGainNrOfSample_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolGainNrOfSample_Val

# define Rte_Prm_CurrMeasEolOffsNrOfSample_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolOffsNrOfSample_Val

# define Rte_Prm_CurrMeasNtc0x05DFailStep_Val Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x05DFailStep_Val

# define Rte_Prm_CurrMeasNtc0x05DPassStep_Val Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x05DPassStep_Val

# define Rte_Prm_CurrMeasNtc0x06DFailStep_Val Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x06DFailStep_Val

# define Rte_Prm_CurrMeasNtc0x06DPassStep_Val Rte_Prm_CDD_CurrMeas_CurrMeasNtc0x06DPassStep_Val

# define Rte_Prm_CurrMeasEolTranCntrThd_Val Rte_Prm_CDD_CurrMeas_CurrMeasEolTranCntrThd_Val

# define Rte_Prm_SysGlbPrmMotPoleCnt_Val Rte_Prm_CDD_CurrMeas_SysGlbPrmMotPoleCnt_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_BrdgVltgSumPrev() (Rte_Inst_CDD_CurrMeas->Pim_BrdgVltgSumPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EolOffsHiBrdgVltg() (Rte_Inst_CDD_CurrMeas->Pim_EolOffsHiBrdgVltg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolGainA() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolGainA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolGainB() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolGainB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolGainC() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolGainC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolGainD() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolGainD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolGainE() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolGainE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolGainF() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolGainF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsDeltaA() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsDeltaA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsDeltaB() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsDeltaB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsDeltaC() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsDeltaC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsDeltaD() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsDeltaD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsDeltaE() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsDeltaE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsDeltaF() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsDeltaF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsHiAvrgA() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsHiAvrgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsHiAvrgB() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsHiAvrgB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsHiAvrgC() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsHiAvrgC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsHiAvrgD() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsHiAvrgD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsHiAvrgE() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsHiAvrgE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsHiAvrgF() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsHiAvrgF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsLoAvrgA() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsLoAvrgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsLoAvrgB() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsLoAvrgB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsLoAvrgC() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsLoAvrgC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsLoAvrgD() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsLoAvrgD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsLoAvrgE() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsLoAvrgE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsLoAvrgF() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsLoAvrgF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsZeroAvrgA() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsZeroAvrgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsZeroAvrgB() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsZeroAvrgB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsZeroAvrgC() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsZeroAvrgC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsZeroAvrgD() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsZeroAvrgD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsZeroAvrgE() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsZeroAvrgE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrOffsZeroAvrgF() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrOffsZeroAvrgF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrSumAPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrSumAPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrSumBPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrSumBPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrSumCPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrSumCPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrSumDPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrSumDPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrSumEPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrSumEPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrSumFPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrSumFPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TempMotCurrAdcVlySum1Prev() (Rte_Inst_CDD_CurrMeas->Pim_TempMotCurrAdcVlySum1Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TempMotCurrAdcVlySum2Prev() (Rte_Inst_CDD_CurrMeas->Pim_TempMotCurrAdcVlySum2Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GainEolAvrgCntrPrev() (Rte_Inst_CDD_CurrMeas->Pim_GainEolAvrgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCtrlNtc5DErrCntPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCtrlNtc5DErrCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCtrlNtc6DErrCntPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCtrlNtc6DErrCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ntc5DErrCnt2MilliSecPrev() (Rte_Inst_CDD_CurrMeas->Pim_Ntc5DErrCnt2MilliSecPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ntc6DErrCnt2MilliSecPrev() (Rte_Inst_CDD_CurrMeas->Pim_Ntc6DErrCnt2MilliSecPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_OffsEolAvrgCntrPrev() (Rte_Inst_CDD_CurrMeas->Pim_OffsEolAvrgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiErrCntPrev() (Rte_Inst_CDD_CurrMeas->Pim_PhaOnTiErrCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EolGainSts() (Rte_Inst_CDD_CurrMeas->Pim_EolGainSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EolOffsSts() (Rte_Inst_CDD_CurrMeas->Pim_EolOffsSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EolTranCntrPrev() (Rte_Inst_CDD_CurrMeas->Pim_EolTranCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolCalStPrev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolCalStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrRollgCnt1Prev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrRollgCnt1Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrRollgCnt2Prev() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrRollgCnt2Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrEolOffsProcFlg() (Rte_Inst_CDD_CurrMeas->Pim_MotCurrEolOffsProcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WrmIninTestCmplPrev() (Rte_Inst_CDD_CurrMeas->Pim_WrmIninTestCmplPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrMeasEolGainCalSet() (Rte_Inst_CDD_CurrMeas->Pim_CurrMeasEolGainCalSet) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrMeasEolOffsCalSet() (Rte_Inst_CDD_CurrMeas->Pim_CurrMeasEolOffsCalSet) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BrdgVltgSumPrev(void)
 *   float32 *Rte_Pim_EolOffsHiBrdgVltg(void)
 *   float32 *Rte_Pim_MotCurrEolGainA(void)
 *   float32 *Rte_Pim_MotCurrEolGainB(void)
 *   float32 *Rte_Pim_MotCurrEolGainC(void)
 *   float32 *Rte_Pim_MotCurrEolGainD(void)
 *   float32 *Rte_Pim_MotCurrEolGainE(void)
 *   float32 *Rte_Pim_MotCurrEolGainF(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaA(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaB(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaC(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaD(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaE(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaF(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgD(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgE(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgF(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgD(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgE(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgF(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgD(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgE(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgF(void)
 *   float32 *Rte_Pim_MotCurrSumAPrev(void)
 *   float32 *Rte_Pim_MotCurrSumBPrev(void)
 *   float32 *Rte_Pim_MotCurrSumCPrev(void)
 *   float32 *Rte_Pim_MotCurrSumDPrev(void)
 *   float32 *Rte_Pim_MotCurrSumEPrev(void)
 *   float32 *Rte_Pim_MotCurrSumFPrev(void)
 *   float32 *Rte_Pim_TempMotCurrAdcVlySum1Prev(void)
 *   float32 *Rte_Pim_TempMotCurrAdcVlySum2Prev(void)
 *   uint16 *Rte_Pim_GainEolAvrgCntrPrev(void)
 *   uint16 *Rte_Pim_MotCtrlNtc5DErrCntPrev(void)
 *   uint16 *Rte_Pim_MotCtrlNtc6DErrCntPrev(void)
 *   uint16 *Rte_Pim_Ntc5DErrCnt2MilliSecPrev(void)
 *   uint16 *Rte_Pim_Ntc6DErrCnt2MilliSecPrev(void)
 *   uint16 *Rte_Pim_OffsEolAvrgCntrPrev(void)
 *   uint16 *Rte_Pim_PhaOnTiErrCntPrev(void)
 *   uint8 *Rte_Pim_EolGainSts(void)
 *   uint8 *Rte_Pim_EolOffsSts(void)
 *   uint8 *Rte_Pim_EolTranCntrPrev(void)
 *   MotCurrEolCalSt2 *Rte_Pim_MotCurrEolCalStPrev(void)
 *   uint8 *Rte_Pim_MotCurrRollgCnt1Prev(void)
 *   uint8 *Rte_Pim_MotCurrRollgCnt2Prev(void)
 *   boolean *Rte_Pim_MotCurrEolOffsProcFlg(void)
 *   boolean *Rte_Pim_WrmIninTestCmplPrev(void)
 *   CurrMeasEolGainCalRec1 *Rte_Pim_CurrMeasEolGainCalSet(void)
 *   CurrMeasEolOffsCalRec1 *Rte_Pim_CurrMeasEolOffsCalSet(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   CurrMeasEolGainCalRec1 *Rte_CData_CurrMeasEolGainCalSetDft(void)
 *   CurrMeasEolOffsCalRec1 *Rte_CData_CurrMeasEolOffsCalSetDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_CurrMeasEolGainMax_Val(void)
 *   float32 Rte_Prm_CurrMeasEolGainMin_Val(void)
 *   float32 Rte_Prm_CurrMeasEolGainNumer_Val(void)
 *   float32 Rte_Prm_CurrMeasEolMaxMotVel_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsMax_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsMin_Val(void)
 *   float32 Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val(void)
 *   float32 Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolFixdPwmPerd_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val(void)
 *   uint32 Rte_Prm_CurrMeasMotAgCompuDly_Val(void)
 *   uint16 Rte_Prm_CurrMeasEolGainNrOfSample_Val(void)
 *   uint16 Rte_Prm_CurrMeasEolOffsNrOfSample_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x05DFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x05DPassStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x06DFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x06DPassStep_Val(void)
 *   uint8 Rte_Prm_CurrMeasEolTranCntrThd_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_CurrMeas_START_SEC_CODE
# include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolGainReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolGainReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolGainReq_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasEolGainReq_Oper CurrMeasEolGainReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolGainStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolGainStsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolGainStsReq_Oper(uint8 *CurrMeasEolGainSt_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasEolGainStsReq_Oper CurrMeasEolGainStsReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolGainSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolOffsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolOffsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolOffsReq_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasEolOffsReq_Oper CurrMeasEolOffsReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolOffsStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolOffsStsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolOffsStsReq_Oper(uint8 *CurrMeasEolOffsSt_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasEolOffsStsReq_Oper CurrMeasEolOffsStsReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasGainReadReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasGainReadReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasGainReadReq_Oper(float32 *CurrMeasMotCurrGainA_Arg, float32 *CurrMeasMotCurrGainB_Arg, float32 *CurrMeasMotCurrGainC_Arg, float32 *CurrMeasMotCurrGainD_Arg, float32 *CurrMeasMotCurrGainE_Arg, float32 *CurrMeasMotCurrGainF_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasGainReadReq_Oper CurrMeasGainReadReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasGainWrReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasGainWrReq>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, uint8 *CurrMeasGainWrReqSts_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasGainWrReq_Oper CurrMeasGainWrReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasGainWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasInit1 CurrMeasInit1
FUNC(void, CDD_CurrMeas_CODE) CurrMeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasOffsReadReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasOffsReadReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasOffsReadReq_Oper(float32 *CurrMeasEolOffsHiBrdgVltg_Arg, float32 *CurrMeasMotCurrOffsDifA_Arg, float32 *CurrMeasMotCurrOffsDifB_Arg, float32 *CurrMeasMotCurrOffsDifC_Arg, float32 *CurrMeasMotCurrOffsDifD_Arg, float32 *CurrMeasMotCurrOffsDifE_Arg, float32 *CurrMeasMotCurrOffsDifF_Arg, float32 *CurrMeasMotCurrOffsLoAvrgA_Arg, float32 *CurrMeasMotCurrOffsLoAvrgB_Arg, float32 *CurrMeasMotCurrOffsLoAvrgC_Arg, float32 *CurrMeasMotCurrOffsLoAvrgD_Arg, float32 *CurrMeasMotCurrOffsLoAvrgE_Arg, float32 *CurrMeasMotCurrOffsLoAvrgF_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasOffsReadReq_Oper CurrMeasOffsReadReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsHiBrdgVltg_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifF_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasOffsWrReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasOffsWrReq>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, uint8 *CurrMeasOffsWrReqSts_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasOffsWrReq_Oper CurrMeasOffsWrReq_Oper
FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasOffsWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyE_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrEolCalSt_Val(MotCurrEolCalSt2 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasPer1 CurrMeasPer1
FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasPer3
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyE_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_Ntc5DErrCnt_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_Ntc6DErrCnt_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CurrMeasWrmIninTestCmpl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrQlfr1_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_MotCurrQlfr2_Val(SigQlfr1 data)
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
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasPer3 CurrMeasPer3
FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_CurrMeas_STOP_SEC_CODE
# include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1481225231
#    error "The magic number of the generated file <C:/Component/ES200A_CurrMeas_Impl/tools/contract/Rte_CDD_CurrMeas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481225231
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_CURRMEAS_H */
