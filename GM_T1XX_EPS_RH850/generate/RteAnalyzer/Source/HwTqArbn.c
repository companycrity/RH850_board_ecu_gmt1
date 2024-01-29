/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwTqArbn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  HwTqArbn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwTqArbn>
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

#include "Rte_HwTqArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_HwTqArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void HwTqArbn_TestDefines(void);


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
 *   uint8 *Rte_Pim_HwTqArbnTqARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqBStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqCRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqCStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqDRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqDStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwTqArbnChAAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnChBAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqA_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqB_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqC_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqD_Val(void)
 *
 *********************************************************************************************************************/


#define HwTqArbn_START_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqArbnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTqA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqChA_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqChB_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTqArbn_CODE) HwTqArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqArbnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwTqA_Val;
  SigQlfr1 Read_HwTqAQlfr_Val;
  uint8 Read_HwTqARollgCntr_Val;
  float32 Read_HwTqB_Val;
  SigQlfr1 Read_HwTqBQlfr_Val;
  uint8 Read_HwTqBRollgCntr_Val;
  float32 Read_HwTqC_Val;
  SigQlfr1 Read_HwTqCQlfr_Val;
  uint8 Read_HwTqCRollgCntr_Val;
  uint8 Read_HwTqCorrlnSts_Val;
  float32 Read_HwTqD_Val;
  SigQlfr1 Read_HwTqDQlfr_Val;
  uint8 Read_HwTqDRollgCntr_Val;

  uint8 HwTqArbnTqARollgCntrPrev;
  uint8 HwTqArbnTqAStallCntrPrev;
  uint8 HwTqArbnTqBRollgCntrPrev;
  uint8 HwTqArbnTqBStallCntrPrev;
  uint8 HwTqArbnTqCRollgCntrPrev;
  uint8 HwTqArbnTqCStallCntrPrev;
  uint8 HwTqArbnTqDRollgCntrPrev;
  uint8 HwTqArbnTqDStallCntrPrev;
  boolean dHwTqArbnChAAvl;
  boolean dHwTqArbnChBAvl;

  uint8 HwTqArbnMaxStallTqA_Val_data;
  uint8 HwTqArbnMaxStallTqB_Val_data;
  uint8 HwTqArbnMaxStallTqC_Val_data;
  uint8 HwTqArbnMaxStallTqD_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwTqArbnTqARollgCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqARollgCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqARollgCntrPrev() = HwTqArbnTqARollgCntrPrev;
  HwTqArbnTqAStallCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqAStallCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqAStallCntrPrev() = HwTqArbnTqAStallCntrPrev;
  HwTqArbnTqBRollgCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBRollgCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBRollgCntrPrev() = HwTqArbnTqBRollgCntrPrev;
  HwTqArbnTqBStallCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBStallCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBStallCntrPrev() = HwTqArbnTqBStallCntrPrev;
  HwTqArbnTqCRollgCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCRollgCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCRollgCntrPrev() = HwTqArbnTqCRollgCntrPrev;
  HwTqArbnTqCStallCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCStallCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCStallCntrPrev() = HwTqArbnTqCStallCntrPrev;
  HwTqArbnTqDRollgCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDRollgCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDRollgCntrPrev() = HwTqArbnTqDRollgCntrPrev;
  HwTqArbnTqDStallCntrPrev = *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDStallCntrPrev();
  *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDStallCntrPrev() = HwTqArbnTqDStallCntrPrev;
  dHwTqArbnChAAvl = *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChAAvl();
  *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChAAvl() = dHwTqArbnChAAvl;
  dHwTqArbnChBAvl = *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChBAvl();
  *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChBAvl() = dHwTqArbnChBAvl;

  HwTqArbnMaxStallTqA_Val_data = TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqA_Val();
  HwTqArbnMaxStallTqB_Val_data = TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqB_Val();
  HwTqArbnMaxStallTqC_Val_data = TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqC_Val();
  HwTqArbnMaxStallTqD_Val_data = TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqD_Val();

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqA_Val(&Read_HwTqA_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqAQlfr_Val(&Read_HwTqAQlfr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqARollgCntr_Val(&Read_HwTqARollgCntr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqB_Val(&Read_HwTqB_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqBQlfr_Val(&Read_HwTqBQlfr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqBRollgCntr_Val(&Read_HwTqBRollgCntr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqC_Val(&Read_HwTqC_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqCQlfr_Val(&Read_HwTqCQlfr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqCRollgCntr_Val(&Read_HwTqCRollgCntr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqCorrlnSts_Val(&Read_HwTqCorrlnSts_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqD_Val(&Read_HwTqD_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqDQlfr_Val(&Read_HwTqDQlfr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Read_HwTqDRollgCntr_Val(&Read_HwTqDRollgCntr_Val);
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

  fct_status = TSC_HwTqArbn_Rte_Write_HwTq_Val(Rte_InitValue_HwTq_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_HwTqArbn_Rte_Write_HwTqChA_Val(Rte_InitValue_HwTqChA_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_HwTqArbn_Rte_Write_HwTqChB_Val(Rte_InitValue_HwTqChB_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  HwTqArbn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwTqArbn_STOP_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void HwTqArbn_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Tq2_LowerLimit;
  float32 Test_float32_UL_1 = Tq2_UpperLimit;

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
