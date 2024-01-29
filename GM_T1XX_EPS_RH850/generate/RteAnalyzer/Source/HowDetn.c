/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HowDetn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  HowDetn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HowDetn>
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
 * s7p8
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * u8p8
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_HowDetn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_HowDetn.h"


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
 * s7p8: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s7p8_5: Array with 5 element(s) of type s7p8
 * Ary1D_s7p8_6: Array with 6 element(s) of type s7p8
 * Ary1D_u8p8_5: Array with 5 element(s) of type u8p8
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u8p8_7: Array with 7 element(s) of type u8p8
 * Ary1D_u9p7_9: Array with 9 element(s) of type u9p7
 * Ary2D_s7p8_9_5: Array with 9 element(s) of type Ary1D_s7p8_5
 * Ary2D_s7p8_9_6: Array with 9 element(s) of type Ary1D_s7p8_6
 * Ary2D_u8p8_9_5: Array with 9 element(s) of type Ary1D_u8p8_5
 * Ary2D_u8p8_9_6: Array with 9 element(s) of type Ary1D_u8p8_6
 *
 * Record Types:
 * =============
 * FilHpRec1: Record with elements
 *   FilLpRec of type FilLpRec1
 *   CorrnFac of type float32
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
 *   float32 *Rte_Pim_PrevCalcdHowEstim(void)
 *   float32 *Rte_Pim_PrevHowEstim(void)
 *   float32 *Rte_Pim_dHowDetnAbsHiFrqTq(void)
 *   float32 *Rte_Pim_dHowDetnAbsLoFrqTq(void)
 *   uint32 *Rte_Pim_RefTiHowOff(void)
 *   boolean *Rte_Pim_HowOffPrev(void)
 *   FilLpRec1 *Rte_Pim_EstimLpFil(void)
 *   FilLpRec1 *Rte_Pim_FinalLpFil(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil1(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil2(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil3(void)
 *   FilLpRec1 *Rte_Pim_StLpFil(void)
 *   FilHpRec1 *Rte_Pim_TqHpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HowDetnEstimLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnMinVehSpd_Val(void)
 *   float32 Rte_Prm_HowDetnOffThd_Val(void)
 *   float32 Rte_Prm_HowDetnOffTi_Val(void)
 *   float32 Rte_Prm_HowDetnPercOfPrevHowEstim_Val(void)
 *   float32 Rte_Prm_HowDetnSlewRate_Val(void)
 *   float32 Rte_Prm_HowDetnStLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqFinalLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqHpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqInitLpFilFrq_Val(void)
 *   u9p7 *Rte_Prm_HowDetnHiFrqGainY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_9
 *   u8p8 *Rte_Prm_HowDetnHiFrqRateX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_6
 *   s7p8 *Rte_Prm_HowDetnHiFrqRateY_Ary2D(void)
 *     Returnvalue: s7p8* is of type Ary2D_s7p8_9_6
 *   u8p8 *Rte_Prm_HowDetnLoFrqRateX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_5
 *   s7p8 *Rte_Prm_HowDetnLoFrqRateY_Ary2D(void)
 *     Returnvalue: s7p8* is of type Ary2D_s7p8_9_5
 *   u8p8 *Rte_Prm_HowDetnStThdX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_7
 *   u9p7 *Rte_Prm_HowDetnVehSpd_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_9
 *
 *********************************************************************************************************************/


#define HowDetn_START_SEC_CODE
#include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HowDetnInit1
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
 *   Std_ReturnType Rte_Write_HowDetnEstimn_Val(float32 data)
 *   Std_ReturnType Rte_Write_HowDetnFlg_Logl(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HowDetnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HowDetn_CODE) HowDetnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HowDetnInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 PrevCalcdHowEstim;
  float32 PrevHowEstim;
  float32 dHowDetnAbsHiFrqTq;
  float32 dHowDetnAbsLoFrqTq;
  uint32 RefTiHowOff;
  boolean HowOffPrev;
  FilLpRec1 EstimLpFil;
  FilLpRec1 FinalLpFil;
  FilLpRec1 IniLpFil1;
  FilLpRec1 IniLpFil2;
  FilLpRec1 IniLpFil3;
  FilLpRec1 StLpFil;
  FilHpRec1 TqHpFil;

  float32 HowDetnEstimLpFilFrq_Val_data;
  float32 HowDetnMinVehSpd_Val_data;
  float32 HowDetnOffThd_Val_data;
  float32 HowDetnOffTi_Val_data;
  float32 HowDetnPercOfPrevHowEstim_Val_data;
  float32 HowDetnSlewRate_Val_data;
  float32 HowDetnStLpFilFrq_Val_data;
  float32 HowDetnTqFinalLpFilFrq_Val_data;
  float32 HowDetnTqHpFilFrq_Val_data;
  float32 HowDetnTqInitLpFilFrq_Val_data;
  Ary1D_u9p7_9 HowDetnHiFrqGainY_Ary1D_data;
  Ary2D_u8p8_9_6 HowDetnHiFrqRateX_Ary2D_data;
  Ary2D_s7p8_9_6 HowDetnHiFrqRateY_Ary2D_data;
  Ary2D_u8p8_9_5 HowDetnLoFrqRateX_Ary2D_data;
  Ary2D_s7p8_9_5 HowDetnLoFrqRateY_Ary2D_data;
  Ary1D_u8p8_7 HowDetnStThdX_Ary1D_data;
  Ary1D_u9p7_9 HowDetnVehSpd_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevCalcdHowEstim = *TSC_HowDetn_Rte_Pim_PrevCalcdHowEstim();
  *TSC_HowDetn_Rte_Pim_PrevCalcdHowEstim() = PrevCalcdHowEstim;
  PrevHowEstim = *TSC_HowDetn_Rte_Pim_PrevHowEstim();
  *TSC_HowDetn_Rte_Pim_PrevHowEstim() = PrevHowEstim;
  dHowDetnAbsHiFrqTq = *TSC_HowDetn_Rte_Pim_dHowDetnAbsHiFrqTq();
  *TSC_HowDetn_Rte_Pim_dHowDetnAbsHiFrqTq() = dHowDetnAbsHiFrqTq;
  dHowDetnAbsLoFrqTq = *TSC_HowDetn_Rte_Pim_dHowDetnAbsLoFrqTq();
  *TSC_HowDetn_Rte_Pim_dHowDetnAbsLoFrqTq() = dHowDetnAbsLoFrqTq;
  RefTiHowOff = *TSC_HowDetn_Rte_Pim_RefTiHowOff();
  *TSC_HowDetn_Rte_Pim_RefTiHowOff() = RefTiHowOff;
  HowOffPrev = *TSC_HowDetn_Rte_Pim_HowOffPrev();
  *TSC_HowDetn_Rte_Pim_HowOffPrev() = HowOffPrev;
  EstimLpFil = *TSC_HowDetn_Rte_Pim_EstimLpFil();
  *TSC_HowDetn_Rte_Pim_EstimLpFil() = EstimLpFil;
  FinalLpFil = *TSC_HowDetn_Rte_Pim_FinalLpFil();
  *TSC_HowDetn_Rte_Pim_FinalLpFil() = FinalLpFil;
  IniLpFil1 = *TSC_HowDetn_Rte_Pim_IniLpFil1();
  *TSC_HowDetn_Rte_Pim_IniLpFil1() = IniLpFil1;
  IniLpFil2 = *TSC_HowDetn_Rte_Pim_IniLpFil2();
  *TSC_HowDetn_Rte_Pim_IniLpFil2() = IniLpFil2;
  IniLpFil3 = *TSC_HowDetn_Rte_Pim_IniLpFil3();
  *TSC_HowDetn_Rte_Pim_IniLpFil3() = IniLpFil3;
  StLpFil = *TSC_HowDetn_Rte_Pim_StLpFil();
  *TSC_HowDetn_Rte_Pim_StLpFil() = StLpFil;
  TqHpFil = *TSC_HowDetn_Rte_Pim_TqHpFil();
  *TSC_HowDetn_Rte_Pim_TqHpFil() = TqHpFil;

  HowDetnEstimLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnEstimLpFilFrq_Val();
  HowDetnMinVehSpd_Val_data = TSC_HowDetn_Rte_Prm_HowDetnMinVehSpd_Val();
  HowDetnOffThd_Val_data = TSC_HowDetn_Rte_Prm_HowDetnOffThd_Val();
  HowDetnOffTi_Val_data = TSC_HowDetn_Rte_Prm_HowDetnOffTi_Val();
  HowDetnPercOfPrevHowEstim_Val_data = TSC_HowDetn_Rte_Prm_HowDetnPercOfPrevHowEstim_Val();
  HowDetnSlewRate_Val_data = TSC_HowDetn_Rte_Prm_HowDetnSlewRate_Val();
  HowDetnStLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnStLpFilFrq_Val();
  HowDetnTqFinalLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnTqFinalLpFilFrq_Val();
  HowDetnTqHpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnTqHpFilFrq_Val();
  HowDetnTqInitLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnTqInitLpFilFrq_Val();
  (void)memcpy(HowDetnHiFrqGainY_Ary1D_data, TSC_HowDetn_Rte_Prm_HowDetnHiFrqGainY_Ary1D(), sizeof(Ary1D_u9p7_9));
  (void)memcpy(HowDetnHiFrqRateX_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateX_Ary2D(), sizeof(Ary2D_u8p8_9_6));
  (void)memcpy(HowDetnHiFrqRateY_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateY_Ary2D(), sizeof(Ary2D_s7p8_9_6));
  (void)memcpy(HowDetnLoFrqRateX_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateX_Ary2D(), sizeof(Ary2D_u8p8_9_5));
  (void)memcpy(HowDetnLoFrqRateY_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateY_Ary2D(), sizeof(Ary2D_s7p8_9_5));
  (void)memcpy(HowDetnStThdX_Ary1D_data, TSC_HowDetn_Rte_Prm_HowDetnStThdX_Ary1D(), sizeof(Ary1D_u8p8_7));
  (void)memcpy(HowDetnVehSpd_Ary1D_data, TSC_HowDetn_Rte_Prm_HowDetnVehSpd_Ary1D(), sizeof(Ary1D_u9p7_9));

  fct_status = TSC_HowDetn_Rte_Write_HowDetnEstimn_Val(Rte_InitValue_HowDetnEstimn_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_HowDetn_Rte_Write_HowDetnFlg_Logl(Rte_InitValue_HowDetnFlg_Logl);
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
 * Runnable Entity Name: HowDetnPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HowDetnEstimn_Val(float32 data)
 *   Std_ReturnType Rte_Write_HowDetnFlg_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HowDetnSt_Val(sint8 data)
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
 * Symbol: HowDetnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HowDetn_CODE) HowDetnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HowDetnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwTq_Val;
  float32 Read_VehSpd_Val;

  float32 PrevCalcdHowEstim;
  float32 PrevHowEstim;
  float32 dHowDetnAbsHiFrqTq;
  float32 dHowDetnAbsLoFrqTq;
  uint32 RefTiHowOff;
  boolean HowOffPrev;
  FilLpRec1 EstimLpFil;
  FilLpRec1 FinalLpFil;
  FilLpRec1 IniLpFil1;
  FilLpRec1 IniLpFil2;
  FilLpRec1 IniLpFil3;
  FilLpRec1 StLpFil;
  FilHpRec1 TqHpFil;

  float32 HowDetnEstimLpFilFrq_Val_data;
  float32 HowDetnMinVehSpd_Val_data;
  float32 HowDetnOffThd_Val_data;
  float32 HowDetnOffTi_Val_data;
  float32 HowDetnPercOfPrevHowEstim_Val_data;
  float32 HowDetnSlewRate_Val_data;
  float32 HowDetnStLpFilFrq_Val_data;
  float32 HowDetnTqFinalLpFilFrq_Val_data;
  float32 HowDetnTqHpFilFrq_Val_data;
  float32 HowDetnTqInitLpFilFrq_Val_data;
  Ary1D_u9p7_9 HowDetnHiFrqGainY_Ary1D_data;
  Ary2D_u8p8_9_6 HowDetnHiFrqRateX_Ary2D_data;
  Ary2D_s7p8_9_6 HowDetnHiFrqRateY_Ary2D_data;
  Ary2D_u8p8_9_5 HowDetnLoFrqRateX_Ary2D_data;
  Ary2D_s7p8_9_5 HowDetnLoFrqRateY_Ary2D_data;
  Ary1D_u8p8_7 HowDetnStThdX_Ary1D_data;
  Ary1D_u9p7_9 HowDetnVehSpd_Ary1D_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;
  uint32 Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevCalcdHowEstim = *TSC_HowDetn_Rte_Pim_PrevCalcdHowEstim();
  *TSC_HowDetn_Rte_Pim_PrevCalcdHowEstim() = PrevCalcdHowEstim;
  PrevHowEstim = *TSC_HowDetn_Rte_Pim_PrevHowEstim();
  *TSC_HowDetn_Rte_Pim_PrevHowEstim() = PrevHowEstim;
  dHowDetnAbsHiFrqTq = *TSC_HowDetn_Rte_Pim_dHowDetnAbsHiFrqTq();
  *TSC_HowDetn_Rte_Pim_dHowDetnAbsHiFrqTq() = dHowDetnAbsHiFrqTq;
  dHowDetnAbsLoFrqTq = *TSC_HowDetn_Rte_Pim_dHowDetnAbsLoFrqTq();
  *TSC_HowDetn_Rte_Pim_dHowDetnAbsLoFrqTq() = dHowDetnAbsLoFrqTq;
  RefTiHowOff = *TSC_HowDetn_Rte_Pim_RefTiHowOff();
  *TSC_HowDetn_Rte_Pim_RefTiHowOff() = RefTiHowOff;
  HowOffPrev = *TSC_HowDetn_Rte_Pim_HowOffPrev();
  *TSC_HowDetn_Rte_Pim_HowOffPrev() = HowOffPrev;
  EstimLpFil = *TSC_HowDetn_Rte_Pim_EstimLpFil();
  *TSC_HowDetn_Rte_Pim_EstimLpFil() = EstimLpFil;
  FinalLpFil = *TSC_HowDetn_Rte_Pim_FinalLpFil();
  *TSC_HowDetn_Rte_Pim_FinalLpFil() = FinalLpFil;
  IniLpFil1 = *TSC_HowDetn_Rte_Pim_IniLpFil1();
  *TSC_HowDetn_Rte_Pim_IniLpFil1() = IniLpFil1;
  IniLpFil2 = *TSC_HowDetn_Rte_Pim_IniLpFil2();
  *TSC_HowDetn_Rte_Pim_IniLpFil2() = IniLpFil2;
  IniLpFil3 = *TSC_HowDetn_Rte_Pim_IniLpFil3();
  *TSC_HowDetn_Rte_Pim_IniLpFil3() = IniLpFil3;
  StLpFil = *TSC_HowDetn_Rte_Pim_StLpFil();
  *TSC_HowDetn_Rte_Pim_StLpFil() = StLpFil;
  TqHpFil = *TSC_HowDetn_Rte_Pim_TqHpFil();
  *TSC_HowDetn_Rte_Pim_TqHpFil() = TqHpFil;

  HowDetnEstimLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnEstimLpFilFrq_Val();
  HowDetnMinVehSpd_Val_data = TSC_HowDetn_Rte_Prm_HowDetnMinVehSpd_Val();
  HowDetnOffThd_Val_data = TSC_HowDetn_Rte_Prm_HowDetnOffThd_Val();
  HowDetnOffTi_Val_data = TSC_HowDetn_Rte_Prm_HowDetnOffTi_Val();
  HowDetnPercOfPrevHowEstim_Val_data = TSC_HowDetn_Rte_Prm_HowDetnPercOfPrevHowEstim_Val();
  HowDetnSlewRate_Val_data = TSC_HowDetn_Rte_Prm_HowDetnSlewRate_Val();
  HowDetnStLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnStLpFilFrq_Val();
  HowDetnTqFinalLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnTqFinalLpFilFrq_Val();
  HowDetnTqHpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnTqHpFilFrq_Val();
  HowDetnTqInitLpFilFrq_Val_data = TSC_HowDetn_Rte_Prm_HowDetnTqInitLpFilFrq_Val();
  (void)memcpy(HowDetnHiFrqGainY_Ary1D_data, TSC_HowDetn_Rte_Prm_HowDetnHiFrqGainY_Ary1D(), sizeof(Ary1D_u9p7_9));
  (void)memcpy(HowDetnHiFrqRateX_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateX_Ary2D(), sizeof(Ary2D_u8p8_9_6));
  (void)memcpy(HowDetnHiFrqRateY_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateY_Ary2D(), sizeof(Ary2D_s7p8_9_6));
  (void)memcpy(HowDetnLoFrqRateX_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateX_Ary2D(), sizeof(Ary2D_u8p8_9_5));
  (void)memcpy(HowDetnLoFrqRateY_Ary2D_data, TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateY_Ary2D(), sizeof(Ary2D_s7p8_9_5));
  (void)memcpy(HowDetnStThdX_Ary1D_data, TSC_HowDetn_Rte_Prm_HowDetnStThdX_Ary1D(), sizeof(Ary1D_u8p8_7));
  (void)memcpy(HowDetnVehSpd_Ary1D_data, TSC_HowDetn_Rte_Prm_HowDetnVehSpd_Ary1D(), sizeof(Ary1D_u9p7_9));

  fct_status = TSC_HowDetn_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_HowDetn_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_HowDetn_Rte_Write_HowDetnEstimn_Val(Rte_InitValue_HowDetnEstimn_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_HowDetn_Rte_Write_HowDetnFlg_Logl(Rte_InitValue_HowDetnFlg_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_HowDetn_Rte_Write_HowDetnSt_Val(Rte_InitValue_HowDetnSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_HowDetn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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

  fct_status = TSC_HowDetn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(0U, &Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg);
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


#define HowDetn_STOP_SEC_CODE
#include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
