/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TEstimn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  TEstimn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TEstimn>
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

#include "Rte_TEstimn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_TEstimn.h"


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
 *   float32 *Rte_Pim_AssiMechTEstimnPrev(void)
 *   float32 *Rte_Pim_AssiMechTSlewLimPrev(void)
 *   float32 *Rte_Pim_CuTEstimnPrev(void)
 *   float32 *Rte_Pim_MagTEstimnPrev(void)
 *   float32 *Rte_Pim_SiTEstimnPrev(void)
 *   float32 *Rte_Pim_dTEstimnAmbPwr(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechCorrn(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechDampgSca(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechFil(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechLLFil(void)
 *   float32 *Rte_Pim_dTEstimnCuCorrn(void)
 *   float32 *Rte_Pim_dTEstimnCuLLFil(void)
 *   float32 *Rte_Pim_dTEstimnMagCorrn(void)
 *   float32 *Rte_Pim_dTEstimnMagLLFil(void)
 *   float32 *Rte_Pim_dTEstimnScadAmbT(void)
 *   float32 *Rte_Pim_dTEstimnScadEngT(void)
 *   float32 *Rte_Pim_dTEstimnSiCorrn(void)
 *   float32 *Rte_Pim_dTEstimnSiLLFilv(void)
 *   float32 *Rte_Pim_dTEstimnWghtAvrgT(void)
 *   boolean *Rte_Pim_AmbTVldPrev(void)
 *   boolean *Rte_Pim_AssiMechTInitEna(void)
 *   boolean *Rte_Pim_EngOilTVldPrev(void)
 *   FilLpRec1 *Rte_Pim_AssiMechFilLp(void)
 *   FilLpRec1 *Rte_Pim_CuFilLp(void)
 *   FilLpRec1 *Rte_Pim_MagFilLp(void)
 *   FilLpRec1 *Rte_Pim_SiFilLp(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TEstimnAmbPwrMplr_Val(void)
 *   float32 Rte_Prm_TEstimnAmbTSca_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechCorrLim_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechDampgSca_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechDftT_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechSlew_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTAssiMech_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTCu_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTMag_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTSi_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnCuCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnEngTSca_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnMagCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnSiCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffB1_Val(void)
 *   boolean Rte_Prm_TEstimnWghtAvrgTDi_Logl(void)
 *
 *********************************************************************************************************************/


#define TEstimn_START_SEC_CODE
#include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TEstimn_CODE) TEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AmbT_Val;
  boolean Read_AmbTVld_Logl;
  float32 Read_EcuTFild_Val;
  float32 Read_EngOilT_Val;
  boolean Read_EngOilTVld_Logl;

  float32 AssiMechTEstimnPrev;
  float32 AssiMechTSlewLimPrev;
  float32 CuTEstimnPrev;
  float32 MagTEstimnPrev;
  float32 SiTEstimnPrev;
  float32 dTEstimnAmbPwr;
  float32 dTEstimnAssiMechCorrn;
  float32 dTEstimnAssiMechDampgSca;
  float32 dTEstimnAssiMechFil;
  float32 dTEstimnAssiMechLLFil;
  float32 dTEstimnCuCorrn;
  float32 dTEstimnCuLLFil;
  float32 dTEstimnMagCorrn;
  float32 dTEstimnMagLLFil;
  float32 dTEstimnScadAmbT;
  float32 dTEstimnScadEngT;
  float32 dTEstimnSiCorrn;
  float32 dTEstimnSiLLFilv;
  float32 dTEstimnWghtAvrgT;
  boolean AmbTVldPrev;
  boolean AssiMechTInitEna;
  boolean EngOilTVldPrev;
  FilLpRec1 AssiMechFilLp;
  FilLpRec1 CuFilLp;
  FilLpRec1 MagFilLp;
  FilLpRec1 SiFilLp;

  float32 TEstimnAmbPwrMplr_Val_data;
  float32 TEstimnAmbTSca_Val_data;
  float32 TEstimnAssiMechAmbLpFilFrq_Val_data;
  float32 TEstimnAssiMechAmbMplr_Val_data;
  float32 TEstimnAssiMechCorrLim_Val_data;
  float32 TEstimnAssiMechDampgSca_Val_data;
  float32 TEstimnAssiMechDftT_Val_data;
  float32 TEstimnAssiMechLLFilCoeffA1_Val_data;
  float32 TEstimnAssiMechLLFilCoeffB0_Val_data;
  float32 TEstimnAssiMechLLFilCoeffB1_Val_data;
  float32 TEstimnAssiMechSlew_Val_data;
  float32 TEstimnCorrnTAssiMech_Val_data;
  float32 TEstimnCorrnTCu_Val_data;
  float32 TEstimnCorrnTMag_Val_data;
  float32 TEstimnCorrnTSi_Val_data;
  float32 TEstimnCuAmbLpFilFrq_Val_data;
  float32 TEstimnCuAmbMplr_Val_data;
  float32 TEstimnCuCorrnLim_Val_data;
  float32 TEstimnCuLLFilCoeffA1_Val_data;
  float32 TEstimnCuLLFilCoeffB0_Val_data;
  float32 TEstimnCuLLFilCoeffB1_Val_data;
  float32 TEstimnEngTSca_Val_data;
  float32 TEstimnMagAmbLpFilFrq_Val_data;
  float32 TEstimnMagAmbMplr_Val_data;
  float32 TEstimnMagCorrnLim_Val_data;
  float32 TEstimnMagLLFilCoeffA1_Val_data;
  float32 TEstimnMagLLFilCoeffB0_Val_data;
  float32 TEstimnMagLLFilCoeffB1_Val_data;
  float32 TEstimnSiAmbLpFilFrq_Val_data;
  float32 TEstimnSiAmbMplr_Val_data;
  float32 TEstimnSiCorrnLim_Val_data;
  float32 TEstimnSiLLFilCoeffA1_Val_data;
  float32 TEstimnSiLLFilCoeffB0_Val_data;
  float32 TEstimnSiLLFilCoeffB1_Val_data;
  boolean TEstimnWghtAvrgTDi_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AssiMechTEstimnPrev = *TSC_TEstimn_Rte_Pim_AssiMechTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_AssiMechTEstimnPrev() = AssiMechTEstimnPrev;
  AssiMechTSlewLimPrev = *TSC_TEstimn_Rte_Pim_AssiMechTSlewLimPrev();
  *TSC_TEstimn_Rte_Pim_AssiMechTSlewLimPrev() = AssiMechTSlewLimPrev;
  CuTEstimnPrev = *TSC_TEstimn_Rte_Pim_CuTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_CuTEstimnPrev() = CuTEstimnPrev;
  MagTEstimnPrev = *TSC_TEstimn_Rte_Pim_MagTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_MagTEstimnPrev() = MagTEstimnPrev;
  SiTEstimnPrev = *TSC_TEstimn_Rte_Pim_SiTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_SiTEstimnPrev() = SiTEstimnPrev;
  dTEstimnAmbPwr = *TSC_TEstimn_Rte_Pim_dTEstimnAmbPwr();
  *TSC_TEstimn_Rte_Pim_dTEstimnAmbPwr() = dTEstimnAmbPwr;
  dTEstimnAssiMechCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechCorrn() = dTEstimnAssiMechCorrn;
  dTEstimnAssiMechDampgSca = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechDampgSca();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechDampgSca() = dTEstimnAssiMechDampgSca;
  dTEstimnAssiMechFil = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechFil() = dTEstimnAssiMechFil;
  dTEstimnAssiMechLLFil = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechLLFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechLLFil() = dTEstimnAssiMechLLFil;
  dTEstimnCuCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnCuCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnCuCorrn() = dTEstimnCuCorrn;
  dTEstimnCuLLFil = *TSC_TEstimn_Rte_Pim_dTEstimnCuLLFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnCuLLFil() = dTEstimnCuLLFil;
  dTEstimnMagCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnMagCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnMagCorrn() = dTEstimnMagCorrn;
  dTEstimnMagLLFil = *TSC_TEstimn_Rte_Pim_dTEstimnMagLLFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnMagLLFil() = dTEstimnMagLLFil;
  dTEstimnScadAmbT = *TSC_TEstimn_Rte_Pim_dTEstimnScadAmbT();
  *TSC_TEstimn_Rte_Pim_dTEstimnScadAmbT() = dTEstimnScadAmbT;
  dTEstimnScadEngT = *TSC_TEstimn_Rte_Pim_dTEstimnScadEngT();
  *TSC_TEstimn_Rte_Pim_dTEstimnScadEngT() = dTEstimnScadEngT;
  dTEstimnSiCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnSiCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnSiCorrn() = dTEstimnSiCorrn;
  dTEstimnSiLLFilv = *TSC_TEstimn_Rte_Pim_dTEstimnSiLLFilv();
  *TSC_TEstimn_Rte_Pim_dTEstimnSiLLFilv() = dTEstimnSiLLFilv;
  dTEstimnWghtAvrgT = *TSC_TEstimn_Rte_Pim_dTEstimnWghtAvrgT();
  *TSC_TEstimn_Rte_Pim_dTEstimnWghtAvrgT() = dTEstimnWghtAvrgT;
  AmbTVldPrev = *TSC_TEstimn_Rte_Pim_AmbTVldPrev();
  *TSC_TEstimn_Rte_Pim_AmbTVldPrev() = AmbTVldPrev;
  AssiMechTInitEna = *TSC_TEstimn_Rte_Pim_AssiMechTInitEna();
  *TSC_TEstimn_Rte_Pim_AssiMechTInitEna() = AssiMechTInitEna;
  EngOilTVldPrev = *TSC_TEstimn_Rte_Pim_EngOilTVldPrev();
  *TSC_TEstimn_Rte_Pim_EngOilTVldPrev() = EngOilTVldPrev;
  AssiMechFilLp = *TSC_TEstimn_Rte_Pim_AssiMechFilLp();
  *TSC_TEstimn_Rte_Pim_AssiMechFilLp() = AssiMechFilLp;
  CuFilLp = *TSC_TEstimn_Rte_Pim_CuFilLp();
  *TSC_TEstimn_Rte_Pim_CuFilLp() = CuFilLp;
  MagFilLp = *TSC_TEstimn_Rte_Pim_MagFilLp();
  *TSC_TEstimn_Rte_Pim_MagFilLp() = MagFilLp;
  SiFilLp = *TSC_TEstimn_Rte_Pim_SiFilLp();
  *TSC_TEstimn_Rte_Pim_SiFilLp() = SiFilLp;

  TEstimnAmbPwrMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAmbPwrMplr_Val();
  TEstimnAmbTSca_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAmbTSca_Val();
  TEstimnAssiMechAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val();
  TEstimnAssiMechAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbMplr_Val();
  TEstimnAssiMechCorrLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechCorrLim_Val();
  TEstimnAssiMechDampgSca_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechDampgSca_Val();
  TEstimnAssiMechDftT_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechDftT_Val();
  TEstimnAssiMechLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val();
  TEstimnAssiMechLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val();
  TEstimnAssiMechLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val();
  TEstimnAssiMechSlew_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechSlew_Val();
  TEstimnCorrnTAssiMech_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTAssiMech_Val();
  TEstimnCorrnTCu_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTCu_Val();
  TEstimnCorrnTMag_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTMag_Val();
  TEstimnCorrnTSi_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTSi_Val();
  TEstimnCuAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuAmbLpFilFrq_Val();
  TEstimnCuAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuAmbMplr_Val();
  TEstimnCuCorrnLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuCorrnLim_Val();
  TEstimnCuLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffA1_Val();
  TEstimnCuLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB0_Val();
  TEstimnCuLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB1_Val();
  TEstimnEngTSca_Val_data = TSC_TEstimn_Rte_Prm_TEstimnEngTSca_Val();
  TEstimnMagAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagAmbLpFilFrq_Val();
  TEstimnMagAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagAmbMplr_Val();
  TEstimnMagCorrnLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagCorrnLim_Val();
  TEstimnMagLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffA1_Val();
  TEstimnMagLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB0_Val();
  TEstimnMagLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB1_Val();
  TEstimnSiAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiAmbLpFilFrq_Val();
  TEstimnSiAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiAmbMplr_Val();
  TEstimnSiCorrnLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiCorrnLim_Val();
  TEstimnSiLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffA1_Val();
  TEstimnSiLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB0_Val();
  TEstimnSiLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB1_Val();
  TEstimnWghtAvrgTDi_Logl_data = TSC_TEstimn_Rte_Prm_TEstimnWghtAvrgTDi_Logl();

  fct_status = TSC_TEstimn_Rte_Read_AmbT_Val(&Read_AmbT_Val);
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

  fct_status = TSC_TEstimn_Rte_Read_AmbTVld_Logl(&Read_AmbTVld_Logl);
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

  fct_status = TSC_TEstimn_Rte_Read_EcuTFild_Val(&Read_EcuTFild_Val);
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

  fct_status = TSC_TEstimn_Rte_Read_EngOilT_Val(&Read_EngOilT_Val);
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

  fct_status = TSC_TEstimn_Rte_Read_EngOilTVld_Logl(&Read_EngOilTVld_Logl);
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

  fct_status = TSC_TEstimn_Rte_Write_AssiMechT_Val(Rte_InitValue_AssiMechT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TEstimn_Rte_Write_MotFetT_Val(Rte_InitValue_MotFetT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TEstimn_Rte_Write_MotMagT_Val(Rte_InitValue_MotMagT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TEstimn_Rte_Write_MotWidgT_Val(Rte_InitValue_MotWidgT_Val);
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
 * Runnable Entity Name: TEstimnPer1
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
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_AssiMechTEstimnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TEstimn_CODE) TEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AmbT_Val;
  boolean Read_AmbTVld_Logl;
  boolean Read_AssiMechTEstimnDi_Logl;
  float32 Read_EcuTFild_Val;
  float32 Read_EngOilT_Val;
  boolean Read_EngOilTVld_Logl;
  float32 Read_HwVel_Val;
  float32 Read_MotCurrPeakEstimd_Val;

  float32 AssiMechTEstimnPrev;
  float32 AssiMechTSlewLimPrev;
  float32 CuTEstimnPrev;
  float32 MagTEstimnPrev;
  float32 SiTEstimnPrev;
  float32 dTEstimnAmbPwr;
  float32 dTEstimnAssiMechCorrn;
  float32 dTEstimnAssiMechDampgSca;
  float32 dTEstimnAssiMechFil;
  float32 dTEstimnAssiMechLLFil;
  float32 dTEstimnCuCorrn;
  float32 dTEstimnCuLLFil;
  float32 dTEstimnMagCorrn;
  float32 dTEstimnMagLLFil;
  float32 dTEstimnScadAmbT;
  float32 dTEstimnScadEngT;
  float32 dTEstimnSiCorrn;
  float32 dTEstimnSiLLFilv;
  float32 dTEstimnWghtAvrgT;
  boolean AmbTVldPrev;
  boolean AssiMechTInitEna;
  boolean EngOilTVldPrev;
  FilLpRec1 AssiMechFilLp;
  FilLpRec1 CuFilLp;
  FilLpRec1 MagFilLp;
  FilLpRec1 SiFilLp;

  float32 TEstimnAmbPwrMplr_Val_data;
  float32 TEstimnAmbTSca_Val_data;
  float32 TEstimnAssiMechAmbLpFilFrq_Val_data;
  float32 TEstimnAssiMechAmbMplr_Val_data;
  float32 TEstimnAssiMechCorrLim_Val_data;
  float32 TEstimnAssiMechDampgSca_Val_data;
  float32 TEstimnAssiMechDftT_Val_data;
  float32 TEstimnAssiMechLLFilCoeffA1_Val_data;
  float32 TEstimnAssiMechLLFilCoeffB0_Val_data;
  float32 TEstimnAssiMechLLFilCoeffB1_Val_data;
  float32 TEstimnAssiMechSlew_Val_data;
  float32 TEstimnCorrnTAssiMech_Val_data;
  float32 TEstimnCorrnTCu_Val_data;
  float32 TEstimnCorrnTMag_Val_data;
  float32 TEstimnCorrnTSi_Val_data;
  float32 TEstimnCuAmbLpFilFrq_Val_data;
  float32 TEstimnCuAmbMplr_Val_data;
  float32 TEstimnCuCorrnLim_Val_data;
  float32 TEstimnCuLLFilCoeffA1_Val_data;
  float32 TEstimnCuLLFilCoeffB0_Val_data;
  float32 TEstimnCuLLFilCoeffB1_Val_data;
  float32 TEstimnEngTSca_Val_data;
  float32 TEstimnMagAmbLpFilFrq_Val_data;
  float32 TEstimnMagAmbMplr_Val_data;
  float32 TEstimnMagCorrnLim_Val_data;
  float32 TEstimnMagLLFilCoeffA1_Val_data;
  float32 TEstimnMagLLFilCoeffB0_Val_data;
  float32 TEstimnMagLLFilCoeffB1_Val_data;
  float32 TEstimnSiAmbLpFilFrq_Val_data;
  float32 TEstimnSiAmbMplr_Val_data;
  float32 TEstimnSiCorrnLim_Val_data;
  float32 TEstimnSiLLFilCoeffA1_Val_data;
  float32 TEstimnSiLLFilCoeffB0_Val_data;
  float32 TEstimnSiLLFilCoeffB1_Val_data;
  boolean TEstimnWghtAvrgTDi_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AssiMechTEstimnPrev = *TSC_TEstimn_Rte_Pim_AssiMechTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_AssiMechTEstimnPrev() = AssiMechTEstimnPrev;
  AssiMechTSlewLimPrev = *TSC_TEstimn_Rte_Pim_AssiMechTSlewLimPrev();
  *TSC_TEstimn_Rte_Pim_AssiMechTSlewLimPrev() = AssiMechTSlewLimPrev;
  CuTEstimnPrev = *TSC_TEstimn_Rte_Pim_CuTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_CuTEstimnPrev() = CuTEstimnPrev;
  MagTEstimnPrev = *TSC_TEstimn_Rte_Pim_MagTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_MagTEstimnPrev() = MagTEstimnPrev;
  SiTEstimnPrev = *TSC_TEstimn_Rte_Pim_SiTEstimnPrev();
  *TSC_TEstimn_Rte_Pim_SiTEstimnPrev() = SiTEstimnPrev;
  dTEstimnAmbPwr = *TSC_TEstimn_Rte_Pim_dTEstimnAmbPwr();
  *TSC_TEstimn_Rte_Pim_dTEstimnAmbPwr() = dTEstimnAmbPwr;
  dTEstimnAssiMechCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechCorrn() = dTEstimnAssiMechCorrn;
  dTEstimnAssiMechDampgSca = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechDampgSca();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechDampgSca() = dTEstimnAssiMechDampgSca;
  dTEstimnAssiMechFil = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechFil() = dTEstimnAssiMechFil;
  dTEstimnAssiMechLLFil = *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechLLFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechLLFil() = dTEstimnAssiMechLLFil;
  dTEstimnCuCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnCuCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnCuCorrn() = dTEstimnCuCorrn;
  dTEstimnCuLLFil = *TSC_TEstimn_Rte_Pim_dTEstimnCuLLFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnCuLLFil() = dTEstimnCuLLFil;
  dTEstimnMagCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnMagCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnMagCorrn() = dTEstimnMagCorrn;
  dTEstimnMagLLFil = *TSC_TEstimn_Rte_Pim_dTEstimnMagLLFil();
  *TSC_TEstimn_Rte_Pim_dTEstimnMagLLFil() = dTEstimnMagLLFil;
  dTEstimnScadAmbT = *TSC_TEstimn_Rte_Pim_dTEstimnScadAmbT();
  *TSC_TEstimn_Rte_Pim_dTEstimnScadAmbT() = dTEstimnScadAmbT;
  dTEstimnScadEngT = *TSC_TEstimn_Rte_Pim_dTEstimnScadEngT();
  *TSC_TEstimn_Rte_Pim_dTEstimnScadEngT() = dTEstimnScadEngT;
  dTEstimnSiCorrn = *TSC_TEstimn_Rte_Pim_dTEstimnSiCorrn();
  *TSC_TEstimn_Rte_Pim_dTEstimnSiCorrn() = dTEstimnSiCorrn;
  dTEstimnSiLLFilv = *TSC_TEstimn_Rte_Pim_dTEstimnSiLLFilv();
  *TSC_TEstimn_Rte_Pim_dTEstimnSiLLFilv() = dTEstimnSiLLFilv;
  dTEstimnWghtAvrgT = *TSC_TEstimn_Rte_Pim_dTEstimnWghtAvrgT();
  *TSC_TEstimn_Rte_Pim_dTEstimnWghtAvrgT() = dTEstimnWghtAvrgT;
  AmbTVldPrev = *TSC_TEstimn_Rte_Pim_AmbTVldPrev();
  *TSC_TEstimn_Rte_Pim_AmbTVldPrev() = AmbTVldPrev;
  AssiMechTInitEna = *TSC_TEstimn_Rte_Pim_AssiMechTInitEna();
  *TSC_TEstimn_Rte_Pim_AssiMechTInitEna() = AssiMechTInitEna;
  EngOilTVldPrev = *TSC_TEstimn_Rte_Pim_EngOilTVldPrev();
  *TSC_TEstimn_Rte_Pim_EngOilTVldPrev() = EngOilTVldPrev;
  AssiMechFilLp = *TSC_TEstimn_Rte_Pim_AssiMechFilLp();
  *TSC_TEstimn_Rte_Pim_AssiMechFilLp() = AssiMechFilLp;
  CuFilLp = *TSC_TEstimn_Rte_Pim_CuFilLp();
  *TSC_TEstimn_Rte_Pim_CuFilLp() = CuFilLp;
  MagFilLp = *TSC_TEstimn_Rte_Pim_MagFilLp();
  *TSC_TEstimn_Rte_Pim_MagFilLp() = MagFilLp;
  SiFilLp = *TSC_TEstimn_Rte_Pim_SiFilLp();
  *TSC_TEstimn_Rte_Pim_SiFilLp() = SiFilLp;

  TEstimnAmbPwrMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAmbPwrMplr_Val();
  TEstimnAmbTSca_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAmbTSca_Val();
  TEstimnAssiMechAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val();
  TEstimnAssiMechAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbMplr_Val();
  TEstimnAssiMechCorrLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechCorrLim_Val();
  TEstimnAssiMechDampgSca_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechDampgSca_Val();
  TEstimnAssiMechDftT_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechDftT_Val();
  TEstimnAssiMechLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val();
  TEstimnAssiMechLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val();
  TEstimnAssiMechLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val();
  TEstimnAssiMechSlew_Val_data = TSC_TEstimn_Rte_Prm_TEstimnAssiMechSlew_Val();
  TEstimnCorrnTAssiMech_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTAssiMech_Val();
  TEstimnCorrnTCu_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTCu_Val();
  TEstimnCorrnTMag_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTMag_Val();
  TEstimnCorrnTSi_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCorrnTSi_Val();
  TEstimnCuAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuAmbLpFilFrq_Val();
  TEstimnCuAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuAmbMplr_Val();
  TEstimnCuCorrnLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuCorrnLim_Val();
  TEstimnCuLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffA1_Val();
  TEstimnCuLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB0_Val();
  TEstimnCuLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB1_Val();
  TEstimnEngTSca_Val_data = TSC_TEstimn_Rte_Prm_TEstimnEngTSca_Val();
  TEstimnMagAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagAmbLpFilFrq_Val();
  TEstimnMagAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagAmbMplr_Val();
  TEstimnMagCorrnLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagCorrnLim_Val();
  TEstimnMagLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffA1_Val();
  TEstimnMagLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB0_Val();
  TEstimnMagLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB1_Val();
  TEstimnSiAmbLpFilFrq_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiAmbLpFilFrq_Val();
  TEstimnSiAmbMplr_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiAmbMplr_Val();
  TEstimnSiCorrnLim_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiCorrnLim_Val();
  TEstimnSiLLFilCoeffA1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffA1_Val();
  TEstimnSiLLFilCoeffB0_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB0_Val();
  TEstimnSiLLFilCoeffB1_Val_data = TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB1_Val();
  TEstimnWghtAvrgTDi_Logl_data = TSC_TEstimn_Rte_Prm_TEstimnWghtAvrgTDi_Logl();

  fct_status = TSC_TEstimn_Rte_Read_AmbT_Val(&Read_AmbT_Val);
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

  fct_status = TSC_TEstimn_Rte_Read_AmbTVld_Logl(&Read_AmbTVld_Logl);
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

  fct_status = TSC_TEstimn_Rte_Read_AssiMechTEstimnDi_Logl(&Read_AssiMechTEstimnDi_Logl);
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

  fct_status = TSC_TEstimn_Rte_Read_EcuTFild_Val(&Read_EcuTFild_Val);
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

  fct_status = TSC_TEstimn_Rte_Read_EngOilT_Val(&Read_EngOilT_Val);
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

  fct_status = TSC_TEstimn_Rte_Read_EngOilTVld_Logl(&Read_EngOilTVld_Logl);
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

  fct_status = TSC_TEstimn_Rte_Read_HwVel_Val(&Read_HwVel_Val);
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

  fct_status = TSC_TEstimn_Rte_Read_MotCurrPeakEstimd_Val(&Read_MotCurrPeakEstimd_Val);
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

  fct_status = TSC_TEstimn_Rte_Write_AssiMechT_Val(Rte_InitValue_AssiMechT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TEstimn_Rte_Write_MotFetT_Val(Rte_InitValue_MotFetT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TEstimn_Rte_Write_MotMagT_Val(Rte_InitValue_MotMagT_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TEstimn_Rte_Write_MotWidgT_Val(Rte_InitValue_MotWidgT_Val);
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


#define TEstimn_STOP_SEC_CODE
#include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
