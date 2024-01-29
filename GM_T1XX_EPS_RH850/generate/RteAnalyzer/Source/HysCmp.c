/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HysCmp.c
 *        Config:  EPS.dpa
 *     SW-C Type:  HysCmp
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HysCmp>
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
 * s14p1
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
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

#include "Rte_HysCmp.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_HysCmp.h"


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
 * s14p1: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s14p1_8: Array with 8 element(s) of type s14p1
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u2p14_6: Array with 6 element(s) of type u2p14
 * Ary1D_u4p12_12: Array with 12 element(s) of type u4p12
 * Ary1D_u4p12_8: Array with 8 element(s) of type u4p12
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u8p8_8: Array with 8 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 * Ary1D_u9p7_8: Array with 8 element(s) of type u9p7
 * Ary2D_u4p12_12_8: Array with 12 element(s) of type Ary1D_u4p12_8
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
 *   float32 *Rte_Pim_PrevAssiCmdFildVal(void)
 *   float32 *Rte_Pim_PrevHwTqFildVal(void)
 *   float32 *Rte_Pim_PrevRiseX(void)
 *   float32 *Rte_Pim_PrevRiseY(void)
 *   float32 *Rte_Pim_dHysCmpAssiCmdFild(void)
 *   float32 *Rte_Pim_dHysCmpAvl(void)
 *   float32 *Rte_Pim_dHysCmpEffCmpTq(void)
 *   float32 *Rte_Pim_dHysCmpFric(void)
 *   float32 *Rte_Pim_dHysCmpHwTqFild(void)
 *   float32 *Rte_Pim_dHysCmpNegAvl(void)
 *   float32 *Rte_Pim_dHysCmpPosAvl(void)
 *   float32 *Rte_Pim_dHysCmpRawVal(void)
 *   float32 *Rte_Pim_dHysCmpRiseYFac(void)
 *   FilLpRec1 *Rte_Pim_AssiCmdLpFil(void)
 *   FilLpRec1 *Rte_Pim_FinalOutpLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HysCmpAssiCmdLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpFinalOutpLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpOutpLim_Val(void)
 *   float32 Rte_Prm_HysCmpRevGain_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   u9p7 Rte_Prm_HysCmpAssiInpLim_Val(void)
 *   u4p12 *Rte_Prm_HysCmpEffLossY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u9p7 *Rte_Prm_HysCmpEffOffsY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   s14p1 *Rte_Prm_HysCmpFricTScaX_Ary1D(void)
 *     Returnvalue: s14p1* is of type Ary1D_s14p1_8
 *   u9p7 *Rte_Prm_HysCmpFricTScaY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_8
 *   u8p8 *Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u2p14 *Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_6
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   u4p12 *Rte_Prm_HysCmpHwTqScaX_Ary2D(void)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_8
 *   u4p12 *Rte_Prm_HysCmpHwTqScaY_Ary2D(void)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_8
 *   u9p7 *Rte_Prm_HysCmpHysSatnY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   u9p7 *Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_5
 *   u2p14 *Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_5
 *   u8p8 *Rte_Prm_HysCmpNegHysCmpX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_8
 *   u9p7 *Rte_Prm_HysCmpNegHysCmpY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_8
 *   u2p14 *Rte_Prm_HysCmpRiseX_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_6
 *   u2p14 *Rte_Prm_HysCmpRiseY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_6
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define HysCmp_START_SEC_CODE
#include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HysCmpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HysCmpInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HysCmp_CODE) HysCmpInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HysCmpInit1
 *********************************************************************************************************************/

  float32 PrevAssiCmdFildVal;
  float32 PrevHwTqFildVal;
  float32 PrevRiseX;
  float32 PrevRiseY;
  float32 dHysCmpAssiCmdFild;
  float32 dHysCmpAvl;
  float32 dHysCmpEffCmpTq;
  float32 dHysCmpFric;
  float32 dHysCmpHwTqFild;
  float32 dHysCmpNegAvl;
  float32 dHysCmpPosAvl;
  float32 dHysCmpRawVal;
  float32 dHysCmpRiseYFac;
  FilLpRec1 AssiCmdLpFil;
  FilLpRec1 FinalOutpLpFil;
  FilLpRec1 HwTqLpFil;

  float32 HysCmpAssiCmdLpFilFrq_Val_data;
  float32 HysCmpFinalOutpLpFilFrq_Val_data;
  float32 HysCmpHwTqLpFilFrq_Val_data;
  float32 HysCmpOutpLim_Val_data;
  float32 HysCmpRevGain_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  u9p7 HysCmpAssiInpLim_Val_data;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D_data;
  Ary1D_s14p1_8 HysCmpFricTScaX_Ary1D_data;
  Ary1D_u9p7_8 HysCmpFricTScaY_Ary1D_data;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D_data;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D_data;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D_data;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D_data;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D_data;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D_data;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D_data;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D_data;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D_data;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D_data;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevAssiCmdFildVal = *TSC_HysCmp_Rte_Pim_PrevAssiCmdFildVal();
  *TSC_HysCmp_Rte_Pim_PrevAssiCmdFildVal() = PrevAssiCmdFildVal;
  PrevHwTqFildVal = *TSC_HysCmp_Rte_Pim_PrevHwTqFildVal();
  *TSC_HysCmp_Rte_Pim_PrevHwTqFildVal() = PrevHwTqFildVal;
  PrevRiseX = *TSC_HysCmp_Rte_Pim_PrevRiseX();
  *TSC_HysCmp_Rte_Pim_PrevRiseX() = PrevRiseX;
  PrevRiseY = *TSC_HysCmp_Rte_Pim_PrevRiseY();
  *TSC_HysCmp_Rte_Pim_PrevRiseY() = PrevRiseY;
  dHysCmpAssiCmdFild = *TSC_HysCmp_Rte_Pim_dHysCmpAssiCmdFild();
  *TSC_HysCmp_Rte_Pim_dHysCmpAssiCmdFild() = dHysCmpAssiCmdFild;
  dHysCmpAvl = *TSC_HysCmp_Rte_Pim_dHysCmpAvl();
  *TSC_HysCmp_Rte_Pim_dHysCmpAvl() = dHysCmpAvl;
  dHysCmpEffCmpTq = *TSC_HysCmp_Rte_Pim_dHysCmpEffCmpTq();
  *TSC_HysCmp_Rte_Pim_dHysCmpEffCmpTq() = dHysCmpEffCmpTq;
  dHysCmpFric = *TSC_HysCmp_Rte_Pim_dHysCmpFric();
  *TSC_HysCmp_Rte_Pim_dHysCmpFric() = dHysCmpFric;
  dHysCmpHwTqFild = *TSC_HysCmp_Rte_Pim_dHysCmpHwTqFild();
  *TSC_HysCmp_Rte_Pim_dHysCmpHwTqFild() = dHysCmpHwTqFild;
  dHysCmpNegAvl = *TSC_HysCmp_Rte_Pim_dHysCmpNegAvl();
  *TSC_HysCmp_Rte_Pim_dHysCmpNegAvl() = dHysCmpNegAvl;
  dHysCmpPosAvl = *TSC_HysCmp_Rte_Pim_dHysCmpPosAvl();
  *TSC_HysCmp_Rte_Pim_dHysCmpPosAvl() = dHysCmpPosAvl;
  dHysCmpRawVal = *TSC_HysCmp_Rte_Pim_dHysCmpRawVal();
  *TSC_HysCmp_Rte_Pim_dHysCmpRawVal() = dHysCmpRawVal;
  dHysCmpRiseYFac = *TSC_HysCmp_Rte_Pim_dHysCmpRiseYFac();
  *TSC_HysCmp_Rte_Pim_dHysCmpRiseYFac() = dHysCmpRiseYFac;
  AssiCmdLpFil = *TSC_HysCmp_Rte_Pim_AssiCmdLpFil();
  *TSC_HysCmp_Rte_Pim_AssiCmdLpFil() = AssiCmdLpFil;
  FinalOutpLpFil = *TSC_HysCmp_Rte_Pim_FinalOutpLpFil();
  *TSC_HysCmp_Rte_Pim_FinalOutpLpFil() = FinalOutpLpFil;
  HwTqLpFil = *TSC_HysCmp_Rte_Pim_HwTqLpFil();
  *TSC_HysCmp_Rte_Pim_HwTqLpFil() = HwTqLpFil;

  HysCmpAssiCmdLpFilFrq_Val_data = TSC_HysCmp_Rte_Prm_HysCmpAssiCmdLpFilFrq_Val();
  HysCmpFinalOutpLpFilFrq_Val_data = TSC_HysCmp_Rte_Prm_HysCmpFinalOutpLpFilFrq_Val();
  HysCmpHwTqLpFilFrq_Val_data = TSC_HysCmp_Rte_Prm_HysCmpHwTqLpFilFrq_Val();
  HysCmpOutpLim_Val_data = TSC_HysCmp_Rte_Prm_HysCmpOutpLim_Val();
  HysCmpRevGain_Val_data = TSC_HysCmp_Rte_Prm_HysCmpRevGain_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_HysCmp_Rte_Prm_SysGlbPrmSysTqRat_Val();
  HysCmpAssiInpLim_Val_data = TSC_HysCmp_Rte_Prm_HysCmpAssiInpLim_Val();
  (void)memcpy(HysCmpEffLossY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpEffLossY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(HysCmpEffOffsY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpEffOffsY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpFricTScaX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricTScaX_Ary1D(), sizeof(Ary1D_s14p1_8));
  (void)memcpy(HysCmpFricTScaY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricTScaY_Ary1D(), sizeof(Ary1D_u9p7_8));
  (void)memcpy(HysCmpFricWhlImbRejctnBlndX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(), sizeof(Ary1D_u8p8_6));
  (void)memcpy(HysCmpFricWhlImbRejctnBlndY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(), sizeof(Ary1D_u2p14_6));
  (void)memcpy(HysCmpFricWhlImbRejctnOffY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpFricWhlImbRejctnOnY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpHwTqScaX_Ary2D_data, TSC_HysCmp_Rte_Prm_HysCmpHwTqScaX_Ary2D(), sizeof(Ary2D_u4p12_12_8));
  (void)memcpy(HysCmpHwTqScaY_Ary2D_data, TSC_HysCmp_Rte_Prm_HysCmpHwTqScaY_Ary2D(), sizeof(Ary2D_u4p12_12_8));
  (void)memcpy(HysCmpHysSatnY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpHysSatnY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpNegHysCmpScaX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(), sizeof(Ary1D_u9p7_5));
  (void)memcpy(HysCmpNegHysCmpScaY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(), sizeof(Ary1D_u2p14_5));
  (void)memcpy(HysCmpNegHysCmpX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpX_Ary1D(), sizeof(Ary1D_u8p8_8));
  (void)memcpy(HysCmpNegHysCmpY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpY_Ary1D(), sizeof(Ary1D_u9p7_8));
  (void)memcpy(HysCmpRiseX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpRiseX_Ary1D(), sizeof(Ary1D_u2p14_6));
  (void)memcpy(HysCmpRiseY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpRiseY_Ary1D(), sizeof(Ary1D_u2p14_6));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_HysCmp_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HysCmpPer1
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
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HysCmpCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysFricOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HysCmpCmd_Val(float32 data)
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
 * Symbol: HysCmpPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HysCmp_CODE) HysCmpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HysCmpPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AssiCmdBas_Val;
  float32 Read_AssiMechT_Val;
  float32 Read_HwTq_Val;
  float32 Read_HwTqOvrl_Val;
  boolean Read_HysCmpCmdDi_Logl;
  float32 Read_SysFricOffs_Val;
  float32 Read_VehSpd_Val;
  float32 Read_WhlImbRejctnAmp_Val;

  float32 PrevAssiCmdFildVal;
  float32 PrevHwTqFildVal;
  float32 PrevRiseX;
  float32 PrevRiseY;
  float32 dHysCmpAssiCmdFild;
  float32 dHysCmpAvl;
  float32 dHysCmpEffCmpTq;
  float32 dHysCmpFric;
  float32 dHysCmpHwTqFild;
  float32 dHysCmpNegAvl;
  float32 dHysCmpPosAvl;
  float32 dHysCmpRawVal;
  float32 dHysCmpRiseYFac;
  FilLpRec1 AssiCmdLpFil;
  FilLpRec1 FinalOutpLpFil;
  FilLpRec1 HwTqLpFil;

  float32 HysCmpAssiCmdLpFilFrq_Val_data;
  float32 HysCmpFinalOutpLpFilFrq_Val_data;
  float32 HysCmpHwTqLpFilFrq_Val_data;
  float32 HysCmpOutpLim_Val_data;
  float32 HysCmpRevGain_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  u9p7 HysCmpAssiInpLim_Val_data;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D_data;
  Ary1D_s14p1_8 HysCmpFricTScaX_Ary1D_data;
  Ary1D_u9p7_8 HysCmpFricTScaY_Ary1D_data;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D_data;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D_data;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D_data;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D_data;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D_data;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D_data;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D_data;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D_data;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D_data;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D_data;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevAssiCmdFildVal = *TSC_HysCmp_Rte_Pim_PrevAssiCmdFildVal();
  *TSC_HysCmp_Rte_Pim_PrevAssiCmdFildVal() = PrevAssiCmdFildVal;
  PrevHwTqFildVal = *TSC_HysCmp_Rte_Pim_PrevHwTqFildVal();
  *TSC_HysCmp_Rte_Pim_PrevHwTqFildVal() = PrevHwTqFildVal;
  PrevRiseX = *TSC_HysCmp_Rte_Pim_PrevRiseX();
  *TSC_HysCmp_Rte_Pim_PrevRiseX() = PrevRiseX;
  PrevRiseY = *TSC_HysCmp_Rte_Pim_PrevRiseY();
  *TSC_HysCmp_Rte_Pim_PrevRiseY() = PrevRiseY;
  dHysCmpAssiCmdFild = *TSC_HysCmp_Rte_Pim_dHysCmpAssiCmdFild();
  *TSC_HysCmp_Rte_Pim_dHysCmpAssiCmdFild() = dHysCmpAssiCmdFild;
  dHysCmpAvl = *TSC_HysCmp_Rte_Pim_dHysCmpAvl();
  *TSC_HysCmp_Rte_Pim_dHysCmpAvl() = dHysCmpAvl;
  dHysCmpEffCmpTq = *TSC_HysCmp_Rte_Pim_dHysCmpEffCmpTq();
  *TSC_HysCmp_Rte_Pim_dHysCmpEffCmpTq() = dHysCmpEffCmpTq;
  dHysCmpFric = *TSC_HysCmp_Rte_Pim_dHysCmpFric();
  *TSC_HysCmp_Rte_Pim_dHysCmpFric() = dHysCmpFric;
  dHysCmpHwTqFild = *TSC_HysCmp_Rte_Pim_dHysCmpHwTqFild();
  *TSC_HysCmp_Rte_Pim_dHysCmpHwTqFild() = dHysCmpHwTqFild;
  dHysCmpNegAvl = *TSC_HysCmp_Rte_Pim_dHysCmpNegAvl();
  *TSC_HysCmp_Rte_Pim_dHysCmpNegAvl() = dHysCmpNegAvl;
  dHysCmpPosAvl = *TSC_HysCmp_Rte_Pim_dHysCmpPosAvl();
  *TSC_HysCmp_Rte_Pim_dHysCmpPosAvl() = dHysCmpPosAvl;
  dHysCmpRawVal = *TSC_HysCmp_Rte_Pim_dHysCmpRawVal();
  *TSC_HysCmp_Rte_Pim_dHysCmpRawVal() = dHysCmpRawVal;
  dHysCmpRiseYFac = *TSC_HysCmp_Rte_Pim_dHysCmpRiseYFac();
  *TSC_HysCmp_Rte_Pim_dHysCmpRiseYFac() = dHysCmpRiseYFac;
  AssiCmdLpFil = *TSC_HysCmp_Rte_Pim_AssiCmdLpFil();
  *TSC_HysCmp_Rte_Pim_AssiCmdLpFil() = AssiCmdLpFil;
  FinalOutpLpFil = *TSC_HysCmp_Rte_Pim_FinalOutpLpFil();
  *TSC_HysCmp_Rte_Pim_FinalOutpLpFil() = FinalOutpLpFil;
  HwTqLpFil = *TSC_HysCmp_Rte_Pim_HwTqLpFil();
  *TSC_HysCmp_Rte_Pim_HwTqLpFil() = HwTqLpFil;

  HysCmpAssiCmdLpFilFrq_Val_data = TSC_HysCmp_Rte_Prm_HysCmpAssiCmdLpFilFrq_Val();
  HysCmpFinalOutpLpFilFrq_Val_data = TSC_HysCmp_Rte_Prm_HysCmpFinalOutpLpFilFrq_Val();
  HysCmpHwTqLpFilFrq_Val_data = TSC_HysCmp_Rte_Prm_HysCmpHwTqLpFilFrq_Val();
  HysCmpOutpLim_Val_data = TSC_HysCmp_Rte_Prm_HysCmpOutpLim_Val();
  HysCmpRevGain_Val_data = TSC_HysCmp_Rte_Prm_HysCmpRevGain_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_HysCmp_Rte_Prm_SysGlbPrmSysTqRat_Val();
  HysCmpAssiInpLim_Val_data = TSC_HysCmp_Rte_Prm_HysCmpAssiInpLim_Val();
  (void)memcpy(HysCmpEffLossY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpEffLossY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(HysCmpEffOffsY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpEffOffsY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpFricTScaX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricTScaX_Ary1D(), sizeof(Ary1D_s14p1_8));
  (void)memcpy(HysCmpFricTScaY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricTScaY_Ary1D(), sizeof(Ary1D_u9p7_8));
  (void)memcpy(HysCmpFricWhlImbRejctnBlndX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(), sizeof(Ary1D_u8p8_6));
  (void)memcpy(HysCmpFricWhlImbRejctnBlndY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(), sizeof(Ary1D_u2p14_6));
  (void)memcpy(HysCmpFricWhlImbRejctnOffY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpFricWhlImbRejctnOnY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpHwTqScaX_Ary2D_data, TSC_HysCmp_Rte_Prm_HysCmpHwTqScaX_Ary2D(), sizeof(Ary2D_u4p12_12_8));
  (void)memcpy(HysCmpHwTqScaY_Ary2D_data, TSC_HysCmp_Rte_Prm_HysCmpHwTqScaY_Ary2D(), sizeof(Ary2D_u4p12_12_8));
  (void)memcpy(HysCmpHysSatnY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpHysSatnY_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpNegHysCmpScaX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(), sizeof(Ary1D_u9p7_5));
  (void)memcpy(HysCmpNegHysCmpScaY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(), sizeof(Ary1D_u2p14_5));
  (void)memcpy(HysCmpNegHysCmpX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpX_Ary1D(), sizeof(Ary1D_u8p8_8));
  (void)memcpy(HysCmpNegHysCmpY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpY_Ary1D(), sizeof(Ary1D_u9p7_8));
  (void)memcpy(HysCmpRiseX_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpRiseX_Ary1D(), sizeof(Ary1D_u2p14_6));
  (void)memcpy(HysCmpRiseY_Ary1D_data, TSC_HysCmp_Rte_Prm_HysCmpRiseY_Ary1D(), sizeof(Ary1D_u2p14_6));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_HysCmp_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));

  fct_status = TSC_HysCmp_Rte_Read_AssiCmdBas_Val(&Read_AssiCmdBas_Val);
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

  fct_status = TSC_HysCmp_Rte_Read_AssiMechT_Val(&Read_AssiMechT_Val);
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

  fct_status = TSC_HysCmp_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_HysCmp_Rte_Read_HwTqOvrl_Val(&Read_HwTqOvrl_Val);
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

  fct_status = TSC_HysCmp_Rte_Read_HysCmpCmdDi_Logl(&Read_HysCmpCmdDi_Logl);
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

  fct_status = TSC_HysCmp_Rte_Read_SysFricOffs_Val(&Read_SysFricOffs_Val);
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

  fct_status = TSC_HysCmp_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_HysCmp_Rte_Read_WhlImbRejctnAmp_Val(&Read_WhlImbRejctnAmp_Val);
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

  fct_status = TSC_HysCmp_Rte_Write_HysCmpCmd_Val(Rte_InitValue_HysCmpCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_HysCmp_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
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


#define HysCmp_STOP_SEC_CODE
#include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
