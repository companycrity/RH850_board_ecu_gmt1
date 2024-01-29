/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TqLoa.c
 *        Config:  EPS.dpa
 *     SW-C Type:  TqLoa
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TqLoa>
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
 * u10p6
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
 *********************************************************************************************************************/

#include "Rte_TqLoa.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_TqLoa.h"


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
 * u10p6: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u10p6_5: Array with 5 element(s) of type u10p6
 * Ary1D_u10p6_8: Array with 8 element(s) of type u10p6
 * Ary1D_u1p15_4: Array with 4 element(s) of type u1p15
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u2p14_4: Array with 4 element(s) of type u2p14
 * Ary1D_u4p12_8: Array with 8 element(s) of type u4p12
 * Ary2D_u1p15_8_4: Array with 8 element(s) of type Ary1D_u1p15_4
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
 *   float32 *Rte_Pim_MotTqCmdPrev(void)
 *   float32 *Rte_Pim_MotVelAndTqBasdScaFacPrev(void)
 *   float32 *Rte_Pim_VehLatADifScaFacPrev(void)
 *   float32 *Rte_Pim_dTqLoaMotTqCmdPreScag(void)
 *   float32 *Rte_Pim_dTqLoaMotVelAndTqBasdScaFac(void)
 *   float32 *Rte_Pim_dTqLoaScaFacFinal(void)
 *   float32 *Rte_Pim_dTqLoaVehLatADifScaFac(void)
 *   float32 *Rte_Pim_dTqLoaVehLatAEstimn(void)
 *   float32 *Rte_Pim_dTqLoaVehSpdBasdScaFac(void)
 *   FilLpRec1 *Rte_Pim_VehLatAEstimnFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TqLoaDrvrTqNom_Val(void)
 *   float32 Rte_Prm_TqLoaMotTqCmdLim_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelMgnThd_Val(void)
 *   float32 Rte_Prm_TqLoaTqCmdMgnThd_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val(void)
 *   float32 Rte_Prm_TqLoaVehSteerRat_Val(void)
 *   float32 Rte_Prm_TqLoaVehUnderSteerGrdt_Val(void)
 *   float32 Rte_Prm_TqLoaVehWhlBas_Val(void)
 *   u4p12 *Rte_Prm_TqLoaTqCmdLimY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_8
 *   u2p14 *Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_4
 *   u1p15 *Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(void)
 *     Returnvalue: u1p15* is of type Ary2D_u1p15_8_4
 *   u4p12 *Rte_Prm_TqLoaVehLatAGainY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_8
 *   u10p6 *Rte_Prm_TqLoaVehSpdScaFacX_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_5
 *   u1p15 *Rte_Prm_TqLoaVehSpdScaFacY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_5
 *   u10p6 *Rte_Prm_TqLoaVehSpdX_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_8
 *
 *********************************************************************************************************************/


