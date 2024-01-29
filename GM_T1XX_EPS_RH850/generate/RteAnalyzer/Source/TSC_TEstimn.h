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
 *          File:  TSC_TEstimn.h
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
Std_ReturnType TSC_TEstimn_Rte_Read_AmbT_Val(float32 *data);
Std_ReturnType TSC_TEstimn_Rte_Read_AmbTVld_Logl(boolean *data);
Std_ReturnType TSC_TEstimn_Rte_Read_EcuTFild_Val(float32 *data);
Std_ReturnType TSC_TEstimn_Rte_Read_EngOilT_Val(float32 *data);
Std_ReturnType TSC_TEstimn_Rte_Read_EngOilTVld_Logl(boolean *data);
Std_ReturnType TSC_TEstimn_Rte_Read_AmbT_Val(float32 *data);
Std_ReturnType TSC_TEstimn_Rte_Read_AmbTVld_Logl(boolean *data);
Std_ReturnType TSC_TEstimn_Rte_Read_AssiMechTEstimnDi_Logl(boolean *data);
Std_ReturnType TSC_TEstimn_Rte_Read_EcuTFild_Val(float32 *data);
Std_ReturnType TSC_TEstimn_Rte_Read_EngOilT_Val(float32 *data);
Std_ReturnType TSC_TEstimn_Rte_Read_EngOilTVld_Logl(boolean *data);
Std_ReturnType TSC_TEstimn_Rte_Read_HwVel_Val(float32 *data);
Std_ReturnType TSC_TEstimn_Rte_Read_MotCurrPeakEstimd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_TEstimn_Rte_Write_AssiMechT_Val(float32 data);
Std_ReturnType TSC_TEstimn_Rte_Write_MotFetT_Val(float32 data);
Std_ReturnType TSC_TEstimn_Rte_Write_MotMagT_Val(float32 data);
Std_ReturnType TSC_TEstimn_Rte_Write_MotWidgT_Val(float32 data);
Std_ReturnType TSC_TEstimn_Rte_Write_AssiMechT_Val(float32 data);
Std_ReturnType TSC_TEstimn_Rte_Write_MotFetT_Val(float32 data);
Std_ReturnType TSC_TEstimn_Rte_Write_MotMagT_Val(float32 data);
Std_ReturnType TSC_TEstimn_Rte_Write_MotWidgT_Val(float32 data);

/** Calibration Component Calibration Parameters */
float32  TSC_TEstimn_Rte_Prm_TEstimnAmbPwrMplr_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAmbTSca_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbMplr_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechCorrLim_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechDampgSca_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechDftT_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechSlew_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTAssiMech_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTCu_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTMag_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTSi_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCuAmbLpFilFrq_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCuAmbMplr_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCuCorrnLim_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffA1_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB0_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB1_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnEngTSca_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnMagAmbLpFilFrq_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnMagAmbMplr_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnMagCorrnLim_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffA1_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB0_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB1_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnSiAmbLpFilFrq_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnSiAmbMplr_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnSiCorrnLim_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffA1_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB0_Val(void);
float32  TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB1_Val(void);
boolean  TSC_TEstimn_Rte_Prm_TEstimnWghtAvrgTDi_Logl(void);

/** Per Instance Memories */
float32 *TSC_TEstimn_Rte_Pim_AssiMechTEstimnPrev(void);
float32 *TSC_TEstimn_Rte_Pim_AssiMechTSlewLimPrev(void);
float32 *TSC_TEstimn_Rte_Pim_CuTEstimnPrev(void);
float32 *TSC_TEstimn_Rte_Pim_MagTEstimnPrev(void);
float32 *TSC_TEstimn_Rte_Pim_SiTEstimnPrev(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAmbPwr(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechCorrn(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechDampgSca(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechFil(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechLLFil(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnCuCorrn(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnCuLLFil(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnMagCorrn(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnMagLLFil(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnScadAmbT(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnScadEngT(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnSiCorrn(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnSiLLFilv(void);
float32 *TSC_TEstimn_Rte_Pim_dTEstimnWghtAvrgT(void);
boolean *TSC_TEstimn_Rte_Pim_AmbTVldPrev(void);
boolean *TSC_TEstimn_Rte_Pim_AssiMechTInitEna(void);
boolean *TSC_TEstimn_Rte_Pim_EngOilTVldPrev(void);
FilLpRec1 *TSC_TEstimn_Rte_Pim_AssiMechFilLp(void);
FilLpRec1 *TSC_TEstimn_Rte_Pim_CuFilLp(void);
FilLpRec1 *TSC_TEstimn_Rte_Pim_MagFilLp(void);
FilLpRec1 *TSC_TEstimn_Rte_Pim_SiFilLp(void);



