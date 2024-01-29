/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Assi.c
 *        Config:  EPS.dpa
 *     SW-C Type:  Assi
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Assi>
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
 * u16p0
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

#include "Rte_Assi.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_Assi.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void Assi_TestDefines(void);


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
 * s4p11: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u16p0: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s4p11_20: Array with 20 element(s) of type s4p11
 * Ary1D_u16p0_2: Array with 2 element(s) of type u16p0
 * Ary1D_u2p14_2: Array with 2 element(s) of type u2p14
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u5p11_5: Array with 5 element(s) of type u5p11
 * Ary1D_u8p8_20: Array with 20 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_s4p11_12_20: Array with 12 element(s) of type Ary1D_s4p11_20
 * Ary2D_u2p14_12_5: Array with 12 element(s) of type Ary1D_u2p14_5
 * Ary2D_u5p11_12_5: Array with 12 element(s) of type Ary1D_u5p11_5
 * Ary2D_u8p8_12_20: Array with 12 element(s) of type Ary1D_u8p8_20
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dAssiThermAssiSca(void)
 *   float32 *Rte_Pim_dAssiWhlImbRejctnBlnd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u16p0 *Rte_Prm_AssiThermScaX_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_2
 *   u2p14 *Rte_Prm_AssiThermScaY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_2
 *   u5p11 *Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_5
 *   u2p14 *Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_12_5
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpd_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define Assi_START_SEC_CODE
#include "Assi_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBasSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiLnrGain_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiLnrGainEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqHysOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermLimSlowFilMax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdBas_Val(float32 data)
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
 * Symbol: AssiPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Assi_CODE) AssiPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AssiCmdBasSca_Val;
  float32 Read_AssiLnrGain_Val;
  boolean Read_AssiLnrGainEna_Logl;
  float32 Read_HwTq_Val;
  float32 Read_HwTqHysOvrl_Val;
  float32 Read_HwTqOvrl_Val;
  float32 Read_ThermLimSlowFilMax_Val;
  float32 Read_VehSpd_Val;
  float32 Read_WhlImbRejctnAmp_Val;

  float32 dAssiThermAssiSca;
  float32 dAssiWhlImbRejctnBlnd;

  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D_data;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D_data;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D_data;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D_data;
  Ary1D_u16p0_2 AssiThermScaX_Ary1D_data;
  Ary1D_u2p14_2 AssiThermScaY_Ary1D_data;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D_data;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpd_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dAssiThermAssiSca = *TSC_Assi_Rte_Pim_dAssiThermAssiSca();
  *TSC_Assi_Rte_Pim_dAssiThermAssiSca() = dAssiThermAssiSca;
  dAssiWhlImbRejctnBlnd = *TSC_Assi_Rte_Pim_dAssiWhlImbRejctnBlnd();
  *TSC_Assi_Rte_Pim_dAssiWhlImbRejctnBlnd() = dAssiWhlImbRejctnBlnd;

  (void)memcpy(AssiMotTqWhlImbRejctnMaxX_Ary2D_data, TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(), sizeof(Ary2D_u8p8_12_20));
  (void)memcpy(AssiMotTqWhlImbRejctnMaxY_Ary2D_data, TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(), sizeof(Ary2D_s4p11_12_20));
  (void)memcpy(AssiMotTqWhlImbRejctnMinX_Ary2D_data, TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(), sizeof(Ary2D_u8p8_12_20));
  (void)memcpy(AssiMotTqWhlImbRejctnMinY_Ary2D_data, TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(), sizeof(Ary2D_s4p11_12_20));
  (void)memcpy(AssiThermScaX_Ary1D_data, TSC_Assi_Rte_Prm_AssiThermScaX_Ary1D(), sizeof(Ary1D_u16p0_2));
  (void)memcpy(AssiThermScaY_Ary1D_data, TSC_Assi_Rte_Prm_AssiThermScaY_Ary1D(), sizeof(Ary1D_u2p14_2));
  (void)memcpy(AssiWhlImbRejctnBlndScaX_Ary2D_data, TSC_Assi_Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(), sizeof(Ary2D_u5p11_12_5));
  (void)memcpy(AssiWhlImbRejctnBlndScaY_Ary2D_data, TSC_Assi_Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(), sizeof(Ary2D_u2p14_12_5));
  (void)memcpy(SysGlbPrmVehSpd_Ary1D_data, TSC_Assi_Rte_Prm_SysGlbPrmVehSpd_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_Assi_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));

  fct_status = TSC_Assi_Rte_Read_AssiCmdBasSca_Val(&Read_AssiCmdBasSca_Val);
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

  fct_status = TSC_Assi_Rte_Read_AssiLnrGain_Val(&Read_AssiLnrGain_Val);
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

  fct_status = TSC_Assi_Rte_Read_AssiLnrGainEna_Logl(&Read_AssiLnrGainEna_Logl);
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

  fct_status = TSC_Assi_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_Assi_Rte_Read_HwTqHysOvrl_Val(&Read_HwTqHysOvrl_Val);
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

  fct_status = TSC_Assi_Rte_Read_HwTqOvrl_Val(&Read_HwTqOvrl_Val);
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

  fct_status = TSC_Assi_Rte_Read_ThermLimSlowFilMax_Val(&Read_ThermLimSlowFilMax_Val);
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

  fct_status = TSC_Assi_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_Assi_Rte_Read_WhlImbRejctnAmp_Val(&Read_WhlImbRejctnAmp_Val);
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

  fct_status = TSC_Assi_Rte_Write_AssiCmdBas_Val(Rte_InitValue_AssiCmdBas_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Assi_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
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

  Assi_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Assi_STOP_SEC_CODE
#include "Assi_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void Assi_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Spd1_LowerLimit;
  float32 Test_float32_UL_1 = Spd1_UpperLimit;
  float32 Test_float32_LL_2 = Tq1_LowerLimit;
  float32 Test_float32_UL_2 = Tq1_UpperLimit;
  float32 Test_float32_LL_3 = Tq10_LowerLimit;
  float32 Test_float32_UL_3 = Tq10_UpperLimit;
  float32 Test_float32_LL_4 = Tq2_LowerLimit;
  float32 Test_float32_UL_4 = Tq2_UpperLimit;
  float32 Test_float32_LL_5 = Uls2_LowerLimit;
  float32 Test_float32_UL_5 = Uls2_UpperLimit;
  float32 Test_float32_LL_6 = Uls5_LowerLimit;
  float32 Test_float32_UL_6 = Uls5_UpperLimit;
  float32 Test_float32_LL_7 = Uls6_LowerLimit;
  float32 Test_float32_UL_7 = Uls6_UpperLimit;

  s4p11 Test_s4p11_LL_1 = Tq11_LowerLimit;
  s4p11 Test_s4p11_UL_1 = Tq11_UpperLimit;

  u16p0 Test_u16p0_LL_1 = Cnt26_LowerLimit;
  u16p0 Test_u16p0_UL_1 = Cnt26_UpperLimit;

  u2p14 Test_u2p14_LL_1 = Uls4_LowerLimit;
  u2p14 Test_u2p14_UL_1 = Uls4_UpperLimit;

  u5p11 Test_u5p11_LL_1 = Tq12_LowerLimit;
  u5p11 Test_u5p11_UL_1 = Tq12_UpperLimit;

  u8p8 Test_u8p8_LL_1 = Tq6_LowerLimit;
  u8p8 Test_u8p8_UL_1 = Tq6_UpperLimit;

  u9p7 Test_u9p7_LL_1 = Spd2_LowerLimit;
  u9p7 Test_u9p7_UL_1 = Spd2_UpperLimit;

  uint16 Test_uint16_LL_1 = Cnt16_LowerLimit;
  uint16 Test_uint16_UL_1 = Cnt16_UpperLimit;
}

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
