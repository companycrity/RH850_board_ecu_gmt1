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
 *          File:  TSC_AssiHiFrq.h
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
Std_ReturnType TSC_AssiHiFrq_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_AssiHiFrq_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_AssiHiFrq_Rte_Read_WhlImbRejctnAmp_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_AssiHiFrq_Rte_Write_AssiHiFrqCmd_Val(float32 data);

/** Calibration Component Calibration Parameters */
float32  TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrq_Val(void);
Ary2D_u3p13_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqGainY_Ary2D(void);
Ary1D_u7p9_12 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(void);
Ary2D_u5p11_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void);
Ary2D_u5p11_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqX_Ary2D(void);
Ary2D_u4p12_12_5 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void);
Ary2D_u1p15_12_5 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void);
Ary2D_u3p13_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(void);
Ary1D_u9p7_12 * TSC_AssiHiFrq_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGain(void);
float32 *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainBlnd(void);
float32 *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero(void);
FilHpRec1 *TSC_AssiHiFrq_Rte_Pim_HwTqHpFil(void);



