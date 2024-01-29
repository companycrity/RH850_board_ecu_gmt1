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
 *          File:  TSC_HwAgArbn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAgArbn.h"
#include "TSC_HwAgArbn.h"








Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgA_Val(float32 *data)
{
  return Rte_Read_HwAgA_Val(data);
}

Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwAgAQlfr_Val(data);
}

Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgARollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwAgARollgCntr_Val(data);
}

Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgB_Val(float32 *data)
{
  return Rte_Read_HwAgB_Val(data);
}

Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgBQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwAgBQlfr_Val(data);
}

Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgBRollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwAgBRollgCntr_Val(data);
}

Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgCorrlnSt_Val(uint8 *data)
{
  return Rte_Read_HwAgCorrlnSt_Val(data);
}




Std_ReturnType TSC_HwAgArbn_Rte_Write_HwAg_Val(float32 data)
{
  return Rte_Write_HwAg_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint8  TSC_HwAgArbn_Rte_Prm_HwAgArbnHwAgMaxStall_Val(void)
{
  return (uint8 ) Rte_Prm_HwAgArbnHwAgMaxStall_Val();
}


     /* HwAgArbn */
      /* HwAgArbn */

/** Per Instance Memories */
float32 *TSC_HwAgArbn_Rte_Pim_HwAgPrev(void)
{
  return Rte_Pim_HwAgPrev();
}
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgARollgCntrPrev(void)
{
  return Rte_Pim_HwAgARollgCntrPrev();
}
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgAStallCntrPrev(void)
{
  return Rte_Pim_HwAgAStallCntrPrev();
}
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgBRollgCntrPrev(void)
{
  return Rte_Pim_HwAgBRollgCntrPrev();
}
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgBStallCntrPrev(void)
{
  return Rte_Pim_HwAgBStallCntrPrev();
}
boolean *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgAAvl(void)
{
  return Rte_Pim_dHwAgArbnAgAAvl();
}
boolean *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgBAvl(void)
{
  return Rte_Pim_dHwAgArbnAgBAvl();
}


