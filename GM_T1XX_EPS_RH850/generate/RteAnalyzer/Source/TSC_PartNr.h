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
 *          File:  TSC_PartNr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_PartNr_Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data);
Std_ReturnType TSC_PartNr_Rte_Read_SysPwrModRun_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_PartNr_Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data);
Std_ReturnType TSC_PartNr_Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data);
Std_ReturnType TSC_PartNr_Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data);

/** Client server interfaces */
Std_ReturnType TSC_PartNr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Service interfaces */
Std_ReturnType TSC_PartNr_Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrEcuId_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrProgmDate_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrSysName_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_PartNr_Rte_Call_PartNrVinData_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
Ary1D_u8_14 * TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(void);

/** SW-C local Calibration Parameters */
uint8  TSC_PartNr_Rte_CData_PartNrCalProgdStsDft(void);
uint8  TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft(void);
Ary1D_u8_6 * TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(void);
Ary1D_u8_9 * TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(void);
Ary1D_u8_10 * TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(void);
Ary1D_u8_9 * TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(void);
Ary1D_u8_6 * TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(void);
Ary1D_u8_7 * TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(void);
Ary1D_u8_4 * TSC_PartNr_Rte_CData_PartNrProgmDateDft(void);
Ary1D_u8_10 * TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(void);
Ary1D_u8_20 * TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(void);
Ary1D_u8_2 * TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(void);
Ary1D_u8_20 * TSC_PartNr_Rte_CData_PartNrSysNameDft(void);
Ary1D_u8_17 * TSC_PartNr_Rte_CData_PartNrVinDataDft(void);

/** Per Instance Memories */
uint8 *TSC_PartNr_Rte_Pim_PartNrCalProgdSts(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr(void);
boolean *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrEcuId(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrProgmDate(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrRepairShopCod(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrSysName(void);
uint8 *TSC_PartNr_Rte_Pim_PartNrVinData(void);



