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
 *          File:  TSC_GmMsg180BusChassisExp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg180BusChassisExp.h"
#include "TSC_GmMsg180BusChassisExp.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_LstRxnTiMsg180BusChassisExp_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg180BusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlAlvRollgCntrRaw_Val(uint8 *data)
{
  return Rte_Read_TqOvrlAlvRollgCntrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlCmdChksRaw_Val(uint16 *data)
{
  return Rte_Read_TqOvrlCmdChksRaw_Val(data);
}

Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlDeltaTqCmdActvRaw_Val(uint8 *data)
{
  return Rte_Read_TqOvrlDeltaTqCmdActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlDeltaTqCmdValRaw_Val(uint16 *data)
{
  return Rte_Read_TqOvrlDeltaTqCmdValRaw_Val(data);
}




Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_EscCmd_Val(float32 data)
{
  return Rte_Write_EscCmd_Val(data);
}

Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_EscReqActv_Logl(boolean data)
{
  return Rte_Write_EscReqActv_Logl(data);
}

Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_InvldMsg180BusChassisExp_Logl(boolean data)
{
  return Rte_Write_InvldMsg180BusChassisExp_Logl(data);
}

Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_MissMsg180BusChassisExp_Logl(boolean data)
{
  return Rte_Write_MissMsg180BusChassisExp_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpInvldProtnValTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg180BusChassisExpInvldProtnValTiOut_Val();
}
uint16  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg180BusChassisExpMissTiOut_Val();
}
uint16  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpRollgCntrInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg180BusChassisExpRollgCntrInvldTiOut_Val();
}
sint8  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpTqPolarity_Val(void)
{
  return (sint8 ) Rte_Prm_GmMsg180BusChassisExpTqPolarity_Val();
}


     /* GmMsg180BusChassisExp */
      /* GmMsg180BusChassisExp */

/** Per Instance Memories */
float32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevEscCmd(void)
{
  return Rte_Pim_GmMsg180BusChassisExpPrevEscCmd();
}
uint32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpInvldProtnValTmr(void)
{
  return Rte_Pim_GmMsg180BusChassisExpInvldProtnValTmr();
}
uint32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpInvldRollgCntrTmr(void)
{
  return Rte_Pim_GmMsg180BusChassisExpInvldRollgCntrTmr();
}
uint32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevRxnTi(void)
{
  return Rte_Pim_GmMsg180BusChassisExpPrevRxnTi();
}
uint8 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevRollgCntrVal(void)
{
  return Rte_Pim_GmMsg180BusChassisExpPrevRollgCntrVal();
}
boolean *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevEscCmdActv(void)
{
  return Rte_Pim_GmMsg180BusChassisExpPrevEscCmdActv();
}
boolean *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevInvld(void)
{
  return Rte_Pim_GmMsg180BusChassisExpPrevInvld();
}
boolean *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpRollgCntrRst(void)
{
  return Rte_Pim_GmMsg180BusChassisExpRollgCntrRst();
}


