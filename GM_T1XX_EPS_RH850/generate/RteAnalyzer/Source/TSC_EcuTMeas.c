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
 *          File:  TSC_EcuTMeas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_EcuTMeas.h"
#include "TSC_EcuTMeas.h"








Std_ReturnType TSC_EcuTMeas_Rte_Read_EcuT_Val(float32 *data)
{
  return Rte_Read_EcuT_Val(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_EcuTMeas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_EcuTMeas_Rte_Read_DiagcStsLimdTPrfmnc_Logl(boolean *data)
{
  return Rte_Read_DiagcStsLimdTPrfmnc_Logl(data);
}

Std_ReturnType TSC_EcuTMeas_Rte_Read_EcuTAdcFaild_Logl(boolean *data)
{
  return Rte_Read_EcuTAdcFaild_Logl(data);
}




Std_ReturnType TSC_EcuTMeas_Rte_Write_EcuTFild_Val(float32 data)
{
  return Rte_Write_EcuTFild_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasDftT_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasDftT_Val();
}
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasFilTau_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasFilTau_Val();
}
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasRngDiagcMax_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasRngDiagcMax_Val();
}
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasRngDiagcMin_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasRngDiagcMin_Val();
}
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasScag_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasScag_Val();
}
float32  TSC_EcuTMeas_Rte_Prm_EcuTMeasScagOffs_Val(void)
{
  return (float32 ) Rte_Prm_EcuTMeasScagOffs_Val();
}
uint16  TSC_EcuTMeas_Rte_Prm_EcuTMeasNtc0x045FailStep_Val(void)
{
  return (uint16 ) Rte_Prm_EcuTMeasNtc0x045FailStep_Val();
}
uint16  TSC_EcuTMeas_Rte_Prm_EcuTMeasNtc0x045PassStep_Val(void)
{
  return (uint16 ) Rte_Prm_EcuTMeasNtc0x045PassStep_Val();
}


     /* EcuTMeas */
      /* EcuTMeas */

/** Per Instance Memories */
FilLpRec1 *TSC_EcuTMeas_Rte_Pim_EcuTMeasFilStVarPrev(void)
{
  return Rte_Pim_EcuTMeasFilStVarPrev();
}


