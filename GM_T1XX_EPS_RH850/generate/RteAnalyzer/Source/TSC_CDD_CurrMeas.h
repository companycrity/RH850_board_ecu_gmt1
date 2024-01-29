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
 *          File:  TSC_CDD_CurrMeas.h
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
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_BrdgVltg_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyA_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyB_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyC_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyD_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyE_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyF_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotVelMrf_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_VehSpdVld_Logl(boolean *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyA_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyB_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyC_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyD_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyE_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_MotCurrAdcVlyF_Val(float32 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_Ntc5DErrCnt_Val(uint16 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_Ntc6DErrCnt_Val(uint16 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_StrtUpSt_Val(uint8 *data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Read_SysSt_Val(SysSt1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_CurrMeas_Rte_Write_MotCurrEolCalSt_Val(MotCurrEolCalSt2 data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Write_CurrMeasWrmIninTestCmpl_Logl(boolean data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Write_MotCurrQlfr1_Val(SigQlfr1 data);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Write_MotCurrQlfr2_Val(SigQlfr1 data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_CurrMeas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Service interfaces */
Std_ReturnType TSC_CDD_CurrMeas_Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_CurrMeas_Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolGainMax_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolGainMin_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolGainNumer_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolMaxMotVel_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolOffsMax_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolOffsMin_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val(void);
float32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val(void);
uint32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolFixdPwmPerd_Val(void);
uint32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val(void);
uint32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val(void);
uint32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val(void);
uint32  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasMotAgCompuDly_Val(void);
uint16  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolGainNrOfSample_Val(void);
uint16  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolOffsNrOfSample_Val(void);
uint16  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasNtc0x05DFailStep_Val(void);
uint16  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasNtc0x05DPassStep_Val(void);
uint16  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasNtc0x06DFailStep_Val(void);
uint16  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasNtc0x06DPassStep_Val(void);
uint8  TSC_CDD_CurrMeas_Rte_Prm_CurrMeasEolTranCntrThd_Val(void);
uint8  TSC_CDD_CurrMeas_Rte_Prm_SysGlbPrmMotPoleCnt_Val(void);

/** SW-C local Calibration Parameters */
CurrMeasEolGainCalRec1 * TSC_CDD_CurrMeas_Rte_CData_CurrMeasEolGainCalSetDft(void);
CurrMeasEolOffsCalRec1 * TSC_CDD_CurrMeas_Rte_CData_CurrMeasEolOffsCalSetDft(void);

/** Per Instance Memories */
float32 *TSC_CDD_CurrMeas_Rte_Pim_BrdgVltgSumPrev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_EolOffsHiBrdgVltg(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolGainA(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolGainB(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolGainC(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolGainD(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolGainE(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolGainF(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsDeltaA(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsDeltaB(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsDeltaC(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsDeltaD(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsDeltaE(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsDeltaF(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsHiAvrgA(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsHiAvrgB(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsHiAvrgC(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsHiAvrgD(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsHiAvrgE(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsHiAvrgF(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsLoAvrgA(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsLoAvrgB(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsLoAvrgC(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsLoAvrgD(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsLoAvrgE(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsLoAvrgF(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsZeroAvrgA(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsZeroAvrgB(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsZeroAvrgC(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsZeroAvrgD(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsZeroAvrgE(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrOffsZeroAvrgF(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrSumAPrev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrSumBPrev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrSumCPrev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrSumDPrev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrSumEPrev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrSumFPrev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_TempMotCurrAdcVlySum1Prev(void);
float32 *TSC_CDD_CurrMeas_Rte_Pim_TempMotCurrAdcVlySum2Prev(void);
uint16 *TSC_CDD_CurrMeas_Rte_Pim_GainEolAvrgCntrPrev(void);
uint16 *TSC_CDD_CurrMeas_Rte_Pim_MotCtrlNtc5DErrCntPrev(void);
uint16 *TSC_CDD_CurrMeas_Rte_Pim_MotCtrlNtc6DErrCntPrev(void);
uint16 *TSC_CDD_CurrMeas_Rte_Pim_Ntc5DErrCnt2MilliSecPrev(void);
uint16 *TSC_CDD_CurrMeas_Rte_Pim_Ntc6DErrCnt2MilliSecPrev(void);
uint16 *TSC_CDD_CurrMeas_Rte_Pim_OffsEolAvrgCntrPrev(void);
uint16 *TSC_CDD_CurrMeas_Rte_Pim_PhaOnTiErrCntPrev(void);
uint8 *TSC_CDD_CurrMeas_Rte_Pim_EolGainSts(void);
uint8 *TSC_CDD_CurrMeas_Rte_Pim_EolOffsSts(void);
uint8 *TSC_CDD_CurrMeas_Rte_Pim_EolTranCntrPrev(void);
MotCurrEolCalSt2 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolCalStPrev(void);
uint8 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrRollgCnt1Prev(void);
uint8 *TSC_CDD_CurrMeas_Rte_Pim_MotCurrRollgCnt2Prev(void);
boolean *TSC_CDD_CurrMeas_Rte_Pim_MotCurrEolOffsProcFlg(void);
boolean *TSC_CDD_CurrMeas_Rte_Pim_WrmIninTestCmplPrev(void);
CurrMeasEolGainCalRec1 *TSC_CDD_CurrMeas_Rte_Pim_CurrMeasEolGainCalSet(void);
CurrMeasEolOffsCalRec1 *TSC_CDD_CurrMeas_Rte_Pim_CurrMeasEolOffsCalSet(void);



