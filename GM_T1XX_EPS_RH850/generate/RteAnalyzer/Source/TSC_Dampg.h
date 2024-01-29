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
 *          File:  TSC_Dampg.h
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
Std_ReturnType TSC_Dampg_Rte_Read_AssiCmdBas_Val(float32 *data);
Std_ReturnType TSC_Dampg_Rte_Read_AssiMechT_Val(float32 *data);
Std_ReturnType TSC_Dampg_Rte_Read_DampgCmdBasDi_Logl(boolean *data);
Std_ReturnType TSC_Dampg_Rte_Read_DampgCmdOvrl_Val(float32 *data);
Std_ReturnType TSC_Dampg_Rte_Read_DampgCmdSca_Val(float32 *data);
Std_ReturnType TSC_Dampg_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_Dampg_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_Dampg_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_Dampg_Rte_Write_DampgCmdBas_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_Dampg_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff1_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff2_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff3_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff4_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgHydOutpLim_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgMotVelLpFilFrq_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgQuad13Mplr_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgQuad24Mplr_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgQuadHwTqBacklsh_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgQuadHwTqLpFilFrq_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgQuadMotVelBacklsh_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgQuadMotVelLpFilFrq_Val(void);
float32  TSC_Dampg_Rte_Prm_DampgQuadScaLpFilFrq_Val(void);
Ary1D_u8p8_2 * TSC_Dampg_Rte_Prm_DampgHwTqX_Ary1D(void);
Ary1D_u1p15_2 * TSC_Dampg_Rte_Prm_DampgHwTqY_Ary1D(void);
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydAssiLim_Ary1D(void);
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff1ScaY_Ary1D(void);
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff2ScaY_Ary1D(void);
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff3ScaY_Ary1D(void);
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff4ScaY_Ary1D(void);
Ary2D_u12p4_12_13 * TSC_Dampg_Rte_Prm_DampgMotVelX_Ary2D(void);
Ary2D_u5p11_12_13 * TSC_Dampg_Rte_Prm_DampgMotVelY_Ary2D(void);
Ary1D_s8p7_14 * TSC_Dampg_Rte_Prm_DampgTScaX_Ary1D(void);
Ary1D_u4p12_14 * TSC_Dampg_Rte_Prm_DampgTScaY_Ary1D(void);
Ary1D_u9p7_12 * TSC_Dampg_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_Dampg_Rte_Pim_PrevHwTqBacklshOutp(void);
float32 *TSC_Dampg_Rte_Pim_PrevHydOutpLim(void);
float32 *TSC_Dampg_Rte_Pim_PrevMotVelBacklshOutp(void);
float32 *TSC_Dampg_Rte_Pim_dDampgAssiMechTSca(void);
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff1Term(void);
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff2Term(void);
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff3Term(void);
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff4Term(void);
float32 *TSC_Dampg_Rte_Pim_dDampgHwTqSca(void);
float32 *TSC_Dampg_Rte_Pim_dDampgMotVelDampgCmd(void);
float32 *TSC_Dampg_Rte_Pim_dDampgQuadHwTqBacklsh(void);
float32 *TSC_Dampg_Rte_Pim_dDampgQuadMotVelBacklsh(void);
FilLpRec1 *TSC_Dampg_Rte_Pim_MotVelDampgLpFil(void);
FilLpRec1 *TSC_Dampg_Rte_Pim_QuadDampgHwTqLpFil(void);
FilLpRec1 *TSC_Dampg_Rte_Pim_QuadDampgMotVelLpFil(void);
FilLpRec1 *TSC_Dampg_Rte_Pim_QuadDampgScaLpFil(void);



