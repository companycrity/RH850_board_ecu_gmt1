/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg1E5BusChassisExp.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmMsg1E5BusChassisExp
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg1E5BusChassisExp>
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

#include "Rte_GmMsg1E5BusChassisExp.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmMsg1E5BusChassisExp.h"


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
 *   uint8 *Rte_Pim_GmMsg1E5BusChassisExpRollgCntr(void)
 *
 *********************************************************************************************************************/


#define GmMsg1E5BusChassisExp_START_SEC_CODE
#include "GmMsg1E5BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1E5BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrimPrfmd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgVldToSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SteerWhlAgAlvRollgCntBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtMaskBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtVldBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgMaskBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrCalStsBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrChksBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrTypBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgVldBusChassisExp_Val(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg1E5BusChassisExpPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg1E5BusChassisExp_CODE) GmMsg1E5BusChassisExpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg1E5BusChassisExpPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  boolean Read_HwAgTrimPrfmd_Logl;
  boolean Read_HwAgVldToSerlCom_Logl;
  float32 Read_HwVel_Val;

  uint8 GmMsg1E5BusChassisExpRollgCntr;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg1E5BusChassisExpRollgCntr = *TSC_GmMsg1E5BusChassisExp_Rte_Pim_GmMsg1E5BusChassisExpRollgCntr();
  *TSC_GmMsg1E5BusChassisExp_Rte_Pim_GmMsg1E5BusChassisExpRollgCntr() = GmMsg1E5BusChassisExpRollgCntr;

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Read_HwAgTrimPrfmd_Logl(&Read_HwAgTrimPrfmd_Logl);
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

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Read_HwAgVldToSerlCom_Logl(&Read_HwAgVldToSerlCom_Logl);
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

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Read_HwVel_Val(&Read_HwVel_Val);
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

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgAlvRollgCntBusChassisExp_Val(Rte_InitValue_SteerWhlAgAlvRollgCntBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgBusChassisExp_Val(Rte_InitValue_SteerWhlAgBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgGrdtBusChassisExp_Val(Rte_InitValue_SteerWhlAgGrdtBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgGrdtMaskBusChassisExp_Val(Rte_InitValue_SteerWhlAgGrdtMaskBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgGrdtVldBusChassisExp_Val(Rte_InitValue_SteerWhlAgGrdtVldBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgMaskBusChassisExp_Val(Rte_InitValue_SteerWhlAgMaskBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgSnsrCalStsBusChassisExp_Val(Rte_InitValue_SteerWhlAgSnsrCalStsBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgSnsrChksBusChassisExp_Val(Rte_InitValue_SteerWhlAgSnsrChksBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgSnsrTypBusChassisExp_Val(Rte_InitValue_SteerWhlAgSnsrTypBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgVldBusChassisExp_Val(Rte_InitValue_SteerWhlAgVldBusChassisExp_Val);
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
 * Runnable Entity Name: Msg1E5ChassisExpTxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg1E5ChassisExpTxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg1E5ChassisExpTxCallBack_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg1E5ChassisExpTxCallBack_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg1E5BusChassisExp_CODE) Msg1E5ChassisExpTxCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg1E5ChassisExpTxCallBack_Oper
 *********************************************************************************************************************/

  uint8 GmMsg1E5BusChassisExpRollgCntr;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg1E5BusChassisExpRollgCntr = *TSC_GmMsg1E5BusChassisExp_Rte_Pim_GmMsg1E5BusChassisExpRollgCntr();
  *TSC_GmMsg1E5BusChassisExp_Rte_Pim_GmMsg1E5BusChassisExpRollgCntr() = GmMsg1E5BusChassisExpRollgCntr;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg1E5BusChassisExp_STOP_SEC_CODE
#include "GmMsg1E5BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
