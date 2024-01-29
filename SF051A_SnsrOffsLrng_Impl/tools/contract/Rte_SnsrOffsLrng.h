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
 *          File:  Rte_SnsrOffsLrng.h
 *     SW-C Type:  SnsrOffsLrng
 *  Generated at:  Thu Dec  8 10:26:24 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SnsrOffsLrng> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SNSROFFSLRNG_H
# define _RTE_SNSROFFSLRNG_H

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

# include "Rte_SnsrOffsLrng_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_SnsrOffsLrng
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLrngDrvgDstPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLrngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLrngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLrngSysTqFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLrngSysTqFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgMeasFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgMeasFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLrngEnaTmrRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLrngMeasTmrRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLrngTqInpDetnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLrngTqInpPrsnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqMeasFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqMeasFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwVelCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SnsrLrndOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SnsrOffsLrnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysTqCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnEnaTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnHwTqFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnHwTqPreProc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnPreProcEnaLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnSinGenrAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_72, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg1Buf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg1FilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg1FilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg1Idx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg2CenFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg2CenFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg2DwnFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg2DwnFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg2UpFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqInpDetnStg2UpFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehYawRateLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehYawRateOffsFrsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawACdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawCdngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawCdngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawLrngElpdLrngTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawLrngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawLrngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgLrngCdnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgLrngRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgLrngSysTqVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwAgLrngTiVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngEstimnVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngHwAgMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngHwTqMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngMeasEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngSampleCntTot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngSampleImb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngHwVelFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngSysTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngTqInpDetnHwTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngTqInpDetnStg1Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngTqInpPrsntRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngYawA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngYawLrngCdnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngYawLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngYawRateFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSnsrOffsLrngYawRateFildCorrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_SnsrOffsLrng, RTE_CONST, RTE_CONST) Rte_Inst_SnsrOffsLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_SnsrOffsLrng, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgAuthy_Val (0.0F)
# define Rte_InitValue_HwAgOffs_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqOffs_Val (0.0F)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_MotTqCmdCrf_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)
# define Rte_InitValue_VehYawRate_Val (0.0F)
# define Rte_InitValue_VehYawRateOffs_Val (0.0F)
# define Rte_InitValue_VehYawRateVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_HwAgAuthy_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_MotTqCmdCrf_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_VehYawRate_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsLrng_VehYawRateVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SnsrOffsLrng_HwAgOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SnsrOffsLrng_HwTqOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SnsrOffsLrng_VehYawRateOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SnsrOffsLrng_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SnsrOffsLrng_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SnsrOffsLrng_SnsrOffsLrnd_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SnsrOffsLrng_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngDrvgDstThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngHwVelThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThdMed_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThdWide_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngYawRateThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngEnaTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwAgDbnd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwAgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwTqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwVelThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngMeasTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngMeasTiScar_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleImbThd1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleImbThd2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwVelFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqAndAgFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnSinGenrAmp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnSinGenrFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg1FilGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawACdngFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngHwAgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngYawAThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawOffsFrshTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawRateCdngFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawRateOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsLrng_SysGlbPrmSysTqRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleThd1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleThd2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngSampleCntForHwTqLrngRst_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2WinSize_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg1WinSize_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngFctEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_SnsrOffsLrng_SnsrOffsLrngPer1_HwTqLrngSts(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_SnsrOffsLrng_SnsrOffsLrngPer2_HwTqLrngSts(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_SnsrOffsLrng_HwAg_Val
# define Rte_Read_HwAgAuthy_Val Rte_Read_SnsrOffsLrng_HwAgAuthy_Val
# define Rte_Read_HwTq_Val Rte_Read_SnsrOffsLrng_HwTq_Val
# define Rte_Read_HwVel_Val Rte_Read_SnsrOffsLrng_HwVel_Val
# define Rte_Read_MotTqCmdCrf_Val Rte_Read_SnsrOffsLrng_MotTqCmdCrf_Val
# define Rte_Read_VehSpd_Val Rte_Read_SnsrOffsLrng_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_SnsrOffsLrng_VehSpdVld_Logl
# define Rte_Read_VehYawRate_Val Rte_Read_SnsrOffsLrng_VehYawRate_Val
# define Rte_Read_VehYawRateVld_Logl Rte_Read_SnsrOffsLrng_VehYawRateVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgOffs_Val Rte_Write_SnsrOffsLrng_HwAgOffs_Val
# define Rte_Write_HwTqOffs_Val Rte_Write_SnsrOffsLrng_HwTqOffs_Val
# define Rte_Write_VehYawRateOffs_Val Rte_Write_SnsrOffsLrng_VehYawRateOffs_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_SnsrOffsLrng_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_SnsrOffsLrng_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SnsrOffsLrnd_GetErrorStatus Rte_Call_SnsrOffsLrng_SnsrOffsLrnd_GetErrorStatus
# define Rte_Call_SnsrOffsLrnd_SetRamBlockStatus Rte_Call_SnsrOffsLrng_SnsrOffsLrnd_SetRamBlockStatus


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(data) \
  Rte_IrvWrite_SnsrOffsLrng_SnsrOffsLrngPer1_HwTqLrngSts(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts() \
  Rte_IrvRead_SnsrOffsLrng_SnsrOffsLrngPer2_HwTqLrngSts()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngDrvgDstThd_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngHwVelThd_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThd_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThdMed_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngSysTqThdWide_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngTi_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngVehSpdThd_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val

# define Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngYawRateThd_Val

# define Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgOffsLim_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngEnaTiThd_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwAgDbnd_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwAgThd_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwTqThd_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngHwVelThd_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngMeasTi_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngMeasTiScar_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleImbThd1_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleImbThd2_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngVehSpdThd_Val

# define Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqOffsLim_Val

# define Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwVelFilFrq_Val

# define Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqAndAgFilFrq_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnSinGenrAmp_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnSinGenrFrq_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg1FilGain_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val

# define Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawACdngFilFrq_Val

# define Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngHwAgThd_Val

# define Rte_Prm_SnsrOffsLrngYawLrngTi_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngTi_Val

# define Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngYawAThd_Val

# define Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawOffsFrshTiThd_Val

# define Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawRateCdngFilFrq_Val

# define Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawRateOffsLim_Val

# define Rte_Prm_SysGlbPrmSysTqRat_Val Rte_Prm_SnsrOffsLrng_SysGlbPrmSysTqRat_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleThd1_Val

# define Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngSampleThd2_Val

# define Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngSampleCntForHwTqLrngRst_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg2WinSize_Val

# define Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val Rte_Prm_SnsrOffsLrng_SnsrOffsLrngTqInpDetnStg1WinSize_Val

# define Rte_Prm_SnsrOffsLrngFctEna_Logl Rte_Prm_SnsrOffsLrng_SnsrOffsLrngFctEna_Logl

# define Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwAgLrngEna_Logl

# define Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl Rte_Prm_SnsrOffsLrng_SnsrOffsLrngHwTqLrngEna_Logl

# define Rte_Prm_SnsrOffsLrngYawLrngEna_Logl Rte_Prm_SnsrOffsLrng_SnsrOffsLrngYawLrngEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAgLrngDrvgDstPrev() (Rte_Inst_SnsrOffsLrng->Pim_HwAgLrngDrvgDstPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnEnaTi() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnEnaTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnHwTqPreProc() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnHwTqPreProc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnSinGenrAg() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnSinGenrAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg1FilSt1() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg1FilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg1FilSt2() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg1FilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg2CenFilSt1() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg2CenFilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg2CenFilSt2() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg2CenFilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg2DwnFilSt1() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg2DwnFilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg2DwnFilSt2() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg2DwnFilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg2UpFilSt1() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg2UpFilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg2UpFilSt2() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg2UpFilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawLrngElpdLrngTi() (Rte_Inst_SnsrOffsLrng->Pim_YawLrngElpdLrngTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawRatePrev() (Rte_Inst_SnsrOffsLrng->Pim_YawRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgFild() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngHwAgMeas) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngHwTqMeas) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngSampleCntTot) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngSampleImb) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwVelFild() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwVelFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngSysTqFild() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngSysTqFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngTqInpDetnHwTqFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngTqInpDetnStg1Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngYawA() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngYawA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngYawRateFild() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngYawRateFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngYawRateFildCorrd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLrngEnaTmrRef() (Rte_Inst_SnsrOffsLrng->Pim_HwTqLrngEnaTmrRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLrngMeasTmrRef() (Rte_Inst_SnsrOffsLrng->Pim_HwTqLrngMeasTmrRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnPreProcEnaLoop() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnPreProcEnaLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnStg1Idx() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg1Idx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLrngStRst() (Rte_Inst_SnsrOffsLrng->Pim_HwAgLrngStRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLrngStRst() (Rte_Inst_SnsrOffsLrng->Pim_HwTqLrngStRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLrngTqInpDetnEnaPrev() (Rte_Inst_SnsrOffsLrng->Pim_HwTqLrngTqInpDetnEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLrngTqInpPrsnt() (Rte_Inst_SnsrOffsLrng->Pim_HwTqLrngTqInpPrsnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehYawRateLrngStRst() (Rte_Inst_SnsrOffsLrng->Pim_VehYawRateLrngStRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehYawRateOffsFrsh() (Rte_Inst_SnsrOffsLrng->Pim_VehYawRateOffsFrsh) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgLrngCdnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgLrngEna() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgLrngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgLrngRst() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgLrngRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgLrngSysTqVldt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwAgLrngTiVldt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngEna() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngEstimnVldt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngMeasEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngTqInpPrsntRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngYawLrngCdnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dSnsrOffsLrngYawLrngEna() (Rte_Inst_SnsrOffsLrng->Pim_dSnsrOffsLrngYawLrngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_TqInpDetnStg1Buf() (*Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg1Buf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_TqInpDetnStg1Buf() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnStg1Buf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Rte_Pim_HwAgCdngFil() (Rte_Inst_SnsrOffsLrng->Pim_HwAgCdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLrngFil1() (Rte_Inst_SnsrOffsLrng->Pim_HwAgLrngFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLrngFil2() (Rte_Inst_SnsrOffsLrng->Pim_HwAgLrngFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLrngSysTqFil1() (Rte_Inst_SnsrOffsLrng->Pim_HwAgLrngSysTqFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLrngSysTqFil2() (Rte_Inst_SnsrOffsLrng->Pim_HwAgLrngSysTqFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgMeasFil1() (Rte_Inst_SnsrOffsLrng->Pim_HwAgMeasFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgMeasFil2() (Rte_Inst_SnsrOffsLrng->Pim_HwAgMeasFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqMeasFil1() (Rte_Inst_SnsrOffsLrng->Pim_HwTqMeasFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqMeasFil2() (Rte_Inst_SnsrOffsLrng->Pim_HwTqMeasFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwVelCdngFil() (Rte_Inst_SnsrOffsLrng->Pim_HwVelCdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SnsrOffsLrnd() (Rte_Inst_SnsrOffsLrng->Pim_SnsrOffsLrnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysTqCdngFil() (Rte_Inst_SnsrOffsLrng->Pim_SysTqCdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqInpDetnHwTqFil() (Rte_Inst_SnsrOffsLrng->Pim_TqInpDetnHwTqFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawACdngFil() (Rte_Inst_SnsrOffsLrng->Pim_YawACdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawCdngFil1() (Rte_Inst_SnsrOffsLrng->Pim_YawCdngFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawCdngFil2() (Rte_Inst_SnsrOffsLrng->Pim_YawCdngFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawLrngFil1() (Rte_Inst_SnsrOffsLrng->Pim_YawLrngFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawLrngFil2() (Rte_Inst_SnsrOffsLrng->Pim_YawLrngFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgLrngDrvgDstPrev(void)
 *   float32 *Rte_Pim_TqInpDetnEnaTi(void)
 *   float32 *Rte_Pim_TqInpDetnHwTqPreProc(void)
 *   float32 *Rte_Pim_TqInpDetnSinGenrAg(void)
 *   float32 *Rte_Pim_TqInpDetnStg1FilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg1FilSt2(void)
 *   float32 *Rte_Pim_TqInpDetnStg2CenFilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg2CenFilSt2(void)
 *   float32 *Rte_Pim_TqInpDetnStg2DwnFilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg2DwnFilSt2(void)
 *   float32 *Rte_Pim_TqInpDetnStg2UpFilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg2UpFilSt2(void)
 *   float32 *Rte_Pim_YawLrngElpdLrngTi(void)
 *   float32 *Rte_Pim_YawRatePrev(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwAgFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwVelFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngSysTqFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawA(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawRateFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawRateFildCorrd(void)
 *   uint32 *Rte_Pim_HwTqLrngEnaTmrRef(void)
 *   uint32 *Rte_Pim_HwTqLrngMeasTmrRef(void)
 *   uint16 *Rte_Pim_TqInpDetnPreProcEnaLoop(void)
 *   uint8 *Rte_Pim_TqInpDetnStg1Idx(void)
 *   boolean *Rte_Pim_HwAgLrngStRst(void)
 *   boolean *Rte_Pim_HwTqLrngStRst(void)
 *   boolean *Rte_Pim_HwTqLrngTqInpDetnEnaPrev(void)
 *   boolean *Rte_Pim_HwTqLrngTqInpPrsnt(void)
 *   boolean *Rte_Pim_VehYawRateLrngStRst(void)
 *   boolean *Rte_Pim_VehYawRateOffsFrsh(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngEna(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngRst(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngEna(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngYawLrngCdnVld(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngYawLrngEna(void)
 *   float32 *Rte_Pim_TqInpDetnStg1Buf(void)
 *   FilLpRec1 *Rte_Pim_HwAgCdngFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngFil1(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngFil2(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngSysTqFil1(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngSysTqFil2(void)
 *   FilLpRec1 *Rte_Pim_HwAgMeasFil1(void)
 *   FilLpRec1 *Rte_Pim_HwAgMeasFil2(void)
 *   FilLpRec1 *Rte_Pim_HwTqMeasFil1(void)
 *   FilLpRec1 *Rte_Pim_HwTqMeasFil2(void)
 *   FilLpRec1 *Rte_Pim_HwVelCdngFil(void)
 *   SnsrLrndOffsRec1 *Rte_Pim_SnsrOffsLrnd(void)
 *   FilLpRec1 *Rte_Pim_SysTqCdngFil(void)
 *   FilLpRec1 *Rte_Pim_TqInpDetnHwTqFil(void)
 *   FilLpRec1 *Rte_Pim_YawACdngFil(void)
 *   FilLpRec1 *Rte_Pim_YawCdngFil1(void)
 *   FilLpRec1 *Rte_Pim_YawCdngFil2(void)
 *   FilLpRec1 *Rte_Pim_YawLrngFil1(void)
 *   FilLpRec1 *Rte_Pim_YawLrngFil2(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawLrngTi_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val(void)
 *   uint8 Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val(void)
 *   boolean Rte_Prm_SnsrOffsLrngFctEna_Logl(void)
 *   boolean Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl(void)
 *   boolean Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl(void)
 *   boolean Rte_Prm_SnsrOffsLrngYawLrngEna_Logl(void)
 *
 *********************************************************************************************************************/


# define SnsrOffsLrng_START_SEC_CODE
# include "SnsrOffsLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetHwAgOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetHwAgOffs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetHwAgOffs_Oper(float32 *HwAgOffs_Arg, boolean *HwAgLrngStRst_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetHwAgOffs_Oper GetHwAgOffs_Oper
FUNC(void, SnsrOffsLrng_CODE) GetHwAgOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetHwTqOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetHwTqOffs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetHwTqOffs_Oper(float32 *HwTqOffs_Arg, boolean *HwTqLrngStRst_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetHwTqOffs_Oper GetHwTqOffs_Oper
FUNC(void, SnsrOffsLrng_CODE) GetHwTqOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetYawRateOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetYawRateOffs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetYawRateOffs_Oper(float32 *VehYawRateOffs_Arg, boolean *VehYawRateLrngStRst_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetYawRateOffs_Oper GetYawRateOffs_Oper
FUNC(void, SnsrOffsLrng_CODE) GetYawRateOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstHwTq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstHwTq>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstHwTq_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RstHwTq_Oper RstHwTq_Oper
FUNC(void, SnsrOffsLrng_CODE) RstHwTq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstYawAndAg_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstYawAndAg>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstYawAndAg_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RstYawAndAg_Oper RstYawAndAg_Oper
FUNC(void, SnsrOffsLrng_CODE) RstYawAndAg_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetHwAgOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetHwAgOffs>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetHwAgOffs_Oper SetHwAgOffs_Oper
FUNC(void, SnsrOffsLrng_CODE) SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetHwTqOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetHwTqOffs>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetHwTqOffs_Oper SetHwTqOffs_Oper
FUNC(void, SnsrOffsLrng_CODE) SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetYawRateOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetYawRateOffs>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetYawRateOffs_Oper SetYawRateOffs_Oper
FUNC(void, SnsrOffsLrng_CODE) SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsLrngInit1
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
 *   Std_ReturnType Rte_Write_HwAgOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehYawRateOffs_Val(float32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SnsrOffsLrngInit1 SnsrOffsLrngInit1
FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsLrngPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SnsrOffsLrngPer1 SnsrOffsLrngPer1
FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsLrngPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehYawRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRateVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint8 Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SnsrOffsLrngPer2 SnsrOffsLrngPer2
FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define SnsrOffsLrng_STOP_SEC_CODE
# include "SnsrOffsLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481211048
#    error "The magic number of the generated file <C:/component/SF051A_SnsrOffsLrng_Impl/tools/contract/Rte_SnsrOffsLrng.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481211048
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SNSROFFSLRNG_H */
