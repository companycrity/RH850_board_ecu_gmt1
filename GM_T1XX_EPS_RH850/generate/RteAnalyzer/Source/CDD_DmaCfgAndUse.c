/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_DmaCfgAndUse.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_DmaCfgAndUse
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_DmaCfgAndUse>
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

#include "Rte_CDD_DmaCfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_DmaCfgAndUse.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void CDD_DmaCfgAndUse_TestDefines(void);


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
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi(void)
 *   uint32 *Rte_Pim_MotAg0ReadPtrRst(void)
 *   uint32 *Rte_Pim_MotAg0TrsmStrt(void)
 *   uint32 *Rte_Pim_MotAg1ReadPtrRst(void)
 *   uint32 *Rte_Pim_MotAg1TrsmStrt(void)
 *   uint32 *Rte_Pim_d2MilliSecAdcActDmaTrfTi(void)
 *   uint32 *Rte_Pim_d2MilliSecAdcMaxDmaTrfTi(void)
 *
 *********************************************************************************************************************/


#define CDD_DmaCfgAndUse_START_SEC_CODE
#include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaCfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_DmaCfgAndUse_CODE) DmaCfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUseInit1
 *********************************************************************************************************************/

  uint32 DmaCfgAndUse2MilliSecAdcStrtTi;
  uint32 MotAg0ReadPtrRst;
  uint32 MotAg0TrsmStrt;
  uint32 MotAg1ReadPtrRst;
  uint32 MotAg1TrsmStrt;
  uint32 d2MilliSecAdcActDmaTrfTi;
  uint32 d2MilliSecAdcMaxDmaTrfTi;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  DmaCfgAndUse2MilliSecAdcStrtTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi() = DmaCfgAndUse2MilliSecAdcStrtTi;
  MotAg0ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst() = MotAg0ReadPtrRst;
  MotAg0TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt() = MotAg0TrsmStrt;
  MotAg1ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst() = MotAg1ReadPtrRst;
  MotAg1TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt() = MotAg1TrsmStrt;
  d2MilliSecAdcActDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi() = d2MilliSecAdcActDmaTrfTi;
  d2MilliSecAdcMaxDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi() = d2MilliSecAdcMaxDmaTrfTi;

  CDD_DmaCfgAndUse_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaCfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUsePer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_DmaCfgAndUse_CODE) DmaCfgAndUsePer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUsePer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 DmaCfgAndUse2MilliSecAdcStrtTi;
  uint32 MotAg0ReadPtrRst;
  uint32 MotAg0TrsmStrt;
  uint32 MotAg1ReadPtrRst;
  uint32 MotAg1TrsmStrt;
  uint32 d2MilliSecAdcActDmaTrfTi;
  uint32 d2MilliSecAdcMaxDmaTrfTi;

  uint32 Call_GetRefTmr1MicroSec32bit_Oper_RefTmr = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  DmaCfgAndUse2MilliSecAdcStrtTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi() = DmaCfgAndUse2MilliSecAdcStrtTi;
  MotAg0ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst() = MotAg0ReadPtrRst;
  MotAg0TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt() = MotAg0TrsmStrt;
  MotAg1ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst() = MotAg1ReadPtrRst;
  MotAg1TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt() = MotAg1TrsmStrt;
  d2MilliSecAdcActDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi() = d2MilliSecAdcActDmaTrfTi;
  d2MilliSecAdcMaxDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi() = d2MilliSecAdcMaxDmaTrfTi;

  fct_status = TSC_CDD_DmaCfgAndUse_Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper();
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

  fct_status = TSC_CDD_DmaCfgAndUse_Rte_Call_GetRefTmr1MicroSec32bit_Oper(&Call_GetRefTmr1MicroSec32bit_Oper_RefTmr);
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

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaEna2MilliSecToMotCtrlTrf_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DmaEna2MilliSecToMotCtrlTrf>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DmaEna2MilliSecToMotCtrlTrf_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaEna2MilliSecToMotCtrlTrf_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_DmaCfgAndUse_CODE) DmaEna2MilliSecToMotCtrlTrf_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaEna2MilliSecToMotCtrlTrf_Oper
 *********************************************************************************************************************/

  uint32 DmaCfgAndUse2MilliSecAdcStrtTi;
  uint32 MotAg0ReadPtrRst;
  uint32 MotAg0TrsmStrt;
  uint32 MotAg1ReadPtrRst;
  uint32 MotAg1TrsmStrt;
  uint32 d2MilliSecAdcActDmaTrfTi;
  uint32 d2MilliSecAdcMaxDmaTrfTi;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  DmaCfgAndUse2MilliSecAdcStrtTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi() = DmaCfgAndUse2MilliSecAdcStrtTi;
  MotAg0ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst() = MotAg0ReadPtrRst;
  MotAg0TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt() = MotAg0TrsmStrt;
  MotAg1ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst() = MotAg1ReadPtrRst;
  MotAg1TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt() = MotAg1TrsmStrt;
  d2MilliSecAdcActDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi() = d2MilliSecAdcActDmaTrfTi;
  d2MilliSecAdcMaxDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi() = d2MilliSecAdcMaxDmaTrfTi;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaWaitForMotCtrlTo2MilliSecTrf_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DmaWaitForMotCtrlTo2MilliSecTrf>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaWaitForMotCtrlTo2MilliSecTrf_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_DmaCfgAndUse_CODE) DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaWaitForMotCtrlTo2MilliSecTrf_Oper (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 DmaCfgAndUse2MilliSecAdcStrtTi;
  uint32 MotAg0ReadPtrRst;
  uint32 MotAg0TrsmStrt;
  uint32 MotAg1ReadPtrRst;
  uint32 MotAg1TrsmStrt;
  uint32 d2MilliSecAdcActDmaTrfTi;
  uint32 d2MilliSecAdcMaxDmaTrfTi;

  uint32 Call_GetTiSpan1MicroSec32bit_Oper_TiSpan = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  DmaCfgAndUse2MilliSecAdcStrtTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi() = DmaCfgAndUse2MilliSecAdcStrtTi;
  MotAg0ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst() = MotAg0ReadPtrRst;
  MotAg0TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt() = MotAg0TrsmStrt;
  MotAg1ReadPtrRst = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst() = MotAg1ReadPtrRst;
  MotAg1TrsmStrt = *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt() = MotAg1TrsmStrt;
  d2MilliSecAdcActDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi() = d2MilliSecAdcActDmaTrfTi;
  d2MilliSecAdcMaxDmaTrfTi = *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi();
  *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi() = d2MilliSecAdcMaxDmaTrfTi;

  fct_status = TSC_CDD_DmaCfgAndUse_Rte_Call_GetTiSpan1MicroSec32bit_Oper(0U, &Call_GetTiSpan1MicroSec32bit_Oper_TiSpan);
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
    case RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_DmaCfgAndUse_STOP_SEC_CODE
#include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_DmaCfgAndUse_TestDefines(void)
{
  /* Primitive Types */

  uint32 Test_uint32_LL_1 = Cnt15_LowerLimit;
  uint32 Test_uint32_UL_1 = Cnt15_UpperLimit;
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
