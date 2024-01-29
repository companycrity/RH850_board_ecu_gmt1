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
 *          File:  TSC_CustDiagc.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CustDiagc.h"
#include "TSC_CustDiagc.h"








Std_ReturnType TSC_CustDiagc_Rte_Read_BattVltg_Val(float32 *data)
{
  return Rte_Read_BattVltg_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_EcuTFild_Val(float32 *data)
{
  return Rte_Read_EcuTFild_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_EngSpd_Val(float32 *data)
{
  return Rte_Read_EngSpd_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_MissMsg0C9_Logl(boolean *data)
{
  return Rte_Read_MissMsg0C9_Logl(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_ThermLimFlgCntr_Val(uint8 *data)
{
  return Rte_Read_ThermLimFlgCntr_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_ApaSt_Val(uint8 *data)
{
  return Rte_Read_ApaSt_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_SteerWhlAgReqTarAg_Val(float32 *data)
{
  return Rte_Read_SteerWhlAgReqTarAg_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
{
  return Rte_Read_MotCurrPeakEstimd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_MotCurrDaxCmd_Val(float32 *data)
{
  return Rte_Read_MotCurrDaxCmd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_StrtStopSt_Val(uint8 *data)
{
  return Rte_Read_StrtStopSt_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_LkaCmd_Val(float32 *data)
{
  return Rte_Read_LkaCmd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_LkaSt_Val(uint8 *data)
{
  return Rte_Read_LkaSt_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_CustDiagc_Rte_Call_GetNtcActv_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
{
  return Rte_Call_GetNtcActv_Oper(NtcNr_Arg, NtcActv_Arg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
{
  return Rte_Call_GetNtcSts_Oper(NtcNr_Arg, NtcInfoSts_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_MotTqCmd_Val(float32 *data)
{
  return Rte_Read_MotTqCmd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_PinionAg_Val(float32 *data)
{
  return Rte_Read_PinionAg_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
{
  return Rte_Read_GmSysPwrMod_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_MissMsg1F1_Logl(boolean *data)
{
  return Rte_Read_MissMsg1F1_Logl(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_CustDiagc_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CustDiagc_Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_CtrlrTRng_Val(uint8 *data)
{
  return Rte_Read_CtrlrTRng_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_CustMfgEnaSt_Val(MfgEnaSt1 *data)
{
  return Rte_Read_CustMfgEnaSt_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_DesRtIdx_Val(uint8 *data)
{
  return Rte_Read_DesRtIdx_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_EngRunActv_Logl(boolean *data)
{
  return Rte_Read_EngRunActv_Logl(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgCcwDetd_Logl(boolean *data)
{
  return Rte_Read_HwAgCcwDetd_Logl(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgCwDetd_Logl(boolean *data)
{
  return Rte_Read_HwAgCwDetd_Logl(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgEotCcw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCcw_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgEotCw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCw_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgTrimPrfmd_Logl(boolean *data)
{
  return Rte_Read_HwAgTrimPrfmd_Logl(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_HwTqIdptSig_Val(uint8 *data)
{
  return Rte_Read_HwTqIdptSig_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_PinionAgConf_Val(float32 *data)
{
  return Rte_Read_PinionAgConf_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_SysPwrMod_Val(GmSysPwrMod1 *data)
{
  return Rte_Read_SysPwrMod_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_SysSt_Val(SysSt1 *data)
{
  return Rte_Read_SysSt_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_VltgRng_Val(uint8 *data)
{
  return Rte_Read_VltgRng_Val(data);
}




Std_ReturnType TSC_CustDiagc_Rte_Write_MfgOvrlDi_Logl(boolean data)
{
  return Rte_Write_MfgOvrlDi_Logl(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Write_SerlComDi_Logl(boolean data)
{
  return Rte_Write_SerlComDi_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_CustDiagc_Rte_Call_ClrAllDiagc_Oper(void)
{
  return Rte_Call_ClrAllDiagc_Oper();
}
Std_ReturnType TSC_CustDiagc_Rte_Call_ClrHwAgTrimVal_Oper(void)
{
  return Rte_Call_ClrHwAgTrimVal_Oper();
}
Std_ReturnType TSC_CustDiagc_Rte_Call_ClrTrigStsAry_Oper(void)
{
  return Rte_Call_ClrTrigStsAry_Oper();
}
Std_ReturnType TSC_CustDiagc_Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt)
{
  return Rte_Call_GetGpioMcuEna_Oper(PinSt);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, uint32 *BufPtr_Arg)
{
  return Rte_Call_GetSigStcHlthData_Oper(SigId_Arg, BufPtr_Arg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_GmFctDiReq_Oper(void)
{
  return Rte_Call_GmFctDiReq_Oper();
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
{
  return Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(BasMdlPartNrAlphaCod);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
{
  return Rte_Call_PartNrBasMdlPartNrRd_Oper(BasMdlPartNr);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCalProgdStsRd_Oper(uint8 *CalProgdSts)
{
  return Rte_Call_PartNrCalProgdStsRd_Oper(CalProgdSts);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCalProgdStsWr_Oper(uint8 CalProgdSts)
{
  return Rte_Call_PartNrCalProgdStsWr_Oper(CalProgdSts);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
{
  return Rte_Call_PartNrCcaMfgTrakgRd_Oper(CcaMfgTrakg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCmpdVehPartnProdtStructRd_Oper(uint8 *CmpdVehPartnProdtStruct)
{
  return Rte_Call_PartNrCmpdVehPartnProdtStructRd_Oper(CmpdVehPartnProdtStruct);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidKeyChk_Oper(const uint8 *CtrlPidKey)
{
  return Rte_Call_PartNrCtrlPidKeyChk_Oper(CtrlPidKey);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidKeyWr_Oper(const uint8 *CtrlPidKey)
{
  return Rte_Call_PartNrCtrlPidKeyWr_Oper(CtrlPidKey);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidSeedRd_Oper(uint8 *CtrlPidSeed)
{
  return Rte_Call_PartNrCtrlPidSeedRd_Oper(CtrlPidSeed);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte)
{
  return Rte_Call_PartNrCtrlPidSeedUpprByteWr_Oper(CtrlPidSeedUpprByte);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
{
  return Rte_Call_PartNrCustMfgEnaCntrRd_Oper(CustMfgEnaCntr);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
{
  return Rte_Call_PartNrCustMfgEnaCntrWr_Oper(CustMfgEnaCntr);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
{
  return Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(DataUniversalNrSysId);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
{
  return Rte_Call_PartNrEcuIdRd_Oper(EcuId_Arg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
{
  return Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(EndMdlPartNrAlphaCod);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod)
{
  return Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(EndMdlPartNrAlphaCod);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
{
  return Rte_Call_PartNrEndMdlPartNrRd_Oper(EndMdlPartNr);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr)
{
  return Rte_Call_PartNrEndMdlPartNrWr_Oper(EndMdlPartNr);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrGmLanIdRd_Oper(uint8 *GmLanId)
{
  return Rte_Call_PartNrGmLanIdRd_Oper(GmLanId);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrLstRepairShopCodRd_Oper(uint8 *RepairShopCod)
{
  return Rte_Call_PartNrLstRepairShopCodRd_Oper(RepairShopCod);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
{
  return Rte_Call_PartNrNxtrMfgTrakgRd_Oper(NxtrMfgTrakg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg)
{
  return Rte_Call_PartNrNxtrMfgTrakgWr_Oper(NxtrMfgTrakg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate)
{
  return Rte_Call_PartNrProgmDateRd_Oper(ProgmDate);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
{
  return Rte_Call_PartNrProgmDateWr_Oper(ProgmDate);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmSessionKeyChk_Oper(const uint8 *ProgmSessionKey)
{
  return Rte_Call_PartNrProgmSessionKeyChk_Oper(ProgmSessionKey);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmSessionSeedRd_Oper(uint8 *ProgmSessionSeed)
{
  return Rte_Call_PartNrProgmSessionSeedRd_Oper(ProgmSessionSeed);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
{
  return Rte_Call_PartNrRepairShopCodRd_Oper(RepairShopCod);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
{
  return Rte_Call_PartNrRepairShopCodWr_Oper(RepairShopCod);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
{
  return Rte_Call_PartNrSecuBypAuthnRd_Oper(SecuBypAuthn_Arg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
{
  return Rte_Call_PartNrSecuBypAuthnWr_Oper(SecuBypAuthn_Arg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
{
  return Rte_Call_PartNrSysCodVersNrRd_Oper(SysCodVersNr);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
{
  return Rte_Call_PartNrSysCodVersNrWr_Oper(SysCodVersNr);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName)
{
  return Rte_Call_PartNrSysNameRd_Oper(SysName);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName)
{
  return Rte_Call_PartNrSysNameWr_Oper(SysName);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData)
{
  return Rte_Call_PartNrVinDataRd_Oper(VinData);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData)
{
  return Rte_Call_PartNrVinDataWr_Oper(VinData);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg)
{
  return Rte_Call_RtnMaxHwAgCwAndCcw_Oper(HwAgCcwMax_Arg, HwAgCwMax_Arg);
}
Std_ReturnType TSC_CustDiagc_Rte_Call_UpdHwAgTrimVal_Oper(uint8 *UpdHwAgTrimValSrvResp_Arg)
{
  return Rte_Call_UpdHwAgTrimVal_Oper(UpdHwAgTrimValSrvResp_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CustDiagc_Rte_Read_GmFctDiSts_Val(GmFctDiArbnSts1 *data)
{
  return Rte_Read_GmFctDiSts_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Read_SysStReqEnaOvrdNxtr_Logl(boolean *data)
{
  return Rte_Read_SysStReqEnaOvrdNxtr_Logl(data);
}




Std_ReturnType TSC_CustDiagc_Rte_Write_GmIgnCntr_Val(uint16 data)
{
  return Rte_Write_GmIgnCntr_Val(data);
}

Std_ReturnType TSC_CustDiagc_Rte_Write_SysStReqEnaOvrdCombd_Logl(boolean data)
{
  return Rte_Write_SysStReqEnaOvrdCombd_Logl(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_CustDiagc_Rte_Prm_EotLrngRackTrvlMin_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngRackTrvlMin_Val();
}
boolean  TSC_CustDiagc_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrApaMfgEna_Logl();
}
boolean  TSC_CustDiagc_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrEscMfgEna_Logl();
}
boolean  TSC_CustDiagc_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
}
boolean  TSC_CustDiagc_Rte_Prm_GmStrtStopEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmStrtStopEna_Logl();
}
boolean  TSC_CustDiagc_Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl(void)
{
  return (boolean ) Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl();
}
boolean  TSC_CustDiagc_Rte_Prm_PullCmpActvEna_Logl(void)
{
  return (boolean ) Rte_Prm_PullCmpActvEna_Logl();
}
boolean  TSC_CustDiagc_Rte_Prm_WhlImbRejctnFctEna_Logl(void)
{
  return (boolean ) Rte_Prm_WhlImbRejctnFctEna_Logl();
}
Ary1D_u32_512 * TSC_CustDiagc_Rte_Prm_DiagcMgrFltResp_Ary1D(void)
{
  return (Ary1D_u32_512 *) Rte_Prm_DiagcMgrFltResp_Ary1D();
}


     /* CustDiagc */
      /* CustDiagc */

/** Per Instance Memories */
uint32 *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidSeedKeyTmr(void)
{
  return Rte_Pim_CustDiagcCtrlPidSeedKeyTmr();
}
uint32 *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionSeedKeyTmr(void)
{
  return Rte_Pim_CustDiagcProgmSessionSeedKeyTmr();
}
uint32 *TSC_CustDiagc_Rte_Pim_DtcNr(void)
{
  return Rte_Pim_DtcNr();
}
uint32 *TSC_CustDiagc_Rte_Pim_MsgCntxt(void)
{
  return Rte_Pim_MsgCntxt();
}
uint16 *TSC_CustDiagc_Rte_Pim_GmIgnCntr(void)
{
  return Rte_Pim_GmIgnCntr();
}
uint8 *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidKeyAtmptCntr(void)
{
  return Rte_Pim_CustDiagcCtrlPidKeyAtmptCntr();
}
uint8 *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionKeyAtmptCntr(void)
{
  return Rte_Pim_CustDiagcProgmSessionKeyAtmptCntr();
}
GmFctDiArbnSts1 *TSC_CustDiagc_Rte_Pim_PrevGmFctDiArbnSts(void)
{
  return Rte_Pim_PrevGmFctDiArbnSts();
}
uint8 *TSC_CustDiagc_Rte_Pim_Srv12LoopCntr(void)
{
  return Rte_Pim_Srv12LoopCntr();
}
uint8 *TSC_CustDiagc_Rte_Pim_SrvCntxt(void)
{
  return Rte_Pim_SrvCntxt();
}
boolean *TSC_CustDiagc_Rte_Pim_CpidActv(void)
{
  return Rte_Pim_CpidActv();
}
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidSeedReqd(void)
{
  return Rte_Pim_CustDiagcCtrlPidSeedReqd();
}
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidSeedTmrActvd(void)
{
  return Rte_Pim_CustDiagcCtrlPidSeedTmrActvd();
}
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionSeedReqd(void)
{
  return Rte_Pim_CustDiagcProgmSessionSeedReqd();
}
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionSeedTmrActvd(void)
{
  return Rte_Pim_CustDiagcProgmSessionSeedTmrActvd();
}
boolean *TSC_CustDiagc_Rte_Pim_GmDiCtrlPidTstRunng(void)
{
  return Rte_Pim_GmDiCtrlPidTstRunng();
}
boolean *TSC_CustDiagc_Rte_Pim_PrevSysPwrModRun(void)
{
  return Rte_Pim_PrevSysPwrModRun();
}
boolean *TSC_CustDiagc_Rte_Pim_SysStReqEnaOvrdCust(void)
{
  return Rte_Pim_SysStReqEnaOvrdCust();
}


