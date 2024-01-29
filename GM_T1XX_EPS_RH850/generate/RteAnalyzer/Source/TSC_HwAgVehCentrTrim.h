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
 *          File:  TSC_HwAgVehCentrTrim.h
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
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_EngRunActv_Logl(boolean *data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgCcwDetd_Logl(boolean *data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgCwDetd_Logl(boolean *data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgEotCcw_Val(float32 *data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgEotCw_Val(float32 *data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Write_HwAgTrimPrfmd_Logl(boolean data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Write_HwAgVehTrimOffs_Val(float32 data);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Write_HwAgTrimPrfmd_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Service interfaces */
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_HwAgTrimData_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_HwAgTrimData_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_HwAgTrimData_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_HwAgTrimData_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_HwAgVehCentrTrim_Rte_Prm_HwAgVehCentrTrimHwAgLim_Val(void);
float32  TSC_HwAgVehCentrTrim_Rte_Prm_HwAgVehCentrTrimVehSpdMaxThd_Val(void);

/** SW-C local Calibration Parameters */
HwAgSnsrTrimRec1 * TSC_HwAgVehCentrTrim_Rte_CData_HwAgTrimDataDft(void);

/** Per Instance Memories */
HwAgSnsrTrimRec1 *TSC_HwAgVehCentrTrim_Rte_Pim_HwAgTrimData(void);



