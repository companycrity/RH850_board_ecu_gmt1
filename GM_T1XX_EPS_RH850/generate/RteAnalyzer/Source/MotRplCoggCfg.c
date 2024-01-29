/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotRplCoggCfg.c
 *        Config:  EPS.dpa
 *     SW-C Type:  MotRplCoggCfg
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotRplCoggCfg>
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
 * s1p14
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
 * u16p0
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
 * u5p11
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

#include "Rte_MotRplCoggCfg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_MotRplCoggCfg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void MotRplCoggCfg_TestDefines(void);


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
 * s1p14: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u0p16: Integer in interval [0...65535]
 * u16p0: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Ary1D_s1p14_12: Array with 12 element(s) of type s1p14
 * Ary1D_u0p16_8: Array with 8 element(s) of type u0p16
 * Ary1D_u16p0_20: Array with 20 element(s) of type u16p0
 * Ary1D_u3p13_8: Array with 8 element(s) of type u3p13
 * Ary1D_u5p11_8: Array with 8 element(s) of type u5p11
 * Ary1D_u9p7_10: Array with 10 element(s) of type u9p7
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_s1p14_10_12: Array with 10 element(s) of type Ary1D_s1p14_12
 * Ary2D_u0p16_20_8: Array with 20 element(s) of type Ary1D_u0p16_8
 * Ary2D_u3p13_20_8: Array with 20 element(s) of type Ary1D_u3p13_8
 *
 * Record Types:
 * =============
 * MotRplCoggPrmRec2: Record with elements
 *   CoggOrder1 of type uint16
 *   CoggOrder1X of type s1p14
 *   CoggOrder1Y of type s1p14
 *   CoggOrder2 of type uint16
 *   CoggOrder2X of type s1p14
 *   CoggOrder2Y of type s1p14
 *   CoggOrder3 of type uint16
 *   CoggOrder3X of type s1p14
 *   CoggOrder3Y of type s1p14
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder1X(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Pim_MotTqRplOrder1Y(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Pim_MotTqRplOrder2X(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Pim_MotTqRplOrder2Y(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Pim_MotTqRplOrder3X(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Pim_MotTqRplOrder3Y(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   MotRplCoggPrmRec2 *Rte_Pim_MotRplCoggPrm(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val(void)
 *   float32 Rte_Prm_MotRplCoggCfgMotAgTiDly_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   u9p7 *Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_10
 *   u9p7 *Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   u3p13 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(void)
 *     Returnvalue: u3p13* is of type Ary2D_u3p13_20_8
 *   u0p16 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(void)
 *     Returnvalue: u0p16* is of type Ary2D_u0p16_20_8
 *   u5p11 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(void)
 *     Returnvalue: u5p11* is of type Ary1D_u5p11_8
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(void)
 *     Returnvalue: s1p14* is of type Ary2D_s1p14_10_12
 *   u16p0 *Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_20
 *
 *********************************************************************************************************************/


#define MotRplCoggCfg_START_SEC_CODE
#include "MotRplCoggCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotRplCoggPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotRplCoggPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMotRplCoggPrm_Oper(uint16 *CoggOrder1_Arg, s1p14 *CoggOrder1X_Arg, s1p14 *CoggOrder1Y_Arg, uint16 *CoggOrder2_Arg, s1p14 *CoggOrder2X_Arg, s1p14 *CoggOrder2Y_Arg, uint16 *CoggOrder3_Arg, s1p14 *CoggOrder3X_Arg, s1p14 *CoggOrder3Y_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotRplCoggPrm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) GetMotRplCoggPrm_Oper(P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3Y_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotRplCoggPrm_Oper
 *********************************************************************************************************************/

  float32 dMotRplCoggCfgMotAgElecDlyRpl;
  float32 dMotRplCoggCfgMotCurrQaxToMotTqGain;
  float32 dMotRplCoggCfgMotTqRplOrder1Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder1Pha;
  float32 dMotRplCoggCfgMotTqRplOrder2Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder2Pha;
  float32 dMotRplCoggCfgMotTqRplOrder3Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder3Pha;
  Ary2D_s1p14_10_12 MotTqRplOrder1X;
  Ary2D_s1p14_10_12 MotTqRplOrder1Y;
  Ary2D_s1p14_10_12 MotTqRplOrder2X;
  Ary2D_s1p14_10_12 MotTqRplOrder2Y;
  Ary2D_s1p14_10_12 MotTqRplOrder3X;
  Ary2D_s1p14_10_12 MotTqRplOrder3Y;
  MotRplCoggPrmRec2 MotRplCoggPrm;

  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotRplCoggCfgMotAgTiDly_Val_data;
  uint8 MotRplCoggCmdHrmncOrder1Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  Ary1D_u9p7_10 MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data;
  Ary1D_u9p7_12 MotRplCoggCfgMotCurrQaxRpl_Ary1D_data;
  Ary2D_u3p13_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data;
  Ary2D_u0p16_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data;
  Ary1D_u5p11_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data;
  Ary1D_u16p0_20 MotRplCoggCfgMotVelBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotRplCoggCfgMotAgElecDlyRpl = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl() = dMotRplCoggCfgMotAgElecDlyRpl;
  dMotRplCoggCfgMotCurrQaxToMotTqGain = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain() = dMotRplCoggCfgMotCurrQaxToMotTqGain;
  dMotRplCoggCfgMotTqRplOrder1Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn() = dMotRplCoggCfgMotTqRplOrder1Mgn;
  dMotRplCoggCfgMotTqRplOrder1Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha() = dMotRplCoggCfgMotTqRplOrder1Pha;
  dMotRplCoggCfgMotTqRplOrder2Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn() = dMotRplCoggCfgMotTqRplOrder2Mgn;
  dMotRplCoggCfgMotTqRplOrder2Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha() = dMotRplCoggCfgMotTqRplOrder2Pha;
  dMotRplCoggCfgMotTqRplOrder3Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn() = dMotRplCoggCfgMotTqRplOrder3Mgn;
  dMotRplCoggCfgMotTqRplOrder3Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha() = dMotRplCoggCfgMotTqRplOrder3Pha;

  (void)memcpy(MotTqRplOrder1X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), MotTqRplOrder1X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder1Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), MotTqRplOrder1Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), MotTqRplOrder2X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), MotTqRplOrder2Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), MotTqRplOrder3X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), MotTqRplOrder3Y, sizeof(Ary2D_s1p14_10_12));

  MotRplCoggPrm = *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm();
  *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm() = MotRplCoggPrm;

  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotRplCoggCfgMotAgTiDly_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotAgTiDly_Val();
  MotRplCoggCmdHrmncOrder1Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
  MotRplCoggCmdHrmncOrder2Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
  MotRplCoggCmdHrmncOrder3Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotRplCoggCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  (void)memcpy(MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_10));
  (void)memcpy(MotRplCoggCfgMotCurrQaxRpl_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(), sizeof(Ary2D_u3p13_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(), sizeof(Ary2D_u0p16_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(), sizeof(Ary1D_u5p11_8));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotVelBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(), sizeof(Ary1D_u16p0_20));

  MotRplCoggCfg_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCfgInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) MotRplCoggCfgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCfgInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 dMotRplCoggCfgMotAgElecDlyRpl;
  float32 dMotRplCoggCfgMotCurrQaxToMotTqGain;
  float32 dMotRplCoggCfgMotTqRplOrder1Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder1Pha;
  float32 dMotRplCoggCfgMotTqRplOrder2Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder2Pha;
  float32 dMotRplCoggCfgMotTqRplOrder3Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder3Pha;
  Ary2D_s1p14_10_12 MotTqRplOrder1X;
  Ary2D_s1p14_10_12 MotTqRplOrder1Y;
  Ary2D_s1p14_10_12 MotTqRplOrder2X;
  Ary2D_s1p14_10_12 MotTqRplOrder2Y;
  Ary2D_s1p14_10_12 MotTqRplOrder3X;
  Ary2D_s1p14_10_12 MotTqRplOrder3Y;
  MotRplCoggPrmRec2 MotRplCoggPrm;

  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotRplCoggCfgMotAgTiDly_Val_data;
  uint8 MotRplCoggCmdHrmncOrder1Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  Ary1D_u9p7_10 MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data;
  Ary1D_u9p7_12 MotRplCoggCfgMotCurrQaxRpl_Ary1D_data;
  Ary2D_u3p13_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data;
  Ary2D_u0p16_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data;
  Ary1D_u5p11_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data;
  Ary1D_u16p0_20 MotRplCoggCfgMotVelBilnrSeln_Ary1D_data;

  NvM_RequestResultType Call_MotRplCoggPrm_GetErrorStatus_ErrorStatus_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotRplCoggCfgMotAgElecDlyRpl = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl() = dMotRplCoggCfgMotAgElecDlyRpl;
  dMotRplCoggCfgMotCurrQaxToMotTqGain = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain() = dMotRplCoggCfgMotCurrQaxToMotTqGain;
  dMotRplCoggCfgMotTqRplOrder1Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn() = dMotRplCoggCfgMotTqRplOrder1Mgn;
  dMotRplCoggCfgMotTqRplOrder1Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha() = dMotRplCoggCfgMotTqRplOrder1Pha;
  dMotRplCoggCfgMotTqRplOrder2Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn() = dMotRplCoggCfgMotTqRplOrder2Mgn;
  dMotRplCoggCfgMotTqRplOrder2Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha() = dMotRplCoggCfgMotTqRplOrder2Pha;
  dMotRplCoggCfgMotTqRplOrder3Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn() = dMotRplCoggCfgMotTqRplOrder3Mgn;
  dMotRplCoggCfgMotTqRplOrder3Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha() = dMotRplCoggCfgMotTqRplOrder3Pha;

  (void)memcpy(MotTqRplOrder1X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), MotTqRplOrder1X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder1Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), MotTqRplOrder1Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), MotTqRplOrder2X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), MotTqRplOrder2Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), MotTqRplOrder3X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), MotTqRplOrder3Y, sizeof(Ary2D_s1p14_10_12));

  MotRplCoggPrm = *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm();
  *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm() = MotRplCoggPrm;

  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotRplCoggCfgMotAgTiDly_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotAgTiDly_Val();
  MotRplCoggCmdHrmncOrder1Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
  MotRplCoggCmdHrmncOrder2Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
  MotRplCoggCmdHrmncOrder3Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotRplCoggCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  (void)memcpy(MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_10));
  (void)memcpy(MotRplCoggCfgMotCurrQaxRpl_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(), sizeof(Ary2D_u3p13_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(), sizeof(Ary2D_u0p16_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(), sizeof(Ary1D_u5p11_8));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotVelBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(), sizeof(Ary1D_u16p0_20));

  fct_status = TSC_MotRplCoggCfg_Rte_Call_MotRplCoggPrm_GetErrorStatus(&Call_MotRplCoggPrm_GetErrorStatus_ErrorStatus_Arg);
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
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Call_MotRplCoggPrm_SetRamBlockStatus(FALSE);
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
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCfgPer1
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
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAgElecDlyRpl_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrQaxToMotTqGain_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder1Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder1Pha_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder2Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder2Pha_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder3Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder3Pha_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCfgPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) MotRplCoggCfgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCfgPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_MotBackEmfConEstimd_Val;
  float32 Read_MotCurrDaxCmd_Val;
  float32 Read_MotCurrQaxCmd_Val;
  float32 Read_MotInduDaxEstimd_Val;
  float32 Read_MotInduQaxEstimd_Val;
  float32 Read_MotTqCmdMrfScad_Val;
  float32 Read_MotVelMrf_Val;

  float32 dMotRplCoggCfgMotAgElecDlyRpl;
  float32 dMotRplCoggCfgMotCurrQaxToMotTqGain;
  float32 dMotRplCoggCfgMotTqRplOrder1Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder1Pha;
  float32 dMotRplCoggCfgMotTqRplOrder2Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder2Pha;
  float32 dMotRplCoggCfgMotTqRplOrder3Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder3Pha;
  Ary2D_s1p14_10_12 MotTqRplOrder1X;
  Ary2D_s1p14_10_12 MotTqRplOrder1Y;
  Ary2D_s1p14_10_12 MotTqRplOrder2X;
  Ary2D_s1p14_10_12 MotTqRplOrder2Y;
  Ary2D_s1p14_10_12 MotTqRplOrder3X;
  Ary2D_s1p14_10_12 MotTqRplOrder3Y;
  MotRplCoggPrmRec2 MotRplCoggPrm;

  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotRplCoggCfgMotAgTiDly_Val_data;
  uint8 MotRplCoggCmdHrmncOrder1Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  Ary1D_u9p7_10 MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data;
  Ary1D_u9p7_12 MotRplCoggCfgMotCurrQaxRpl_Ary1D_data;
  Ary2D_u3p13_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data;
  Ary2D_u0p16_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data;
  Ary1D_u5p11_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data;
  Ary1D_u16p0_20 MotRplCoggCfgMotVelBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotRplCoggCfgMotAgElecDlyRpl = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl() = dMotRplCoggCfgMotAgElecDlyRpl;
  dMotRplCoggCfgMotCurrQaxToMotTqGain = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain() = dMotRplCoggCfgMotCurrQaxToMotTqGain;
  dMotRplCoggCfgMotTqRplOrder1Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn() = dMotRplCoggCfgMotTqRplOrder1Mgn;
  dMotRplCoggCfgMotTqRplOrder1Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha() = dMotRplCoggCfgMotTqRplOrder1Pha;
  dMotRplCoggCfgMotTqRplOrder2Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn() = dMotRplCoggCfgMotTqRplOrder2Mgn;
  dMotRplCoggCfgMotTqRplOrder2Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha() = dMotRplCoggCfgMotTqRplOrder2Pha;
  dMotRplCoggCfgMotTqRplOrder3Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn() = dMotRplCoggCfgMotTqRplOrder3Mgn;
  dMotRplCoggCfgMotTqRplOrder3Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha() = dMotRplCoggCfgMotTqRplOrder3Pha;

  (void)memcpy(MotTqRplOrder1X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), MotTqRplOrder1X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder1Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), MotTqRplOrder1Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), MotTqRplOrder2X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), MotTqRplOrder2Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), MotTqRplOrder3X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), MotTqRplOrder3Y, sizeof(Ary2D_s1p14_10_12));

  MotRplCoggPrm = *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm();
  *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm() = MotRplCoggPrm;

  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotRplCoggCfgMotAgTiDly_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotAgTiDly_Val();
  MotRplCoggCmdHrmncOrder1Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
  MotRplCoggCmdHrmncOrder2Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
  MotRplCoggCmdHrmncOrder3Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotRplCoggCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  (void)memcpy(MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_10));
  (void)memcpy(MotRplCoggCfgMotCurrQaxRpl_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(), sizeof(Ary2D_u3p13_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(), sizeof(Ary2D_u0p16_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(), sizeof(Ary1D_u5p11_8));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotVelBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(), sizeof(Ary1D_u16p0_20));

  fct_status = TSC_MotRplCoggCfg_Rte_Read_MotBackEmfConEstimd_Val(&Read_MotBackEmfConEstimd_Val);
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

  fct_status = TSC_MotRplCoggCfg_Rte_Read_MotCurrDaxCmd_Val(&Read_MotCurrDaxCmd_Val);
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

  fct_status = TSC_MotRplCoggCfg_Rte_Read_MotCurrQaxCmd_Val(&Read_MotCurrQaxCmd_Val);
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

  fct_status = TSC_MotRplCoggCfg_Rte_Read_MotInduDaxEstimd_Val(&Read_MotInduDaxEstimd_Val);
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

  fct_status = TSC_MotRplCoggCfg_Rte_Read_MotInduQaxEstimd_Val(&Read_MotInduQaxEstimd_Val);
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

  fct_status = TSC_MotRplCoggCfg_Rte_Read_MotTqCmdMrfScad_Val(&Read_MotTqCmdMrfScad_Val);
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

  fct_status = TSC_MotRplCoggCfg_Rte_Read_MotVelMrf_Val(&Read_MotVelMrf_Val);
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

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotAgElecDlyRpl_Val(Rte_InitValue_MotAgElecDlyRpl_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotCurrQaxToMotTqGain_Val(Rte_InitValue_MotCurrQaxToMotTqGain_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder1Mgn_Val(Rte_InitValue_MotTqRplCoggOrder1Mgn_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder1Pha_Val(Rte_InitValue_MotTqRplCoggOrder1Pha_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder2Mgn_Val(Rte_InitValue_MotTqRplCoggOrder2Mgn_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder2Pha_Val(Rte_InitValue_MotTqRplCoggOrder2Pha_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder3Mgn_Val(Rte_InitValue_MotTqRplCoggOrder3Mgn_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder3Pha_Val(Rte_InitValue_MotTqRplCoggOrder3Pha_Val);
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

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotRplCoggPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotRplCoggPrm>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotRplCoggPrm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotRplCoggPrm_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 dMotRplCoggCfgMotAgElecDlyRpl;
  float32 dMotRplCoggCfgMotCurrQaxToMotTqGain;
  float32 dMotRplCoggCfgMotTqRplOrder1Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder1Pha;
  float32 dMotRplCoggCfgMotTqRplOrder2Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder2Pha;
  float32 dMotRplCoggCfgMotTqRplOrder3Mgn;
  float32 dMotRplCoggCfgMotTqRplOrder3Pha;
  Ary2D_s1p14_10_12 MotTqRplOrder1X;
  Ary2D_s1p14_10_12 MotTqRplOrder1Y;
  Ary2D_s1p14_10_12 MotTqRplOrder2X;
  Ary2D_s1p14_10_12 MotTqRplOrder2Y;
  Ary2D_s1p14_10_12 MotTqRplOrder3X;
  Ary2D_s1p14_10_12 MotTqRplOrder3Y;
  MotRplCoggPrmRec2 MotRplCoggPrm;

  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotRplCoggCfgMotAgTiDly_Val_data;
  uint8 MotRplCoggCmdHrmncOrder1Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val_data;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  Ary1D_u9p7_10 MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data;
  Ary1D_u9p7_12 MotRplCoggCfgMotCurrQaxRpl_Ary1D_data;
  Ary2D_u3p13_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data;
  Ary2D_u0p16_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data;
  Ary1D_u5p11_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3X_Ary2D_data;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data;
  Ary1D_u16p0_20 MotRplCoggCfgMotVelBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotRplCoggCfgMotAgElecDlyRpl = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl() = dMotRplCoggCfgMotAgElecDlyRpl;
  dMotRplCoggCfgMotCurrQaxToMotTqGain = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain() = dMotRplCoggCfgMotCurrQaxToMotTqGain;
  dMotRplCoggCfgMotTqRplOrder1Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn() = dMotRplCoggCfgMotTqRplOrder1Mgn;
  dMotRplCoggCfgMotTqRplOrder1Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha() = dMotRplCoggCfgMotTqRplOrder1Pha;
  dMotRplCoggCfgMotTqRplOrder2Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn() = dMotRplCoggCfgMotTqRplOrder2Mgn;
  dMotRplCoggCfgMotTqRplOrder2Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha() = dMotRplCoggCfgMotTqRplOrder2Pha;
  dMotRplCoggCfgMotTqRplOrder3Mgn = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn() = dMotRplCoggCfgMotTqRplOrder3Mgn;
  dMotRplCoggCfgMotTqRplOrder3Pha = *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha();
  *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha() = dMotRplCoggCfgMotTqRplOrder3Pha;

  (void)memcpy(MotTqRplOrder1X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(), MotTqRplOrder1X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder1Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(), MotTqRplOrder1Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(), MotTqRplOrder2X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder2Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(), MotTqRplOrder2Y, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3X, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(), MotTqRplOrder3X, sizeof(Ary2D_s1p14_10_12));


  (void)memcpy(MotTqRplOrder3Y, TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(), MotTqRplOrder3Y, sizeof(Ary2D_s1p14_10_12));

  MotRplCoggPrm = *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm();
  *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm() = MotRplCoggPrm;

  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotRplCoggCfgMotAgTiDly_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotAgTiDly_Val();
  MotRplCoggCmdHrmncOrder1Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
  MotRplCoggCmdHrmncOrder2Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
  MotRplCoggCmdHrmncOrder3Elec_Val_data = TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotRplCoggCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  (void)memcpy(MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_10));
  (void)memcpy(MotRplCoggCfgMotCurrQaxRpl_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(), sizeof(Ary1D_u9p7_12));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(), sizeof(Ary2D_u3p13_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(), sizeof(Ary2D_u0p16_20_8));
  (void)memcpy(MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(), sizeof(Ary1D_u5p11_8));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder1Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder2Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3X_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotTqRplOrder3Y_Ary2D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(), sizeof(Ary2D_s1p14_10_12));
  (void)memcpy(MotRplCoggCfgMotVelBilnrSeln_Ary1D_data, TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(), sizeof(Ary1D_u16p0_20));

  fct_status = TSC_MotRplCoggCfg_Rte_Call_MotRplCoggPrm_SetRamBlockStatus(FALSE);
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
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotRplCoggCfg_STOP_SEC_CODE
#include "MotRplCoggCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void MotRplCoggCfg_TestDefines(void)
{
  /* Enumeration Data Types */

  NvM_RequestResultType Test_NvM_RequestResultType_V_1 = NVM_REQ_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_2 = NVM_REQ_NOT_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_3 = NVM_REQ_PENDING;
  NvM_RequestResultType Test_NvM_RequestResultType_V_4 = NVM_REQ_INTEGRITY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_5 = NVM_REQ_BLOCK_SKIPPED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_6 = NVM_REQ_NV_INVALIDATED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_7 = NVM_REQ_CANCELED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_8 = NVM_REQ_REDUNDANCY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_9 = NVM_REQ_RESTORED_FROM_ROM;
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
