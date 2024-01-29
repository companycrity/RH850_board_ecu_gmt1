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
 *          File:  TSC_Rtn.h
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
Std_ReturnType TSC_Rtn_Rte_Read_AssiMechT_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_HwAgAuthySca_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_HwAgRtnOffs_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_HwVel_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdDi_Logl(boolean *data);
Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdDiagcDi_Logl(boolean *data);
Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdSca_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdScaServo_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_Rtn_Rte_Read_VehSpdVld_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_Rtn_Rte_Write_RtnCmd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_Rtn_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_Rtn_Rte_Prm_RtnHwAuthySlew_Val(void);
float32  TSC_Rtn_Rte_Prm_RtnOffsRng_Val(void);
float32  TSC_Rtn_Rte_Prm_RtnOffsSlew_Val(void);
Ary2D_u12p4_9_16 * TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(void);
Ary2D_u5p11_9_16 * TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(void);
Ary1D_u8p8_4 * TSC_Rtn_Rte_Prm_RtnHwAuthyScaX_Ary1D(void);
Ary1D_u9p7_4 * TSC_Rtn_Rte_Prm_RtnHwAuthyScaY_Ary1D(void);
Ary2D_u8p8_9_8 * TSC_Rtn_Rte_Prm_RtnScaTqX_Ary2D(void);
Ary2D_u8p8_9_8 * TSC_Rtn_Rte_Prm_RtnScaTqY_Ary2D(void);
Ary2D_u7p9_9_4 * TSC_Rtn_Rte_Prm_RtnScaVelX_Ary2D(void);
Ary2D_u8p8_9_4 * TSC_Rtn_Rte_Prm_RtnScaVelY_Ary2D(void);
Ary1D_s11p4_14 * TSC_Rtn_Rte_Prm_RtnTScaX_Ary1D(void);
Ary1D_u8p8_14 * TSC_Rtn_Rte_Prm_RtnTScaY_Ary1D(void);
Ary1D_u9p7_9 * TSC_Rtn_Rte_Prm_RtnVehSpdSeln_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_Rtn_Rte_Pim_PrevHwAgAuthy(void);
float32 *TSC_Rtn_Rte_Pim_PrevHwAgOffsLimd(void);
float32 *TSC_Rtn_Rte_Pim_dRtnAbsltHwAgOffsCalcd(void);
float32 *TSC_Rtn_Rte_Pim_dRtnAssiMechTRtnSca(void);
float32 *TSC_Rtn_Rte_Pim_dRtnBascRtn(void);
float32 *TSC_Rtn_Rte_Pim_dRtnHwAgAuthySca(void);
float32 *TSC_Rtn_Rte_Pim_dRtnHwAgRtnCmd(void);
float32 *TSC_Rtn_Rte_Pim_dRtnHwTqRtnSca(void);
float32 *TSC_Rtn_Rte_Pim_dRtnHwVelRtnSca(void);



