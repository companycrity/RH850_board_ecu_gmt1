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
 *          File:  TSC_GmMsg1F1BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg1F1BusHiSpd.h"
#include "TSC_GmMsg1F1BusHiSpd.h"








Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_EngRunActv_Logl(boolean *data)
{
  return Rte_Read_EngRunActv_Logl(data);
}

Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_LstRxnTiMsg1F1_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg1F1_Val(data);
}

Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_SysBackUpPwrModEnaRaw_Val(uint8 *data)
{
  return Rte_Read_SysBackUpPwrModEnaRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_SysBackUpPwrModRaw_Val(uint8 *data)
{
  return Rte_Read_SysBackUpPwrModRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_SysPwrModRaw_Val(uint8 *data)
{
  return Rte_Read_SysPwrModRaw_Val(data);
}




Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Write_MissMsg1F1_Logl(boolean data)
{
  return Rte_Write_MissMsg1F1_Logl(data);
}

Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Write_SysPwrMod_Val(GmSysPwrMod1 data)
{
  return Rte_Write_SysPwrMod_Val(data);
}

Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Write_SysPwrModRun_Logl(boolean data)
{
  return Rte_Write_SysPwrModRun_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg1F1BusHiSpd_Rte_Prm_GmMsg1F1BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1F1BusHiSpdMissTiOut_Val();
}


     /* GmMsg1F1BusHiSpd */
      /* GmMsg1F1BusHiSpd */

/** Per Instance Memories */
boolean *TSC_GmMsg1F1BusHiSpd_Rte_Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun(void)
{
  return Rte_Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun();
}


