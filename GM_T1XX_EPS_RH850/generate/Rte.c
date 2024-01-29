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
 *          File:  Rte.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0781, 0857 EOF */ /* MD_Rte_0777, MD_Rte_0779, MD_Rte_0781, MD_MSR_1.1_857 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_AAACalRegn01Rt01_Dummy.h"
#include "Rte_AAACalRegn02Rt01GroupC_Dummy.h"
#include "Rte_AAACalRegn03Rt01GroupA_Dummy.h"
#include "Rte_AAACalRegn03Rt01GroupB_Dummy.h"
#include "Rte_AAACalRegn03Rt01_Dummy.h"
#include "Rte_Assi.h"
#include "Rte_AssiHiFrq.h"
#include "Rte_AssiPahFwl.h"
#include "Rte_AssiSumLim.h"
#include "Rte_BattVltg.h"
#include "Rte_BattVltgCorrln.h"
#include "Rte_BswM.h"
#include "Rte_CDD_Adc0CfgAndUse.h"
#include "Rte_CDD_Adc1CfgAndUse.h"
#include "Rte_CDD_AdcDiagc.h"
#include "Rte_CDD_ChkPtAppl10.h"
#include "Rte_CDD_ChkPtAppl6.h"
#include "Rte_CDD_CurrMeas.h"
#include "Rte_CDD_CurrMeasArbn.h"
#include "Rte_CDD_DataAndAdrPar.h"
#include "Rte_CDD_DmaCfgAndUse.h"
#include "Rte_CDD_EcmOutpAndDiagc.h"
#include "Rte_CDD_ExcpnHndlg.h"
#include "Rte_CDD_FlsMem.h"
#include "Rte_CDD_GMLANSdl.h"
#include "Rte_CDD_GmT1xxMcuCfg.h"
#include "Rte_CDD_GuardCfgAndDiagc.h"
#include "Rte_CDD_HwTq0Meas.h"
#include "Rte_CDD_HwTq1Meas.h"
#include "Rte_CDD_HwTq2Meas.h"
#include "Rte_CDD_HwTq3Meas.h"
#include "Rte_CDD_McuCoreCfgAndDiagc.h"
#include "Rte_CDD_McuDiagc.h"
#include "Rte_CDD_MotAg0Meas.h"
#include "Rte_CDD_MotAg1Meas.h"
#include "Rte_CDD_MotAgArbn.h"
#include "Rte_CDD_MotAgCmp.h"
#include "Rte_CDD_MotCtrlMgr.h"
#include "Rte_CDD_MotCurrRegVltgLimr.h"
#include "Rte_CDD_MotRplCoggCmd.h"
#include "Rte_CDD_MotVel.h"
#include "Rte_CDD_NvMProxy.h"
#include "Rte_CDD_NxtrTi.h"
#include "Rte_CDD_RamMem.h"
#include "Rte_CDD_SinVltgGenn.h"
#include "Rte_CDD_SnsrMeasStrt.h"
#include "Rte_CDD_SyncCrc.h"
#include "Rte_CDD_TSG31CfgAndUse.h"
#include "Rte_CDD_Tauj0CfgAndUse.h"
#include "Rte_CDD_Tauj1CfgAndUse.h"
#include "Rte_CDD_VrfyCritReg.h"
#include "Rte_CDD_XcpIf.h"
#include "Rte_CmnMfgSrv.h"
#include "Rte_CmnMfgSrvIf.h"
#include "Rte_CmplncErr.h"
#include "Rte_CurrMeasCorrln.h"
#include "Rte_CustDiagc.h"
#include "Rte_Dampg.h"
#include "Rte_DampgPahFwl.h"
#include "Rte_Dem.h"
#include "Rte_Det.h"
#include "Rte_DiagcMgr.h"
#include "Rte_DiagcMgrProxyAppl10.h"
#include "Rte_DiagcMgrProxyAppl6.h"
#include "Rte_DiagcMgrStub.h"
#include "Rte_DutyCycThermProtn.h"
#include "Rte_EcuM.h"
#include "Rte_EcuTMeas.h"
#include "Rte_EotLrng.h"
#include "Rte_EotProtn.h"
#include "Rte_EotProtnFwl.h"
#include "Rte_FltInj.h"
#include "Rte_GateDrv0Ctrl.h"
#include "Rte_GateDrv1Ctrl.h"
#include "Rte_GmFctDiArbn.h"
#include "Rte_GmMsg0C5BusHiSpd.h"
#include "Rte_GmMsg0C9BusHiSpd.h"
#include "Rte_GmMsg148BusHiSpd.h"
#include "Rte_GmMsg17DBusHiSpd.h"
#include "Rte_GmMsg180BusChassisExp.h"
#include "Rte_GmMsg180BusHiSpd.h"
#include "Rte_GmMsg182BusChassisExp.h"
#include "Rte_GmMsg184BusHiSpd.h"
#include "Rte_GmMsg1CABusChassisExp.h"
#include "Rte_GmMsg1E5BusChassisExp.h"
#include "Rte_GmMsg1E5BusHiSpd.h"
#include "Rte_GmMsg1E9BusHiSpd.h"
#include "Rte_GmMsg1F1BusHiSpd.h"
#include "Rte_GmMsg1F5BusHiSpd.h"
#include "Rte_GmMsg214BusHiSpd.h"
#include "Rte_GmMsg232BusHiSpd.h"
#include "Rte_GmMsg335BusChassisExp.h"
#include "Rte_GmMsg337BusChassisExp.h"
#include "Rte_GmMsg348BusChassisExp.h"
#include "Rte_GmMsg348BusHiSpd.h"
#include "Rte_GmMsg34ABusChassisExp.h"
#include "Rte_GmMsg34ABusHiSpd.h"
#include "Rte_GmMsg3F1BusHiSpd.h"
#include "Rte_GmMsg4D1BusHiSpd.h"
#include "Rte_GmMsg500BusHiSpd.h"
#include "Rte_GmMsg778BusHiSpd.h"
#include "Rte_GmOvrlStMgr.h"
#include "Rte_GmRoadWhlInQlfr.h"
#include "Rte_GmStrtStop.h"
#include "Rte_GmTqArbn.h"
#include "Rte_GmVehPwrMod.h"
#include "Rte_GmVehSpdArbn.h"
#include "Rte_HiLoadStallLimr.h"
#include "Rte_HowDetn.h"
#include "Rte_HwAg0Meas.h"
#include "Rte_HwAg1Meas.h"
#include "Rte_HwAgArbn.h"
#include "Rte_HwAgCorrln.h"
#include "Rte_HwAgSnsrls.h"
#include "Rte_HwAgSysArbn.h"
#include "Rte_HwAgTrajGenn.h"
#include "Rte_HwAgTrakgServo.h"
#include "Rte_HwAgVehCentrTrim.h"
#include "Rte_HwTqArbn.h"
#include "Rte_HwTqCorrln.h"
#include "Rte_HysCmp.h"
#include "Rte_InertiaCmpVel.h"
#include "Rte_IoHwAb.h"
#include "Rte_LimrCdng.h"
#include "Rte_LoaMgr.h"
#include "Rte_MotAg2Meas.h"
#include "Rte_MotAgCorrln.h"
#include "Rte_MotCtrlPrmEstimn.h"
#include "Rte_MotCurrPeakEstimn.h"
#include "Rte_MotCurrRegCfg.h"
#include "Rte_MotDrvDiagc.h"
#include "Rte_MotQuadDetn.h"
#include "Rte_MotRefMdl.h"
#include "Rte_MotRplCoggCfg.h"
#include "Rte_MotTqCmdSca.h"
#include "Rte_MotTqTranlDampg.h"
#include "Rte_MotVelCtrl.h"
#include "Rte_NvM.h"
#include "Rte_NvMProxy.h"
#include "Rte_NxtrCalIds.h"
#include "Rte_NxtrSwIds.h"
#include "Rte_PartNr.h"
#include "Rte_PolarityCfg.h"
#include "Rte_ProgMfgSrv.h"
#include "Rte_PullCmpActv.h"
#include "Rte_PwrDiscnct.h"
#include "Rte_PwrLimr.h"
#include "Rte_PwrSply.h"
#include "Rte_PwrUpSeq.h"
#include "Rte_PwrpkCmpbltyChk.h"
#include "Rte_Rtn.h"
#include "Rte_RtnPahFwl.h"
#include "Rte_SerlComInpProxy.h"
#include "Rte_SerlComOutpProxy.h"
#include "Rte_SnsrOffsCorrn.h"
#include "Rte_SnsrOffsLrng.h"
#include "Rte_StHlthSigNormn.h"
#include "Rte_StHlthSigStc.h"
#include "Rte_StOutpCtrl.h"
#include "Rte_StabyCmp.h"
#include "Rte_Swp.h"
#include "Rte_SysFricLrng.h"
#include "Rte_SysStMod.h"
#include "Rte_TEstimn.h"
#include "Rte_TmplMonr.h"
#include "Rte_TqLoa.h"
#include "Rte_TqOscn.h"
#include "Rte_TunSelnAuthy.h"
#include "Rte_TunSelnMngt.h"
#include "Rte_VehSigCdng.h"
#include "Rte_VehSpdLimr.h"
#include "Rte_WdgM.h"
#include "Rte_WhlImbRejctn.h"
#include "SchM_BswM.h"
#include "SchM_ChkPt.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_Dio.h"
#include "SchM_EcuM.h"
#include "SchM_Fee.h"
#include "SchM_Fls.h"
#include "SchM_IoHwAb.h"
#include "SchM_Mcu.h"
#include "SchM_NvM.h"
#include "SchM_NvMProxy.h"
#include "SchM_Port.h"
#include "SchM_Spi.h"
#include "SchM_WdgM.h"
#include "SchM_Wdg_59_DriverA.h"

#include "Rte_Hook.h"

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (STATIC)
# define STATIC static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelUM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelUM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_ZERO_INIT) Rte_InitState = RTE_STATE_UNINIT; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */

