/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TqOscn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  TqOscn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TqOscn>
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
 * u5p11
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u8p8
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_TqOscn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_TqOscn.h"


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
 * u5p11: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u5p11_11: Array with 11 element(s) of type u5p11
 * Ary1D_u8p8_11: Array with 11 element(s) of type u8p8
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AmpRampSt(void)
 *   float32 *Rte_Pim_PrevFallRampRate(void)
 *   float32 *Rte_Pim_PrevLimdAmp(void)
 *   float32 *Rte_Pim_PrevPhaAg(void)
 *   float32 *Rte_Pim_PrevPhaAgInc(void)
 *   float32 *Rte_Pim_PrevRisngRampRate(void)
 *   float32 *Rte_Pim_dTqOscnPreFinalCmd(void)
 *   float32 *Rte_Pim_dTqOscnRateLimdAmp(void)
 *   float32 *Rte_Pim_dTqOscnSinCmd(void)
 *   boolean *Rte_Pim_PrevActv(void)
 *   boolean *Rte_Pim_PrevDcThdExcdd(void)
 *   boolean *Rte_Pim_PrevEna(void)
 *   boolean *Rte_Pim_dTqOscnNonZeroAmpFlg(void)
 *   FilLpRec1 *Rte_Pim_PreFinalCmdLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TqOscnFallRampRateCal_Val(void)
 *   float32 Rte_Prm_TqOscnRisngRampRateCal_Val(void)
 *   boolean Rte_Prm_TqOscnUseRampRateCal_Logl(void)
 *   u5p11 *Rte_Prm_TqOscnAmpLimY_Ary1D(void)
 *     Returnvalue: u5p11* is of type Ary1D_u5p11_11
 *   u8p8 *Rte_Prm_TqOscnFrqIn_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_11
 *
 *********************************************************************************************************************/


