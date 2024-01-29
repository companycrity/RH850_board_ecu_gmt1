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
 *          File:  TSC_TqLoa.h
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
Std_ReturnType TSC_TqLoa_Rte_Read_MotAgLoaMtgtnEna_Logl(boolean *data);
Std_ReturnType TSC_TqLoa_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_TqLoa_Rte_Read_PinionAg_Val(float32 *data);
Std_ReturnType TSC_TqLoa_Rte_Read_PinionAgConf_Val(float32 *data);
Std_ReturnType TSC_TqLoa_Rte_Read_VehLatA_Val(float32 *data);
Std_ReturnType TSC_TqLoa_Rte_Read_VehLatAVld_Logl(boolean *data);
Std_ReturnType TSC_TqLoa_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_TqLoa_Rte_Read_VehSpdVld_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_TqLoa_Rte_Write_TqLoaAvl_Logl(boolean data);
Std_ReturnType TSC_TqLoa_Rte_Write_TqLoaCmd_Val(float32 data);

/** Calibration Component Calibration Parameters */
float32  TSC_TqLoa_Rte_Prm_TqLoaDrvrTqNom_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaMotTqCmdLim_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelMgnThd_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaTqCmdMgnThd_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaVehSteerRat_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaVehUnderSteerGrdt_Val(void);
float32  TSC_TqLoa_Rte_Prm_TqLoaVehWhlBas_Val(void);
Ary1D_u4p12_8 * TSC_TqLoa_Rte_Prm_TqLoaTqCmdLimY_Ary1D(void);
Ary1D_u2p14_4 * TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(void);
Ary2D_u1p15_8_4 * TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(void);
Ary1D_u4p12_8 * TSC_TqLoa_Rte_Prm_TqLoaVehLatAGainY_Ary1D(void);
Ary1D_u10p6_5 * TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacX_Ary1D(void);
Ary1D_u1p15_5 * TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacY_Ary1D(void);
Ary1D_u10p6_8 * TSC_TqLoa_Rte_Prm_TqLoaVehSpdX_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_TqLoa_Rte_Pim_MotTqCmdPrev(void);
float32 *TSC_TqLoa_Rte_Pim_MotVelAndTqBasdScaFacPrev(void);
float32 *TSC_TqLoa_Rte_Pim_VehLatADifScaFacPrev(void);
float32 *TSC_TqLoa_Rte_Pim_dTqLoaMotTqCmdPreScag(void);
float32 *TSC_TqLoa_Rte_Pim_dTqLoaMotVelAndTqBasdScaFac(void);
float32 *TSC_TqLoa_Rte_Pim_dTqLoaScaFacFinal(void);
float32 *TSC_TqLoa_Rte_Pim_dTqLoaVehLatADifScaFac(void);
float32 *TSC_TqLoa_Rte_Pim_dTqLoaVehLatAEstimn(void);
float32 *TSC_TqLoa_Rte_Pim_dTqLoaVehSpdBasdScaFac(void);
FilLpRec1 *TSC_TqLoa_Rte_Pim_VehLatAEstimnFil(void);



