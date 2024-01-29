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
 *          File:  TSC_AssiSumLim.h
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
Std_ReturnType TSC_AssiSumLim_Rte_Read_AssiCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_DampgCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_EotActvCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_EotAssiSca_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_EotDampgCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_EotMotTqLim_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_HwTqLoaMtgtnEna_Logl(boolean *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_MotTqCmdLimDi_Logl(boolean *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_MotTqCmdOvrl_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_PinionCentrLrnCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_PinionCentrLrnEna_Logl(boolean *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_PullCmpCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_PwrLimrRednFac_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_RtnCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_StallMotTqLim_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_SysMotTqCmdSca_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_ThermMotTqLim_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_ThermRednFac_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_TqLoaCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_TqSteerMtgtnCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_VehSpdMotTqLim_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_WhlImbRejctnCmd_Val(float32 *data);
Std_ReturnType TSC_AssiSumLim_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_AssiSumLim_Rte_Write_MotTqCmd_Val(float32 data);
Std_ReturnType TSC_AssiSumLim_Rte_Write_MotTqCmdLimdPreStall_Val(float32 data);
Std_ReturnType TSC_AssiSumLim_Rte_Write_MotTqCmdLimrMin_Val(float32 data);
Std_ReturnType TSC_AssiSumLim_Rte_Write_MotTqCmdPreLim_Val(float32 data);
Std_ReturnType TSC_AssiSumLim_Rte_Write_SysProtnRednFac_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_AssiSumLim_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_AssiSumLim_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_AssiSumLim_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Explicit inter-runnable variables */
float32 TSC_AssiSumLim_Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd(void);
boolean TSC_AssiSumLim_Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna(void);
void TSC_AssiSumLim_Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(float32);
void TSC_AssiSumLim_Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(boolean);

/** Calibration Component Calibration Parameters */
float32  TSC_AssiSumLim_Rte_Prm_AssiSumLimPullCmpLim_Val(void);
uint16  TSC_AssiSumLim_Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val(void);
uint16  TSC_AssiSumLim_Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val(void);




