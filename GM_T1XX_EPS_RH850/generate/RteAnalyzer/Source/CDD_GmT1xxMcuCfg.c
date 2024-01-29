/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_GmT1xxMcuCfg.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_GmT1xxMcuCfg
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_GmT1xxMcuCfg>
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

#include "Rte_CDD_GmT1xxMcuCfg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_GmT1xxMcuCfg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void CDD_GmT1xxMcuCfg_TestDefines(void);


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
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 *********************************************************************************************************************/


#define CDD_GmT1xxMcuCfg_START_SEC_CODE
#include "CDD_GmT1xxMcuCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmT1xxMcuCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgInit1
 *********************************************************************************************************************/

  CDD_GmT1xxMcuCfg_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmT1xxMcuCfgInit2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgInit2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgInit2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgInit2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 Call_GetRefTmr1MicroSec32bit_Oper_RefTmr = 0U;
  uint32 Call_GetTiSpan1MicroSec32bit_Oper_TiSpan = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Call_GetRefTmr1MicroSec32bit_Oper(&Call_GetRefTmr1MicroSec32bit_Oper_RefTmr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Call_GetTiSpan1MicroSec32bit_Oper(0U, &Call_GetTiSpan1MicroSec32bit_Oper_TiSpan);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmT1xxMcuCfgInit3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Adc1SelfDiag0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag2_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag4_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltgSwd1_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltgSwd2_Val(float32 data)
 *   Std_ReturnType Rte_Write_EcuT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Cos_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Sin_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgInit3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgInit3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgInit3
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag0_Val(Rte_InitValue_Adc1SelfDiag0_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag2_Val(Rte_InitValue_Adc1SelfDiag2_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag4_Val(Rte_InitValue_Adc1SelfDiag4_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltg_Val(Rte_InitValue_BattVltg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd1_Val(Rte_InitValue_BattVltgSwd1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd2_Val(Rte_InitValue_BattVltgSwd2_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_EcuT_Val(Rte_InitValue_EcuT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2Cos_Val(Rte_InitValue_MotAg2Cos_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2Sin_Val(Rte_InitValue_MotAg2Sin_Val);
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
 * Runnable Entity Name: GmT1xxMcuCfgPer2
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
 *   Std_ReturnType Rte_Write_Adc1ScanGroup2Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup2Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup3Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup3Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag2_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag4_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltgSwd1_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltgSwd2_Val(float32 data)
 *   Std_ReturnType Rte_Write_EcuT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Cos_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Sin_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgPer2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup2Ref0_Val(Rte_InitValue_Adc1ScanGroup2Ref0_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup2Ref1_Val(Rte_InitValue_Adc1ScanGroup2Ref1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup3Ref0_Val(Rte_InitValue_Adc1ScanGroup3Ref0_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup3Ref1_Val(Rte_InitValue_Adc1ScanGroup3Ref1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag0_Val(Rte_InitValue_Adc1SelfDiag0_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag2_Val(Rte_InitValue_Adc1SelfDiag2_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag4_Val(Rte_InitValue_Adc1SelfDiag4_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltg_Val(Rte_InitValue_BattVltg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd1_Val(Rte_InitValue_BattVltgSwd1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd2_Val(Rte_InitValue_BattVltgSwd2_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_EcuT_Val(Rte_InitValue_EcuT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2Cos_Val(Rte_InitValue_MotAg2Cos_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2Sin_Val(Rte_InitValue_MotAg2Sin_Val);
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
 * Runnable Entity Name: GmT1xxMcuCfgPer3
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
 *   Std_ReturnType Rte_Read_Adc0Faild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Adc1Faild_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BattVltgAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_BattVltgSwd1AdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_BattVltgSwd2AdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EcuTAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAg2CosAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAg2SinAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakAAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakBAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakCAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakDAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakEAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakFAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyAAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyBAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyCAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyDAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyEAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyFAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrSnsrOffs1AdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrSnsrOffs2AdcFaild_Logl(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgPer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgPer3
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_Adc0Faild_Logl;
  boolean Read_Adc1Faild_Logl;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Read_Adc0Faild_Logl(&Read_Adc0Faild_Logl);
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

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Read_Adc1Faild_Logl(&Read_Adc1Faild_Logl);
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

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgAdcFaild_Logl(Rte_InitValue_BattVltgAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd1AdcFaild_Logl(Rte_InitValue_BattVltgSwd1AdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd2AdcFaild_Logl(Rte_InitValue_BattVltgSwd2AdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_EcuTAdcFaild_Logl(Rte_InitValue_EcuTAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2CosAdcFaild_Logl(Rte_InitValue_MotAg2CosAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2SinAdcFaild_Logl(Rte_InitValue_MotAg2SinAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakAAdcFaild_Logl(Rte_InitValue_MotCurrAdcPeakAAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakBAdcFaild_Logl(Rte_InitValue_MotCurrAdcPeakBAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakCAdcFaild_Logl(Rte_InitValue_MotCurrAdcPeakCAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakDAdcFaild_Logl(Rte_InitValue_MotCurrAdcPeakDAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakEAdcFaild_Logl(Rte_InitValue_MotCurrAdcPeakEAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakFAdcFaild_Logl(Rte_InitValue_MotCurrAdcPeakFAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyAAdcFaild_Logl(Rte_InitValue_MotCurrAdcVlyAAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyBAdcFaild_Logl(Rte_InitValue_MotCurrAdcVlyBAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyCAdcFaild_Logl(Rte_InitValue_MotCurrAdcVlyCAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyDAdcFaild_Logl(Rte_InitValue_MotCurrAdcVlyDAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyEAdcFaild_Logl(Rte_InitValue_MotCurrAdcVlyEAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyFAdcFaild_Logl(Rte_InitValue_MotCurrAdcVlyFAdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrSnsrOffs1AdcFaild_Logl(Rte_InitValue_MotCurrSnsrOffs1AdcFaild_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrSnsrOffs2AdcFaild_Logl(Rte_InitValue_MotCurrSnsrOffs2AdcFaild_Logl);
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
 * Runnable Entity Name: GmT1xxMcuCfgPer4
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgPer4_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgPer4(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmT1xxMcuCfgPer4
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 Call_GetRefTmr1MicroSec32bit_Oper_RefTmr = 0U;
  uint32 Call_GetTiSpan1MicroSec32bit_Oper_TiSpan = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Call_GetRefTmr1MicroSec32bit_Oper(&Call_GetRefTmr1MicroSec32bit_Oper_RefTmr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_GmT1xxMcuCfg_Rte_Call_GetTiSpan1MicroSec32bit_Oper(0U, &Call_GetTiSpan1MicroSec32bit_Oper_TiSpan);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_GmT1xxMcuCfg_STOP_SEC_CODE
#include "CDD_GmT1xxMcuCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_GmT1xxMcuCfg_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Volt3_LowerLimit;
  float32 Test_float32_UL_1 = Volt3_UpperLimit;
  float32 Test_float32_LL_2 = Volt6_LowerLimit;
  float32 Test_float32_UL_2 = Volt6_UpperLimit;
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
