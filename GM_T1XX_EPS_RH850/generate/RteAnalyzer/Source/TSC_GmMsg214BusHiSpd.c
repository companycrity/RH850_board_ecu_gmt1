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
 *          File:  TSC_GmMsg214BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg214BusHiSpd.h"
#include "TSC_GmMsg214BusHiSpd.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_AbsActvProtdProtnValRaw_Val(uint8 *data)
{
  return Rte_Read_AbsActvProtdProtnValRaw_Val(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_AbsActvProtdRaw_Val(uint8 *data)
{
  return Rte_Read_AbsActvProtdRaw_Val(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_AbsActvProtdRollgCntrRaw_Val(uint8 *data)
{
  return Rte_Read_AbsActvProtdRollgCntrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_LstRxnTiMsg214_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg214_Val(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_RdntVehStabyEnhmtSysActvRaw_Val(uint8 *data)
{
  return Rte_Read_RdntVehStabyEnhmtSysActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(uint8 *data)
{
  return Rte_Read_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_VehStabyEnhmtActv_Logl(boolean *data)
{
  return Rte_Read_VehStabyEnhmtActv_Logl(data);
}




Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_AbsInvld_Logl(boolean data)
{
  return Rte_Write_AbsInvld_Logl(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_AbsProtd_Logl(boolean data)
{
  return Rte_Write_AbsProtd_Logl(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_MissMsg214_Logl(boolean data)
{
  return Rte_Write_MissMsg214_Logl(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_RdntVehStabyEnhmtActv_Logl(boolean data)
{
  return Rte_Write_RdntVehStabyEnhmtActv_Logl(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_VehStabyEnhmtActvMsg214_Logl(boolean data)
{
  return Rte_Write_VehStabyEnhmtActvMsg214_Logl(data);
}

Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_VehStabyEnhmtInvld_Logl(boolean data)
{
  return Rte_Write_VehStabyEnhmtInvld_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val();
}
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val();
}
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val();
}
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg214BusHiSpdMissTiOut_Val();
}
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val();
}
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val();
}


     /* GmMsg214BusHiSpd */
      /* GmMsg214BusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr(void)
{
  return Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr();
}
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr(void)
{
  return Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr();
}
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr(void)
{
  return Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr();
}
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdPrevRxnTi(void)
{
  return Rte_Pim_GmMsg214BusHiSpdPrevRxnTi();
}
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr(void)
{
  return Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr();
}
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr(void)
{
  return Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr();
}
uint8 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal(void)
{
  return Rte_Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal();
}
uint8 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal(void)
{
  return Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal();
}
boolean *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdPrevAbsProtd(void)
{
  return Rte_Pim_GmMsg214BusHiSpdPrevAbsProtd();
}
boolean *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld(void)
{
  return Rte_Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld();
}
boolean *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRollgCntrRst(void)
{
  return Rte_Pim_GmMsg214BusHiSpdRollgCntrRst();
}


