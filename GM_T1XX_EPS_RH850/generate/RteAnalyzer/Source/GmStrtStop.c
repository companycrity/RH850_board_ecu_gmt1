/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmStrtStop.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmStrtStop
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmStrtStop>
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

#include "Rte_GmStrtStop.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmStrtStop.h"


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
 * uint32: Integer in interval [0...4294967295] (standard type)
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
 *   uint32 *Rte_Pim_Mod1RefTmr(void)
 *   uint32 *Rte_Pim_Mod2RefTmr(void)
 *   uint8 *Rte_Pim_PrevActSt(void)
 *   uint8 *Rte_Pim_PrevStrtStopSt(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmStrtStopFltRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1EngTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1Sca_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1ToStopRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod2Sca_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormModEngTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormToMod1RateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopAndMod2RateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1Tmr_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2Tmr_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopModSca_Val(void)
 *   boolean Rte_Prm_GmStrtStopEna_Logl(void)
 *
 *********************************************************************************************************************/


#define GmStrtStop_START_SEC_CODE
#include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmStrtStopInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmStrtStopInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmStrtStop_CODE) GmStrtStopInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmStrtStopInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 Mod1RefTmr;
  uint32 Mod2RefTmr;
  uint8 PrevActSt;
  uint8 PrevStrtStopSt;

  float32 GmStrtStopFltRateLim_Val_data;
  float32 GmStrtStopMod1EngTranThd_Val_data;
  float32 GmStrtStopMod1Sca_Val_data;
  float32 GmStrtStopMod1ToStopRateLim_Val_data;
  float32 GmStrtStopMod1VehSpdTranThd_Val_data;
  float32 GmStrtStopMod2Sca_Val_data;
  float32 GmStrtStopNormModEngTranThd_Val_data;
  float32 GmStrtStopNormModVehSpdTranThd_Val_data;
  float32 GmStrtStopNormRateLim_Val_data;
  float32 GmStrtStopNormToMod1RateLim_Val_data;
  float32 GmStrtStopStopAndMod2RateLim_Val_data;
  float32 GmStrtStopStopMod1HwTqTranThd_Val_data;
  float32 GmStrtStopStopMod1HwVelTranThd_Val_data;
  float32 GmStrtStopStopMod1Tmr_Val_data;
  float32 GmStrtStopStopMod1VehSpdTranThd_Val_data;
  float32 GmStrtStopStopMod2HwTqTranThd_Val_data;
  float32 GmStrtStopStopMod2HwVelTranThd_Val_data;
  float32 GmStrtStopStopMod2Tmr_Val_data;
  float32 GmStrtStopStopMod2VehSpdTranThd_Val_data;
  float32 GmStrtStopStopModSca_Val_data;
  boolean GmStrtStopEna_Logl_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  Mod1RefTmr = *TSC_GmStrtStop_Rte_Pim_Mod1RefTmr();
  *TSC_GmStrtStop_Rte_Pim_Mod1RefTmr() = Mod1RefTmr;
  Mod2RefTmr = *TSC_GmStrtStop_Rte_Pim_Mod2RefTmr();
  *TSC_GmStrtStop_Rte_Pim_Mod2RefTmr() = Mod2RefTmr;
  PrevActSt = *TSC_GmStrtStop_Rte_Pim_PrevActSt();
  *TSC_GmStrtStop_Rte_Pim_PrevActSt() = PrevActSt;
  PrevStrtStopSt = *TSC_GmStrtStop_Rte_Pim_PrevStrtStopSt();
  *TSC_GmStrtStop_Rte_Pim_PrevStrtStopSt() = PrevStrtStopSt;

  GmStrtStopFltRateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopFltRateLim_Val();
  GmStrtStopMod1EngTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1EngTranThd_Val();
  GmStrtStopMod1Sca_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1Sca_Val();
  GmStrtStopMod1ToStopRateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1ToStopRateLim_Val();
  GmStrtStopMod1VehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val();
  GmStrtStopMod2Sca_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod2Sca_Val();
  GmStrtStopNormModEngTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModEngTranThd_Val();
  GmStrtStopNormModVehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val();
  GmStrtStopNormRateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormRateLim_Val();
  GmStrtStopNormToMod1RateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormToMod1RateLim_Val();
  GmStrtStopStopAndMod2RateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopAndMod2RateLim_Val();
  GmStrtStopStopMod1HwTqTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val();
  GmStrtStopStopMod1HwVelTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val();
  GmStrtStopStopMod1Tmr_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1Tmr_Val();
  GmStrtStopStopMod1VehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val();
  GmStrtStopStopMod2HwTqTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val();
  GmStrtStopStopMod2HwVelTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val();
  GmStrtStopStopMod2Tmr_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2Tmr_Val();
  GmStrtStopStopMod2VehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val();
  GmStrtStopStopModSca_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopModSca_Val();
  GmStrtStopEna_Logl_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopEna_Logl();

  fct_status = TSC_GmStrtStop_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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
 * Runnable Entity Name: GmStrtStopPer1
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
 *   Std_ReturnType Rte_Read_EngSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_Msg0C9BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg0C9BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehStrtStopMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehStrtStopRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehStrtStopSt_Val(uint8 data)
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
 * Symbol: GmStrtStopPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmStrtStop_CODE) GmStrtStopPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmStrtStopPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_EngSpd_Val;
  float32 Read_HwTq_Val;
  float32 Read_HwVel_Val;
  boolean Read_Msg0C9BusHiSpdInvld_Logl;
  boolean Read_Msg0C9BusHiSpdMiss_Logl;
  float32 Read_VehSpd_Val;
  boolean Read_VehSpdVld_Logl;

  uint32 Mod1RefTmr;
  uint32 Mod2RefTmr;
  uint8 PrevActSt;
  uint8 PrevStrtStopSt;

  float32 GmStrtStopFltRateLim_Val_data;
  float32 GmStrtStopMod1EngTranThd_Val_data;
  float32 GmStrtStopMod1Sca_Val_data;
  float32 GmStrtStopMod1ToStopRateLim_Val_data;
  float32 GmStrtStopMod1VehSpdTranThd_Val_data;
  float32 GmStrtStopMod2Sca_Val_data;
  float32 GmStrtStopNormModEngTranThd_Val_data;
  float32 GmStrtStopNormModVehSpdTranThd_Val_data;
  float32 GmStrtStopNormRateLim_Val_data;
  float32 GmStrtStopNormToMod1RateLim_Val_data;
  float32 GmStrtStopStopAndMod2RateLim_Val_data;
  float32 GmStrtStopStopMod1HwTqTranThd_Val_data;
  float32 GmStrtStopStopMod1HwVelTranThd_Val_data;
  float32 GmStrtStopStopMod1Tmr_Val_data;
  float32 GmStrtStopStopMod1VehSpdTranThd_Val_data;
  float32 GmStrtStopStopMod2HwTqTranThd_Val_data;
  float32 GmStrtStopStopMod2HwVelTranThd_Val_data;
  float32 GmStrtStopStopMod2Tmr_Val_data;
  float32 GmStrtStopStopMod2VehSpdTranThd_Val_data;
  float32 GmStrtStopStopModSca_Val_data;
  boolean GmStrtStopEna_Logl_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;
  uint32 Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  Mod1RefTmr = *TSC_GmStrtStop_Rte_Pim_Mod1RefTmr();
  *TSC_GmStrtStop_Rte_Pim_Mod1RefTmr() = Mod1RefTmr;
  Mod2RefTmr = *TSC_GmStrtStop_Rte_Pim_Mod2RefTmr();
  *TSC_GmStrtStop_Rte_Pim_Mod2RefTmr() = Mod2RefTmr;
  PrevActSt = *TSC_GmStrtStop_Rte_Pim_PrevActSt();
  *TSC_GmStrtStop_Rte_Pim_PrevActSt() = PrevActSt;
  PrevStrtStopSt = *TSC_GmStrtStop_Rte_Pim_PrevStrtStopSt();
  *TSC_GmStrtStop_Rte_Pim_PrevStrtStopSt() = PrevStrtStopSt;

  GmStrtStopFltRateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopFltRateLim_Val();
  GmStrtStopMod1EngTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1EngTranThd_Val();
  GmStrtStopMod1Sca_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1Sca_Val();
  GmStrtStopMod1ToStopRateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1ToStopRateLim_Val();
  GmStrtStopMod1VehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val();
  GmStrtStopMod2Sca_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopMod2Sca_Val();
  GmStrtStopNormModEngTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModEngTranThd_Val();
  GmStrtStopNormModVehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val();
  GmStrtStopNormRateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormRateLim_Val();
  GmStrtStopNormToMod1RateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopNormToMod1RateLim_Val();
  GmStrtStopStopAndMod2RateLim_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopAndMod2RateLim_Val();
  GmStrtStopStopMod1HwTqTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val();
  GmStrtStopStopMod1HwVelTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val();
  GmStrtStopStopMod1Tmr_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1Tmr_Val();
  GmStrtStopStopMod1VehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val();
  GmStrtStopStopMod2HwTqTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val();
  GmStrtStopStopMod2HwVelTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val();
  GmStrtStopStopMod2Tmr_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2Tmr_Val();
  GmStrtStopStopMod2VehSpdTranThd_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val();
  GmStrtStopStopModSca_Val_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopStopModSca_Val();
  GmStrtStopEna_Logl_data = TSC_GmStrtStop_Rte_Prm_GmStrtStopEna_Logl();

  fct_status = TSC_GmStrtStop_Rte_Read_EngSpd_Val(&Read_EngSpd_Val);
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

  fct_status = TSC_GmStrtStop_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_GmStrtStop_Rte_Read_HwVel_Val(&Read_HwVel_Val);
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

  fct_status = TSC_GmStrtStop_Rte_Read_Msg0C9BusHiSpdInvld_Logl(&Read_Msg0C9BusHiSpdInvld_Logl);
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

  fct_status = TSC_GmStrtStop_Rte_Read_Msg0C9BusHiSpdMiss_Logl(&Read_Msg0C9BusHiSpdMiss_Logl);
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

  fct_status = TSC_GmStrtStop_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_GmStrtStop_Rte_Read_VehSpdVld_Logl(&Read_VehSpdVld_Logl);
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

  fct_status = TSC_GmStrtStop_Rte_Write_VehStrtStopMotTqCmdSca_Val(Rte_InitValue_VehStrtStopMotTqCmdSca_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmStrtStop_Rte_Write_VehStrtStopRampRate_Val(Rte_InitValue_VehStrtStopRampRate_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmStrtStop_Rte_Write_VehStrtStopSt_Val(Rte_InitValue_VehStrtStopSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmStrtStop_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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

  fct_status = TSC_GmStrtStop_Rte_Call_GetTiSpan100MicroSec32bit_Oper(0U, &Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg);
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


#define GmStrtStop_STOP_SEC_CODE
#include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
