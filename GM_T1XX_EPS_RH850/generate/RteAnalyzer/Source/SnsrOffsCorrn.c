/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SnsrOffsCorrn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  SnsrOffsCorrn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SnsrOffsCorrn>
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

#include "Rte_SnsrOffsCorrn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_SnsrOffsCorrn.h"


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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val(void)
 *   boolean Rte_Prm_SnsrOffsCorrnOffsEna_Logl(void)
 *
 *********************************************************************************************************************/


#define SnsrOffsCorrn_START_SEC_CODE
#include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsCorrnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsCorrnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsCorrnInit1
 *********************************************************************************************************************/

  float32 SnsrOffsCorrnHwAgLrndOffsLim_Val_data;
  float32 SnsrOffsCorrnHwTqLrndOffsLim_Val_data;
  float32 SnsrOffsCorrnVehYawRateLrndOffsLim_Val_data;
  boolean SnsrOffsCorrnOffsEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  SnsrOffsCorrnHwAgLrndOffsLim_Val_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val();
  SnsrOffsCorrnHwTqLrndOffsLim_Val_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val();
  SnsrOffsCorrnVehYawRateLrndOffsLim_Val_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val();
  SnsrOffsCorrnOffsEna_Logl_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnOffsEna_Logl();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsCorrnPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRateOffs_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehYawRateCorrd_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsCorrnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsCorrnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  float32 Read_HwAgOffs_Val;
  float32 Read_HwTq_Val;
  float32 Read_HwTqOffs_Val;
  float32 Read_VehYawRate_Val;
  float32 Read_VehYawRateOffs_Val;

  float32 SnsrOffsCorrnHwAgLrndOffsLim_Val_data;
  float32 SnsrOffsCorrnHwTqLrndOffsLim_Val_data;
  float32 SnsrOffsCorrnVehYawRateLrndOffsLim_Val_data;
  boolean SnsrOffsCorrnOffsEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  SnsrOffsCorrnHwAgLrndOffsLim_Val_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val();
  SnsrOffsCorrnHwTqLrndOffsLim_Val_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val();
  SnsrOffsCorrnVehYawRateLrndOffsLim_Val_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val();
  SnsrOffsCorrnOffsEna_Logl_data = TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnOffsEna_Logl();

  fct_status = TSC_SnsrOffsCorrn_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_SnsrOffsCorrn_Rte_Read_HwAgOffs_Val(&Read_HwAgOffs_Val);
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

  fct_status = TSC_SnsrOffsCorrn_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_SnsrOffsCorrn_Rte_Read_HwTqOffs_Val(&Read_HwTqOffs_Val);
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

  fct_status = TSC_SnsrOffsCorrn_Rte_Read_VehYawRate_Val(&Read_VehYawRate_Val);
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

  fct_status = TSC_SnsrOffsCorrn_Rte_Read_VehYawRateOffs_Val(&Read_VehYawRateOffs_Val);
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

  fct_status = TSC_SnsrOffsCorrn_Rte_Write_HwAgCorrd_Val(Rte_InitValue_HwAgCorrd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SnsrOffsCorrn_Rte_Write_HwTqCorrd_Val(Rte_InitValue_HwTqCorrd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SnsrOffsCorrn_Rte_Write_VehYawRateCorrd_Val(Rte_InitValue_VehYawRateCorrd_Val);
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


#define SnsrOffsCorrn_STOP_SEC_CODE
#include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
