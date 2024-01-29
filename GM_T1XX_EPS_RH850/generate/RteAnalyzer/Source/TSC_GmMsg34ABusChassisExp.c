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
 *          File:  TSC_GmMsg34ABusChassisExp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg34ABusChassisExp.h"
#include "TSC_GmMsg34ABusChassisExp.h"








Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_LstRxnTiMsg34ABusChassisExp_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg34ABusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelLeNonDrvnRawBusChassisExp_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelLeNonDrvnRawBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelRiNonDrvnRawBusChassisExp_Val(uint16 *data)
{
  return Rte_Read_WhlGndVelRiNonDrvnRawBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(data);
}




Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelLeNonDrvnBusChassisExp_Val(float32 data)
{
  return Rte_Write_WhlGndVelLeNonDrvnBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelRiNonDrvnBusChassisExp_Val(float32 data)
{
  return Rte_Write_WhlGndVelRiNonDrvnBusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(data);
}

Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(boolean data)
{
  return Rte_Write_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg34ABusChassisExp_Rte_Prm_GmMsg34ABusChassisExpInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg34ABusChassisExpInvldTiOut_Val();
}
uint16  TSC_GmMsg34ABusChassisExp_Rte_Prm_GmMsg34ABusChassisExpMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg34ABusChassisExpMissTiOut_Val();
}
uint16  TSC_GmMsg34ABusChassisExp_Rte_Prm_GmMsg34ABusChassisExpStuckTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg34ABusChassisExpStuckTiOut_Val();
}


     /* GmMsg34ABusChassisExp */
      /* GmMsg34ABusChassisExp */

/** Per Instance Memories */
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi();
}
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi();
}
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi(void)
{
  return Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi();
}
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi(void)
{
  return Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi();
}
uint16 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn(void)
{
  return Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn();
}
uint16 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn(void)
{
  return Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn();
}


