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
 *          File:  TSC_HwAg1Meas.h
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
Std_ReturnType TSC_HwAg1Meas_Rte_Read_HwAg1Polarity_Val(sint8 *data);
Std_ReturnType TSC_HwAg1Meas_Rte_Read_HwAg1Polarity_Val(sint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1_Val(float32 data);
Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1RollgCntr_Val(uint8 data);
Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1_Val(float32 data);
Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1RollgCntr_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_IoHwAb_SetFctPrphlHwAg1_Oper(void);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Service interfaces */
Std_ReturnType TSC_HwAg1Meas_Rte_Call_HwAg1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_HwAg1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_HwAg1Meas_Rte_Call_HwAg1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Explicit inter-runnable variables */
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(uint16);
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(uint8);
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr0Raw(uint16);
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr0TestOk(uint8);
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(uint16);
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(uint8);
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw(void);
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk(void);
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw(void);
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk(void);
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer4_HwAg1Snsr1Raw(uint16);
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer4_HwAg1Snsr1TestOk(uint8);
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr0Raw(void);
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr0TestOk(void);
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr1Raw(void);
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr1TestOk(void);

/** Calibration Component Calibration Parameters */
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val(void);
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val(void);
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val(void);
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val(void);
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val(void);
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val(void);
uint8  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasVrnrErrThd_Val(void);
Ary1D_u8_22 * TSC_HwAg1Meas_Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D(void);
Ary1D_u8_22 * TSC_HwAg1Meas_Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D(void);
Ary1D_s16_22 * TSC_HwAg1Meas_Rte_Prm_HwAg1MeasStep_Ary1D(void);

/** SW-C local Calibration Parameters */
HwAgOffsRec1 * TSC_HwAg1Meas_Rte_CData_HwAg1OffsDft(void);

/** Per Instance Memories */
float32 *TSC_HwAg1Meas_Rte_Pim_HwAg1PrevHwAg1(void);
float32 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1(void);
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0Abs(void);
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0Rel(void);
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1Abs(void);
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1Rel(void);
uint32 *TSC_HwAg1Meas_Rte_Pim_HwAg1RawDataAvlStrtTi(void);
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0CS(void);
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0FRXD(void);
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1CS(void);
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1FRXD(void);
uint16 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr0Raw(void);
uint16 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr1Raw(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1PrevRollCnt(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1PrevStepSeqNr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0ComStsErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0IdErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0IntSnsrErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0NoMsgErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1ComStsErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1IdErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1IntSnsrErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1NoMsgErrCntr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1SnsrTrigNr(void);
SigQlfr1 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Qlfr(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr0TestOk(void);
uint8 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr1TestOk(void);
boolean *TSC_HwAg1Meas_Rte_Pim_HwAg1InitStepSeqNrCmpl(void);
HwAgOffsRec1 *TSC_HwAg1Meas_Rte_Pim_HwAg1Offs(void);



