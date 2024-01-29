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
 *          File:  TSC_PwrpkCmpbltyChk.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_PwrpkCmpbltyChk.h"
#include "TSC_PwrpkCmpbltyChk.h"















     // Client Server Interfaces:
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn1_Val(uint8 *data)
{
  return Rte_Read_GearIdn1_Val(data);
}

Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn1Vld_Logl(boolean *data)
{
  return Rte_Read_GearIdn1Vld_Logl(data);
}

Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn2_Val(uint8 *data)
{
  return Rte_Read_GearIdn2_Val(data);
}

Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn2Vld_Logl(boolean *data)
{
  return Rte_Read_GearIdn2Vld_Logl(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint8  TSC_PwrpkCmpbltyChk_Rte_Prm_PwrpkCmpbltyChkGearId_Val(void)
{
  return (uint8 ) Rte_Prm_PwrpkCmpbltyChkGearId_Val();
}


     /* PwrpkCmpbltyChk */
      /* PwrpkCmpbltyChk */

/** Per Instance Memories */
uint32 *TSC_PwrpkCmpbltyChk_Rte_Pim_GearIdnRefTmr(void)
{
  return Rte_Pim_GearIdnRefTmr();
}


