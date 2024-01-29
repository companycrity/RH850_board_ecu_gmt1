/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_MotRefMdl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_MotRefMdl_Rte_Read_BrdgVltg_Val(float32 *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_CurrMeasLoaMtgtnEna_Logl(boolean *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_MotBackEmfConEstimd_Val(float32 *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_MotInduDaxEstimd_Val(float32 *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_MotInduQaxEstimd_Val(float32 *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_MotQuad_Val(MotQuad1 *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_MotREstimd_Val(float32 *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_MotTqCmdMrfScad_Val(float32 *data);
Std_ReturnType TSC_MotRefMdl_Rte_Read_MotVelMrf_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotCurrAg_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotCurrDaxCmd_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotCurrDaxMax_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotCurrQaxCmd_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotReacncDax_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotReacncQax_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotVltgDaxFf_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotVltgDaxFfStat_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotVltgQaxFf_Val(float32 data);
Std_ReturnType TSC_MotRefMdl_Rte_Write_MotVltgQaxFfStat_Val(float32 data);

/** Calibration Component Calibration Parameters */
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostGain_Val(void);
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrItrnTolr_Val(void);
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void);
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val(void);
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlMotVelLpFilFrq_Val(void);
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val(void);
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlTqItrnTolr_Val(void);
float32  TSC_MotRefMdl_Rte_Prm_MotRefMdlVltgOverRThdSca_Val(void);
uint8  TSC_MotRefMdl_Rte_Prm_MotRefMdlMinCurrItrnLim_Val(void);
uint8  TSC_MotRefMdl_Rte_Prm_MotRefMdlRefLocnItrnLim_Val(void);
uint8  TSC_MotRefMdl_Rte_Prm_MotRefMdlTqItrnLim_Val(void);
uint8  TSC_MotRefMdl_Rte_Prm_SysGlbPrmMotPoleCnt_Val(void);
boolean  TSC_MotRefMdl_Rte_Prm_MotRefMdlFbCtrlDi_Logl(void);
boolean  TSC_MotRefMdl_Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl(void);
Ary1D_u4p12_11 * TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D(void);
Ary1D_u1p15_11 * TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D(void);
Ary1D_f32_8 * TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D(void);
Ary1D_u11p5_10 * TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D(void);
Ary1D_u3p13_10 * TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D(void);
Ary1D_u11p5_10 * TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D(void);
Ary1D_u3p13_10 * TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_MotRefMdl_Rte_Pim_MotCurrDaxCmdPrev(void);
float32 *TSC_MotRefMdl_Rte_Pim_MotCurrQaxCmdPrev(void);
float32 *TSC_MotRefMdl_Rte_Pim_VltgDaxFfTermPrev(void);
float32 *TSC_MotRefMdl_Rte_Pim_VltgQaxFfTermPrev(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxAtPeakTq(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxMin(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrQaxMin(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrSqdMin(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotCurrDaxBoost(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotTqCmdLimd(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVelFildFf(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDyn(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfStat(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDyn(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfStat(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTq(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPhaAdvAtPeakTq(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncDaxOverR(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncQaxOverR(void);
float32 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlRelncTqCoeff(void);
uint8 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMinCurrNrItrn(void);
uint8 *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTqNrItrn(void);
float32 *TSC_MotRefMdl_Rte_Pim_CosDelta(void);
float32 *TSC_MotRefMdl_Rte_Pim_SinDelta(void);
FilLpRec1 *TSC_MotRefMdl_Rte_Pim_MotVelLpFil(void);