#define RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Constants
 *********************************************************************************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u0p16_8, RTE_CONST) Rte_C_Ary1D_u0p16_8_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u16p0_2, RTE_CONST) Rte_C_Ary1D_u16p0_2_1 = {
  0U, 100U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u2p14_2, RTE_CONST) Rte_C_Ary1D_u2p14_2_1 = {
  16384U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u32_8, RTE_CONST) Rte_C_Ary1D_u32_8_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u32_8, RTE_CONST) Rte_C_Ary1D_u32_8_1 = {
  0U, 62U, 125U, 187U, 250U, 312U, 375U, 437U
};
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Calibration Parameters (SW-C local and calibration component calibration parameters)
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_ParameterBaseType, RTE_VAR_NOINIT) RteParameterBase;

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  5.0F,
  5.0F,
  0.949997F,
  5.0F,
  5.0F,
  TRUE
};
CONST(Rte_Calprm_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  30.0F,
  0.0F
};
CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  8.8F,
  6.0F,
  16.0F,
  26.5F,
  0.73F,
  10.0F,
  16.0F,
  9.0F,
  10.5F,
  15.5F,
  9.5F,
  76.0F,
  56.0F,
  45.0F,
  16.0F,
  262500.0F,
  2.8F,
  2.3F,
  3.0F,
  2.0F,
  0.0F,
  0.0F,
  100.0F,
  0.0F,
  100.0F,
  100.0F,
  0.0F,
  200.0F,
  9.0F,
  -4.5F,
  500.0F,
  14.5F,
  -14.5F,
  0.0F,
  1.0F,
  0.625F,
  12.0F,
  1.375F,
  0.3F,
  0.3F,
  70.0F,
  0.5F,
  0.3F,
  0.3F,
  60.0F,
  0.5F,
  145.0F,
  -45.0F,
  100.0F,
  -50.0F,
  0.1F,
  20.0F,
  1.0F,
  5.0F,
  0.0F,
  1.0F,
  15.0F,
  10.0F,
  0.101937F,
  50.0F,
  25.0F,
  60.0F,
  0.000004094F,
  15.0F,
  1.0F,
  1.0F,
  0.035F,
  0.025F,
  0.025F,
  0.2F,
  5.0F,
  0.1F,
  0.1F,
  5.0F,
  0.0F,
  20.0F,
  3.0F,
  0.2F,
  4000.0F,
  0.0F,
  600.0F,
  0.2F,
  1e-05F,
  0.1F,
  1.0F,
  1.0F,
  0.0F,
  1.0F,
  5.0F,
  100.0F,
  1.0F,
  1500.0F,
  1.0F,
  1.0F,
  10000.0F,
  500.0F,
  100.0F,
  50.0F,
  0.2857143F,
  0.01989437F,
  0.5714F,
  2.85F,
  2.0F,
  2.515F,
  0.01989437F,
  2.85F,
  20.0F,
  1.425F,
  2.85F,
  0.2857143F,
  0.01989437F,
  0.5714F,
  2.85F,
  2.0F,
  2.515F,
  0.01989437F,
  2.85F,
  20.0F,
  1.425F,
  2.85F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  0.0F,
  0.0052F,
  0.005F,
  -0.001F,
  0.045F,
  0.031F,
  0.04F,
  1.0F,
  0.00013F,
  0.00013F,
  0.0001F,
  0.00011889F,
  0.00013F,
  0.00013F,
  0.0001F,
  0.00011889F,
  0.032F,
  0.01246F,
  0.0139F,
  0.0039F,
  25.0F,
  8.0F,
  0.03F,
  255.0F,
  0.000125F,
  9.375e-05F,
  1.0F,
  1.0F,
  10.0F,
  1.8F,
  0.0F,
  0.1F,
  1.0F,
  125.0F,
  0.0026526F,
  0.015F,
  0.25F,
  0.0F,
  1.1F,
  0.9F,
  2.0F,
  0.365F,
  0.0335999F,
  0.5F,
  1.0F,
  0.6F,
  13.5F,
  100.0F,
  3.125F,
  3125.0F,
  15.0F,
  5.0F,
  20.0F,
  0.0F,
  0.0F,
  3.48F,
  0.62F,
  5.0F,
  -4400.0F,
  4400.0F,
  0.0F,
  0.0F,
  100.0F,
  0.0F,
  0.2F,
  100.0F,
  1.0F,
  5.0F,
  120.0F,
  20.0F,
  140.0F,
  120.0F,
  2.0F,
  62500U,
  50000U,
  6250U,
  11000U,
  30000U,
  5000U,
  6000U,
  7000U,
  1000U,
  200U,
  1500U,
  2000U,
  500U,
  86400U,
  0U,
  180000U,
  0U,
  0U,
  20480,
  1311U,
  1311U,
  1311U,
  1311U,
  65535U,
  65535U,
  410U,
  272U,
  410U,
  272U,
  327U,
  327U,
  327U,
  327U,
  327U,
  327U,
  6554U,
  65U,
  6554U,
  65U,
  5U,
  20U,
  16384U,
  16384U,
  16384U,
  16384U,
  2521U,
  1000U,
  2521U,
  1000U,
  2500U,
  512U,
  512U,
  512U,
  512U,
  1311U,
  1311U,
  1311U,
  1311U,
  92U,
  3000U,
  3000U,
  4096U,
  4096U,
  4096U,
  4096U,
  4096U,
  4096U,
  2832U,
  3598U,
  4622U,
  7924U,
  4096U,
  4096U,
  4096U,
  4096U,
  4096U,
  4096U,
  2832U,
  3598U,
  4622U,
  7924U,
  1000U,
  500U,
  5U,
  5U,
  1000U,
  500U,
  1000U,
  500U,
  500U,
  1000U,
  500U,
  500U,
  500U,
  500U,
  500U,
  1000U,
  1000U,
  5000U,
  500U,
  1000U,
  1000U,
  1000U,
  5000U,
  500U,
  500U,
  500U,
  500U,
  500U,
  500U,
  500U,
  500U,
  500U,
  500U,
  500U,
  5U,
  5U,
  1000U,
  1000U,
  500U,
  500U,
  1000U,
  500U,
  500U,
  1000U,
  500U,
  500U,
  1000U,
  500U,
  500U,
  5000U,
  500U,
  5000U,
  500U,
  500U,
  400U,
  4000U,
  132U,
  132U,
  2000U,
  13106U,
  13106U,
  13106U,
  13106U,
  13106U,
  13106U,
  2000U,
  84U,
  0U,
  5U,
  20U,
  6U,
  12U,
  18U,
  3U,
  200U,
  5U,
  1U,
  48U,
  20U,
  25U,
  10U,
  10U,
  10U,
  10U,
  10U,
  10U,
  10U,
  10U,
  2U,
  0U,
  0U,
  0U,
  4U,
  4U,
  0U,
  0U,
  2U,
  5U,
  2U,
  0U,
  0U,
  2U,
  5U,
  5U,
  1U,
  0U,
  2U,
  3U,
  10U,
  3U,
  0U,
  0U,
  67U,
  67U,
  67U,
  22U,
  67U,
  67U,
  1,
  1,
  1,
  1,
  1,
  FALSE,
  TRUE,
  FALSE,
  FALSE,
  TRUE,
  TRUE,
  FALSE,
  FALSE,
  TRUE,
  FALSE,
  TRUE,
  TRUE,
  FALSE,
  FALSE,
  TRUE,
  FALSE,
  FALSE,
  FALSE,
  TRUE,
  TRUE,
  FALSE,
  {
    0U, 640U, 1920U, 3840U, 7680U, 10240U, 12800U, 15360U, 19200U, 23040U, 25600U, 28160U
  },
  {
    0U, 256U, 1280U, 3200U, 6400U, 9600U, 12800U, 19200U, 25600U, 31872U, 32000U, 32128U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1024U, 3072U, 6144U, 10240U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1024U, 3072U, 6144U, 10240U, 16384U
  },
  {
    0U, 3200U, 6400U, 9600U, 12800U, 25600U, 32736U, 35776U
  },
  {
    0U, 6144U, 14336U, 14336U, 14336U, 14336U, 14336U, 14336U
  },
  {
    0U, 3200U, 6400U, 9600U, 12800U, 25600U, 32736U, 35776U
  },
  {
    0U, 6144U, 14336U, 14336U, 14336U, 14336U, 14336U, 14336U
  },
  {
    0U, 1184U, 2368U, 3552U, 4736U, 5920U, 7104U, 8288U, 9472U, 10656U, 11840U
  },
  {
    0U, 256U, 1280U, 3200U, 6400U, 9600U, 12800U, 19200U, 25600U, 31872U, 32000U, 32128U
  },
  {
    122, 123, 125, 127
  },
  {
    346U, 287U, 234U, 0U
  },
  {
    122, 123, 125, 127
  },
  {
    346U, 287U, 234U, 0U
  },
  {
    128U, 128U, 128U, 44U, 44U
  },
  {
    124U, 124U, 124U, 40U, 40U
  },
  {
    127U, 127U, 127U, 1630U, 1630U
  },
  {
    133U, 133U, 133U, 180U, 180U
  },
  {
    159U, 159U, 159U, 281U, 281U
  },
  {
    167U, 167U, 167U, 310U, 310U
  },
  {
    199U, 199U, 199U, 1282U, 1282U
  },
  {
    210U, 210U, 210U, 1707U, 1707U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    998U, 998U, 998U, 9535U, 9535U
  },
  {
    998U, 998U, 998U, 9535U, 9535U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    -40, 0, 83, 84, 85
  },
  {
    0U, 76U, 80U, 84U, 88U, 92U, 96U, 100U
  },
  {
    346U, 346U, 346U, 346U, 287U, 234U, 181U, 128U
  },
  {
    -11200, -80, 160, 800, 11200
  },
  {
    0U, 2560U, 5120U, 7680U
  },
  {
    0U, 1783U, 3560U, 5342U, 7125U, 8902U, 10685U, 12467U, 14245U, 16027U, 17810U, 19587U, 21370U, 23152U, 24935U, 
    26712U, 28495U
  },
  {
    34873U, 34873U, 34873U, 34873U, 19910U, 12411U, 9199U, 7350U, 6137U, 5272U, 4623U, 4119U, 3714U, 3382U, 3104U, 2870U, 
    2668U
  },
  {
    0U, 1783U, 3560U, 5342U, 7125U, 8902U, 10685U, 12467U, 14245U, 16027U, 17810U, 19587U, 21370U, 23152U, 24935U, 
    26712U, 28495U
  },
  {
    34873U, 34873U, 34873U, 34873U, 19910U, 12411U, 9199U, 7350U, 6137U, 5272U, 4623U, 4119U, 3714U, 3382U, 3104U, 2870U, 
    2668U
  },
  {
    0U, 1280U, 2560U, 3840U, 5120U, 6400U, 7680U, 8960U, 10240U, 11520U, 12800U, 14080U, 15360U, 16640U, 19200U, 21760U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16370U, 16336U, 16276U, 
    16095U, 15869U
  },
  {
    0U, 3200U, 6400U, 9600U, 12800U, 16000U
  },
  {
    0U, 3200U, 6400U, 9600U, 12800U, 16000U, 19200U
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}
  },
  {
    12800U, 19200U, 19200U, 19200U
  },
  {
    12800U, 19200U, 19200U, 19200U
  },
  {
    0U, 32U, 160U, 320U
  },
  {
    38400U, 38400U, 38400U, 38400U
  },
  {
    38400U, 38400U, 38400U, 38400U
  },
  {
    0U, 6144U, 7168U, 8192U, 9216U, 10240U, 12288U, 14336U, 16384U, 18432U, 20480U
  },
  {
    0U, 16384U, 19661U, 22938U, 23757U, 25395U, 27034U, 27853U, 29491U, 31130U, 32768U
  },
  {
    -3.1415927F, -2.3561945F, -1.5707964F, -0.7853982F, 0.0F, 0.7853982F, 1.5707964F, 2.3561945F
  },
  {
    0U, 3200U, 6400U, 9600U, 16000U, 19200U, 22400U, 25600U, 28800U, 35200U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 3200U, 6400U, 9600U, 16000U, 19200U, 22400U, 25600U, 28800U, 35200U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1280U, 3200U, 6400U, 7680U, 9600U, 11520U, 12800U, 14080U, 16000U
  },
  {
    0U, 1280U, 3200U, 6400U, 7680U, 9600U, 12800U, 13440U, 14080U, 15360U, 16000U, 17280U
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    0U, 1024U, 2048U, 4096U, 6144U, 8192U, 9216U, 10240U
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    0U, 100U, 114U, 303U, 800U, 1200U, 2600U, 3200U, 3700U, 4200U, 5000U, 6000U, 7200U, 7500U, 8000U, 8500U, 9000U, 
    9500U, 10000U, 11000U
  },
  {
    16384U, 16384U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    56U, 53U, 57U, 48U, 50U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 88U
  },
  {
    -17600, -12800, -10400, -8800, -5657, -4600, -3499, -1731, 0, 1731, 3499, 4600, 5657, 8800
  },
  {
    1475U, 2867U, 3891U, 4710U, 7168U, 8397U, 9486U, 9486U, 9486U, 9486U, 7277U, 5994U, 4506U, 0U
  },
  {
    0U, 2182U, 5717U, 7919U, 10034U, 16320U
  },
  {
    18973U, 18973U, 14553U, 11989U, 9011U, 0U
  },
  {
    17496U, 18728U, 18928U, 19136U, 19336U, 19544U, 20568U, 21592U, 22208U, 25280U
  },
  {
    3395U, 2859U, 2769U, 2680U, 2591U, 2501U, 2054U, 1608U, 1340U, 0U
  },
  {
    819U, 922U, 1024U, 1126U, 1229U, 1331U, 1434U, 1434U, 1434U, 1434U, 1434U
  },
  {
    2560U, 3200U, 3840U, 4480U, 5120U, 6400U, 7680U, 8960U, 10240U, 11520U, 12800U
  },
  {
    0U, 3200U, 6400U, 8320U, 9600U
  },
  {
    18022U, 18022U, 18022U, 18022U, 18022U
  }
};
CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  55.48F,
  1.5F,
  10.0F,
  10.0F,
  0.0507813F,
  10.0F,
  10.0F,
  100.0F,
  0.0117188F,
  10.0F,
  10.0F,
  10.0F,
  10.0F,
  100.0F,
  100.0F,
  10.0F,
  10.0F,
  100.0F,
  500U
};
CONST(Rte_Calprm_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.8F,
  0.1F,
  3.0F,
  10U,
  {
    {2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 
    2253, 2253}
  }
};
CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  50.0F,
  0.1F,
  0.15F,
  0.01F,
  10.0F,
  50.0F,
  50.0F,
  0.5F,
  2.0F,
  1.375F,
  0.101563F,
  65.0F,
  1.0F,
  3.0F,
  20.0F,
  2.5F,
  500.0F,
  4400.0F,
  3.0F,
  0.036F,
  100.0F,
  1000.0F,
  2.3F,
  140.0F,
  -40.0F,
  0.1F,
  0.0F,
  30.0F,
  1.0F,
  -1.0F,
  0.8F,
  15.0F,
  50.0F,
  0.0F,
  1.0F,
  -1.0F,
  4.0F,
  0.2F,
  0.98F,
  360.0F,
  180.0F,
  10.0F,
  3.0F,
  10.0F,
  -10.0F,
  100.0F,
  0.0F,
  0.01F,
  0.9F,
  0.024F,
  0.01F,
  60.0F,
  0.0001F,
  50.0F,
  0.99996858F,
  0.4761987F,
  -0.4761673F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.024F,
  0.75F,
  80.0F,
  0.999943F,
  0.86667F,
  -0.866613F,
  0.1F,
  0.024F,
  60.0F,
  0.999962F,
  0.571437F,
  -0.571399F,
  0.024F,
  0.0F,
  60.0F,
  0.999889F,
  1.68568F,
  -1.68556F,
  10.0F,
  50.0F,
  50.0F,
  100.0F,
  1U,
  2521U,
  1000U,
  2521U,
  1000U,
  5U,
  16385U,
  160U,
  356U,
  2521U,
  1000U,
  2521U,
  1000U,
  2521U,
  1000U,
  2521U,
  1000U,
  2521U,
  1000U,
  2521U,
  1000U,
  0U,
  1024U,
  4096U,
  1024U,
  4096U,
  65534U,
  6U,
  8U,
  8U,
  FALSE,
  {
    0U, 410U, 460U, 476U, 503U, 527U, 558U, 585U, 619U, 649U, 677U, 710U, 738U, 769U, 797U, 824U, 1024U, 1224U, 1920U, 
    2560U
  },
  {
    0, 0, 0, 0, 6, 20, 43, 66, 96, 127, 156, 193, 229, 274, 319, 365, 786, 1358, 3635, 5120
  },
  {
    {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022}
  },
  {
    {-20480, -15360, -6144, -4096, -2048, 0, 2048, 4096, 6144, 15360, 20480}, {-20480, -15360, -6144, -4096, -2048, 0, 
    2048, 4096, 6144, 15360, 20480}, {-20480, -15360, -6144, -4096, -2048, 0, 2048, 4096, 6144, 15360, 20480}, {-20480, 
    -15360, -6144, -4096, -2048, 0, 2048, 4096, 6144, 15360, 20480}, {-20480, -15360, -6144, -4096, -614, 0, 2048, 4096, 
    6144, 15360, 20480}, {-20480, -15360, -6144, -4096, -614, 0, 2048, 4096, 6144, 15360, 20480}, {-20480, -15360, -6144, 
    -4096, -369, 0, 2048, 4096, 6144, 15360, 20480}, {-20480, -15360, -6144, -4096, -369, 0, 2048, 4096, 6144, 15360, 
    20480}, {-20480, -15360, -6144, -4096, -369, 0, 2048, 4096, 6144, 15360, 20480}, {-20480, -15360, -6144, -4096, -369, 
    0, 2048, 4096, 6144, 15360, 20480}, {-20480, -15360, -6144, -4096, -369, 0, 2048, 4096, 6144, 15360, 20480}, {-20480, 
    -15360, -6144, -4096, -369, 0, 2048, 4096, 6144, 15360, 20480}
  },
  {
    {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022}
  },
  {
    -9600, -1600, 0, 640, 1280, 1920, 3200, 4480, 5760, 7680, 9600
  },
  {
    {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 
    2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 
    2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 
    2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 
    2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 
    2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 
    2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}
  },
  {
    0U, 101U, 232U, 393U, 586U, 807U, 1061U, 1349U, 1663U, 2005U, 2376U
  },
  {
    -9600, -1600, 0, 640, 1280, 1920, 3200, 4480, 5760, 7680, 9600
  },
  {
    {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 
    2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 
    2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 
    2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 
    2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 
    2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 
    2253, 2253, 2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253, 2253}
  },
  {
    -512, -512, -512, -512, -512
  },
  {
    18022, 18022, 18022, 18022, 18022
  },
  {
    0U, 563U, 640U, 717U, 768U, 768U
  },
  {
    768U, 768U, 512U, 256U, 0U, 0U
  },
  {
    0U, 1U, 1U, 2U, 2U, 3U, 3U, 4U, 4U, 5U, 5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 10U, 10U, 0U
  },
  {
    0U, 0U, 1U, 1U, 2U, 2U, 3U, 3U, 4U, 4U, 5U, 5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 0U, 9U
  },
  {
    0, -360, 36, -324, 72, -288, 108, -252, 144, -216, 180, -180, 216, -144, 252, -108, 288, -72, 324, -36, 360, -396
  },
  {
    0U, 1U, 1U, 2U, 2U, 3U, 3U, 4U, 4U, 5U, 5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 10U, 10U, 0U
  },
  {
    0U, 0U, 1U, 1U, 2U, 2U, 3U, 3U, 4U, 4U, 5U, 5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 0U, 9U
  },
  {
    0, -360, 36, -324, 72, -288, 108, -252, 144, -216, 180, -180, 216, -144, 252, -108, 288, -72, 324, -36, 360, -396
  },
  {
    1280U, 2560U
  },
  {
    64000U, 64000U
  },
  {
    1280U, 2560U
  },
  {
    35200U, 35200U
  },
  {
    0U, 1280U, 2560U, 12800U
  },
  {
    -6400, -1600, 0, 800, 1600, 2400, 3200, 4000, 4800, 5600, 6400
  },
  {
    {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}
  },
  {
    0U, 384U, 1280U, 2560U, 3840U, 7680U, 12800U, 32640U
  },
  {
    0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 
    0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}
  },
  {
    {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}
  },
  {
    1.0F, 1.0F, 1.0F, 1.0F
  },
  {
    -15.0F, -5.0F, 5.0F, 15.0F
  },
  {
    0U, 960U, 1920U, 2880U, 3840U, 5760U, 8640U, 11520U, 14400U, 17280U
  },
  {
    24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U
  },
  {
    TRUE, TRUE, TRUE, TRUE
  },
  {
    {0.0F, 5.0F}, {60.0F, 80.0F}, {80.0F, 100.0F}, {100.0F, 120.0F}
  },
  {
    0U, 12800U, 25600U, 38400U, 51200U, 65408U
  }
};
CONST(Rte_Calprm_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.01F,
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  },
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  }
};
CONST(Rte_Calprm_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.01F,
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  },
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  }
};
CONST(Rte_Calprm_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.01F,
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  },
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  }
};
CONST(Rte_Calprm_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.01F,
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  },
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  }
};
CONST(Rte_Calprm_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.01F,
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  },
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  }
};
CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  3.0F,
  5.0F,
  FALSE,
  FALSE,
  FALSE,
  TRUE
};
CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  TRUE
};
CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  3.0F,
  10.0F,
  180.0F,
  0.5F,
  180.0F,
  10.0F,
  10.0F,
  0.99F,
  2.0F,
  7.0F,
  30.0F,
  0.25F,
  30.0F,
  3.0F,
  1.0F,
  20.0F,
  60.0F,
  0.1F,
  0.0F,
  5.0F,
  500.0F,
  0.3F,
  45.0F,
  1.5F,
  0.15F,
  1.0F,
  0.0F,
  1.5F,
  0.0F,
  0.1F,
  27.78F,
  1.879385242F,
  1.879385242F,
  1.891037151F,
  1.867160853F,
  15.0F,
  2.0F,
  720.0F,
  5.0F,
  450U,
  360U,
  18U,
  TRUE,
  FALSE,
  FALSE,
  FALSE,
  FALSE,
  {
    2227U, 2227U, 2227U, 2227U, 2227U, 2227U, 2227U, 2227U, 2227U
  },
  {
    {0U, 26U, 64U, 77U, 128U, 256U}, {0U, 26U, 64U, 77U, 128U, 256U}, {0U, 26U, 64U, 77U, 128U, 256U}, {0U, 26U, 64U, 
    77U, 128U, 256U}, {0U, 26U, 64U, 77U, 128U, 256U}, {0U, 26U, 64U, 77U, 128U, 256U}, {0U, 26U, 64U, 77U, 128U, 256U}, {
    0U, 26U, 64U, 77U, 128U, 256U}, {0U, 26U, 64U, 77U, 128U, 256U}
  },
  {
    {-1280, -256, 0, 0, 5120, 5120}, {-1280, -256, 0, 0, 5120, 5120}, {-1280, -256, 0, 0, 5120, 5120}, {-1280, -256, 0, 
    0, 5120, 5120}, {-1280, -256, 0, 0, 5120, 5120}, {-1280, -256, 0, 0, 5120, 5120}, {-1280, -256, 0, 0, 5120, 5120}, {
    -1280, -256, 0, 0, 5120, 5120}, {-1280, -256, 0, 0, 5120, 5120}
  },
  {
    {0U, 19U, 51U, 64U, 256U}, {0U, 19U, 51U, 64U, 256U}, {0U, 19U, 51U, 64U, 256U}, {0U, 19U, 51U, 64U, 256U}, {0U, 19U, 
    51U, 64U, 256U}, {0U, 19U, 51U, 64U, 256U}, {0U, 19U, 51U, 64U, 256U}, {0U, 19U, 51U, 64U, 256U}, {0U, 19U, 51U, 64U, 
    256U}
  },
  {
    {-512, -128, 0, 0, 23040}, {-512, -128, 0, 0, 23040}, {-512, -128, 0, 0, 23040}, {-512, -128, 0, 0, 23040}, {-512, 
    -128, 0, 0, 23040}, {-512, -128, 0, 0, 23040}, {-512, -128, 0, 0, 23040}, {-512, -128, 0, 0, 23040}, {-512, -128, 0, 
    0, 23040}
  },
  {
    0U, 15U, 64U, 90U, 166U, 192U, 241U
  },
  {
    1280U, 2560U, 3840U, 5120U, 6400U, 7680U, 8960U, 10240U, 12800U
  }
};
CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  5.0F,
  0.5F,
  5.0F,
  1000.0F,
  0.15F,
  3.0F,
  0.6667F,
  0.3334F,
  1.0F,
  100.0F,
  0U,
  0U,
  20U,
  50U,
  0U,
  0U,
  FALSE,
  FALSE,
  {
    0U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 
    2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U, 2147487488U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  10000U
};
CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  10.0F,
  2.0F,
  3000.0F,
  0.5F,
  0.8F,
  10.0F,
  0.5F,
  3000.0F,
  12.0F,
  0.4F,
  1.5F,
  0.5F,
  1.0F,
  10.0F,
  100.0F,
  5.0F,
  1.0F,
  10.0F,
  100.0F,
  8.0F,
  0.001F,
  0.01F,
  0.0F,
  50U,
  350U,
  500U,
  FALSE,
  {
    0U, 4096U, 8192U, 12288U, 16384U, 28672U
  }
};
CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  10.0F,
  10.0F,
  10.0F,
  3.0F,
  0.15F,
  0.5F,
  2.0F,
  1.0F,
  7.0F,
  250.0F,
  250.0F,
  4.0F,
  250.0F,
  250.0F,
  100U,
  TRUE,
  TRUE,
  TRUE,
  TRUE
};
CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  30.0F,
  2.5F,
  0.5F,
  3.0F,
  200U,
  250U,
  {
    154U, 205U, 256U, 512U, 1024U, 2560U
  },
  {
    0U, 3277U, 6554U, 9830U, 13107U, 19661U, 22938U, 26214U, 29491U, 32768U
  },
  {
    0U, 786U, 3113U, 6750U, 11305U, 21463U, 26018U, 29655U, 31982U, 32768U
  },
  {
    {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U
    }, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 
    16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 
    12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 
    5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 
    437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 
    382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 
    355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 
    327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 
    300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 
    273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 
    246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 
    218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    2560U, 10240U, 17920U, 25600U, 33280U, 46080U
  },
  {
    12288U, 12288U, 12288U, 12288U, 12288U, 12288U
  }
};
CONST(Rte_Calprm_CalRegn02Rt01GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt01GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  30.0F,
  2.5F,
  0.5F,
  3.0F,
  200U,
  250U,
  {
    154U, 205U, 256U, 512U, 1024U, 2560U
  },
  {
    0U, 3277U, 6554U, 9830U, 13107U, 19661U, 22938U, 26214U, 29491U, 32768U
  },
  {
    0U, 786U, 3113U, 6750U, 11305U, 21463U, 26018U, 29655U, 31982U, 32768U
  },
  {
    {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U
    }, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 
    16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 
    12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 
    5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 
    437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 
    382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 
    355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 
    327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 
    300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 
    273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 
    246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 
    218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    2560U, 10240U, 17920U, 25600U, 33280U, 46080U
  },
  {
    12288U, 12288U, 12288U, 12288U, 12288U, 12288U
  }
};
CONST(Rte_Calprm_CalRegn02Rt02GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt02GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  30.0F,
  2.5F,
  0.5F,
  3.0F,
  200U,
  250U,
  {
    154U, 205U, 256U, 512U, 1024U, 2560U
  },
  {
    0U, 3277U, 6554U, 9830U, 13107U, 19661U, 22938U, 26214U, 29491U, 32768U
  },
  {
    0U, 786U, 3113U, 6750U, 11305U, 21463U, 26018U, 29655U, 31982U, 32768U
  },
  {
    {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U
    }, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 
    16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 
    12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 
    5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 
    437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 
    382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 
    355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 
    327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 
    300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 
    273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 
    246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 
    218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    2560U, 10240U, 17920U, 25600U, 33280U, 46080U
  },
  {
    12288U, 12288U, 12288U, 12288U, 12288U, 12288U
  }
};
CONST(Rte_Calprm_CalRegn02Rt03GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt03GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  30.0F,
  2.5F,
  0.5F,
  3.0F,
  200U,
  250U,
  {
    154U, 205U, 256U, 512U, 1024U, 2560U
  },
  {
    0U, 3277U, 6554U, 9830U, 13107U, 19661U, 22938U, 26214U, 29491U, 32768U
  },
  {
    0U, 786U, 3113U, 6750U, 11305U, 21463U, 26018U, 29655U, 31982U, 32768U
  },
  {
    {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U
    }, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 
    16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 
    12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 
    5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 
    437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 
    382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 
    355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 
    327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 
    300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 
    273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 
    246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 
    218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    2560U, 10240U, 17920U, 25600U, 33280U, 46080U
  },
  {
    12288U, 12288U, 12288U, 12288U, 12288U, 12288U
  }
};
CONST(Rte_Calprm_CalRegn02Rt04GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt04GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  30.0F,
  2.5F,
  0.5F,
  3.0F,
  200U,
  250U,
  {
    154U, 205U, 256U, 512U, 1024U, 2560U
  },
  {
    0U, 3277U, 6554U, 9830U, 13107U, 19661U, 22938U, 26214U, 29491U, 32768U
  },
  {
    0U, 786U, 3113U, 6750U, 11305U, 21463U, 26018U, 29655U, 31982U, 32768U
  },
  {
    {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U
    }, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 
    16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 
    12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 
    5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 382U, 
    437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 355U, 
    382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 327U, 
    355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 300U, 
    327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 273U, 
    300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 246U, 
    273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 218U, 
    246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}, {0U, 0U, 27U, 55U, 82U, 109U, 136U, 164U, 191U, 
    218U, 246U, 273U, 300U, 327U, 355U, 382U, 437U, 5541U, 12628U, 16441U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    2560U, 10240U, 17920U, 25600U, 33280U, 46080U
  },
  {
    12288U, 12288U, 12288U, 12288U, 12288U, 12288U
  }
};
CONST(Rte_Calprm_CalRegn03CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03CmnGroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  16.0F,
  6.0F,
  {
    75U, 100U
  },
  {
    16384U, 13107U
  },
  {
    2048U, 2560U
  },
  {
    32768U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 
    815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 
    1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 
    2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 
    4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 
    5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}
  },
  {
    {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}
  },
  {
    1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U
  },
  {
    0U, 128U, 256U, 384U, 512U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U
  },
  {
    0U, 26U, 51U, 102U, 154U, 205U, 230U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1556U, 2097U, 2540U, 2982U, 3277U
  },
  {
    0U, 9863U, 12878U, 14811U, 15974U, 16384U
  },
  {
    0U, 384U, 896U, 1536U, 2560U, 3840U, 5760U, 7680U, 10240U
  }
};
CONST(Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.5F,
  0.0F,
  45.0F,
  45.0F,
  45.0F,
  45.0F,
  3.0F,
  1.0F,
  1.0F,
  0.5F,
  20.0F,
  0.5F,
  0.5F,
  1.0F,
  45.0F,
  2.8F,
  10.0F,
  0.5F,
  2.0F,
  160.0F,
  60.0F,
  1.0F,
  1.0F,
  0.1F,
  100.0F,
  1.0F,
  0.0F,
  3.0F,
  0.25F,
  3.0F,
  1.0F,
  0.199219F,
  0.1F,
  1.0F,
  0.0F,
  2000U,
  TRUE,
  {
    10400U, 10400U
  },
  {
    208U, 432U, 640U, 848U, 1056U
  },
  {
    0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 3840U, 7680U, 11520U
  },
  {
    0U, 4096U, 16384U, 16384U
  }
};
CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  8.0F,
  0.5F,
  128.0F,
  2.0F,
  10.0F,
  5000U,
  800U,
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    320U, 640U, 1280U, 2560U, 3840U, 5120U, 6400U, 7680U
  }
};
CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.0F,
  646.0F,
  632.0F,
  0.9F,
  0.0F,
  500.0F,
  1.0F,
  0.0F,
  3.2578125F,
  0.0F,
  0.0117F,
  4.5F,
  -15.625F,
  1.0F,
  0.75F,
  7.8125F,
  1.908F,
  0.0F,
  -4.0F,
  0.1F,
  2.0F,
  16.0F,
  0.0211F,
  2.7305F,
  5.0F,
  5.0F,
  0.2F,
  0U,
  0U,
  0U,
  0U,
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    0U, 4096U, 8192U, 12288U, 16384U, 28672U
  },
  {
    154U, 205U, 256U, 512U, 1024U, 2560U
  },
  {
    38400U, 38400U, 38400U
  },
  {
    0U, 1280U, 3072U, 3098U
  },
  {
    36045U, 36045U, 36045U, 36045U
  },
  {
    0U, 256U, 640U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    2880U, 2880U, 2880U, 2240U, 1664U, 1408U, 1216U, 832U
  },
  {
    0U, 2294U, 5243U, 16384U
  },
  {
    {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 
    32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}
  },
  {
    0U, 6144U, 9920U, 6784U, 4928U, 3968U, 3520U, 384U
  },
  {
    320U, 640U, 1920U, 3840U, 6400U
  },
  {
    0U, 32768U, 32768U, 32768U, 32768U
  },
  {
    320U, 640U, 1280U, 1920U, 2560U, 3200U, 3840U, 7680U
  }
};
CONST(Rte_Calprm_CalRegn03Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  1.0F,
  -4500.0F,
  1.0F,
  10.0F,
  45056U,
  {
    -5120, -4480, -3840, -2560, -1280, 0, 1280, 2560, 3840, 5120, 6400, 7680, 8960, 11520
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    -80, -60, -40, -20, 0, 50, 100, 160
  },
  {
    128U, 128U, 128U, 128U, 128U, 128U, 128U, 128U
  },
  {
    384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U
  },
  {
    0U, 640U, 1088U, 1120U, 1152U, 1184U
  },
  {
    36000U, 36000U, 36000U, 36000U, 36000U, 36000U
  },
  {
    1005U, 1100U
  },
  {
    32768U, 32768U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    -640, -560, -480, -320, -160, 0, 160, 320, 480, 640, 800, 960, 1120, 1440
  },
  {
    256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
  },
  {
    0U, 1280U, 3840U, 5760U, 7680U, 10240U
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 
    16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 
    16384U, 16384U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {512U, 512U, 512U, 512U, 512U}, {768U, 768U, 768U, 768U, 768U}, {1024U, 1024U, 1024U, 1024U, 
    1024U}, {1536U, 1536U, 1536U, 1536U, 1536U}, {2048U, 2048U, 2048U, 2048U, 2048U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}
  }
};
CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  400.0F,
  0.15F,
  0.29F,
  90.0F,
  20.0F,
  20.0F,
  30.0F,
  0.199997F,
  0.002F,
  0.1F,
  0.05F,
  0.014F,
  0.125F,
  0.01F,
  0.2F,
  0.0005F,
  0.209F,
  0.21F,
  14.0F,
  4.0F,
  1.0F,
  90.0F,
  8000U,
  500U,
  {
    0U, 4096U
  },
  {
    8192U, 9216U, 10240U, 23552U, 24576U, 25600U
  },
  {
    0U, 16384U, 32768U, 32768U, 16384U, 0U
  },
  {
    5120U, 10240U, 15360U
  },
  {
    17280, 15360, 15360
  }
};
CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0U, 1600U, 3200U, 5362U, 5630U, 6032U, 6434U, 6970U, 7372U, 8310U, 10724U, 12064U, 13404U
  },
  {
    {0U, 1434U, 2867U, 4804U, 5097U, 5593U, 6175U, 6961U, 7595U, 8982U, 12135U, 13677U, 15082U}, {0U, 1434U, 2867U, 
    4804U, 5097U, 5593U, 6175U, 6961U, 7595U, 8982U, 12135U, 13677U, 15082U}, {0U, 1434U, 2867U, 4804U, 5097U, 5593U, 
    6175U, 6961U, 7595U, 8982U, 12135U, 13677U, 15082U}
  },
  {
    393U, 393U, 393U
  },
  {
    4915U, 4915U, 4915U
  },
  {
    128U, 96U, 64U
  },
  {
    0U, 32U, 64U, 128U, 320U, 400U, 480U
  },
  {
    {0U, 6U, 16U, 47U, 179U, 205U, 208U}, {0U, 6U, 16U, 47U, 179U, 205U, 208U}, {0U, 6U, 16U, 47U, 179U, 205U, 208U}
  },
  {
    0U, 3277U, 6554U, 9830U, 13107U, 19661U, 22938U, 26214U, 29491U, 32768U
  }
};
CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  15.0F,
  22.0F,
  400.0F,
  0.0005F,
  2e-05F,
  0.006F,
  9e-06F,
  0.0F,
  15.0F,
  1.0F,
  1.0F,
  15.0F,
  15.0F,
  15.0F,
  1.0F,
  2.0F,
  50.0F,
  800.0F,
  1.0F,
  100.0F,
  30.0F,
  5.0F,
  600.0F,
  550.0F,
  30.0F,
  0.02F,
  3.0F,
  1.0F,
  1.0F,
  0.2F,
  20.0F,
  10.0F,
  2.0F,
  2.0F,
  50.0F,
  50.0F,
  50.0F,
  0.001F,
  20.0F,
  3.0F,
  0.5F,
  17.0F,
  0.04F,
  30.0F,
  5.0F,
  5.0F,
  0.5F,
  3.0F,
  2000U,
  100U,
  20U,
  0U,
  FALSE,
  FALSE,
  FALSE,
  {
    36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U
  },
  {
    800U, 400U
  },
  {
    0U, 786U, 3113U, 6750U, 11305U, 21463U, 26018U, 29655U, 31982U, 32768U
  },
  {
    0U, 128U, 192U, 256U
  },
  {
    0U, 0U, 0U, 128U
  },
  {
    16384U, 32768U
  },
  {
    0U, 0U
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 
    16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 
    16384U, 16384U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {512U, 512U, 512U, 512U, 512U}, {768U, 768U, 768U, 768U, 768U}, {1024U, 1024U, 1024U, 1024U, 
    1024U}, {1536U, 1536U, 1536U, 1536U, 1536U}, {2048U, 2048U, 2048U, 2048U, 2048U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}
  },
  {
    1.0F, -1.6346F, 0.66799F, -1.6346F, 0.66799F
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  }
};
CONST(Rte_Calprm_CalRegn03Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 2048U, 4096U, 6144U, 8192U, 10240U, 12288U, 14336U, 16384U, 18432U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  }
};
CONST(Rte_Calprm_CalRegn03Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 
    1440U}
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {1920U, 0U}, {1920U, 0U}, {1920U, 0U}, {1920U, 0U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn03Rt00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  }
};
CONST(Rte_Calprm_CalRegn03Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 2048U, 4096U, 6144U, 8192U, 10240U, 12288U, 14336U, 16384U, 18432U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  }
};
CONST(Rte_Calprm_CalRegn03Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 
    1440U}
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {1920U, 0U}, {1920U, 0U}, {1920U, 0U}, {1920U, 0U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn03Rt01_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt01_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  }
};
CONST(Rte_Calprm_CalRegn03Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 2048U, 4096U, 6144U, 8192U, 10240U, 12288U, 14336U, 16384U, 18432U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  }
};
CONST(Rte_Calprm_CalRegn03Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 
    1440U}
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {1920U, 0U}, {1920U, 0U}, {1920U, 0U}, {1920U, 0U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn03Rt02_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt02_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  }
};
CONST(Rte_Calprm_CalRegn03Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 2048U, 4096U, 6144U, 8192U, 10240U, 12288U, 14336U, 16384U, 18432U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  }
};
CONST(Rte_Calprm_CalRegn03Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 
    1440U}
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {1920U, 0U}, {1920U, 0U}, {1920U, 0U}, {1920U, 0U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn03Rt03_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt03_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  }
};
CONST(Rte_Calprm_CalRegn03Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 2048U, 4096U, 6144U, 8192U, 10240U, 12288U, 14336U, 16384U, 18432U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  }
};
CONST(Rte_Calprm_CalRegn03Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 
    1440U}
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {1920U, 0U}, {1920U, 0U}, {1920U, 0U}, {1920U, 0U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn03Rt04_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn03Rt04_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  }
};

