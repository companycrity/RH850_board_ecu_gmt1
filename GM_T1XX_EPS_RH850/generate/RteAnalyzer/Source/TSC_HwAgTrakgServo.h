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
 *          File:  TSC_HwAgTrakgServo.h
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
Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwAgTrakgServoCmd_Val(float32 *data);
Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwAgTrakgServoEna_Logl(boolean *data);
Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAgTrakgServo_Rte_Write_MotTqServoCmd_Val(float32 data);

/** Calibration Component Calibration Parameters */
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoEnaRate_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoExecRate_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxRamp_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMinRamp_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPidLim_Val(void);
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoRampCmpl_Val(void);
Ary1D_u11p5_13 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(void);
Ary2D_u4p12_3_13 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(void);
Ary1D_u0p16_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D(void);
Ary1D_u4p12_6 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateX_Ary1D(void);
Ary1D_u7p9_6 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateY_Ary1D(void);
Ary1D_u10p6_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D(void);
Ary1D_u2p14_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D(void);
Ary1D_u10p6_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(void);
Ary1D_u8p8_4 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D(void);
Ary1D_u4p12_4 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D(void);
Ary1D_u12p4_7 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(void);
Ary2D_u10p6_3_7 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(void);
Ary1D_u1p15_10 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngX_Ary1D(void);
Ary1D_u1p15_10 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngY_Ary1D(void);
Ary1D_u9p7_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_HwAgTrakgServo_Rte_Pim_HwAgTarRateLim(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevDftlErr(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevHwAgTar(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevIntglErr(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevSmotng(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoDftlTerm(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoHwAgTarFild(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoIntglTerm(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPidCmd(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPropTerm(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRtnScaFac(void);
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoSmotngEna(void);
boolean *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRampCmpl(void);
FilLpRec1 *TSC_HwAgTrakgServo_Rte_Pim_DftlTermLpFil(void);
FilLpRec1 *TSC_HwAgTrakgServo_Rte_Pim_HwAgLpFil(void);
FilLpRec1 *TSC_HwAgTrakgServo_Rte_Pim_HwTqLpFil(void);



