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
 *          File:  TSC_CDD_VrfyCritReg.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_VrfyCritReg.h"
#include "TSC_CDD_VrfyCritReg.h"















     // Client Server Interfaces:
Std_ReturnType TSC_CDD_VrfyCritReg_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* CDD_VrfyCritReg */
      /* CDD_VrfyCritReg */

/** Per Instance Memories */
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegCritRegActVal(void)
{
  return Rte_Pim_dVrfyCritRegCritRegActVal();
}
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegCritRegAdr(void)
{
  return Rte_Pim_dVrfyCritRegCritRegAdr();
}
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegCritRegDesVal(void)
{
  return Rte_Pim_dVrfyCritRegCritRegDesVal();
}
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegSysCritRegActVal(void)
{
  return Rte_Pim_dVrfyCritRegSysCritRegActVal();
}
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegSysCritRegAdr(void)
{
  return Rte_Pim_dVrfyCritRegSysCritRegAdr();
}
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegSysCritRegDesVal(void)
{
  return Rte_Pim_dVrfyCritRegSysCritRegDesVal();
}


