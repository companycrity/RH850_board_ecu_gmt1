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
 *          File:  TSC_HwAgTrajGenn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAgTrajGenn.h"
#include "TSC_HwAgTrajGenn.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HwAgTrajGenn_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_HwAgTrajGenn_Rte_Read_HwAgTrajGennEna_Logl(boolean *data)
{
  return Rte_Read_HwAgTrajGennEna_Logl(data);
}




Std_ReturnType TSC_HwAgTrajGenn_Rte_Write_HwAgTrakgServoCmd_Val(float32 data)
{
  return Rte_Write_HwAgTrakgServoCmd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
float32 TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwATar(void)
{
return Rte_IrvRead_HwAgTrajGennPer1_HwATar();
}
float32 TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwAgTar(void)
{
return Rte_IrvRead_HwAgTrajGennPer1_HwAgTar();
}
float32 TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwVelTar(void)
{
return Rte_IrvRead_HwAgTrajGennPer1_HwVelTar();
}













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(float32 data)
{
  Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar( data);
}
void TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(float32 data)
{
  Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar( data);
}
void TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(float32 data)
{
  Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar( data);
}




float32  TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAMax_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrajGennAMax_Val();
}
float32  TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAgMax_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrajGennAgMax_Val();
}
float32  TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennVelMax_Val(void)
{
  return (float32 ) Rte_Prm_HwAgTrajGennVelMax_Val();
}


     /* HwAgTrajGenn */
      /* HwAgTrajGenn */

/** Per Instance Memories */
float32 *TSC_HwAgTrajGenn_Rte_Pim_AMax(void)
{
  return Rte_Pim_AMax();
}
float32 *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni(void)
{
  return Rte_Pim_HwPosnIni();
}
float32 *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs(void)
{
  return Rte_Pim_HwPosnOffs();
}
float32 *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta(void)
{
  return Rte_Pim_SignHwPosnDelta();
}
float32 *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA(void)
{
  return Rte_Pim_TiDeltaA();
}
float32 *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel(void)
{
  return Rte_Pim_TiDeltaVel();
}
float32 *TSC_HwAgTrajGenn_Rte_Pim_TiSt(void)
{
  return Rte_Pim_TiSt();
}
float32 *TSC_HwAgTrajGenn_Rte_Pim_VelMax(void)
{
  return Rte_Pim_VelMax();
}
HwAgTrajCmdSt1 *TSC_HwAgTrajGenn_Rte_Pim_CmdSt(void)
{
  return Rte_Pim_CmdSt();
}
boolean *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg(void)
{
  return Rte_Pim_CalcFlg();
}


