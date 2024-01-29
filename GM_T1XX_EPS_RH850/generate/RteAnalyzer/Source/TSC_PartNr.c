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
 *          File:  TSC_PartNr.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_PartNr.h"
#include "TSC_PartNr.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables









Std_ReturnType TSC_PartNr_Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data)
{
  return Rte_Write_CustMfgEnSt_Val(data);
}





     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrEcuId_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrEcuId_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_PartNr_Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
{
  return Rte_Read_GmSysPwrMod_Val(data);
}

Std_ReturnType TSC_PartNr_Rte_Read_SysPwrModRun_Logl(boolean *data)
{
  return Rte_Read_SysPwrModRun_Logl(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_PartNr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrProgmDate_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrProgmDate_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrSysName_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrSysName_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_PartNr_Rte_Call_PartNrVinData_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_PartNrVinData_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables





Ary1D_u8_14 * TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(void)
{
  return (Ary1D_u8_14 *) Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D();
}

uint8  TSC_PartNr_Rte_CData_PartNrCalProgdStsDft(void)
{
  return (uint8 ) Rte_CData_PartNrCalProgdStsDft();
}
uint8  TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft(void)
{
  return (uint8 ) Rte_CData_PartNrCustMfgEnaCntrDft();
}
Ary1D_u8_6 * TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(void)
{
  return (Ary1D_u8_6 *) Rte_CData_PartNrBasMdlPartNrDft();
}
Ary1D_u8_9 * TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(void)
{
  return (Ary1D_u8_9 *) Rte_CData_PartNrCcaMfgTrakgDft();
}
Ary1D_u8_10 * TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(void)
{
  return (Ary1D_u8_10 *) Rte_CData_PartNrCtrlPidSeedKeyDft();
}
Ary1D_u8_9 * TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(void)
{
  return (Ary1D_u8_9 *) Rte_CData_PartNrDataUniversalNrSysIdDft();
}
Ary1D_u8_6 * TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(void)
{
  return (Ary1D_u8_6 *) Rte_CData_PartNrEndMdlPartNrDft();
}
Ary1D_u8_7 * TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(void)
{
  return (Ary1D_u8_7 *) Rte_CData_PartNrNxtrMfgTrakgDft();
}
Ary1D_u8_4 * TSC_PartNr_Rte_CData_PartNrProgmDateDft(void)
{
  return (Ary1D_u8_4 *) Rte_CData_PartNrProgmDateDft();
}
Ary1D_u8_10 * TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(void)
{
  return (Ary1D_u8_10 *) Rte_CData_PartNrProgmSessionSeedKeyDft();
}
Ary1D_u8_20 * TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(void)
{
  return (Ary1D_u8_20 *) Rte_CData_PartNrRepairShopCodDft();
}
Ary1D_u8_2 * TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(void)
{
  return (Ary1D_u8_2 *) Rte_CData_PartNrSysCodVersNrDft();
}
Ary1D_u8_20 * TSC_PartNr_Rte_CData_PartNrSysNameDft(void)
{
  return (Ary1D_u8_20 *) Rte_CData_PartNrSysNameDft();
}
Ary1D_u8_17 * TSC_PartNr_Rte_CData_PartNrVinDataDft(void)
{
  return (Ary1D_u8_17 *) Rte_CData_PartNrVinDataDft();
}

     /* PartNr */
      /* PartNr */

/** Per Instance Memories */
uint8 *TSC_PartNr_Rte_Pim_PartNrCalProgdSts(void)
{
  return Rte_Pim_PartNrCalProgdSts();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr(void)
{
  return Rte_Pim_PartNrCustMfgEnaCntr();
}
boolean *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun(void)
{
  return Rte_Pim_PartNrPrevSysPwrModRun();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(void)
{
  return Rte_Pim_PartNrBasMdlPartNr();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(void)
{
  return Rte_Pim_PartNrCcaMfgTrakg();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(void)
{
  return Rte_Pim_PartNrCtrlPidSeedKey();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(void)
{
  return Rte_Pim_PartNrDataUniversalNrSysId();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrEcuId(void)
{
  return Rte_Pim_PartNrEcuId();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(void)
{
  return Rte_Pim_PartNrEndMdlPartNr();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(void)
{
  return Rte_Pim_PartNrNxtrMfgTrakg();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrProgmDate(void)
{
  return Rte_Pim_PartNrProgmDate();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(void)
{
  return Rte_Pim_PartNrProgmSessionSeedKey();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrRepairShopCod(void)
{
  return Rte_Pim_PartNrRepairShopCod();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(void)
{
  return Rte_Pim_PartNrSecuBypAuthn();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(void)
{
  return Rte_Pim_PartNrSysCodVersNr();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrSysName(void)
{
  return Rte_Pim_PartNrSysName();
}
uint8 *TSC_PartNr_Rte_Pim_PartNrVinData(void)
{
  return Rte_Pim_PartNrVinData();
}


