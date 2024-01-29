/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  ProgMfgSrv.c
 *        Config:  EPS.dpa
 *     SW-C Type:  ProgMfgSrv
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <ProgMfgSrv>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */

/* PRQA S 3109 EOF */
/* PRQA S 3112 EOF */
/* PRQA S 3197 EOF */
/* PRQA S 3198 EOF */
/* PRQA S 3199 EOF */
/* PRQA S 3201 EOF */
/* PRQA S 3203 EOF */
/* PRQA S 3205 EOF */
/* PRQA S 3206 EOF */
/* PRQA S 3218 EOF */
/* PRQA S 3229 EOF */
/* PRQA S 2002 EOF */
/* PRQA S 3334 EOF */
/* PRQA S 3417 EOF */
/* PRQA S 3426 EOF */
/* PRQA S 3453 EOF */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_ProgMfgSrv.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_ProgMfgSrv.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u8_10: Array with 10 element(s) of type uint8
 * Ary1D_u8_16: Array with 16 element(s) of type uint8
 * Ary1D_u8_17: Array with 17 element(s) of type uint8
 * Ary1D_u8_2: Array with 2 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_4: Array with 4 element(s) of type uint8
 * Ary1D_u8_7: Array with 7 element(s) of type uint8
 * Ary1D_u8_822: Array with 822 element(s) of type uint8
 * Ary1D_u8_9: Array with 9 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define ProgMfgSrv_START_SEC_CODE