#define RTE_STOP_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Rte_Calprm_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    66.6F, 66.6F, 66.6F, 66.6F, 66.6F, 66.6F
  },
  {
    700000.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F
  }
};
CONST(Rte_Calprm_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
  }
};
CONST(Rte_Calprm_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
  }
};
CONST(Rte_Calprm_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U
};
CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U,
  254U,
  {
    1U, 2U, 3U, 4U, 5U, 254U, 253U, 252U, 251U, 250U
  },
  {
    19088743U, 2309737967U
  }
};
CONST(Rte_Calprm_EotLrng_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_EotLrng_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    900.0F, -900.0F, FALSE, FALSE
  }
};
CONST(Rte_Calprm_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.0F
};
CONST(Rte_Calprm_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    2.5F, 2.5F, 1.0F, 1.0F, 0.0F
  }
};
CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  170U,
  254U,
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    1U, 2U, 3U, 4U, 5U, 254U, 253U, 252U, 251U, 250U
  },
  {
    48U, 53U, 51U, 51U, 51U, 51U, 48U, 53U, 53U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    1U, 2U, 3U, 4U, 5U, 254U, 253U, 252U, 251U, 250U
  },
  {
    48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U
  },
  {
    18U, 1U
  },
  {
    82U, 65U, 67U, 75U, 45U, 69U, 80U, 83U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_PullCmpActv_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_PullCmpActv_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F
};
CONST(Rte_Calprm_SysFricLrng_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {{0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 
    0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 
    0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}}, {{0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U
    }, {0U, 0U, 0U}, {0U, 0U, 0U}}, 0U
  },
  {
    0.0F, FALSE, FALSE
  }
};
CONST(Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.0F,
  0.0F,
  0U,
  0U,
  0U
};

