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
 *          File:  TSC_PwrDiscnct.h
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
Std_ReturnType TSC_PwrDiscnct_Rte_Read_BattVltg_Val(float32 *data);
Std_ReturnType TSC_PwrDiscnct_Rte_Read_BattVltgSwd1_Val(float32 *data);
Std_ReturnType TSC_PwrDiscnct_Rte_Read_BattVltgSwd2_Val(float32 *data);
Std_ReturnType TSC_PwrDiscnct_Rte_Read_StrtUpSt_Val(uint8 *data);
Std_ReturnType TSC_PwrDiscnct_Rte_Read_SysSt_Val(SysSt1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_PwrDiscnct_Rte_Write_PwrDiscnctATestCmpl_Logl(boolean data);
Std_ReturnType TSC_PwrDiscnct_Rte_Write_PwrDiscnctBTestCmpl_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_PwrDiscnct_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_PwrDiscnct_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
float32  TSC_PwrDiscnct_Rte_Prm_BattVltgSwdMax_Val(void);
float32  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctOpenThd_Val(void);
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x042FailStep_Val(void);
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x042PassStep_Val(void);
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x04AFailStep_Val(void);
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x04APassStep_Val(void);

/** Per Instance Memories */
float32 *TSC_PwrDiscnct_Rte_Pim_PwrDiscnctDeltaVltg1(void);
float32 *TSC_PwrDiscnct_Rte_Pim_PwrDiscnctDeltaVltg2(void);
boolean *TSC_PwrDiscnct_Rte_Pim_PwrDiscnctSeqATestCmplPrev(void);



