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
 *          File:  TSC_GmTqArbn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmTqArbn.h"
#include "TSC_GmTqArbn.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmTqArbn_Rte_Read_EscCmd_Val(float32 *data)
{
  return Rte_Read_EscCmd_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_EscSt_Val(GmTqArbnEscSt1 *data)
{
  return Rte_Read_EscSt_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_HwAgServoEna_Logl(boolean *data)
{
  return Rte_Read_HwAgServoEna_Logl(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_HwOscnEna_Logl(boolean *data)
{
  return Rte_Read_HwOscnEna_Logl(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_HwTqOscCmd_Val(float32 *data)
{
  return Rte_Read_HwTqOscCmd_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_LkaSt_Val(GmTqArbnLkaSt1 *data)
{
  return Rte_Read_LkaSt_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_LkaTqCmd_Val(float32 *data)
{
  return Rte_Read_LkaTqCmd_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_MotTqServoCmd_Val(float32 *data)
{
  return Rte_Read_MotTqServoCmd_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Read_VehSpdMaxSecur_Val(float32 *data)
{
  return Rte_Read_VehSpdMaxSecur_Val(data);
}




Std_ReturnType TSC_GmTqArbn_Rte_Write_AssiCmdBasSca_Val(float32 data)
{
  return Rte_Write_AssiCmdBasSca_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_DampgCmdSca_Val(float32 data)
{
  return Rte_Write_DampgCmdSca_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_EscCmdArbd_Val(float32 data)
{
  return Rte_Write_EscCmdArbd_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_EscLimdActv_Logl(boolean data)
{
  return Rte_Write_EscLimdActv_Logl(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_HwTqOvrl_Val(float32 data)
{
  return Rte_Write_HwTqOvrl_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_LkaTqCmdCdnd_Val(float32 data)
{
  return Rte_Write_LkaTqCmdCdnd_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_MotTqCmdOvrl_Val(float32 data)
{
  return Rte_Write_MotTqCmdOvrl_Val(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_PullCmpCustLrngDi_Logl(boolean data)
{
  return Rte_Write_PullCmpCustLrngDi_Logl(data);
}

Std_ReturnType TSC_GmTqArbn_Rte_Write_RtnCmdSca_Val(float32 data)
{
  return Rte_Write_RtnCmdSca_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmTqArbn_Rte_Prm_GmTqArbnApaEnaRate_Val(void)
{
  return (float32 ) Rte_Prm_GmTqArbnApaEnaRate_Val();
}
float32  TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val();
}
float32  TSC_GmTqArbn_Rte_Prm_GmTqArbnEscMaxTq_Val(void)
{
  return (float32 ) Rte_Prm_GmTqArbnEscMaxTq_Val();
}
float32  TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val(void)
{
  return (float32 ) Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val();
}
boolean  TSC_GmTqArbn_Rte_Prm_GmTqArbnApaAssiScaEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmTqArbnApaAssiScaEna_Logl();
}
boolean  TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDampgScaEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmTqArbnApaDampgScaEna_Logl();
}
boolean  TSC_GmTqArbn_Rte_Prm_GmTqArbnApaRtnScaEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmTqArbnApaRtnScaEna_Logl();
}
boolean  TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmTqArbnLkaSlewEna_Logl();
}
Ary1D_u4p12_6 * TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDiRateX_Ary1D(void)
{
  return (Ary1D_u4p12_6 *) Rte_Prm_GmTqArbnApaDiRateX_Ary1D();
}
Ary1D_u7p9_6 * TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDiRateY_Ary1D(void)
{
  return (Ary1D_u7p9_6 *) Rte_Prm_GmTqArbnApaDiRateY_Ary1D();
}
Ary1D_u1p15_10 * TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngX_Ary1D(void)
{
  return (Ary1D_u1p15_10 *) Rte_Prm_GmTqArbnApaSmotngX_Ary1D();
}
Ary1D_u1p15_10 * TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngY_Ary1D(void)
{
  return (Ary1D_u1p15_10 *) Rte_Prm_GmTqArbnApaSmotngY_Ary1D();
}
Ary2D_u4p12_12_20 * TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(void)
{
  return (Ary2D_u4p12_12_20 *) Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D();
}
Ary2D_u4p12_12_20 * TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(void)
{
  return (Ary2D_u4p12_12_20 *) Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D();
}
Ary1D_u8p8_6 * TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewX_Ary1D(void)
{
  return (Ary1D_u8p8_6 *) Rte_Prm_GmTqArbnLkaSlewX_Ary1D();
}
Ary1D_u4p12_6 * TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewY_Ary1D(void)
{
  return (Ary1D_u4p12_6 *) Rte_Prm_GmTqArbnLkaSlewY_Ary1D();
}
Ary1D_u9p7_12 * TSC_GmTqArbn_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D();
}


     /* GmTqArbn */
      /* GmTqArbn */

/** Per Instance Memories */
float32 *TSC_GmTqArbn_Rte_Pim_ActPosnServoCmd(void)
{
  return Rte_Pim_ActPosnServoCmd();
}
float32 *TSC_GmTqArbn_Rte_Pim_DesLkaTqCmdRateLim(void)
{
  return Rte_Pim_DesLkaTqCmdRateLim();
}
float32 *TSC_GmTqArbn_Rte_Pim_PosnServoSmotngEnaRateLim(void)
{
  return Rte_Pim_PosnServoSmotngEnaRateLim();
}
float32 *TSC_GmTqArbn_Rte_Pim_dGmTqArbnDesLkaTqCmd(void)
{
  return Rte_Pim_dGmTqArbnDesLkaTqCmd();
}
float32 *TSC_GmTqArbn_Rte_Pim_dGmTqArbnEscTqCmd(void)
{
  return Rte_Pim_dGmTqArbnEscTqCmd();
}
float32 *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaOutpTqReq(void)
{
  return Rte_Pim_dGmTqArbnLkaOutpTqReq();
}
float32 *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaTqCmd(void)
{
  return Rte_Pim_dGmTqArbnLkaTqCmd();
}
float32 *TSC_GmTqArbn_Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim(void)
{
  return Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim();
}
FilLpRec1 *TSC_GmTqArbn_Rte_Pim_APASmotngHwTqLpFil(void)
{
  return Rte_Pim_APASmotngHwTqLpFil();
}


