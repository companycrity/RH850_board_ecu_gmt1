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
 *          File:  TSC_GmMsg182BusChassisExp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg182BusChassisExp.h"
#include "TSC_GmMsg182BusChassisExp.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_LstRxnTiMsg182_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg182_Val(data);
}

Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_VehDynOverUnderSteerVldRaw_Val(uint8 *data)
{
  return Rte_Read_VehDynOverUnderSteerVldRaw_Val(data);
}

Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_VehStabyEnhmtLgtALoReslRaw_Val(uint16 *data)
{
  return Rte_Read_VehStabyEnhmtLgtALoReslRaw_Val(data);
}

Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_VehStabyEnhmtLgtALoReslVldRaw_Val(uint8 *data)
{
  return Rte_Read_VehStabyEnhmtLgtALoReslVldRaw_Val(data);
}




Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Write_SerlComVehLgtA_Val(float32 data)
{
  return Rte_Write_SerlComVehLgtA_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg182BusChassisExp_Rte_Prm_GmMsg182BusChassisExpInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg182BusChassisExpInvldTiOut_Val();
}
uint16  TSC_GmMsg182BusChassisExp_Rte_Prm_GmMsg182BusChassisExpMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg182BusChassisExpMissTiOut_Val();
}


     /* GmMsg182BusChassisExp */
      /* GmMsg182BusChassisExp */

/** Per Instance Memories */
float32 *TSC_GmMsg182BusChassisExp_Rte_Pim_GmMsg182BusChassisExpPrevVehLgtA(void)
{
  return Rte_Pim_GmMsg182BusChassisExpPrevVehLgtA();
}
uint32 *TSC_GmMsg182BusChassisExp_Rte_Pim_GmMsg182BusChassisExpInvldTmr(void)
{
  return Rte_Pim_GmMsg182BusChassisExpInvldTmr();
}