#define TqLoa_START_SEC_CODE
#include "TqLoa_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqLoaInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TqLoaInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TqLoa_CODE) TqLoaInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TqLoaInit1
 *********************************************************************************************************************/

  float32 MotTqCmdPrev;
  float32 MotVelAndTqBasdScaFacPrev;
  float32 VehLatADifScaFacPrev;
  float32 dTqLoaMotTqCmdPreScag;
  float32 dTqLoaMotVelAndTqBasdScaFac;
  float32 dTqLoaScaFacFinal;
  float32 dTqLoaVehLatADifScaFac;
  float32 dTqLoaVehLatAEstimn;
  float32 dTqLoaVehSpdBasdScaFac;
  FilLpRec1 VehLatAEstimnFil;

  float32 TqLoaDrvrTqNom_Val_data;
  float32 TqLoaMotTqCmdLim_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacFallRate_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacMax_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacMin_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacRiseRate_Val_data;
  float32 TqLoaMotVelMgnThd_Val_data;
  float32 TqLoaTqCmdMgnThd_Val_data;
  float32 TqLoaVehLatADifScaFacFallRate_Val_data;
  float32 TqLoaVehLatADifScaFacRiseRate_Val_data;
  float32 TqLoaVehLatAEstimnFilFrq_Val_data;
  float32 TqLoaVehSteerRat_Val_data;
  float32 TqLoaVehUnderSteerGrdt_Val_data;
  float32 TqLoaVehWhlBas_Val_data;
  Ary1D_u4p12_8 TqLoaTqCmdLimY_Ary1D_data;
  Ary1D_u2p14_4 TqLoaVehLatADifScaFacX_Ary1D_data;
  Ary2D_u1p15_8_4 TqLoaVehLatADifScaFacY_Ary2D_data;
  Ary1D_u4p12_8 TqLoaVehLatAGainY_Ary1D_data;
  Ary1D_u10p6_5 TqLoaVehSpdScaFacX_Ary1D_data;
  Ary1D_u1p15_5 TqLoaVehSpdScaFacY_Ary1D_data;
  Ary1D_u10p6_8 TqLoaVehSpdX_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  MotTqCmdPrev = *TSC_TqLoa_Rte_Pim_MotTqCmdPrev();
  *TSC_TqLoa_Rte_Pim_MotTqCmdPrev() = MotTqCmdPrev;
  MotVelAndTqBasdScaFacPrev = *TSC_TqLoa_Rte_Pim_MotVelAndTqBasdScaFacPrev();
  *TSC_TqLoa_Rte_Pim_MotVelAndTqBasdScaFacPrev() = MotVelAndTqBasdScaFacPrev;
  VehLatADifScaFacPrev = *TSC_TqLoa_Rte_Pim_VehLatADifScaFacPrev();
  *TSC_TqLoa_Rte_Pim_VehLatADifScaFacPrev() = VehLatADifScaFacPrev;
  dTqLoaMotTqCmdPreScag = *TSC_TqLoa_Rte_Pim_dTqLoaMotTqCmdPreScag();
  *TSC_TqLoa_Rte_Pim_dTqLoaMotTqCmdPreScag() = dTqLoaMotTqCmdPreScag;
  dTqLoaMotVelAndTqBasdScaFac = *TSC_TqLoa_Rte_Pim_dTqLoaMotVelAndTqBasdScaFac();
  *TSC_TqLoa_Rte_Pim_dTqLoaMotVelAndTqBasdScaFac() = dTqLoaMotVelAndTqBasdScaFac;
  dTqLoaScaFacFinal = *TSC_TqLoa_Rte_Pim_dTqLoaScaFacFinal();
  *TSC_TqLoa_Rte_Pim_dTqLoaScaFacFinal() = dTqLoaScaFacFinal;
  dTqLoaVehLatADifScaFac = *TSC_TqLoa_Rte_Pim_dTqLoaVehLatADifScaFac();
  *TSC_TqLoa_Rte_Pim_dTqLoaVehLatADifScaFac() = dTqLoaVehLatADifScaFac;
  dTqLoaVehLatAEstimn = *TSC_TqLoa_Rte_Pim_dTqLoaVehLatAEstimn();
  *TSC_TqLoa_Rte_Pim_dTqLoaVehLatAEstimn() = dTqLoaVehLatAEstimn;
  dTqLoaVehSpdBasdScaFac = *TSC_TqLoa_Rte_Pim_dTqLoaVehSpdBasdScaFac();
  *TSC_TqLoa_Rte_Pim_dTqLoaVehSpdBasdScaFac() = dTqLoaVehSpdBasdScaFac;
  VehLatAEstimnFil = *TSC_TqLoa_Rte_Pim_VehLatAEstimnFil();
  *TSC_TqLoa_Rte_Pim_VehLatAEstimnFil() = VehLatAEstimnFil;

  TqLoaDrvrTqNom_Val_data = TSC_TqLoa_Rte_Prm_TqLoaDrvrTqNom_Val();
  TqLoaMotTqCmdLim_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotTqCmdLim_Val();
  TqLoaMotVelAndTqBasdScaFacFallRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val();
  TqLoaMotVelAndTqBasdScaFacMax_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val();
  TqLoaMotVelAndTqBasdScaFacMin_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val();
  TqLoaMotVelAndTqBasdScaFacRiseRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val();
  TqLoaMotVelMgnThd_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelMgnThd_Val();
  TqLoaTqCmdMgnThd_Val_data = TSC_TqLoa_Rte_Prm_TqLoaTqCmdMgnThd_Val();
  TqLoaVehLatADifScaFacFallRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val();
  TqLoaVehLatADifScaFacRiseRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val();
  TqLoaVehLatAEstimnFilFrq_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val();
  TqLoaVehSteerRat_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehSteerRat_Val();
  TqLoaVehUnderSteerGrdt_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehUnderSteerGrdt_Val();
  TqLoaVehWhlBas_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehWhlBas_Val();
  (void)memcpy(TqLoaTqCmdLimY_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaTqCmdLimY_Ary1D(), sizeof(Ary1D_u4p12_8));
  (void)memcpy(TqLoaVehLatADifScaFacX_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(), sizeof(Ary1D_u2p14_4));
  (void)memcpy(TqLoaVehLatADifScaFacY_Ary2D_data, TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(), sizeof(Ary2D_u1p15_8_4));
  (void)memcpy(TqLoaVehLatAGainY_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehLatAGainY_Ary1D(), sizeof(Ary1D_u4p12_8));
  (void)memcpy(TqLoaVehSpdScaFacX_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacX_Ary1D(), sizeof(Ary1D_u10p6_5));
  (void)memcpy(TqLoaVehSpdScaFacY_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacY_Ary1D(), sizeof(Ary1D_u1p15_5));
  (void)memcpy(TqLoaVehSpdX_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehSpdX_Ary1D(), sizeof(Ary1D_u10p6_8));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqLoaPer1
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
 *   Std_ReturnType Rte_Read_MotAgLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TqLoaAvl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TqLoaCmd_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TqLoaPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TqLoa_CODE) TqLoaPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TqLoaPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_MotAgLoaMtgtnEna_Logl;
  float32 Read_MotVelCrf_Val;
  float32 Read_PinionAg_Val;
  float32 Read_PinionAgConf_Val;
  float32 Read_VehLatA_Val;
  boolean Read_VehLatAVld_Logl;
  float32 Read_VehSpd_Val;
  boolean Read_VehSpdVld_Logl;

  float32 MotTqCmdPrev;
  float32 MotVelAndTqBasdScaFacPrev;
  float32 VehLatADifScaFacPrev;
  float32 dTqLoaMotTqCmdPreScag;
  float32 dTqLoaMotVelAndTqBasdScaFac;
  float32 dTqLoaScaFacFinal;
  float32 dTqLoaVehLatADifScaFac;
  float32 dTqLoaVehLatAEstimn;
  float32 dTqLoaVehSpdBasdScaFac;
  FilLpRec1 VehLatAEstimnFil;

  float32 TqLoaDrvrTqNom_Val_data;
  float32 TqLoaMotTqCmdLim_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacFallRate_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacMax_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacMin_Val_data;
  float32 TqLoaMotVelAndTqBasdScaFacRiseRate_Val_data;
  float32 TqLoaMotVelMgnThd_Val_data;
  float32 TqLoaTqCmdMgnThd_Val_data;
  float32 TqLoaVehLatADifScaFacFallRate_Val_data;
  float32 TqLoaVehLatADifScaFacRiseRate_Val_data;
  float32 TqLoaVehLatAEstimnFilFrq_Val_data;
  float32 TqLoaVehSteerRat_Val_data;
  float32 TqLoaVehUnderSteerGrdt_Val_data;
  float32 TqLoaVehWhlBas_Val_data;
  Ary1D_u4p12_8 TqLoaTqCmdLimY_Ary1D_data;
  Ary1D_u2p14_4 TqLoaVehLatADifScaFacX_Ary1D_data;
  Ary2D_u1p15_8_4 TqLoaVehLatADifScaFacY_Ary2D_data;
  Ary1D_u4p12_8 TqLoaVehLatAGainY_Ary1D_data;
  Ary1D_u10p6_5 TqLoaVehSpdScaFacX_Ary1D_data;
  Ary1D_u1p15_5 TqLoaVehSpdScaFacY_Ary1D_data;
  Ary1D_u10p6_8 TqLoaVehSpdX_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  MotTqCmdPrev = *TSC_TqLoa_Rte_Pim_MotTqCmdPrev();
  *TSC_TqLoa_Rte_Pim_MotTqCmdPrev() = MotTqCmdPrev;
  MotVelAndTqBasdScaFacPrev = *TSC_TqLoa_Rte_Pim_MotVelAndTqBasdScaFacPrev();
  *TSC_TqLoa_Rte_Pim_MotVelAndTqBasdScaFacPrev() = MotVelAndTqBasdScaFacPrev;
  VehLatADifScaFacPrev = *TSC_TqLoa_Rte_Pim_VehLatADifScaFacPrev();
  *TSC_TqLoa_Rte_Pim_VehLatADifScaFacPrev() = VehLatADifScaFacPrev;
  dTqLoaMotTqCmdPreScag = *TSC_TqLoa_Rte_Pim_dTqLoaMotTqCmdPreScag();
  *TSC_TqLoa_Rte_Pim_dTqLoaMotTqCmdPreScag() = dTqLoaMotTqCmdPreScag;
  dTqLoaMotVelAndTqBasdScaFac = *TSC_TqLoa_Rte_Pim_dTqLoaMotVelAndTqBasdScaFac();
  *TSC_TqLoa_Rte_Pim_dTqLoaMotVelAndTqBasdScaFac() = dTqLoaMotVelAndTqBasdScaFac;
  dTqLoaScaFacFinal = *TSC_TqLoa_Rte_Pim_dTqLoaScaFacFinal();
  *TSC_TqLoa_Rte_Pim_dTqLoaScaFacFinal() = dTqLoaScaFacFinal;
  dTqLoaVehLatADifScaFac = *TSC_TqLoa_Rte_Pim_dTqLoaVehLatADifScaFac();
  *TSC_TqLoa_Rte_Pim_dTqLoaVehLatADifScaFac() = dTqLoaVehLatADifScaFac;
  dTqLoaVehLatAEstimn = *TSC_TqLoa_Rte_Pim_dTqLoaVehLatAEstimn();
  *TSC_TqLoa_Rte_Pim_dTqLoaVehLatAEstimn() = dTqLoaVehLatAEstimn;
  dTqLoaVehSpdBasdScaFac = *TSC_TqLoa_Rte_Pim_dTqLoaVehSpdBasdScaFac();
  *TSC_TqLoa_Rte_Pim_dTqLoaVehSpdBasdScaFac() = dTqLoaVehSpdBasdScaFac;
  VehLatAEstimnFil = *TSC_TqLoa_Rte_Pim_VehLatAEstimnFil();
  *TSC_TqLoa_Rte_Pim_VehLatAEstimnFil() = VehLatAEstimnFil;

  TqLoaDrvrTqNom_Val_data = TSC_TqLoa_Rte_Prm_TqLoaDrvrTqNom_Val();
  TqLoaMotTqCmdLim_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotTqCmdLim_Val();
  TqLoaMotVelAndTqBasdScaFacFallRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val();
  TqLoaMotVelAndTqBasdScaFacMax_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val();
  TqLoaMotVelAndTqBasdScaFacMin_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val();
  TqLoaMotVelAndTqBasdScaFacRiseRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val();
  TqLoaMotVelMgnThd_Val_data = TSC_TqLoa_Rte_Prm_TqLoaMotVelMgnThd_Val();
  TqLoaTqCmdMgnThd_Val_data = TSC_TqLoa_Rte_Prm_TqLoaTqCmdMgnThd_Val();
  TqLoaVehLatADifScaFacFallRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val();
  TqLoaVehLatADifScaFacRiseRate_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val();
  TqLoaVehLatAEstimnFilFrq_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val();
  TqLoaVehSteerRat_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehSteerRat_Val();
  TqLoaVehUnderSteerGrdt_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehUnderSteerGrdt_Val();
  TqLoaVehWhlBas_Val_data = TSC_TqLoa_Rte_Prm_TqLoaVehWhlBas_Val();
  (void)memcpy(TqLoaTqCmdLimY_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaTqCmdLimY_Ary1D(), sizeof(Ary1D_u4p12_8));
  (void)memcpy(TqLoaVehLatADifScaFacX_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(), sizeof(Ary1D_u2p14_4));
  (void)memcpy(TqLoaVehLatADifScaFacY_Ary2D_data, TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(), sizeof(Ary2D_u1p15_8_4));
  (void)memcpy(TqLoaVehLatAGainY_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehLatAGainY_Ary1D(), sizeof(Ary1D_u4p12_8));
  (void)memcpy(TqLoaVehSpdScaFacX_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacX_Ary1D(), sizeof(Ary1D_u10p6_5));
  (void)memcpy(TqLoaVehSpdScaFacY_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacY_Ary1D(), sizeof(Ary1D_u1p15_5));
  (void)memcpy(TqLoaVehSpdX_Ary1D_data, TSC_TqLoa_Rte_Prm_TqLoaVehSpdX_Ary1D(), sizeof(Ary1D_u10p6_8));

  fct_status = TSC_TqLoa_Rte_Read_MotAgLoaMtgtnEna_Logl(&Read_MotAgLoaMtgtnEna_Logl);
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

  fct_status = TSC_TqLoa_Rte_Read_MotVelCrf_Val(&Read_MotVelCrf_Val);
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

  fct_status = TSC_TqLoa_Rte_Read_PinionAg_Val(&Read_PinionAg_Val);
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

  fct_status = TSC_TqLoa_Rte_Read_PinionAgConf_Val(&Read_PinionAgConf_Val);
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

  fct_status = TSC_TqLoa_Rte_Read_VehLatA_Val(&Read_VehLatA_Val);
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

  fct_status = TSC_TqLoa_Rte_Read_VehLatAVld_Logl(&Read_VehLatAVld_Logl);
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

  fct_status = TSC_TqLoa_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_TqLoa_Rte_Read_VehSpdVld_Logl(&Read_VehSpdVld_Logl);
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

  fct_status = TSC_TqLoa_Rte_Write_TqLoaAvl_Logl(Rte_InitValue_TqLoaAvl_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TqLoa_Rte_Write_TqLoaCmd_Val(Rte_InitValue_TqLoaCmd_Val);
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


#define TqLoa_STOP_SEC_CODE
#include "TqLoa_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
