/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgArbn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  HwAgArbn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgArbn>
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
 * SigQlfr1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_HwAgArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_HwAgArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void HwAgArbn_TestDefines(void);


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
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgPrev(void)
 *   uint8 *Rte_Pim_HwAgARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwAgAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwAgBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwAgBStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwAgArbnAgAAvl(void)
 *   boolean *Rte_Pim_dHwAgArbnAgBAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_HwAgArbnHwAgMaxStall_Val(void)
 *
 *********************************************************************************************************************/


#define HwAgArbn_START_SEC_CODE
#include "HwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgArbnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAgA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwAgARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwAgBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgCorrlnSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAg_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgArbn_CODE) HwAgArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgArbnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAgA_Val;
  SigQlfr1 Read_HwAgAQlfr_Val;
  uint8 Read_HwAgARollgCntr_Val;
  float32 Read_HwAgB_Val;
  SigQlfr1 Read_HwAgBQlfr_Val;
  uint8 Read_HwAgBRollgCntr_Val;
  uint8 Read_HwAgCorrlnSt_Val;

  float32 HwAgPrev;
  uint8 HwAgARollgCntrPrev;
  uint8 HwAgAStallCntrPrev;
  uint8 HwAgBRollgCntrPrev;
  uint8 HwAgBStallCntrPrev;
  boolean dHwAgArbnAgAAvl;
  boolean dHwAgArbnAgBAvl;

  uint8 HwAgArbnHwAgMaxStall_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgPrev = *TSC_HwAgArbn_Rte_Pim_HwAgPrev();
  *TSC_HwAgArbn_Rte_Pim_HwAgPrev() = HwAgPrev;
  HwAgARollgCntrPrev = *TSC_HwAgArbn_Rte_Pim_HwAgARollgCntrPrev();
  *TSC_HwAgArbn_Rte_Pim_HwAgARollgCntrPrev() = HwAgARollgCntrPrev;
  HwAgAStallCntrPrev = *TSC_HwAgArbn_Rte_Pim_HwAgAStallCntrPrev();
  *TSC_HwAgArbn_Rte_Pim_HwAgAStallCntrPrev() = HwAgAStallCntrPrev;
  HwAgBRollgCntrPrev = *TSC_HwAgArbn_Rte_Pim_HwAgBRollgCntrPrev();
  *TSC_HwAgArbn_Rte_Pim_HwAgBRollgCntrPrev() = HwAgBRollgCntrPrev;
  HwAgBStallCntrPrev = *TSC_HwAgArbn_Rte_Pim_HwAgBStallCntrPrev();
  *TSC_HwAgArbn_Rte_Pim_HwAgBStallCntrPrev() = HwAgBStallCntrPrev;
  dHwAgArbnAgAAvl = *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgAAvl();
  *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgAAvl() = dHwAgArbnAgAAvl;
  dHwAgArbnAgBAvl = *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgBAvl();
  *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgBAvl() = dHwAgArbnAgBAvl;

  HwAgArbnHwAgMaxStall_Val_data = TSC_HwAgArbn_Rte_Prm_HwAgArbnHwAgMaxStall_Val();

  fct_status = TSC_HwAgArbn_Rte_Read_HwAgA_Val(&Read_HwAgA_Val);
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

  fct_status = TSC_HwAgArbn_Rte_Read_HwAgAQlfr_Val(&Read_HwAgAQlfr_Val);
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

  fct_status = TSC_HwAgArbn_Rte_Read_HwAgARollgCntr_Val(&Read_HwAgARollgCntr_Val);
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

  fct_status = TSC_HwAgArbn_Rte_Read_HwAgB_Val(&Read_HwAgB_Val);
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

  fct_status = TSC_HwAgArbn_Rte_Read_HwAgBQlfr_Val(&Read_HwAgBQlfr_Val);
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

  fct_status = TSC_HwAgArbn_Rte_Read_HwAgBRollgCntr_Val(&Read_HwAgBRollgCntr_Val);
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

  fct_status = TSC_HwAgArbn_Rte_Read_HwAgCorrlnSt_Val(&Read_HwAgCorrlnSt_Val);
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

  fct_status = TSC_HwAgArbn_Rte_Write_HwAg_Val(Rte_InitValue_HwAg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  HwAgArbn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgArbn_STOP_SEC_CODE
#include "HwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void HwAgArbn_TestDefines(void)
{
  /* Enumeration Data Types */

  SigQlfr1 Test_SigQlfr1_V_1 = SIGQLFR_NORES;
  SigQlfr1 Test_SigQlfr1_V_2 = SIGQLFR_PASSD;
  SigQlfr1 Test_SigQlfr1_V_3 = SIGQLFR_FAILD;
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