#define RTE_STOP_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Rte_ParameterRefTabType, RTE_CONST) RteParameterRefTab =
{
  &Rte_CalprmRom_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt01_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt02_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt03_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt04_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_EotLrng_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_PullCmpActv_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt01GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt02GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt03GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt04GroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03CmnGroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP,
};
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)


#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#define RTE_USEC_OsCounter(val) ((TickType)RTE_CONST_USEC_OsCounter_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */
#define RTE_MSEC_OsCounter(val) ((TickType)RTE_CONST_MSEC_OsCounter_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */
#define RTE_SEC_OsCounter(val)  ((TickType)RTE_CONST_SEC_OsCounter_##val) /* PRQA S 0342 */ /* MD_Rte_0342 */

#define RTE_CONST_MSEC_OsCounter_0 (0UL)
#define RTE_CONST_MSEC_OsCounter_10 (5UL)
#define RTE_CONST_MSEC_OsCounter_100 (50UL)
#define RTE_CONST_MSEC_OsCounter_2 (1UL)
#define RTE_CONST_MSEC_OsCounter_4 (2UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num) /* PRQA S 3408, 1505 */ /* MD_Rte_3408, MD_MSR_8.10 */
{
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = source;
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = destination;
  uint16_least i;
  for (i = 0; i < num ; i++)
  {
    dst[i] = src[i];
  }
}

