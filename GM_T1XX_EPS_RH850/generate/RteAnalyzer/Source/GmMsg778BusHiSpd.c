/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg778BusHiSpd.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmMsg778BusHiSpd
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg778BusHiSpd>
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

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Dem_DTCStatusMaskType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_GmMsg778BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmMsg778BusHiSpd.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void GmMsg778BusHiSpd_TestDefines(void);


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
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u32_40: Array with 40 element(s) of type uint32
 * Ary1D_u8_40: Array with 40 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_TrigTmr(void)
 *   uint8 *Rte_Pim_ActvEveId(void)
 *   uint8 *Rte_Pim_EveCnt(void)
 *   boolean *Rte_Pim_TrigActv(void)
 *   uint32 *Rte_Pim_DtcMap(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_40
 *   uint8 *Rte_Pim_DtcTrigStsAry(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_40
 *   uint8 *Rte_Pim_EveMap(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_40
 *
 *********************************************************************************************************************/


#define GmMsg778BusHiSpd_START_SEC_CODE
#include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CallBackDtcStsChgd
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DTCStatusChanged> of PortPrototype <CallBackDtcStsChgd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CallbackDTCStatusChange_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CallBackDtcStsChgd_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, GmMsg778BusHiSpd_CODE) CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CallBackDtcStsChgd (returns application error)
 *********************************************************************************************************************/

  uint32 TrigTmr;
  uint8 ActvEveId;
  uint8 EveCnt;
  boolean TrigActv;
  Ary1D_u32_40 DtcMap;
  Ary1D_u8_40 DtcTrigStsAry;
  Ary1D_u8_40 EveMap;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TrigTmr = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr() = TrigTmr;
  ActvEveId = *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId() = ActvEveId;
  EveCnt = *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt() = EveCnt;
  TrigActv = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv() = TrigActv;

  (void)memcpy(DtcMap, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), sizeof(Ary1D_u32_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), DtcMap, sizeof(Ary1D_u32_40));


  (void)memcpy(DtcTrigStsAry, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), DtcTrigStsAry, sizeof(Ary1D_u8_40));


  (void)memcpy(EveMap, TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), EveMap, sizeof(Ary1D_u8_40));


  GmMsg778BusHiSpd_TestDefines();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrTrigStsAry_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrTrigStsAry>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrTrigStsAry_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrTrigStsAry_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg778BusHiSpd_CODE) ClrTrigStsAry_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrTrigStsAry_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  SysSt1 Read_SysSt_Val;

  uint32 TrigTmr;
  uint8 ActvEveId;
  uint8 EveCnt;
  boolean TrigActv;
  Ary1D_u32_40 DtcMap;
  Ary1D_u8_40 DtcTrigStsAry;
  Ary1D_u8_40 EveMap;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TrigTmr = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr() = TrigTmr;
  ActvEveId = *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId() = ActvEveId;
  EveCnt = *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt() = EveCnt;
  TrigActv = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv() = TrigActv;

  (void)memcpy(DtcMap, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), sizeof(Ary1D_u32_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), DtcMap, sizeof(Ary1D_u32_40));


  (void)memcpy(DtcTrigStsAry, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), DtcTrigStsAry, sizeof(Ary1D_u8_40));


  (void)memcpy(EveMap, TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), EveMap, sizeof(Ary1D_u8_40));


  fct_status = TSC_GmMsg778BusHiSpd_Rte_Read_SysSt_Val(&Read_SysSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_CodSupported_Val(Rte_InitValue_CodSupported_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_CurrSts_Val(Rte_InitValue_CurrSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcFailrTyp_Val(Rte_InitValue_DtcFailrTyp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcFltTyp_Val(Rte_InitValue_DtcFltTyp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcNr_Val(Rte_InitValue_DtcNr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcSrc_Val(Rte_InitValue_DtcSrc_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcTrig_Val(Rte_InitValue_DtcTrig_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_HistSts_Val(Rte_InitValue_HistSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildCodClrdSts_Val(Rte_InitValue_TstFaildCodClrdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildPwrUpSts_Val(Rte_InitValue_TstFaildPwrUpSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdCodClrdSts_Val(Rte_InitValue_TstNotPassdCodClrdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdPwrUpSts_Val(Rte_InitValue_TstNotPassdPwrUpSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_WarnIndcrReqdSts_Val(Rte_InitValue_WarnIndcrReqdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg778BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DtcTrigStsAry_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg778BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg778BusHiSpdInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  SysSt1 Read_SysSt_Val;

  uint32 TrigTmr;
  uint8 ActvEveId;
  uint8 EveCnt;
  boolean TrigActv;
  Ary1D_u32_40 DtcMap;
  Ary1D_u8_40 DtcTrigStsAry;
  Ary1D_u8_40 EveMap;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TrigTmr = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr() = TrigTmr;
  ActvEveId = *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId() = ActvEveId;
  EveCnt = *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt() = EveCnt;
  TrigActv = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv() = TrigActv;

  (void)memcpy(DtcMap, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), sizeof(Ary1D_u32_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), DtcMap, sizeof(Ary1D_u32_40));


  (void)memcpy(DtcTrigStsAry, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), DtcTrigStsAry, sizeof(Ary1D_u8_40));


  (void)memcpy(EveMap, TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), EveMap, sizeof(Ary1D_u8_40));


  fct_status = TSC_GmMsg778BusHiSpd_Rte_Read_SysSt_Val(&Read_SysSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_CodSupported_Val(Rte_InitValue_CodSupported_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_CurrSts_Val(Rte_InitValue_CurrSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcFailrTyp_Val(Rte_InitValue_DtcFailrTyp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcFltTyp_Val(Rte_InitValue_DtcFltTyp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcNr_Val(Rte_InitValue_DtcNr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcSrc_Val(Rte_InitValue_DtcSrc_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcTrig_Val(Rte_InitValue_DtcTrig_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_HistSts_Val(Rte_InitValue_HistSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildCodClrdSts_Val(Rte_InitValue_TstFaildCodClrdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildPwrUpSts_Val(Rte_InitValue_TstFaildPwrUpSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdCodClrdSts_Val(Rte_InitValue_TstNotPassdCodClrdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdPwrUpSts_Val(Rte_InitValue_TstNotPassdPwrUpSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_WarnIndcrReqdSts_Val(Rte_InitValue_WarnIndcrReqdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Call_DtcTrigStsAry_SetRamBlockStatus(FALSE);
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
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg778BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg778BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg778BusHiSpdPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  SysSt1 Read_SysSt_Val;

  uint32 TrigTmr;
  uint8 ActvEveId;
  uint8 EveCnt;
  boolean TrigActv;
  Ary1D_u32_40 DtcMap;
  Ary1D_u8_40 DtcTrigStsAry;
  Ary1D_u8_40 EveMap;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;
  uint32 Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TrigTmr = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr() = TrigTmr;
  ActvEveId = *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId() = ActvEveId;
  EveCnt = *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt() = EveCnt;
  TrigActv = *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv();
  *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv() = TrigActv;

  (void)memcpy(DtcMap, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), sizeof(Ary1D_u32_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(), DtcMap, sizeof(Ary1D_u32_40));


  (void)memcpy(DtcTrigStsAry, TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(), DtcTrigStsAry, sizeof(Ary1D_u8_40));


  (void)memcpy(EveMap, TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), sizeof(Ary1D_u8_40));
  (void)memcpy(TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(), EveMap, sizeof(Ary1D_u8_40));


  fct_status = TSC_GmMsg778BusHiSpd_Rte_Read_SysSt_Val(&Read_SysSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_CodSupported_Val(Rte_InitValue_CodSupported_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_CurrSts_Val(Rte_InitValue_CurrSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcFailrTyp_Val(Rte_InitValue_DtcFailrTyp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcFltTyp_Val(Rte_InitValue_DtcFltTyp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcNr_Val(Rte_InitValue_DtcNr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcSrc_Val(Rte_InitValue_DtcSrc_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_DtcTrig_Val(Rte_InitValue_DtcTrig_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_HistSts_Val(Rte_InitValue_HistSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildCodClrdSts_Val(Rte_InitValue_TstFaildCodClrdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildPwrUpSts_Val(Rte_InitValue_TstFaildPwrUpSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdCodClrdSts_Val(Rte_InitValue_TstNotPassdCodClrdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdPwrUpSts_Val(Rte_InitValue_TstNotPassdPwrUpSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Write_WarnIndcrReqdSts_Val(Rte_InitValue_WarnIndcrReqdSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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

  fct_status = TSC_GmMsg778BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(0U, &Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg);
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


#define GmMsg778BusHiSpd_STOP_SEC_CODE
#include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void GmMsg778BusHiSpd_TestDefines(void)
{
  /* Enumeration Data Types */

  SysSt1 Test_SysSt1_V_1 = SYSST_DI;
  SysSt1 Test_SysSt1_V_2 = SYSST_OFF;
  SysSt1 Test_SysSt1_V_3 = SYSST_ENA;
  SysSt1 Test_SysSt1_V_4 = SYSST_WRMININ;
}

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
