/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PolarityCfg.c
 *        Config:  EPS.dpa
 *     SW-C Type:  PolarityCfg
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <PolarityCfg>
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

#include "Rte_PolarityCfg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_PolarityCfg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void PolarityCfg_TestDefines(void);


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
 * Boolean: Boolean
 * sint8: Integer in interval [-128...127] (standard type)
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
 *   uint32 *Rte_Pim_PolarityCfgSaved(void)
 *
 *********************************************************************************************************************/


#define PolarityCfg_START_SEC_CODE
#include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechPolarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotElecMeclPolarity_Val(sint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PolarityCfg_CODE) PolarityCfgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 PolarityCfgSaved;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PolarityCfgSaved = *TSC_PolarityCfg_Rte_Pim_PolarityCfgSaved();
  *TSC_PolarityCfg_Rte_Pim_PolarityCfgSaved() = PolarityCfgSaved;

  fct_status = TSC_PolarityCfg_Rte_Write_AssiMechPolarity_Val(Rte_InitValue_AssiMechPolarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg0Polarity_Val(Rte_InitValue_HwAg0Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg1Polarity_Val(Rte_InitValue_HwAg1Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg2Polarity_Val(Rte_InitValue_HwAg2Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg3Polarity_Val(Rte_InitValue_HwAg3Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg4Polarity_Val(Rte_InitValue_HwAg4Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg5Polarity_Val(Rte_InitValue_HwAg5Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg6Polarity_Val(Rte_InitValue_HwAg6Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwAg7Polarity_Val(Rte_InitValue_HwAg7Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq0Polarity_Val(Rte_InitValue_HwTq0Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq1Polarity_Val(Rte_InitValue_HwTq1Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq2Polarity_Val(Rte_InitValue_HwTq2Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq3Polarity_Val(Rte_InitValue_HwTq3Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq4Polarity_Val(Rte_InitValue_HwTq4Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq5Polarity_Val(Rte_InitValue_HwTq5Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq6Polarity_Val(Rte_InitValue_HwTq6Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_HwTq7Polarity_Val(Rte_InitValue_HwTq7Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl0Polarity_Val(Rte_InitValue_MotAgMecl0Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl1Polarity_Val(Rte_InitValue_MotAgMecl1Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl2Polarity_Val(Rte_InitValue_MotAgMecl2Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl3Polarity_Val(Rte_InitValue_MotAgMecl3Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl4Polarity_Val(Rte_InitValue_MotAgMecl4Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl5Polarity_Val(Rte_InitValue_MotAgMecl5Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl6Polarity_Val(Rte_InitValue_MotAgMecl6Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotAgMecl7Polarity_Val(Rte_InitValue_MotAgMecl7Polarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PolarityCfg_Rte_Write_MotElecMeclPolarity_Val(Rte_InitValue_MotElecMeclPolarity_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  PolarityCfg_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PolarityCfgRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PolarityCfgRead_Oper(uint32 *PolarityCfgSaved)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PolarityCfgRead1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgRead_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgRead_Oper(P2VAR(uint32, AUTOMATIC, RTE_POLARITYCFG_APPL_VAR) PolarityCfgSaved) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgRead_Oper (returns application error)
 *********************************************************************************************************************/

  uint32 PolarityCfgSaved;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PolarityCfgSaved = *TSC_PolarityCfg_Rte_Pim_PolarityCfgSaved();
  *TSC_PolarityCfg_Rte_Pim_PolarityCfgSaved() = PolarityCfgSaved;

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PolarityCfgWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PolarityCfgSaved_SetRamBlockStatus(Boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PolarityCfgWr_Oper(uint32 PolarityCfgSaved)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PolarityCfgWr1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgWr_Oper(uint32 PolarityCfgSaved) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgWr_Oper (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 PolarityCfgSaved;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PolarityCfgSaved = *TSC_PolarityCfg_Rte_Pim_PolarityCfgSaved();
  *TSC_PolarityCfg_Rte_Pim_PolarityCfgSaved() = PolarityCfgSaved;

  fct_status = TSC_PolarityCfg_Rte_Call_PolarityCfgSaved_SetRamBlockStatus(FALSE);
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

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PolarityCfg_STOP_SEC_CODE
#include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void PolarityCfg_TestDefines(void)
{
  /* Primitive Types */

  sint8 Test_sint8_LL_1 = Uls3_LowerLimit;
  sint8 Test_sint8_UL_1 = Uls3_UpperLimit;

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
