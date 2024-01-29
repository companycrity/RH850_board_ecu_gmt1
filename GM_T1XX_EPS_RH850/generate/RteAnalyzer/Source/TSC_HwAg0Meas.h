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
 *          File:  TSC_HwAg0Meas.h
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
Std_ReturnType TSC_HwAg0Meas_Rte_Read_HwAg0Polarity_Val(sint8 *data);
Std_ReturnType TSC_HwAg0Meas_Rte_Read_HwAg0Polarity_Val(sint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0_Val(float32 data);
Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0RollgCntr_Val(uint8 data);
Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0_Val(float32 data);
Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0RollgCntr_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_IoHwAb_SetFctPrphlHwAg0_Oper(void);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Service interfaces */
Std_ReturnType TSC_HwAg0Meas_Rte_Call_HwAg0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_HwAg0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_HwAg0Meas_Rte_Call_HwAg0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Explicit inter-runnable variables */
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0Raw(uint16);
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0TestOk(uint8);
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0Raw(uint16);
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0TestOk(uint8);
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1Raw(uint16);
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1TestOk(uint8);
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0Raw(void);
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0TestOk(void);
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1Raw(void);
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1TestOk(void);
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1Raw(uint16);
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1TestOk(uint8);
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0Raw(void);
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0TestOk(void);
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1Raw(void);
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1TestOk(void);

/** Calibration Component Calibration Parameters */
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0IfFltFailStep_Val(void);
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0IfFltPassStep_Val(void);
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val(void);
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val(void);
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val(void);
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val(void);
uint8  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasVrnrErrThd_Val(void);
Ary1D_u8_22 * TSC_HwAg0Meas_Rte_Prm_HwAg0MeasSnsr0Rev_Ary1D(void);
Ary1D_u8_22 * TSC_HwAg0Meas_Rte_Prm_HwAg0MeasSnsr1Rev_Ary1D(void);
Ary1D_s16_22 * TSC_HwAg0Meas_Rte_Prm_HwAg0MeasStep_Ary1D(void);

/** SW-C local Calibration Parameters */
HwAgOffsRec1 * TSC_HwAg0Meas_Rte_CData_HwAg0OffsDft(void);

/** Per Instance Memories */
float32 *TSC_HwAg0Meas_Rte_Pim_HwAg0PrevHwAg0(void);
float32 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0(void);
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0Abs(void);
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0Rel(void);
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1Abs(void);
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1Rel(void);
uint32 *TSC_HwAg0Meas_Rte_Pim_HwAg0RawDataAvlStrtTi(void);
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0CS(void);
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0FRXD(void);
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1CS(void);
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1FRXD(void);
uint16 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr0Raw(void);
uint16 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr1Raw(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0PrevRollCnt(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0PrevStepSeqNr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0ComStsErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0IdErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0IntSnsrErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0NoMsgErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1ComStsErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1IdErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1IntSnsrErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1NoMsgErrCntr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0SnsrTrigNr(void);
SigQlfr1 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Qlfr(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr0TestOk(void);
uint8 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr1TestOk(void);
boolean *TSC_HwAg0Meas_Rte_Pim_HwAg0InitStepSeqNrCmpl(void);
HwAgOffsRec1 *TSC_HwAg0Meas_Rte_Pim_HwAg0Offs(void);



