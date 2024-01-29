/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg184BusHiSpd.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmMsg184BusHiSpd
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg184BusHiSpd>
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

#include "Rte_GmMsg184BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmMsg184BusHiSpd.h"


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
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
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
 *   uint8 *Rte_Pim_GmMsg184BusHiSpdRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *   sint8 Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *
 *********************************************************************************************************************/


#define GmMsg184BusHiSpd_START_SEC_CODE
#include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg184BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_HowDetnFlg_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaTqDlvd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnMod_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnStVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaDrvrAppldTq_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaDrvrAppldTqVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaElecPwrSteerTotTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlDeltaTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlDlvdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlStsChks_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlTqDlvdSts_Val(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg184BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg184BusHiSpd_CODE) GmMsg184BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg184BusHiSpdPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_HowDetnFlg_Logl;
  float32 Read_HwTq_Val;
  uint8 Read_HwTqIdptSig_Val;
  uint8 Read_LkaSt_Val;
  float32 Read_LkaTqDlvd_Val;
  boolean Read_VehSpdVld_Logl;

  uint8 GmMsg184BusHiSpdRollgCntr;

  uint8 LoaMgrHwTqIdptSigFltThd_Val_data;
  sint8 GmMsg184BusHiSpdTqPolarity_Val_data;
  boolean GmOvrlStMgrLkaMfgEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg184BusHiSpdRollgCntr = *TSC_GmMsg184BusHiSpd_Rte_Pim_GmMsg184BusHiSpdRollgCntr();
  *TSC_GmMsg184BusHiSpd_Rte_Pim_GmMsg184BusHiSpdRollgCntr() = GmMsg184BusHiSpdRollgCntr;

  LoaMgrHwTqIdptSigFltThd_Val_data = TSC_GmMsg184BusHiSpd_Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val();
  GmMsg184BusHiSpdTqPolarity_Val_data = TSC_GmMsg184BusHiSpd_Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val();
  GmOvrlStMgrLkaMfgEna_Logl_data = TSC_GmMsg184BusHiSpd_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Read_HowDetnFlg_Logl(&Read_HowDetnFlg_Logl);
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

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Read_HwTqIdptSig_Val(&Read_HwTqIdptSig_Val);
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

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Read_LkaSt_Val(&Read_LkaSt_Val);
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

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Read_LkaTqDlvd_Val(&Read_LkaTqDlvd_Val);
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

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Read_VehSpdVld_Logl(&Read_VehSpdVld_Logl);
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

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_HandsOffSteerWhlDetnMod_Val(Rte_InitValue_HandsOffSteerWhlDetnMod_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_HandsOffSteerWhlDetnSt_Val(Rte_InitValue_HandsOffSteerWhlDetnSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_HandsOffSteerWhlDetnStVld_Val(Rte_InitValue_HandsOffSteerWhlDetnStVld_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_LkaDrvrAppldTq_Val(Rte_InitValue_LkaDrvrAppldTq_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_LkaDrvrAppldTqVld_Val(Rte_InitValue_LkaDrvrAppldTqVld_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_LkaElecPwrSteerTotTqDlvd_Val(Rte_InitValue_LkaElecPwrSteerTotTqDlvd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlDeltaTqDlvd_Val(Rte_InitValue_LkaTqOvrlDeltaTqDlvd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlDlvdRollgCntr_Val(Rte_InitValue_LkaTqOvrlDlvdRollgCntr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlStsChks_Val(Rte_InitValue_LkaTqOvrlStsChks_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlTqDlvdSts_Val(Rte_InitValue_LkaTqOvrlTqDlvdSts_Val);
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
 * Runnable Entity Name: MsgTxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MsgTxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MsgTxCallBack_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MsgTxCallBack_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg184BusHiSpd_CODE) MsgTxCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MsgTxCallBack_Oper
 *********************************************************************************************************************/

  uint8 GmMsg184BusHiSpdRollgCntr;

  uint8 LoaMgrHwTqIdptSigFltThd_Val_data;
  sint8 GmMsg184BusHiSpdTqPolarity_Val_data;
  boolean GmOvrlStMgrLkaMfgEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg184BusHiSpdRollgCntr = *TSC_GmMsg184BusHiSpd_Rte_Pim_GmMsg184BusHiSpdRollgCntr();
  *TSC_GmMsg184BusHiSpd_Rte_Pim_GmMsg184BusHiSpdRollgCntr() = GmMsg184BusHiSpdRollgCntr;

  LoaMgrHwTqIdptSigFltThd_Val_data = TSC_GmMsg184BusHiSpd_Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val();
  GmMsg184BusHiSpdTqPolarity_Val_data = TSC_GmMsg184BusHiSpd_Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val();
  GmOvrlStMgrLkaMfgEna_Logl_data = TSC_GmMsg184BusHiSpd_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg184BusHiSpd_STOP_SEC_CODE
#include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
