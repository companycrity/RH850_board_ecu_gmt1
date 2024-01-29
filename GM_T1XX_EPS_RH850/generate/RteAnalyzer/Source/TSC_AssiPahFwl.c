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
 *          File:  TSC_AssiPahFwl.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_AssiPahFwl.h"
#include "TSC_AssiPahFwl.h"















     // Client Server Interfaces:
Std_ReturnType TSC_AssiPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_AssiPahFwl_Rte_Read_AssiCmdBas_Val(float32 *data)
{
  return Rte_Read_AssiCmdBas_Val(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Read_AssiHiFrqCmd_Val(float32 *data)
{
  return Rte_Read_AssiHiFrqCmd_Val(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Read_AssiLnrGainEna_Logl(boolean *data)
{
  return Rte_Read_AssiLnrGainEna_Logl(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Read_HwTqOvrl_Val(float32 *data)
{
  return Rte_Read_HwTqOvrl_Val(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Read_HysCmpCmd_Val(float32 *data)
{
  return Rte_Read_HysCmpCmd_Val(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
{
  return Rte_Read_MfgEnaSt_Val(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_AssiPahFwl_Rte_Write_AssiCmdSum_Val(float32 data)
{
  return Rte_Write_AssiCmdSum_Val(data);
}

Std_ReturnType TSC_AssiPahFwl_Rte_Write_AssiPahLimrActv_Val(float32 data)
{
  return Rte_Write_AssiPahLimrActv_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_AssiPahFwl_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val();
}
float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val();
}
float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlHysCmpLim_Val(void)
{
  return (float32 ) Rte_Prm_AssiPahFwlHysCmpLim_Val();
}
float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlRestoreThd_Val(void)
{
  return (float32 ) Rte_Prm_AssiPahFwlRestoreThd_Val();
}
uint16  TSC_AssiPahFwl_Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val();
}
uint16  TSC_AssiPahFwl_Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val();
}
uint16  TSC_AssiPahFwl_Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val();
}
uint16  TSC_AssiPahFwl_Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val();
}
boolean  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlDiRcvr_Logl(void)
{
  return (boolean ) Rte_Prm_AssiPahFwlDiRcvr_Logl();
}
Ary1D_u8p8_20 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlDftAssiX_Ary1D(void)
{
  return (Ary1D_u8p8_20 *) Rte_Prm_AssiPahFwlDftAssiX_Ary1D();
}
Ary1D_s4p11_20 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlDftAssiY_Ary1D(void)
{
  return (Ary1D_s4p11_20 *) Rte_Prm_AssiPahFwlDftAssiY_Ary1D();
}
Ary2D_s4p11_12_11 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D(void)
{
  return (Ary2D_s4p11_12_11 *) Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D();
}
Ary2D_s4p11_12_11 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlUpprLimX_Ary2D(void)
{
  return (Ary2D_s4p11_12_11 *) Rte_Prm_AssiPahFwlUpprLimX_Ary2D();
}
Ary2D_s4p11_12_11 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlUpprLimY_Ary2D(void)
{
  return (Ary2D_s4p11_12_11 *) Rte_Prm_AssiPahFwlUpprLimY_Ary2D();
}
Ary1D_u9p7_12 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlVehSpd_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_AssiPahFwlVehSpd_Ary1D();
}


     /* AssiPahFwl */
      /* AssiPahFwl */

/** Per Instance Memories */
float32 *TSC_AssiPahFwl_Rte_Pim_CombdAssiPrev(void)
{
  return Rte_Pim_CombdAssiPrev();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlActvRaw(void)
{
  return Rte_Pim_dAssiPahFwlActvRaw();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiLimd(void)
{
  return Rte_Pim_dAssiPahFwlBasAssiLimd();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiLowrLim(void)
{
  return Rte_Pim_dAssiPahFwlBasAssiLowrLim();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiUpprLim(void)
{
  return Rte_Pim_dAssiPahFwlBasAssiUpprLim();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild(void)
{
  return Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild(void)
{
  return Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqCmdHpPah(void)
{
  return Rte_Pim_dAssiPahFwlHiFrqCmdHpPah();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqCmdLpPah(void)
{
  return Rte_Pim_dAssiPahFwlHiFrqCmdLpPah();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqLpLimd(void)
{
  return Rte_Pim_dAssiPahFwlHiFrqLpLimd();
}
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlSumInp(void)
{
  return Rte_Pim_dAssiPahFwlSumInp();
}
boolean *TSC_AssiPahFwl_Rte_Pim_AssiPrfmncPrev(void)
{
  return Rte_Pim_AssiPrfmncPrev();
}
boolean *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiCmdOverLim(void)
{
  return Rte_Pim_dAssiPahFwlBasAssiCmdOverLim();
}
boolean *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqCmdOverLim(void)
{
  return Rte_Pim_dAssiPahFwlHiFrqCmdOverLim();
}
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_FwlActvLpFilStVari(void)
{
  return Rte_Pim_FwlActvLpFilStVari();
}
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_HiFrqCmdLpFilStVari(void)
{
  return Rte_Pim_HiFrqCmdLpFilStVari();
}
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_LowrLimLpFilStVari(void)
{
  return Rte_Pim_LowrLimLpFilStVari();
}
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_UpprLimLpFilStVari(void)
{
  return Rte_Pim_UpprLimLpFilStVari();
}


