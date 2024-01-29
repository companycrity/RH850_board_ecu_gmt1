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
 *          File:  Rte_Appl6.c
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
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGain_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGainEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DampgCmdBasDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_EotProtnDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_FricLrngDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_HysCmpCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CmnMfgSrv_IgnCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_LoaScaDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgDiagcInhb_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpLrngDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_RtnCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_StallMotTqLimDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrd_Val = 100.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrdEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CustDiagc_GmIgnCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_MfgOvrlDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_SerlComDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_SysStReqEnaOvrdCombd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CustDiagc_ThermLimFlgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngSpdStsNorm_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_InvldMsg0C9_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_PtCrkActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_PwrSteerIndcr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl2_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl3_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg17DBusHiSpd_InvldMsg17D_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg17DBusHiSpd_MissMsg17D_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_EscCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_EscReqActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_InvldMsg180BusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_MissMsg180BusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_InvldMsg180BusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_LkaCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_LkaReqActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_MissMsg180BusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg182BusChassisExp_SerlComVehLgtA_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgAlvRollgCntBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtMaskBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtVldBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgMaskBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrCalStsBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrChksBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrTypBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgVldBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_MissMsg1E9_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComLatA_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComYawRate_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(GmSysPwrMod1, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F5BusHiSpd_InvldMsg1F5_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F5BusHiSpd_ShiftLvrInRvs_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_AbsInvld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_AbsProtd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_MissMsg214_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_VehStabyEnhmtActvMsg214_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg232BusHiSpd_DesRtIdx_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_ApaReqActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_FbReqActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_InvldMsg337_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_MissMsg337_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg3F1BusHiSpd_AmbT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg4D1BusHiSpd_EngOilT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg500BusHiSpd_WhlPlsPerRev_Val = 1U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GmMsg500BusHiSpd_WhlRotlStsTiStampResl_Val = 0.000000002F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CodSupported_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CurrSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFailrTyp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFltTyp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcNr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcSrc_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcTrig_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_HistSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_PartNr_CustMfgEnSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdProtnValRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdRollgCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsFaildRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_BackUpPwrModMstVirtDevAuthyRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_SerlComInpProxy_BusOffChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_SerlComInpProxy_BusOffHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngOilTRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngOilVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngRunActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_EngSpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngSpdStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstPlsCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstTiStampRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlRotlStsRstRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlSeqNrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdProtnValRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdRollgCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdTqReqActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdTqValRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg0C5_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg0C9_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg17D_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg180BusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg180BusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg182_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1E9_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1F1_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1F5_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg214_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg232_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg337BusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg348BusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg348BusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg34ABusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg34ABusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg3F1_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg4D1_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg500BusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_OutdAirTCorrdValMaskRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_OutdAirTCorrdValRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_OutdAirTCorrdValVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_PtCrkActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstPlsCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstTiStampRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlRotlStsRstRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlSeqNrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_ShiftLvrPosnRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_ShiftLvrPosnVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerSysPrfmncModReqRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqActvVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqProtnValRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqRollgCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqTarAgRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvProtnValRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvRollgCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysBackUpPwrModEnaRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysBackUpPwrModRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysPwrModRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlAlvRollgCntrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlCmdChksRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlDeltaTqCmdActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlDeltaTqCmdValRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TracCtrlSysActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TracCtrlSysEnaRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynCtrlSysStRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynOverUnderSteerVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynYawRateRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynYawRateVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtActvRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLatARaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLatAVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLgtALoReslRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLgtALoReslVldRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlPlsPerRevRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlRotlStsTiStampReslRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_SerlComOutpProxy_BusOffChassisExp_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_SerlComOutpProxy_BusOffHiSpd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdPrevEndSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevEscCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevTqCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg182BusChassisExp_GmMsg182BusChassisExpPrevVehLgtA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg500BusHiSpd_GmMsg500BusHiSpdPrevWhlRotlStsTiStampResl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_IgnCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SessionTiOut; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedKeyTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedKeyTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_DtcNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_MsgCntxt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeRstTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeSeqNrTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRxnTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiRstTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiSeqNrTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdInvldMsgTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg17DBusHiSpd_GmMsg17DBusHiSpdInvldMsgTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpInvldProtnValTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpInvldRollgCntrTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevRxnTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdInvldCrcTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdInvldRollgCntrTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevRxnTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg182BusChassisExp_GmMsg182BusChassisExpInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdAbsFaildTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatAInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdTcsEnaTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1F5BusHiSpd_GmMsg1F5BusHiSpdInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevRxnTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqProtnValInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbProtnValInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbRollgCntrInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevRxnTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg3F1BusHiSpd_GmMsg3F1BusHiSpdInvldMsgTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdInvldMsgTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg500BusHiSpd_GmMsg500BusHiSpdPrevRxnTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_TrigTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_GmIgnCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstPlsCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstTiStamp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstPlsCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstTiStamp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_NxtrMfgEnaCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SessionCurr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidKeyAtmptCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionKeyAtmptCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(GmFctDiArbnSts1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_PrevGmFctDiArbnSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_Srv12LoopCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_SrvCntxt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_PrevClrNtcFlg6; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeSeqNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiSeqNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevRollgCntrVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevRollgCntrVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg184BusHiSpd_GmMsg184BusHiSpdRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1CABusChassisExp_GmMsg1CABusChassisExpRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E5BusChassisExp_GmMsg1E5BusChassisExpRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E5BusHiSpd_GmMsg1E5BusHiSpdRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg232BusHiSpd_GmMsg232BusHiSpdPrevDesRtIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg335BusChassisExp_GmMsg335BusChassisExpRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevAgReqRollgCntVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevFbReqRollgCntVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg500BusHiSpd_GmMsg500BusHiSpdPrevWhlPlsPerRev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_ActvEveId; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_EveCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCalProgdSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCustMfgEnaCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiAssiMechTEstimn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiDampg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiDutyCycThermProtn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiEotProtn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiHysCmp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiInertiaCmp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiLoaSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiRtn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiStallMotTqLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiSysFricLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiSysMotTqCmdRampRate; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgDiagcInhb; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsSeedReqCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsUnlckd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SysStReqEnaOvrd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrvIf_CmnMfgSrvUnlckd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CpidActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedReqd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedTmrActvd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedReqd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedTmrActvd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_GmDiCtrlPidTstRunng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_PrevSysPwrModRun; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_SysStReqEnaOvrdCust; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRollgCntrRst; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdPrevEngRunActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevEscCmdActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevInvld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpRollgCntrRst; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevInvld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevTqReq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdRollgCntrRst; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1F1BusHiSpd_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1F5BusHiSpd_GmMsg1F5BusHiSpdPrevShiftLvrInRvs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevAbsProtd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRollgCntrRst; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevInvld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpRollgCntrRst; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_TrigActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrPrevSysPwrModRun; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_SerlComOutpProxy_BusOffChassisExp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_SerlComOutpProxy_BusOffHiSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_CcaHwPartNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_CcaSerlNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiRestore; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_EpsSysSerlNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf3; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u32_2, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SeedKey; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_CmnMfgSrvIf, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrvIf_DataBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6Ary; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_s16_DiagcMgrProxyAppl6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6DebCntrAry; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u32_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_DtcMap; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_DtcTrigStsAry; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_EveMap; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrBasMdlPartNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_9, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCcaMfgTrakg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCtrlPidSeedKey; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_9, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrDataUniversalNrSysId; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrEcuId; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrEndMdlPartNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_7, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrNxtrMfgTrakg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrProgmDate; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrProgmSessionSeedKey; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrRepairShopCod; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_822, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSecuBypAuthn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSysCodVersNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSysName; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_17, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrVinData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcData6; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_ProxySetNtcData6; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
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


FUNC(void, RTE_CODE) Rte_InitMemory_Appl6(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* set default values for internal data */
  Rte_CmnMfgSrv_AssiLnrGain_Val = 1.0F;
  Rte_CmnMfgSrv_AssiLnrGainEna_Logl = FALSE;
  Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl = FALSE;
  Rte_CmnMfgSrv_DampgCmdBasDi_Logl = FALSE;
  Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl = FALSE;
  Rte_CmnMfgSrv_EotProtnDi_Logl = FALSE;
  Rte_CmnMfgSrv_FricLrngDi_Logl = FALSE;
  Rte_CmnMfgSrv_HysCmpCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_IgnCntr_Val = 0U;
  Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_LoaScaDi_Logl = FALSE;
  Rte_CmnMfgSrv_MfgDiagcInhb_Logl = FALSE;
  Rte_CmnMfgSrv_MfgEnaSt_Val = 0U;
  Rte_CmnMfgSrv_PullCmpCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_PullCmpLrngDi_Logl = FALSE;
  Rte_CmnMfgSrv_RtnCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_StallMotTqLimDi_Logl = FALSE;
  Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl = FALSE;
  Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl = FALSE;
  Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl = FALSE;
  Rte_CmnMfgSrv_VehSpdOvrd_Val = 100.0F;
  Rte_CmnMfgSrv_VehSpdOvrdEna_Logl = FALSE;
  Rte_CustDiagc_GmIgnCntr_Val = 0U;
  Rte_CustDiagc_MfgOvrlDi_Logl = FALSE;
  Rte_CustDiagc_SerlComDi_Logl = FALSE;
  Rte_CustDiagc_SysStReqEnaOvrdCombd_Logl = FALSE;
  Rte_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val = 0U;
  Rte_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val = 0U;
  Rte_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl = FALSE;
  Rte_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val = 0U;
  Rte_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val = 0U;
  Rte_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl = FALSE;
  Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl = FALSE;
  Rte_GmMsg0C9BusHiSpd_EngSpd_Val = 0.0F;
  Rte_GmMsg0C9BusHiSpd_EngSpdStsNorm_Logl = FALSE;
  Rte_GmMsg0C9BusHiSpd_InvldMsg0C9_Logl = FALSE;
  Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl = FALSE;
  Rte_GmMsg0C9BusHiSpd_PtCrkActv_Logl = FALSE;
  Rte_GmMsg148BusHiSpd_PwrSteerIndcr_Val = 0U;
  Rte_GmMsg148BusHiSpd_SteerAssiLimd_Val = 0U;
  Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl2_Val = 0U;
  Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl3_Val = 0U;
  Rte_GmMsg17DBusHiSpd_InvldMsg17D_Logl = FALSE;
  Rte_GmMsg17DBusHiSpd_MissMsg17D_Logl = FALSE;
  Rte_GmMsg180BusChassisExp_EscCmd_Val = 0.0F;
  Rte_GmMsg180BusChassisExp_EscReqActv_Logl = FALSE;
  Rte_GmMsg180BusChassisExp_InvldMsg180BusChassisExp_Logl = FALSE;
  Rte_GmMsg180BusChassisExp_MissMsg180BusChassisExp_Logl = FALSE;
  Rte_GmMsg180BusHiSpd_InvldMsg180BusHiSpd_Logl = FALSE;
  Rte_GmMsg180BusHiSpd_LkaCmd_Val = 0.0F;
  Rte_GmMsg180BusHiSpd_LkaReqActv_Logl = FALSE;
  Rte_GmMsg180BusHiSpd_MissMsg180BusHiSpd_Logl = FALSE;
  Rte_GmMsg182BusChassisExp_SerlComVehLgtA_Val = 0.0F;
  Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val = 0U;
  Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val = 0U;
  Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val = 0U;
  Rte_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val = 0U;
  Rte_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val = 0U;
  Rte_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val = 0U;
  Rte_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val = 0U;
  Rte_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val = 0U;
  Rte_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val = 0U;
  Rte_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val = 0U;
  Rte_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val = 0U;
  Rte_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val = 0U;
  Rte_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val = 0U;
  Rte_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val = 0U;
  Rte_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgAlvRollgCntBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtMaskBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtVldBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgMaskBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrCalStsBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrChksBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrTypBusHiSpd_Val = 0U;
  Rte_GmMsg1E5BusHiSpd_SteerWhlAgVldBusHiSpd_Val = 0U;
  Rte_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl = FALSE;
  Rte_GmMsg1E9BusHiSpd_MissMsg1E9_Logl = FALSE;
  Rte_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl = FALSE;
  Rte_GmMsg1E9BusHiSpd_SerlComLatA_Val = 0.0F;
  Rte_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl = FALSE;
  Rte_GmMsg1E9BusHiSpd_SerlComYawRate_Val = 0.0F;
  Rte_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl = FALSE;
  Rte_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl = FALSE;
  Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl = FALSE;
  Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl = FALSE;
  Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val = 0U;
  Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl = FALSE;
  Rte_GmMsg1F5BusHiSpd_InvldMsg1F5_Logl = FALSE;
  Rte_GmMsg1F5BusHiSpd_ShiftLvrInRvs_Logl = FALSE;
  Rte_GmMsg214BusHiSpd_AbsInvld_Logl = FALSE;
  Rte_GmMsg214BusHiSpd_AbsProtd_Logl = FALSE;
  Rte_GmMsg214BusHiSpd_MissMsg214_Logl = FALSE;
  Rte_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl = FALSE;
  Rte_GmMsg214BusHiSpd_VehStabyEnhmtActvMsg214_Logl = FALSE;
  Rte_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl = FALSE;
  Rte_GmMsg232BusHiSpd_DesRtIdx_Val = 0U;
  Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val = 0U;
  Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val = 0U;
  Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val = 0U;
  Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val = 0U;
  Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val = 0U;
  Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val = 0U;
  Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val = 0U;
  Rte_GmMsg337BusChassisExp_ApaReqActv_Logl = FALSE;
  Rte_GmMsg337BusChassisExp_FbReqActv_Logl = FALSE;
  Rte_GmMsg337BusChassisExp_InvldMsg337_Logl = FALSE;
  Rte_GmMsg337BusChassisExp_MissMsg337_Logl = FALSE;
  Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val = 0.0F;
  Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val = 0.0F;
  Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl = FALSE;
  Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl = FALSE;
  Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val = 0.0F;
  Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl = FALSE;
  Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl = FALSE;
  Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val = 0.0F;
  Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl = FALSE;
  Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl = FALSE;
  Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val = 0.0F;
  Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl = FALSE;
  Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl = FALSE;
  Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val = 0.0F;
  Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl = FALSE;
  Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl = FALSE;
  Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val = 0.0F;
  Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl = FALSE;
  Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl = FALSE;
  Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val = 0.0F;
  Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl = FALSE;
  Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl = FALSE;
  Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val = 0.0F;
  Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl = FALSE;
  Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl = FALSE;
  Rte_GmMsg3F1BusHiSpd_AmbT_Val = 0.0F;
  Rte_GmMsg4D1BusHiSpd_EngOilT_Val = 0.0F;
  Rte_GmMsg500BusHiSpd_WhlPlsPerRev_Val = 1U;
  Rte_GmMsg500BusHiSpd_WhlRotlStsTiStampResl_Val = 0.000000002F;
  Rte_GmMsg778BusHiSpd_CodSupported_Val = 0U;
  Rte_GmMsg778BusHiSpd_CurrSts_Val = 0U;
  Rte_GmMsg778BusHiSpd_DtcFailrTyp_Val = 0U;
  Rte_GmMsg778BusHiSpd_DtcFltTyp_Val = 0U;
  Rte_GmMsg778BusHiSpd_DtcNr_Val = 0U;
  Rte_GmMsg778BusHiSpd_DtcSrc_Val = 0U;
  Rte_GmMsg778BusHiSpd_DtcTrig_Val = 0U;
  Rte_GmMsg778BusHiSpd_HistSts_Val = 0U;
  Rte_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val = 0U;
  Rte_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val = 0U;
  Rte_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val = 0U;
  Rte_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val = 0U;
  Rte_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val = 0U;
  Rte_PartNr_CustMfgEnSt_Val = 0U;
  Rte_SerlComInpProxy_AbsActvProtdProtnValRaw_Val = 0U;
  Rte_SerlComInpProxy_AbsActvProtdRaw_Val = 0U;
  Rte_SerlComInpProxy_AbsActvProtdRollgCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_AbsActvRaw_Val = 0U;
  Rte_SerlComInpProxy_AbsFaildRaw_Val = 0U;
  Rte_SerlComInpProxy_BackUpPwrModMstVirtDevAuthyRaw_Val = 0U;
  Rte_SerlComInpProxy_BusOffChassisExp_Logl = FALSE;
  Rte_SerlComInpProxy_BusOffHiSpd_Logl = FALSE;
  Rte_SerlComInpProxy_EngOilTRaw_Val = 0U;
  Rte_SerlComInpProxy_EngOilVldRaw_Val = 0U;
  Rte_SerlComInpProxy_EngRunActvRaw_Val = 0U;
  Rte_SerlComInpProxy_EngSpdRaw_Val = 0U;
  Rte_SerlComInpProxy_EngSpdStsRaw_Val = 0U;
  Rte_SerlComInpProxy_LeWhlDstPlsCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_LeWhlDstTiStampRaw_Val = 0U;
  Rte_SerlComInpProxy_LeWhlDstVldRaw_Val = 0U;
  Rte_SerlComInpProxy_LeWhlRotlStsRstRaw_Val = 0U;
  Rte_SerlComInpProxy_LeWhlSeqNrRaw_Val = 0U;
  Rte_SerlComInpProxy_LkaCmdProtnValRaw_Val = 0U;
  Rte_SerlComInpProxy_LkaCmdRollgCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_LkaCmdTqReqActvRaw_Val = 0U;
  Rte_SerlComInpProxy_LkaCmdTqValRaw_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg0C5_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg0C9_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg17D_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg180BusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg180BusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg182_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg1E9_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg1F1_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg1F5_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg214_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg232_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg337BusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg348BusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg348BusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg34ABusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg34ABusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg3F1_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg4D1_Val = 0U;
  Rte_SerlComInpProxy_LstRxnTiMsg500BusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_OutdAirTCorrdValMaskRaw_Val = 0U;
  Rte_SerlComInpProxy_OutdAirTCorrdValRaw_Val = 0U;
  Rte_SerlComInpProxy_OutdAirTCorrdValVldRaw_Val = 0U;
  Rte_SerlComInpProxy_PtCrkActvRaw_Val = 0U;
  Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRaw_Val = 0U;
  Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_RiWhlDstPlsCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_RiWhlDstTiStampRaw_Val = 0U;
  Rte_SerlComInpProxy_RiWhlDstVldRaw_Val = 0U;
  Rte_SerlComInpProxy_RiWhlRotlStsRstRaw_Val = 0U;
  Rte_SerlComInpProxy_RiWhlSeqNrRaw_Val = 0U;
  Rte_SerlComInpProxy_ShiftLvrPosnRaw_Val = 0U;
  Rte_SerlComInpProxy_ShiftLvrPosnVldRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerSysPrfmncModReqRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlAgReqActvRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlAgReqActvVldRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlAgReqProtnValRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlAgReqRollgCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlAgReqTarAgRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlFbReqActvProtnValRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlFbReqActvRaw_Val = 0U;
  Rte_SerlComInpProxy_SteerWhlFbReqActvRollgCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_SysBackUpPwrModEnaRaw_Val = 0U;
  Rte_SerlComInpProxy_SysBackUpPwrModRaw_Val = 0U;
  Rte_SerlComInpProxy_SysPwrModRaw_Val = 0U;
  Rte_SerlComInpProxy_TqOvrlAlvRollgCntrRaw_Val = 0U;
  Rte_SerlComInpProxy_TqOvrlCmdChksRaw_Val = 0U;
  Rte_SerlComInpProxy_TqOvrlDeltaTqCmdActvRaw_Val = 0U;
  Rte_SerlComInpProxy_TqOvrlDeltaTqCmdValRaw_Val = 0U;
  Rte_SerlComInpProxy_TracCtrlSysActvRaw_Val = 0U;
  Rte_SerlComInpProxy_TracCtrlSysEnaRaw_Val = 0U;
  Rte_SerlComInpProxy_VehDynCtrlSysStRaw_Val = 0U;
  Rte_SerlComInpProxy_VehDynOverUnderSteerVldRaw_Val = 0U;
  Rte_SerlComInpProxy_VehDynYawRateRaw_Val = 0U;
  Rte_SerlComInpProxy_VehDynYawRateVldRaw_Val = 0U;
  Rte_SerlComInpProxy_VehStabyEnhmtActvRaw_Val = 0U;
  Rte_SerlComInpProxy_VehStabyEnhmtLatARaw_Val = 0U;
  Rte_SerlComInpProxy_VehStabyEnhmtLatAVldRaw_Val = 0U;
  Rte_SerlComInpProxy_VehStabyEnhmtLgtALoReslRaw_Val = 0U;
  Rte_SerlComInpProxy_VehStabyEnhmtLgtALoReslVldRaw_Val = 0U;
  Rte_SerlComInpProxy_VehStabyEnhmtStsRaw_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val = 0U;
  Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val = 0U;
  Rte_SerlComInpProxy_WhlPlsPerRevRaw_Val = 0U;
  Rte_SerlComInpProxy_WhlRotlStsTiStampReslRaw_Val = 0U;
  Rte_SerlComOutpProxy_BusOffChassisExp_Logl = FALSE;
  Rte_SerlComOutpProxy_BusOffHiSpd_Logl = FALSE;
  Rte_CustDiagc_ThermLimFlgCntr_Val = 0U;

}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Task_10ms_Appl6
 * Priority: 61
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_10ms_Appl6) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_TASK_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  /* call runnable */
  ChkPt_10msAppl6Strt();

  /* call runnable */
  GMLANSdlPer1();

  /* call runnable */
  SerlComInpProxyPer1();

  /* call runnable */
  GmMsg0C5BusHiSpdPer1();

  /* call runnable */
  GmMsg0C9BusHiSpdPer1();

  /* call runnable */
  GmMsg1F1BusHiSpdPer1();

  /* call runnable */
  GmMsg348BusHiSpdPer1();

  /* call runnable */
  GmMsg348BusChassisExpPer1();

  /* call runnable */
  GmMsg34ABusHiSpdPer1();

  /* call runnable */
  GmMsg34ABusChassisExpPer1();

  /* call runnable */
  GmMsg1E9BusHiSpdPer1();

  /* call runnable */
  GmMsg17DBusHiSpdPer1();

  /* call runnable */
  GmMsg180BusHiSpdPer1();

  /* call runnable */
  GmMsg1F5BusHiSpdPer1();

  /* call runnable */
  GmMsg214BusHiSpdPer1();

  /* call runnable */
  GmMsg232BusHiSpdPer1();

  /* call runnable */
  GmMsg3F1BusHiSpdPer1();

  /* call runnable */
  GmMsg4D1BusHiSpdPer1();

  /* call runnable */
  GmMsg500BusHiSpdPer1();

  /* call runnable */
  GmMsg180BusChassisExpPer1();

  /* call runnable */
  GmMsg182BusChassisExpPer1();

  /* call runnable */
  GmMsg337BusChassisExpPer1();

  /* call runnable */
  GmMsg148BusHiSpdPer1();

  /* call runnable */
  GmMsg778BusHiSpdPer1();

  /* call runnable */
  GmMsg184BusHiSpdPer1();

  /* call runnable */
  GmMsg1CABusChassisExpPer1();

  /* call runnable */
  GmMsg335BusChassisExpPer1();

  /* call runnable */
  GmMsg1E5BusHiSpdPer1();

  /* call runnable */
  GmMsg1E5BusChassisExpPer1();

  /* call runnable */
  SerlComOutpProxyPer1();

  /* call runnable */
  GMLANSdlPer2();

  /* call runnable */
  CmnMfgSrvPer1();

  /* call runnable */
  PartNrPer1();

  /* call runnable */
  CustDiagcPer1();

  /* call runnable */
  DiagcMgrProxyAppl6Per1();

  /* call runnable */
  ChkPt_10msAppl6End();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_2ms_Appl6
 * Priority: 80
 * Schedule: FULL
 * Alarm:    Cycle Time 0.002 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_2ms_Appl6) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_TASK_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  /* call runnable */
  ChkPt_2msAppl6Strt();

  /* call runnable */
  FltInjPer1();

  /* call runnable */
  Xcp2msDaq();

  /* call runnable */
  ChkPt_2msAppl6End();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_Init_Appl6
 * Priority: 97
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Init_Appl6) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_TASK_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  /* call runnable */
  DiagcMgrProxyAppl6Init1();

  /* call runnable */
  SerlComInpProxyInit1();

  /* call runnable */
  SerlComOutpProxyInit1();

  /* call runnable */
  GmMsg0C5BusHiSpdInit1();

  /* call runnable */
  GmMsg180BusChassisExpInit1();

  /* call runnable */
  GmMsg180BusHiSpdInit1();

  /* call runnable */
  GmMsg182BusChassisExpInit1();

  /* call runnable */
  GmMsg214BusHiSpdInit1();

  /* call runnable */
  GmMsg337BusChassisExpInit1();

  /* call runnable */
  GmMsg500BusHiSpdInit1();

  /* call runnable */
  GmMsg148BusHiSpdInit1();

  /* call runnable */
  GmMsg778BusHiSpdInit1();

  /* call runnable */
  CmnMfgSrvInit1();

  /* call runnable */
  ProgMfgSrvInit1();

  /* call runnable */
  CDD_XcpIfInit1();

  /* call runnable */
  NxtrCalIdsInit1();

  /* call runnable */
  NxtrSwIdsInit1();

  /* call runnable */
  PartNrInit1();

  /* call runnable */
  CustDiagcInit1();

  /* call runnable */
  CmnMfgSrvIfInit1();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
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
