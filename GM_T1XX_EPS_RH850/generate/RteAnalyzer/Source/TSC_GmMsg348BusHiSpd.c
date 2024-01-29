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
 *          File:  TSC_GmMsg348BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg348BusHiSpd.h"
#include "TSC_GmMsg348BusHiSpd.h"








Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_LstRxnTiMsg348BusHiSpd_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg348BusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelLeDrvnRawBusHiSpd_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelLeDrvnRawBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelLeDrvnVldRawBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelLeDrvnVldRawBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelRiDrvnRawBusHiSpd_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelRiDrvnRawBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelRiDrvnVldRawBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelRiDrvnVldRawBusHiSpd_Val(data);
}




Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelLeDrvnBusHiSpd_Val(float32 data)
{
  return Rte_Write_WhlGndVelLeDrvnBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelLeDrvnStuckBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeDrvnStuckBusHiSpd_Logl(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelLeDrvnVldBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeDrvnVldBusHiSpd_Logl(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelRiDrvnBusHiSpd_Val(float32 data)
{
  return Rte_Write_WhlGndVelRiDrvnBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelRiDrvnStuckBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiDrvnStuckBusHiSpd_Logl(data);
}

Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelRiDrvnVldBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiDrvnVldBusHiSpd_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg348BusHiSpd_Rte_Prm_GmMsg348BusHiSpdInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg348BusHiSpdInvldTiOut_Val();
}
uint16  TSC_GmMsg348BusHiSpd_Rte_Prm_GmMsg348BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg348BusHiSpdMissTiOut_Val();
}
uint16  TSC_GmMsg348BusHiSpd_Rte_Prm_GmMsg348BusHiSpdStuckTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg348BusHiSpdStuckTiOut_Val();
}


     /* GmMsg348BusHiSpd */
      /* GmMsg348BusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi();
}
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi();
}
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi();
}
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi();
}
uint16 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn(void)
{
  return Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn();
}
uint16 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn(void)
{
  return Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn();
}


