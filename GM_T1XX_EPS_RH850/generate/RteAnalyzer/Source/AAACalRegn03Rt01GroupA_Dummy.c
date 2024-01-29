/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AAACalRegn03Rt01GroupA_Dummy.c
 *        Config:  EPS.dpa
 *     SW-C Type:  AAACalRegn03Rt01GroupA_Dummy
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AAACalRegn03Rt01GroupA_Dummy>
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
 * s4p11
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * u0p16
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
 * u3p13
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
 * u5p11
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

#include "Rte_AAACalRegn03Rt01GroupA_Dummy.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_AAACalRegn03Rt01GroupA_Dummy.h"


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
 * s4p11: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u0p16: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s4p11_20: Array with 20 element(s) of type s4p11
 * Ary1D_u0p16_10: Array with 10 element(s) of type u0p16
 * Ary1D_u12p4_13: Array with 13 element(s) of type u12p4
 * Ary1D_u12p4_16: Array with 16 element(s) of type u12p4
 * Ary1D_u1p15_12: Array with 12 element(s) of type u1p15
 * Ary1D_u2p14_6: Array with 6 element(s) of type u2p14
 * Ary1D_u3p13_13: Array with 13 element(s) of type u3p13
 * Ary1D_u4p12_10: Array with 10 element(s) of type u4p12
 * Ary1D_u4p12_12: Array with 12 element(s) of type u4p12
 * Ary1D_u5p11_13: Array with 13 element(s) of type u5p11
 * Ary1D_u5p11_16: Array with 16 element(s) of type u5p11
 * Ary1D_u7p9_4: Array with 4 element(s) of type u7p9
 * Ary1D_u8p8_20: Array with 20 element(s) of type u8p8
 * Ary1D_u8p8_4: Array with 4 element(s) of type u8p8
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u8p8_8: Array with 8 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_s4p11_12_20: Array with 12 element(s) of type Ary1D_s4p11_20
 * Ary2D_u12p4_12_13: Array with 12 element(s) of type Ary1D_u12p4_13
 * Ary2D_u12p4_9_16: Array with 9 element(s) of type Ary1D_u12p4_16
 * Ary2D_u3p13_12_13: Array with 12 element(s) of type Ary1D_u3p13_13
 * Ary2D_u5p11_12_13: Array with 12 element(s) of type Ary1D_u5p11_13
 * Ary2D_u5p11_9_16: Array with 9 element(s) of type Ary1D_u5p11_16
 * Ary2D_u7p9_9_4: Array with 9 element(s) of type Ary1D_u7p9_4
 * Ary2D_u8p8_12_20: Array with 12 element(s) of type Ary1D_u8p8_20
 * Ary2D_u8p8_9_4: Array with 9 element(s) of type Ary1D_u8p8_4
 * Ary2D_u8p8_9_8: Array with 9 element(s) of type Ary1D_u8p8_8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u3p13 *Rte_Prm_AssiHiFrqGainY_Ary2D(Rte_Instance self)
 *     Returnvalue: u3p13* is of type Ary2D_u3p13_12_13
 *   u5p11 *Rte_Prm_AssiHiFrqTqX_Ary2D(Rte_Instance self)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(Rte_Instance self)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(Rte_Instance self)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u4p12 *Rte_Prm_DampgHydCoeff1ScaY_Ary1D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff2ScaY_Ary1D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff3ScaY_Ary1D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff4ScaY_Ary1D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u12p4 *Rte_Prm_DampgMotVelX_Ary2D(Rte_Instance self)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_12_13
 *   u5p11 *Rte_Prm_DampgMotVelY_Ary2D(Rte_Instance self)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   u8p8 *Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(Rte_Instance self)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u2p14 *Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(Rte_Instance self)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_6
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(Rte_Instance self)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(Rte_Instance self)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   u4p12 *Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(Rte_Instance self)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(Rte_Instance self)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u1p15 *Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(Rte_Instance self)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u1p15 *Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(Rte_Instance self)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u12p4 *Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(Rte_Instance self)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_9_16
 *   u5p11 *Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(Rte_Instance self)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_9_16
 *   u8p8 *Rte_Prm_RtnScaTqX_Ary2D(Rte_Instance self)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u8p8 *Rte_Prm_RtnScaTqY_Ary2D(Rte_Instance self)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u7p9 *Rte_Prm_RtnScaVelX_Ary2D(Rte_Instance self)
 *     Returnvalue: u7p9* is of type Ary2D_u7p9_9_4
 *   u8p8 *Rte_Prm_RtnScaVelY_Ary2D(Rte_Instance self)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_4
 *
 *********************************************************************************************************************/


