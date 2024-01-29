/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AAACalRegn02Rt01GroupC_Dummy.c
 *        Config:  EPS.dpa
 *     SW-C Type:  AAACalRegn02Rt01GroupC_Dummy
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AAACalRegn02Rt01GroupC_Dummy>
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
 * u1p15
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
 *********************************************************************************************************************/

#include "Rte_AAACalRegn02Rt01GroupC_Dummy.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_AAACalRegn02Rt01GroupC_Dummy.h"


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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u1p15: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u1p15_10: Array with 10 element(s) of type u1p15
 * Ary1D_u4p12_20: Array with 20 element(s) of type u4p12
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u7p9_6: Array with 6 element(s) of type u7p9
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary2D_u4p12_12_20: Array with 12 element(s) of type Ary1D_u4p12_20
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
 *   float32 Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(Rte_Instance self)
 *   float32 Rte_Prm_GmOvrlStMgrStandStillThd_Val(Rte_Instance self)
 *   float32 Rte_Prm_GmTqArbnApaEnaRate_Val(Rte_Instance self)
 *   float32 Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(Rte_Instance self)
 *   uint32 Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(Rte_Instance self)
 *   uint32 Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(Rte_Instance self)
 *   u7p9 *Rte_Prm_GmTqArbnApaDiRateY_Ary1D(Rte_Instance self)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_6
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngX_Ary1D(Rte_Instance self)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_10
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngY_Ary1D(Rte_Instance self)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_10
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_20
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_20
 *   u8p8 *Rte_Prm_GmTqArbnLkaSlewX_Ary1D(Rte_Instance self)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u4p12 *Rte_Prm_GmTqArbnLkaSlewY_Ary1D(Rte_Instance self)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_6
 *
 *********************************************************************************************************************/


#define AAACalRegn02Rt01GroupC_Dummy_START_SEC_CODE
#include "AAACalRegn02Rt01GroupC_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CalRegn02Rt01GroupCDummyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CalRegn02Rt01GroupCDummyInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AAACalRegn02Rt01GroupC_Dummy_CODE) CalRegn02Rt01GroupCDummyInit1(Rte_Instance self) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CalRegn02Rt01GroupCDummyInit1
 *********************************************************************************************************************/

  float32 GmOvrlStMgrHwAgTarLimr_Val_data;
  float32 GmOvrlStMgrStandStillThd_Val_data;
  float32 GmTqArbnApaEnaRate_Val_data;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val_data;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val_data;
  uint32 GmOvrlStMgrStandStillTiThd_Val_data;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D_data;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D_data;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D_data;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D_data;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D_data;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D_data;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  GmOvrlStMgrHwAgTarLimr_Val_data = TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(self);
  GmOvrlStMgrStandStillThd_Val_data = TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmOvrlStMgrStandStillThd_Val(self);
  GmTqArbnApaEnaRate_Val_data = TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnApaEnaRate_Val(self);
  GmTqArbnApaSmotngHwTqLpFilFrq_Val_data = TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(self);
  GmOvrlStMgrShiftLvrTiThd_Val_data = TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(self);
  GmOvrlStMgrStandStillTiThd_Val_data = TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(self);
  (void)memcpy(GmTqArbnApaDiRateY_Ary1D_data, TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnApaDiRateY_Ary1D(self), sizeof(Ary1D_u7p9_6));
  (void)memcpy(GmTqArbnApaSmotngX_Ary1D_data, TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnApaSmotngX_Ary1D(self), sizeof(Ary1D_u1p15_10));
  (void)memcpy(GmTqArbnApaSmotngY_Ary1D_data, TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnApaSmotngY_Ary1D(self), sizeof(Ary1D_u1p15_10));
  (void)memcpy(GmTqArbnLkaOutpOvrlX_Ary2D_data, TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(self), sizeof(Ary2D_u4p12_12_20));
  (void)memcpy(GmTqArbnLkaOutpOvrlY_Ary2D_data, TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(self), sizeof(Ary2D_u4p12_12_20));
  (void)memcpy(GmTqArbnLkaSlewX_Ary1D_data, TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnLkaSlewX_Ary1D(self), sizeof(Ary1D_u8p8_6));
  (void)memcpy(GmTqArbnLkaSlewY_Ary1D_data, TSC_AAACalRegn02Rt01GroupC_Dummy_Rte_Prm_GmTqArbnLkaSlewY_Ary1D(self), sizeof(Ary1D_u4p12_6));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AAACalRegn02Rt01GroupC_Dummy_STOP_SEC_CODE
#include "AAACalRegn02Rt01GroupC_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
