/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  InertiaCmpVel.c
 *        Config:  EPS.dpa
 *     SW-C Type:  InertiaCmpVel
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <InertiaCmpVel>
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
 * u13p3
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
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_InertiaCmpVel.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_InertiaCmpVel.h"


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
 * u11p5: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u13p3: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_10: Array with 10 element(s) of type u0p16
 * Ary1D_u11p5_6: Array with 6 element(s) of type u11p5
 * Ary1D_u12p4_2: Array with 2 element(s) of type u12p4
 * Ary1D_u13p3_6: Array with 6 element(s) of type u13p3
 * Ary1D_u1p15_12: Array with 12 element(s) of type u1p15
 * Ary1D_u1p15_2: Array with 2 element(s) of type u1p15
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u2p14_12: Array with 12 element(s) of type u2p14
 * Ary1D_u4p12_10: Array with 10 element(s) of type u4p12
 * Ary1D_u4p12_5: Array with 5 element(s) of type u4p12
 * Ary1D_u7p9_12: Array with 12 element(s) of type u7p9
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 * FilNotchGainRec1: Record with elements
 *   FilGainB0 of type float32
 *   FilGainB1 of type float32
 *   FilGainB2 of type float32
 *   FilGainA1 of type float32
 *   FilGainA2 of type float32
 * FilNotchStRec1: Record with elements
 *   FilSt1 of type float32
 *   FilSt2 of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_DecelGain(void)
 *   float32 *Rte_Pim_PreScagCmpCmdPrev1(void)
 *   float32 *Rte_Pim_PreScagCmpCmdPrev2(void)
 *   float32 *Rte_Pim_ScaDrvrVelPrev1(void)
 *   float32 *Rte_Pim_ScaDrvrVelPrev2(void)
 *   float32 *Rte_Pim_TqSnsrAgPrev(void)
 *   float32 *Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff(void)
 *   float32 *Rte_Pim_dInertiaCmpVelCalcdInertiaCmp(void)
 *   float32 *Rte_Pim_dInertiaCmpVelFilFrq(void)
 *   float32 *Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotScadDrvrVel(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchBlndVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchInpVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchOutpVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelRawDecelGain(void)
 *   float32 *Rte_Pim_dInertiaCmpVelScadDrvrVel(void)
 *   float32 *Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal(void)
 *   boolean *Rte_Pim_NotchFilChk(void)
 *   FilLpRec1 *Rte_Pim_TqSnsrVelFil(void)
 *   FilNotchStRec1 *Rte_Pim_TqSnsrVelFilNotchSt(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_InertiaCmpVelDampgDecelGain_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgGainOffThd_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgGainOnThd_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelMotInertia_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmTorsBarStfn_Val(void)
 *   boolean Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl(void)
 *   u4p12 *Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u2p14 *Rte_Prm_InertiaCmpVelCmdScaY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_12
 *   u11p5 *Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_6
 *   u13p3 *Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_6
 *   u7p9 *Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_12
 *   u7p9 *Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_12
 *   u1p15 *Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u4p12 *Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_5
 *   u1p15 *Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_5
 *   u12p4 *Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D(void)
 *     Returnvalue: u12p4* is of type Ary1D_u12p4_2
 *   u1p15 *Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u1p15 *Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u2p14 *Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_12
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   FilNotchGainRec1 *Rte_Prm_InertiaCmpVelNotchFilStruct_Rec(void)
 *
 *********************************************************************************************************************/


#define InertiaCmpVel_START_SEC_CODE
#include "InertiaCmpVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InertiaCmpVelInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: InertiaCmpVelInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, InertiaCmpVel_CODE) InertiaCmpVelInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: InertiaCmpVelInit1
 *********************************************************************************************************************/

  float32 DecelGain;
  float32 PreScagCmpCmdPrev1;
  float32 PreScagCmpCmdPrev2;
  float32 ScaDrvrVelPrev1;
  float32 ScaDrvrVelPrev2;
  float32 TqSnsrAgPrev;
  float32 dInertiaCmpVelAssiBasdDampgCoeff;
  float32 dInertiaCmpVelCalcdInertiaCmp;
  float32 dInertiaCmpVelFilFrq;
  float32 dInertiaCmpVelMotVelBasdOutpScag;
  float32 dInertiaCmpVelNotScadDrvrVel;
  float32 dInertiaCmpVelNotchBlndVal;
  float32 dInertiaCmpVelNotchInpVal;
  float32 dInertiaCmpVelNotchOutpVal;
  float32 dInertiaCmpVelRawDecelGain;
  float32 dInertiaCmpVelScadDrvrVel;
  float32 dInertiaCmpVelTqSnsrVelFildVal;
  boolean NotchFilChk;
  FilLpRec1 TqSnsrVelFil;
  FilNotchStRec1 TqSnsrVelFilNotchSt;

  float32 InertiaCmpVelDampgDecelGain_Val_data;
  float32 InertiaCmpVelDampgDecelGainFallSlew_Val_data;
  float32 InertiaCmpVelDampgGainOffThd_Val_data;
  float32 InertiaCmpVelDampgGainOnThd_Val_data;
  float32 InertiaCmpVelMotInertia_Val_data;
  float32 InertiaCmpVelTqSnsrVelFilFrq_Val_data;
  float32 SysGlbPrmSysKineRat_Val_data;
  float32 SysGlbPrmTorsBarStfn_Val_data;
  boolean InertiaCmpVelDecelGainEnaCal_Logl_data;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D_data;
  Ary1D_u2p14_12 InertiaCmpVelCmdScaY_Ary1D_data;
  Ary1D_u11p5_6 InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D_data;
  Ary1D_u13p3_6 InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D_data;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D_data;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D_data;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D_data;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D_data;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D_data;
  Ary1D_u12p4_2 InertiaCmpVelMotVelBasdOutpScagX_Ary1D_data;
  Ary1D_u1p15_2 InertiaCmpVelMotVelBasdOutpScagY_Ary1D_data;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D_data;
  Ary1D_u2p14_12 InertiaCmpVelTqSnsrVelSca_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;
  FilNotchGainRec1 InertiaCmpVelNotchFilStruct_Rec_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  DecelGain = *TSC_InertiaCmpVel_Rte_Pim_DecelGain();
  *TSC_InertiaCmpVel_Rte_Pim_DecelGain() = DecelGain;
  PreScagCmpCmdPrev1 = *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev1();
  *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev1() = PreScagCmpCmdPrev1;
  PreScagCmpCmdPrev2 = *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev2();
  *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev2() = PreScagCmpCmdPrev2;
  ScaDrvrVelPrev1 = *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev1();
  *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev1() = ScaDrvrVelPrev1;
  ScaDrvrVelPrev2 = *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev2();
  *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev2() = ScaDrvrVelPrev2;
  TqSnsrAgPrev = *TSC_InertiaCmpVel_Rte_Pim_TqSnsrAgPrev();
  *TSC_InertiaCmpVel_Rte_Pim_TqSnsrAgPrev() = TqSnsrAgPrev;
  dInertiaCmpVelAssiBasdDampgCoeff = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff() = dInertiaCmpVelAssiBasdDampgCoeff;
  dInertiaCmpVelCalcdInertiaCmp = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelCalcdInertiaCmp();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelCalcdInertiaCmp() = dInertiaCmpVelCalcdInertiaCmp;
  dInertiaCmpVelFilFrq = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelFilFrq();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelFilFrq() = dInertiaCmpVelFilFrq;
  dInertiaCmpVelMotVelBasdOutpScag = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag() = dInertiaCmpVelMotVelBasdOutpScag;
  dInertiaCmpVelNotScadDrvrVel = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotScadDrvrVel();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotScadDrvrVel() = dInertiaCmpVelNotScadDrvrVel;
  dInertiaCmpVelNotchBlndVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchBlndVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchBlndVal() = dInertiaCmpVelNotchBlndVal;
  dInertiaCmpVelNotchInpVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchInpVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchInpVal() = dInertiaCmpVelNotchInpVal;
  dInertiaCmpVelNotchOutpVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchOutpVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchOutpVal() = dInertiaCmpVelNotchOutpVal;
  dInertiaCmpVelRawDecelGain = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelRawDecelGain();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelRawDecelGain() = dInertiaCmpVelRawDecelGain;
  dInertiaCmpVelScadDrvrVel = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelScadDrvrVel();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelScadDrvrVel() = dInertiaCmpVelScadDrvrVel;
  dInertiaCmpVelTqSnsrVelFildVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal() = dInertiaCmpVelTqSnsrVelFildVal;
  NotchFilChk = *TSC_InertiaCmpVel_Rte_Pim_NotchFilChk();
  *TSC_InertiaCmpVel_Rte_Pim_NotchFilChk() = NotchFilChk;
  TqSnsrVelFil = *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFil();
  *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFil() = TqSnsrVelFil;
  TqSnsrVelFilNotchSt = *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFilNotchSt();
  *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFilNotchSt() = TqSnsrVelFilNotchSt;

  InertiaCmpVelDampgDecelGain_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGain_Val();
  InertiaCmpVelDampgDecelGainFallSlew_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val();
  InertiaCmpVelDampgGainOffThd_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgGainOffThd_Val();
  InertiaCmpVelDampgGainOnThd_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgGainOnThd_Val();
  InertiaCmpVelMotInertia_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelMotInertia_Val();
  InertiaCmpVelTqSnsrVelFilFrq_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val();
  SysGlbPrmSysKineRat_Val_data = TSC_InertiaCmpVel_Rte_Prm_SysGlbPrmSysKineRat_Val();
  SysGlbPrmTorsBarStfn_Val_data = TSC_InertiaCmpVel_Rte_Prm_SysGlbPrmTorsBarStfn_Val();
  InertiaCmpVelDecelGainEnaCal_Logl_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl();
  (void)memcpy(InertiaCmpVelAssiBasdDampgCoeffX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(), sizeof(Ary1D_u4p12_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgRollgY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgStatY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelCmdScaY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelCmdScaY_Ary1D(), sizeof(Ary1D_u2p14_12));
  (void)memcpy(InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D(), sizeof(Ary1D_u11p5_6));
  (void)memcpy(InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D(), sizeof(Ary1D_u13p3_6));
  (void)memcpy(InertiaCmpVelDampgFilFrq_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D(), sizeof(Ary1D_u7p9_12));
  (void)memcpy(InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(), sizeof(Ary1D_u7p9_12));
  (void)memcpy(InertiaCmpVelDampgSpdBlndY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(), sizeof(Ary1D_u1p15_12));
  (void)memcpy(InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(), sizeof(Ary1D_u4p12_5));
  (void)memcpy(InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(), sizeof(Ary1D_u1p15_5));
  (void)memcpy(InertiaCmpVelMotVelBasdOutpScagX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D(), sizeof(Ary1D_u12p4_2));
  (void)memcpy(InertiaCmpVelMotVelBasdOutpScagY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D(), sizeof(Ary1D_u1p15_2));
  (void)memcpy(InertiaCmpVelNotchBlndY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(), sizeof(Ary1D_u1p15_12));
  (void)memcpy(InertiaCmpVelTqSnsrVelSca_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D(), sizeof(Ary1D_u2p14_12));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));
  InertiaCmpVelNotchFilStruct_Rec_data = *TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelNotchFilStruct_Rec();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InertiaCmpVelPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_InertiaCmpDecelGainDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_InertiaCmpVelCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLgtA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_InertiaCmpVelCmd_Val(float32 data)
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
 * Symbol: InertiaCmpVelPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, InertiaCmpVel_CODE) InertiaCmpVelPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: InertiaCmpVelPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AssiCmdBas_Val;
  float32 Read_HwTq_Val;
  boolean Read_InertiaCmpDecelGainDi_Logl;
  boolean Read_InertiaCmpVelCmdDi_Logl;
  float32 Read_MotVelCrf_Val;
  float32 Read_VehLgtA_Val;
  float32 Read_VehSpd_Val;
  float32 Read_WhlImbRejctnAmp_Val;

  float32 DecelGain;
  float32 PreScagCmpCmdPrev1;
  float32 PreScagCmpCmdPrev2;
  float32 ScaDrvrVelPrev1;
  float32 ScaDrvrVelPrev2;
  float32 TqSnsrAgPrev;
  float32 dInertiaCmpVelAssiBasdDampgCoeff;
  float32 dInertiaCmpVelCalcdInertiaCmp;
  float32 dInertiaCmpVelFilFrq;
  float32 dInertiaCmpVelMotVelBasdOutpScag;
  float32 dInertiaCmpVelNotScadDrvrVel;
  float32 dInertiaCmpVelNotchBlndVal;
  float32 dInertiaCmpVelNotchInpVal;
  float32 dInertiaCmpVelNotchOutpVal;
  float32 dInertiaCmpVelRawDecelGain;
  float32 dInertiaCmpVelScadDrvrVel;
  float32 dInertiaCmpVelTqSnsrVelFildVal;
  boolean NotchFilChk;
  FilLpRec1 TqSnsrVelFil;
  FilNotchStRec1 TqSnsrVelFilNotchSt;

  float32 InertiaCmpVelDampgDecelGain_Val_data;
  float32 InertiaCmpVelDampgDecelGainFallSlew_Val_data;
  float32 InertiaCmpVelDampgGainOffThd_Val_data;
  float32 InertiaCmpVelDampgGainOnThd_Val_data;
  float32 InertiaCmpVelMotInertia_Val_data;
  float32 InertiaCmpVelTqSnsrVelFilFrq_Val_data;
  float32 SysGlbPrmSysKineRat_Val_data;
  float32 SysGlbPrmTorsBarStfn_Val_data;
  boolean InertiaCmpVelDecelGainEnaCal_Logl_data;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D_data;
  Ary1D_u2p14_12 InertiaCmpVelCmdScaY_Ary1D_data;
  Ary1D_u11p5_6 InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D_data;
  Ary1D_u13p3_6 InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D_data;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D_data;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D_data;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D_data;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D_data;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D_data;
  Ary1D_u12p4_2 InertiaCmpVelMotVelBasdOutpScagX_Ary1D_data;
  Ary1D_u1p15_2 InertiaCmpVelMotVelBasdOutpScagY_Ary1D_data;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D_data;
  Ary1D_u2p14_12 InertiaCmpVelTqSnsrVelSca_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;
  FilNotchGainRec1 InertiaCmpVelNotchFilStruct_Rec_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  DecelGain = *TSC_InertiaCmpVel_Rte_Pim_DecelGain();
  *TSC_InertiaCmpVel_Rte_Pim_DecelGain() = DecelGain;
  PreScagCmpCmdPrev1 = *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev1();
  *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev1() = PreScagCmpCmdPrev1;
  PreScagCmpCmdPrev2 = *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev2();
  *TSC_InertiaCmpVel_Rte_Pim_PreScagCmpCmdPrev2() = PreScagCmpCmdPrev2;
  ScaDrvrVelPrev1 = *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev1();
  *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev1() = ScaDrvrVelPrev1;
  ScaDrvrVelPrev2 = *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev2();
  *TSC_InertiaCmpVel_Rte_Pim_ScaDrvrVelPrev2() = ScaDrvrVelPrev2;
  TqSnsrAgPrev = *TSC_InertiaCmpVel_Rte_Pim_TqSnsrAgPrev();
  *TSC_InertiaCmpVel_Rte_Pim_TqSnsrAgPrev() = TqSnsrAgPrev;
  dInertiaCmpVelAssiBasdDampgCoeff = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff() = dInertiaCmpVelAssiBasdDampgCoeff;
  dInertiaCmpVelCalcdInertiaCmp = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelCalcdInertiaCmp();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelCalcdInertiaCmp() = dInertiaCmpVelCalcdInertiaCmp;
  dInertiaCmpVelFilFrq = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelFilFrq();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelFilFrq() = dInertiaCmpVelFilFrq;
  dInertiaCmpVelMotVelBasdOutpScag = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag() = dInertiaCmpVelMotVelBasdOutpScag;
  dInertiaCmpVelNotScadDrvrVel = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotScadDrvrVel();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotScadDrvrVel() = dInertiaCmpVelNotScadDrvrVel;
  dInertiaCmpVelNotchBlndVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchBlndVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchBlndVal() = dInertiaCmpVelNotchBlndVal;
  dInertiaCmpVelNotchInpVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchInpVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchInpVal() = dInertiaCmpVelNotchInpVal;
  dInertiaCmpVelNotchOutpVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchOutpVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelNotchOutpVal() = dInertiaCmpVelNotchOutpVal;
  dInertiaCmpVelRawDecelGain = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelRawDecelGain();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelRawDecelGain() = dInertiaCmpVelRawDecelGain;
  dInertiaCmpVelScadDrvrVel = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelScadDrvrVel();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelScadDrvrVel() = dInertiaCmpVelScadDrvrVel;
  dInertiaCmpVelTqSnsrVelFildVal = *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal();
  *TSC_InertiaCmpVel_Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal() = dInertiaCmpVelTqSnsrVelFildVal;
  NotchFilChk = *TSC_InertiaCmpVel_Rte_Pim_NotchFilChk();
  *TSC_InertiaCmpVel_Rte_Pim_NotchFilChk() = NotchFilChk;
  TqSnsrVelFil = *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFil();
  *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFil() = TqSnsrVelFil;
  TqSnsrVelFilNotchSt = *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFilNotchSt();
  *TSC_InertiaCmpVel_Rte_Pim_TqSnsrVelFilNotchSt() = TqSnsrVelFilNotchSt;

  InertiaCmpVelDampgDecelGain_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGain_Val();
  InertiaCmpVelDampgDecelGainFallSlew_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val();
  InertiaCmpVelDampgGainOffThd_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgGainOffThd_Val();
  InertiaCmpVelDampgGainOnThd_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgGainOnThd_Val();
  InertiaCmpVelMotInertia_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelMotInertia_Val();
  InertiaCmpVelTqSnsrVelFilFrq_Val_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val();
  SysGlbPrmSysKineRat_Val_data = TSC_InertiaCmpVel_Rte_Prm_SysGlbPrmSysKineRat_Val();
  SysGlbPrmTorsBarStfn_Val_data = TSC_InertiaCmpVel_Rte_Prm_SysGlbPrmTorsBarStfn_Val();
  InertiaCmpVelDecelGainEnaCal_Logl_data = TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl();
  (void)memcpy(InertiaCmpVelAssiBasdDampgCoeffX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(), sizeof(Ary1D_u4p12_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgRollgY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgStatY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelCmdScaY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelCmdScaY_Ary1D(), sizeof(Ary1D_u2p14_12));
  (void)memcpy(InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D(), sizeof(Ary1D_u11p5_6));
  (void)memcpy(InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D(), sizeof(Ary1D_u13p3_6));
  (void)memcpy(InertiaCmpVelDampgFilFrq_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D(), sizeof(Ary1D_u7p9_12));
  (void)memcpy(InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(), sizeof(Ary1D_u7p9_12));
  (void)memcpy(InertiaCmpVelDampgSpdBlndY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(), sizeof(Ary1D_u1p15_12));
  (void)memcpy(InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(), sizeof(Ary1D_u4p12_5));
  (void)memcpy(InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(), sizeof(Ary1D_u1p15_5));
  (void)memcpy(InertiaCmpVelMotVelBasdOutpScagX_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D(), sizeof(Ary1D_u12p4_2));
  (void)memcpy(InertiaCmpVelMotVelBasdOutpScagY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D(), sizeof(Ary1D_u1p15_2));
  (void)memcpy(InertiaCmpVelNotchBlndY_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(), sizeof(Ary1D_u1p15_12));
  (void)memcpy(InertiaCmpVelTqSnsrVelSca_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D(), sizeof(Ary1D_u2p14_12));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_InertiaCmpVel_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));
  InertiaCmpVelNotchFilStruct_Rec_data = *TSC_InertiaCmpVel_Rte_Prm_InertiaCmpVelNotchFilStruct_Rec();

  fct_status = TSC_InertiaCmpVel_Rte_Read_AssiCmdBas_Val(&Read_AssiCmdBas_Val);
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

  fct_status = TSC_InertiaCmpVel_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_InertiaCmpVel_Rte_Read_InertiaCmpDecelGainDi_Logl(&Read_InertiaCmpDecelGainDi_Logl);
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

  fct_status = TSC_InertiaCmpVel_Rte_Read_InertiaCmpVelCmdDi_Logl(&Read_InertiaCmpVelCmdDi_Logl);
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

  fct_status = TSC_InertiaCmpVel_Rte_Read_MotVelCrf_Val(&Read_MotVelCrf_Val);
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

  fct_status = TSC_InertiaCmpVel_Rte_Read_VehLgtA_Val(&Read_VehLgtA_Val);
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

  fct_status = TSC_InertiaCmpVel_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_InertiaCmpVel_Rte_Read_WhlImbRejctnAmp_Val(&Read_WhlImbRejctnAmp_Val);
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

  fct_status = TSC_InertiaCmpVel_Rte_Write_InertiaCmpVelCmd_Val(Rte_InitValue_InertiaCmpVelCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_InertiaCmpVel_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
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


#define InertiaCmpVel_STOP_SEC_CODE
#include "InertiaCmpVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