#define RTE_MEMCPY32ALIGN (sizeof(uint32) - 1)

FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num)
{
  P2CONST(uint32, AUTOMATIC, RTE_APPL_DATA) asrc = source;
  P2VAR(uint32, AUTOMATIC, RTE_APPL_VAR) adst = destination;
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = source;
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = destination;
  uint16_least i = 0;

  if (num >= 16)
  {
    if (((((uint32)src) & RTE_MEMCPY32ALIGN) == 0) && ((((uint32)dst) & RTE_MEMCPY32ALIGN) == 0)) /* PRQA S 0306 */ /* MD_Rte_0306 */
    {
      uint16_least asize = num / sizeof(uint32);
      uint16_least rem = num & RTE_MEMCPY32ALIGN;
      for (i = 0; i < (asize - 3); i += 4)
      {
        adst[i] = asrc[i];
        adst[i+1] = asrc[i+1];
        adst[i+2] = asrc[i+2];
        adst[i+3] = asrc[i+3];
      }

      while (i < asize)
      {
        adst[i] = asrc[i];
        ++i;
      }
      i = num - rem;
    }
    else
    {
      for (i = 0 ; (i + 15) < num; i += 16)
      {
        dst[i] = src[i];
        dst[i+1] = src[i+1];
        dst[i+2] = src[i+2];
        dst[i+3] = src[i+3];
        dst[i+4] = src[i+4];
        dst[i+5] = src[i+5];
        dst[i+6] = src[i+6];
        dst[i+7] = src[i+7];
        dst[i+8] = src[i+8];
        dst[i+9] = src[i+9];
        dst[i+10] = src[i+10];
        dst[i+11] = src[i+11];
        dst[i+12] = src[i+12];
        dst[i+13] = src[i+13];
        dst[i+14] = src[i+14];
        dst[i+15] = src[i+15];
      }
    }

  }
  while (i < num)
  {
    dst[i] = src[i];
    ++i;
  }
}

