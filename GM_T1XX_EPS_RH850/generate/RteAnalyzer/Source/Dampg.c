/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Dampg.c
 *        Config:  EPS.dpa
 *     SW-C Type:  Dampg
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Dampg>
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
 * s8p7
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
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

#include "Rte_Dampg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_Dampg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void Dampg_TestDefines(void);


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
 * s8p7: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u12p4: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s8p7_14: Array with 14 element(s) of type s8p7
 * Ary1D_u12p4_13: Array with 13 element(s) of type u12p4
 * Ary1D_u1p15_2: Array with 2 element(s) of type u1p15
 * Ary1D_u4p12_12: Array with 12 element(s) of type u4p12
 * Ary1D_u4p12_14: Array with 14 element(s) of type u4p12
 * Ary1D_u5p11_13: Array with 13 element(s) of type u5p11
 * Ary1D_u8p8_2: Array with 2 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_u12p4_12_13: Array with 12 element(s) of type Ary1D_u12p4_13
 * Ary2D_u5p11_12_13: Array with 12 element(s) of type Ary1D_u5p11_13
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
 *   float32 *Rte_Pim_PrevHwTqBacklshOutp(void)
 *   float32 *Rte_Pim_PrevHydOutpLim(void)
 *   float32 *Rte_Pim_PrevMotVelBacklshOutp(void)
 *   float32 *Rte_Pim_dDampgAssiMechTSca(void)
 *   float32 *Rte_Pim_dDampgCoeff1Term(void)
 *   float32 *Rte_Pim_dDampgCoeff2Term(void)
 *   float32 *Rte_Pim_dDampgCoeff3Term(void)
 *   float32 *Rte_Pim_dDampgCoeff4Term(void)
 *   float32 *Rte_Pim_dDampgHwTqSca(void)
 *   float32 *Rte_Pim_dDampgMotVelDampgCmd(void)
 *   float32 *Rte_Pim_dDampgQuadHwTqBacklsh(void)
 *   float32 *Rte_Pim_dDampgQuadMotVelBacklsh(void)
 *   FilLpRec1 *Rte_Pim_MotVelDampgLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgHwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgMotVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgScaLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DampgHydBasCoeff1_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff2_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff3_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff4_Val(void)
 *   float32 Rte_Prm_DampgHydOutpLim_Val(void)
 *   float32 Rte_Prm_DampgMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuad13Mplr_Val(void)
 *   float32 Rte_Prm_DampgQuad24Mplr_Val(void)
 *   float32 Rte_Prm_DampgQuadHwTqBacklsh_Val(void)
 *   float32 Rte_Prm_DampgQuadHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuadMotVelBacklsh_Val(void)
 *   float32 Rte_Prm_DampgQuadMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuadScaLpFilFrq_Val(void)
 *   u8p8 *Rte_Prm_DampgHwTqX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_2
 *   u1p15 *Rte_Prm_DampgHwTqY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u4p12 *Rte_Prm_DampgHydAssiLim_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff1ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff2ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff3ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff4ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u12p4 *Rte_Prm_DampgMotVelX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_12_13
 *   u5p11 *Rte_Prm_DampgMotVelY_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   s8p7 *Rte_Prm_DampgTScaX_Ary1D(void)
 *     Returnvalue: s8p7* is of type Ary1D_s8p7_14
 *   u4p12 *Rte_Prm_DampgTScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_14
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define Dampg_START_SEC_CODE
#include "Dampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Dampg_CODE) DampgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgInit1
 *********************************************************************************************************************/

  float32 PrevHwTqBacklshOutp;
  float32 PrevHydOutpLim;
  float32 PrevMotVelBacklshOutp;
  float32 dDampgAssiMechTSca;
  float32 dDampgCoeff1Term;
  float32 dDampgCoeff2Term;
  float32 dDampgCoeff3Term;
  float32 dDampgCoeff4Term;
  float32 dDampgHwTqSca;
  float32 dDampgMotVelDampgCmd;
  float32 dDampgQuadHwTqBacklsh;
  float32 dDampgQuadMotVelBacklsh;
  FilLpRec1 MotVelDampgLpFil;
  FilLpRec1 QuadDampgHwTqLpFil;
  FilLpRec1 QuadDampgMotVelLpFil;
  FilLpRec1 QuadDampgScaLpFil;

  float32 DampgHydBasCoeff1_Val_data;
  float32 DampgHydBasCoeff2_Val_data;
  float32 DampgHydBasCoeff3_Val_data;
  float32 DampgHydBasCoeff4_Val_data;
  float32 DampgHydOutpLim_Val_data;
  float32 DampgMotVelLpFilFrq_Val_data;
  float32 DampgQuad13Mplr_Val_data;
  float32 DampgQuad24Mplr_Val_data;
  float32 DampgQuadHwTqBacklsh_Val_data;
  float32 DampgQuadHwTqLpFilFrq_Val_data;
  float32 DampgQuadMotVelBacklsh_Val_data;
  float32 DampgQuadMotVelLpFilFrq_Val_data;
  float32 DampgQuadScaLpFilFrq_Val_data;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D_data;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydAssiLim_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D_data;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D_data;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D_data;
  Ary1D_s8p7_14 DampgTScaX_Ary1D_data;
  Ary1D_u4p12_14 DampgTScaY_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevHwTqBacklshOutp = *TSC_Dampg_Rte_Pim_PrevHwTqBacklshOutp();
  *TSC_Dampg_Rte_Pim_PrevHwTqBacklshOutp() = PrevHwTqBacklshOutp;
  PrevHydOutpLim = *TSC_Dampg_Rte_Pim_PrevHydOutpLim();
  *TSC_Dampg_Rte_Pim_PrevHydOutpLim() = PrevHydOutpLim;
  PrevMotVelBacklshOutp = *TSC_Dampg_Rte_Pim_PrevMotVelBacklshOutp();
  *TSC_Dampg_Rte_Pim_PrevMotVelBacklshOutp() = PrevMotVelBacklshOutp;
  dDampgAssiMechTSca = *TSC_Dampg_Rte_Pim_dDampgAssiMechTSca();
  *TSC_Dampg_Rte_Pim_dDampgAssiMechTSca() = dDampgAssiMechTSca;
  dDampgCoeff1Term = *TSC_Dampg_Rte_Pim_dDampgCoeff1Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff1Term() = dDampgCoeff1Term;
  dDampgCoeff2Term = *TSC_Dampg_Rte_Pim_dDampgCoeff2Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff2Term() = dDampgCoeff2Term;
  dDampgCoeff3Term = *TSC_Dampg_Rte_Pim_dDampgCoeff3Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff3Term() = dDampgCoeff3Term;
  dDampgCoeff4Term = *TSC_Dampg_Rte_Pim_dDampgCoeff4Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff4Term() = dDampgCoeff4Term;
  dDampgHwTqSca = *TSC_Dampg_Rte_Pim_dDampgHwTqSca();
  *TSC_Dampg_Rte_Pim_dDampgHwTqSca() = dDampgHwTqSca;
  dDampgMotVelDampgCmd = *TSC_Dampg_Rte_Pim_dDampgMotVelDampgCmd();
  *TSC_Dampg_Rte_Pim_dDampgMotVelDampgCmd() = dDampgMotVelDampgCmd;
  dDampgQuadHwTqBacklsh = *TSC_Dampg_Rte_Pim_dDampgQuadHwTqBacklsh();
  *TSC_Dampg_Rte_Pim_dDampgQuadHwTqBacklsh() = dDampgQuadHwTqBacklsh;
  dDampgQuadMotVelBacklsh = *TSC_Dampg_Rte_Pim_dDampgQuadMotVelBacklsh();
  *TSC_Dampg_Rte_Pim_dDampgQuadMotVelBacklsh() = dDampgQuadMotVelBacklsh;
  MotVelDampgLpFil = *TSC_Dampg_Rte_Pim_MotVelDampgLpFil();
  *TSC_Dampg_Rte_Pim_MotVelDampgLpFil() = MotVelDampgLpFil;
  QuadDampgHwTqLpFil = *TSC_Dampg_Rte_Pim_QuadDampgHwTqLpFil();
  *TSC_Dampg_Rte_Pim_QuadDampgHwTqLpFil() = QuadDampgHwTqLpFil;
  QuadDampgMotVelLpFil = *TSC_Dampg_Rte_Pim_QuadDampgMotVelLpFil();
  *TSC_Dampg_Rte_Pim_QuadDampgMotVelLpFil() = QuadDampgMotVelLpFil;
  QuadDampgScaLpFil = *TSC_Dampg_Rte_Pim_QuadDampgScaLpFil();
  *TSC_Dampg_Rte_Pim_QuadDampgScaLpFil() = QuadDampgScaLpFil;

  DampgHydBasCoeff1_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff1_Val();
  DampgHydBasCoeff2_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff2_Val();
  DampgHydBasCoeff3_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff3_Val();
  DampgHydBasCoeff4_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff4_Val();
  DampgHydOutpLim_Val_data = TSC_Dampg_Rte_Prm_DampgHydOutpLim_Val();
  DampgMotVelLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgMotVelLpFilFrq_Val();
  DampgQuad13Mplr_Val_data = TSC_Dampg_Rte_Prm_DampgQuad13Mplr_Val();
  DampgQuad24Mplr_Val_data = TSC_Dampg_Rte_Prm_DampgQuad24Mplr_Val();
  DampgQuadHwTqBacklsh_Val_data = TSC_Dampg_Rte_Prm_DampgQuadHwTqBacklsh_Val();
  DampgQuadHwTqLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgQuadHwTqLpFilFrq_Val();
  DampgQuadMotVelBacklsh_Val_data = TSC_Dampg_Rte_Prm_DampgQuadMotVelBacklsh_Val();
  DampgQuadMotVelLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgQuadMotVelLpFilFrq_Val();
  DampgQuadScaLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgQuadScaLpFilFrq_Val();
  (void)memcpy(DampgHwTqX_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHwTqX_Ary1D(), sizeof(Ary1D_u8p8_2));
  (void)memcpy(DampgHwTqY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHwTqY_Ary1D(), sizeof(Ary1D_u1p15_2));
  (void)memcpy(DampgHydAssiLim_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydAssiLim_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff1ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff1ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff2ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff2ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff3ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff3ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff4ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff4ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgMotVelX_Ary2D_data, TSC_Dampg_Rte_Prm_DampgMotVelX_Ary2D(), sizeof(Ary2D_u12p4_12_13));
  (void)memcpy(DampgMotVelY_Ary2D_data, TSC_Dampg_Rte_Prm_DampgMotVelY_Ary2D(), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(DampgTScaX_Ary1D_data, TSC_Dampg_Rte_Prm_DampgTScaX_Ary1D(), sizeof(Ary1D_s8p7_14));
  (void)memcpy(DampgTScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgTScaY_Ary1D(), sizeof(Ary1D_u4p12_14));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_Dampg_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));

  Dampg_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgPer1
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
 *   Std_ReturnType Rte_Read_DampgCmdBasDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DampgCmdOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DampgCmdBas_Val(float32 data)
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
 * Symbol: DampgPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Dampg_CODE) DampgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AssiCmdBas_Val;
  float32 Read_AssiMechT_Val;
  boolean Read_DampgCmdBasDi_Logl;
  float32 Read_DampgCmdOvrl_Val;
  float32 Read_DampgCmdSca_Val;
  float32 Read_HwTq_Val;
  float32 Read_MotVelCrf_Val;
  float32 Read_VehSpd_Val;

  float32 PrevHwTqBacklshOutp;
  float32 PrevHydOutpLim;
  float32 PrevMotVelBacklshOutp;
  float32 dDampgAssiMechTSca;
  float32 dDampgCoeff1Term;
  float32 dDampgCoeff2Term;
  float32 dDampgCoeff3Term;
  float32 dDampgCoeff4Term;
  float32 dDampgHwTqSca;
  float32 dDampgMotVelDampgCmd;
  float32 dDampgQuadHwTqBacklsh;
  float32 dDampgQuadMotVelBacklsh;
  FilLpRec1 MotVelDampgLpFil;
  FilLpRec1 QuadDampgHwTqLpFil;
  FilLpRec1 QuadDampgMotVelLpFil;
  FilLpRec1 QuadDampgScaLpFil;

  float32 DampgHydBasCoeff1_Val_data;
  float32 DampgHydBasCoeff2_Val_data;
  float32 DampgHydBasCoeff3_Val_data;
  float32 DampgHydBasCoeff4_Val_data;
  float32 DampgHydOutpLim_Val_data;
  float32 DampgMotVelLpFilFrq_Val_data;
  float32 DampgQuad13Mplr_Val_data;
  float32 DampgQuad24Mplr_Val_data;
  float32 DampgQuadHwTqBacklsh_Val_data;
  float32 DampgQuadHwTqLpFilFrq_Val_data;
  float32 DampgQuadMotVelBacklsh_Val_data;
  float32 DampgQuadMotVelLpFilFrq_Val_data;
  float32 DampgQuadScaLpFilFrq_Val_data;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D_data;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydAssiLim_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D_data;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D_data;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D_data;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D_data;
  Ary1D_s8p7_14 DampgTScaX_Ary1D_data;
  Ary1D_u4p12_14 DampgTScaY_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevHwTqBacklshOutp = *TSC_Dampg_Rte_Pim_PrevHwTqBacklshOutp();
  *TSC_Dampg_Rte_Pim_PrevHwTqBacklshOutp() = PrevHwTqBacklshOutp;
  PrevHydOutpLim = *TSC_Dampg_Rte_Pim_PrevHydOutpLim();
  *TSC_Dampg_Rte_Pim_PrevHydOutpLim() = PrevHydOutpLim;
  PrevMotVelBacklshOutp = *TSC_Dampg_Rte_Pim_PrevMotVelBacklshOutp();
  *TSC_Dampg_Rte_Pim_PrevMotVelBacklshOutp() = PrevMotVelBacklshOutp;
  dDampgAssiMechTSca = *TSC_Dampg_Rte_Pim_dDampgAssiMechTSca();
  *TSC_Dampg_Rte_Pim_dDampgAssiMechTSca() = dDampgAssiMechTSca;
  dDampgCoeff1Term = *TSC_Dampg_Rte_Pim_dDampgCoeff1Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff1Term() = dDampgCoeff1Term;
  dDampgCoeff2Term = *TSC_Dampg_Rte_Pim_dDampgCoeff2Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff2Term() = dDampgCoeff2Term;
  dDampgCoeff3Term = *TSC_Dampg_Rte_Pim_dDampgCoeff3Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff3Term() = dDampgCoeff3Term;
  dDampgCoeff4Term = *TSC_Dampg_Rte_Pim_dDampgCoeff4Term();
  *TSC_Dampg_Rte_Pim_dDampgCoeff4Term() = dDampgCoeff4Term;
  dDampgHwTqSca = *TSC_Dampg_Rte_Pim_dDampgHwTqSca();
  *TSC_Dampg_Rte_Pim_dDampgHwTqSca() = dDampgHwTqSca;
  dDampgMotVelDampgCmd = *TSC_Dampg_Rte_Pim_dDampgMotVelDampgCmd();
  *TSC_Dampg_Rte_Pim_dDampgMotVelDampgCmd() = dDampgMotVelDampgCmd;
  dDampgQuadHwTqBacklsh = *TSC_Dampg_Rte_Pim_dDampgQuadHwTqBacklsh();
  *TSC_Dampg_Rte_Pim_dDampgQuadHwTqBacklsh() = dDampgQuadHwTqBacklsh;
  dDampgQuadMotVelBacklsh = *TSC_Dampg_Rte_Pim_dDampgQuadMotVelBacklsh();
  *TSC_Dampg_Rte_Pim_dDampgQuadMotVelBacklsh() = dDampgQuadMotVelBacklsh;
  MotVelDampgLpFil = *TSC_Dampg_Rte_Pim_MotVelDampgLpFil();
  *TSC_Dampg_Rte_Pim_MotVelDampgLpFil() = MotVelDampgLpFil;
  QuadDampgHwTqLpFil = *TSC_Dampg_Rte_Pim_QuadDampgHwTqLpFil();
  *TSC_Dampg_Rte_Pim_QuadDampgHwTqLpFil() = QuadDampgHwTqLpFil;
  QuadDampgMotVelLpFil = *TSC_Dampg_Rte_Pim_QuadDampgMotVelLpFil();
  *TSC_Dampg_Rte_Pim_QuadDampgMotVelLpFil() = QuadDampgMotVelLpFil;
  QuadDampgScaLpFil = *TSC_Dampg_Rte_Pim_QuadDampgScaLpFil();
  *TSC_Dampg_Rte_Pim_QuadDampgScaLpFil() = QuadDampgScaLpFil;

  DampgHydBasCoeff1_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff1_Val();
  DampgHydBasCoeff2_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff2_Val();
  DampgHydBasCoeff3_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff3_Val();
  DampgHydBasCoeff4_Val_data = TSC_Dampg_Rte_Prm_DampgHydBasCoeff4_Val();
  DampgHydOutpLim_Val_data = TSC_Dampg_Rte_Prm_DampgHydOutpLim_Val();
  DampgMotVelLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgMotVelLpFilFrq_Val();
  DampgQuad13Mplr_Val_data = TSC_Dampg_Rte_Prm_DampgQuad13Mplr_Val();
  DampgQuad24Mplr_Val_data = TSC_Dampg_Rte_Prm_DampgQuad24Mplr_Val();
  DampgQuadHwTqBacklsh_Val_data = TSC_Dampg_Rte_Prm_DampgQuadHwTqBacklsh_Val();
  DampgQuadHwTqLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgQuadHwTqLpFilFrq_Val();
  DampgQuadMotVelBacklsh_Val_data = TSC_Dampg_Rte_Prm_DampgQuadMotVelBacklsh_Val();
  DampgQuadMotVelLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgQuadMotVelLpFilFrq_Val();
  DampgQuadScaLpFilFrq_Val_data = TSC_Dampg_Rte_Prm_DampgQuadScaLpFilFrq_Val();
  (void)memcpy(DampgHwTqX_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHwTqX_Ary1D(), sizeof(Ary1D_u8p8_2));
  (void)memcpy(DampgHwTqY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHwTqY_Ary1D(), sizeof(Ary1D_u1p15_2));
  (void)memcpy(DampgHydAssiLim_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydAssiLim_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff1ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff1ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff2ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff2ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff3ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff3ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgHydCoeff4ScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgHydCoeff4ScaY_Ary1D(), sizeof(Ary1D_u4p12_12));
  (void)memcpy(DampgMotVelX_Ary2D_data, TSC_Dampg_Rte_Prm_DampgMotVelX_Ary2D(), sizeof(Ary2D_u12p4_12_13));
  (void)memcpy(DampgMotVelY_Ary2D_data, TSC_Dampg_Rte_Prm_DampgMotVelY_Ary2D(), sizeof(Ary2D_u5p11_12_13));
  (void)memcpy(DampgTScaX_Ary1D_data, TSC_Dampg_Rte_Prm_DampgTScaX_Ary1D(), sizeof(Ary1D_s8p7_14));
  (void)memcpy(DampgTScaY_Ary1D_data, TSC_Dampg_Rte_Prm_DampgTScaY_Ary1D(), sizeof(Ary1D_u4p12_14));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_Dampg_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));

  fct_status = TSC_Dampg_Rte_Read_AssiCmdBas_Val(&Read_AssiCmdBas_Val);
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

  fct_status = TSC_Dampg_Rte_Read_AssiMechT_Val(&Read_AssiMechT_Val);
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

  fct_status = TSC_Dampg_Rte_Read_DampgCmdBasDi_Logl(&Read_DampgCmdBasDi_Logl);
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

  fct_status = TSC_Dampg_Rte_Read_DampgCmdOvrl_Val(&Read_DampgCmdOvrl_Val);
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

  fct_status = TSC_Dampg_Rte_Read_DampgCmdSca_Val(&Read_DampgCmdSca_Val);
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

  fct_status = TSC_Dampg_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_Dampg_Rte_Read_MotVelCrf_Val(&Read_MotVelCrf_Val);
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

  fct_status = TSC_Dampg_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_Dampg_Rte_Write_DampgCmdBas_Val(Rte_InitValue_DampgCmdBas_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Dampg_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
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


#define Dampg_STOP_SEC_CODE
#include "Dampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void Dampg_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Frq7_LowerLimit;
  float32 Test_float32_UL_1 = Frq7_UpperLimit;
  float32 Test_float32_LL_2 = Frq8_LowerLimit;
  float32 Test_float32_UL_2 = Frq8_UpperLimit;
  float32 Test_float32_LL_3 = Frq9_LowerLimit;
  float32 Test_float32_UL_3 = Frq9_UpperLimit;
  float32 Test_float32_LL_4 = Gain8_LowerLimit;
  float32 Test_float32_UL_4 = Gain8_UpperLimit;
  float32 Test_float32_LL_5 = Spd1_LowerLimit;
  float32 Test_float32_UL_5 = Spd1_UpperLimit;
  float32 Test_float32_LL_6 = T1_LowerLimit;
  float32 Test_float32_UL_6 = T1_UpperLimit;
  float32 Test_float32_LL_7 = T8_LowerLimit;
  float32 Test_float32_UL_7 = T8_UpperLimit;
  float32 Test_float32_LL_8 = Tq1_LowerLimit;
  float32 Test_float32_UL_8 = Tq1_UpperLimit;
  float32 Test_float32_LL_9 = Tq18_LowerLimit;
  float32 Test_float32_UL_9 = Tq18_UpperLimit;
  float32 Test_float32_LL_10 = Tq2_LowerLimit;
  float32 Test_float32_UL_10 = Tq2_UpperLimit;
  float32 Test_float32_LL_11 = Uls2_LowerLimit;
  float32 Test_float32_UL_11 = Uls2_UpperLimit;
  float32 Test_float32_LL_12 = Uls21_LowerLimit;
  float32 Test_float32_UL_12 = Uls21_UpperLimit;
  float32 Test_float32_LL_13 = Uls22_LowerLimit;
  float32 Test_float32_UL_13 = Uls22_UpperLimit;
  float32 Test_float32_LL_14 = Uls5_LowerLimit;
  float32 Test_float32_UL_14 = Uls5_UpperLimit;
  float32 Test_float32_LL_15 = Vel1_LowerLimit;
  float32 Test_float32_UL_15 = Vel1_UpperLimit;
  float32 Test_float32_LL_16 = Vel8_LowerLimit;
  float32 Test_float32_UL_16 = Vel8_UpperLimit;

  s8p7 Test_s8p7_LL_1 = T7_LowerLimit;
  s8p7 Test_s8p7_UL_1 = T7_UpperLimit;

  u12p4 Test_u12p4_LL_1 = Vel7_LowerLimit;
  u12p4 Test_u12p4_UL_1 = Vel7_UpperLimit;

  u1p15 Test_u1p15_LL_1 = Uls15_LowerLimit;
  u1p15 Test_u1p15_UL_1 = Uls15_UpperLimit;

  u4p12 Test_u4p12_LL_1 = Tq13_LowerLimit;
  u4p12 Test_u4p12_UL_1 = Tq13_UpperLimit;
  u4p12 Test_u4p12_LL_2 = Uls20_LowerLimit;
  u4p12 Test_u4p12_UL_2 = Uls20_UpperLimit;

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
