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
 *          File:  TSC_ProgMfgSrv.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_ProgMfgSrv.h"
#include "TSC_ProgMfgSrv.h"















     // Client Server Interfaces:
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_GetGmLoaIgnCntr_Oper(uint16 *GmLoaIgnCntr_Arg)
{
  return Rte_Call_GetGmLoaIgnCntr_Oper(GmLoaIgnCntr_Arg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
{
  return Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(BasMdlPartNrAlphaCod);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(const uint8 *BasMdlPartNrAlphaCod)
{
  return Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(BasMdlPartNrAlphaCod);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
{
  return Rte_Call_PartNrBasMdlPartNrRd_Oper(BasMdlPartNr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrWr_Oper(const uint8 *BasMdlPartNr)
{
  return Rte_Call_PartNrBasMdlPartNrWr_Oper(BasMdlPartNr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
{
  return Rte_Call_PartNrCcaMfgTrakgRd_Oper(CcaMfgTrakg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCcaMfgTrakgWr_Oper(const uint8 *CcaMfgTrakg)
{
  return Rte_Call_PartNrCcaMfgTrakgWr_Oper(CcaMfgTrakg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCtrlPidSeedKeyWr_Oper(const uint8 *CtrlPidSeedKey)
{
  return Rte_Call_PartNrCtrlPidSeedKeyWr_Oper(CtrlPidSeedKey);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
{
  return Rte_Call_PartNrCustMfgEnaCntrRd_Oper(CustMfgEnaCntr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
{
  return Rte_Call_PartNrCustMfgEnaCntrWr_Oper(CustMfgEnaCntr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
{
  return Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(DataUniversalNrSysId);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrDataUniversalNrSysIdWr_Oper(const uint8 *DataUniversalNrSysId)
{
  return Rte_Call_PartNrDataUniversalNrSysIdWr_Oper(DataUniversalNrSysId);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
{
  return Rte_Call_PartNrEcuIdRd_Oper(EcuId_Arg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEcuIdWr_Oper(const uint8 *EcuId_Arg)
{
  return Rte_Call_PartNrEcuIdWr_Oper(EcuId_Arg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
{
  return Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(EndMdlPartNrAlphaCod);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod)
{
  return Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(EndMdlPartNrAlphaCod);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
{
  return Rte_Call_PartNrEndMdlPartNrRd_Oper(EndMdlPartNr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr)
{
  return Rte_Call_PartNrEndMdlPartNrWr_Oper(EndMdlPartNr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
{
  return Rte_Call_PartNrNxtrMfgTrakgRd_Oper(NxtrMfgTrakg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg)
{
  return Rte_Call_PartNrNxtrMfgTrakgWr_Oper(NxtrMfgTrakg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate)
{
  return Rte_Call_PartNrProgmDateRd_Oper(ProgmDate);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
{
  return Rte_Call_PartNrProgmDateWr_Oper(ProgmDate);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrProgmSessionSeedKeyWr_Oper(const uint8 *ProgmSessionSeedKey)
{
  return Rte_Call_PartNrProgmSessionSeedKeyWr_Oper(ProgmSessionSeedKey);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
{
  return Rte_Call_PartNrRepairShopCodRd_Oper(RepairShopCod);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
{
  return Rte_Call_PartNrRepairShopCodWr_Oper(RepairShopCod);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
{
  return Rte_Call_PartNrSecuBypAuthnRd_Oper(SecuBypAuthn_Arg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
{
  return Rte_Call_PartNrSecuBypAuthnWr_Oper(SecuBypAuthn_Arg);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
{
  return Rte_Call_PartNrSysCodVersNrRd_Oper(SysCodVersNr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
{
  return Rte_Call_PartNrSysCodVersNrWr_Oper(SysCodVersNr);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName)
{
  return Rte_Call_PartNrSysNameRd_Oper(SysName);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName)
{
  return Rte_Call_PartNrSysNameWr_Oper(SysName);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData)
{
  return Rte_Call_PartNrVinDataRd_Oper(VinData);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData)
{
  return Rte_Call_PartNrVinDataWr_Oper(VinData);
}
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg)
{
  return Rte_Call_SetGmLoaIgnCntr_Oper(GmLoaIgnCntr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* ProgMfgSrv */
      /* ProgMfgSrv */


