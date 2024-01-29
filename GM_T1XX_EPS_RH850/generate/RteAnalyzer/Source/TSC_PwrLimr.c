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
 *          File:  TSC_PwrLimr.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_PwrLimr.h"
#include "TSC_PwrLimr.h"















     // Client Server Interfaces:
Std_ReturnType TSC_PwrLimr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_PwrLimr_Rte_Read_AltFltActv_Logl(boolean *data)
{
  return Rte_Read_AltFltActv_Logl(data);
}

Std_ReturnType TSC_PwrLimr_Rte_Read_BrdgVltg_Val(float32 *data)
{
  return Rte_Read_BrdgVltg_Val(data);
}

Std_ReturnType TSC_PwrLimr_Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data)
{
  return Rte_Read_IvtrLoaMtgtnEna_Logl(data);
}

Std_ReturnType TSC_PwrLimr_Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
{
  return Rte_Read_MotBackEmfConEstimd_Val(data);
}

Std_ReturnType TSC_PwrLimr_Rte_Read_MotTqCmdMrf_Val(float32 *data)
{
  return Rte_Read_MotTqCmdMrf_Val(data);
}

Std_ReturnType TSC_PwrLimr_Rte_Read_MotVelMrf_Val(float32 *data)
{
  return Rte_Read_MotVelMrf_Val(data);
}




Std_ReturnType TSC_PwrLimr_Rte_Write_MotTqCmdPwrLimd_Val(float32 data)
{
  return Rte_Write_MotTqCmdPwrLimd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_PwrLimr_Rte_IrvWrite_PwrLimrPer1_MinStdOperLim(float32 data)
{
  Rte_IrvWrite_PwrLimrPer1_MinStdOperLim( data);
}
void TSC_PwrLimr_Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd(float32 data)
{
  Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd( data);
}
void TSC_PwrLimr_Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1(float32 data)
{
  Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1( data);
}








Std_ReturnType TSC_PwrLimr_Rte_Write_PwrLimrRednFac_Val(float32 data)
{
  return Rte_Write_PwrLimrRednFac_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_PwrLimr_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}
Std_ReturnType TSC_PwrLimr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
float32 TSC_PwrLimr_Rte_IrvRead_PwrLimrPer2_MinStdOperLim(void)
{
return Rte_IrvRead_PwrLimrPer2_MinStdOperLim();
}
float32 TSC_PwrLimr_Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd(void)
{
return Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd();
}
float32 TSC_PwrLimr_Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1(void)
{
return Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1();
}





float32  TSC_PwrLimr_Rte_Prm_PwrLimrAssiRednLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrAssiRednLpFilFrq_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrBackEmfConStdT_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrBackEmfConStdT_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrFilAssiRednThd_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrFilAssiRednThd_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrMotVelLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrMotVelLpFilFrq_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrSpdAdjSlewDec_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrSpdAdjSlewDec_Val();
}
float32  TSC_PwrLimr_Rte_Prm_PwrLimrSpdAdjSlewInc_Val(void)
{
  return (float32 ) Rte_Prm_PwrLimrSpdAdjSlewInc_Val();
}
uint16  TSC_PwrLimr_Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val(void)
{
  return (uint16 ) Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val();
}
boolean  TSC_PwrLimr_Rte_Prm_PwrLimrSpdAdjSlewEna_Logl(void)
{
  return (boolean ) Rte_Prm_PwrLimrSpdAdjSlewEna_Logl();
}
Ary1D_s11p4_14 * TSC_PwrLimr_Rte_Prm_PwrLimrMotEnvlpX_Ary1D(void)
{
  return (Ary1D_s11p4_14 *) Rte_Prm_PwrLimrMotEnvlpX_Ary1D();
}
Ary1D_u5p11_14 * TSC_PwrLimr_Rte_Prm_PwrLimrMotEnvlpY_Ary1D(void)
{
  return (Ary1D_u5p11_14 *) Rte_Prm_PwrLimrMotEnvlpY_Ary1D();
}
Ary1D_u11p5_6 * TSC_PwrLimr_Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D(void)
{
  return (Ary1D_u11p5_6 *) Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D();
}
Ary1D_u4p12_6 * TSC_PwrLimr_Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D(void)
{
  return (Ary1D_u4p12_6 *) Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D();
}
Ary1D_u5p11_10 * TSC_PwrLimr_Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D(void)
{
  return (Ary1D_u5p11_10 *) Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D();
}
Ary1D_u11p5_10 * TSC_PwrLimr_Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D(void)
{
  return (Ary1D_u11p5_10 *) Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D();
}


     /* PwrLimr */
      /* PwrLimr */

/** Per Instance Memories */
float32 *TSC_PwrLimr_Rte_Pim_BrdgVltgAdjSlewStVari(void)
{
  return Rte_Pim_BrdgVltgAdjSlewStVari();
}
float32 *TSC_PwrLimr_Rte_Pim_PrevBrdgVltgAltFltAdjLim(void)
{
  return Rte_Pim_PrevBrdgVltgAltFltAdjLim();
}
float32 *TSC_PwrLimr_Rte_Pim_PrevSpdAdj(void)
{
  return Rte_Pim_PrevSpdAdj();
}
float32 *TSC_PwrLimr_Rte_Pim_SpdAdjSlewStVari(void)
{
  return Rte_Pim_SpdAdjSlewStVari();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrFildMotVel(void)
{
  return Rte_Pim_dPwrLimrFildMotVel();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrLimDif(void)
{
  return Rte_Pim_dPwrLimrLimDif();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrMinStdOperLim(void)
{
  return Rte_Pim_dPwrLimrMinStdOperLim();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrMotEnvlpSpd(void)
{
  return Rte_Pim_dPwrLimrMotEnvlpSpd();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca(void)
{
  return Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrOutpVelOffs(void)
{
  return Rte_Pim_dPwrLimrOutpVelOffs();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrSpdAdj(void)
{
  return Rte_Pim_dPwrLimrSpdAdj();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrTLimMaxCurr(void)
{
  return Rte_Pim_dPwrLimrTLimMaxCurr();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrTqEnvlpLim1(void)
{
  return Rte_Pim_dPwrLimrTqEnvlpLim1();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrTqEnvlpLim4(void)
{
  return Rte_Pim_dPwrLimrTqEnvlpLim4();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrTqLim(void)
{
  return Rte_Pim_dPwrLimrTqLim();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrTqLim1(void)
{
  return Rte_Pim_dPwrLimrTqLim1();
}
float32 *TSC_PwrLimr_Rte_Pim_dPwrLimrTqLim4(void)
{
  return Rte_Pim_dPwrLimrTqLim4();
}
uint32 *TSC_PwrLimr_Rte_Pim_FltRefTi(void)
{
  return Rte_Pim_FltRefTi();
}
boolean *TSC_PwrLimr_Rte_Pim_PrevThd(void)
{
  return Rte_Pim_PrevThd();
}
FilLpRec1 *TSC_PwrLimr_Rte_Pim_MotVelLpFil(void)
{
  return Rte_Pim_MotVelLpFil();
}
FilLpRec1 *TSC_PwrLimr_Rte_Pim_TqLimAssiRednLpFil(void)
{
  return Rte_Pim_TqLimAssiRednLpFil();
}


