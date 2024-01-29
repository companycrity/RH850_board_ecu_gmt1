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
 *          File:  Rte_StHlthSigStc.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StHlthSigStc>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STHLTHSIGSTC_H
# define _RTE_STHLTHSIGSTC_H

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

# include "Rte_StHlthSigStc_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosABDifStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosACDifStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CtrlrTStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CurrMotSumABCStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CurrMotSumDEFStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DigTqIdptSigStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DigTqSnsrAStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DigTqSnsrBStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DutyCycStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_EotImpctStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_FricEstimnStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_MotPosStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_OutpAssiStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaAStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaBStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaCStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaDStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaEStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaFStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_WhlImbMaxCmpStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AbsltMotPosABDifStHlth_Val (100U)
#  define Rte_InitValue_AbsltMotPosACDifStHlth_Val (100U)
#  define Rte_InitValue_AbsltMotPosBCDifStHlth_Val (100U)
#  define Rte_InitValue_CtrlrTStHlth_Val (100U)
#  define Rte_InitValue_CurrMotSumABCStHlth_Val (100U)
#  define Rte_InitValue_CurrMotSumDEFStHlth_Val (100U)
#  define Rte_InitValue_DigTqIdptSigStHlth_Val (100U)
#  define Rte_InitValue_DigTqSnsrAStHlth_Val (100U)
#  define Rte_InitValue_DigTqSnsrBStHlth_Val (100U)
#  define Rte_InitValue_DutyCycStHlth_Val (100U)
#  define Rte_InitValue_EotImpctStHlth_Val (100U)
#  define Rte_InitValue_FricEstimnStHlth_Val (100U)
#  define Rte_InitValue_MotPosStHlth_Val (100U)
#  define Rte_InitValue_OutpAssiStHlth_Val (100U)
#  define Rte_InitValue_PhaAStHlth_Val (100U)
#  define Rte_InitValue_PhaBStHlth_Val (100U)
#  define Rte_InitValue_PhaCStHlth_Val (100U)
#  define Rte_InitValue_PhaDStHlth_Val (100U)
#  define Rte_InitValue_PhaEStHlth_Val (100U)
#  define Rte_InitValue_PhaFStHlth_Val (100U)
#  define Rte_InitValue_RamEccSngBitCorrnStHlth_Val (100U)
#  define Rte_InitValue_WhlImbMaxCmpStHlth_Val (100U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AbsltMotPosABDifStHlth_Val Rte_Read_StHlthSigStc_AbsltMotPosABDifStHlth_Val
#  define Rte_Read_StHlthSigStc_AbsltMotPosABDifStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_AbsltMotPosABDifStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AbsltMotPosACDifStHlth_Val Rte_Read_StHlthSigStc_AbsltMotPosACDifStHlth_Val
#  define Rte_Read_StHlthSigStc_AbsltMotPosACDifStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_AbsltMotPosACDifStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AbsltMotPosBCDifStHlth_Val Rte_Read_StHlthSigStc_AbsltMotPosBCDifStHlth_Val
#  define Rte_Read_StHlthSigStc_AbsltMotPosBCDifStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CtrlrTStHlth_Val Rte_Read_StHlthSigStc_CtrlrTStHlth_Val
#  define Rte_Read_StHlthSigStc_CtrlrTStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_CtrlrTStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CurrMotSumABCStHlth_Val Rte_Read_StHlthSigStc_CurrMotSumABCStHlth_Val
#  define Rte_Read_StHlthSigStc_CurrMotSumABCStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_CurrMotSumABCStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CurrMotSumDEFStHlth_Val Rte_Read_StHlthSigStc_CurrMotSumDEFStHlth_Val
#  define Rte_Read_StHlthSigStc_CurrMotSumDEFStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_CurrMotSumDEFStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DigTqIdptSigStHlth_Val Rte_Read_StHlthSigStc_DigTqIdptSigStHlth_Val
#  define Rte_Read_StHlthSigStc_DigTqIdptSigStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_DigTqIdptSigStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DigTqSnsrAStHlth_Val Rte_Read_StHlthSigStc_DigTqSnsrAStHlth_Val
#  define Rte_Read_StHlthSigStc_DigTqSnsrAStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_DigTqSnsrAStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DigTqSnsrBStHlth_Val Rte_Read_StHlthSigStc_DigTqSnsrBStHlth_Val
#  define Rte_Read_StHlthSigStc_DigTqSnsrBStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_DigTqSnsrBStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DutyCycStHlth_Val Rte_Read_StHlthSigStc_DutyCycStHlth_Val
#  define Rte_Read_StHlthSigStc_DutyCycStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_DutyCycStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EotImpctStHlth_Val Rte_Read_StHlthSigStc_EotImpctStHlth_Val
#  define Rte_Read_StHlthSigStc_EotImpctStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_EotImpctStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FricEstimnStHlth_Val Rte_Read_StHlthSigStc_FricEstimnStHlth_Val
#  define Rte_Read_StHlthSigStc_FricEstimnStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_FricEstimnStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotPosStHlth_Val Rte_Read_StHlthSigStc_MotPosStHlth_Val
#  define Rte_Read_StHlthSigStc_MotPosStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_MotPosStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_OutpAssiStHlth_Val Rte_Read_StHlthSigStc_OutpAssiStHlth_Val
#  define Rte_Read_StHlthSigStc_OutpAssiStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_OutpAssiStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaAStHlth_Val Rte_Read_StHlthSigStc_PhaAStHlth_Val
#  define Rte_Read_StHlthSigStc_PhaAStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_PhaAStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaBStHlth_Val Rte_Read_StHlthSigStc_PhaBStHlth_Val
#  define Rte_Read_StHlthSigStc_PhaBStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_PhaBStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaCStHlth_Val Rte_Read_StHlthSigStc_PhaCStHlth_Val
#  define Rte_Read_StHlthSigStc_PhaCStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_PhaCStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaDStHlth_Val Rte_Read_StHlthSigStc_PhaDStHlth_Val
#  define Rte_Read_StHlthSigStc_PhaDStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_PhaDStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaEStHlth_Val Rte_Read_StHlthSigStc_PhaEStHlth_Val
#  define Rte_Read_StHlthSigStc_PhaEStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_PhaEStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaFStHlth_Val Rte_Read_StHlthSigStc_PhaFStHlth_Val
#  define Rte_Read_StHlthSigStc_PhaFStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_PhaFStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RamEccSngBitCorrnStHlth_Val Rte_Read_StHlthSigStc_RamEccSngBitCorrnStHlth_Val
#  define Rte_Read_StHlthSigStc_RamEccSngBitCorrnStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlImbMaxCmpStHlth_Val Rte_Read_StHlthSigStc_WhlImbMaxCmpStHlth_Val
#  define Rte_Read_StHlthSigStc_WhlImbMaxCmpStHlth_Val(data) (*(data) = Rte_StHlthSigNormn_WhlImbMaxCmpStHlth_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SigStcHistDataAry_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)66, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SigStcHistDataAry_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)66, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

