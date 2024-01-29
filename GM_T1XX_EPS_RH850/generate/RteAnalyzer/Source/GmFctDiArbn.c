/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmFctDiArbn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmFctDiArbn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmFctDiArbn>
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
 * GmFctDiArbnSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * LoaSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_GmFctDiArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmFctDiArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void GmFctDiArbn_TestDefines(void);


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
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * GmFctDiArbnSts1: Enumeration of integer in interval [0...255] with enumerators
 *   GMFCTDIARBNSTS_WAIT (0U)
 *   GMFCTDIARBNSTS_INPROC (1U)
 *   GMFCTDIARBNSTS_PASSD (2U)
 *   GMFCTDIARBNSTS_SWBASDMTGTNFAIL (3U)
 *   GMFCTDIARBNSTS_TIMEOUTFAIL (4U)
 * LoaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   LOAST_NORM (0U)
 *   LOAST_LIMD (1U)
 *   LOAST_SWBASDMTGTN (2U)
 *   LOAST_FADEOUT (3U)
 *   LOAST_CTRLDSHTDWNREQD (4U)
 *   LOAST_IMDTSHTDWNREQD (5U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_InCcwEotRngElpdTi(void)
 *   uint32 *Rte_Pim_InCwEotRngElpdTi(void)
 *   uint32 *Rte_Pim_OnCentrElpdTi(void)
 *   boolean *Rte_Pim_CcwEotEnad(void)
 *   boolean *Rte_Pim_CwEotEnad(void)
 *   boolean *Rte_Pim_FctDiLtch(void)
 *   boolean *Rte_Pim_InCcwEotRng(void)
 *   boolean *Rte_Pim_InCwEotRng(void)
 *   boolean *Rte_Pim_InOnCentrRng(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmFctDiArbnEotHwAgThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnEotTi_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrTi_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnSrvTi_Val(void)
 *
 *********************************************************************************************************************/


#define GmFctDiArbn_START_SEC_CODE
#include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiArbnInit1
 *********************************************************************************************************************/

  uint32 InCcwEotRngElpdTi;
  uint32 InCwEotRngElpdTi;
  uint32 OnCentrElpdTi;
  boolean CcwEotEnad;
  boolean CwEotEnad;
  boolean FctDiLtch;
  boolean InCcwEotRng;
  boolean InCwEotRng;
  boolean InOnCentrRng;

  float32 GmFctDiArbnEotHwAgThd_Val_data;
  float32 GmFctDiArbnEotTi_Val_data;
  float32 GmFctDiArbnOnCentrHwAgThd_Val_data;
  float32 GmFctDiArbnOnCentrHwTqThd_Val_data;
  float32 GmFctDiArbnOnCentrTi_Val_data;
  float32 GmFctDiArbnSrvTi_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  InCcwEotRngElpdTi = *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi() = InCcwEotRngElpdTi;
  InCwEotRngElpdTi = *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi() = InCwEotRngElpdTi;
  OnCentrElpdTi = *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi() = OnCentrElpdTi;
  CcwEotEnad = *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad();
  *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad() = CcwEotEnad;
  CwEotEnad = *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad();
  *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad() = CwEotEnad;
  FctDiLtch = *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch();
  *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch() = FctDiLtch;
  InCcwEotRng = *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng();
  *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng() = InCcwEotRng;
  InCwEotRng = *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng();
  *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng() = InCwEotRng;
  InOnCentrRng = *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng();
  *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng() = InOnCentrRng;

  GmFctDiArbnEotHwAgThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotHwAgThd_Val();
  GmFctDiArbnEotTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotTi_Val();
  GmFctDiArbnOnCentrHwAgThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val();
  GmFctDiArbnOnCentrHwTqThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val();
  GmFctDiArbnOnCentrTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrTi_Val();
  GmFctDiArbnSrvTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnSrvTi_Val();

  GmFctDiArbn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiArbnPer1
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
 *   Std_ReturnType Rte_Read_ApaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApaEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EscEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_GmFctDiSts_Val(GmFctDiArbnSts1 data)
 *   Std_ReturnType Rte_Write_InertiaCmpDecelGainDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LkaEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PullCmpActvDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TunSetRtDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlImbRejctnDi_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_GmFctDiArbnPer1_FctDiReq(void)
 *   uint32 Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiArbnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_ApaEna_Logl;
  boolean Read_EscEna_Logl;
  float32 Read_HwAg_Val;
  float32 Read_HwAgEotCcw_Val;
  float32 Read_HwAgEotCw_Val;
  float32 Read_HwTq_Val;
  boolean Read_LkaEna_Logl;
  LoaSt1 Read_LoaSt_Val;

  uint32 InCcwEotRngElpdTi;
  uint32 InCwEotRngElpdTi;
  uint32 OnCentrElpdTi;
  boolean CcwEotEnad;
  boolean CwEotEnad;
  boolean FctDiLtch;
  boolean InCcwEotRng;
  boolean InCwEotRng;
  boolean InOnCentrRng;

  float32 GmFctDiArbnEotHwAgThd_Val_data;
  float32 GmFctDiArbnEotTi_Val_data;
  float32 GmFctDiArbnOnCentrHwAgThd_Val_data;
  float32 GmFctDiArbnOnCentrHwTqThd_Val_data;
  float32 GmFctDiArbnOnCentrTi_Val_data;
  float32 GmFctDiArbnSrvTi_Val_data;

  boolean GmFctDiArbnPer1_FctDiReq;
  uint32 GmFctDiArbnPer1_FctDiStrtTi;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;
  uint32 Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  InCcwEotRngElpdTi = *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi() = InCcwEotRngElpdTi;
  InCwEotRngElpdTi = *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi() = InCwEotRngElpdTi;
  OnCentrElpdTi = *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi() = OnCentrElpdTi;
  CcwEotEnad = *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad();
  *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad() = CcwEotEnad;
  CwEotEnad = *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad();
  *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad() = CwEotEnad;
  FctDiLtch = *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch();
  *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch() = FctDiLtch;
  InCcwEotRng = *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng();
  *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng() = InCcwEotRng;
  InCwEotRng = *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng();
  *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng() = InCwEotRng;
  InOnCentrRng = *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng();
  *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng() = InOnCentrRng;

  GmFctDiArbnEotHwAgThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotHwAgThd_Val();
  GmFctDiArbnEotTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotTi_Val();
  GmFctDiArbnOnCentrHwAgThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val();
  GmFctDiArbnOnCentrHwTqThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val();
  GmFctDiArbnOnCentrTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrTi_Val();
  GmFctDiArbnSrvTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnSrvTi_Val();

  fct_status = TSC_GmFctDiArbn_Rte_Read_ApaEna_Logl(&Read_ApaEna_Logl);
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

  fct_status = TSC_GmFctDiArbn_Rte_Read_EscEna_Logl(&Read_EscEna_Logl);
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

  fct_status = TSC_GmFctDiArbn_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_GmFctDiArbn_Rte_Read_HwAgEotCcw_Val(&Read_HwAgEotCcw_Val);
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

  fct_status = TSC_GmFctDiArbn_Rte_Read_HwAgEotCw_Val(&Read_HwAgEotCw_Val);
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

  fct_status = TSC_GmFctDiArbn_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_GmFctDiArbn_Rte_Read_LkaEna_Logl(&Read_LkaEna_Logl);
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

  fct_status = TSC_GmFctDiArbn_Rte_Read_LoaSt_Val(&Read_LoaSt_Val);
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

  fct_status = TSC_GmFctDiArbn_Rte_Write_ApaEnaArbn_Logl(Rte_InitValue_ApaEnaArbn_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmFctDiArbn_Rte_Write_EscEnaArbn_Logl(Rte_InitValue_EscEnaArbn_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmFctDiArbn_Rte_Write_GmFctDiSts_Val(Rte_InitValue_GmFctDiSts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmFctDiArbn_Rte_Write_InertiaCmpDecelGainDi_Logl(Rte_InitValue_InertiaCmpDecelGainDi_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmFctDiArbn_Rte_Write_LkaEnaArbn_Logl(Rte_InitValue_LkaEnaArbn_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmFctDiArbn_Rte_Write_PullCmpActvDi_Logl(Rte_InitValue_PullCmpActvDi_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmFctDiArbn_Rte_Write_TunSetRtDi_Logl(Rte_InitValue_TunSetRtDi_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmFctDiArbn_Rte_Write_WhlImbRejctnDi_Logl(Rte_InitValue_WhlImbRejctnDi_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  GmFctDiArbnPer1_FctDiReq = TSC_GmFctDiArbn_Rte_IrvRead_GmFctDiArbnPer1_FctDiReq();
  GmFctDiArbnPer1_FctDiStrtTi = TSC_GmFctDiArbn_Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi();

  fct_status = TSC_GmFctDiArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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

  fct_status = TSC_GmFctDiArbn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(0U, &Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg);
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
 * Runnable Entity Name: GmFctDiReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GmFctDiReq>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(boolean data)
 *   void Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(uint32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GmFctDiReq_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiReq_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmFctDiArbn_CODE) GmFctDiReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiReq_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 InCcwEotRngElpdTi;
  uint32 InCwEotRngElpdTi;
  uint32 OnCentrElpdTi;
  boolean CcwEotEnad;
  boolean CwEotEnad;
  boolean FctDiLtch;
  boolean InCcwEotRng;
  boolean InCwEotRng;
  boolean InOnCentrRng;

  float32 GmFctDiArbnEotHwAgThd_Val_data;
  float32 GmFctDiArbnEotTi_Val_data;
  float32 GmFctDiArbnOnCentrHwAgThd_Val_data;
  float32 GmFctDiArbnOnCentrHwTqThd_Val_data;
  float32 GmFctDiArbnOnCentrTi_Val_data;
  float32 GmFctDiArbnSrvTi_Val_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  InCcwEotRngElpdTi = *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi() = InCcwEotRngElpdTi;
  InCwEotRngElpdTi = *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi() = InCwEotRngElpdTi;
  OnCentrElpdTi = *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi();
  *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi() = OnCentrElpdTi;
  CcwEotEnad = *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad();
  *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad() = CcwEotEnad;
  CwEotEnad = *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad();
  *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad() = CwEotEnad;
  FctDiLtch = *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch();
  *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch() = FctDiLtch;
  InCcwEotRng = *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng();
  *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng() = InCcwEotRng;
  InCwEotRng = *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng();
  *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng() = InCwEotRng;
  InOnCentrRng = *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng();
  *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng() = InOnCentrRng;

  GmFctDiArbnEotHwAgThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotHwAgThd_Val();
  GmFctDiArbnEotTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotTi_Val();
  GmFctDiArbnOnCentrHwAgThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val();
  GmFctDiArbnOnCentrHwTqThd_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val();
  GmFctDiArbnOnCentrTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrTi_Val();
  GmFctDiArbnSrvTi_Val_data = TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnSrvTi_Val();

  TSC_GmFctDiArbn_Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(FALSE);
  TSC_GmFctDiArbn_Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(0U);

  fct_status = TSC_GmFctDiArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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


#define GmFctDiArbn_STOP_SEC_CODE
#include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void GmFctDiArbn_TestDefines(void)
{
  /* Enumeration Data Types */

  GmFctDiArbnSts1 Test_GmFctDiArbnSts1_V_1 = GMFCTDIARBNSTS_WAIT;
  GmFctDiArbnSts1 Test_GmFctDiArbnSts1_V_2 = GMFCTDIARBNSTS_INPROC;
  GmFctDiArbnSts1 Test_GmFctDiArbnSts1_V_3 = GMFCTDIARBNSTS_PASSD;
  GmFctDiArbnSts1 Test_GmFctDiArbnSts1_V_4 = GMFCTDIARBNSTS_SWBASDMTGTNFAIL;
  GmFctDiArbnSts1 Test_GmFctDiArbnSts1_V_5 = GMFCTDIARBNSTS_TIMEOUTFAIL;

  LoaSt1 Test_LoaSt1_V_1 = LOAST_NORM;
  LoaSt1 Test_LoaSt1_V_2 = LOAST_LIMD;
  LoaSt1 Test_LoaSt1_V_3 = LOAST_SWBASDMTGTN;
  LoaSt1 Test_LoaSt1_V_4 = LOAST_FADEOUT;
  LoaSt1 Test_LoaSt1_V_5 = LOAST_CTRLDSHTDWNREQD;
  LoaSt1 Test_LoaSt1_V_6 = LOAST_IMDTSHTDWNREQD;
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