#define AAACalRegn03Rt01GroupA_Dummy_START_SEC_CODE
#include "AAACalRegn03Rt01GroupA_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CalRegn03Rt01GroupADummyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CalRegn03Rt01GroupADummyInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AAACalRegn03Rt01GroupA_Dummy_CODE) CalRegn03Rt01GroupADummyInit1(Rte_Instance self) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CalRegn03Rt01GroupADummyInit1
 *********************************************************************************************************************/

  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D_data;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D_data;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D_data;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D_data;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D_data;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D_data;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D_data;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D_data;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D_data;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D_data;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D_data;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D_data;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D_data;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D_data;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D_data;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D_data;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D_data;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D_data;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  (void)memcpy(AssiHiFrqGainY_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_AssiHiFrqGainY_Ary2D(self), sizeof(Ary2D_u3p13_12_13));
  (void)memcpy(AssiHiFrqTqX_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_AssiHiFrqTqX_Ary2D(self), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(AssiMotTqWhlImbRejctnMinX_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(self), sizeof(Ary2D_u8p8_12_20));
  (void)memcpy(AssiMotTqWhlImbRejctnMinY_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(self), sizeof(Ary2D_s4p11_12_20));
  (void)memcpy(DampgHydCoeff1ScaY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_DampgHydCoeff1ScaY_Ary1D(self), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff2ScaY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_DampgHydCoeff2ScaY_Ary1D(self), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff3ScaY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_DampgHydCoeff3ScaY_Ary1D(self), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff4ScaY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_DampgHydCoeff4ScaY_Ary1D(self), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgMotVelX_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_DampgMotVelX_Ary2D(self), sizeof(Ary2D_u12p4_12_13));
  (void)memcpy(DampgMotVelY_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_DampgMotVelY_Ary2D(self), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(HysCmpFricWhlImbRejctnBlndX_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(self), sizeof(Ary1D_u8p8_6));
  (void)memcpy(HysCmpFricWhlImbRejctnBlndY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(self), sizeof(Ary1D_u2p14_6));
  (void)memcpy(HysCmpFricWhlImbRejctnOffY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(self), sizeof(Ary1D_u9p7_12));
  (void)memcpy(HysCmpFricWhlImbRejctnOnY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(self), sizeof(Ary1D_u9p7_12));
  (void)memcpy(InertiaCmpVelAssiBasdDampgCoeffX_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(self), sizeof(Ary1D_u4p12_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgRollgY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(self), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelAssiBasdDampgStatY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(self), sizeof(Ary1D_u0p16_10));
  (void)memcpy(InertiaCmpVelDampgSpdBlndY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(self), sizeof(Ary1D_u1p15_12));
  (void)memcpy(InertiaCmpVelNotchBlndY_Ary1D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(self), sizeof(Ary1D_u1p15_12));
  (void)memcpy(RtnHwAgOffsCalcdX_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(self), sizeof(Ary2D_u12p4_9_16));
  (void)memcpy(RtnHwAgOffsCalcdY_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(self), sizeof(Ary2D_u5p11_9_16));
  (void)memcpy(RtnScaTqX_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_RtnScaTqX_Ary2D(self), sizeof(Ary2D_u8p8_9_8));
  (void)memcpy(RtnScaTqY_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_RtnScaTqY_Ary2D(self), sizeof(Ary2D_u8p8_9_8));
  (void)memcpy(RtnScaVelX_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_RtnScaVelX_Ary2D(self), sizeof(Ary2D_u7p9_9_4));
  (void)memcpy(RtnScaVelY_Ary2D_data, TSC_AAACalRegn03Rt01GroupA_Dummy_Rte_Prm_RtnScaVelY_Ary2D(self), sizeof(Ary2D_u8p8_9_4));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AAACalRegn03Rt01GroupA_Dummy_STOP_SEC_CODE
#include "AAACalRegn03Rt01GroupA_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
