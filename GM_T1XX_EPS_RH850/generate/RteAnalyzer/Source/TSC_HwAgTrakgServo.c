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
 *          File:  TSC_HwAgTrakgServo.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAgTrakgServo.h"
#include "TSC_HwAgTrakgServo.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwAgTrakgServoCmd_Val(float32 *data)
{
  return Rte_Read_HwAgTrakgServoCmd_Val(data);
}

Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwAgTrakgServoEna_Logl(boolean *data)
{
  return Rte_Read_HwAgTrakgServoEna_Logl(data);
}

Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_HwAgTrakgServo_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_HwAgTrakgServo_Rte_Write_MotTqServoCmd_Val(float32 data)
{
  return Rte_Write_MotTqServoCmd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoEnaRate_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoEnaRate_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoExecRate_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoExecRate_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxRamp_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoMaxRamp_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMinRamp_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoMinRamp_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPidLim_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoPidLim_Val();
}
float32  TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoRampCmpl_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrakgServoRampCmpl_Val();
}
Ary1D_u11p5_13 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(void)
{
  return (Ary1D_u11p5_13 *) Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D();
}
Ary2D_u4p12_3_13 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(void)
{
  return (Ary2D_u4p12_3_13 *) Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D();
}
Ary1D_u0p16_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D(void)
{
  return (Ary1D_u0p16_3 *) Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D();
}
Ary1D_u4p12_6 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateX_Ary1D(void)
{
  return (Ary1D_u4p12_6 *) Rte_Prm_HwAgTrakgServoDiRateX_Ary1D();
}
Ary1D_u7p9_6 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoDiRateY_Ary1D(void)
{
  return (Ary1D_u7p9_6 *) Rte_Prm_HwAgTrakgServoDiRateY_Ary1D();
}
Ary1D_u10p6_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D(void)
{
  return (Ary1D_u10p6_3 *) Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D();
}
Ary1D_u2p14_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D(void)
{
  return (Ary1D_u2p14_3 *) Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D();
}
Ary1D_u10p6_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(void)
{
  return (Ary1D_u10p6_3 *) Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D();
}
Ary1D_u8p8_4 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D(void)
{
  return (Ary1D_u8p8_4 *) Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D();
}
Ary1D_u4p12_4 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D(void)
{
  return (Ary1D_u4p12_4 *) Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D();
}
Ary1D_u12p4_7 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(void)
{
  return (Ary1D_u12p4_7 *) Rte_Prm_HwAgTrakgServoPropGainX_Ary1D();
}
Ary2D_u10p6_3_7 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(void)
{
  return (Ary2D_u10p6_3_7 *) Rte_Prm_HwAgTrakgServoPropGainY_Ary2D();
}
Ary1D_u1p15_10 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngX_Ary1D(void)
{
  return (Ary1D_u1p15_10 *) Rte_Prm_HwAgTrakgServoSmotngX_Ary1D();
}
Ary1D_u1p15_10 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoSmotngY_Ary1D(void)
{
  return (Ary1D_u1p15_10 *) Rte_Prm_HwAgTrakgServoSmotngY_Ary1D();
}
Ary1D_u9p7_3 * TSC_HwAgTrakgServo_Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D(void)
{
  return (Ary1D_u9p7_3 *) Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D();
}


     /* HwAgTrakgServo */
      /* HwAgTrakgServo */

/** Per Instance Memories */
float32 *TSC_HwAgTrakgServo_Rte_Pim_HwAgTarRateLim(void)
{
  return Rte_Pim_HwAgTarRateLim();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevDftlErr(void)
{
  return Rte_Pim_PrevDftlErr();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevHwAgTar(void)
{
  return Rte_Pim_PrevHwAgTar();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevIntglErr(void)
{
  return Rte_Pim_PrevIntglErr();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_PrevSmotng(void)
{
  return Rte_Pim_PrevSmotng();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoDftlTerm(void)
{
  return Rte_Pim_dHwAgTrakgServoDftlTerm();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoHwAgTarFild(void)
{
  return Rte_Pim_dHwAgTrakgServoHwAgTarFild();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoIntglTerm(void)
{
  return Rte_Pim_dHwAgTrakgServoIntglTerm();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPidCmd(void)
{
  return Rte_Pim_dHwAgTrakgServoPidCmd();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoPropTerm(void)
{
  return Rte_Pim_dHwAgTrakgServoPropTerm();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRtnScaFac(void)
{
  return Rte_Pim_dHwAgTrakgServoRtnScaFac();
}
float32 *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoSmotngEna(void)
{
  return Rte_Pim_dHwAgTrakgServoSmotngEna();
}
boolean *TSC_HwAgTrakgServo_Rte_Pim_dHwAgTrakgServoRampCmpl(void)
{
  return Rte_Pim_dHwAgTrakgServoRampCmpl();
}
FilLpRec1 *TSC_HwAgTrakgServo_Rte_Pim_DftlTermLpFil(void)
{
  return Rte_Pim_DftlTermLpFil();
}
FilLpRec1 *TSC_HwAgTrakgServo_Rte_Pim_HwAgLpFil(void)
{
  return Rte_Pim_HwAgLpFil();
}
FilLpRec1 *TSC_HwAgTrakgServo_Rte_Pim_HwTqLpFil(void)
{
  return Rte_Pim_HwTqLpFil();
}


