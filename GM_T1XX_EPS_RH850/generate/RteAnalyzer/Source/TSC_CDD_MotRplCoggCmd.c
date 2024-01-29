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
 *          File:  TSC_CDD_MotRplCoggCmd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_MotRplCoggCmd.h"
#include "TSC_CDD_MotRplCoggCmd.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_MotCoggCmdY_GetErrorStatus(ErrorStatus_Arg);
}
Std_ReturnType TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_MotCoggCmdY_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint8  TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void)
{
  return (uint8 ) Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val();
}
uint8  TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void)
{
  return (uint8 ) Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val();
}
uint8  TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void)
{
  return (uint8 ) Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val();
}


     /* CDD_MotRplCoggCmd */
      /* CDD_MotRplCoggCmd */

/** Per Instance Memories */
float32 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd(void)
{
  return Rte_Pim_dMotRplCoggCmdMotCoggCmd();
}
float32 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim(void)
{
  return Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim();
}
float32 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim(void)
{
  return Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim();
}
uint16 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx(void)
{
  return Rte_Pim_dMotRplCoggCmdCoggIdx();
}
s1p14 *TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(void)
{
  return Rte_Pim_MotCoggCmdY();
}


