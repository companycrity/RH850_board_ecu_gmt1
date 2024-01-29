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
 *          File:  TSC_DampgPahFwl.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_DampgPahFwl.h"
#include "TSC_DampgPahFwl.h"















     // Client Server Interfaces:
Std_ReturnType TSC_DampgPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_DampgPahFwl_Rte_Read_AssiPahLimrActv_Val(float32 *data)
{
  return Rte_Read_AssiPahLimrActv_Val(data);
}

Std_ReturnType TSC_DampgPahFwl_Rte_Read_DampgCmdBas_Val(float32 *data)
{
  return Rte_Read_DampgCmdBas_Val(data);
}

Std_ReturnType TSC_DampgPahFwl_Rte_Read_DampgCmdBasDi_Logl(boolean *data)
{
  return Rte_Read_DampgCmdBasDi_Logl(data);
}

Std_ReturnType TSC_DampgPahFwl_Rte_Read_InertiaCmpVelCmd_Val(float32 *data)
{
  return Rte_Read_InertiaCmpVelCmd_Val(data);
}

Std_ReturnType TSC_DampgPahFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
{
  return Rte_Read_MfgEnaSt_Val(data);
}

Std_ReturnType TSC_DampgPahFwl_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_DampgPahFwl_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_DampgPahFwl_Rte_Write_DampgCmd_Val(float32 data)
{
  return Rte_Write_DampgCmd_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_DampgPahFwl_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlActvFwlLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_DampgPahFwlActvFwlLpFilFrq_Val();
}
float32  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_DampgPahFwlDampgCmdLpFilFrq_Val();
}
float32  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_DampgPahFwlInertiaCmpLpFilFrq_Val();
}
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val();
}
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val();
}
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val();
}
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val();
}
Ary1D_u11p5_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlAssiAddlDampgX_Ary1D(void)
{
  return (Ary1D_u11p5_8 *) Rte_Prm_DampgPahFwlAssiAddlDampgX_Ary1D();
}
Ary1D_u5p11_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlAssiAddlDampgY_Ary1D(void)
{
  return (Ary1D_u5p11_8 *) Rte_Prm_DampgPahFwlAssiAddlDampgY_Ary1D();
}
Ary1D_u11p5_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdAddlDampgX_Ary1D(void)
{
  return (Ary1D_u11p5_8 *) Rte_Prm_DampgPahFwlDampgCmdAddlDampgX_Ary1D();
}
Ary1D_u5p11_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdAddlDampgY_Ary1D(void)
{
  return (Ary1D_u5p11_8 *) Rte_Prm_DampgPahFwlDampgCmdAddlDampgY_Ary1D();
}
Ary1D_s11p4_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdUpprLimX_Ary1D(void)
{
  return (Ary1D_s11p4_11 *) Rte_Prm_DampgPahFwlDampgCmdUpprLimX_Ary1D();
}
Ary2D_s7p8_12_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdUpprLimY_Ary2D(void)
{
  return (Ary2D_s7p8_12_11 *) Rte_Prm_DampgPahFwlDampgCmdUpprLimY_Ary2D();
}
Ary1D_u11p5_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDftDampgX_Ary1D(void)
{
  return (Ary1D_u11p5_11 *) Rte_Prm_DampgPahFwlDftDampgX_Ary1D();
}
Ary1D_u5p11_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDftDampgY_Ary1D(void)
{
  return (Ary1D_u5p11_11 *) Rte_Prm_DampgPahFwlDftDampgY_Ary1D();
}
Ary1D_s11p4_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpUpprLimX_Ary1D(void)
{
  return (Ary1D_s11p4_11 *) Rte_Prm_DampgPahFwlInertiaCmpUpprLimX_Ary1D();
}
Ary2D_s7p8_12_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpUpprLimY_Ary2D(void)
{
  return (Ary2D_s7p8_12_11 *) Rte_Prm_DampgPahFwlInertiaCmpUpprLimY_Ary2D();
}
Ary1D_u9p7_12 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlVehSpd_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_DampgPahFwlVehSpd_Ary1D();
}


     /* DampgPahFwl */
      /* DampgPahFwl */

/** Per Instance Memories */
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlActvRaw(void)
{
  return Rte_Pim_dDampgPahFwlActvRaw();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlAddDampg(void)
{
  return Rte_Pim_dDampgPahFwlAddDampg();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdLimd(void)
{
  return Rte_Pim_dDampgPahFwlDampgCmdLimd();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdLowrLimFild(void)
{
  return Rte_Pim_dDampgPahFwlDampgCmdLowrLimFild();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdUpprLimFild(void)
{
  return Rte_Pim_dDampgPahFwlDampgCmdUpprLimFild();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpHpPah(void)
{
  return Rte_Pim_dDampgPahFwlInertiaCmpHpPah();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpLowrLimFild(void)
{
  return Rte_Pim_dDampgPahFwlInertiaCmpLowrLimFild();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpLpLimd(void)
{
  return Rte_Pim_dDampgPahFwlInertiaCmpLpLimd();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpLpPah(void)
{
  return Rte_Pim_dDampgPahFwlInertiaCmpLpPah();
}
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpUpprLimFild(void)
{
  return Rte_Pim_dDampgPahFwlInertiaCmpUpprLimFild();
}
boolean *TSC_DampgPahFwl_Rte_Pim_DampgDecPrfmncPrev(void)
{
  return Rte_Pim_DampgDecPrfmncPrev();
}
boolean *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdOverLim(void)
{
  return Rte_Pim_dDampgPahFwlDampgCmdOverLim();
}
boolean *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpOverLim(void)
{
  return Rte_Pim_dDampgPahFwlInertiaCmpOverLim();
}
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_DampgCmdLpFilLowrLim(void)
{
  return Rte_Pim_DampgCmdLpFilLowrLim();
}
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_DampgCmdLpFilUpprLim(void)
{
  return Rte_Pim_DampgCmdLpFilUpprLim();
}
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_FwlActvLpFil(void)
{
  return Rte_Pim_FwlActvLpFil();
}
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_InertiaCmpLpFil(void)
{
  return Rte_Pim_InertiaCmpLpFil();
}
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_InertiaCmpLpFilLowrLim(void)
{
  return Rte_Pim_InertiaCmpLpFilLowrLim();
}
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_InertiaCmpLpFilUpprLim(void)
{
  return Rte_Pim_InertiaCmpLpFilUpprLim();
}