#include "ProgMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ProgMfgSrvInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGmLoaIgnCntr_Oper(uint16 *GmLoaIgnCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
 *     Argument BasMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(const uint8 *BasMdlPartNrAlphaCod)
 *     Argument BasMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
 *     Argument BasMdlPartNr: uint8* is of type Ary1D_u8_4
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrWr_Oper(const uint8 *BasMdlPartNr)
 *     Argument BasMdlPartNr: uint8* is of type Ary1D_u8_4
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
 *     Argument CcaMfgTrakg: uint8* is of type Ary1D_u8_9
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakgWr_Oper(const uint8 *CcaMfgTrakg)
 *     Argument CcaMfgTrakg: uint8* is of type Ary1D_u8_9
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKeyWr_Oper(const uint8 *CtrlPidSeedKey)
 *     Argument CtrlPidSeedKey: uint8* is of type Ary1D_u8_10
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCustMfgEnaCntrWr_PortIf1_CustMfgEnaCntrZero
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
 *     Argument DataUniversalNrSysId: uint8* is of type Ary1D_u8_9
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysIdWr_Oper(const uint8 *DataUniversalNrSysId)
 *     Argument DataUniversalNrSysId: uint8* is of type Ary1D_u8_9
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
 *     Argument EcuId_Arg: uint8* is of type Ary1D_u8_16
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEcuIdWr_Oper(const uint8 *EcuId_Arg)
 *     Argument EcuId_Arg: uint8* is of type Ary1D_u8_16
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
 *     Argument EndMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod)
 *     Argument EndMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
 *     Argument EndMdlPartNr: uint8* is of type Ary1D_u8_4
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr)
 *     Argument EndMdlPartNr: uint8* is of type Ary1D_u8_4
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
 *     Argument NxtrMfgTrakg: uint8* is of type Ary1D_u8_7
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg)
 *     Argument NxtrMfgTrakg: uint8* is of type Ary1D_u8_7
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate)
 *     Argument ProgmDate: uint8* is of type Ary1D_u8_4
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
 *     Argument ProgmDate: uint8* is of type Ary1D_u8_4
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrProgmDateWr_PortIf1_OutOfRange
 *   Std_ReturnType Rte_Call_PartNrProgmSessionSeedKeyWr_Oper(const uint8 *ProgmSessionSeedKey)
 *     Argument ProgmSessionSeedKey: uint8* is of type Ary1D_u8_10
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Argument RepairShopCod: uint8* is of type Ary1D_u8_20
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
 *     Argument RepairShopCod: uint8* is of type Ary1D_u8_10
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
 *     Argument SecuBypAuthn_Arg: uint8* is of type Ary1D_u8_822
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
 *     Argument SecuBypAuthn_Arg: uint8* is of type Ary1D_u8_822
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
 *     Argument SysCodVersNr: uint8* is of type Ary1D_u8_2
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
 *     Argument SysCodVersNr: uint8* is of type Ary1D_u8_2
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName)
 *     Argument SysName: uint8* is of type Ary1D_u8_20
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName)
 *     Argument SysName: uint8* is of type Ary1D_u8_20
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData)
 *     Argument VinData: uint8* is of type Ary1D_u8_17
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData)
 *     Argument VinData: uint8* is of type Ary1D_u8_17
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ProgMfgSrvInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ProgMfgSrv_CODE) ProgMfgSrvInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ProgMfgSrvInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint16 Call_GetGmLoaIgnCntr_Oper_GmLoaIgnCntr_Arg = 0U;
  Ary1D_u8_2 Call_PartNrBasMdlPartNrAlphaCodRd_Oper_BasMdlPartNrAlphaCod = {
  0U, 0U
};
  Ary1D_u8_2 Call_PartNrBasMdlPartNrAlphaCodWr_Oper_BasMdlPartNrAlphaCod = {
  0U, 0U
};
  Ary1D_u8_4 Call_PartNrBasMdlPartNrRd_Oper_BasMdlPartNr = {
  0U, 0U, 0U, 0U
};
  Ary1D_u8_4 Call_PartNrBasMdlPartNrWr_Oper_BasMdlPartNr = {
  0U, 0U, 0U, 0U
};
  Ary1D_u8_9 Call_PartNrCcaMfgTrakgRd_Oper_CcaMfgTrakg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_9 Call_PartNrCcaMfgTrakgWr_Oper_CcaMfgTrakg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_10 Call_PartNrCtrlPidSeedKeyWr_Oper_CtrlPidSeedKey = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  uint8 Call_PartNrCustMfgEnaCntrRd_Oper_CustMfgEnaCntr = 0U;
  Ary1D_u8_9 Call_PartNrDataUniversalNrSysIdRd_Oper_DataUniversalNrSysId = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_9 Call_PartNrDataUniversalNrSysIdWr_Oper_DataUniversalNrSysId = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_16 Call_PartNrEcuIdRd_Oper_EcuId_Arg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_16 Call_PartNrEcuIdWr_Oper_EcuId_Arg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_2 Call_PartNrEndMdlPartNrAlphaCodRd_Oper_EndMdlPartNrAlphaCod = {
  0U, 0U
};
  Ary1D_u8_2 Call_PartNrEndMdlPartNrAlphaCodWr_Oper_EndMdlPartNrAlphaCod = {
  0U, 0U
};
  Ary1D_u8_4 Call_PartNrEndMdlPartNrRd_Oper_EndMdlPartNr = {
  0U, 0U, 0U, 0U
};
  Ary1D_u8_4 Call_PartNrEndMdlPartNrWr_Oper_EndMdlPartNr = {
  0U, 0U, 0U, 0U
};
  Ary1D_u8_7 Call_PartNrNxtrMfgTrakgRd_Oper_NxtrMfgTrakg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_7 Call_PartNrNxtrMfgTrakgWr_Oper_NxtrMfgTrakg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_4 Call_PartNrProgmDateRd_Oper_ProgmDate = {
  0U, 0U, 0U, 0U
};
  Ary1D_u8_4 Call_PartNrProgmDateWr_Oper_ProgmDate = {
  0U, 0U, 0U, 0U
};
  Ary1D_u8_10 Call_PartNrProgmSessionSeedKeyWr_Oper_ProgmSessionSeedKey = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_20 Call_PartNrRepairShopCodRd_Oper_RepairShopCod = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_10 Call_PartNrRepairShopCodWr_Oper_RepairShopCod = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_822 Call_PartNrSecuBypAuthnRd_Oper_SecuBypAuthn_Arg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_822 Call_PartNrSecuBypAuthnWr_Oper_SecuBypAuthn_Arg = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_2 Call_PartNrSysCodVersNrRd_Oper_SysCodVersNr = {
  0U, 0U
};
  Ary1D_u8_2 Call_PartNrSysCodVersNrWr_Oper_SysCodVersNr = {
  0U, 0U
};
  Ary1D_u8_20 Call_PartNrSysNameRd_Oper_SysName = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_20 Call_PartNrSysNameWr_Oper_SysName = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_17 Call_PartNrVinDataRd_Oper_VinData = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
  Ary1D_u8_17 Call_PartNrVinDataWr_Oper_VinData = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_ProgMfgSrv_Rte_Call_GetGmLoaIgnCntr_Oper(&Call_GetGmLoaIgnCntr_Oper_GmLoaIgnCntr_Arg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(Call_PartNrBasMdlPartNrAlphaCodRd_Oper_BasMdlPartNrAlphaCod);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(Call_PartNrBasMdlPartNrAlphaCodWr_Oper_BasMdlPartNrAlphaCod);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrRd_Oper(Call_PartNrBasMdlPartNrRd_Oper_BasMdlPartNr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrBasMdlPartNrWr_Oper(Call_PartNrBasMdlPartNrWr_Oper_BasMdlPartNr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrCcaMfgTrakgRd_Oper(Call_PartNrCcaMfgTrakgRd_Oper_CcaMfgTrakg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrCcaMfgTrakgWr_Oper(Call_PartNrCcaMfgTrakgWr_Oper_CcaMfgTrakg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrCtrlPidSeedKeyWr_Oper(Call_PartNrCtrlPidSeedKeyWr_Oper_CtrlPidSeedKey);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrCustMfgEnaCntrRd_Oper(&Call_PartNrCustMfgEnaCntrRd_Oper_CustMfgEnaCntr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrCustMfgEnaCntrWr_Oper(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PartNrCustMfgEnaCntrWr_PortIf1_CustMfgEnaCntrZero:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(Call_PartNrDataUniversalNrSysIdRd_Oper_DataUniversalNrSysId);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrDataUniversalNrSysIdWr_Oper(Call_PartNrDataUniversalNrSysIdWr_Oper_DataUniversalNrSysId);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrEcuIdRd_Oper(Call_PartNrEcuIdRd_Oper_EcuId_Arg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrEcuIdWr_Oper(Call_PartNrEcuIdWr_Oper_EcuId_Arg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(Call_PartNrEndMdlPartNrAlphaCodRd_Oper_EndMdlPartNrAlphaCod);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(Call_PartNrEndMdlPartNrAlphaCodWr_Oper_EndMdlPartNrAlphaCod);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrRd_Oper(Call_PartNrEndMdlPartNrRd_Oper_EndMdlPartNr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrEndMdlPartNrWr_Oper(Call_PartNrEndMdlPartNrWr_Oper_EndMdlPartNr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrNxtrMfgTrakgRd_Oper(Call_PartNrNxtrMfgTrakgRd_Oper_NxtrMfgTrakg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrNxtrMfgTrakgWr_Oper(Call_PartNrNxtrMfgTrakgWr_Oper_NxtrMfgTrakg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrProgmDateRd_Oper(Call_PartNrProgmDateRd_Oper_ProgmDate);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrProgmDateWr_Oper(Call_PartNrProgmDateWr_Oper_ProgmDate);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PartNrProgmDateWr_PortIf1_OutOfRange:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrProgmSessionSeedKeyWr_Oper(Call_PartNrProgmSessionSeedKeyWr_Oper_ProgmSessionSeedKey);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrRepairShopCodRd_Oper(Call_PartNrRepairShopCodRd_Oper_RepairShopCod);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrRepairShopCodWr_Oper(Call_PartNrRepairShopCodWr_Oper_RepairShopCod);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrSecuBypAuthnRd_Oper(Call_PartNrSecuBypAuthnRd_Oper_SecuBypAuthn_Arg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrSecuBypAuthnWr_Oper(Call_PartNrSecuBypAuthnWr_Oper_SecuBypAuthn_Arg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrSysCodVersNrRd_Oper(Call_PartNrSysCodVersNrRd_Oper_SysCodVersNr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrSysCodVersNrWr_Oper(Call_PartNrSysCodVersNrWr_Oper_SysCodVersNr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrSysNameRd_Oper(Call_PartNrSysNameRd_Oper_SysName);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrSysNameWr_Oper(Call_PartNrSysNameWr_Oper_SysName);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrVinDataRd_Oper(Call_PartNrVinDataRd_Oper_VinData);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_PartNrVinDataWr_Oper(Call_PartNrVinDataWr_Oper_VinData);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ProgMfgSrv_Rte_Call_SetGmLoaIgnCntr_Oper(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define ProgMfgSrv_STOP_SEC_CODE
#include "ProgMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
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

*/