#define TqOscn_START_SEC_CODE
#include "TqOscn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqOscnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TqOscnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TqOscn_CODE) TqOscnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TqOscnInit1
 *********************************************************************************************************************/

  float32 AmpRampSt;
  float32 PrevFallRampRate;
  float32 PrevLimdAmp;
  float32 PrevPhaAg;
  float32 PrevPhaAgInc;
  float32 PrevRisngRampRate;
  float32 dTqOscnPreFinalCmd;
  float32 dTqOscnRateLimdAmp;
  float32 dTqOscnSinCmd;
  boolean PrevActv;
  boolean PrevDcThdExcdd;
  boolean PrevEna;
  boolean dTqOscnNonZeroAmpFlg;
  FilLpRec1 PreFinalCmdLpFil;

  float32 TqOscnFallRampRateCal_Val_data;
  float32 TqOscnRisngRampRateCal_Val_data;
  boolean TqOscnUseRampRateCal_Logl_data;
  Ary1D_u5p11_11 TqOscnAmpLimY_Ary1D_data;
  Ary1D_u8p8_11 TqOscnFrqIn_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AmpRampSt = *TSC_TqOscn_Rte_Pim_AmpRampSt();
  *TSC_TqOscn_Rte_Pim_AmpRampSt() = AmpRampSt;
  PrevFallRampRate = *TSC_TqOscn_Rte_Pim_PrevFallRampRate();
  *TSC_TqOscn_Rte_Pim_PrevFallRampRate() = PrevFallRampRate;
  PrevLimdAmp = *TSC_TqOscn_Rte_Pim_PrevLimdAmp();
  *TSC_TqOscn_Rte_Pim_PrevLimdAmp() = PrevLimdAmp;
  PrevPhaAg = *TSC_TqOscn_Rte_Pim_PrevPhaAg();
  *TSC_TqOscn_Rte_Pim_PrevPhaAg() = PrevPhaAg;
  PrevPhaAgInc = *TSC_TqOscn_Rte_Pim_PrevPhaAgInc();
  *TSC_TqOscn_Rte_Pim_PrevPhaAgInc() = PrevPhaAgInc;
  PrevRisngRampRate = *TSC_TqOscn_Rte_Pim_PrevRisngRampRate();
  *TSC_TqOscn_Rte_Pim_PrevRisngRampRate() = PrevRisngRampRate;
  dTqOscnPreFinalCmd = *TSC_TqOscn_Rte_Pim_dTqOscnPreFinalCmd();
  *TSC_TqOscn_Rte_Pim_dTqOscnPreFinalCmd() = dTqOscnPreFinalCmd;
  dTqOscnRateLimdAmp = *TSC_TqOscn_Rte_Pim_dTqOscnRateLimdAmp();
  *TSC_TqOscn_Rte_Pim_dTqOscnRateLimdAmp() = dTqOscnRateLimdAmp;
  dTqOscnSinCmd = *TSC_TqOscn_Rte_Pim_dTqOscnSinCmd();
  *TSC_TqOscn_Rte_Pim_dTqOscnSinCmd() = dTqOscnSinCmd;
  PrevActv = *TSC_TqOscn_Rte_Pim_PrevActv();
  *TSC_TqOscn_Rte_Pim_PrevActv() = PrevActv;
  PrevDcThdExcdd = *TSC_TqOscn_Rte_Pim_PrevDcThdExcdd();
  *TSC_TqOscn_Rte_Pim_PrevDcThdExcdd() = PrevDcThdExcdd;
  PrevEna = *TSC_TqOscn_Rte_Pim_PrevEna();
  *TSC_TqOscn_Rte_Pim_PrevEna() = PrevEna;
  dTqOscnNonZeroAmpFlg = *TSC_TqOscn_Rte_Pim_dTqOscnNonZeroAmpFlg();
  *TSC_TqOscn_Rte_Pim_dTqOscnNonZeroAmpFlg() = dTqOscnNonZeroAmpFlg;
  PreFinalCmdLpFil = *TSC_TqOscn_Rte_Pim_PreFinalCmdLpFil();
  *TSC_TqOscn_Rte_Pim_PreFinalCmdLpFil() = PreFinalCmdLpFil;

  TqOscnFallRampRateCal_Val_data = TSC_TqOscn_Rte_Prm_TqOscnFallRampRateCal_Val();
  TqOscnRisngRampRateCal_Val_data = TSC_TqOscn_Rte_Prm_TqOscnRisngRampRateCal_Val();
  TqOscnUseRampRateCal_Logl_data = TSC_TqOscn_Rte_Prm_TqOscnUseRampRateCal_Logl();
  (void)memcpy(TqOscnAmpLimY_Ary1D_data, TSC_TqOscn_Rte_Prm_TqOscnAmpLimY_Ary1D(), sizeof(Ary1D_u5p11_11));
  (void)memcpy(TqOscnFrqIn_Ary1D_data, TSC_TqOscn_Rte_Prm_TqOscnFrqIn_Ary1D(), sizeof(Ary1D_u8p8_11));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqOscnPer1
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
 *   Std_ReturnType Rte_Read_HwOscnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwOscnFallRampRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwOscnFrq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwOscnMotAmp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwOscnRisngRampRate_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwOscnActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwOscnCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwOscnDcThdExcdd_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TqOscnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TqOscn_CODE) TqOscnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TqOscnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_HwOscnEna_Logl;
  float32 Read_HwOscnFallRampRate_Val;
  float32 Read_HwOscnFrq_Val;
  float32 Read_HwOscnMotAmp_Val;
  float32 Read_HwOscnRisngRampRate_Val;

  float32 AmpRampSt;
  float32 PrevFallRampRate;
  float32 PrevLimdAmp;
  float32 PrevPhaAg;
  float32 PrevPhaAgInc;
  float32 PrevRisngRampRate;
  float32 dTqOscnPreFinalCmd;
  float32 dTqOscnRateLimdAmp;
  float32 dTqOscnSinCmd;
  boolean PrevActv;
  boolean PrevDcThdExcdd;
  boolean PrevEna;
  boolean dTqOscnNonZeroAmpFlg;
  FilLpRec1 PreFinalCmdLpFil;

  float32 TqOscnFallRampRateCal_Val_data;
  float32 TqOscnRisngRampRateCal_Val_data;
  boolean TqOscnUseRampRateCal_Logl_data;
  Ary1D_u5p11_11 TqOscnAmpLimY_Ary1D_data;
  Ary1D_u8p8_11 TqOscnFrqIn_Ary1D_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AmpRampSt = *TSC_TqOscn_Rte_Pim_AmpRampSt();
  *TSC_TqOscn_Rte_Pim_AmpRampSt() = AmpRampSt;
  PrevFallRampRate = *TSC_TqOscn_Rte_Pim_PrevFallRampRate();
  *TSC_TqOscn_Rte_Pim_PrevFallRampRate() = PrevFallRampRate;
  PrevLimdAmp = *TSC_TqOscn_Rte_Pim_PrevLimdAmp();
  *TSC_TqOscn_Rte_Pim_PrevLimdAmp() = PrevLimdAmp;
  PrevPhaAg = *TSC_TqOscn_Rte_Pim_PrevPhaAg();
  *TSC_TqOscn_Rte_Pim_PrevPhaAg() = PrevPhaAg;
  PrevPhaAgInc = *TSC_TqOscn_Rte_Pim_PrevPhaAgInc();
  *TSC_TqOscn_Rte_Pim_PrevPhaAgInc() = PrevPhaAgInc;
  PrevRisngRampRate = *TSC_TqOscn_Rte_Pim_PrevRisngRampRate();
  *TSC_TqOscn_Rte_Pim_PrevRisngRampRate() = PrevRisngRampRate;
  dTqOscnPreFinalCmd = *TSC_TqOscn_Rte_Pim_dTqOscnPreFinalCmd();
  *TSC_TqOscn_Rte_Pim_dTqOscnPreFinalCmd() = dTqOscnPreFinalCmd;
  dTqOscnRateLimdAmp = *TSC_TqOscn_Rte_Pim_dTqOscnRateLimdAmp();
  *TSC_TqOscn_Rte_Pim_dTqOscnRateLimdAmp() = dTqOscnRateLimdAmp;
  dTqOscnSinCmd = *TSC_TqOscn_Rte_Pim_dTqOscnSinCmd();
  *TSC_TqOscn_Rte_Pim_dTqOscnSinCmd() = dTqOscnSinCmd;
  PrevActv = *TSC_TqOscn_Rte_Pim_PrevActv();
  *TSC_TqOscn_Rte_Pim_PrevActv() = PrevActv;
  PrevDcThdExcdd = *TSC_TqOscn_Rte_Pim_PrevDcThdExcdd();
  *TSC_TqOscn_Rte_Pim_PrevDcThdExcdd() = PrevDcThdExcdd;
  PrevEna = *TSC_TqOscn_Rte_Pim_PrevEna();
  *TSC_TqOscn_Rte_Pim_PrevEna() = PrevEna;
  dTqOscnNonZeroAmpFlg = *TSC_TqOscn_Rte_Pim_dTqOscnNonZeroAmpFlg();
  *TSC_TqOscn_Rte_Pim_dTqOscnNonZeroAmpFlg() = dTqOscnNonZeroAmpFlg;
  PreFinalCmdLpFil = *TSC_TqOscn_Rte_Pim_PreFinalCmdLpFil();
  *TSC_TqOscn_Rte_Pim_PreFinalCmdLpFil() = PreFinalCmdLpFil;

  TqOscnFallRampRateCal_Val_data = TSC_TqOscn_Rte_Prm_TqOscnFallRampRateCal_Val();
  TqOscnRisngRampRateCal_Val_data = TSC_TqOscn_Rte_Prm_TqOscnRisngRampRateCal_Val();
  TqOscnUseRampRateCal_Logl_data = TSC_TqOscn_Rte_Prm_TqOscnUseRampRateCal_Logl();
  (void)memcpy(TqOscnAmpLimY_Ary1D_data, TSC_TqOscn_Rte_Prm_TqOscnAmpLimY_Ary1D(), sizeof(Ary1D_u5p11_11));
  (void)memcpy(TqOscnFrqIn_Ary1D_data, TSC_TqOscn_Rte_Prm_TqOscnFrqIn_Ary1D(), sizeof(Ary1D_u8p8_11));

  fct_status = TSC_TqOscn_Rte_Read_HwOscnEna_Logl(&Read_HwOscnEna_Logl);
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

  fct_status = TSC_TqOscn_Rte_Read_HwOscnFallRampRate_Val(&Read_HwOscnFallRampRate_Val);
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

  fct_status = TSC_TqOscn_Rte_Read_HwOscnFrq_Val(&Read_HwOscnFrq_Val);
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

  fct_status = TSC_TqOscn_Rte_Read_HwOscnMotAmp_Val(&Read_HwOscnMotAmp_Val);
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

  fct_status = TSC_TqOscn_Rte_Read_HwOscnRisngRampRate_Val(&Read_HwOscnRisngRampRate_Val);
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

  fct_status = TSC_TqOscn_Rte_Write_HwOscnActv_Logl(Rte_InitValue_HwOscnActv_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TqOscn_Rte_Write_HwOscnCmd_Val(Rte_InitValue_HwOscnCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TqOscn_Rte_Write_HwOscnDcThdExcdd_Logl(Rte_InitValue_HwOscnDcThdExcdd_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TqOscn_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
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


#define TqOscn_STOP_SEC_CODE
#include "TqOscn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
