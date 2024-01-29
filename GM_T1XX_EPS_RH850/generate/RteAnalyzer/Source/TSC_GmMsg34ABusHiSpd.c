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
 *          File:  TSC_GmMsg34ABusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg34ABusHiSpd.h"
#include "TSC_GmMsg34ABusHiSpd.h"








Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_LstRxnTiMsg34ABusHiSpd_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg34ABusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelLeNonDrvnRawBusHiSpd_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelLeNonDrvnRawBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelRiNonDrvnRawBusHiSpd_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelRiNonDrvnRawBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(data);
}




Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelLeNonDrvnBusHiSpd_Val(float32 data)
{
  return Rte_Write_WhlGndVelLeNonDrvnBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelRiNonDrvnBusHiSpd_Val(float32 data)
{
  return Rte_Write_WhlGndVelRiNonDrvnBusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(data);
}

Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg34ABusHiSpd_Rte_Prm_GmMsg34ABusHiSpdInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg34ABusHiSpdInvldTiOut_Val();
}
uint16  TSC_GmMsg34ABusHiSpd_Rte_Prm_GmMsg34ABusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg34ABusHiSpdMissTiOut_Val();
}
uint16  TSC_GmMsg34ABusHiSpd_Rte_Prm_GmMsg34ABusHiSpdStuckTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg34ABusHiSpdStuckTiOut_Val();
}


     /* GmMsg34ABusHiSpd */
      /* GmMsg34ABusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi();
}
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi();
}
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi();
}
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi();
}
uint16 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn(void)
{
  return Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn();
}
uint16 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn(void)
{
  return Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn();
}


