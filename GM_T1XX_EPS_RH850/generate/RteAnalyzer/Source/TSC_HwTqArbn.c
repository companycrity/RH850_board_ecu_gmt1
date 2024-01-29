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
 *          File:  TSC_HwTqArbn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwTqArbn.h"
#include "TSC_HwTqArbn.h"








Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqA_Val(float32 *data)
{
  return Rte_Read_HwTqA_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqAQlfr_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqARollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqARollgCntr_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqB_Val(float32 *data)
{
  return Rte_Read_HwTqB_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqBQlfr_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqBRollgCntr_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqC_Val(float32 *data)
{
  return Rte_Read_HwTqC_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqCQlfr_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqCRollgCntr_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqCorrlnSts_Val(uint8 *data)
{
  return Rte_Read_HwTqCorrlnSts_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqD_Val(float32 *data)
{
  return Rte_Read_HwTqD_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqDQlfr_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqDRollgCntr_Val(data);
}




Std_ReturnType TSC_HwTqArbn_Rte_Write_HwTq_Val(float32 data)
{
  return Rte_Write_HwTq_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Write_HwTqChA_Val(float32 data)
{
  return Rte_Write_HwTqChA_Val(data);
}

Std_ReturnType TSC_HwTqArbn_Rte_Write_HwTqChB_Val(float32 data)
{
  return Rte_Write_HwTqChB_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqA_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqArbnMaxStallTqA_Val();
}
uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqB_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqArbnMaxStallTqB_Val();
}
uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqC_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqArbnMaxStallTqC_Val();
}
uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqD_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqArbnMaxStallTqD_Val();
}


     /* HwTqArbn */
      /* HwTqArbn */

/** Per Instance Memories */
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqARollgCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqARollgCntrPrev();
}
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqAStallCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqAStallCntrPrev();
}
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBRollgCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqBRollgCntrPrev();
}
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBStallCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqBStallCntrPrev();
}
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCRollgCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqCRollgCntrPrev();
}
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCStallCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqCStallCntrPrev();
}
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDRollgCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqDRollgCntrPrev();
}
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDStallCntrPrev(void)
{
  return Rte_Pim_HwTqArbnTqDStallCntrPrev();
}
boolean *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChAAvl(void)
{
  return Rte_Pim_dHwTqArbnChAAvl();
}
boolean *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChBAvl(void)
{
  return Rte_Pim_dHwTqArbnChBAvl();
}


