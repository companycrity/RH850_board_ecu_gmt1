/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AAACalRegn03Rt01GroupB_Dummy.c
 *        Config:  EPS.dpa
 *     SW-C Type:  AAACalRegn03Rt01GroupB_Dummy
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AAACalRegn03Rt01GroupB_Dummy>
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

#include "Rte_AAACalRegn03Rt01GroupB_Dummy.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_AAACalRegn03Rt01GroupB_Dummy.h"


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
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s4p11_20: Array with 20 element(s) of type s4p11
 * Ary1D_u0p16_10: Array with 10 element(s) of type u0p16
 * Ary1D_u0p16_2: Array with 2 element(s) of type u0p16
 * Ary1D_u12p4_2: Array with 2 element(s) of type u12p4
 * Ary1D_u12p4_4: Array with 4 element(s) of type u12p4
 * Ary1D_u1p15_4: Array with 4 element(s) of type u1p15
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u3p13_13: Array with 13 element(s) of type u3p13
 * Ary1D_u4p12_5: Array with 5 element(s) of type u4p12
 * Ary1D_u5p11_13: Array with 13 element(s) of type u5p11
 * Ary1D_u5p11_5: Array with 5 element(s) of type u5p11
 * Ary1D_u8p8_20: Array with 20 element(s) of type u8p8
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 * Ary2D_s4p11_12_20: Array with 12 element(s) of type Ary1D_s4p11_20
 * Ary2D_u0p16_4_2: Array with 4 element(s) of type Ary1D_u0p16_2
 * Ary2D_u12p4_4_2: Array with 4 element(s) of type Ary1D_u12p4_2
 * Ary2D_u12p4_5_4: Array with 5 element(s) of type Ary1D_u12p4_4
 * Ary2D_u1p15_12_5: Array with 12 element(s) of type Ary1D_u1p15_5
 * Ary2D_u1p15_5_4: Array with 5 element(s) of type Ary1D_u1p15_4
 * Ary2D_u2p14_12_5: Array with 12 element(s) of type Ary1D_u2p14_5
 * Ary2D_u3p13_12_13: Array with 12 element(s) of type Ary1D_u3p13_13
 * Ary2D_u4p12_12_5: Array with 12 element(s) of type Ary1D_u4p12_5
 * Ary2D_u5p11_12_13: Array with 12 element(s) of type Ary1D_u5p11_13
 * Ary2D_u5p11_12_5: Array with 12 element(s) of type Ary1D_u5p11_5
 * Ary2D_u8p8_12_20: Array with 12 element(s) of type Ary1D_u8p8_20
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
 *   u5p11 *Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(Rte_Instance self)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   u4p12 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_5
 *   u1p15 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(Rte_Instance self)
 *     Returnvalue: u1p15* is of type Ary2D_u1p15_12_5
 *   u3p13 *Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(Rte_Instance self)
 *     Returnvalue: u3p13* is of type Ary2D_u3p13_12_13
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(Rte_Instance self)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(Rte_Instance self)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u5p11 *Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(Rte_Instance self)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_5
 *   u2p14 *Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(Rte_Instance self)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_12_5
 *   u9p7 *Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D(Rte_Instance self)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D(Rte_Instance self)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_5
 *   u12p4 *Rte_Prm_EotProtnEntrGainX_Ary2D(Rte_Instance self)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_5_4
 *   u1p15 *Rte_Prm_EotProtnEntrGainY_Ary2D(Rte_Instance self)
 *     Returnvalue: u1p15* is of type Ary2D_u1p15_5_4
 *   u0p16 *Rte_Prm_EotProtnExitDampgY_Ary2D(Rte_Instance self)
 *     Returnvalue: u0p16* is of type Ary2D_u0p16_4_2
 *   u12p4 *Rte_Prm_EotProtnHwDegDampgX_Ary2D(Rte_Instance self)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_4_2
 *   u0p16 *Rte_Prm_EotProtnNormDampgY_Ary2D(Rte_Instance self)
 *     Returnvalue: u0p16* is of type Ary2D_u0p16_4_2
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(Rte_Instance self)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *
 *********************************************************************************************************************/


#define AAACalRegn03Rt01GroupB_Dummy_START_SEC_CODE
#include "AAACalRegn03Rt01GroupB_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CalRegn03Rt01GroupBDummyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CalRegn03Rt01GroupBDummyInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AAACalRegn03Rt01GroupB_Dummy_CODE) CalRegn03Rt01GroupBDummyInit1(Rte_Instance self) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CalRegn03Rt01GroupBDummyInit1
 *********************************************************************************************************************/

  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D_data;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D_data;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D_data;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D_data;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D_data;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D_data;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D_data;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D_data;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D_data;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D_data;
  Ary2D_u12p4_5_4 EotProtnEntrGainX_Ary2D_data;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D_data;
  Ary2D_u0p16_4_2 EotProtnExitDampgY_Ary2D_data;
  Ary2D_u12p4_4_2 EotProtnHwDegDampgX_Ary2D_data;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D_data;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  (void)memcpy(AssiHiFrqTqWhlImbRejctnTqX_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(self), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(AssiHiFrqWhlImbRejctnBlndX_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(self), sizeof(Ary2D_u4p12_12_5));
  (void)memcpy(AssiHiFrqWhlImbRejctnBlndY_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(self), sizeof(Ary2D_u1p15_12_5));
  (void)memcpy(AssiHiFrqWhlImbRejctnGainY_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(self), sizeof(Ary2D_u3p13_12_13));
  (void)memcpy(AssiMotTqWhlImbRejctnMaxX_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(self), sizeof(Ary2D_u8p8_12_20));
  (void)memcpy(AssiMotTqWhlImbRejctnMaxY_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(self), sizeof(Ary2D_s4p11_12_20));
  (void)memcpy(AssiWhlImbRejctnBlndScaX_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(self), sizeof(Ary2D_u5p11_12_5));
  (void)memcpy(AssiWhlImbRejctnBlndScaY_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(self), sizeof(Ary2D_u2p14_12_5));
  (void)memcpy(EotProtnDampgVehSpdTbl_Ary1D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D(self), sizeof(Ary1D_u9p7_4));
  (void)memcpy(EotProtnEntrGainVehSpdTbl_Ary1D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D(self), sizeof(Ary1D_u9p7_5));
  (void)memcpy(EotProtnEntrGainX_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_EotProtnEntrGainX_Ary2D(self), sizeof(Ary2D_u12p4_5_4));
  (void)memcpy(EotProtnEntrGainY_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_EotProtnEntrGainY_Ary2D(self), sizeof(Ary2D_u1p15_5_4));
  (void)memcpy(EotProtnExitDampgY_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_EotProtnExitDampgY_Ary2D(self), sizeof(Ary2D_u0p16_4_2));
  (void)memcpy(EotProtnHwDegDampgX_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_EotProtnHwDegDampgX_Ary2D(self), sizeof(Ary2D_u12p4_4_2));
  (void)memcpy(EotProtnNormDampgY_Ary2D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_EotProtnNormDampgY_Ary2D(self), sizeof(Ary2D_u0p16_4_2));
  (void)memcpy(InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D_data, TSC_AAACalRegn03Rt01GroupB_Dummy_Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(self), sizeof(Ary1D_u0p16_10));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AAACalRegn03Rt01GroupB_Dummy_STOP_SEC_CODE
#include "AAACalRegn03Rt01GroupB_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
