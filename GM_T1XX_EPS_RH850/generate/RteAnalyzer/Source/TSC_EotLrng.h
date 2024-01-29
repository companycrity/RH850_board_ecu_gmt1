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
 *          File:  TSC_EotLrng.h
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
Std_ReturnType TSC_EotLrng_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgAuthy_Val(float32 *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgDiDiagSts_Logl(boolean *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig0Avl_Logl(boolean *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig0Ccw_Val(float32 *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig0Cw_Val(float32 *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig1Avl_Logl(boolean *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig1Ccw_Val(float32 *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig1Cw_Val(float32 *data);
Std_ReturnType TSC_EotLrng_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_EotLrng_Rte_Read_MotVelCrf_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgCcwDetd_Logl(boolean data);
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgCwDetd_Logl(boolean data);
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgEotCcw_Val(float32 data);
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgEotCw_Val(float32 data);
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgCcwDetd_Logl(boolean data);
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgCwDetd_Logl(boolean data);
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgEotCcw_Val(float32 data);
Std_ReturnType TSC_EotLrng_Rte_Write_HwAgEotCw_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_EotLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Service interfaces */
Std_ReturnType TSC_EotLrng_Rte_Call_EotNvmData_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_EotNvmData_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_EotNvmData_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_EotNvmData_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_EotLrng_Rte_Prm_EotLrngAuthyStrtLrn_Val(void);
float32  TSC_EotLrng_Rte_Prm_EotLrngHwAgOverTrvlEntr_Val(void);
float32  TSC_EotLrng_Rte_Prm_EotLrngHwAgOverTrvlExit_Val(void);
float32  TSC_EotLrng_Rte_Prm_EotLrngHwTqEotLrn_Val(void);
float32  TSC_EotLrng_Rte_Prm_EotLrngMotVelEotLrn_Val(void);
float32  TSC_EotLrng_Rte_Prm_EotLrngRackTrvlMax_Val(void);
float32  TSC_EotLrng_Rte_Prm_EotLrngRackTrvlMin_Val(void);
float32  TSC_EotLrng_Rte_Prm_EotLrngRstAuthyMin_Val(void);
uint16  TSC_EotLrng_Rte_Prm_EotLrngEotLrnTmr_Val(void);
uint8  TSC_EotLrng_Rte_Prm_EotLrngHwAgOverTrvlCnt_Val(void);
boolean  TSC_EotLrng_Rte_Prm_EotProtnRackTrvlLimrEna_Logl(void);

/** SW-C local Calibration Parameters */
EotNvmDataRec1 * TSC_EotLrng_Rte_CData_EotNvmDataDft(void);

/** Per Instance Memories */
float32 *TSC_EotLrng_Rte_Pim_PrevCcwEot(void);
float32 *TSC_EotLrng_Rte_Pim_PrevCwEot(void);
uint32 *TSC_EotLrng_Rte_Pim_CcwEotRefTmr(void);
uint32 *TSC_EotLrng_Rte_Pim_CwEotRefTmr(void);
boolean *TSC_EotLrng_Rte_Pim_HwAgOverTrvlCntrDi(void);
boolean *TSC_EotLrng_Rte_Pim_RstLimReq(void);
EotNvmDataRec1 *TSC_EotLrng_Rte_Pim_EotNvmData(void);
MaxHwAgCwAndCcwRec2 *TSC_EotLrng_Rte_Pim_MaxHwAgCwAndCcw(void);



