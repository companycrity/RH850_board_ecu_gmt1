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
 *          File:  TSC_CDD_Tauj1CfgAndUse.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_Tauj1CfgAndUse.h"
#include "TSC_CDD_Tauj1CfgAndUse.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables









Std_ReturnType TSC_CDD_Tauj1CfgAndUse_Rte_Write_PhaOnTiMeasdD_Val(uint32 data)
{
  return Rte_Write_PhaOnTiMeasdD_Val(data);
}

Std_ReturnType TSC_CDD_Tauj1CfgAndUse_Rte_Write_PhaOnTiMeasdE_Val(uint32 data)
{
  return Rte_Write_PhaOnTiMeasdE_Val(data);
}

Std_ReturnType TSC_CDD_Tauj1CfgAndUse_Rte_Write_PhaOnTiMeasdF_Val(uint32 data)
{
  return Rte_Write_PhaOnTiMeasdF_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* CDD_Tauj1CfgAndUse */
      /* CDD_Tauj1CfgAndUse */

/** Per Instance Memories */
uint32 *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrDPrev(void)
{
  return Rte_Pim_PhaOnTiCntrDPrev();
}
uint32 *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrEPrev(void)
{
  return Rte_Pim_PhaOnTiCntrEPrev();
}
uint32 *TSC_CDD_Tauj1CfgAndUse_Rte_Pim_PhaOnTiCntrFPrev(void)
{
  return Rte_Pim_PhaOnTiCntrFPrev();
}


