/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StOutpCtrl.c
 *        Config:  EPS.dpa
 *     SW-C Type:  StOutpCtrl
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StOutpCtrl>
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

#include "Rte_StOutpCtrl.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_StOutpCtrl.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void StOutpCtrl_TestDefines(void);


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
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_StOutpCtrlPrevCmdSca(void)
 *   float32 *Rte_Pim_dStOutpCtrlRateLim(void)
 *   float32 *Rte_Pim_dStOutpCtrlTarSca(void)
 *   uint8 *Rte_Pim_StOutpCtrlPrevSrc(void)
 *
 *********************************************************************************************************************/


#define StOutpCtrl_START_SEC_CODE
#include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StOutpCtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StOutpCtrlInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StOutpCtrl_CODE) StOutpCtrlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StOutpCtrlInit1
 *********************************************************************************************************************/

  float32 StOutpCtrlPrevCmdSca;
  float32 dStOutpCtrlRateLim;
  float32 dStOutpCtrlTarSca;
  uint8 StOutpCtrlPrevSrc;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  StOutpCtrlPrevCmdSca = *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevCmdSca();
  *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevCmdSca() = StOutpCtrlPrevCmdSca;
  dStOutpCtrlRateLim = *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlRateLim();
  *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlRateLim() = dStOutpCtrlRateLim;
  dStOutpCtrlTarSca = *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlTarSca();
  *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlTarSca() = dStOutpCtrlTarSca;
  StOutpCtrlPrevSrc = *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevSrc();
  *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevSrc() = StOutpCtrlPrevSrc;

  StOutpCtrl_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StOutpCtrlPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LoaRateLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqTranlDampgCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysDiMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysDiRampRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdRampRateDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysOperMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysOperRampRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehStrtStopMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehStrtStopRampRate_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SysMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqDi_Logl(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StOutpCtrlPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StOutpCtrl_CODE) StOutpCtrlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StOutpCtrlPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_DiagcStsCtrldShtDwnFltPrsnt_Logl;
  float32 Read_LoaRateLim_Val;
  float32 Read_LoaSca_Val;
  boolean Read_MotTqTranlDampgCmpl_Logl;
  float32 Read_SysDiMotTqCmdSca_Val;
  float32 Read_SysDiRampRate_Val;
  boolean Read_SysMotTqCmdRampRateDi_Logl;
  float32 Read_SysOperMotTqCmdSca_Val;
  float32 Read_SysOperRampRate_Val;
  boolean Read_SysStFltOutpReqDi_Logl;
  float32 Read_VehStrtStopMotTqCmdSca_Val;
  float32 Read_VehStrtStopRampRate_Val;

  float32 StOutpCtrlPrevCmdSca;
  float32 dStOutpCtrlRateLim;
  float32 dStOutpCtrlTarSca;
  uint8 StOutpCtrlPrevSrc;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  StOutpCtrlPrevCmdSca = *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevCmdSca();
  *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevCmdSca() = StOutpCtrlPrevCmdSca;
  dStOutpCtrlRateLim = *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlRateLim();
  *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlRateLim() = dStOutpCtrlRateLim;
  dStOutpCtrlTarSca = *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlTarSca();
  *TSC_StOutpCtrl_Rte_Pim_dStOutpCtrlTarSca() = dStOutpCtrlTarSca;
  StOutpCtrlPrevSrc = *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevSrc();
  *TSC_StOutpCtrl_Rte_Pim_StOutpCtrlPrevSrc() = StOutpCtrlPrevSrc;

  fct_status = TSC_StOutpCtrl_Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(&Read_DiagcStsCtrldShtDwnFltPrsnt_Logl);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_LoaRateLim_Val(&Read_LoaRateLim_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_LoaSca_Val(&Read_LoaSca_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_MotTqTranlDampgCmpl_Logl(&Read_MotTqTranlDampgCmpl_Logl);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_SysDiMotTqCmdSca_Val(&Read_SysDiMotTqCmdSca_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_SysDiRampRate_Val(&Read_SysDiRampRate_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_SysMotTqCmdRampRateDi_Logl(&Read_SysMotTqCmdRampRateDi_Logl);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_SysOperMotTqCmdSca_Val(&Read_SysOperMotTqCmdSca_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_SysOperRampRate_Val(&Read_SysOperRampRate_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_SysStFltOutpReqDi_Logl(&Read_SysStFltOutpReqDi_Logl);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_VehStrtStopMotTqCmdSca_Val(&Read_VehStrtStopMotTqCmdSca_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Read_VehStrtStopRampRate_Val(&Read_VehStrtStopRampRate_Val);
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

  fct_status = TSC_StOutpCtrl_Rte_Write_SysMotTqCmdSca_Val(Rte_InitValue_SysMotTqCmdSca_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_StOutpCtrl_Rte_Write_SysStReqDi_Logl(Rte_InitValue_SysStReqDi_Logl);
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


#define StOutpCtrl_STOP_SEC_CODE
#include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void StOutpCtrl_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Rate1_LowerLimit;
  float32 Test_float32_UL_1 = Rate1_UpperLimit;
  float32 Test_float32_LL_2 = Rate2_LowerLimit;
  float32 Test_float32_UL_2 = Rate2_UpperLimit;
  float32 Test_float32_LL_3 = Uls2_LowerLimit;
  float32 Test_float32_UL_3 = Uls2_UpperLimit;

  uint8 Test_uint8_LL_1 = Cnt21_LowerLimit;
  uint8 Test_uint8_UL_1 = Cnt21_UpperLimit;
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
