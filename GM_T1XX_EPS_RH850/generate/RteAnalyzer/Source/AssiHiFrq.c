/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AssiHiFrq.c
 *        Config:  EPS.dpa
 *     SW-C Type:  AssiHiFrq
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AssiHiFrq>
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
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_AssiHiFrq.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_AssiHiFrq.h"


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
 * u3p13: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u3p13_13: Array with 13 element(s) of type u3p13
 * Ary1D_u4p12_5: Array with 5 element(s) of type u4p12
 * Ary1D_u5p11_13: Array with 13 element(s) of type u5p11
 * Ary1D_u7p9_12: Array with 12 element(s) of type u7p9
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_u1p15_12_5: Array with 12 element(s) of type Ary1D_u1p15_5
 * Ary2D_u3p13_12_13: Array with 12 element(s) of type Ary1D_u3p13_13
 * Ary2D_u4p12_12_5: Array with 12 element(s) of type Ary1D_u4p12_5
 * Ary2D_u5p11_12_13: Array with 12 element(s) of type Ary1D_u5p11_13
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
 *   float32 *Rte_Pim_dAssiHiFrqGain(void)
 *   float32 *Rte_Pim_dAssiHiFrqGainBlnd(void)
 *   float32 *Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero(void)
 *   FilHpRec1 *Rte_Pim_HwTqHpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiHiFrqHpFilFrq_Val(void)
 *   u3p13 *Rte_Prm_AssiHiFrqGainY_Ary2D(void)
 *     Returnvalue: u3p13* is of type Ary2D_u3p13_12_13
 *   u7p9 *Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_12
 *   u5p11 *Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   u5p11 *Rte_Prm_AssiHiFrqTqX_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   u4p12 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_5
 *   u1p15 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
 *     Returnvalue: u1p15* is of type Ary2D_u1p15_12_5
 *   u3p13 *Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
 *     Returnvalue: u3p13* is of type Ary2D_u3p13_12_13
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define AssiHiFrq_START_SEC_CODE
#include "AssiHiFrq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiHiFrqInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiHiFrqInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AssiHiFrq_CODE) AssiHiFrqInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiHiFrqInit1
 *********************************************************************************************************************/

  float32 dAssiHiFrqGain;
  float32 dAssiHiFrqGainBlnd;
  float32 dAssiHiFrqGainWhlImbRejtcnZero;
  FilHpRec1 HwTqHpFil;

  float32 AssiHiFrqHpFilFrq_Val_data;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D_data;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D_data;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D_data;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D_data;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D_data;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D_data;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dAssiHiFrqGain = *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGain();
  *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGain() = dAssiHiFrqGain;
  dAssiHiFrqGainBlnd = *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainBlnd();
  *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainBlnd() = dAssiHiFrqGainBlnd;
  dAssiHiFrqGainWhlImbRejtcnZero = *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero();
  *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero() = dAssiHiFrqGainWhlImbRejtcnZero;
  HwTqHpFil = *TSC_AssiHiFrq_Rte_Pim_HwTqHpFil();
  *TSC_AssiHiFrq_Rte_Pim_HwTqHpFil() = HwTqHpFil;

  AssiHiFrqHpFilFrq_Val_data = TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrq_Val();
  (void)memcpy(AssiHiFrqGainY_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqGainY_Ary2D(), sizeof(Ary2D_u3p13_12_13));
  (void)memcpy(AssiHiFrqHpFilFrqY_Ary1D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(), sizeof(Ary1D_u7p9_12));
  (void)memcpy(AssiHiFrqTqWhlImbRejctnTqX_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(AssiHiFrqTqX_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqX_Ary2D(), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(AssiHiFrqWhlImbRejctnBlndX_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(), sizeof(Ary2D_u4p12_12_5));
  (void)memcpy(AssiHiFrqWhlImbRejctnBlndY_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(), sizeof(Ary2D_u1p15_12_5));
  (void)memcpy(AssiHiFrqWhlImbRejctnGainY_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(), sizeof(Ary2D_u3p13_12_13));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_AssiHiFrq_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiHiFrqPer1
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
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiHiFrqCmd_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiHiFrqPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AssiHiFrq_CODE) AssiHiFrqPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiHiFrqPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwTq_Val;
  float32 Read_VehSpd_Val;
  float32 Read_WhlImbRejctnAmp_Val;

  float32 dAssiHiFrqGain;
  float32 dAssiHiFrqGainBlnd;
  float32 dAssiHiFrqGainWhlImbRejtcnZero;
  FilHpRec1 HwTqHpFil;

  float32 AssiHiFrqHpFilFrq_Val_data;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D_data;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D_data;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D_data;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D_data;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D_data;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D_data;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dAssiHiFrqGain = *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGain();
  *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGain() = dAssiHiFrqGain;
  dAssiHiFrqGainBlnd = *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainBlnd();
  *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainBlnd() = dAssiHiFrqGainBlnd;
  dAssiHiFrqGainWhlImbRejtcnZero = *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero();
  *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero() = dAssiHiFrqGainWhlImbRejtcnZero;
  HwTqHpFil = *TSC_AssiHiFrq_Rte_Pim_HwTqHpFil();
  *TSC_AssiHiFrq_Rte_Pim_HwTqHpFil() = HwTqHpFil;

  AssiHiFrqHpFilFrq_Val_data = TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrq_Val();
  (void)memcpy(AssiHiFrqGainY_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqGainY_Ary2D(), sizeof(Ary2D_u3p13_12_13));
  (void)memcpy(AssiHiFrqHpFilFrqY_Ary1D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(), sizeof(Ary1D_u7p9_12));
  (void)memcpy(AssiHiFrqTqWhlImbRejctnTqX_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(AssiHiFrqTqX_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqX_Ary2D(), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(AssiHiFrqWhlImbRejctnBlndX_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(), sizeof(Ary2D_u4p12_12_5));
  (void)memcpy(AssiHiFrqWhlImbRejctnBlndY_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(), sizeof(Ary2D_u1p15_12_5));
  (void)memcpy(AssiHiFrqWhlImbRejctnGainY_Ary2D_data, TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(), sizeof(Ary2D_u3p13_12_13));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_AssiHiFrq_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));

  fct_status = TSC_AssiHiFrq_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_AssiHiFrq_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_AssiHiFrq_Rte_Read_WhlImbRejctnAmp_Val(&Read_WhlImbRejctnAmp_Val);
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

  fct_status = TSC_AssiHiFrq_Rte_Write_AssiHiFrqCmd_Val(Rte_InitValue_AssiHiFrqCmd_Val);
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


#define AssiHiFrq_STOP_SEC_CODE
#include "AssiHiFrq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
