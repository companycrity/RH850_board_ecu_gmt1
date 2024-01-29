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
 *          File:  TSC_EcuTMeas.h
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
Std_ReturnType TSC_EcuTMeas_Rte_Read_EcuT_Val(float32 *data);
Std_ReturnType TSC_EcuTMeas_Rte_Read_DiagcStsLimdTPrfmnc_Logl(boolean *data);
Std_ReturnType TSC_EcuTMeas_Rte_Read_EcuT_Val(float32 *data);
Std_ReturnType TSC_EcuTMeas_Rte_Read_EcuTAdcFaild_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_EcuTMeas_Rte_Write_EcuTFild_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_EcuTMeas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_EcuTMeas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasDftT_Val(void);
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasFilTau_Val(void);
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasRngDiagcMax_Val(void);
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasRngDiagcMin_Val(void);
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasScag_Val(void);
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasScagOffs_Val(void);
uint16  TSC_EcuTMeas_Rte_Prm_EcuTMeasNtc0x045FailStep_Val(void);
uint16  TSC_EcuTMeas_Rte_Prm_EcuTMeasNtc0x045PassStep_Val(void);

/** Per Instance Memories */
FilLpRec1 *TSC_EcuTMeas_Rte_Pim_EcuTMeasFilStVarPrev(void);



