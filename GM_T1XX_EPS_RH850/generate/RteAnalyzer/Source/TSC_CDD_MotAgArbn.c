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
 *          File:  TSC_CDD_MotAgArbn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_MotAgArbn.h"
#include "TSC_CDD_MotAgArbn.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* CDD_MotAgArbn */
      /* CDD_MotAgArbn */

/** Per Instance Memories */
u0p16 *TSC_CDD_MotAgArbn_Rte_Pim_MotAgMeclPrev(void)
{
  return Rte_Pim_MotAgMeclPrev();
}
uint8 *TSC_CDD_MotAgArbn_Rte_Pim_MotAgARollgCntPrev(void)
{
  return Rte_Pim_MotAgARollgCntPrev();
}
uint8 *TSC_CDD_MotAgArbn_Rte_Pim_MotAgAStallCntPrev(void)
{
  return Rte_Pim_MotAgAStallCntPrev();
}
uint8 *TSC_CDD_MotAgArbn_Rte_Pim_MotAgBRollgCntPrev(void)
{
  return Rte_Pim_MotAgBRollgCntPrev();
}
uint8 *TSC_CDD_MotAgArbn_Rte_Pim_MotAgBStallCntPrev(void)
{
  return Rte_Pim_MotAgBStallCntPrev();
}


