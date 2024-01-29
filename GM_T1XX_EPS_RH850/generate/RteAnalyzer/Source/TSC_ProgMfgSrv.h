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
 *          File:  TSC_ProgMfgSrv.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Client server interfaces */
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_GetGmLoaIgnCntr_Oper(uint16 *GmLoaIgnCntr_Arg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(const uint8 *BasMdlPartNrAlphaCod);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrWr_Oper(const uint8 *BasMdlPartNr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCcaMfgTrakgWr_Oper(const uint8 *CcaMfgTrakg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCtrlPidSeedKeyWr_Oper(const uint8 *CtrlPidSeedKey);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrDataUniversalNrSysIdWr_Oper(const uint8 *DataUniversalNrSysId);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEcuIdWr_Oper(const uint8 *EcuId_Arg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrProgmSessionSeedKeyWr_Oper(const uint8 *ProgmSessionSeedKey);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData);
Std_ReturnType TSC_ProgMfgSrv_Rte_Call_SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg);




