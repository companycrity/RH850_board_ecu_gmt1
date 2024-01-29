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
 *          File:  TSC_MotAg2Meas.h
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
Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2Cos_Val(float32 *data);
Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2CosAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2Sin_Val(float32 *data);
Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2SinAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAgMecl2Polarity_Val(sint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2Mecl_Val(u0p16 data);
Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2MeclQlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2MeclRollgCntr_Val(uint8 data);
Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2VltgSqd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_MotAg2Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_MotAg2Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_MotAg2Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Service interfaces */
Std_ReturnType TSC_MotAg2Meas_Rte_Call_MotAg2EolPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_MotAg2Meas_Rte_Call_MotAg2EolPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_MotAg2Meas_Rte_Prm_MotAg2MeasOffs_Val(void);

/** SW-C local Calibration Parameters */
MotAgMeasEolPrmRec1 * TSC_MotAg2Meas_Rte_CData_MotAg2EolPrmDft(void);

/** Per Instance Memories */
float32 *TSC_MotAg2Meas_Rte_Pim_MotAg2MeclPrev(void);
uint8 *TSC_MotAg2Meas_Rte_Pim_MotAg2MeclRollgCntrPrev(void);
MotAgMeasEolPrmRec1 *TSC_MotAg2Meas_Rte_Pim_MotAg2EolPrm(void);



