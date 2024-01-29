/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg335BusChassisExp.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmMsg335BusChassisExp
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg335BusChassisExp>
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

#include "Rte_GmMsg335BusChassisExp.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmMsg335BusChassisExp.h"


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
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_GmMsg335BusChassisExpRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *
 *********************************************************************************************************************/


#define GmMsg335BusChassisExp_START_SEC_CODE
#include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg335BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_ApaDrvrIntvDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ApaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdProtnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlStsProtnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg335BusChassisExpPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg335BusChassisExp_CODE) GmMsg335BusChassisExpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg335BusChassisExpPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_ApaDrvrIntvDetd_Logl;
  uint8 Read_ApaSt_Val;
  uint8 Read_HwTqIdptSig_Val;

  uint8 GmMsg335BusChassisExpRollgCntr;

  uint8 LoaMgrHwTqIdptSigFltThd_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg335BusChassisExpRollgCntr = *TSC_GmMsg335BusChassisExp_Rte_Pim_GmMsg335BusChassisExpRollgCntr();
  *TSC_GmMsg335BusChassisExp_Rte_Pim_GmMsg335BusChassisExpRollgCntr() = GmMsg335BusChassisExpRollgCntr;

  LoaMgrHwTqIdptSigFltThd_Val_data = TSC_GmMsg335BusChassisExp_Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val();

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Read_ApaDrvrIntvDetd_Logl(&Read_ApaDrvrIntvDetd_Logl);
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

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Read_ApaSt_Val(&Read_ApaSt_Val);
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

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Read_HwTqIdptSig_Val(&Read_HwTqIdptSig_Val);
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

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetd_Val(Rte_InitValue_DrvrSteerIntvDetd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetdProtnVal_Val(Rte_InitValue_DrvrSteerIntvDetdProtnVal_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetdRollgCntr_Val(Rte_InitValue_DrvrSteerIntvDetdRollgCntr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetdVld_Val(Rte_InitValue_DrvrSteerIntvDetdVld_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Write_ElecPowerSteerAvlSts_Val(Rte_InitValue_ElecPowerSteerAvlSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Write_ElecPowerSteerAvlStsProtnVal_Val(Rte_InitValue_ElecPowerSteerAvlStsProtnVal_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg335BusChassisExp_Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val(Rte_InitValue_ElecPowerSteerAvlStsRollgCntr_Val);
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
 * Runnable Entity Name: Msg335TxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg335TxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg335TxCallBack_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg335TxCallBack_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg335BusChassisExp_CODE) Msg335TxCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg335TxCallBack_Oper
 *********************************************************************************************************************/

  uint8 GmMsg335BusChassisExpRollgCntr;

  uint8 LoaMgrHwTqIdptSigFltThd_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg335BusChassisExpRollgCntr = *TSC_GmMsg335BusChassisExp_Rte_Pim_GmMsg335BusChassisExpRollgCntr();
  *TSC_GmMsg335BusChassisExp_Rte_Pim_GmMsg335BusChassisExpRollgCntr() = GmMsg335BusChassisExpRollgCntr;

  LoaMgrHwTqIdptSigFltThd_Val_data = TSC_GmMsg335BusChassisExp_Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg335BusChassisExp_STOP_SEC_CODE
#include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
