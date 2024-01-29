/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StHlthSigStc.c
 *        Config:  EPS.dpa
 *     SW-C Type:  StHlthSigStc
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StHlthSigStc>
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
 * StHlthMonSig3
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_StHlthSigStc.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_StHlthSigStc.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void StHlthSigStc_TestDefines(void);


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
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 * StHlthMonSig3: Enumeration of integer in interval [0...255] with enumerators
 *   STHLTHMONSIG_ECUTFILTD (0U)
 *   STHLTHMONSIG_ASSIDUETOVLTG (1U)
 *   STHLTHMONSIG_DIGTQSNSRA (2U)
 *   STHLTHMONSIG_DIGTQSNSRB (3U)
 *   STHLTHMONSIG_DIGTQIDPTSIG (4U)
 *   STHLTHMONSIG_DUTYCYC (5U)
 *   STHLTHMONSIG_EOTIMPCT (6U)
 *   STHLTHMONSIG_MOTPOS (7U)
 *   STHLTHMONSIG_MOTPOSABDIFF (8U)
 *   STHLTHMONSIG_MOTPOSACDIFF (9U)
 *   STHLTHMONSIG_MOTPOSBCDIFF (10U)
 *   STHLTHMONSIG_CURRMOTSUMABC (11U)
 *   STHLTHMONSIG_CURRMOTSUMDEF (12U)
 *   STHLTHMONSIG_MOTPOSPHASEA (13U)
 *   STHLTHMONSIG_MOTPOSPHASEB (14U)
 *   STHLTHMONSIG_MOTPOSPHASEC (15U)
 *   STHLTHMONSIG_MOTPOSPHASED (16U)
 *   STHLTHMONSIG_MOTPOSPHASEE (17U)
 *   STHLTHMONSIG_MOTPOSPHASEF (18U)
 *   STHLTHMONSIG_BITCORRN (19U)
 *   STHLTHMONSIG_FRICESTIMN (20U)
 *   STHLTHMONSIG_WHLIMBREJCTN (21U)
 *
 * Array Types:
 * ============
 * Ary1D_f32_StHlthSigStc1: Array with 65535 element(s) of type float32
 * Ary1D_u32_StHlthSigStc1: Array with 65535 element(s) of type uint32
 * Ary1D_u8_225: Array with 225 element(s) of type uint8
 * Ary1D_u8_StHlthSigStc1: Array with 65535 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_VldNvm(void)
 *   uint32 *Rte_Pim_IgnCycSampleCntrAry(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_StHlthSigStc1
 *   uint8 *Rte_Pim_RamBuf(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_StHlthSigStc1
 *   float32 *Rte_Pim_SigAvrgBuf(void)
 *     Returnvalue: float32* is of type Ary1D_f32_StHlthSigStc1
 *   uint8 *Rte_Pim_SigStcHistDataAry(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_225
 *
 *********************************************************************************************************************/


#define StHlthSigStc_START_SEC_CODE
#include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrSigStcHlthData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrSigStcHlthData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrSigStcHlthData_Oper(boolean ClrTar_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrSigStcHlthData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) ClrSigStcHlthData_Oper(boolean ClrTar_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrSigStcHlthData_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean VldNvm;
  Ary1D_u32_StHlthSigStc1 IgnCycSampleCntrAry;
  Ary1D_u8_StHlthSigStc1 RamBuf;
  Ary1D_f32_StHlthSigStc1 SigAvrgBuf;
  Ary1D_u8_225 SigStcHistDataAry;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  VldNvm = *TSC_StHlthSigStc_Rte_Pim_VldNvm();
  *TSC_StHlthSigStc_Rte_Pim_VldNvm() = VldNvm;

  (void)memcpy(IgnCycSampleCntrAry, TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), sizeof(Ary1D_u32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), IgnCycSampleCntrAry, sizeof(Ary1D_u32_StHlthSigStc1));


  (void)memcpy(RamBuf, TSC_StHlthSigStc_Rte_Pim_RamBuf(), sizeof(Ary1D_u8_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_RamBuf(), RamBuf, sizeof(Ary1D_u8_StHlthSigStc1));


  (void)memcpy(SigAvrgBuf, TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), sizeof(Ary1D_f32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), SigAvrgBuf, sizeof(Ary1D_f32_StHlthSigStc1));


  (void)memcpy(SigStcHistDataAry, TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), sizeof(Ary1D_u8_225));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), SigStcHistDataAry, sizeof(Ary1D_u8_225));


  fct_status = TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_SetRamBlockStatus(FALSE);
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

  StHlthSigStc_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigStcHlthData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigStcHlthData>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_StHlthSigStc_ExclusiveArea(void)
 *   void Rte_Exit_StHlthSigStc_ExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, uint32 *BufPtr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigStcHlthData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StHlthSigStc_CODE) GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) BufPtr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigStcHlthData_Oper (returns application error)
 *********************************************************************************************************************/

  boolean VldNvm;
  Ary1D_u32_StHlthSigStc1 IgnCycSampleCntrAry;
  Ary1D_u8_StHlthSigStc1 RamBuf;
  Ary1D_f32_StHlthSigStc1 SigAvrgBuf;
  Ary1D_u8_225 SigStcHistDataAry;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  VldNvm = *TSC_StHlthSigStc_Rte_Pim_VldNvm();
  *TSC_StHlthSigStc_Rte_Pim_VldNvm() = VldNvm;

  (void)memcpy(IgnCycSampleCntrAry, TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), sizeof(Ary1D_u32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), IgnCycSampleCntrAry, sizeof(Ary1D_u32_StHlthSigStc1));


  (void)memcpy(RamBuf, TSC_StHlthSigStc_Rte_Pim_RamBuf(), sizeof(Ary1D_u8_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_RamBuf(), RamBuf, sizeof(Ary1D_u8_StHlthSigStc1));


  (void)memcpy(SigAvrgBuf, TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), sizeof(Ary1D_f32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), SigAvrgBuf, sizeof(Ary1D_f32_StHlthSigStc1));


  (void)memcpy(SigStcHistDataAry, TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), sizeof(Ary1D_u8_225));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), SigStcHistDataAry, sizeof(Ary1D_u8_225));


  TSC_StHlthSigStc_Rte_Enter_StHlthSigStc_ExclusiveArea();
  TSC_StHlthSigStc_Rte_Exit_StHlthSigStc_ExclusiveArea();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StHlthSigStcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StHlthSigStcInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) StHlthSigStcInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StHlthSigStcInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean VldNvm;
  Ary1D_u32_StHlthSigStc1 IgnCycSampleCntrAry;
  Ary1D_u8_StHlthSigStc1 RamBuf;
  Ary1D_f32_StHlthSigStc1 SigAvrgBuf;
  Ary1D_u8_225 SigStcHistDataAry;

  NvM_RequestResultType Call_SigStcHistDataAry_GetErrorStatus_ErrorStatus_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  VldNvm = *TSC_StHlthSigStc_Rte_Pim_VldNvm();
  *TSC_StHlthSigStc_Rte_Pim_VldNvm() = VldNvm;

  (void)memcpy(IgnCycSampleCntrAry, TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), sizeof(Ary1D_u32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), IgnCycSampleCntrAry, sizeof(Ary1D_u32_StHlthSigStc1));


  (void)memcpy(RamBuf, TSC_StHlthSigStc_Rte_Pim_RamBuf(), sizeof(Ary1D_u8_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_RamBuf(), RamBuf, sizeof(Ary1D_u8_StHlthSigStc1));


  (void)memcpy(SigAvrgBuf, TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), sizeof(Ary1D_f32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), SigAvrgBuf, sizeof(Ary1D_f32_StHlthSigStc1));


  (void)memcpy(SigStcHistDataAry, TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), sizeof(Ary1D_u8_225));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), SigStcHistDataAry, sizeof(Ary1D_u8_225));


  fct_status = TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_GetErrorStatus(&Call_SigStcHistDataAry_GetErrorStatus_ErrorStatus_Arg);
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
 * Runnable Entity Name: StHlthStcPwrDwn_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StHlthStcPwrDwn>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StHlthStcPwrDwn_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StHlthStcPwrDwn_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) StHlthStcPwrDwn_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StHlthStcPwrDwn_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean VldNvm;
  Ary1D_u32_StHlthSigStc1 IgnCycSampleCntrAry;
  Ary1D_u8_StHlthSigStc1 RamBuf;
  Ary1D_f32_StHlthSigStc1 SigAvrgBuf;
  Ary1D_u8_225 SigStcHistDataAry;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  VldNvm = *TSC_StHlthSigStc_Rte_Pim_VldNvm();
  *TSC_StHlthSigStc_Rte_Pim_VldNvm() = VldNvm;

  (void)memcpy(IgnCycSampleCntrAry, TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), sizeof(Ary1D_u32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), IgnCycSampleCntrAry, sizeof(Ary1D_u32_StHlthSigStc1));


  (void)memcpy(RamBuf, TSC_StHlthSigStc_Rte_Pim_RamBuf(), sizeof(Ary1D_u8_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_RamBuf(), RamBuf, sizeof(Ary1D_u8_StHlthSigStc1));


  (void)memcpy(SigAvrgBuf, TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), sizeof(Ary1D_f32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), SigAvrgBuf, sizeof(Ary1D_f32_StHlthSigStc1));


  (void)memcpy(SigStcHistDataAry, TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), sizeof(Ary1D_u8_225));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), SigStcHistDataAry, sizeof(Ary1D_u8_225));


  fct_status = TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: UpdStHlthStcData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <UpdStHlthStcData>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AbsltMotPosABDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsltMotPosACDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsltMotPosBCDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CtrlrTStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumABCStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumDEFStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqIdptSigStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqSnsrAStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqSnsrBStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DutyCycStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EotImpctStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FricEstimnStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotPosStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_OutpAssiStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaAStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaBStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaCStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaDStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaEStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaFStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RamEccSngBitCorrnStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlImbMaxCmpStHlth_Val(uint8 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_StHlthSigStc_ExclusiveArea(void)
 *   void Rte_Exit_StHlthSigStc_ExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void UpdStHlthStcData_Oper(uint8 TaskId_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: UpdStHlthStcData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) UpdStHlthStcData_Oper(uint8 TaskId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: UpdStHlthStcData_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 Read_AbsltMotPosABDifStHlth_Val;
  uint8 Read_AbsltMotPosACDifStHlth_Val;
  uint8 Read_AbsltMotPosBCDifStHlth_Val;
  uint8 Read_CtrlrTStHlth_Val;
  uint8 Read_CurrMotSumABCStHlth_Val;
  uint8 Read_CurrMotSumDEFStHlth_Val;
  uint8 Read_DigTqIdptSigStHlth_Val;
  uint8 Read_DigTqSnsrAStHlth_Val;
  uint8 Read_DigTqSnsrBStHlth_Val;
  uint8 Read_DutyCycStHlth_Val;
  uint8 Read_EotImpctStHlth_Val;
  uint8 Read_FricEstimnStHlth_Val;
  uint8 Read_MotPosStHlth_Val;
  uint8 Read_OutpAssiStHlth_Val;
  uint8 Read_PhaAStHlth_Val;
  uint8 Read_PhaBStHlth_Val;
  uint8 Read_PhaCStHlth_Val;
  uint8 Read_PhaDStHlth_Val;
  uint8 Read_PhaEStHlth_Val;
  uint8 Read_PhaFStHlth_Val;
  uint8 Read_RamEccSngBitCorrnStHlth_Val;
  uint8 Read_WhlImbMaxCmpStHlth_Val;

  boolean VldNvm;
  Ary1D_u32_StHlthSigStc1 IgnCycSampleCntrAry;
  Ary1D_u8_StHlthSigStc1 RamBuf;
  Ary1D_f32_StHlthSigStc1 SigAvrgBuf;
  Ary1D_u8_225 SigStcHistDataAry;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  VldNvm = *TSC_StHlthSigStc_Rte_Pim_VldNvm();
  *TSC_StHlthSigStc_Rte_Pim_VldNvm() = VldNvm;

  (void)memcpy(IgnCycSampleCntrAry, TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), sizeof(Ary1D_u32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(), IgnCycSampleCntrAry, sizeof(Ary1D_u32_StHlthSigStc1));


  (void)memcpy(RamBuf, TSC_StHlthSigStc_Rte_Pim_RamBuf(), sizeof(Ary1D_u8_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_RamBuf(), RamBuf, sizeof(Ary1D_u8_StHlthSigStc1));


  (void)memcpy(SigAvrgBuf, TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), sizeof(Ary1D_f32_StHlthSigStc1));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(), SigAvrgBuf, sizeof(Ary1D_f32_StHlthSigStc1));


  (void)memcpy(SigStcHistDataAry, TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), sizeof(Ary1D_u8_225));
  (void)memcpy(TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(), SigStcHistDataAry, sizeof(Ary1D_u8_225));


  fct_status = TSC_StHlthSigStc_Rte_Read_AbsltMotPosABDifStHlth_Val(&Read_AbsltMotPosABDifStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_AbsltMotPosACDifStHlth_Val(&Read_AbsltMotPosACDifStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_AbsltMotPosBCDifStHlth_Val(&Read_AbsltMotPosBCDifStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_CtrlrTStHlth_Val(&Read_CtrlrTStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_CurrMotSumABCStHlth_Val(&Read_CurrMotSumABCStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_CurrMotSumDEFStHlth_Val(&Read_CurrMotSumDEFStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_DigTqIdptSigStHlth_Val(&Read_DigTqIdptSigStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_DigTqSnsrAStHlth_Val(&Read_DigTqSnsrAStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_DigTqSnsrBStHlth_Val(&Read_DigTqSnsrBStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_DutyCycStHlth_Val(&Read_DutyCycStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_EotImpctStHlth_Val(&Read_EotImpctStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_FricEstimnStHlth_Val(&Read_FricEstimnStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_MotPosStHlth_Val(&Read_MotPosStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_OutpAssiStHlth_Val(&Read_OutpAssiStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_PhaAStHlth_Val(&Read_PhaAStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_PhaBStHlth_Val(&Read_PhaBStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_PhaCStHlth_Val(&Read_PhaCStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_PhaDStHlth_Val(&Read_PhaDStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_PhaEStHlth_Val(&Read_PhaEStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_PhaFStHlth_Val(&Read_PhaFStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_RamEccSngBitCorrnStHlth_Val(&Read_RamEccSngBitCorrnStHlth_Val);
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

  fct_status = TSC_StHlthSigStc_Rte_Read_WhlImbMaxCmpStHlth_Val(&Read_WhlImbMaxCmpStHlth_Val);
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

  TSC_StHlthSigStc_Rte_Enter_StHlthSigStc_ExclusiveArea();
  TSC_StHlthSigStc_Rte_Exit_StHlthSigStc_ExclusiveArea();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StHlthSigStc_STOP_SEC_CODE
#include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void StHlthSigStc_TestDefines(void)
{
  /* Enumeration Data Types */

  NvM_RequestResultType Test_NvM_RequestResultType_V_1 = NVM_REQ_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_2 = NVM_REQ_NOT_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_3 = NVM_REQ_PENDING;
  NvM_RequestResultType Test_NvM_RequestResultType_V_4 = NVM_REQ_INTEGRITY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_5 = NVM_REQ_BLOCK_SKIPPED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_6 = NVM_REQ_NV_INVALIDATED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_7 = NVM_REQ_CANCELED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_8 = NVM_REQ_REDUNDANCY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_9 = NVM_REQ_RESTORED_FROM_ROM;

  StHlthMonSig3 Test_StHlthMonSig3_V_1 = STHLTHMONSIG_ECUTFILTD;
  StHlthMonSig3 Test_StHlthMonSig3_V_2 = STHLTHMONSIG_ASSIDUETOVLTG;
  StHlthMonSig3 Test_StHlthMonSig3_V_3 = STHLTHMONSIG_DIGTQSNSRA;
  StHlthMonSig3 Test_StHlthMonSig3_V_4 = STHLTHMONSIG_DIGTQSNSRB;
  StHlthMonSig3 Test_StHlthMonSig3_V_5 = STHLTHMONSIG_DIGTQIDPTSIG;
  StHlthMonSig3 Test_StHlthMonSig3_V_6 = STHLTHMONSIG_DUTYCYC;
  StHlthMonSig3 Test_StHlthMonSig3_V_7 = STHLTHMONSIG_EOTIMPCT;
  StHlthMonSig3 Test_StHlthMonSig3_V_8 = STHLTHMONSIG_MOTPOS;
  StHlthMonSig3 Test_StHlthMonSig3_V_9 = STHLTHMONSIG_MOTPOSABDIFF;
  StHlthMonSig3 Test_StHlthMonSig3_V_10 = STHLTHMONSIG_MOTPOSACDIFF;
  StHlthMonSig3 Test_StHlthMonSig3_V_11 = STHLTHMONSIG_MOTPOSBCDIFF;
  StHlthMonSig3 Test_StHlthMonSig3_V_12 = STHLTHMONSIG_CURRMOTSUMABC;
  StHlthMonSig3 Test_StHlthMonSig3_V_13 = STHLTHMONSIG_CURRMOTSUMDEF;
  StHlthMonSig3 Test_StHlthMonSig3_V_14 = STHLTHMONSIG_MOTPOSPHASEA;
  StHlthMonSig3 Test_StHlthMonSig3_V_15 = STHLTHMONSIG_MOTPOSPHASEB;
  StHlthMonSig3 Test_StHlthMonSig3_V_16 = STHLTHMONSIG_MOTPOSPHASEC;
  StHlthMonSig3 Test_StHlthMonSig3_V_17 = STHLTHMONSIG_MOTPOSPHASED;
  StHlthMonSig3 Test_StHlthMonSig3_V_18 = STHLTHMONSIG_MOTPOSPHASEE;
  StHlthMonSig3 Test_StHlthMonSig3_V_19 = STHLTHMONSIG_MOTPOSPHASEF;
  StHlthMonSig3 Test_StHlthMonSig3_V_20 = STHLTHMONSIG_BITCORRN;
  StHlthMonSig3 Test_StHlthMonSig3_V_21 = STHLTHMONSIG_FRICESTIMN;
  StHlthMonSig3 Test_StHlthMonSig3_V_22 = STHLTHMONSIG_WHLIMBREJCTN;
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
