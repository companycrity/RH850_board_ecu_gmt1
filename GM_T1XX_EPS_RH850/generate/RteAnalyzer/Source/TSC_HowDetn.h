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
 *          File:  TSC_HowDetn.h
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
Std_ReturnType TSC_HowDetn_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_HowDetn_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnEstimn_Val(float32 data);
Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnFlg_Logl(boolean data);
Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnEstimn_Val(float32 data);
Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnFlg_Logl(boolean data);
Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnSt_Val(sint8 data);

/** Client server interfaces */
Std_ReturnType TSC_HowDetn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_HowDetn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_HowDetn_Rte_Prm_HowDetnEstimLpFilFrq_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnMinVehSpd_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnOffThd_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnOffTi_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnPercOfPrevHowEstim_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnSlewRate_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnStLpFilFrq_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnTqFinalLpFilFrq_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnTqHpFilFrq_Val(void);
float32  TSC_HowDetn_Rte_Prm_HowDetnTqInitLpFilFrq_Val(void);
Ary1D_u9p7_9 * TSC_HowDetn_Rte_Prm_HowDetnHiFrqGainY_Ary1D(void);
Ary2D_u8p8_9_6 * TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateX_Ary2D(void);
Ary2D_s7p8_9_6 * TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateY_Ary2D(void);
Ary2D_u8p8_9_5 * TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateX_Ary2D(void);
Ary2D_s7p8_9_5 * TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateY_Ary2D(void);
Ary1D_u8p8_7 * TSC_HowDetn_Rte_Prm_HowDetnStThdX_Ary1D(void);
Ary1D_u9p7_9 * TSC_HowDetn_Rte_Prm_HowDetnVehSpd_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_HowDetn_Rte_Pim_PrevCalcdHowEstim(void);
float32 *TSC_HowDetn_Rte_Pim_PrevHowEstim(void);
float32 *TSC_HowDetn_Rte_Pim_dHowDetnAbsHiFrqTq(void);
float32 *TSC_HowDetn_Rte_Pim_dHowDetnAbsLoFrqTq(void);
uint32 *TSC_HowDetn_Rte_Pim_RefTiHowOff(void);
boolean *TSC_HowDetn_Rte_Pim_HowOffPrev(void);
FilLpRec1 *TSC_HowDetn_Rte_Pim_EstimLpFil(void);
FilLpRec1 *TSC_HowDetn_Rte_Pim_FinalLpFil(void);
FilLpRec1 *TSC_HowDetn_Rte_Pim_IniLpFil1(void);
FilLpRec1 *TSC_HowDetn_Rte_Pim_IniLpFil2(void);
FilLpRec1 *TSC_HowDetn_Rte_Pim_IniLpFil3(void);
FilLpRec1 *TSC_HowDetn_Rte_Pim_StLpFil(void);
FilHpRec1 *TSC_HowDetn_Rte_Pim_TqHpFil(void);



