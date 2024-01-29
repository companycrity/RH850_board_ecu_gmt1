/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg1E5BusHiSpd.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmMsg1E5BusHiSpd
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg1E5BusHiSpd>
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

#include "Rte_GmMsg1E5BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmMsg1E5BusHiSpd.h"


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
 *   uint8 *Rte_Pim_GmMsg1E5BusHiSpdRollgCntr(void)
 *
 *********************************************************************************************************************/


#define GmMsg1E5BusHiSpd_START_SEC_CODE
#include "GmMsg1E5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1E5BusHiSpdPer1
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
 *   Std_ReturnType Rte_Write_SteerWhlAgAlvRollgCntBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtMaskBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtVldBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgMaskBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrCalStsBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrChksBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrTypBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgVldBusHiSpd_Val(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg1E5BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg1E5BusHiSpd_CODE) GmMsg1E5BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg1E5BusHiSpdPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  boolean Read_HwAgTrimPrfmd_Logl;
  boolean Read_HwAgVldToSerlCom_Logl;
  float32 Read_HwVel_Val;

  uint8 GmMsg1E5BusHiSpdRollgCntr;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg1E5BusHiSpdRollgCntr = *TSC_GmMsg1E5BusHiSpd_Rte_Pim_GmMsg1E5BusHiSpdRollgCntr();
  *TSC_GmMsg1E5BusHiSpd_Rte_Pim_GmMsg1E5BusHiSpdRollgCntr() = GmMsg1E5BusHiSpdRollgCntr;

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Read_HwAgTrimPrfmd_Logl(&Read_HwAgTrimPrfmd_Logl);
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

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Read_HwAgVldToSerlCom_Logl(&Read_HwAgVldToSerlCom_Logl);
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

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Read_HwVel_Val(&Read_HwVel_Val);
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

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgAlvRollgCntBusHiSpd_Val(Rte_InitValue_SteerWhlAgAlvRollgCntBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgBusHiSpd_Val(Rte_InitValue_SteerWhlAgBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgGrdtBusHiSpd_Val(Rte_InitValue_SteerWhlAgGrdtBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgGrdtMaskBusHiSpd_Val(Rte_InitValue_SteerWhlAgGrdtMaskBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgGrdtVldBusHiSpd_Val(Rte_InitValue_SteerWhlAgGrdtVldBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgMaskBusHiSpd_Val(Rte_InitValue_SteerWhlAgMaskBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgSnsrCalStsBusHiSpd_Val(Rte_InitValue_SteerWhlAgSnsrCalStsBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgSnsrChksBusHiSpd_Val(Rte_InitValue_SteerWhlAgSnsrChksBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgSnsrTypBusHiSpd_Val(Rte_InitValue_SteerWhlAgSnsrTypBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmMsg1E5BusHiSpd_Rte_Write_SteerWhlAgVldBusHiSpd_Val(Rte_InitValue_SteerWhlAgVldBusHiSpd_Val);
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
 * Runnable Entity Name: Msg1E5HiSpdCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg1E5HiSpdCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg1E5HiSpdCallBack_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg1E5HiSpdCallBack_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmMsg1E5BusHiSpd_CODE) Msg1E5HiSpdCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg1E5HiSpdCallBack_Oper
 *********************************************************************************************************************/

  uint8 GmMsg1E5BusHiSpdRollgCntr;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmMsg1E5BusHiSpdRollgCntr = *TSC_GmMsg1E5BusHiSpd_Rte_Pim_GmMsg1E5BusHiSpdRollgCntr();
  *TSC_GmMsg1E5BusHiSpd_Rte_Pim_GmMsg1E5BusHiSpdRollgCntr() = GmMsg1E5BusHiSpdRollgCntr;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg1E5BusHiSpd_STOP_SEC_CODE
#include "GmMsg1E5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
