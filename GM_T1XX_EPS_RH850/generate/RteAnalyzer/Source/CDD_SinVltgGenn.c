/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_SinVltgGenn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_SinVltgGenn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_SinVltgGenn>
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

#include "Rte_CDD_SinVltgGenn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_SinVltgGenn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void CDD_SinVltgGenn_TestDefines(void);


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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
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
 *   float32 *Rte_Pim_Fil1OutpPrev(void)
 *   float32 *Rte_Pim_Fil2OutpPrev(void)
 *   float32 *Rte_Pim_PhaDptOffsA(void)
 *   float32 *Rte_Pim_PhaDptOffsB(void)
 *   float32 *Rte_Pim_PhaDptOffsC(void)
 *   float32 *Rte_Pim_RndNrPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumAPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumBPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumCPrev(void)
 *   uint32 *Rte_Pim_PwmPerdRng(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SinVltgGennDthrLpFilCoeff_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_SinVltgGenn_START_SEC_CODE
#include "CDD_SinVltgGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SinVltgGennInit1
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
 *   Std_ReturnType Rte_Read_MotElecMeclPolarity_Val(sint8 *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SinVltgGennInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_SinVltgGenn_CODE) SinVltgGennInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SinVltgGennInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  sint8 Read_MotElecMeclPolarity_Val;

  float32 Fil1OutpPrev;
  float32 Fil2OutpPrev;
  float32 PhaDptOffsA;
  float32 PhaDptOffsB;
  float32 PhaDptOffsC;
  float32 RndNrPrev;
  uint32 PhaOnTiSumAPrev;
  uint32 PhaOnTiSumBPrev;
  uint32 PhaOnTiSumCPrev;
  uint32 PwmPerdRng;

  float32 SinVltgGennDthrLpFilCoeff_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  Fil1OutpPrev = *TSC_CDD_SinVltgGenn_Rte_Pim_Fil1OutpPrev();
  *TSC_CDD_SinVltgGenn_Rte_Pim_Fil1OutpPrev() = Fil1OutpPrev;
  Fil2OutpPrev = *TSC_CDD_SinVltgGenn_Rte_Pim_Fil2OutpPrev();
  *TSC_CDD_SinVltgGenn_Rte_Pim_Fil2OutpPrev() = Fil2OutpPrev;
  PhaDptOffsA = *TSC_CDD_SinVltgGenn_Rte_Pim_PhaDptOffsA();
  *TSC_CDD_SinVltgGenn_Rte_Pim_PhaDptOffsA() = PhaDptOffsA;
  PhaDptOffsB = *TSC_CDD_SinVltgGenn_Rte_Pim_PhaDptOffsB();
  *TSC_CDD_SinVltgGenn_Rte_Pim_PhaDptOffsB() = PhaDptOffsB;
  PhaDptOffsC = *TSC_CDD_SinVltgGenn_Rte_Pim_PhaDptOffsC();
  *TSC_CDD_SinVltgGenn_Rte_Pim_PhaDptOffsC() = PhaDptOffsC;
  RndNrPrev = *TSC_CDD_SinVltgGenn_Rte_Pim_RndNrPrev();
  *TSC_CDD_SinVltgGenn_Rte_Pim_RndNrPrev() = RndNrPrev;
  PhaOnTiSumAPrev = *TSC_CDD_SinVltgGenn_Rte_Pim_PhaOnTiSumAPrev();
  *TSC_CDD_SinVltgGenn_Rte_Pim_PhaOnTiSumAPrev() = PhaOnTiSumAPrev;
  PhaOnTiSumBPrev = *TSC_CDD_SinVltgGenn_Rte_Pim_PhaOnTiSumBPrev();
  *TSC_CDD_SinVltgGenn_Rte_Pim_PhaOnTiSumBPrev() = PhaOnTiSumBPrev;
  PhaOnTiSumCPrev = *TSC_CDD_SinVltgGenn_Rte_Pim_PhaOnTiSumCPrev();
  *TSC_CDD_SinVltgGenn_Rte_Pim_PhaOnTiSumCPrev() = PhaOnTiSumCPrev;
  PwmPerdRng = *TSC_CDD_SinVltgGenn_Rte_Pim_PwmPerdRng();
  *TSC_CDD_SinVltgGenn_Rte_Pim_PwmPerdRng() = PwmPerdRng;

  SinVltgGennDthrLpFilCoeff_Val_data = TSC_CDD_SinVltgGenn_Rte_Prm_SinVltgGennDthrLpFilCoeff_Val();

  fct_status = TSC_CDD_SinVltgGenn_Rte_Read_MotElecMeclPolarity_Val(&Read_MotElecMeclPolarity_Val);
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

  CDD_SinVltgGenn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_SinVltgGenn_STOP_SEC_CODE
#include "CDD_SinVltgGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_SinVltgGenn_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Ag3_LowerLimit;
  float32 Test_float32_UL_1 = Ag3_UpperLimit;
  float32 Test_float32_LL_2 = Ti8_LowerLimit;
  float32 Test_float32_UL_2 = Ti8_UpperLimit;
  float32 Test_float32_LL_3 = Uls2_LowerLimit;
  float32 Test_float32_UL_3 = Uls2_UpperLimit;

  sint8 Test_sint8_LL_1 = Uls3_LowerLimit;
  sint8 Test_sint8_UL_1 = Uls3_UpperLimit;

  uint32 Test_uint32_LL_1 = Ti3_LowerLimit;
  uint32 Test_uint32_UL_1 = Ti3_UpperLimit;
  uint32 Test_uint32_LL_2 = Ti9_LowerLimit;
  uint32 Test_uint32_UL_2 = Ti9_UpperLimit;
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
