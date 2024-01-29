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
 *          File:  Rte_StHlthSigNormn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StHlthSigNormn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STHLTHSIGNORMN_H
# define _RTE_STHLTHSIGNORMN_H

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

# include "Rte_StHlthSigNormn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosABDifStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosACDifStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CtrlrTRng_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
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
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_VltgRng_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_WhlImbMaxCmpStHlth_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMotSumABC_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMotSumDEF_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqChACorrlnTraErr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqChBCorrlnTraErr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_MaxLrndFric_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2VltgSqd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgABErrTerm_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgACErrTerm_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgBCErrTerm_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrC_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrD_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrE_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrF_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

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
#  define Rte_InitValue_CtrlrTRng_Val (0U)
#  define Rte_InitValue_CtrlrTStHlth_Val (100U)
#  define Rte_InitValue_CurrMotSumABC_Val (0.0F)
#  define Rte_InitValue_CurrMotSumABCStHlth_Val (100U)
#  define Rte_InitValue_CurrMotSumDEF_Val (0.0F)
#  define Rte_InitValue_CurrMotSumDEFStHlth_Val (100U)
#  define Rte_InitValue_DigTqIdptSigStHlth_Val (100U)
#  define Rte_InitValue_DigTqSnsrAStHlth_Val (100U)
#  define Rte_InitValue_DigTqSnsrBStHlth_Val (100U)
#  define Rte_InitValue_DutyCycStHlth_Val (100U)
#  define Rte_InitValue_DutyCycThermProtnMaxOutp_Val (0U)
#  define Rte_InitValue_EcuTFild_Val (0.0F)
#  define Rte_InitValue_EotImpctStHlth_Val (100U)
#  define Rte_InitValue_FricEstimnStHlth_Val (100U)
#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
#  define Rte_InitValue_HwAgEotCw_Val (360.0F)
#  define Rte_InitValue_HwAuthy_Val (0.0F)
#  define Rte_InitValue_HwTqChACorrlnTraErr_Val (0.0F)
#  define Rte_InitValue_HwTqChBCorrlnTraErr_Val (0.0F)
#  define Rte_InitValue_HwTqIdptSig_Val (4U)
#  define Rte_InitValue_LclRamEccSngBitCntrOutp_Val (0U)
#  define Rte_InitValue_MaxLrndFric_Val (0.0F)
#  define Rte_InitValue_MotAg2VltgSqd_Val (1.755625F)
#  define Rte_InitValue_MotAgABErrTerm_Val (0U)
#  define Rte_InitValue_MotAgACErrTerm_Val (0U)
#  define Rte_InitValue_MotAgBCErrTerm_Val (0U)
#  define Rte_InitValue_MotDrvErrA_Val (0.0F)
#  define Rte_InitValue_MotDrvErrB_Val (0.0F)
#  define Rte_InitValue_MotDrvErrC_Val (0.0F)
#  define Rte_InitValue_MotDrvErrD_Val (0.0F)
#  define Rte_InitValue_MotDrvErrE_Val (0.0F)
#  define Rte_InitValue_MotDrvErrF_Val (0.0F)
#  define Rte_InitValue_MotPosStHlth_Val (100U)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_OutpAssiStHlth_Val (100U)
#  define Rte_InitValue_PhaAStHlth_Val (100U)
#  define Rte_InitValue_PhaBStHlth_Val (100U)
#  define Rte_InitValue_PhaCStHlth_Val (100U)
#  define Rte_InitValue_PhaDStHlth_Val (100U)
#  define Rte_InitValue_PhaEStHlth_Val (100U)
#  define Rte_InitValue_PhaFStHlth_Val (100U)
#  define Rte_InitValue_RackLimrEotSig0Avl_Logl (FALSE)
#  define Rte_InitValue_RackLimrEotSig1Avl_Logl (FALSE)
#  define Rte_InitValue_RamEccSngBitCorrnStHlth_Val (100U)
#  define Rte_InitValue_VltgRng_Val (0U)
#  define Rte_InitValue_WhlImbMaxCmpStHlth_Val (100U)
#  define Rte_InitValue_WhlImbRejctnCmd_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_StHlthSigNormn_EolFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CurrMotSumABC_Val Rte_Read_StHlthSigNormn_CurrMotSumABC_Val
#  define Rte_Read_StHlthSigNormn_CurrMotSumABC_Val(data) (*(data) = Rte_CurrMeasCorrln_CurrMotSumABC_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CurrMotSumDEF_Val Rte_Read_StHlthSigNormn_CurrMotSumDEF_Val
#  define Rte_Read_StHlthSigNormn_CurrMotSumDEF_Val(data) (*(data) = Rte_CurrMeasCorrln_CurrMotSumDEF_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DutyCycThermProtnMaxOutp_Val Rte_Read_StHlthSigNormn_DutyCycThermProtnMaxOutp_Val
#  define Rte_Read_StHlthSigNormn_DutyCycThermProtnMaxOutp_Val(data) (*(data) = Rte_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EcuTFild_Val Rte_Read_StHlthSigNormn_EcuTFild_Val
#  define Rte_Read_StHlthSigNormn_EcuTFild_Val(data) (*(data) = Rte_EcuTMeas_EcuTFild_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAg_Val Rte_Read_StHlthSigNormn_HwAg_Val
#  define Rte_Read_StHlthSigNormn_HwAg_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCcw_Val Rte_Read_StHlthSigNormn_HwAgEotCcw_Val
#  define Rte_Read_StHlthSigNormn_HwAgEotCcw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCcw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCw_Val Rte_Read_StHlthSigNormn_HwAgEotCw_Val
#  define Rte_Read_StHlthSigNormn_HwAgEotCw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAuthy_Val Rte_Read_StHlthSigNormn_HwAuthy_Val
#  define Rte_Read_StHlthSigNormn_HwAuthy_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAgConf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqChACorrlnTraErr_Val Rte_Read_StHlthSigNormn_HwTqChACorrlnTraErr_Val
#  define Rte_Read_StHlthSigNormn_HwTqChACorrlnTraErr_Val(data) (*(data) = Rte_HwTqCorrln_HwTqChACorrlnTraErr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqChBCorrlnTraErr_Val Rte_Read_StHlthSigNormn_HwTqChBCorrlnTraErr_Val
#  define Rte_Read_StHlthSigNormn_HwTqChBCorrlnTraErr_Val(data) (*(data) = Rte_HwTqCorrln_HwTqChBCorrlnTraErr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqIdptSig_Val Rte_Read_StHlthSigNormn_HwTqIdptSig_Val
#  define Rte_Read_StHlthSigNormn_HwTqIdptSig_Val(data) (*(data) = Rte_HwTqCorrln_HwTqIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LclRamEccSngBitCntrOutp_Val Rte_Read_StHlthSigNormn_LclRamEccSngBitCntrOutp_Val
#  define Rte_Read_StHlthSigNormn_LclRamEccSngBitCntrOutp_Val(data) (*(data) = Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MaxLrndFric_Val Rte_Read_StHlthSigNormn_MaxLrndFric_Val
#  define Rte_Read_StHlthSigNormn_MaxLrndFric_Val(data) (*(data) = Rte_SysFricLrng_MaxLrndFric_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg2VltgSqd_Val Rte_Read_StHlthSigNormn_MotAg2VltgSqd_Val
#  define Rte_Read_StHlthSigNormn_MotAg2VltgSqd_Val(data) (*(data) = Rte_MotAg2Meas_MotAg2VltgSqd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgABErrTerm_Val Rte_Read_StHlthSigNormn_MotAgABErrTerm_Val
#  define Rte_Read_StHlthSigNormn_MotAgABErrTerm_Val(data) (*(data) = Rte_MotAgCorrln_MotAgABErrTerm_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgACErrTerm_Val Rte_Read_StHlthSigNormn_MotAgACErrTerm_Val
#  define Rte_Read_StHlthSigNormn_MotAgACErrTerm_Val(data) (*(data) = Rte_MotAgCorrln_MotAgACErrTerm_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgBCErrTerm_Val Rte_Read_StHlthSigNormn_MotAgBCErrTerm_Val
#  define Rte_Read_StHlthSigNormn_MotAgBCErrTerm_Val(data) (*(data) = Rte_MotAgCorrln_MotAgBCErrTerm_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvErrA_Val Rte_Read_StHlthSigNormn_MotDrvErrA_Val
#  define Rte_Read_StHlthSigNormn_MotDrvErrA_Val(data) (*(data) = Rte_MotDrvDiagc_MotDrvErrA_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvErrB_Val Rte_Read_StHlthSigNormn_MotDrvErrB_Val
#  define Rte_Read_StHlthSigNormn_MotDrvErrB_Val(data) (*(data) = Rte_MotDrvDiagc_MotDrvErrB_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvErrC_Val Rte_Read_StHlthSigNormn_MotDrvErrC_Val
#  define Rte_Read_StHlthSigNormn_MotDrvErrC_Val(data) (*(data) = Rte_MotDrvDiagc_MotDrvErrC_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvErrD_Val Rte_Read_StHlthSigNormn_MotDrvErrD_Val
#  define Rte_Read_StHlthSigNormn_MotDrvErrD_Val(data) (*(data) = Rte_MotDrvDiagc_MotDrvErrD_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvErrE_Val Rte_Read_StHlthSigNormn_MotDrvErrE_Val
#  define Rte_Read_StHlthSigNormn_MotDrvErrE_Val(data) (*(data) = Rte_MotDrvDiagc_MotDrvErrE_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvErrF_Val Rte_Read_StHlthSigNormn_MotDrvErrF_Val
#  define Rte_Read_StHlthSigNormn_MotDrvErrF_Val(data) (*(data) = Rte_MotDrvDiagc_MotDrvErrF_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelCrf_Val Rte_Read_StHlthSigNormn_MotVelCrf_Val
#  define Rte_Read_StHlthSigNormn_MotVelCrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelCrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RackLimrEotSig0Avl_Logl Rte_Read_StHlthSigNormn_RackLimrEotSig0Avl_Logl
#  define Rte_Read_StHlthSigNormn_RackLimrEotSig0Avl_Logl(data) (*(data) = Rte_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RackLimrEotSig1Avl_Logl Rte_Read_StHlthSigNormn_RackLimrEotSig1Avl_Logl
#  define Rte_Read_StHlthSigNormn_RackLimrEotSig1Avl_Logl(data) (*(data) = Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlImbRejctnCmd_Val Rte_Read_StHlthSigNormn_WhlImbRejctnCmd_Val
#  define Rte_Read_StHlthSigNormn_WhlImbRejctnCmd_Val(data) (*(data) = Rte_WhlImbRejctn_WhlImbRejctnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AbsltMotPosABDifStHlth_Val Rte_Write_StHlthSigNormn_AbsltMotPosABDifStHlth_Val
#  define Rte_Write_StHlthSigNormn_AbsltMotPosABDifStHlth_Val(data) (Rte_StHlthSigNormn_AbsltMotPosABDifStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_AbsltMotPosACDifStHlth_Val Rte_Write_StHlthSigNormn_AbsltMotPosACDifStHlth_Val
#  define Rte_Write_StHlthSigNormn_AbsltMotPosACDifStHlth_Val(data) (Rte_StHlthSigNormn_AbsltMotPosACDifStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_AbsltMotPosBCDifStHlth_Val Rte_Write_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val
#  define Rte_Write_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val(data) (Rte_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CtrlrTRng_Val Rte_Write_StHlthSigNormn_CtrlrTRng_Val
#  define Rte_Write_StHlthSigNormn_CtrlrTRng_Val(data) (Rte_StHlthSigNormn_CtrlrTRng_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CtrlrTStHlth_Val Rte_Write_StHlthSigNormn_CtrlrTStHlth_Val
#  define Rte_Write_StHlthSigNormn_CtrlrTStHlth_Val(data) (Rte_StHlthSigNormn_CtrlrTStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CurrMotSumABCStHlth_Val Rte_Write_StHlthSigNormn_CurrMotSumABCStHlth_Val
#  define Rte_Write_StHlthSigNormn_CurrMotSumABCStHlth_Val(data) (Rte_StHlthSigNormn_CurrMotSumABCStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CurrMotSumDEFStHlth_Val Rte_Write_StHlthSigNormn_CurrMotSumDEFStHlth_Val
#  define Rte_Write_StHlthSigNormn_CurrMotSumDEFStHlth_Val(data) (Rte_StHlthSigNormn_CurrMotSumDEFStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DigTqIdptSigStHlth_Val Rte_Write_StHlthSigNormn_DigTqIdptSigStHlth_Val
#  define Rte_Write_StHlthSigNormn_DigTqIdptSigStHlth_Val(data) (Rte_StHlthSigNormn_DigTqIdptSigStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DigTqSnsrAStHlth_Val Rte_Write_StHlthSigNormn_DigTqSnsrAStHlth_Val
#  define Rte_Write_StHlthSigNormn_DigTqSnsrAStHlth_Val(data) (Rte_StHlthSigNormn_DigTqSnsrAStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DigTqSnsrBStHlth_Val Rte_Write_StHlthSigNormn_DigTqSnsrBStHlth_Val
#  define Rte_Write_StHlthSigNormn_DigTqSnsrBStHlth_Val(data) (Rte_StHlthSigNormn_DigTqSnsrBStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DutyCycStHlth_Val Rte_Write_StHlthSigNormn_DutyCycStHlth_Val
#  define Rte_Write_StHlthSigNormn_DutyCycStHlth_Val(data) (Rte_StHlthSigNormn_DutyCycStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_EotImpctStHlth_Val Rte_Write_StHlthSigNormn_EotImpctStHlth_Val
#  define Rte_Write_StHlthSigNormn_EotImpctStHlth_Val(data) (Rte_StHlthSigNormn_EotImpctStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FricEstimnStHlth_Val Rte_Write_StHlthSigNormn_FricEstimnStHlth_Val
#  define Rte_Write_StHlthSigNormn_FricEstimnStHlth_Val(data) (Rte_StHlthSigNormn_FricEstimnStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotPosStHlth_Val Rte_Write_StHlthSigNormn_MotPosStHlth_Val
#  define Rte_Write_StHlthSigNormn_MotPosStHlth_Val(data) (Rte_StHlthSigNormn_MotPosStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_OutpAssiStHlth_Val Rte_Write_StHlthSigNormn_OutpAssiStHlth_Val
#  define Rte_Write_StHlthSigNormn_OutpAssiStHlth_Val(data) (Rte_StHlthSigNormn_OutpAssiStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaAStHlth_Val Rte_Write_StHlthSigNormn_PhaAStHlth_Val
#  define Rte_Write_StHlthSigNormn_PhaAStHlth_Val(data) (Rte_StHlthSigNormn_PhaAStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaBStHlth_Val Rte_Write_StHlthSigNormn_PhaBStHlth_Val
#  define Rte_Write_StHlthSigNormn_PhaBStHlth_Val(data) (Rte_StHlthSigNormn_PhaBStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaCStHlth_Val Rte_Write_StHlthSigNormn_PhaCStHlth_Val
#  define Rte_Write_StHlthSigNormn_PhaCStHlth_Val(data) (Rte_StHlthSigNormn_PhaCStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaDStHlth_Val Rte_Write_StHlthSigNormn_PhaDStHlth_Val
#  define Rte_Write_StHlthSigNormn_PhaDStHlth_Val(data) (Rte_StHlthSigNormn_PhaDStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaEStHlth_Val Rte_Write_StHlthSigNormn_PhaEStHlth_Val
#  define Rte_Write_StHlthSigNormn_PhaEStHlth_Val(data) (Rte_StHlthSigNormn_PhaEStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaFStHlth_Val Rte_Write_StHlthSigNormn_PhaFStHlth_Val
#  define Rte_Write_StHlthSigNormn_PhaFStHlth_Val(data) (Rte_StHlthSigNormn_PhaFStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RamEccSngBitCorrnStHlth_Val Rte_Write_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val
#  define Rte_Write_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val(data) (Rte_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VltgRng_Val Rte_Write_StHlthSigNormn_VltgRng_Val
#  define Rte_Write_StHlthSigNormn_VltgRng_Val(data) (Rte_StHlthSigNormn_VltgRng_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlImbMaxCmpStHlth_Val Rte_Write_StHlthSigNormn_WhlImbMaxCmpStHlth_Val
#  define Rte_Write_StHlthSigNormn_WhlImbMaxCmpStHlth_Val(data) (Rte_StHlthSigNormn_WhlImbMaxCmpStHlth_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) GetFricLrngData_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngEna_Arg, P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOffsOutpEna_Arg, P2VAR(SysFricLrngOperMod1, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOperMod_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetFricLrngData_Oper(arg1, arg2, arg3, arg4) (GetFricLrngData_Oper(arg1, arg2, arg3, arg4), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_StHlthSigNormnInit1_EolFric(data) \
  (Rte_Irv_StHlthSigNormn_EolFric = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_UpdRawSig_Oper_EolFric() \
  Rte_Irv_StHlthSigNormn_EolFric
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasCorrlnMaxErrCurr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EcuTMeasRngDiagcMax_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->EcuTMeasRngDiagcMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EcuTMeasRngDiagcMin_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->EcuTMeasRngDiagcMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotLrngAuthyStrtLrn_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->EotLrngAuthyStrtLrn_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATraSumSetFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTraSumSetFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnHiCtrlrT_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnHiCtrlrT_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnLoCtrlrT_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnLoCtrlrT_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnMaxFricThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnMaxFricThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnMinRackTrvlLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnMotVelCal_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnMotVelCal_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnStHlthCurrMotSum_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnStHlthPhaInfo_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnValMaxStHlthErr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnValMinStHlthErr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnValMinStHlthErr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnWhlImbRejctnThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotDrvDiagcErrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotDrvDiagcErrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DutyCycThermProtnDutyCycFildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnDutyCycFltLimThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnStHlthCorrlnErr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnCurrMotSumStHlthDiagThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnDigTqStHlthDiagThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnIdptSigStHlthSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnMotPosStHlthDiagThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->StHlthSigNormnPhaInfoStHlthDiagThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmMotPoleCnt_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmMotPoleCnt_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_MotAgCorrlnErrThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_AbsltMotPosABDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_AbsltMotPosACDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_AbsltMotPosBCDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_CurrMotSumABCStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_CurrMotSumDEFStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_DigTqIdptSigStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_DigTqSnsrAStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_DigTqSnsrBStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_EcuTRngIgnCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_EotImpctCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_MotPosStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaAStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaBStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaCStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaDStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaEStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaFStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_VltgRngIgnCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_EntrEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_MotAgCorrlnErrThd() \
  (&Rte_StHlthSigNormn_MotAgCorrlnErrThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AbsltMotPosABDifStHlthSts() \
  (&Rte_StHlthSigNormn_AbsltMotPosABDifStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AbsltMotPosACDifStHlthSts() \
  (&Rte_StHlthSigNormn_AbsltMotPosACDifStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AbsltMotPosBCDifStHlthSts() \
  (&Rte_StHlthSigNormn_AbsltMotPosBCDifStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CurrMotSumABCStHlthSts() \
  (&Rte_StHlthSigNormn_CurrMotSumABCStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CurrMotSumDEFStHlthSts() \
  (&Rte_StHlthSigNormn_CurrMotSumDEFStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DigTqIdptSigStHlthSts() \
  (&Rte_StHlthSigNormn_DigTqIdptSigStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DigTqSnsrAStHlthSts() \
  (&Rte_StHlthSigNormn_DigTqSnsrAStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DigTqSnsrBStHlthSts() \
  (&Rte_StHlthSigNormn_DigTqSnsrBStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EcuTRngIgnCyc() \
  (&Rte_StHlthSigNormn_EcuTRngIgnCyc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EotImpctCntr() \
  (&Rte_StHlthSigNormn_EotImpctCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotPosStHlthSts() \
  (&Rte_StHlthSigNormn_MotPosStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaAStHlthSts() \
  (&Rte_StHlthSigNormn_PhaAStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaBStHlthSts() \
  (&Rte_StHlthSigNormn_PhaBStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaCStHlthSts() \
  (&Rte_StHlthSigNormn_PhaCStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaDStHlthSts() \
  (&Rte_StHlthSigNormn_PhaDStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaEStHlthSts() \
  (&Rte_StHlthSigNormn_PhaEStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaFStHlthSts() \
  (&Rte_StHlthSigNormn_PhaFStHlthSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VltgRngIgnCyc() \
  (&Rte_StHlthSigNormn_VltgRngIgnCyc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EntrEot() \
  (&Rte_StHlthSigNormn_EntrEot) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define StHlthSigNormn_START_SEC_CODE
# include "StHlthSigNormn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_StHlthSigNormnInit1 StHlthSigNormnInit1
#  define RTE_RUNNABLE_UpdRawSig_Oper UpdRawSig_Oper
# endif

FUNC(void, StHlthSigNormn_CODE) StHlthSigNormnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StHlthSigNormn_CODE) UpdRawSig_Oper(StHlthMonSig3 SigId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StHlthSigNormn_STOP_SEC_CODE
# include "StHlthSigNormn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STHLTHSIGNORMN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
