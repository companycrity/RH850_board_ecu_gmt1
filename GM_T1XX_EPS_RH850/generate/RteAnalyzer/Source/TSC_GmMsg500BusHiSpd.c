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
 *          File:  TSC_GmMsg500BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg500BusHiSpd.h"
#include "TSC_GmMsg500BusHiSpd.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Read_LstRxnTiMsg500BusHiSpd_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg500BusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Read_WhlPlsPerRevRaw_Val(uint8 *data)
{
  return Rte_Read_WhlPlsPerRevRaw_Val(data);
}

Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Read_WhlRotlStsTiStampReslRaw_Val(uint16 *data)
{
  return Rte_Read_WhlRotlStsTiStampReslRaw_Val(data);
}




Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Write_WhlPlsPerRev_Val(uint8 data)
{
  return Rte_Write_WhlPlsPerRev_Val(data);
}

Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Write_WhlRotlStsTiStampResl_Val(float32 data)
{
  return Rte_Write_WhlRotlStsTiStampResl_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmMsg500BusHiSpd_Rte_Prm_GmMsg500BusHiSpdWhlRotlStsTiStampReslDft_Val(void)
{
  return (float32 ) Rte_Prm_GmMsg500BusHiSpdWhlRotlStsTiStampReslDft_Val();
}
uint16  TSC_GmMsg500BusHiSpd_Rte_Prm_GmMsg500BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg500BusHiSpdMissTiOut_Val();
}
uint8  TSC_GmMsg500BusHiSpd_Rte_Prm_GmMsg500BusHiSpdWhlPlsPerRevDft_Val(void)
{
  return (uint8 ) Rte_Prm_GmMsg500BusHiSpdWhlPlsPerRevDft_Val();
}


     /* GmMsg500BusHiSpd */
      /* GmMsg500BusHiSpd */

/** Per Instance Memories */
float32 *TSC_GmMsg500BusHiSpd_Rte_Pim_GmMsg500BusHiSpdPrevWhlRotlStsTiStampResl(void)
{
  return Rte_Pim_GmMsg500BusHiSpdPrevWhlRotlStsTiStampResl();
}
uint32 *TSC_GmMsg500BusHiSpd_Rte_Pim_GmMsg500BusHiSpdPrevRxnTi(void)
{
  return Rte_Pim_GmMsg500BusHiSpdPrevRxnTi();
}
uint8 *TSC_GmMsg500BusHiSpd_Rte_Pim_GmMsg500BusHiSpdPrevWhlPlsPerRev(void)
{
  return Rte_Pim_GmMsg500BusHiSpdPrevWhlPlsPerRev();
}