FUNC(void, RTE_CODE) SchM_Init(void)
{
  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE2_Task_4msBsw_Appl10_0_4ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(4)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Task_10msBsw_Appl10_0_10ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(10)); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_SCHM_INIT;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_SCHM_INIT, RTE_START_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  /* initialize calibration parameter base pointer */
  RteParameterBase = &RteParameterRefTab[0];

  /* activate the tasks */
  (void)ActivateTask(Task_Init_Appl10); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)ActivateTask(Task_Init_Appl6); /* PRQA S 3417 */ /* MD_Rte_Os */

  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE_Task_2msTmplMonr_Appl10_0_2ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(2)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_2ms_Appl10_0_2ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(2)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_2ms_Appl6_0_2ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(2)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_4ms_Appl10_0_4ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(4)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_10ms_Appl10_0_10ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_10ms_Appl6_0_10ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_100ms_Appl10_0_100ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(100)); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_INIT;

  return RTE_E_OK;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_STOP_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE_Task_100ms_Appl10_0_100ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_10ms_Appl10_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_10ms_Appl6_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_2msTmplMonr_Appl10_0_2ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_2ms_Appl10_0_2ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_2ms_Appl6_0_2ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_4ms_Appl10_0_4ms); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_SCHM_INIT;

  return RTE_E_OK;
}

FUNC(void, RTE_CODE) SchM_Deinit(void)
{
  Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_SCHM_INIT, SCHM_DEINIT_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE2_Task_10msBsw_Appl10_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE2_Task_4msBsw_Appl10_0_4ms); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_UNINIT;
}

