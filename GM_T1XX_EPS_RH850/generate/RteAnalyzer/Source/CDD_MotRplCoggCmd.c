/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotRplCoggCmd.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_MotRplCoggCmd
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotRplCoggCmd>
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
 * s1p14
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 *********************************************************************************************************************/

#include "Rte_CDD_MotRplCoggCmd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_MotRplCoggCmd.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void CDD_MotRplCoggCmd_TestDefines(void);


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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s1p14: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
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
 *
 * Array Types:
 * ============
 * Ary1D_s1p14_128: Array with 128 element(s) of type s1p14
 * Ary1D_s1p14_512: Array with 512 element(s) of type s1p14
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotRplCoggCmdMotCoggCmd(void)
 *   float32 *Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim(void)
 *   float32 *Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim(void)
 *   uint16 *Rte_Pim_dMotRplCoggCmdCoggIdx(void)
 *   s1p14 *Rte_Pim_MotCoggCmdY(void)
 *     Returnvalue: s1p14* is of type Ary1D_s1p14_512
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_MotRplCoggCmd_START_SEC_CODE
#include "CDD_MotRplCoggCmd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotCoggCmdPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotCoggCmdPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMotCoggCmdPrm_Oper(s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *     Argument MotCoggCmdY_Arg: s1p14* is of type Ary1D_s1p14_128
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotCoggCmdPrm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotRplCoggCmd_CODE) GetMotCoggCmdPrm_Oper(P2VAR(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotCoggCmdPrm_Oper
 *********************************************************************************************************************/

  float32 dMotRplCoggCmdMotCoggCmd;
  float32 dMotRplCoggCmdMotCurrQaxCoggCmdPreLim;
  float32 dMotRplCoggCmdMotRplCmdPreLim;
  uint16 dMotRplCoggCmdCoggIdx;
  Ary1D_s1p14_512 MotCoggCmdY;

  uint8 MotRplCoggCmdHrmncOrder1Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotRplCoggCmdMotCoggCmd = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd() = dMotRplCoggCmdMotCoggCmd;
  dMotRplCoggCmdMotCurrQaxCoggCmdPreLim = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim() = dMotRplCoggCmdMotCurrQaxCoggCmdPreLim;
  dMotRplCoggCmdMotRplCmdPreLim = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim() = dMotRplCoggCmdMotRplCmdPreLim;
  dMotRplCoggCmdCoggIdx = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx() = dMotRplCoggCmdCoggIdx;

  (void)memcpy(MotCoggCmdY, TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(), sizeof(Ary1D_s1p14_512));
  (void)memcpy(TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(), MotCoggCmdY, sizeof(Ary1D_s1p14_512));


  MotRplCoggCmdHrmncOrder1Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
  MotRplCoggCmdHrmncOrder2Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
  MotRplCoggCmdHrmncOrder3Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();

  CDD_MotRplCoggCmd_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCmdInit1
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
 *   Std_ReturnType Rte_Call_MotCoggCmdY_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotCoggCmdY_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCmdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotRplCoggCmd_CODE) MotRplCoggCmdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCmdInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 dMotRplCoggCmdMotCoggCmd;
  float32 dMotRplCoggCmdMotCurrQaxCoggCmdPreLim;
  float32 dMotRplCoggCmdMotRplCmdPreLim;
  uint16 dMotRplCoggCmdCoggIdx;
  Ary1D_s1p14_512 MotCoggCmdY;

  uint8 MotRplCoggCmdHrmncOrder1Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val_data;

  NvM_RequestResultType Call_MotCoggCmdY_GetErrorStatus_ErrorStatus_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotRplCoggCmdMotCoggCmd = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd() = dMotRplCoggCmdMotCoggCmd;
  dMotRplCoggCmdMotCurrQaxCoggCmdPreLim = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim() = dMotRplCoggCmdMotCurrQaxCoggCmdPreLim;
  dMotRplCoggCmdMotRplCmdPreLim = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim() = dMotRplCoggCmdMotRplCmdPreLim;
  dMotRplCoggCmdCoggIdx = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx() = dMotRplCoggCmdCoggIdx;

  (void)memcpy(MotCoggCmdY, TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(), sizeof(Ary1D_s1p14_512));
  (void)memcpy(TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(), MotCoggCmdY, sizeof(Ary1D_s1p14_512));


  MotRplCoggCmdHrmncOrder1Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
  MotRplCoggCmdHrmncOrder2Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
  MotRplCoggCmdHrmncOrder3Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();

  fct_status = TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_GetErrorStatus(&Call_MotCoggCmdY_GetErrorStatus_ErrorStatus_Arg);
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

  fct_status = TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: SetMotCoggCmdPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotCoggCmdPrm>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotCoggCmdY_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetMotCoggCmdPrm_Oper(const s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *     Argument MotCoggCmdY_Arg: s1p14* is of type Ary1D_s1p14_128
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotCoggCmdPrm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotRplCoggCmd_CODE) SetMotCoggCmdPrm_Oper(P2CONST(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotCoggCmdPrm_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 dMotRplCoggCmdMotCoggCmd;
  float32 dMotRplCoggCmdMotCurrQaxCoggCmdPreLim;
  float32 dMotRplCoggCmdMotRplCmdPreLim;
  uint16 dMotRplCoggCmdCoggIdx;
  Ary1D_s1p14_512 MotCoggCmdY;

  uint8 MotRplCoggCmdHrmncOrder1Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotRplCoggCmdMotCoggCmd = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd() = dMotRplCoggCmdMotCoggCmd;
  dMotRplCoggCmdMotCurrQaxCoggCmdPreLim = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim() = dMotRplCoggCmdMotCurrQaxCoggCmdPreLim;
  dMotRplCoggCmdMotRplCmdPreLim = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim() = dMotRplCoggCmdMotRplCmdPreLim;
  dMotRplCoggCmdCoggIdx = *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx();
  *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx() = dMotRplCoggCmdCoggIdx;

  (void)memcpy(MotCoggCmdY, TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(), sizeof(Ary1D_s1p14_512));
  (void)memcpy(TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(), MotCoggCmdY, sizeof(Ary1D_s1p14_512));


  MotRplCoggCmdHrmncOrder1Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
  MotRplCoggCmdHrmncOrder2Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
  MotRplCoggCmdHrmncOrder3Elec_Val_data = TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();

  fct_status = TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_SetRamBlockStatus(FALSE);
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


#define CDD_MotRplCoggCmd_STOP_SEC_CODE
#include "CDD_MotRplCoggCmd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_MotRplCoggCmd_TestDefines(void)
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
