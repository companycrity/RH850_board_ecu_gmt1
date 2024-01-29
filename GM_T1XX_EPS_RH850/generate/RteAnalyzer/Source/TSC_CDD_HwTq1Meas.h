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
 *          File:  TSC_CDD_HwTq1Meas.h
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
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Read_HwTq1Polarity_Val(sint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_HwTq1_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_HwTq1Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_HwTq1RollgCntr_Val(uint8 data);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_RackLimrCcwEotSig1_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_RackLimrCwEotSig1_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_RackLimrEotSig1Avl_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper(void);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Service interfaces */
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_HwTq1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_HwTq1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_HwTq1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
uint16  TSC_CDD_HwTq1Meas_Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val(void);
uint16  TSC_CDD_HwTq1Meas_Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val(void);

/** SW-C local Calibration Parameters */
HwTqOffsRec1 * TSC_CDD_HwTq1Meas_Rte_CData_HwTq1OffsDft(void);

/** Per Instance Memories */
float32 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1MeasPrevHwTq1(void);
float32 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrCcwEot1(void);
float32 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrCwEot1(void);
uint32 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1MsgMissRxCnt(void);
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1ComStsErrCntr(void);
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1IntSnsrErrCntr(void);
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1MeasPrevRollgCntr(void);
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Data0(void);
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Data1(void);
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Data2(void);
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Avl(void);
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Id2DataReadCmpl(void);
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Id3DataReadCmpl(void);
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Id4DataReadCmpl(void);
HwTqOffsRec1 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1Offs(void);



