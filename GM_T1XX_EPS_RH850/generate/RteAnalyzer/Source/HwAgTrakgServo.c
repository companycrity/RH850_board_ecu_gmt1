/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgTrakgServo.c
 *        Config:  EPS.dpa
 *     SW-C Type:  HwAgTrakgServo
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgTrakgServo>
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
 * u0p16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u10p6
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u11p5
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u12p4
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u1p15
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u2p14
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u4p12
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u7p9
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
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_HwAgTrakgServo.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_HwAgTrakgServo.h"


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
 * u0p16: Integer in interval [0...65535]
 * u10p6: Integer in interval [0...65535]
 * u11p5: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_3: Array with 3 element(s) of type u0p16
 * Ary1D_u10p6_3: Array with 3 element(s) of type u10p6
 * Ary1D_u10p6_7: Array with 7 element(s) of type u10p6
 * Ary1D_u11p5_13: Array with 13 element(s) of type u11p5
 * Ary1D_u12p4_7: Array with 7 element(s) of type u12p4
 * Ary1D_u1p15_10: Array with 10 element(s) of type u1p15
 * Ary1D_u2p14_3: Array with 3 element(s) of type u2p14
 * Ary1D_u4p12_13: Array with 13 element(s) of type u4p12
 * Ary1D_u4p12_4: Array with 4 element(s) of type u4p12
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u7p9_6: Array with 6 element(s) of type u7p9
 * Ary1D_u8p8_4: Array with 4 element(s) of type u8p8
 * Ary1D_u9p7_3: Array with 3 element(s) of type u9p7
 * Ary2D_u10p6_3_7: Array with 3 element(s) of type Ary1D_u10p6_7
 * Ary2D_u4p12_3_13: Array with 3 element(s) of type Ary1D_u4p12_13
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
 *   float32 *Rte_Pim_HwAgTarRateLim(void)
 *   float32 *Rte_Pim_PrevDftlErr(void)
 *   float32 *Rte_Pim_PrevHwAgTar(void)
 *   float32 *Rte_Pim_PrevIntglErr(void)
 *   float32 *Rte_Pim_PrevSmotng(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoDftlTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoHwAgTarFild(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoIntglTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoPidCmd(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoPropTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoRtnScaFac(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoSmotngEna(void)
 *   boolean *Rte_Pim_dHwAgTrakgServoRampCmpl(void)
 *   FilLpRec1 *Rte_Pim_DftlTermLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoEnaRate_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoExecRate_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoMaxRamp_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoMinRamp_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoPidLim_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoRampCmpl_Val(void)
 *   u11p5 *Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_13
 *   u4p12 *Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(void)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_3_13
 *   u0p16 *Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_3
 *   u4p12 *Rte_Prm_HwAgTrakgServoDiRateX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_6
 *   u7p9 *Rte_Prm_HwAgTrakgServoDiRateY_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_6
 *   u10p6 *Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_3
 *   u2p14 *Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_3
 *   u10p6 *Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_3
 *   u8p8 *Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_4
 *   u4p12 *Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_4
 *   u12p4 *Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(void)
 *     Returnvalue: u12p4* is of type Ary1D_u12p4_7
 *   u10p6 *Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(void)
 *     Returnvalue: u10p6* is of type Ary2D_u10p6_3_7
 *   u1p15 *Rte_Prm_HwAgTrakgServoSmotngX_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_10
 *   u1p15 *Rte_Prm_HwAgTrakgServoSmotngY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_10
 *   u9p7 *Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_3
 *
 *********************************************************************************************************************/


#define HwAgTrakgServo_START_SEC_CODE
#include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrakgServoInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrakgServoInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrakgServoInit1
 *********************************************************************************************************************/

  float32 HwAgTarRateLim;
  float32 PrevDftlErr;
  float32 PrevHwAgTar;
  float32 PrevIntglErr;
  float32 PrevSmotng;
  float32 dHwAgTrakgServoDftlTerm;
  float32 dHwAgTrakgServoHwAgTarFild;
  float32 dHwAgTrakgServoIntglTerm;
  float32 dHwAgTrakgServoPidCmd;
  float32 dHwAgTrakgServoPropTerm;
  float32 dHwAgTrakgServoRtnScaFac;
  float32 dHwAgTrakgServoSmotngEna;
  boolean dHwAgTrakgServoRampCmpl;
  FilLpRec1 DftlTermLpFil;
  FilLpRec1 HwAgLpFil;
  FilLpRec1 HwTqLpFil;

  float32 HwAgTrakgServoDftlTermLpFilFrq_Val_data;
  float32 HwAgTrakgServoEnaRate_Val_data;
  float32 HwAgTrakgServoExecRate_Val_data;
  float32 HwAgTrakgServoHwAgLpFilFrq_Val_data;
  float32 HwAgTrakgServoHwTqLpFilFrq_Val_data;
  float32 HwAgTrakgServoMaxRamp_Val_data;
  float32 HwAgTrakgServoMinRamp_Val_data;
  float32 HwAgTrakgServoPidLim_Val_data;
  float32 HwAgTrakgServoRampCmpl_Val_data;
  Ary1D_u11p5_13 HwAgTrakgServoDampgTqX_Ary1D_data;
  Ary2D_u4p12_3_13 HwAgTrakgServoDampgTqY_Ary2D_data;
  Ary1D_u0p16_3 HwAgTrakgServoDftlGainY_Ary1D_data;
  Ary1D_u4p12_6 HwAgTrakgServoDiRateX_Ary1D_data;
  Ary1D_u7p9_6 HwAgTrakgServoDiRateY_Ary1D_data;
  Ary1D_u10p6_3 HwAgTrakgServoHwAgRateLim_Ary1D_data;
  Ary1D_u2p14_3 HwAgTrakgServoIntglGainY_Ary1D_data;
  Ary1D_u10p6_3 HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D_data;
  Ary1D_u8p8_4 HwAgTrakgServoMaxCmdX_Ary1D_data;
  Ary1D_u4p12_4 HwAgTrakgServoMaxCmdY_Ary1D_data;
  Ary1D_u12p4_7 HwAgTrakgServoPropGainX_Ary1D_data;
  Ary2D_u10p6_3_7 HwAgTrakgServoPropGainY_Ary2D_data;
  Ary1D_u1p15_10 HwAgTrakgServoSmotngX_Ary1D_data;
  Ary1D_u1p15_10 HwAgTrakgServoSmotngY_Ary1D_data;
  Ary1D_u9p7_3 HwAgTrakgServoVehSpdBasd_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgTarRateLim = *TSC_HwAgTrakgServo_Rte_Pim_HwAgTarRateLim();
  *TSC_HwAgTrakgServo_Rte_Pim_HwAgTarRateLim() = HwAgTarRateLim;
  PrevDftlErr = *TSC_HwAgTrakgServo_Rte_Pim_PrevDftlErr();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevDftlErr() = PrevDftlErr;
  PrevHwAgTar = *TSC_HwAgTrakgServo_Rte_Pim_PrevHwAgTar();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevHwAgTar() = PrevHwAgTar;
  PrevIntglErr = *TSC_HwAgTrakgServo_Rte_Pim_PrevIntglErr();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevIntglErr() = PrevIntglErr;
  PrevSmotng = *TSC_HwAgTrakgServo_Rte_Pim_PrevSmotng();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevSmotng() = PrevSmotng;
  dHwAgTrakgServoDftlTerm = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoDftlTerm();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoDftlTerm() = dHwAgTrakgServoDftlTerm;
  dHwAgTrakgServoHwAgTarFild = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoHwAgTarFild();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoHwAgTarFild() = dHwAgTrakgServoHwAgTarFild;
  dHwAgTrakgServoIntglTerm = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoIntglTerm();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoIntglTerm() = dHwAgTrakgServoIntglTerm;
  dHwAgTrakgServoPidCmd = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPidCmd();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPidCmd() = dHwAgTrakgServoPidCmd;
  dHwAgTrakgServoPropTerm = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPropTerm();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPropTerm() = dHwAgTrakgServoPropTerm;
  dHwAgTrakgServoRtnScaFac = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRtnScaFac();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRtnScaFac() = dHwAgTrakgServoRtnScaFac;
  dHwAgTrakgServoSmotngEna = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoSmotngEna();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoSmotngEna() = dHwAgTrakgServoSmotngEna;
  dHwAgTrakgServoRampCmpl = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRampCmpl();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRampCmpl() = dHwAgTrakgServoRampCmpl;
  DftlTermLpFil = *TSC_HwAgTrakgServo_Rte_Pim_DftlTermLpFil();
  *TSC_HwAgTrakgServo_Rte_Pim_DftlTermLpFil() = DftlTermLpFil;
  HwAgLpFil = *TSC_HwAgTrakgServo_Rte_Pim_HwAgLpFil();
  *TSC_HwAgTrakgServo_Rte_Pim_HwAgLpFil() = HwAgLpFil;
  HwTqLpFil = *TSC_HwAgTrakgServo_Rte_Pim_HwTqLpFil();
  *TSC_HwAgTrakgServo_Rte_Pim_HwTqLpFil() = HwTqLpFil;

  HwAgTrakgServoDftlTermLpFilFrq_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val();
  HwAgTrakgServoEnaRate_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoEnaRate_Val();
  HwAgTrakgServoExecRate_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoExecRate_Val();
  HwAgTrakgServoHwAgLpFilFrq_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val();
  HwAgTrakgServoHwTqLpFilFrq_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val();
  HwAgTrakgServoMaxRamp_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxRamp_Val();
  HwAgTrakgServoMinRamp_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMinRamp_Val();
  HwAgTrakgServoPidLim_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPidLim_Val();
  HwAgTrakgServoRampCmpl_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoRampCmpl_Val();
  (void)memcpy(HwAgTrakgServoDampgTqX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(), sizeof(Ary1D_u11p5_13));
  (void)memcpy(HwAgTrakgServoDampgTqY_Ary2D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(), sizeof(Ary2D_u4p12_3_13));
  (void)memcpy(HwAgTrakgServoDftlGainY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D(), sizeof(Ary1D_u0p16_3));
  (void)memcpy(HwAgTrakgServoDiRateX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateX_Ary1D(), sizeof(Ary1D_u4p12_6));
  (void)memcpy(HwAgTrakgServoDiRateY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateY_Ary1D(), sizeof(Ary1D_u7p9_6));
  (void)memcpy(HwAgTrakgServoHwAgRateLim_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D(), sizeof(Ary1D_u10p6_3));
  (void)memcpy(HwAgTrakgServoIntglGainY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D(), sizeof(Ary1D_u2p14_3));
  (void)memcpy(HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(), sizeof(Ary1D_u10p6_3));
  (void)memcpy(HwAgTrakgServoMaxCmdX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D(), sizeof(Ary1D_u8p8_4));
  (void)memcpy(HwAgTrakgServoMaxCmdY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D(), sizeof(Ary1D_u4p12_4));
  (void)memcpy(HwAgTrakgServoPropGainX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(), sizeof(Ary1D_u12p4_7));
  (void)memcpy(HwAgTrakgServoPropGainY_Ary2D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(), sizeof(Ary2D_u10p6_3_7));
  (void)memcpy(HwAgTrakgServoSmotngX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngX_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(HwAgTrakgServoSmotngY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngY_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(HwAgTrakgServoVehSpdBasd_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D(), sizeof(Ary1D_u9p7_3));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrakgServoPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrakgServoCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrakgServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqServoCmd_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrakgServoPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrakgServoPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  float32 Read_HwAgTrakgServoCmd_Val;
  boolean Read_HwAgTrakgServoEna_Logl;
  float32 Read_HwTq_Val;
  float32 Read_MotVelCrf_Val;
  float32 Read_VehSpd_Val;

  float32 HwAgTarRateLim;
  float32 PrevDftlErr;
  float32 PrevHwAgTar;
  float32 PrevIntglErr;
  float32 PrevSmotng;
  float32 dHwAgTrakgServoDftlTerm;
  float32 dHwAgTrakgServoHwAgTarFild;
  float32 dHwAgTrakgServoIntglTerm;
  float32 dHwAgTrakgServoPidCmd;
  float32 dHwAgTrakgServoPropTerm;
  float32 dHwAgTrakgServoRtnScaFac;
  float32 dHwAgTrakgServoSmotngEna;
  boolean dHwAgTrakgServoRampCmpl;
  FilLpRec1 DftlTermLpFil;
  FilLpRec1 HwAgLpFil;
  FilLpRec1 HwTqLpFil;

  float32 HwAgTrakgServoDftlTermLpFilFrq_Val_data;
  float32 HwAgTrakgServoEnaRate_Val_data;
  float32 HwAgTrakgServoExecRate_Val_data;
  float32 HwAgTrakgServoHwAgLpFilFrq_Val_data;
  float32 HwAgTrakgServoHwTqLpFilFrq_Val_data;
  float32 HwAgTrakgServoMaxRamp_Val_data;
  float32 HwAgTrakgServoMinRamp_Val_data;
  float32 HwAgTrakgServoPidLim_Val_data;
  float32 HwAgTrakgServoRampCmpl_Val_data;
  Ary1D_u11p5_13 HwAgTrakgServoDampgTqX_Ary1D_data;
  Ary2D_u4p12_3_13 HwAgTrakgServoDampgTqY_Ary2D_data;
  Ary1D_u0p16_3 HwAgTrakgServoDftlGainY_Ary1D_data;
  Ary1D_u4p12_6 HwAgTrakgServoDiRateX_Ary1D_data;
  Ary1D_u7p9_6 HwAgTrakgServoDiRateY_Ary1D_data;
  Ary1D_u10p6_3 HwAgTrakgServoHwAgRateLim_Ary1D_data;
  Ary1D_u2p14_3 HwAgTrakgServoIntglGainY_Ary1D_data;
  Ary1D_u10p6_3 HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D_data;
  Ary1D_u8p8_4 HwAgTrakgServoMaxCmdX_Ary1D_data;
  Ary1D_u4p12_4 HwAgTrakgServoMaxCmdY_Ary1D_data;
  Ary1D_u12p4_7 HwAgTrakgServoPropGainX_Ary1D_data;
  Ary2D_u10p6_3_7 HwAgTrakgServoPropGainY_Ary2D_data;
  Ary1D_u1p15_10 HwAgTrakgServoSmotngX_Ary1D_data;
  Ary1D_u1p15_10 HwAgTrakgServoSmotngY_Ary1D_data;
  Ary1D_u9p7_3 HwAgTrakgServoVehSpdBasd_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgTarRateLim = *TSC_HwAgTrakgServo_Rte_Pim_HwAgTarRateLim();
  *TSC_HwAgTrakgServo_Rte_Pim_HwAgTarRateLim() = HwAgTarRateLim;
  PrevDftlErr = *TSC_HwAgTrakgServo_Rte_Pim_PrevDftlErr();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevDftlErr() = PrevDftlErr;
  PrevHwAgTar = *TSC_HwAgTrakgServo_Rte_Pim_PrevHwAgTar();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevHwAgTar() = PrevHwAgTar;
  PrevIntglErr = *TSC_HwAgTrakgServo_Rte_Pim_PrevIntglErr();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevIntglErr() = PrevIntglErr;
  PrevSmotng = *TSC_HwAgTrakgServo_Rte_Pim_PrevSmotng();
  *TSC_HwAgTrakgServo_Rte_Pim_PrevSmotng() = PrevSmotng;
  dHwAgTrakgServoDftlTerm = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoDftlTerm();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoDftlTerm() = dHwAgTrakgServoDftlTerm;
  dHwAgTrakgServoHwAgTarFild = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoHwAgTarFild();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoHwAgTarFild() = dHwAgTrakgServoHwAgTarFild;
  dHwAgTrakgServoIntglTerm = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoIntglTerm();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoIntglTerm() = dHwAgTrakgServoIntglTerm;
  dHwAgTrakgServoPidCmd = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPidCmd();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPidCmd() = dHwAgTrakgServoPidCmd;
  dHwAgTrakgServoPropTerm = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPropTerm();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPropTerm() = dHwAgTrakgServoPropTerm;
  dHwAgTrakgServoRtnScaFac = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRtnScaFac();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRtnScaFac() = dHwAgTrakgServoRtnScaFac;
  dHwAgTrakgServoSmotngEna = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoSmotngEna();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoSmotngEna() = dHwAgTrakgServoSmotngEna;
  dHwAgTrakgServoRampCmpl = *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRampCmpl();
  *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRampCmpl() = dHwAgTrakgServoRampCmpl;
  DftlTermLpFil = *TSC_HwAgTrakgServo_Rte_Pim_DftlTermLpFil();
  *TSC_HwAgTrakgServo_Rte_Pim_DftlTermLpFil() = DftlTermLpFil;
  HwAgLpFil = *TSC_HwAgTrakgServo_Rte_Pim_HwAgLpFil();
  *TSC_HwAgTrakgServo_Rte_Pim_HwAgLpFil() = HwAgLpFil;
  HwTqLpFil = *TSC_HwAgTrakgServo_Rte_Pim_HwTqLpFil();
  *TSC_HwAgTrakgServo_Rte_Pim_HwTqLpFil() = HwTqLpFil;

  HwAgTrakgServoDftlTermLpFilFrq_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val();
  HwAgTrakgServoEnaRate_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoEnaRate_Val();
  HwAgTrakgServoExecRate_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoExecRate_Val();
  HwAgTrakgServoHwAgLpFilFrq_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val();
  HwAgTrakgServoHwTqLpFilFrq_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val();
  HwAgTrakgServoMaxRamp_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxRamp_Val();
  HwAgTrakgServoMinRamp_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMinRamp_Val();
  HwAgTrakgServoPidLim_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPidLim_Val();
  HwAgTrakgServoRampCmpl_Val_data = TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoRampCmpl_Val();
  (void)memcpy(HwAgTrakgServoDampgTqX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(), sizeof(Ary1D_u11p5_13));
  (void)memcpy(HwAgTrakgServoDampgTqY_Ary2D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(), sizeof(Ary2D_u4p12_3_13));
  (void)memcpy(HwAgTrakgServoDftlGainY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D(), sizeof(Ary1D_u0p16_3));
  (void)memcpy(HwAgTrakgServoDiRateX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateX_Ary1D(), sizeof(Ary1D_u4p12_6));
  (void)memcpy(HwAgTrakgServoDiRateY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateY_Ary1D(), sizeof(Ary1D_u7p9_6));
  (void)memcpy(HwAgTrakgServoHwAgRateLim_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D(), sizeof(Ary1D_u10p6_3));
  (void)memcpy(HwAgTrakgServoIntglGainY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D(), sizeof(Ary1D_u2p14_3));
  (void)memcpy(HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(), sizeof(Ary1D_u10p6_3));
  (void)memcpy(HwAgTrakgServoMaxCmdX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D(), sizeof(Ary1D_u8p8_4));
  (void)memcpy(HwAgTrakgServoMaxCmdY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D(), sizeof(Ary1D_u4p12_4));
  (void)memcpy(HwAgTrakgServoPropGainX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(), sizeof(Ary1D_u12p4_7));
  (void)memcpy(HwAgTrakgServoPropGainY_Ary2D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(), sizeof(Ary2D_u10p6_3_7));
  (void)memcpy(HwAgTrakgServoSmotngX_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngX_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(HwAgTrakgServoSmotngY_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngY_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(HwAgTrakgServoVehSpdBasd_Ary1D_data, TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D(), sizeof(Ary1D_u9p7_3));

  fct_status = TSC_HwAgTrakgServo_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_HwAgTrakgServo_Rte_Read_HwAgTrakgServoCmd_Val(&Read_HwAgTrakgServoCmd_Val);
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

  fct_status = TSC_HwAgTrakgServo_Rte_Read_HwAgTrakgServoEna_Logl(&Read_HwAgTrakgServoEna_Logl);
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

  fct_status = TSC_HwAgTrakgServo_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_HwAgTrakgServo_Rte_Read_MotVelCrf_Val(&Read_MotVelCrf_Val);
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

  fct_status = TSC_HwAgTrakgServo_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_HwAgTrakgServo_Rte_Write_MotTqServoCmd_Val(Rte_InitValue_MotTqServoCmd_Val);
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


#define HwAgTrakgServo_STOP_SEC_CODE
#include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
