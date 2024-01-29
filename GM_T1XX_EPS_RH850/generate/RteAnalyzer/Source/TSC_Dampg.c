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
 *          File:  TSC_Dampg.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Dampg.h"
#include "TSC_Dampg.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_Dampg_Rte_Read_AssiCmdBas_Val(float32 *data)
{
  return Rte_Read_AssiCmdBas_Val(data);
}

Std_ReturnType TSC_Dampg_Rte_Read_AssiMechT_Val(float32 *data)
{
  return Rte_Read_AssiMechT_Val(data);
}

Std_ReturnType TSC_Dampg_Rte_Read_DampgCmdBasDi_Logl(boolean *data)
{
  return Rte_Read_DampgCmdBasDi_Logl(data);
}

Std_ReturnType TSC_Dampg_Rte_Read_DampgCmdOvrl_Val(float32 *data)
{
  return Rte_Read_DampgCmdOvrl_Val(data);
}

Std_ReturnType TSC_Dampg_Rte_Read_DampgCmdSca_Val(float32 *data)
{
  return Rte_Read_DampgCmdSca_Val(data);
}

Std_ReturnType TSC_Dampg_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_Dampg_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_Dampg_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_Dampg_Rte_Write_DampgCmdBas_Val(float32 data)
{
  return Rte_Write_DampgCmdBas_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_Dampg_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff1_Val(void)
{
  return (float32 ) Rte_Prm_DampgHydBasCoeff1_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff2_Val(void)
{
  return (float32 ) Rte_Prm_DampgHydBasCoeff2_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff3_Val(void)
{
  return (float32 ) Rte_Prm_DampgHydBasCoeff3_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgHydBasCoeff4_Val(void)
{
  return (float32 ) Rte_Prm_DampgHydBasCoeff4_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgHydOutpLim_Val(void)
{
  return (float32 ) Rte_Prm_DampgHydOutpLim_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgMotVelLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_DampgMotVelLpFilFrq_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgQuad13Mplr_Val(void)
{
  return (float32 ) Rte_Prm_DampgQuad13Mplr_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgQuad24Mplr_Val(void)
{
  return (float32 ) Rte_Prm_DampgQuad24Mplr_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgQuadHwTqBacklsh_Val(void)
{
  return (float32 ) Rte_Prm_DampgQuadHwTqBacklsh_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgQuadHwTqLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_DampgQuadHwTqLpFilFrq_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgQuadMotVelBacklsh_Val(void)
{
  return (float32 ) Rte_Prm_DampgQuadMotVelBacklsh_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgQuadMotVelLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_DampgQuadMotVelLpFilFrq_Val();
}
float32  TSC_Dampg_Rte_Prm_DampgQuadScaLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_DampgQuadScaLpFilFrq_Val();
}
Ary1D_u8p8_2 * TSC_Dampg_Rte_Prm_DampgHwTqX_Ary1D(void)
{
  return (Ary1D_u8p8_2 *) Rte_Prm_DampgHwTqX_Ary1D();
}
Ary1D_u1p15_2 * TSC_Dampg_Rte_Prm_DampgHwTqY_Ary1D(void)
{
  return (Ary1D_u1p15_2 *) Rte_Prm_DampgHwTqY_Ary1D();
}
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydAssiLim_Ary1D(void)
{
  return (Ary1D_u4p12_12 *) Rte_Prm_DampgHydAssiLim_Ary1D();
}
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff1ScaY_Ary1D(void)
{
  return (Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff1ScaY_Ary1D();
}
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff2ScaY_Ary1D(void)
{
  return (Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff2ScaY_Ary1D();
}
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff3ScaY_Ary1D(void)
{
  return (Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff3ScaY_Ary1D();
}
Ary1D_u4p12_12 * TSC_Dampg_Rte_Prm_DampgHydCoeff4ScaY_Ary1D(void)
{
  return (Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff4ScaY_Ary1D();
}
Ary2D_u12p4_12_13 * TSC_Dampg_Rte_Prm_DampgMotVelX_Ary2D(void)
{
  return (Ary2D_u12p4_12_13 *) Rte_Prm_DampgMotVelX_Ary2D();
}
Ary2D_u5p11_12_13 * TSC_Dampg_Rte_Prm_DampgMotVelY_Ary2D(void)
{
  return (Ary2D_u5p11_12_13 *) Rte_Prm_DampgMotVelY_Ary2D();
}
Ary1D_s8p7_14 * TSC_Dampg_Rte_Prm_DampgTScaX_Ary1D(void)
{
  return (Ary1D_s8p7_14 *) Rte_Prm_DampgTScaX_Ary1D();
}
Ary1D_u4p12_14 * TSC_Dampg_Rte_Prm_DampgTScaY_Ary1D(void)
{
  return (Ary1D_u4p12_14 *) Rte_Prm_DampgTScaY_Ary1D();
}
Ary1D_u9p7_12 * TSC_Dampg_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D();
}


     /* Dampg */
      /* Dampg */

/** Per Instance Memories */
float32 *TSC_Dampg_Rte_Pim_PrevHwTqBacklshOutp(void)
{
  return Rte_Pim_PrevHwTqBacklshOutp();
}
float32 *TSC_Dampg_Rte_Pim_PrevHydOutpLim(void)
{
  return Rte_Pim_PrevHydOutpLim();
}
float32 *TSC_Dampg_Rte_Pim_PrevMotVelBacklshOutp(void)
{
  return Rte_Pim_PrevMotVelBacklshOutp();
}
float32 *TSC_Dampg_Rte_Pim_dDampgAssiMechTSca(void)
{
  return Rte_Pim_dDampgAssiMechTSca();
}
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff1Term(void)
{
  return Rte_Pim_dDampgCoeff1Term();
}
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff2Term(void)
{
  return Rte_Pim_dDampgCoeff2Term();
}
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff3Term(void)
{
  return Rte_Pim_dDampgCoeff3Term();
}
float32 *TSC_Dampg_Rte_Pim_dDampgCoeff4Term(void)
{
  return Rte_Pim_dDampgCoeff4Term();
}
float32 *TSC_Dampg_Rte_Pim_dDampgHwTqSca(void)
{
  return Rte_Pim_dDampgHwTqSca();
}
float32 *TSC_Dampg_Rte_Pim_dDampgMotVelDampgCmd(void)
{
  return Rte_Pim_dDampgMotVelDampgCmd();
}
float32 *TSC_Dampg_Rte_Pim_dDampgQuadHwTqBacklsh(void)
{
  return Rte_Pim_dDampgQuadHwTqBacklsh();
}
float32 *TSC_Dampg_Rte_Pim_dDampgQuadMotVelBacklsh(void)
{
  return Rte_Pim_dDampgQuadMotVelBacklsh();
}
FilLpRec1 *TSC_Dampg_Rte_Pim_MotVelDampgLpFil(void)
{
  return Rte_Pim_MotVelDampgLpFil();
}
FilLpRec1 *TSC_Dampg_Rte_Pim_QuadDampgHwTqLpFil(void)
{
  return Rte_Pim_QuadDampgHwTqLpFil();
}
FilLpRec1 *TSC_Dampg_Rte_Pim_QuadDampgMotVelLpFil(void)
{
  return Rte_Pim_QuadDampgMotVelLpFil();
}
FilLpRec1 *TSC_Dampg_Rte_Pim_QuadDampgScaLpFil(void)
{
  return Rte_Pim_QuadDampgScaLpFil();
}


