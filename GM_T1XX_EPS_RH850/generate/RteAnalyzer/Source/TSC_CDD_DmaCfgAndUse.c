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
 *          File:  TSC_CDD_DmaCfgAndUse.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_DmaCfgAndUse.h"
#include "TSC_CDD_DmaCfgAndUse.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_CDD_DmaCfgAndUse_Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper(void)
{
  return Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper();
}
Std_ReturnType TSC_CDD_DmaCfgAndUse_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr1MicroSec32bit_Oper(RefTmr);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_CDD_DmaCfgAndUse_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr, TiSpan);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* CDD_DmaCfgAndUse */
      /* CDD_DmaCfgAndUse */

/** Per Instance Memories */
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi(void)
{
  return Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi();
}
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst(void)
{
  return Rte_Pim_MotAg0ReadPtrRst();
}
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt(void)
{
  return Rte_Pim_MotAg0TrsmStrt();
}
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst(void)
{
  return Rte_Pim_MotAg1ReadPtrRst();
}
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt(void)
{
  return Rte_Pim_MotAg1TrsmStrt();
}
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi(void)
{
  return Rte_Pim_d2MilliSecAdcActDmaTrfTi();
}
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi(void)
{
  return Rte_Pim_d2MilliSecAdcMaxDmaTrfTi();
}


