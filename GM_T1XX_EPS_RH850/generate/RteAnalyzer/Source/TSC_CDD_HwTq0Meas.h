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
 *          File:  TSC_CDD_HwTq0Meas.h
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
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Read_HwTq0Polarity_Val(sint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_HwTq0_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_HwTq0Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_HwTq0RollgCntr_Val(uint8 data);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_RackLimrCcwEotSig0_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_RackLimrCwEotSig0_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_RackLimrEotSig0Avl_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_IoHwAb_SetFctPrphlHwTq0_Oper(void);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Service interfaces */
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_HwTq0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_HwTq0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_HwTq0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
uint16  TSC_CDD_HwTq0Meas_Rte_Prm_HwTq0MeasHwTq0PrtclFltFailStep_Val(void);
uint16  TSC_CDD_HwTq0Meas_Rte_Prm_HwTq0MeasHwTq0PrtclFltPassStep_Val(void);

/** SW-C local Calibration Parameters */
HwTqOffsRec1 * TSC_CDD_HwTq0Meas_Rte_CData_HwTq0OffsDft(void);

/** Per Instance Memories */
float32 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0MeasPrevHwTq0(void);
float32 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrCcwEot0(void);
float32 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrCwEot0(void);
uint32 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0MsgMissRxCnt(void);
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0ComStsErrCntr(void);
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0IntSnsrErrCntr(void);
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0MeasPrevRollgCntr(void);
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Data0(void);
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Data1(void);
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Data2(void);
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Avl(void);
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Id2DataReadCmpl(void);
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Id3DataReadCmpl(void);
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Id4DataReadCmpl(void);
HwTqOffsRec1 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0Offs(void);



