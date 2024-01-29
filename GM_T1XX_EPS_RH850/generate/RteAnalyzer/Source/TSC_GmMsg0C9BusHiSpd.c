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
 *          File:  TSC_GmMsg0C9BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg0C9BusHiSpd.h"
#include "TSC_GmMsg0C9BusHiSpd.h"








Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_EngRunActvRaw_Val(uint8 *data)
{
  return Rte_Read_EngRunActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_EngSpdRaw_Val(uint16 *data)
{
  return Rte_Read_EngSpdRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_EngSpdStsRaw_Val(uint8 *data)
{
  return Rte_Read_EngSpdStsRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_LstRxnTiMsg0C9_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg0C9_Val(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_PtCrkActvRaw_Val(uint8 *data)
{
  return Rte_Read_PtCrkActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}




Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_EngRunActv_Logl(boolean data)
{
  return Rte_Write_EngRunActv_Logl(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_EngSpd_Val(float32 data)
{
  return Rte_Write_EngSpd_Val(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_EngSpdStsNorm_Logl(boolean data)
{
  return Rte_Write_EngSpdStsNorm_Logl(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_InvldMsg0C9_Logl(boolean data)
{
  return Rte_Write_InvldMsg0C9_Logl(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_MissMsg0C9_Logl(boolean data)
{
  return Rte_Write_MissMsg0C9_Logl(data);
}

Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_PtCrkActv_Logl(boolean data)
{
  return Rte_Write_PtCrkActv_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmMsg0C9BusHiSpd_Rte_Prm_GmMsg0C9BusHiSpdVehSpdThd_Val(void)
{
  return (float32 ) Rte_Prm_GmMsg0C9BusHiSpdVehSpdThd_Val();
}
uint16  TSC_GmMsg0C9BusHiSpd_Rte_Prm_GmMsg0C9BusHiSpdInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg0C9BusHiSpdInvldTiOut_Val();
}
uint16  TSC_GmMsg0C9BusHiSpd_Rte_Prm_GmMsg0C9BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg0C9BusHiSpdMissTiOut_Val();
}


     /* GmMsg0C9BusHiSpd */
      /* GmMsg0C9BusHiSpd */

/** Per Instance Memories */
float32 *TSC_GmMsg0C9BusHiSpd_Rte_Pim_GmMsg0C9BusHiSpdPrevEndSpd(void)
{
  return Rte_Pim_GmMsg0C9BusHiSpdPrevEndSpd();
}
uint32 *TSC_GmMsg0C9BusHiSpd_Rte_Pim_GmMsg0C9BusHiSpdInvldMsgTmr(void)
{
  return Rte_Pim_GmMsg0C9BusHiSpdInvldMsgTmr();
}
boolean *TSC_GmMsg0C9BusHiSpd_Rte_Pim_GmMsg0C9BusHiSpdPrevEngRunActv(void)
{
  return Rte_Pim_GmMsg0C9BusHiSpdPrevEngRunActv();
}


