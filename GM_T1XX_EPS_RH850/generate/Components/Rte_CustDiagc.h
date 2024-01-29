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
 *          File:  Rte_CustDiagc.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CustDiagc>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CUSTDIAGC_H
# define _RTE_CUSTDIAGC_H

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

# include "Rte_CustDiagc_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_CustDiagc_GmIgnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_MfgOvrlDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_SerlComDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_SysStReqEnaOvrdCombd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_PartNr_CustMfgEnSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg232BusHiSpd_DesRtIdx_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmSysPwrMod1, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_LkaCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiagc_ThermLimFlgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_ApaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_BattVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CtrlrTRng_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmFctDiArbnSts1, RTE_VAR_INIT) Rte_GmFctDiArbn_GmFctDiSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCcwDetd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCwDetd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_LkaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmStrtStop_VehStrtStopSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_VltgRng_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ApaSt_Val (0U)
#  define Rte_InitValue_BattVltg_Val (0.0F)
#  define Rte_InitValue_CtrlrTRng_Val (0U)
#  define Rte_InitValue_CustMfgEnaSt_Val (0U)
#  define Rte_InitValue_DesRtIdx_Val (0U)
#  define Rte_InitValue_EcuTFild_Val (0.0F)
#  define Rte_InitValue_EngRunActv_Logl (FALSE)
#  define Rte_InitValue_EngSpd_Val (0.0F)
#  define Rte_InitValue_GmFctDiSts_Val (0U)
#  define Rte_InitValue_GmIgnCntr_Val (0U)
#  define Rte_InitValue_GmSysPwrMod_Val (0U)
#  define Rte_InitValue_HwAgCcwDetd_Logl (FALSE)
#  define Rte_InitValue_HwAgCwDetd_Logl (FALSE)
#  define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
#  define Rte_InitValue_HwAgEotCw_Val (360.0F)
#  define Rte_InitValue_HwAgTrimPrfmd_Logl (FALSE)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqIdptSig_Val (4U)
#  define Rte_InitValue_LkaCmd_Val (0.0F)
#  define Rte_InitValue_LkaSt_Val (0U)
#  define Rte_InitValue_MfgOvrlDi_Logl (FALSE)
#  define Rte_InitValue_MissMsg0C9_Logl (FALSE)
#  define Rte_InitValue_MissMsg1F1_Logl (FALSE)
#  define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
#  define Rte_InitValue_MotCurrPeakEstimd_Val (0.0F)
#  define Rte_InitValue_MotTqCmd_Val (0.0F)
#  define Rte_InitValue_PinionAg_Val (0.0F)
#  define Rte_InitValue_PinionAgConf_Val (0.0F)
#  define Rte_InitValue_SerlComDi_Logl (FALSE)
#  define Rte_InitValue_SteerWhlAgReqTarAg_Val (0.0F)
#  define Rte_InitValue_StrtStopSt_Val (0U)
#  define Rte_InitValue_SysPwrMod_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_SysStReqEnaOvrdCombd_Logl (FALSE)
#  define Rte_InitValue_SysStReqEnaOvrdNxtr_Logl (FALSE)
#  define Rte_InitValue_ThermLimFlgCntr_Val (0U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
#  define Rte_InitValue_VltgRng_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ApaSt_Val Rte_Read_CustDiagc_ApaSt_Val
#  define Rte_Read_CustDiagc_ApaSt_Val(data) (*(data) = Rte_GmOvrlStMgr_ApaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_BattVltg_Val Rte_Read_CustDiagc_BattVltg_Val
#  define Rte_Read_CustDiagc_BattVltg_Val(data) (*(data) = Rte_CDD_GmT1xxMcuCfg_BattVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CtrlrTRng_Val Rte_Read_CustDiagc_CtrlrTRng_Val
#  define Rte_Read_CustDiagc_CtrlrTRng_Val(data) (*(data) = Rte_StHlthSigNormn_CtrlrTRng_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CustMfgEnaSt_Val Rte_Read_CustDiagc_CustMfgEnaSt_Val
#  define Rte_Read_CustDiagc_CustMfgEnaSt_Val(data) (*(data) = Rte_PartNr_CustMfgEnSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DesRtIdx_Val Rte_Read_CustDiagc_DesRtIdx_Val
#  define Rte_Read_CustDiagc_DesRtIdx_Val(data) (*(data) = Rte_GmMsg232BusHiSpd_DesRtIdx_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EcuTFild_Val Rte_Read_CustDiagc_EcuTFild_Val
#  define Rte_Read_CustDiagc_EcuTFild_Val(data) (*(data) = Rte_EcuTMeas_EcuTFild_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EngRunActv_Logl Rte_Read_CustDiagc_EngRunActv_Logl
#  define Rte_Read_CustDiagc_EngRunActv_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EngSpd_Val Rte_Read_CustDiagc_EngSpd_Val
#  define Rte_Read_CustDiagc_EngSpd_Val(data) (*(data) = Rte_GmMsg0C9BusHiSpd_EngSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_GmFctDiSts_Val Rte_Read_CustDiagc_GmFctDiSts_Val
#  define Rte_Read_CustDiagc_GmFctDiSts_Val(data) (*(data) = Rte_GmFctDiArbn_GmFctDiSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_GmSysPwrMod_Val Rte_Read_CustDiagc_GmSysPwrMod_Val
#  define Rte_Read_CustDiagc_GmSysPwrMod_Val(data) (*(data) = Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgCcwDetd_Logl Rte_Read_CustDiagc_HwAgCcwDetd_Logl
#  define Rte_Read_CustDiagc_HwAgCcwDetd_Logl(data) (*(data) = Rte_EotLrng_HwAgCcwDetd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgCwDetd_Logl Rte_Read_CustDiagc_HwAgCwDetd_Logl
#  define Rte_Read_CustDiagc_HwAgCwDetd_Logl(data) (*(data) = Rte_EotLrng_HwAgCwDetd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCcw_Val Rte_Read_CustDiagc_HwAgEotCcw_Val
#  define Rte_Read_CustDiagc_HwAgEotCcw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCcw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCw_Val Rte_Read_CustDiagc_HwAgEotCw_Val
#  define Rte_Read_CustDiagc_HwAgEotCw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTrimPrfmd_Logl Rte_Read_CustDiagc_HwAgTrimPrfmd_Logl
#  define Rte_Read_CustDiagc_HwAgTrimPrfmd_Logl(data) (*(data) = Rte_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_CustDiagc_HwTq_Val
#  define Rte_Read_CustDiagc_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqIdptSig_Val Rte_Read_CustDiagc_HwTqIdptSig_Val
#  define Rte_Read_CustDiagc_HwTqIdptSig_Val(data) (*(data) = Rte_HwTqCorrln_HwTqIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaCmd_Val Rte_Read_CustDiagc_LkaCmd_Val
#  define Rte_Read_CustDiagc_LkaCmd_Val(data) (*(data) = Rte_GmMsg180BusHiSpd_LkaCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaSt_Val Rte_Read_CustDiagc_LkaSt_Val
#  define Rte_Read_CustDiagc_LkaSt_Val(data) (*(data) = Rte_GmOvrlStMgr_LkaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MissMsg0C9_Logl Rte_Read_CustDiagc_MissMsg0C9_Logl
#  define Rte_Read_CustDiagc_MissMsg0C9_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MissMsg1F1_Logl Rte_Read_CustDiagc_MissMsg1F1_Logl
#  define Rte_Read_CustDiagc_MissMsg1F1_Logl(data) (*(data) = Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrDaxCmd_Val Rte_Read_CustDiagc_MotCurrDaxCmd_Val
#  define Rte_Read_CustDiagc_MotCurrDaxCmd_Val(data) (*(data) = Rte_MotRefMdl_MotCurrDaxCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrPeakEstimd_Val Rte_Read_CustDiagc_MotCurrPeakEstimd_Val
#  define Rte_Read_CustDiagc_MotCurrPeakEstimd_Val(data) (*(data) = Rte_MotCurrPeakEstimn_MotCurrPeakEstimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmd_Val Rte_Read_CustDiagc_MotTqCmd_Val
#  define Rte_Read_CustDiagc_MotTqCmd_Val(data) (*(data) = Rte_AssiSumLim_MotTqCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PinionAg_Val Rte_Read_CustDiagc_PinionAg_Val
#  define Rte_Read_CustDiagc_PinionAg_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PinionAgConf_Val Rte_Read_CustDiagc_PinionAgConf_Val
#  define Rte_Read_CustDiagc_PinionAgConf_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAgConf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgReqTarAg_Val Rte_Read_CustDiagc_SteerWhlAgReqTarAg_Val
#  define Rte_Read_CustDiagc_SteerWhlAgReqTarAg_Val(data) (*(data) = Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_StrtStopSt_Val Rte_Read_CustDiagc_StrtStopSt_Val
#  define Rte_Read_CustDiagc_StrtStopSt_Val(data) (*(data) = Rte_GmStrtStop_VehStrtStopSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysPwrMod_Val Rte_Read_CustDiagc_SysPwrMod_Val
#  define Rte_Read_CustDiagc_SysPwrMod_Val(data) (*(data) = Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_CustDiagc_SysSt_Val
#  define Rte_Read_CustDiagc_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysStReqEnaOvrdNxtr_Logl Rte_Read_CustDiagc_SysStReqEnaOvrdNxtr_Logl
#  define Rte_Read_CustDiagc_SysStReqEnaOvrdNxtr_Logl(data) (*(data) = Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ThermLimFlgCntr_Val Rte_Read_CustDiagc_ThermLimFlgCntr_Val
#  define Rte_Read_CustDiagc_ThermLimFlgCntr_Val(data) (*(data) = Rte_CustDiagc_ThermLimFlgCntr_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_CustDiagc_VehSpd_Val
#  define Rte_Read_CustDiagc_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_CustDiagc_VehSpdVld_Logl
#  define Rte_Read_CustDiagc_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VltgRng_Val Rte_Read_CustDiagc_VltgRng_Val
#  define Rte_Read_CustDiagc_VltgRng_Val(data) (*(data) = Rte_StHlthSigNormn_VltgRng_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_GmIgnCntr_Val Rte_Write_CustDiagc_GmIgnCntr_Val
#  define Rte_Write_CustDiagc_GmIgnCntr_Val(data) (Rte_CustDiagc_GmIgnCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MfgOvrlDi_Logl Rte_Write_CustDiagc_MfgOvrlDi_Logl
#  define Rte_Write_CustDiagc_MfgOvrlDi_Logl(data) (Rte_CustDiagc_MfgOvrlDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SerlComDi_Logl Rte_Write_CustDiagc_SerlComDi_Logl
#  define Rte_Write_CustDiagc_SerlComDi_Logl(data) (Rte_CustDiagc_SerlComDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStReqEnaOvrdCombd_Logl Rte_Write_CustDiagc_SysStReqEnaOvrdCombd_Logl
#  define Rte_Write_CustDiagc_SysStReqEnaOvrdCombd_Logl(data) (Rte_CustDiagc_SysStReqEnaOvrdCombd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ClrAllDiagc_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrAllDiagc_Oper() (ClrAllDiagc_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGVEHCENTRTRIM_APPL_CODE) ClrHwAgTrimVal_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrHwAgTrimVal_Oper() (ClrHwAgTrimVal_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_GMMSG778BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMMSG778BUSHISPD_APPL_CODE) ClrTrigStsAry_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMMSG778BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrTrigStsAry_Oper() (ClrTrigStsAry_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)10, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_GetGpioMcuEna_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetGpioMcuEna_Oper IoHwAb_GetGpioMcuEna_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) GetNtcActv6_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcActv_Oper GetNtcActv6_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) GetNtcSts6_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcSts_Oper GetNtcSts6_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_STHLTHSIGSTC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_STHLTHSIGSTC_APPL_CODE) GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) BufPtr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_STHLTHSIGSTC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetSigStcHlthData_Oper GetSigStcHlthData_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_GMFCTDIARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMFCTDIARBN_APPL_CODE) GmFctDiReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMFCTDIARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GmFctDiReq_Oper() (GmFctDiReq_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(arg1) (PartNrBasMdlPartNrAlphaCodRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrBasMdlPartNrRd_Oper(arg1) (PartNrBasMdlPartNrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCalProgdStsRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCalProgdStsRd_Oper(arg1) (PartNrCalProgdStsRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrCalProgdStsWr_Oper(uint8 CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCalProgdStsWr_Oper PartNrCalProgdStsWr_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCcaMfgTrakgRd_Oper(arg1) (PartNrCcaMfgTrakgRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(Ary1D_u8_14, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCmpdVehPartnProdtStructRd_Oper(arg1) (PartNrCmpdVehPartnProdtStructRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCtrlPidKeyChk_Oper PartNrCtrlPidKeyChk_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCtrlPidKeyWr_Oper(arg1) (PartNrCtrlPidKeyWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCtrlPidSeedRd_Oper(arg1) (PartNrCtrlPidSeedRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCtrlPidSeedUpprByteWr_Oper PartNrCtrlPidSeedUpprByteWr_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCustMfgEnaCntrRd_Oper(arg1) (PartNrCustMfgEnaCntrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCustMfgEnaCntrWr_Oper PartNrCustMfgEnaCntrWr_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(arg1) (PartNrDataUniversalNrSysIdRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEcuIdRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEcuIdRd_Oper(arg1) (PartNrEcuIdRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(arg1) (PartNrEndMdlPartNrAlphaCodRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(arg1) (PartNrEndMdlPartNrAlphaCodWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrRd_Oper(arg1) (PartNrEndMdlPartNrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrWr_Oper(arg1) (PartNrEndMdlPartNrWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SERLCOMINPPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_SERLCOMINPPROXY_APPL_CODE) SerlComInpProxyGmLanIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) GmLanId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_SERLCOMINPPROXY_APPL_CODE) SerlComInpProxyGmLanIdRd_Oper(P2VAR(Ary1D_u8_12, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) GmLanId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_SERLCOMINPPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrGmLanIdRd_Oper(arg1) (SerlComInpProxyGmLanIdRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrLstRepairShopCodRd_Oper(arg1) (PartNrLstRepairShopCodRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrNxtrMfgTrakgRd_Oper(arg1) (PartNrNxtrMfgTrakgRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrNxtrMfgTrakgWr_Oper(arg1) (PartNrNxtrMfgTrakgWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmDateRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrProgmDateRd_Oper(arg1) (PartNrProgmDateRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrProgmDateWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrProgmDateWr_Oper PartNrProgmDateWr_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrProgmSessionKeyChk_Oper PartNrProgmSessionKeyChk_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrProgmSessionSeedRd_Oper(arg1) (PartNrProgmSessionSeedRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrRepairShopCodRd_Oper(arg1) (PartNrRepairShopCodRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrRepairShopCodWr_Oper(arg1) (PartNrRepairShopCodWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSecuBypAuthnRd_Oper(arg1) (PartNrSecuBypAuthnRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSecuBypAuthnWr_Oper(arg1) (PartNrSecuBypAuthnWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysCodVersNrRd_Oper(arg1) (PartNrSysCodVersNrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysCodVersNrWr_Oper(arg1) (PartNrSysCodVersNrWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysNameRd_Oper(arg1) (PartNrSysNameRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameWr_Oper(P2CONST(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysNameWr_Oper(arg1) (PartNrSysNameWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataRd_Oper(P2VAR(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrVinDataRd_Oper(arg1) (PartNrVinDataRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataWr_Oper(P2CONST(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrVinDataWr_Oper(arg1) (PartNrVinDataWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_EOTLRNG_APPL_CODE) RtnMaxHwAgCwAndCcw_Oper(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCcwMax_Arg, P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCwMax_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RtnMaxHwAgCwAndCcw_Oper(arg1, arg2) (RtnMaxHwAgCwAndCcw_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGVEHCENTRTRIM_APPL_CODE) UpdHwAgTrimVal_Oper(P2VAR(uint8, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) UpdHwAgTrimValSrvResp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_UpdHwAgTrimVal_Oper(arg1) (UpdHwAgTrimVal_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_EotLrngRackTrvlMin_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->EotLrngRackTrvlMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrApaMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrEscMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrEscMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDecelGainEnaCal_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_PullCmpActvEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->PullCmpActvEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFctEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFctEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->DiagcMgrFltResp_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DiagcMgrFltResp_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->DiagcMgrFltResp_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedKeyTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedKeyTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_DtcNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_MsgCntxt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_GmIgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidKeyAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionKeyAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmFctDiArbnSts1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_PrevGmFctDiArbnSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_Srv12LoopCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_SrvCntxt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CpidActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedReqd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedTmrActvd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedReqd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedTmrActvd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_GmDiCtrlPidTstRunng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_PrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_SysStReqEnaOvrdCust; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CustDiagcCtrlPidSeedKeyTmr() \
  (&Rte_CustDiagc_CustDiagcCtrlPidSeedKeyTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CustDiagcProgmSessionSeedKeyTmr() \
  (&Rte_CustDiagc_CustDiagcProgmSessionSeedKeyTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DtcNr() \
  (&Rte_CustDiagc_DtcNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgCntxt() \
  (&Rte_CustDiagc_MsgCntxt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmIgnCntr() \
  (&Rte_CustDiagc_GmIgnCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CustDiagcCtrlPidKeyAtmptCntr() \
  (&Rte_CustDiagc_CustDiagcCtrlPidKeyAtmptCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CustDiagcProgmSessionKeyAtmptCntr() \
  (&Rte_CustDiagc_CustDiagcProgmSessionKeyAtmptCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevGmFctDiArbnSts() \
  (&Rte_CustDiagc_PrevGmFctDiArbnSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Srv12LoopCntr() \
  (&Rte_CustDiagc_Srv12LoopCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SrvCntxt() \
  (&Rte_CustDiagc_SrvCntxt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CpidActv() \
  (&Rte_CustDiagc_CpidActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CustDiagcCtrlPidSeedReqd() \
  (&Rte_CustDiagc_CustDiagcCtrlPidSeedReqd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CustDiagcCtrlPidSeedTmrActvd() \
  (&Rte_CustDiagc_CustDiagcCtrlPidSeedTmrActvd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CustDiagcProgmSessionSeedReqd() \
  (&Rte_CustDiagc_CustDiagcProgmSessionSeedReqd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CustDiagcProgmSessionSeedTmrActvd() \
  (&Rte_CustDiagc_CustDiagcProgmSessionSeedTmrActvd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmDiCtrlPidTstRunng() \
  (&Rte_CustDiagc_GmDiCtrlPidTstRunng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevSysPwrModRun() \
  (&Rte_CustDiagc_PrevSysPwrModRun) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStReqEnaOvrdCust() \
  (&Rte_CustDiagc_SysStReqEnaOvrdCust) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CustDiagc_START_SEC_CODE
# include "CustDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CSDataServices_BattVltgEcu_ReadData CSDataServices_BattVltgEcu_ReadData
#  define RTE_RUNNABLE_CSDataServices_EcuIntT_ReadData CSDataServices_EcuIntT_ReadData
#  define RTE_RUNNABLE_CSDataServices_EngSpd_ReadData CSDataServices_EngSpd_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpdMotOvldProtnCntr_ReadData CSDataServices_EpdMotOvldProtnCntr_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpsAgOvrlSts_ReadData CSDataServices_EpsAgOvrlSts_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpsApaAgOvrlReq_ReadData CSDataServices_EpsApaAgOvrlReq_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpsMotCurrFb_ReadData CSDataServices_EpsMotCurrFb_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpsMotCurr_ReadData CSDataServices_EpsMotCurr_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpsStopStrtSts_ReadData CSDataServices_EpsStopStrtSts_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpsTqOvrlReq_ReadData CSDataServices_EpsTqOvrlReq_ReadData
#  define RTE_RUNNABLE_CSDataServices_EpsTqOvrlSts_ReadData CSDataServices_EpsTqOvrlSts_ReadData
#  define RTE_RUNNABLE_CSDataServices_IgnCycCntr_ReadData CSDataServices_IgnCycCntr_ReadData
#  define RTE_RUNNABLE_CSDataServices_SplrIntDtcInfo_ReadData CSDataServices_SplrIntDtcInfo_ReadData
#  define RTE_RUNNABLE_CSDataServices_SteerInpTq_ReadData CSDataServices_SteerInpTq_ReadData
#  define RTE_RUNNABLE_CSDataServices_SteerOutpTq_ReadData CSDataServices_SteerOutpTq_ReadData
#  define RTE_RUNNABLE_CSDataServices_SteerWhlAg_ReadData CSDataServices_SteerWhlAg_ReadData
#  define RTE_RUNNABLE_CSDataServices_SysPwrMod_ReadData CSDataServices_SysPwrMod_ReadData
#  define RTE_RUNNABLE_CSDataServices_TiIgnOn_ReadData CSDataServices_TiIgnOn_ReadData
#  define RTE_RUNNABLE_CSDataServices_VehSpd_ReadData CSDataServices_VehSpd_ReadData
#  define RTE_RUNNABLE_CustDiagcClrGmIgnCntr_Oper CustDiagcClrGmIgnCntr_Oper
#  define RTE_RUNNABLE_CustDiagcInit1 CustDiagcInit1
#  define RTE_RUNNABLE_CustDiagcPer1 CustDiagcPer1
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EngSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EngSpd_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_VehSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_VehSpd_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, CustDiagc_CODE) CustDiagcClrGmIgnCntr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CustDiagc_CODE) CustDiagcInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CustDiagc_CODE) CustDiagcPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CustDiagc_STOP_SEC_CODE
# include "CustDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CSDataServices_BattVltgEcu_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EcuIntT_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EngSpd_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpdMotOvldProtnCntr_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsAgOvrlSts_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsApaAgOvrlReq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsMotCurr_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsMotCurrFb_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsStopStrtSts_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsTqOvrlReq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsTqOvrlSts_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_IgnCycCntr_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SteerInpTq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SteerOutpTq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SteerWhlAg_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SysPwrMod_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_TiIgnOn_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_VehSpd_E_NOT_OK (1U)

#  define RTE_E_GetGpio1_E_NOT_OK (1U)

#  define RTE_E_GetNtcActv_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetNtcSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_PartNrCalProgdStsWr1_InvldVal (1U)

#  define RTE_E_PartNrCtrlPidKeyChk1_InvldKey (1U)

#  define RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero (1U)

#  define RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero (1U)

#  define RTE_E_PartNrProgmDateWr1_OutOfRange (1U)

#  define RTE_E_PartNrProgmSessionKeyChk1_InvldKey (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CUSTDIAGC_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
