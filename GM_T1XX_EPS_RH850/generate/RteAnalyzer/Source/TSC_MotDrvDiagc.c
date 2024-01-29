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
 *          File:  TSC_MotDrvDiagc.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_MotDrvDiagc.h"
#include "TSC_MotDrvDiagc.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_MotDrvDiagc_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
{
  return Rte_Read_DiagcStsIvtr1Inactv_Logl(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
{
  return Rte_Read_DiagcStsIvtr2Inactv_Logl(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdA_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiMeasdA_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdB_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiMeasdB_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdC_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiMeasdC_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdD_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiMeasdD_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdE_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiMeasdE_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdF_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiMeasdF_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiSumA_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiSumA_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiSumB_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiSumB_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiSumC_Val(uint32 *data)
{
  return Rte_Read_PhaOnTiSumC_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Read_SysSt_Val(SysSt1 *data)
{
  return Rte_Read_SysSt_Val(data);
}




Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrA_Val(float32 data)
{
  return Rte_Write_MotDrvErrA_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrB_Val(float32 data)
{
  return Rte_Write_MotDrvErrB_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrC_Val(float32 data)
{
  return Rte_Write_MotDrvErrC_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrD_Val(float32 data)
{
  return Rte_Write_MotDrvErrD_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrE_Val(float32 data)
{
  return Rte_Write_MotDrvErrE_Val(data);
}

Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrF_Val(float32 data)
{
  return Rte_Write_MotDrvErrF_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_MotDrvDiagc_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_MotDrvDiagc_Rte_Prm_MotDrvDiagcErrFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_MotDrvDiagcErrFilFrq_Val();
}
uint32  TSC_MotDrvDiagc_Rte_Prm_MotDrvDiagcErrOffs_Val(void)
{
  return (uint32 ) Rte_Prm_MotDrvDiagcErrOffs_Val();
}
uint32  TSC_MotDrvDiagc_Rte_Prm_MotDrvDiagcErrThd_Val(void)
{
  return (uint32 ) Rte_Prm_MotDrvDiagcErrThd_Val();
}


     /* MotDrvDiagc */
      /* MotDrvDiagc */

/** Per Instance Memories */
uint32 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaOnTiSumAPrev(void)
{
  return Rte_Pim_MotDrvDiagcPhaOnTiSumAPrev();
}
uint32 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaOnTiSumBPrev(void)
{
  return Rte_Pim_MotDrvDiagcPhaOnTiSumBPrev();
}
uint32 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaOnTiSumCPrev(void)
{
  return Rte_Pim_MotDrvDiagcPhaOnTiSumCPrev();
}
boolean *TSC_MotDrvDiagc_Rte_Pim_UnitDly(void)
{
  return Rte_Pim_UnitDly();
}
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaAFilLp(void)
{
  return Rte_Pim_MotDrvDiagcPhaAFilLp();
}
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaBFilLp(void)
{
  return Rte_Pim_MotDrvDiagcPhaBFilLp();
}
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaCFilLp(void)
{
  return Rte_Pim_MotDrvDiagcPhaCFilLp();
}
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaDFilLp(void)
{
  return Rte_Pim_MotDrvDiagcPhaDFilLp();
}
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaEFilLp(void)
{
  return Rte_Pim_MotDrvDiagcPhaEFilLp();
}
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaFFilLp(void)
{
  return Rte_Pim_MotDrvDiagcPhaFFilLp();
}


