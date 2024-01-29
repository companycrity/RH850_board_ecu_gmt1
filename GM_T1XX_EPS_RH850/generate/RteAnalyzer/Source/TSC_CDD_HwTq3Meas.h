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
 *          File:  TSC_CDD_HwTq3Meas.h
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
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Read_HwTq3Polarity_Val(sint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Write_GearIdn2_Val(uint8 data);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Write_GearIdn2Vld_Logl(boolean data);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Write_HwTq3_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Write_HwTq3Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Write_HwTq3RollgCntr_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_IoHwAb_SetFctPrphlHwTq3_Oper(void);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Service interfaces */
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_HwTq3Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_HwTq3Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq3Meas_Rte_Call_HwTq3Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
uint16  TSC_CDD_HwTq3Meas_Rte_Prm_HwTq3MeasHwTq3PrtclFltFailStep_Val(void);
uint16  TSC_CDD_HwTq3Meas_Rte_Prm_HwTq3MeasHwTq3PrtclFltPassStep_Val(void);

/** SW-C local Calibration Parameters */
HwTqOffsRec1 * TSC_CDD_HwTq3Meas_Rte_CData_HwTq3OffsDft(void);

/** Per Instance Memories */
float32 *TSC_CDD_HwTq3Meas_Rte_Pim_HwTq3MeasPrevHwTq3(void);
uint32 *TSC_CDD_HwTq3Meas_Rte_Pim_HwTq3MsgMissRxCnt(void);
uint8 *TSC_CDD_HwTq3Meas_Rte_Pim_GearIdn2Data(void);
uint8 *TSC_CDD_HwTq3Meas_Rte_Pim_HwTq3ComStsErrCntr(void);
uint8 *TSC_CDD_HwTq3Meas_Rte_Pim_HwTq3IntSnsrErrCntr(void);
uint8 *TSC_CDD_HwTq3Meas_Rte_Pim_HwTq3MeasPrevRollgCntr(void);
boolean *TSC_CDD_HwTq3Meas_Rte_Pim_GearIdn2Avl(void);
HwTqOffsRec1 *TSC_CDD_HwTq3Meas_Rte_Pim_HwTq3Offs(void);



