/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotCtrlPrmEstimn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  MotCtrlPrmEstimn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotCtrlPrmEstimn>
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
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_MotCtrlPrmEstimn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_MotCtrlPrmEstimn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void MotCtrlPrmEstimn_TestDefines(void);


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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u2p14: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
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
 * Ary1D_u2p14_16: Array with 16 element(s) of type u2p14
 * Ary1D_u2p14_7: Array with 7 element(s) of type u2p14
 * Ary1D_u9p7_16: Array with 16 element(s) of type u9p7
 * Ary1D_u9p7_6: Array with 6 element(s) of type u9p7
 * Ary1D_u9p7_7: Array with 7 element(s) of type u9p7
 * Ary2D_u2p14_6_7: Array with 6 element(s) of type Ary1D_u2p14_7
 *
 * Record Types:
 * =============
 * MotPrmNomEolRec3: Record with elements
 *   MotBackEmfConNom of type float32
 *   MotRNom of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd(void)
 *   MotPrmNomEolRec3 *Rte_Pim_MotPrmNom(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCtrlPrmEstimnFetRNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnTNom_Val(void)
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_16
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_16
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_6
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_7
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_7
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_7
 *
 *********************************************************************************************************************/


#define MotCtrlPrmEstimn_START_SEC_CODE
#include "MotCtrlPrmEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotPrmNomEol_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotPrmNomEol>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetMotPrmNomEol_Oper(float32 *MotBackEmfConNom_Arg, float32 *MotRNom_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetMotPrmNomEol2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotPrmNomEol_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, MotCtrlPrmEstimn_CODE) GetMotPrmNomEol_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotBackEmfConNom_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotRNom_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotPrmNomEol_Oper (returns application error)
 *********************************************************************************************************************/

  float32 dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  float32 dMotCtrlPrmEstimnFetRFfEstimd;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  float32 dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNomEolRec3 MotPrmNom;

  float32 MotCtrlPrmEstimnFetRNom_Val_data;
  float32 MotCtrlPrmEstimnFetThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMagThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotRHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotRLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotRNom_Val_data;
  float32 MotCtrlPrmEstimnMotWidgThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnTNom_Val_data;
  Ary1D_u9p7_16 MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data;
  Ary1D_u2p14_16 MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data;
  Ary1D_u9p7_6 MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data;
  Ary1D_u9p7_7 MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCtrlPrmEstimnCtrlrREstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() = dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  dMotCtrlPrmEstimnFetRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() = dMotCtrlPrmEstimnFetRFfEstimd;
  dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() = dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() = dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  dMotCtrlPrmEstimnMotInduEstimdPreLimDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() = dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  dMotCtrlPrmEstimnMotInduEstimdPreLimQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() = dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  dMotCtrlPrmEstimnMotRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() = dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNom = *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom() = MotPrmNom;

  MotCtrlPrmEstimnFetRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetRNom_Val();
  MotCtrlPrmEstimnFetThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val();
  MotCtrlPrmEstimnMagThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val();
  MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val();
  MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val();
  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val();
  MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val();
  MotCtrlPrmEstimnMotInduDaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val();
  MotCtrlPrmEstimnMotInduQaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val();
  MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduQaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val();
  MotCtrlPrmEstimnMotInduQaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val();
  MotCtrlPrmEstimnMotRHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val();
  MotCtrlPrmEstimnMotRLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val();
  MotCtrlPrmEstimnMotRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRNom_Val();
  MotCtrlPrmEstimnMotWidgThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val();
  MotCtrlPrmEstimnTNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnTNom_Val();
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(), sizeof(Ary1D_u9p7_16));
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(), sizeof(Ary1D_u2p14_16));
  (void)memcpy(MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_6));
  (void)memcpy(MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(), sizeof(Ary1D_u9p7_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));

  MotCtrlPrmEstimn_TestDefines();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfConEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotREstimd_Val(float32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotPrmNom_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotPrmNom_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  float32 dMotCtrlPrmEstimnFetRFfEstimd;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  float32 dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNomEolRec3 MotPrmNom;

  float32 MotCtrlPrmEstimnFetRNom_Val_data;
  float32 MotCtrlPrmEstimnFetThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMagThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotRHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotRLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotRNom_Val_data;
  float32 MotCtrlPrmEstimnMotWidgThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnTNom_Val_data;
  Ary1D_u9p7_16 MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data;
  Ary1D_u2p14_16 MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data;
  Ary1D_u9p7_6 MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data;
  Ary1D_u9p7_7 MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data;

  NvM_RequestResultType Call_MotPrmNom_GetErrorStatus_ErrorStatus_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCtrlPrmEstimnCtrlrREstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() = dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  dMotCtrlPrmEstimnFetRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() = dMotCtrlPrmEstimnFetRFfEstimd;
  dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() = dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() = dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  dMotCtrlPrmEstimnMotInduEstimdPreLimDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() = dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  dMotCtrlPrmEstimnMotInduEstimdPreLimQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() = dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  dMotCtrlPrmEstimnMotRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() = dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNom = *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom() = MotPrmNom;

  MotCtrlPrmEstimnFetRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetRNom_Val();
  MotCtrlPrmEstimnFetThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val();
  MotCtrlPrmEstimnMagThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val();
  MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val();
  MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val();
  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val();
  MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val();
  MotCtrlPrmEstimnMotInduDaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val();
  MotCtrlPrmEstimnMotInduQaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val();
  MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduQaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val();
  MotCtrlPrmEstimnMotInduQaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val();
  MotCtrlPrmEstimnMotRHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val();
  MotCtrlPrmEstimnMotRLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val();
  MotCtrlPrmEstimnMotRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRNom_Val();
  MotCtrlPrmEstimnMotWidgThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val();
  MotCtrlPrmEstimnTNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnTNom_Val();
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(), sizeof(Ary1D_u9p7_16));
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(), sizeof(Ary1D_u2p14_16));
  (void)memcpy(MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_6));
  (void)memcpy(MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(), sizeof(Ary1D_u9p7_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotBackEmfConEstimd_Val(Rte_InitValue_MotBackEmfConEstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotInduDaxEstimd_Val(Rte_InitValue_MotInduDaxEstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotInduQaxEstimd_Val(Rte_InitValue_MotInduQaxEstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotREstimd_Val(Rte_InitValue_MotREstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Call_MotPrmNom_GetErrorStatus(&Call_MotPrmNom_GetErrorStatus_ErrorStatus_Arg);
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

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Call_MotPrmNom_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: MotCtrlPrmEstimnPer1
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
 *   Std_ReturnType Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfConEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_IvtrLoaMtgtnEna_Logl;
  float32 Read_MotCurrDaxCmd_Val;
  float32 Read_MotCurrQaxCmd_Val;

  float32 dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  float32 dMotCtrlPrmEstimnFetRFfEstimd;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  float32 dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNomEolRec3 MotPrmNom;

  float32 MotCtrlPrmEstimnFetRNom_Val_data;
  float32 MotCtrlPrmEstimnFetThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMagThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotRHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotRLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotRNom_Val_data;
  float32 MotCtrlPrmEstimnMotWidgThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnTNom_Val_data;
  Ary1D_u9p7_16 MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data;
  Ary1D_u2p14_16 MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data;
  Ary1D_u9p7_6 MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data;
  Ary1D_u9p7_7 MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data;

  float32 MotCtrlPrmEstimnPer1_MotBackEmfConFf;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCtrlPrmEstimnCtrlrREstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() = dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  dMotCtrlPrmEstimnFetRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() = dMotCtrlPrmEstimnFetRFfEstimd;
  dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() = dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() = dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  dMotCtrlPrmEstimnMotInduEstimdPreLimDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() = dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  dMotCtrlPrmEstimnMotInduEstimdPreLimQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() = dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  dMotCtrlPrmEstimnMotRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() = dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNom = *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom() = MotPrmNom;

  MotCtrlPrmEstimnFetRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetRNom_Val();
  MotCtrlPrmEstimnFetThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val();
  MotCtrlPrmEstimnMagThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val();
  MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val();
  MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val();
  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val();
  MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val();
  MotCtrlPrmEstimnMotInduDaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val();
  MotCtrlPrmEstimnMotInduQaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val();
  MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduQaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val();
  MotCtrlPrmEstimnMotInduQaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val();
  MotCtrlPrmEstimnMotRHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val();
  MotCtrlPrmEstimnMotRLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val();
  MotCtrlPrmEstimnMotRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRNom_Val();
  MotCtrlPrmEstimnMotWidgThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val();
  MotCtrlPrmEstimnTNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnTNom_Val();
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(), sizeof(Ary1D_u9p7_16));
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(), sizeof(Ary1D_u2p14_16));
  (void)memcpy(MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_6));
  (void)memcpy(MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(), sizeof(Ary1D_u9p7_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Read_IvtrLoaMtgtnEna_Logl(&Read_IvtrLoaMtgtnEna_Logl);
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

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Read_MotCurrDaxCmd_Val(&Read_MotCurrDaxCmd_Val);
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

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Read_MotCurrQaxCmd_Val(&Read_MotCurrQaxCmd_Val);
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

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotBackEmfConEstimd_Val(Rte_InitValue_MotBackEmfConEstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotInduDaxEstimd_Val(Rte_InitValue_MotInduDaxEstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotInduQaxEstimd_Val(Rte_InitValue_MotInduQaxEstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  MotCtrlPrmEstimnPer1_MotBackEmfConFf = TSC_MotCtrlPrmEstimn_Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotFetT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotMagT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotWidgT_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotREstimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_MotFetT_Val;
  float32 Read_MotMagT_Val;
  float32 Read_MotWidgT_Val;

  float32 dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  float32 dMotCtrlPrmEstimnFetRFfEstimd;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  float32 dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNomEolRec3 MotPrmNom;

  float32 MotCtrlPrmEstimnFetRNom_Val_data;
  float32 MotCtrlPrmEstimnFetThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMagThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotRHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotRLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotRNom_Val_data;
  float32 MotCtrlPrmEstimnMotWidgThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnTNom_Val_data;
  Ary1D_u9p7_16 MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data;
  Ary1D_u2p14_16 MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data;
  Ary1D_u9p7_6 MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data;
  Ary1D_u9p7_7 MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCtrlPrmEstimnCtrlrREstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() = dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  dMotCtrlPrmEstimnFetRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() = dMotCtrlPrmEstimnFetRFfEstimd;
  dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() = dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() = dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  dMotCtrlPrmEstimnMotInduEstimdPreLimDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() = dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  dMotCtrlPrmEstimnMotInduEstimdPreLimQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() = dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  dMotCtrlPrmEstimnMotRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() = dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNom = *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom() = MotPrmNom;

  MotCtrlPrmEstimnFetRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetRNom_Val();
  MotCtrlPrmEstimnFetThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val();
  MotCtrlPrmEstimnMagThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val();
  MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val();
  MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val();
  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val();
  MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val();
  MotCtrlPrmEstimnMotInduDaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val();
  MotCtrlPrmEstimnMotInduQaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val();
  MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduQaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val();
  MotCtrlPrmEstimnMotInduQaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val();
  MotCtrlPrmEstimnMotRHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val();
  MotCtrlPrmEstimnMotRLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val();
  MotCtrlPrmEstimnMotRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRNom_Val();
  MotCtrlPrmEstimnMotWidgThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val();
  MotCtrlPrmEstimnTNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnTNom_Val();
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(), sizeof(Ary1D_u9p7_16));
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(), sizeof(Ary1D_u2p14_16));
  (void)memcpy(MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_6));
  (void)memcpy(MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(), sizeof(Ary1D_u9p7_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Read_MotFetT_Val(&Read_MotFetT_Val);
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

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Read_MotMagT_Val(&Read_MotMagT_Val);
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

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Read_MotWidgT_Val(&Read_MotWidgT_Val);
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

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Write_MotREstimd_Val(Rte_InitValue_MotREstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  TSC_MotCtrlPrmEstimn_Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf(0.03993F);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotPrmNomEol_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotPrmNomEol>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotPrmNom_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetMotPrmNomEol_Oper(float32 MotBackEmfConNom_Arg, float32 MotRNom_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetMotPrmNomEol2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotPrmNomEol_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, MotCtrlPrmEstimn_CODE) SetMotPrmNomEol_Oper(float32 MotBackEmfConNom_Arg, float32 MotRNom_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotPrmNomEol_Oper (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  float32 dMotCtrlPrmEstimnFetRFfEstimd;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  float32 dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  float32 dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  float32 dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNomEolRec3 MotPrmNom;

  float32 MotCtrlPrmEstimnFetRNom_Val_data;
  float32 MotCtrlPrmEstimnFetThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMagThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val_data;
  float32 MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduDaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotInduQaxNom_Val_data;
  float32 MotCtrlPrmEstimnMotRHiLim_Val_data;
  float32 MotCtrlPrmEstimnMotRLoLim_Val_data;
  float32 MotCtrlPrmEstimnMotRNom_Val_data;
  float32 MotCtrlPrmEstimnMotWidgThermCoeff_Val_data;
  float32 MotCtrlPrmEstimnTNom_Val_data;
  Ary1D_u9p7_16 MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data;
  Ary1D_u2p14_16 MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data;
  Ary1D_u9p7_6 MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data;
  Ary1D_u9p7_7 MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCtrlPrmEstimnCtrlrREstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() = dMotCtrlPrmEstimnCtrlrREstimdPreLim;
  dMotCtrlPrmEstimnFetRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() = dMotCtrlPrmEstimnFetRFfEstimd;
  dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() = dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
  dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() = dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
  dMotCtrlPrmEstimnMotInduEstimdPreLimDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() = dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
  dMotCtrlPrmEstimnMotInduEstimdPreLimQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() = dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaDax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
  dMotCtrlPrmEstimnMotInduEstimdSatnScaQax = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() = dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
  dMotCtrlPrmEstimnMotRFfEstimd = *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() = dMotCtrlPrmEstimnMotRFfEstimd;
  MotPrmNom = *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom();
  *TSC_MotCtrlPrmEstimn_Rte_Pim_MotPrmNom() = MotPrmNom;

  MotCtrlPrmEstimnFetRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetRNom_Val();
  MotCtrlPrmEstimnFetThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val();
  MotCtrlPrmEstimnMagThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val();
  MotCtrlPrmEstimnMotBackEmfConHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val();
  MotCtrlPrmEstimnMotBackEmfConLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val();
  MotCtrlPrmEstimnMotBackEmfConNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
  MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val();
  MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduDaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val();
  MotCtrlPrmEstimnMotInduDaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val();
  MotCtrlPrmEstimnMotInduQaxHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val();
  MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val();
  MotCtrlPrmEstimnMotInduQaxLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val();
  MotCtrlPrmEstimnMotInduQaxNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val();
  MotCtrlPrmEstimnMotRHiLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val();
  MotCtrlPrmEstimnMotRLoLim_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val();
  MotCtrlPrmEstimnMotRNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotRNom_Val();
  MotCtrlPrmEstimnMotWidgThermCoeff_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val();
  MotCtrlPrmEstimnTNom_Val_data = TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnTNom_Val();
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(), sizeof(Ary1D_u9p7_16));
  (void)memcpy(MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(), sizeof(Ary1D_u2p14_16));
  (void)memcpy(MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_6));
  (void)memcpy(MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(), sizeof(Ary1D_u9p7_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));
  (void)memcpy(MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D_data, TSC_MotCtrlPrmEstimn_Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(), sizeof(Ary2D_u2p14_6_7));

  fct_status = TSC_MotCtrlPrmEstimn_Rte_Call_MotPrmNom_SetRamBlockStatus(FALSE);
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

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotCtrlPrmEstimn_STOP_SEC_CODE
#include "MotCtrlPrmEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void MotCtrlPrmEstimn_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Curr6_LowerLimit;
  float32 Test_float32_UL_1 = Curr6_UpperLimit;
  float32 Test_float32_LL_2 = Curr7_LowerLimit;
  float32 Test_float32_UL_2 = Curr7_UpperLimit;
  float32 Test_float32_LL_3 = Gain5_LowerLimit;
  float32 Test_float32_UL_3 = Gain5_UpperLimit;
  float32 Test_float32_LL_4 = Gain6_LowerLimit;
  float32 Test_float32_UL_4 = Gain6_UpperLimit;
  float32 Test_float32_LL_5 = Gain7_LowerLimit;
  float32 Test_float32_UL_5 = Gain7_UpperLimit;
  float32 Test_float32_LL_6 = Indu1_LowerLimit;
  float32 Test_float32_UL_6 = Indu1_UpperLimit;
  float32 Test_float32_LL_7 = MotCon1_LowerLimit;
  float32 Test_float32_UL_7 = MotCon1_UpperLimit;
  float32 Test_float32_LL_8 = R6_LowerLimit;
  float32 Test_float32_UL_8 = R6_UpperLimit;
  float32 Test_float32_LL_9 = R8_LowerLimit;
  float32 Test_float32_UL_9 = R8_UpperLimit;
  float32 Test_float32_LL_10 = T1_LowerLimit;
  float32 Test_float32_UL_10 = T1_UpperLimit;
  float32 Test_float32_LL_11 = T2_LowerLimit;
  float32 Test_float32_UL_11 = T2_UpperLimit;
  float32 Test_float32_LL_12 = T3_LowerLimit;
  float32 Test_float32_UL_12 = T3_UpperLimit;
  float32 Test_float32_LL_13 = T5_LowerLimit;
  float32 Test_float32_UL_13 = T5_UpperLimit;
  float32 Test_float32_LL_14 = Uls2_LowerLimit;
  float32 Test_float32_UL_14 = Uls2_UpperLimit;

  u2p14 Test_u2p14_LL_1 = Uls11_LowerLimit;
  u2p14 Test_u2p14_UL_1 = Uls11_UpperLimit;

  u9p7 Test_u9p7_LL_1 = Curr8_LowerLimit;
  u9p7 Test_u9p7_UL_1 = Curr8_UpperLimit;

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
