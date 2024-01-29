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
 *          File:  TSC_GmMsg3F1BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg3F1BusHiSpd.h"
#include "TSC_GmMsg3F1BusHiSpd.h"








Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Read_LstRxnTiMsg3F1_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg3F1_Val(data);
}

Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Read_OutdAirTCorrdValMaskRaw_Val(uint8 *data)
{
  return Rte_Read_OutdAirTCorrdValMaskRaw_Val(data);
}

Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Read_OutdAirTCorrdValRaw_Val(uint8 *data)
{
  return Rte_Read_OutdAirTCorrdValRaw_Val(data);
}

Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Read_OutdAirTCorrdValVldRaw_Val(uint8 *data)
{
  return Rte_Read_OutdAirTCorrdValVldRaw_Val(data);
}




Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Write_AmbT_Val(float32 data)
{
  return Rte_Write_AmbT_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg3F1BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmMsg3F1BusHiSpd_Rte_Prm_GmMsg3F1BusHiSpdAmbTDft_Val(void)
{
  return (float32 ) Rte_Prm_GmMsg3F1BusHiSpdAmbTDft_Val();
}
uint16  TSC_GmMsg3F1BusHiSpd_Rte_Prm_GmMsg3F1BusHiSpdInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg3F1BusHiSpdInvldTiOut_Val();
}
uint16  TSC_GmMsg3F1BusHiSpd_Rte_Prm_GmMsg3F1BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg3F1BusHiSpdMissTiOut_Val();
}


     /* GmMsg3F1BusHiSpd */
      /* GmMsg3F1BusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg3F1BusHiSpd_Rte_Pim_GmMsg3F1BusHiSpdInvldMsgTmr(void)
{
  return Rte_Pim_GmMsg3F1BusHiSpdInvldMsgTmr();
}


