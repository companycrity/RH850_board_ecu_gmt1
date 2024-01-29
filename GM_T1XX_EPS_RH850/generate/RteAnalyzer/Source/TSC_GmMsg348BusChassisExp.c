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
 *          File:  TSC_GmMsg348BusChassisExp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg348BusChassisExp.h"
#include "TSC_GmMsg348BusChassisExp.h"








Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_LstRxnTiMsg348BusChassisExp_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg348BusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelLeDrvnRawBusChassisExp_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelLeDrvnRawBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelLeDrvnVldRawBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelLeDrvnVldRawBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelRiDrvnRawBusChassisExp_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelRiDrvnRawBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelRiDrvnVldRawBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelRiDrvnVldRawBusChassisExp_Val(data);
}




Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelLeDrvnBusChassisExp_Val(float32 data)
{
  return Rte_Write_WhlGndVelLeDrvnBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelLeDrvnStuckBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeDrvnStuckBusChassisExp_Logl(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelLeDrvnVldBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeDrvnVldBusChassisExp_Logl(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelRiDrvnBusChassisExp_Val(float32 data)
{
  return Rte_Write_WhlGndVelRiDrvnBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelRiDrvnStuckBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiDrvnStuckBusChassisExp_Logl(data);
}

Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelRiDrvnVldBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiDrvnVldBusChassisExp_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg348BusChassisExp_Rte_Prm_GmMsg348BusChassisExpInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg348BusChassisExpInvldTiOut_Val();
}
uint16  TSC_GmMsg348BusChassisExp_Rte_Prm_GmMsg348BusChassisExpMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg348BusChassisExpMissTiOut_Val();
}
uint16  TSC_GmMsg348BusChassisExp_Rte_Prm_GmMsg348BusChassisExpStuckTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg348BusChassisExpStuckTiOut_Val();
}


     /* GmMsg348BusChassisExp */
      /* GmMsg348BusChassisExp */

/** Per Instance Memories */
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi();
}
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi();
}
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi();
}
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi();
}
uint16 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn(void)
{
  return Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn();
}
uint16 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn(void)
{
  return Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn();
}


