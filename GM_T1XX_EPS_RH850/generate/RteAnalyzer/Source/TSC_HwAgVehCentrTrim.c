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
 *          File:  TSC_HwAgVehCentrTrim.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAgVehCentrTrim.h"
#include "TSC_HwAgVehCentrTrim.h"















     // Client Server Interfaces:
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls
Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Call_HwAgTrimData_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwAgTrimData_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}




Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Write_HwAgTrimPrfmd_Logl(boolean data)
{
  return Rte_Write_HwAgTrimPrfmd_Logl(data);
}

Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Write_HwAgVehTrimOffs_Val(float32 data)
{
  return Rte_Write_HwAgVehTrimOffs_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_EngRunActv_Logl(boolean *data)
{
  return Rte_Read_EngRunActv_Logl(data);
}

Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgCcwDetd_Logl(boolean *data)
{
  return Rte_Read_HwAgCcwDetd_Logl(data);
}

Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgCwDetd_Logl(boolean *data)
{
  return Rte_Read_HwAgCwDetd_Logl(data);
}

Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgEotCcw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCcw_Val(data);
}

Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_HwAgEotCw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCw_Val(data);
}

Std_ReturnType TSC_HwAgVehCentrTrim_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HwAgVehCentrTrim_Rte_Prm_HwAgVehCentrTrimHwAgLim_Val(void)
{
  return (float32 ) Rte_Prm_HwAgVehCentrTrimHwAgLim_Val();
}
float32  TSC_HwAgVehCentrTrim_Rte_Prm_HwAgVehCentrTrimVehSpdMaxThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgVehCentrTrimVehSpdMaxThd_Val();
}

HwAgSnsrTrimRec1 * TSC_HwAgVehCentrTrim_Rte_CData_HwAgTrimDataDft(void)
{
  return (HwAgSnsrTrimRec1 *) Rte_CData_HwAgTrimDataDft();
}

     /* HwAgVehCentrTrim */
      /* HwAgVehCentrTrim */

/** Per Instance Memories */
HwAgSnsrTrimRec1 *TSC_HwAgVehCentrTrim_Rte_Pim_HwAgTrimData(void)
{
  return Rte_Pim_HwAgTrimData();
}


