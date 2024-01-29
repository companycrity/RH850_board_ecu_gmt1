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
 *          File:  TSC_GmMsg180BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg180BusHiSpd.h"
#include "TSC_GmMsg180BusHiSpd.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdProtnValRaw_Val(uint16 *data)
{
  return Rte_Read_LkaCmdProtnValRaw_Val(data);
}

Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdRollgCntrRaw_Val(uint8 *data)
{
  return Rte_Read_LkaCmdRollgCntrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdTqReqActvRaw_Val(uint8 *data)
{
  return Rte_Read_LkaCmdTqReqActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdTqValRaw_Val(uint16 *data)
{
  return Rte_Read_LkaCmdTqValRaw_Val(data);
}

Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LstRxnTiMsg180BusHiSpd_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg180BusHiSpd_Val(data);
}




Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_InvldMsg180BusHiSpd_Logl(boolean data)
{
  return Rte_Write_InvldMsg180BusHiSpd_Logl(data);
}

Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_LkaCmd_Val(float32 data)
{
  return Rte_Write_LkaCmd_Val(data);
}

Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_LkaReqActv_Logl(boolean data)
{
  return Rte_Write_LkaReqActv_Logl(data);
}

Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_MissMsg180BusHiSpd_Logl(boolean data)
{
  return Rte_Write_MissMsg180BusHiSpd_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdCrcInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg180BusHiSpdCrcInvldTiOut_Val();
}
uint16  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg180BusHiSpdMissTiOut_Val();
}
uint16  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdRollgCntrInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg180BusHiSpdRollgCntrInvldTiOut_Val();
}
sint8  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdTqPolarity_Val(void)
{
  return (sint8 ) Rte_Prm_GmMsg180BusHiSpdTqPolarity_Val();
}


     /* GmMsg180BusHiSpd */
      /* GmMsg180BusHiSpd */

/** Per Instance Memories */
float32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevTqCmd(void)
{
  return Rte_Pim_GmMsg180BusHiSpdPrevTqCmd();
}
uint32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdInvldCrcTmr(void)
{
  return Rte_Pim_GmMsg180BusHiSpdInvldCrcTmr();
}
uint32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdInvldRollgCntrTmr(void)
{
  return Rte_Pim_GmMsg180BusHiSpdInvldRollgCntrTmr();
}
uint32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevRxnTi(void)
{
  return Rte_Pim_GmMsg180BusHiSpdPrevRxnTi();
}
uint8 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevRollgCntrVal(void)
{
  return Rte_Pim_GmMsg180BusHiSpdPrevRollgCntrVal();
}
boolean *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevInvld(void)
{
  return Rte_Pim_GmMsg180BusHiSpdPrevInvld();
}
boolean *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevTqReq(void)
{
  return Rte_Pim_GmMsg180BusHiSpdPrevTqReq();
}
boolean *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdRollgCntrRst(void)
{
  return Rte_Pim_GmMsg180BusHiSpdRollgCntrRst();
}


