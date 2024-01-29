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
 *          File:  TSC_StHlthSigNormn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_StHlthSigNormn.h"
#include "TSC_StHlthSigNormn.h"











Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosABDifStHlth_Val(uint8 data)
{
  return Rte_Write_AbsltMotPosABDifStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosACDifStHlth_Val(uint8 data)
{
  return Rte_Write_AbsltMotPosACDifStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_AbsltMotPosBCDifStHlth_Val(uint8 data)
{
  return Rte_Write_AbsltMotPosBCDifStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CtrlrTRng_Val(uint8 data)
{
  return Rte_Write_CtrlrTRng_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CtrlrTStHlth_Val(uint8 data)
{
  return Rte_Write_CtrlrTStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CurrMotSumABCStHlth_Val(uint8 data)
{
  return Rte_Write_CurrMotSumABCStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_CurrMotSumDEFStHlth_Val(uint8 data)
{
  return Rte_Write_CurrMotSumDEFStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqIdptSigStHlth_Val(uint8 data)
{
  return Rte_Write_DigTqIdptSigStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqSnsrAStHlth_Val(uint8 data)
{
  return Rte_Write_DigTqSnsrAStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DigTqSnsrBStHlth_Val(uint8 data)
{
  return Rte_Write_DigTqSnsrBStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_DutyCycStHlth_Val(uint8 data)
{
  return Rte_Write_DutyCycStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_EotImpctStHlth_Val(uint8 data)
{
  return Rte_Write_EotImpctStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_MotPosStHlth_Val(uint8 data)
{
  return Rte_Write_MotPosStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_OutpAssiStHlth_Val(uint8 data)
{
  return Rte_Write_OutpAssiStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaAStHlth_Val(uint8 data)
{
  return Rte_Write_PhaAStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaBStHlth_Val(uint8 data)
{
  return Rte_Write_PhaBStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaCStHlth_Val(uint8 data)
{
  return Rte_Write_PhaCStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaDStHlth_Val(uint8 data)
{
  return Rte_Write_PhaDStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaEStHlth_Val(uint8 data)
{
  return Rte_Write_PhaEStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_PhaFStHlth_Val(uint8 data)
{
  return Rte_Write_PhaFStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_RamEccSngBitCorrnStHlth_Val(uint8 data)
{
  return Rte_Write_RamEccSngBitCorrnStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_VltgRng_Val(uint8 data)
{
  return Rte_Write_VltgRng_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_StHlthSigNormn_Rte_Call_GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg)
{
  return Rte_Call_GetFricLrngData_Oper(FricLrngEna_Arg, FricLrngOffsOutpEna_Arg, FricLrngOperMod_Arg, EolFric_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_StHlthSigNormn_Rte_IrvWrite_StHlthSigNormnInit1_EolFric(float32 data)
{
  Rte_IrvWrite_StHlthSigNormnInit1_EolFric( data);
}





Std_ReturnType TSC_StHlthSigNormn_Rte_Read_CurrMotSumABC_Val(float32 *data)
{
  return Rte_Read_CurrMotSumABC_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_CurrMotSumDEF_Val(float32 *data)
{
  return Rte_Read_CurrMotSumDEF_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_DutyCycThermProtnMaxOutp_Val(uint16 *data)
{
  return Rte_Read_DutyCycThermProtnMaxOutp_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_EcuTFild_Val(float32 *data)
{
  return Rte_Read_EcuTFild_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAgEotCcw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCcw_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAgEotCw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCw_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwAuthy_Val(float32 *data)
{
  return Rte_Read_HwAuthy_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwTqChACorrlnTraErr_Val(float32 *data)
{
  return Rte_Read_HwTqChACorrlnTraErr_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwTqChBCorrlnTraErr_Val(float32 *data)
{
  return Rte_Read_HwTqChBCorrlnTraErr_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_HwTqIdptSig_Val(uint8 *data)
{
  return Rte_Read_HwTqIdptSig_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_LclRamEccSngBitCntrOutp_Val(uint8 *data)
{
  return Rte_Read_LclRamEccSngBitCntrOutp_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MaxLrndFric_Val(float32 *data)
{
  return Rte_Read_MaxLrndFric_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAg2VltgSqd_Val(float32 *data)
{
  return Rte_Read_MotAg2VltgSqd_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAgABErrTerm_Val(u0p16 *data)
{
  return Rte_Read_MotAgABErrTerm_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAgACErrTerm_Val(u0p16 *data)
{
  return Rte_Read_MotAgACErrTerm_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotAgBCErrTerm_Val(u0p16 *data)
{
  return Rte_Read_MotAgBCErrTerm_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrA_Val(float32 *data)
{
  return Rte_Read_MotDrvErrA_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrB_Val(float32 *data)
{
  return Rte_Read_MotDrvErrB_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrC_Val(float32 *data)
{
  return Rte_Read_MotDrvErrC_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrD_Val(float32 *data)
{
  return Rte_Read_MotDrvErrD_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrE_Val(float32 *data)
{
  return Rte_Read_MotDrvErrE_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotDrvErrF_Val(float32 *data)
{
  return Rte_Read_MotDrvErrF_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_RackLimrEotSig0Avl_Logl(boolean *data)
{
  return Rte_Read_RackLimrEotSig0Avl_Logl(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_RackLimrEotSig1Avl_Logl(boolean *data)
{
  return Rte_Read_RackLimrEotSig1Avl_Logl(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Read_WhlImbRejctnCmd_Val(float32 *data)
{
  return Rte_Read_WhlImbRejctnCmd_Val(data);
}




Std_ReturnType TSC_StHlthSigNormn_Rte_Write_FricEstimnStHlth_Val(uint8 data)
{
  return Rte_Write_FricEstimnStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigNormn_Rte_Write_WhlImbMaxCmpStHlth_Val(uint8 data)
{
  return Rte_Write_WhlImbMaxCmpStHlth_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_StHlthSigNormn_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_StHlthSigNormn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
float32 TSC_StHlthSigNormn_Rte_IrvRead_UpdRawSig_Oper_EolFric(void)
{
return Rte_IrvRead_UpdRawSig_Oper_EolFric();
}





float32  TSC_StHlthSigNormn_Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val(void)
{
  return (float32 ) Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_EcuTMeasRngDiagcMax_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasRngDiagcMax_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_EcuTMeasRngDiagcMin_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasRngDiagcMin_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_EotLrngAuthyStrtLrn_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngAuthyStrtLrn_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnHiCtrlrT_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnHiCtrlrT_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnLoCtrlrT_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnLoCtrlrT_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMaxFricThd_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnMaxFricThd_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMotVelCal_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnMotVelCal_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnValMinStHlthErr_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnValMinStHlthErr_Val();
}
float32  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val(void)
{
  return (float32 ) Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val();
}
uint32  TSC_StHlthSigNormn_Rte_Prm_MotDrvDiagcErrThd_Val(void)
{
  return (uint32 ) Rte_Prm_MotDrvDiagcErrThd_Val();
}
uint16  TSC_StHlthSigNormn_Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val(void)
{
  return (uint16 ) Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val();
}
uint16  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val(void)
{
  return (uint16 ) Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val();
}
u0p16  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val(void)
{
  return (u0p16 ) Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val();
}
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val(void)
{
  return (uint8 ) Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val();
}
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val(void)
{
  return (uint8 ) Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val();
}
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val(void)
{
  return (uint8 ) Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val();
}
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val(void)
{
  return (uint8 ) Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val();
}
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val(void)
{
  return (uint8 ) Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val();
}
uint8  TSC_StHlthSigNormn_Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val(void)
{
  return (uint8 ) Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val();
}
uint8  TSC_StHlthSigNormn_Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
{
  return (uint8 ) Rte_Prm_SysGlbPrmMotPoleCnt_Val();
}


     /* StHlthSigNormn */
      /* StHlthSigNormn */

/** Per Instance Memories */
u0p16 *TSC_StHlthSigNormn_Rte_Pim_MotAgCorrlnErrThd(void)
{
  return Rte_Pim_MotAgCorrlnErrThd();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_AbsltMotPosABDifStHlthSts(void)
{
  return Rte_Pim_AbsltMotPosABDifStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_AbsltMotPosACDifStHlthSts(void)
{
  return Rte_Pim_AbsltMotPosACDifStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_AbsltMotPosBCDifStHlthSts(void)
{
  return Rte_Pim_AbsltMotPosBCDifStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_CurrMotSumABCStHlthSts(void)
{
  return Rte_Pim_CurrMotSumABCStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_CurrMotSumDEFStHlthSts(void)
{
  return Rte_Pim_CurrMotSumDEFStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_DigTqIdptSigStHlthSts(void)
{
  return Rte_Pim_DigTqIdptSigStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_DigTqSnsrAStHlthSts(void)
{
  return Rte_Pim_DigTqSnsrAStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_DigTqSnsrBStHlthSts(void)
{
  return Rte_Pim_DigTqSnsrBStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_EcuTRngIgnCyc(void)
{
  return Rte_Pim_EcuTRngIgnCyc();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_EotImpctCntr(void)
{
  return Rte_Pim_EotImpctCntr();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_MotPosStHlthSts(void)
{
  return Rte_Pim_MotPosStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaAStHlthSts(void)
{
  return Rte_Pim_PhaAStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaBStHlthSts(void)
{
  return Rte_Pim_PhaBStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaCStHlthSts(void)
{
  return Rte_Pim_PhaCStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaDStHlthSts(void)
{
  return Rte_Pim_PhaDStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaEStHlthSts(void)
{
  return Rte_Pim_PhaEStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_PhaFStHlthSts(void)
{
  return Rte_Pim_PhaFStHlthSts();
}
uint8 *TSC_StHlthSigNormn_Rte_Pim_VltgRngIgnCyc(void)
{
  return Rte_Pim_VltgRngIgnCyc();
}
boolean *TSC_StHlthSigNormn_Rte_Pim_EntrEot(void)
{
  return Rte_Pim_EntrEot();
}


