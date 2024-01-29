/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_Tauj1CfgAndUse.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_Tauj1CfgAndUse
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_Tauj1CfgAndUse>
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

#include "Rte_CDD_Tauj1CfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_Tauj1CfgAndUse.h"


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
 *   uint32 *Rte_Pim_PhaOnTiCntrDPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrEPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrFPrev(void)
 *
 *********************************************************************************************************************/


#define CDD_Tauj1CfgAndUse_START_SEC_CODE
#include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Tauj1CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Tauj1CfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Tauj1CfgAndUseInit1
 *********************************************************************************************************************/

  uint32 PhaOnTiCntrDPrev;
  uint32 PhaOnTiCntrEPrev;
  uint32 PhaOnTiCntrFPrev;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PhaOnTiCntrDPrev = *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrDPrev();
  *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrDPrev() = PhaOnTiCntrDPrev;
  PhaOnTiCntrEPrev = *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrEPrev();
  *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrEPrev() = PhaOnTiCntrEPrev;
  PhaOnTiCntrFPrev = *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrFPrev();
  *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrFPrev() = PhaOnTiCntrFPrev;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Tauj1CfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdD_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdE_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdF_Val(uint32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Tauj1CfgAndUsePer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUsePer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Tauj1CfgAndUsePer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 PhaOnTiCntrDPrev;
  uint32 PhaOnTiCntrEPrev;
  uint32 PhaOnTiCntrFPrev;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PhaOnTiCntrDPrev = *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrDPrev();
  *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrDPrev() = PhaOnTiCntrDPrev;
  PhaOnTiCntrEPrev = *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrEPrev();
  *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrEPrev() = PhaOnTiCntrEPrev;
  PhaOnTiCntrFPrev = *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrFPrev();
  *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrFPrev() = PhaOnTiCntrFPrev;

  fct_status = TSC_CDD_Tauj1CfgAndUse_Rte_Write_PhaOnTiMeasdD_Val(Rte_InitValue_PhaOnTiMeasdD_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_Tauj1CfgAndUse_Rte_Write_PhaOnTiMeasdE_Val(Rte_InitValue_PhaOnTiMeasdE_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_Tauj1CfgAndUse_Rte_Write_PhaOnTiMeasdF_Val(Rte_InitValue_PhaOnTiMeasdF_Val);
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


#define CDD_Tauj1CfgAndUse_STOP_SEC_CODE
#include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
