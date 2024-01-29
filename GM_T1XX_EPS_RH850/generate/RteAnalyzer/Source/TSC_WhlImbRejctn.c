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
 *          File:  TSC_WhlImbRejctn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_WhlImbRejctn.h"
#include "TSC_WhlImbRejctn.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_CmpPeakData_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_CmpPeakData_GetErrorStatus(ErrorStatus_Arg);
}
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_CmpPeakData_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_CmpPeakData_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate(float32 data)
{
  Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate( data);
}
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate(float32 data)
{
  Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate( data);
}
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt(boolean data)
{
  Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt( data);
}





Std_ReturnType TSC_WhlImbRejctn_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_SysSt_Val(SysSt1 *data)
{
  return Rte_Read_SysSt_Val(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlFrqVld_Logl(boolean *data)
{
  return Rte_Read_WhlFrqVld_Logl(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlImbRejctnCustEna_Logl(boolean *data)
{
  return Rte_Read_WhlImbRejctnCustEna_Logl(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlImbRejctnDi_Logl(boolean *data)
{
  return Rte_Read_WhlImbRejctnDi_Logl(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlLeFrq_Val(float32 *data)
{
  return Rte_Read_WhlLeFrq_Val(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Read_WhlRiFrq_Val(float32 *data)
{
  return Rte_Read_WhlRiFrq_Val(data);
}




Std_ReturnType TSC_WhlImbRejctn_Rte_Write_WhlImbRejctnActv_Logl(boolean data)
{
  return Rte_Write_WhlImbRejctnActv_Logl(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Write_WhlImbRejctnAmp_Val(float32 data)
{
  return Rte_Write_WhlImbRejctnAmp_Val(data);
}

Std_ReturnType TSC_WhlImbRejctn_Rte_Write_WhlImbRejctnCmd_Val(float32 data)
{
  return Rte_Write_WhlImbRejctnCmd_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}
Std_ReturnType TSC_WhlImbRejctn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
float32 TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate(void)
{
return Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate();
}
float32 TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate(void)
{
return Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate();
}
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt(void)
{
return Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt();
}
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc(void)
{
return Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc();
}

void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp(float32 data)
{
  Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp( data);
}
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt(boolean data)
{
  Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt( data);
}
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt(boolean data)
{
  Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt( data);
}
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt(boolean data)
{
  Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt( data);
}
void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt(boolean data)
{
  Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt( data);
}












     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
float32 TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_CmdAmp(void)
{
return Rte_IrvRead_WhlImbRejctnPer2_CmdAmp();
}
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt(void)
{
return Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt();
}
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt(void)
{
return Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt();
}
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt(void)
{
return Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt();
}
boolean TSC_WhlImbRejctn_Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt(void)
{
return Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt();
}

void TSC_WhlImbRejctn_Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc(boolean data)
{
  Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc( data);
}




float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnAdpvFac_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnAdpvFac_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnAutScaTar_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnAutScaTar_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendLpFil_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendLpFil_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendThTq_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendThTq_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDcTrendTiSec_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDcTrendTiSec_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgn_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgn_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnScaCncl_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnScaCncl_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnUgrPoleMgn_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnUgrPoleMgn_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnVehSpdEna_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnVehSpdEna_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val();
}
float32  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val(void)
{
  return (float32 ) Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val();
}
u16p0  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcTout_Val(void)
{
  return (u16p0 ) Rte_Prm_WhlImbRejctnFrqDiagcTout_Val();
}
uint16  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnMaxDurn_Val(void)
{
  return (uint16 ) Rte_Prm_WhlImbRejctnMaxDurn_Val();
}
u16p0  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnRampDwnTi_Val(void)
{
  return (u16p0 ) Rte_Prm_WhlImbRejctnRampDwnTi_Val();
}
u16p0  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val(void)
{
  return (u16p0 ) Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val();
}
boolean  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnAutScaEna_Logl(void)
{
  return (boolean ) Rte_Prm_WhlImbRejctnAutScaEna_Logl();
}
boolean  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFctEna_Logl(void)
{
  return (boolean ) Rte_Prm_WhlImbRejctnFctEna_Logl();
}
boolean  TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl(void)
{
  return (boolean ) Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl();
}
Ary1D_u6p10_6 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D(void)
{
  return (Ary1D_u6p10_6 *) Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D();
}
Ary1D_u1p15_6 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D(void)
{
  return (Ary1D_u1p15_6 *) Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D();
}
Ary1D_u7p9_3 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D(void)
{
  return (Ary1D_u7p9_3 *) Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D();
}
Ary1D_s8p7_3 * TSC_WhlImbRejctn_Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D(void)
{
  return (Ary1D_s8p7_3 *) Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D();
}

float32  TSC_WhlImbRejctn_Rte_CData_LePeakPrevDft(void)
{
  return (float32 ) Rte_CData_LePeakPrevDft();
}
float32  TSC_WhlImbRejctn_Rte_CData_MaxCompPercDft(void)
{
  return (float32 ) Rte_CData_MaxCompPercDft();
}
float32  TSC_WhlImbRejctn_Rte_CData_RiPeakPrevDft(void)
{
  return (float32 ) Rte_CData_RiPeakPrevDft();
}
uint32  TSC_WhlImbRejctn_Rte_CData_ActvCmpBand1Dft(void)
{
  return (uint32 ) Rte_CData_ActvCmpBand1Dft();
}
uint32  TSC_WhlImbRejctn_Rte_CData_ActvCmpBand2Dft(void)
{
  return (uint32 ) Rte_CData_ActvCmpBand2Dft();
}
uint32  TSC_WhlImbRejctn_Rte_CData_ActvCmpBand3Dft(void)
{
  return (uint32 ) Rte_CData_ActvCmpBand3Dft();
}

     /* WhlImbRejctn */
      /* WhlImbRejctn */

/** Per Instance Memories */
float32 *TSC_WhlImbRejctn_Rte_Pim_EnaSlewPerLoop(void)
{
  return Rte_Pim_EnaSlewPerLoop();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcUgr1(void)
{
  return Rte_Pim_FrqDiagcUgr1();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcUgr2(void)
{
  return Rte_Pim_FrqDiagcUgr2();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_LeCurrMgnSlewPerLoop(void)
{
  return Rte_Pim_LeCurrMgnSlewPerLoop();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil1Coeff1(void)
{
  return Rte_Pim_PhaAdjFil1Coeff1();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil1Coeff2(void)
{
  return Rte_Pim_PhaAdjFil1Coeff2();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil2Coeff1(void)
{
  return Rte_Pim_PhaAdjFil2Coeff1();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_PhaAdjFil2Coeff2(void)
{
  return Rte_Pim_PhaAdjFil2Coeff2();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_PrevFlt(void)
{
  return Rte_Pim_PrevFlt();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_PrevHwTq(void)
{
  return Rte_Pim_PrevHwTq();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_RiCurrMgnSlewPerLoop(void)
{
  return Rte_Pim_RiCurrMgnSlewPerLoop();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_ScaLe(void)
{
  return Rte_Pim_ScaLe();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_ScaRi(void)
{
  return Rte_Pim_ScaRi();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrLe1(void)
{
  return Rte_Pim_UgrLe1();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrLe2(void)
{
  return Rte_Pim_UgrLe2();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrRi1(void)
{
  return Rte_Pim_UgrRi1();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_UgrRi2(void)
{
  return Rte_Pim_UgrRi2();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnCnclTqOutp(void)
{
  return Rte_Pim_dWhlImbRejctnCnclTqOutp();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnCurrMgnLe(void)
{
  return Rte_Pim_dWhlImbRejctnCurrMgnLe();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnCurrMgnRi(void)
{
  return Rte_Pim_dWhlImbRejctnCurrMgnRi();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnFildWhlSpdLe(void)
{
  return Rte_Pim_dWhlImbRejctnFildWhlSpdLe();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnFildWhlSpdRi(void)
{
  return Rte_Pim_dWhlImbRejctnFildWhlSpdRi();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnLMSqdOutLe(void)
{
  return Rte_Pim_dWhlImbRejctnLMSqdOutLe();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnLMSqdOutRi(void)
{
  return Rte_Pim_dWhlImbRejctnLMSqdOutRi();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnScaLe(void)
{
  return Rte_Pim_dWhlImbRejctnScaLe();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnScaRi(void)
{
  return Rte_Pim_dWhlImbRejctnScaRi();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc(void)
{
  return Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_DcTrendRefTiEnaLrng(void)
{
  return Rte_Pim_DcTrendRefTiEnaLrng();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_DcTrendRefTiEnaLrngTmr1(void)
{
  return Rte_Pim_DcTrendRefTiEnaLrngTmr1();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_DcTrendRefTiEnaLrngTmr2(void)
{
  return Rte_Pim_DcTrendRefTiEnaLrngTmr2();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcRefTiEnaLrng(void)
{
  return Rte_Pim_FrqDiagcRefTiEnaLrng();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcRefTiEnaLrngTiOut(void)
{
  return Rte_Pim_FrqDiagcRefTiEnaLrngTiOut();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_MaxMgnRefTiEnaLrng(void)
{
  return Rte_Pim_MaxMgnRefTiEnaLrng();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr(void)
{
  return Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng(void)
{
  return Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng();
}
uint32 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr(void)
{
  return Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendFltFaild(void)
{
  return Rte_Pim_DcTrendFltFaild();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendFltRst(void)
{
  return Rte_Pim_DcTrendFltRst();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendLrngEnaPrev(void)
{
  return Rte_Pim_DcTrendLrngEnaPrev();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendLrngEnaPrevTmr1(void)
{
  return Rte_Pim_DcTrendLrngEnaPrevTmr1();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_DcTrendLrngEnaPrevTmr2(void)
{
  return Rte_Pim_DcTrendLrngEnaPrevTmr2();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_DistbnMagEnadPrev(void)
{
  return Rte_Pim_DistbnMagEnadPrev();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcFltFaild(void)
{
  return Rte_Pim_FrqDiagcFltFaild();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcFltRst(void)
{
  return Rte_Pim_FrqDiagcFltRst();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcLrngEnaPrev(void)
{
  return Rte_Pim_FrqDiagcLrngEnaPrev();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcLrngEnaPrevTiOut(void)
{
  return Rte_Pim_FrqDiagcLrngEnaPrevTiOut();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_MaxMgnFltFaild(void)
{
  return Rte_Pim_MaxMgnFltFaild();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_MaxMgnFltRst(void)
{
  return Rte_Pim_MaxMgnFltRst();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_MaxMgnLrngEnaPrev(void)
{
  return Rte_Pim_MaxMgnLrngEnaPrev();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_PrevSts(void)
{
  return Rte_Pim_PrevSts();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_RampNo(void)
{
  return Rte_Pim_RampNo();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_RampYes(void)
{
  return Rte_Pim_RampYes();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr(void)
{
  return Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrFltFaild(void)
{
  return Rte_Pim_WhlSpdCorrFltFaild();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrFltRst(void)
{
  return Rte_Pim_WhlSpdCorrFltRst();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev(void)
{
  return Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev();
}
boolean *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr(void)
{
  return Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_LeStDlyUpd(void)
{
  return Rte_Pim_LeStDlyUpd();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_LeStVariUpd(void)
{
  return Rte_Pim_LeStVariUpd();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_RiStDlyUpd(void)
{
  return Rte_Pim_RiStDlyUpd();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_RiStVariUpd(void)
{
  return Rte_Pim_RiStVariUpd();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_StordValLe(void)
{
  return Rte_Pim_StordValLe();
}
float32 *TSC_WhlImbRejctn_Rte_Pim_StordValRi(void)
{
  return Rte_Pim_StordValRi();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_BlndCmdMgnLp1Fil(void)
{
  return Rte_Pim_BlndCmdMgnLp1Fil();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_BlndCmdMgnLp2Fil(void)
{
  return Rte_Pim_BlndCmdMgnLp2Fil();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_CmdMgnLp1Fil(void)
{
  return Rte_Pim_CmdMgnLp1Fil();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_CmdMgnLp2Fil(void)
{
  return Rte_Pim_CmdMgnLp2Fil();
}
WhlImbRejctnCmpPeakRec1 *TSC_WhlImbRejctn_Rte_Pim_CmpPeakData(void)
{
  return Rte_Pim_CmpPeakData();
}
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_DcTrendFltRcvry(void)
{
  return Rte_Pim_DcTrendFltRcvry();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_DcTrendLpFil(void)
{
  return Rte_Pim_DcTrendLpFil();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_DistbnMgnLeLpFil(void)
{
  return Rte_Pim_DistbnMgnLeLpFil();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_DistbnMgnRiLpFil(void)
{
  return Rte_Pim_DistbnMgnRiLpFil();
}
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcFltRcvry(void)
{
  return Rte_Pim_FrqDiagcFltRcvry();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_FrqDiagcLpFil(void)
{
  return Rte_Pim_FrqDiagcLpFil();
}
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_MaxMgnFltRcvry(void)
{
  return Rte_Pim_MaxMgnFltRcvry();
}
PassFailCntrDiagcRec1 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdCorrlnFltRcvry(void)
{
  return Rte_Pim_WhlSpdCorrlnFltRcvry();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdLeLpFil(void)
{
  return Rte_Pim_WhlSpdLeLpFil();
}
FilLpRec1 *TSC_WhlImbRejctn_Rte_Pim_WhlSpdRiLpFil(void)
{
  return Rte_Pim_WhlSpdRiLpFil();
}


