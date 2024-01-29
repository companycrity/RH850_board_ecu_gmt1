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
 *          File:  TSC_GmMsg337BusChassisExp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg337BusChassisExp.h"
#include "TSC_GmMsg337BusChassisExp.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_LstRxnTiMsg337BusChassisExp_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg337BusChassisExp_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqActvRaw_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgReqActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqActvVldRaw_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgReqActvVldRaw_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqProtnValRaw_Val(uint32 *data)
{
  return Rte_Read_SteerWhlAgReqProtnValRaw_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqRollgCntrRaw_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgReqRollgCntrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqTarAgRaw_Val(uint16 *data)
{
  return Rte_Read_SteerWhlAgReqTarAgRaw_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlFbReqActvProtnValRaw_Val(uint8 *data)
{
  return Rte_Read_SteerWhlFbReqActvProtnValRaw_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlFbReqActvRaw_Val(uint8 *data)
{
  return Rte_Read_SteerWhlFbReqActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlFbReqActvRollgCntrRaw_Val(uint8 *data)
{
  return Rte_Read_SteerWhlFbReqActvRollgCntrRaw_Val(data);
}




Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_ApaReqActv_Logl(boolean data)
{
  return Rte_Write_ApaReqActv_Logl(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_FbReqActv_Logl(boolean data)
{
  return Rte_Write_FbReqActv_Logl(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_InvldMsg337_Logl(boolean data)
{
  return Rte_Write_InvldMsg337_Logl(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_MissMsg337_Logl(boolean data)
{
  return Rte_Write_MissMsg337_Logl(data);
}

Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_SteerWhlAgReqTarAg_Val(float32 data)
{
  return Rte_Write_SteerWhlAgReqTarAg_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpInvldDiagcTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg337BusChassisExpInvldDiagcTiOut_Val();
}
uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpInvldProtnValTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg337BusChassisExpInvldProtnValTiOut_Val();
}
uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val();
}
uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg337BusChassisExpMissTiOut_Val();
}
sint8  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpTarAgPolarity_Val(void)
{
  return (sint8 ) Rte_Prm_GmMsg337BusChassisExpTarAgPolarity_Val();
}


     /* GmMsg337BusChassisExp */
      /* GmMsg337BusChassisExp */

/** Per Instance Memories */
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr(void)
{
  return Rte_Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr();
}
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr(void)
{
  return Rte_Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr();
}
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpFbProtnValInvldTmr(void)
{
  return Rte_Pim_GmMsg337BusChassisExpFbProtnValInvldTmr();
}
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr(void)
{
  return Rte_Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr();
}
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpInvldTmr(void)
{
  return Rte_Pim_GmMsg337BusChassisExpInvldTmr();
}
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevRxnTi(void)
{
  return Rte_Pim_GmMsg337BusChassisExpPrevRxnTi();
}
uint8 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal(void)
{
  return Rte_Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal();
}
uint8 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal(void)
{
  return Rte_Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal();
}
boolean *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevInvld(void)
{
  return Rte_Pim_GmMsg337BusChassisExpPrevInvld();
}
boolean *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpRollgCntrRst(void)
{
  return Rte_Pim_GmMsg337BusChassisExpRollgCntrRst();
}


