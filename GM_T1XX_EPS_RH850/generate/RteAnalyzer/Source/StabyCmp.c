/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StabyCmp.c
 *        Config:  EPS.dpa
 *     SW-C Type:  StabyCmp
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StabyCmp>
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
 * u2p14
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

#include "Rte_StabyCmp.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_StabyCmp.h"


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
 * u2p14: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u2p14_2: Array with 2 element(s) of type u2p14
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u8p8_5: Array with 5 element(s) of type u8p8
 * Ary1D_u9p7_6: Array with 6 element(s) of type u9p7
 * Ary2D_u2p14_6_5: Array with 6 element(s) of type Ary1D_u2p14_5
 * Ary2D_u8p8_6_5: Array with 6 element(s) of type Ary1D_u8p8_5
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
 *   float32 *Rte_Pim_dStabyCmpAssiScaCmpBlnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil02Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil04Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil12Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil12Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil1Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil2Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil34Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil34Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil3Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil4Outp(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch1Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch2Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch3Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch4Fil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_StabyCmpHwTqLpFilFrq_Val(void)
 *   u2p14 *Rte_Prm_StabyCmpAssiScaBlndX_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_2
 *   u2p14 *Rte_Prm_StabyCmpAssiScaBlndY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_2
 *   u9p7 *Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_6
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_5
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_5
 *   u8p8 *Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_6_5
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_5
 *   u8p8 *Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_6_5
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_5
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil1Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil2Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil3Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil4Struct_Rec(void)
 *
 *********************************************************************************************************************/


#define StabyCmp_START_SEC_CODE
#include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StabyCmpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StabyCmpInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StabyCmp_CODE) StabyCmpInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StabyCmpInit1
 *********************************************************************************************************************/

  float32 dStabyCmpAssiScaCmpBlnd;
  float32 dStabyCmpNotchFil02Blnd;
  float32 dStabyCmpNotchFil04Blnd;
  float32 dStabyCmpNotchFil12Blnd;
  float32 dStabyCmpNotchFil12Outp;
  float32 dStabyCmpNotchFil1Outp;
  float32 dStabyCmpNotchFil2Outp;
  float32 dStabyCmpNotchFil34Blnd;
  float32 dStabyCmpNotchFil34Outp;
  float32 dStabyCmpNotchFil3Outp;
  float32 dStabyCmpNotchFil4Outp;
  FilNotchStRec1 AssiNotch1Fil;
  FilNotchStRec1 AssiNotch2Fil;
  FilNotchStRec1 AssiNotch3Fil;
  FilNotchStRec1 AssiNotch4Fil;
  FilLpRec1 HwTqLpFil;

  float32 StabyCmpHwTqLpFilFrq_Val_data;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndX_Ary1D_data;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndY_Ary1D_data;
  Ary1D_u9p7_6 StabyCmpNotchFilBilnrBlndVehSpd_Ary1D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd02Y_Ary2D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd04Y_Ary2D_data;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd12TqX_Ary2D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd12Y_Ary2D_data;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd34TqX_Ary2D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd34Y_Ary2D_data;
  FilNotchGainRec1 StabyCmpNotchFil1Struct_Rec_data;
  FilNotchGainRec1 StabyCmpNotchFil2Struct_Rec_data;
  FilNotchGainRec1 StabyCmpNotchFil3Struct_Rec_data;
  FilNotchGainRec1 StabyCmpNotchFil4Struct_Rec_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dStabyCmpAssiScaCmpBlnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpAssiScaCmpBlnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpAssiScaCmpBlnd() = dStabyCmpAssiScaCmpBlnd;
  dStabyCmpNotchFil02Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil02Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil02Blnd() = dStabyCmpNotchFil02Blnd;
  dStabyCmpNotchFil04Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil04Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil04Blnd() = dStabyCmpNotchFil04Blnd;
  dStabyCmpNotchFil12Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Blnd() = dStabyCmpNotchFil12Blnd;
  dStabyCmpNotchFil12Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Outp() = dStabyCmpNotchFil12Outp;
  dStabyCmpNotchFil1Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil1Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil1Outp() = dStabyCmpNotchFil1Outp;
  dStabyCmpNotchFil2Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil2Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil2Outp() = dStabyCmpNotchFil2Outp;
  dStabyCmpNotchFil34Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Blnd() = dStabyCmpNotchFil34Blnd;
  dStabyCmpNotchFil34Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Outp() = dStabyCmpNotchFil34Outp;
  dStabyCmpNotchFil3Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil3Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil3Outp() = dStabyCmpNotchFil3Outp;
  dStabyCmpNotchFil4Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil4Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil4Outp() = dStabyCmpNotchFil4Outp;
  AssiNotch1Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch1Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch1Fil() = AssiNotch1Fil;
  AssiNotch2Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch2Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch2Fil() = AssiNotch2Fil;
  AssiNotch3Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch3Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch3Fil() = AssiNotch3Fil;
  AssiNotch4Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch4Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch4Fil() = AssiNotch4Fil;
  HwTqLpFil = *TSC_StabyCmp_Rte_Pim_HwTqLpFil();
  *TSC_StabyCmp_Rte_Pim_HwTqLpFil() = HwTqLpFil;

  StabyCmpHwTqLpFilFrq_Val_data = TSC_StabyCmp_Rte_Prm_StabyCmpHwTqLpFilFrq_Val();
  (void)memcpy(StabyCmpAssiScaBlndX_Ary1D_data, TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndX_Ary1D(), sizeof(Ary1D_u2p14_2));
  (void)memcpy(StabyCmpAssiScaBlndY_Ary1D_data, TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndY_Ary1D(), sizeof(Ary1D_u2p14_2));
  (void)memcpy(StabyCmpNotchFilBilnrBlndVehSpd_Ary1D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(), sizeof(Ary1D_u9p7_6));
  (void)memcpy(StabyCmpNotchFilBlnd02Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd04Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd12TqX_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(), sizeof(Ary2D_u8p8_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd12Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd34TqX_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(), sizeof(Ary2D_u8p8_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd34Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  StabyCmpNotchFil1Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil1Struct_Rec();
  StabyCmpNotchFil2Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil2Struct_Rec();
  StabyCmpNotchFil3Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil3Struct_Rec();
  StabyCmpNotchFil4Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil4Struct_Rec();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StabyCmpPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdSum_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiPahLimrActv_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmd_Val(float32 data)
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
 * Symbol: StabyCmpPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StabyCmp_CODE) StabyCmpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StabyCmpPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AssiCmdBasSca_Val;
  float32 Read_AssiCmdSum_Val;
  float32 Read_AssiPahLimrActv_Val;
  float32 Read_HwTq_Val;
  float32 Read_VehSpd_Val;

  float32 dStabyCmpAssiScaCmpBlnd;
  float32 dStabyCmpNotchFil02Blnd;
  float32 dStabyCmpNotchFil04Blnd;
  float32 dStabyCmpNotchFil12Blnd;
  float32 dStabyCmpNotchFil12Outp;
  float32 dStabyCmpNotchFil1Outp;
  float32 dStabyCmpNotchFil2Outp;
  float32 dStabyCmpNotchFil34Blnd;
  float32 dStabyCmpNotchFil34Outp;
  float32 dStabyCmpNotchFil3Outp;
  float32 dStabyCmpNotchFil4Outp;
  FilNotchStRec1 AssiNotch1Fil;
  FilNotchStRec1 AssiNotch2Fil;
  FilNotchStRec1 AssiNotch3Fil;
  FilNotchStRec1 AssiNotch4Fil;
  FilLpRec1 HwTqLpFil;

  float32 StabyCmpHwTqLpFilFrq_Val_data;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndX_Ary1D_data;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndY_Ary1D_data;
  Ary1D_u9p7_6 StabyCmpNotchFilBilnrBlndVehSpd_Ary1D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd02Y_Ary2D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd04Y_Ary2D_data;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd12TqX_Ary2D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd12Y_Ary2D_data;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd34TqX_Ary2D_data;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd34Y_Ary2D_data;
  FilNotchGainRec1 StabyCmpNotchFil1Struct_Rec_data;
  FilNotchGainRec1 StabyCmpNotchFil2Struct_Rec_data;
  FilNotchGainRec1 StabyCmpNotchFil3Struct_Rec_data;
  FilNotchGainRec1 StabyCmpNotchFil4Struct_Rec_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dStabyCmpAssiScaCmpBlnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpAssiScaCmpBlnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpAssiScaCmpBlnd() = dStabyCmpAssiScaCmpBlnd;
  dStabyCmpNotchFil02Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil02Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil02Blnd() = dStabyCmpNotchFil02Blnd;
  dStabyCmpNotchFil04Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil04Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil04Blnd() = dStabyCmpNotchFil04Blnd;
  dStabyCmpNotchFil12Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Blnd() = dStabyCmpNotchFil12Blnd;
  dStabyCmpNotchFil12Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Outp() = dStabyCmpNotchFil12Outp;
  dStabyCmpNotchFil1Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil1Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil1Outp() = dStabyCmpNotchFil1Outp;
  dStabyCmpNotchFil2Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil2Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil2Outp() = dStabyCmpNotchFil2Outp;
  dStabyCmpNotchFil34Blnd = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Blnd();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Blnd() = dStabyCmpNotchFil34Blnd;
  dStabyCmpNotchFil34Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Outp() = dStabyCmpNotchFil34Outp;
  dStabyCmpNotchFil3Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil3Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil3Outp() = dStabyCmpNotchFil3Outp;
  dStabyCmpNotchFil4Outp = *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil4Outp();
  *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil4Outp() = dStabyCmpNotchFil4Outp;
  AssiNotch1Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch1Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch1Fil() = AssiNotch1Fil;
  AssiNotch2Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch2Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch2Fil() = AssiNotch2Fil;
  AssiNotch3Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch3Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch3Fil() = AssiNotch3Fil;
  AssiNotch4Fil = *TSC_StabyCmp_Rte_Pim_AssiNotch4Fil();
  *TSC_StabyCmp_Rte_Pim_AssiNotch4Fil() = AssiNotch4Fil;
  HwTqLpFil = *TSC_StabyCmp_Rte_Pim_HwTqLpFil();
  *TSC_StabyCmp_Rte_Pim_HwTqLpFil() = HwTqLpFil;

  StabyCmpHwTqLpFilFrq_Val_data = TSC_StabyCmp_Rte_Prm_StabyCmpHwTqLpFilFrq_Val();
  (void)memcpy(StabyCmpAssiScaBlndX_Ary1D_data, TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndX_Ary1D(), sizeof(Ary1D_u2p14_2));
  (void)memcpy(StabyCmpAssiScaBlndY_Ary1D_data, TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndY_Ary1D(), sizeof(Ary1D_u2p14_2));
  (void)memcpy(StabyCmpNotchFilBilnrBlndVehSpd_Ary1D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(), sizeof(Ary1D_u9p7_6));
  (void)memcpy(StabyCmpNotchFilBlnd02Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd04Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd12TqX_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(), sizeof(Ary2D_u8p8_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd12Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd34TqX_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(), sizeof(Ary2D_u8p8_6_5));
  (void)memcpy(StabyCmpNotchFilBlnd34Y_Ary2D_data, TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(), sizeof(Ary2D_u2p14_6_5));
  StabyCmpNotchFil1Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil1Struct_Rec();
  StabyCmpNotchFil2Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil2Struct_Rec();
  StabyCmpNotchFil3Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil3Struct_Rec();
  StabyCmpNotchFil4Struct_Rec_data = *TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil4Struct_Rec();

  fct_status = TSC_StabyCmp_Rte_Read_AssiCmdBasSca_Val(&Read_AssiCmdBasSca_Val);
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

  fct_status = TSC_StabyCmp_Rte_Read_AssiCmdSum_Val(&Read_AssiCmdSum_Val);
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

  fct_status = TSC_StabyCmp_Rte_Read_AssiPahLimrActv_Val(&Read_AssiPahLimrActv_Val);
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

  fct_status = TSC_StabyCmp_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_StabyCmp_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_StabyCmp_Rte_Write_AssiCmd_Val(Rte_InitValue_AssiCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_StabyCmp_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
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


#define StabyCmp_STOP_SEC_CODE
#include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
