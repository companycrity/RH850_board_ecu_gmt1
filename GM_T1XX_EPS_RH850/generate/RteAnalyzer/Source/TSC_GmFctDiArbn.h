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
 *          File:  TSC_GmFctDiArbn.h
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
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_ApaEna_Logl(boolean *data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_EscEna_Logl(boolean *data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwAgEotCcw_Val(float32 *data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwAgEotCw_Val(float32 *data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_LkaEna_Logl(boolean *data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Read_LoaSt_Val(LoaSt1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_ApaEnaArbn_Logl(boolean data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_EscEnaArbn_Logl(boolean data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_GmFctDiSts_Val(GmFctDiArbnSts1 data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_InertiaCmpDecelGainDi_Logl(boolean data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_LkaEnaArbn_Logl(boolean data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_PullCmpActvDi_Logl(boolean data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_TunSetRtDi_Logl(boolean data);
Std_ReturnType TSC_GmFctDiArbn_Rte_Write_WhlImbRejctnDi_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmFctDiArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmFctDiArbn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_GmFctDiArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);

/** Explicit inter-runnable variables */
boolean TSC_GmFctDiArbn_Rte_IrvRead_GmFctDiArbnPer1_FctDiReq(void);
uint32 TSC_GmFctDiArbn_Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi(void);
void TSC_GmFctDiArbn_Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(boolean);
void TSC_GmFctDiArbn_Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(uint32);

/** Calibration Component Calibration Parameters */
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotHwAgThd_Val(void);
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotTi_Val(void);
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val(void);
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val(void);
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrTi_Val(void);
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnSrvTi_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi(void);
uint32 *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi(void);
uint32 *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi(void);
boolean *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad(void);
boolean *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad(void);
boolean *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch(void);
boolean *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng(void);
boolean *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng(void);
boolean *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng(void);



