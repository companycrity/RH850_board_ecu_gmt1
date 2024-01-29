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
 *          File:  TSC_WhlImbRejctn.h
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
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_SysSt_Val(SysSt1 *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_VehSpdVld_Logl(boolean *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlFrqVld_Logl(boolean *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlImbRejctnCustEna_Logl(boolean *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlImbRejctnDi_Logl(boolean *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlLeFrq_Val(float32 *data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlRiFrq_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_WhlImbRejctn_Rte_Write_WhlImbRejctnActv_Logl(boolean data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Write_WhlImbRejctnAmp_Val(float32 data);
Std_ReturnType TSC_WhlImbRejctn_Rte_Write_WhlImbRejctnCmd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Service interfaces */
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_CmpPeakData_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_CmpPeakData_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Explicit inter-runnable variables */
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate(float32);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate(float32);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt(boolean);
float32 TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate(void);
float32 TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate(void);
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt(void);
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc(void);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp(float32);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt(boolean);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt(boolean);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt(boolean);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt(boolean);
float32 TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_CmdAmp(void);
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt(void);
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt(void);
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt(void);
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt(void);
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc(boolean);

/** Calibration Component Calibration Parameters */
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnAdpvFac_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnAutScaTar_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendLpFil_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendThTq_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendTiSec_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgn_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnScaCncl_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnUgrPoleMgn_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnVehSpdEna_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val(void);
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val(void);
u16p0  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcTout_Val(void);
uint16  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxDurn_Val(void);
u16p0  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnRampDwnTi_Val(void);
u16p0  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val(void);
boolean  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnAutScaEna_Logl(void);
boolean  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFctEna_Logl(void);
boolean  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl(void);
Ary1D_u6p10_6 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D(void);
Ary1D_u1p15_6 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D(void);
Ary1D_u7p9_3 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D(void);
Ary1D_s8p7_3 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D(void);

/** SW-C local Calibration Parameters */
float32  TSC_WhlImbRejctn_Rte_CData_LePeakPrevDft(void);
float32  TSC_WhlImbRejctn_Rte_CData_MaxCompPercDft(void);
float32  TSC_WhlImbRejctn_Rte_CData_RiPeakPrevDft(void);
uint32  TSC_WhlImbRejctn_Rte_CData_ActvCmpBand1Dft(void);
uint32  TSC_WhlImbRejctn_Rte_CData_ActvCmpBand2Dft(void);
uint32  TSC_WhlImbRejctn_Rte_CData_ActvCmpBand3Dft(void);

/** Per Instance Memories */
float32 *TSC_WhlImbRejctn_Rte_Pim_EnaSlewPerLoop(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcUgr1(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcUgr2(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_LeCurrMgnSlewPerLoop(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil1Coeff1(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil1Coeff2(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil2Coeff1(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil2Coeff2(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_PrevFlt(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_PrevHwTq(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_RiCurrMgnSlewPerLoop(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_ScaLe(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_ScaRi(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrLe1(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrLe2(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrRi1(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrRi2(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnCnclTqOutp(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnCurrMgnLe(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnCurrMgnRi(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnFildWhlSpdLe(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnFildWhlSpdRi(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnLMSqdOutLe(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnLMSqdOutRi(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnScaLe(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnScaRi(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_DcTrendRefTiEnaLrng(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_DcTrendRefTiEnaLrngTmr1(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_DcTrendRefTiEnaLrngTmr2(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcRefTiEnaLrng(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcRefTiEnaLrngTiOut(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_MaxMgnRefTiEnaLrng(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng(void);
uint32 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendFltFaild(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendFltRst(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendLrngEnaPrev(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendLrngEnaPrevTmr1(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendLrngEnaPrevTmr2(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_DistbnMagEnadPrev(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcFltFaild(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcFltRst(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcLrngEnaPrev(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcLrngEnaPrevTiOut(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_MaxMgnFltFaild(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_MaxMgnFltRst(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_MaxMgnLrngEnaPrev(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_PrevSts(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_RampNo(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_RampYes(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrFltFaild(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrFltRst(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev(void);
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_LeStDlyUpd(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_LeStVariUpd(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_RiStDlyUpd(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_RiStVariUpd(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_StordValLe(void);
float32 *TSC_WhlImbRejctn_Rte_Pim_StordValRi(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_BlndCmdMgnLp1Fil(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_BlndCmdMgnLp2Fil(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_CmdMgnLp1Fil(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_CmdMgnLp2Fil(void);
WhlImbRejctnCmpPeakRec1 *TSC_WhlImbRejctn_Rte_Pim_CmpPeakData(void);
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_DcTrendFltRcvry(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_DcTrendLpFil(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_DistbnMgnLeLpFil(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_DistbnMgnRiLpFil(void);
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcFltRcvry(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcLpFil(void);
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_MaxMgnFltRcvry(void);
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnFltRcvry(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdLeLpFil(void);
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdRiLpFil(void);