FUNC(void, RTE_CODE) Rte_InitMemory(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Rte_InitState = RTE_STATE_UNINIT;

  Rte_InitMemory_Appl10();
  Rte_InitMemory_Appl6();
}


/**********************************************************************************************************************
 * Exclusive area access
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) SchM_Enter_Dio_DIO_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Dio_DIO_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_DRIVERSTATE_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_DRIVERSTATE_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_VARIABLE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_VARIABLE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_INIT_CONFIG_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_INIT_CONFIG_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_TO_DIO_ALT_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_TO_DIO_ALT_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_CHIP_SELECT_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_CHIP_SELECT_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_RAM_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_RAM_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Wdg_59_DriverA_MODE_SWITCH_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Wdg_59_DriverA_MODE_SWITCH_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Wdg_59_DriverA_TRIGG_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Wdg_59_DriverA_TRIGG_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0306:  MISRA rule: 11.3
     Reason:     An optimized copy algorithm can be used for aligned data. To check if pointers are aligned, pointers need to be casted to an integer type.
     Risk:       No functional risk. Only the lower 8 bits of the address are checked, therefore all integer types are sufficient.
     Prevention: Not required.

   MD_Rte_0342:  MISRA rule: 19.13
     Reason:     For efficient code the use of macros and the operator '##' is necessary.
     Risk:       The used compiler is not ANSI/ISO C89 compatible. No functional risk.
     Prevention: AUTOSAR is based on ANSI/ISO C89. Compatible compilers are required.

   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3447:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
