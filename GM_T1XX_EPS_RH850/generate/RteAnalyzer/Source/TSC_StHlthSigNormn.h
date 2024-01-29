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
 *          File:  TSC_StHlthSigNormn.h
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
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_CurrMotSumABC_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_CurrMotSumDEF_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_DutyCycThermProtnMaxOutp_Val(uint16 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_EcuTFild_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAgEotCcw_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAgEotCw_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAuthy_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwTqChACorrlnTraErr_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwTqChBCorrlnTraErr_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwTqIdptSig_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_LclRamEccSngBitCntrOutp_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MaxLrndFric_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAg2VltgSqd_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAgABErrTerm_Val(u0p16 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAgACErrTerm_Val(u0p16 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAgBCErrTerm_Val(u0p16 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrA_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrB_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrC_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrD_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrE_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrF_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_RackLimrEotSig0Avl_Logl(boolean *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_RackLimrEotSig1Avl_Logl(boolean *data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Read_WhlImbRejctnCmd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosABDifStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosACDifStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosBCDifStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CtrlrTRng_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CtrlrTStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CurrMotSumABCStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CurrMotSumDEFStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqIdptSigStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqSnsrAStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqSnsrBStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DutyCycStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_EotImpctStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_MotPosStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_OutpAssiStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaAStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaBStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaCStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaDStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaEStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaFStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_RamEccSngBitCorrnStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_VltgRng_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosABDifStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosACDifStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosBCDifStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CtrlrTRng_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CtrlrTStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CurrMotSumABCStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CurrMotSumDEFStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqIdptSigStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqSnsrAStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqSnsrBStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DutyCycStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_EotImpctStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_FricEstimnStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_MotPosStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_OutpAssiStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaAStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaBStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaCStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaDStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaEStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaFStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_RamEccSngBitCorrnStHlth_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_VltgRng_Val(uint8 data);
Std_ReturnType TSC_StHlthSigNormn_Rte_Write_WhlImbMaxCmpStHlth_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_StHlthSigNormn_Rte_Call_GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg);
Std_ReturnType TSC_StHlthSigNormn_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_StHlthSigNormn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Explicit inter-runnable variables */
void TSC_StHlthSigNormn_Rte_IrvWrite_StHlthSigNormnInit1_EolFric(float32);
float32 TSC_StHlthSigNormn_Rte_IrvRead_UpdRawSig_Oper_EolFric(void);

/** Calibration Component Calibration Parameters */
float32  TSC_StHlthSigNormn_Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_EcuTMeasRngDiagcMax_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_EcuTMeasRngDiagcMin_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_EotLrngAuthyStrtLrn_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnHiCtrlrT_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnLoCtrlrT_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMaxFricThd_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMotVelCal_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnValMinStHlthErr_Val(void);
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val(void);
uint32  TSC_StHlthSigNormn_Rte_Prm_MotDrvDiagcErrThd_Val(void);
uint16  TSC_StHlthSigNormn_Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val(void);
uint16  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val(void);
u0p16  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val(void);
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val(void);
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val(void);
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val(void);
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val(void);
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val(void);
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val(void);
uint8  TSC_StHlthSigNormn_Rte_Prm_SysGlbPrmMotPoleCnt_Val(void);

/** Per Instance Memories */
u0p16 *TSC_StHlthSigNormn_Rte_Pim_MotAgCorrlnErrThd(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_AbsltMotPosABDifStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_AbsltMotPosACDifStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_AbsltMotPosBCDifStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_CurrMotSumABCStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_CurrMotSumDEFStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_DigTqIdptSigStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_DigTqSnsrAStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_DigTqSnsrBStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_EcuTRngIgnCyc(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_EotImpctCntr(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_MotPosStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaAStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaBStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaCStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaDStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaEStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaFStHlthSts(void);
uint8 *TSC_StHlthSigNormn_Rte_Pim_VltgRngIgnCyc(void);
boolean *TSC_StHlthSigNormn_Rte_Pim_EntrEot(void);



