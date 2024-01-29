/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotCurrRegVltgLimr.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_MotCurrRegVltgLimr
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotCurrRegVltgLimr>
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

#include "Rte_CDD_MotCurrRegVltgLimr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_MotCurrRegVltgLimr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void CDD_MotCurrRegVltgLimr_TestDefines(void);


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
 *   float32 *Rte_Pim_AntiWdupCmdScaDax(void)
 *   float32 *Rte_Pim_AntiWdupCmdScaQax(void)
 *   float32 *Rte_Pim_CurrLoaScarPrev(void)
 *   float32 *Rte_Pim_DualEcuLoaScarPrev(void)
 *   float32 *Rte_Pim_IvtrLoaScarPrev(void)
 *   float32 *Rte_Pim_MotCtrlMotVltgDaxPrev(void)
 *   float32 *Rte_Pim_MotCtrlMotVltgQaxPrev(void)
 *   float32 *Rte_Pim_MotVltgIntglCmdDaxPrev(void)
 *   float32 *Rte_Pim_MotVltgIntglCmdQaxPrev(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErr(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly(void)
 *   FilLpRec1 *Rte_Pim_MotVltgBrdgLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotVltgQaxFfLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val(void)
 *   float32 Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void)
 *   boolean Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *
 *********************************************************************************************************************/


#define CDD_MotCurrRegVltgLimr_START_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegVltgLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegVltgLimrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotCurrRegVltgLimr_CODE) MotCurrRegVltgLimrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegVltgLimrInit1
 *********************************************************************************************************************/

  float32 AntiWdupCmdScaDax;
  float32 AntiWdupCmdScaQax;
  float32 CurrLoaScarPrev;
  float32 DualEcuLoaScarPrev;
  float32 IvtrLoaScarPrev;
  float32 MotCtrlMotVltgDaxPrev;
  float32 MotCtrlMotVltgQaxPrev;
  float32 MotVltgIntglCmdDaxPrev;
  float32 MotVltgIntglCmdQaxPrev;
  float32 dMotCurrRegVltgLimrAntiWdupCmdScaDax;
  float32 dMotCurrRegVltgLimrAntiWdupCmdScaQax;
  float32 dMotCurrRegVltgLimrMotCurrCmdErr;
  float32 dMotCurrRegVltgLimrMotCurrCmdErrDax;
  float32 dMotCurrRegVltgLimrMotCurrCmdErrQax;
  float32 dMotCurrRegVltgLimrMotCurrCmdScaDax;
  float32 dMotCurrRegVltgLimrMotCurrCmdScaQax;
  float32 dMotCurrRegVltgLimrMotVltgBrdgFild;
  float32 dMotCurrRegVltgLimrMotVltgCmdFinal;
  float32 dMotCurrRegVltgLimrMotVltgCmdPreLim;
  float32 dMotCurrRegVltgLimrMotVltgDampgDax;
  float32 dMotCurrRegVltgLimrMotVltgDampgQax;
  float32 dMotCurrRegVltgLimrMotVltgDaxFb;
  float32 dMotCurrRegVltgLimrMotVltgDaxIntglPreLim;
  float32 dMotCurrRegVltgLimrMotVltgDecouplFbDax;
  float32 dMotCurrRegVltgLimrMotVltgDecouplFbQax;
  float32 dMotCurrRegVltgLimrMotVltgDircFbDax;
  float32 dMotCurrRegVltgLimrMotVltgDircFbQax;
  float32 dMotCurrRegVltgLimrMotVltgPreLimDax;
  float32 dMotCurrRegVltgLimrMotVltgPreLimQax;
  float32 dMotCurrRegVltgLimrMotVltgPropCmdDax;
  float32 dMotCurrRegVltgLimrMotVltgPropCmdQax;
  float32 dMotCurrRegVltgLimrMotVltgQaxFb;
  float32 dMotCurrRegVltgLimrMotVltgQaxFfFild;
  float32 dMotCurrRegVltgLimrMotVltgQaxIntglPreLim;
  float32 dMotCurrRegVltgLimrMotVltgSatnIvsRat;
  float32 dMotCurrRegVltgLimrMotVltgSatnRat;
  float32 dMotCurrRegVltgLimrPhaAdvPreDly;
  FilLpRec1 MotVltgBrdgLpFil;
  FilLpRec1 MotVltgQaxFfLpFil;

  float32 MotCurrRegCfgMotRVirtDax_Val_data;
  float32 MotCurrRegCfgMotRVirtQax_Val_data;
  float32 MotCurrRegVltgLimrCurrLoaScarSlewRate_Val_data;
  float32 MotCurrRegVltgLimrDaxAntiWdupCoeff_Val_data;
  float32 MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val_data;
  float32 MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val_data;
  float32 MotCurrRegVltgLimrMotCurrPredTi_Val_data;
  float32 MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val_data;
  float32 MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val_data;
  float32 MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val_data;
  float32 MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val_data;
  float32 MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val_data;
  float32 MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val_data;
  float32 MotCurrRegVltgLimrQaxAntiWdupCoeff_Val_data;
  float32 MotRefMdlIvtrDeadTiBrdgVltgSca_Val_data;
  boolean MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl_data;
  boolean MotCurrRegVltgLimrMotCurrPredEna_Logl_data;
  boolean MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl_data;
  boolean MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl_data;
  boolean MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl_data;
  boolean MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl_data;
  boolean MotRefMdlFbCtrlDi_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AntiWdupCmdScaDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_AntiWdupCmdScaDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_AntiWdupCmdScaDax() = AntiWdupCmdScaDax;
  AntiWdupCmdScaQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_AntiWdupCmdScaQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_AntiWdupCmdScaQax() = AntiWdupCmdScaQax;
  CurrLoaScarPrev = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_CurrLoaScarPrev();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_CurrLoaScarPrev() = CurrLoaScarPrev;
  DualEcuLoaScarPrev = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_DualEcuLoaScarPrev();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_DualEcuLoaScarPrev() = DualEcuLoaScarPrev;
  IvtrLoaScarPrev = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_IvtrLoaScarPrev();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_IvtrLoaScarPrev() = IvtrLoaScarPrev;
  MotCtrlMotVltgDaxPrev = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotCtrlMotVltgDaxPrev();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotCtrlMotVltgDaxPrev() = MotCtrlMotVltgDaxPrev;
  MotCtrlMotVltgQaxPrev = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotCtrlMotVltgQaxPrev();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotCtrlMotVltgQaxPrev() = MotCtrlMotVltgQaxPrev;
  MotVltgIntglCmdDaxPrev = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgIntglCmdDaxPrev();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgIntglCmdDaxPrev() = MotVltgIntglCmdDaxPrev;
  MotVltgIntglCmdQaxPrev = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgIntglCmdQaxPrev();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgIntglCmdQaxPrev() = MotVltgIntglCmdQaxPrev;
  dMotCurrRegVltgLimrAntiWdupCmdScaDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax() = dMotCurrRegVltgLimrAntiWdupCmdScaDax;
  dMotCurrRegVltgLimrAntiWdupCmdScaQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax() = dMotCurrRegVltgLimrAntiWdupCmdScaQax;
  dMotCurrRegVltgLimrMotCurrCmdErr = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErr();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErr() = dMotCurrRegVltgLimrMotCurrCmdErr;
  dMotCurrRegVltgLimrMotCurrCmdErrDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax() = dMotCurrRegVltgLimrMotCurrCmdErrDax;
  dMotCurrRegVltgLimrMotCurrCmdErrQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax() = dMotCurrRegVltgLimrMotCurrCmdErrQax;
  dMotCurrRegVltgLimrMotCurrCmdScaDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax() = dMotCurrRegVltgLimrMotCurrCmdScaDax;
  dMotCurrRegVltgLimrMotCurrCmdScaQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax() = dMotCurrRegVltgLimrMotCurrCmdScaQax;
  dMotCurrRegVltgLimrMotVltgBrdgFild = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild() = dMotCurrRegVltgLimrMotVltgBrdgFild;
  dMotCurrRegVltgLimrMotVltgCmdFinal = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal() = dMotCurrRegVltgLimrMotVltgCmdFinal;
  dMotCurrRegVltgLimrMotVltgCmdPreLim = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim() = dMotCurrRegVltgLimrMotVltgCmdPreLim;
  dMotCurrRegVltgLimrMotVltgDampgDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax() = dMotCurrRegVltgLimrMotVltgDampgDax;
  dMotCurrRegVltgLimrMotVltgDampgQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax() = dMotCurrRegVltgLimrMotVltgDampgQax;
  dMotCurrRegVltgLimrMotVltgDaxFb = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb() = dMotCurrRegVltgLimrMotVltgDaxFb;
  dMotCurrRegVltgLimrMotVltgDaxIntglPreLim = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim() = dMotCurrRegVltgLimrMotVltgDaxIntglPreLim;
  dMotCurrRegVltgLimrMotVltgDecouplFbDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbDax() = dMotCurrRegVltgLimrMotVltgDecouplFbDax;
  dMotCurrRegVltgLimrMotVltgDecouplFbQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbQax() = dMotCurrRegVltgLimrMotVltgDecouplFbQax;
  dMotCurrRegVltgLimrMotVltgDircFbDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax() = dMotCurrRegVltgLimrMotVltgDircFbDax;
  dMotCurrRegVltgLimrMotVltgDircFbQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax() = dMotCurrRegVltgLimrMotVltgDircFbQax;
  dMotCurrRegVltgLimrMotVltgPreLimDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax() = dMotCurrRegVltgLimrMotVltgPreLimDax;
  dMotCurrRegVltgLimrMotVltgPreLimQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax() = dMotCurrRegVltgLimrMotVltgPreLimQax;
  dMotCurrRegVltgLimrMotVltgPropCmdDax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax() = dMotCurrRegVltgLimrMotVltgPropCmdDax;
  dMotCurrRegVltgLimrMotVltgPropCmdQax = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax() = dMotCurrRegVltgLimrMotVltgPropCmdQax;
  dMotCurrRegVltgLimrMotVltgQaxFb = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb() = dMotCurrRegVltgLimrMotVltgQaxFb;
  dMotCurrRegVltgLimrMotVltgQaxFfFild = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild() = dMotCurrRegVltgLimrMotVltgQaxFfFild;
  dMotCurrRegVltgLimrMotVltgQaxIntglPreLim = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim() = dMotCurrRegVltgLimrMotVltgQaxIntglPreLim;
  dMotCurrRegVltgLimrMotVltgSatnIvsRat = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat() = dMotCurrRegVltgLimrMotVltgSatnIvsRat;
  dMotCurrRegVltgLimrMotVltgSatnRat = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat() = dMotCurrRegVltgLimrMotVltgSatnRat;
  dMotCurrRegVltgLimrPhaAdvPreDly = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly() = dMotCurrRegVltgLimrPhaAdvPreDly;
  MotVltgBrdgLpFil = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgBrdgLpFil();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgBrdgLpFil() = MotVltgBrdgLpFil;
  MotVltgQaxFfLpFil = *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgQaxFfLpFil();
  *TSC_CDD_MotCurrRegVltgLimr_Rte_Pim_MotVltgQaxFfLpFil() = MotVltgQaxFfLpFil;

  MotCurrRegCfgMotRVirtDax_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegCfgMotRVirtDax_Val();
  MotCurrRegCfgMotRVirtQax_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegCfgMotRVirtQax_Val();
  MotCurrRegVltgLimrCurrLoaScarSlewRate_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val();
  MotCurrRegVltgLimrDaxAntiWdupCoeff_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val();
  MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val();
  MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val();
  MotCurrRegVltgLimrMotCurrPredTi_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val();
  MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val();
  MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val();
  MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val();
  MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val();
  MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val();
  MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val();
  MotCurrRegVltgLimrQaxAntiWdupCoeff_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val();
  MotRefMdlIvtrDeadTiBrdgVltgSca_Val_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val();
  MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl();
  MotCurrRegVltgLimrMotCurrPredEna_Logl_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl();
  MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl();
  MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl();
  MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl();
  MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl();
  MotRefMdlFbCtrlDi_Logl_data = TSC_CDD_MotCurrRegVltgLimr_Rte_Prm_MotRefMdlFbCtrlDi_Logl();

  CDD_MotCurrRegVltgLimr_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotCurrRegVltgLimr_STOP_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_MotCurrRegVltgLimr_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Ag10_LowerLimit;
  float32 Test_float32_UL_1 = Ag10_UpperLimit;
  float32 Test_float32_LL_2 = Curr4_LowerLimit;
  float32 Test_float32_UL_2 = Curr4_UpperLimit;
  float32 Test_float32_LL_3 = Curr5_LowerLimit;
  float32 Test_float32_UL_3 = Curr5_UpperLimit;
  float32 Test_float32_LL_4 = R1_LowerLimit;
  float32 Test_float32_UL_4 = R1_UpperLimit;
  float32 Test_float32_LL_5 = Rate3_LowerLimit;
  float32 Test_float32_UL_5 = Rate3_UpperLimit;
  float32 Test_float32_LL_6 = Uls2_LowerLimit;
  float32 Test_float32_UL_6 = Uls2_UpperLimit;
  float32 Test_float32_LL_7 = Uls7_LowerLimit;
  float32 Test_float32_UL_7 = Uls7_UpperLimit;
  float32 Test_float32_LL_8 = Uls8_LowerLimit;
  float32 Test_float32_UL_8 = Uls8_UpperLimit;
  float32 Test_float32_LL_9 = Uls9_LowerLimit;
  float32 Test_float32_UL_9 = Uls9_UpperLimit;
  float32 Test_float32_LL_10 = Volt17_LowerLimit;
  float32 Test_float32_UL_10 = Volt17_UpperLimit;
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