/* PRQA S 3458 L1 */ /* MD_MSR_19.4 */
#  define Rte_Enter_StHlthSigStc_ExclusiveArea()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */ \
  { \
    Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_ENTER_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
    SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
  }
/* PRQA L:L1 */

/* PRQA S 3458 L1 */ /* MD_MSR_19.4 */
#  define Rte_Exit_StHlthSigStc_ExclusiveArea()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */ \
  { \
    Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_EXIT_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
  }
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_VldNvm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_StHlthSigStc1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_IgnCycSampleCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_StHlthSigStc1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_RamBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_StHlthSigStc1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_SigAvrgBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_225, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_SigStcHistDataAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_VldNvm() \
  (&Rte_StHlthSigStc_VldNvm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_IgnCycSampleCntrAry() (&((*RtePim_IgnCycSampleCntrAry())[0]))
#  else
#   define Rte_Pim_IgnCycSampleCntrAry() RtePim_IgnCycSampleCntrAry()
#  endif
#  define RtePim_IgnCycSampleCntrAry() \
  (&Rte_StHlthSigStc_IgnCycSampleCntrAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_RamBuf() (&((*RtePim_RamBuf())[0]))
#  else
#   define Rte_Pim_RamBuf() RtePim_RamBuf()
#  endif
#  define RtePim_RamBuf() \
  (&Rte_StHlthSigStc_RamBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_SigAvrgBuf() (&((*RtePim_SigAvrgBuf())[0]))
#  else
#   define Rte_Pim_SigAvrgBuf() RtePim_SigAvrgBuf()
#  endif
#  define RtePim_SigAvrgBuf() \
  (&Rte_StHlthSigStc_SigAvrgBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_SigStcHistDataAry() (&((*RtePim_SigStcHistDataAry())[0]))
#  else
#   define Rte_Pim_SigStcHistDataAry() RtePim_SigStcHistDataAry()
#  endif
#  define RtePim_SigStcHistDataAry() \
  (&Rte_StHlthSigStc_SigStcHistDataAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define StHlthSigStc_START_SEC_CODE
# include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ClrSigStcHlthData_Oper ClrSigStcHlthData_Oper
#  define RTE_RUNNABLE_GetSigStcHlthData_Oper GetSigStcHlthData_Oper
#  define RTE_RUNNABLE_StHlthSigStcInit1 StHlthSigStcInit1
#  define RTE_RUNNABLE_StHlthStcPwrDwn_Oper StHlthStcPwrDwn_Oper
#  define RTE_RUNNABLE_UpdStHlthStcData_Oper UpdStHlthStcData_Oper
# endif

FUNC(void, StHlthSigStc_CODE) ClrSigStcHlthData_Oper(boolean ClrTar_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, StHlthSigStc_CODE) GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) BufPtr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, StHlthSigStc_CODE) StHlthSigStcInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StHlthSigStc_CODE) StHlthStcPwrDwn_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, StHlthSigStc_CODE) UpdStHlthStcData_Oper(uint8 TaskId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StHlthSigStc_STOP_SEC_CODE
# include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STHLTHSIGSTC_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
