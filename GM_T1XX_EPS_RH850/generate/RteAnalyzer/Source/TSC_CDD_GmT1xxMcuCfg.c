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
 *          File:  TSC_CDD_GmT1xxMcuCfg.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_GmT1xxMcuCfg.h"
#include "TSC_CDD_GmT1xxMcuCfg.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr1MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr, TiSpan);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables









Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag0_Val(float32 data)
{
  return Rte_Write_Adc1SelfDiag0_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag2_Val(float32 data)
{
  return Rte_Write_Adc1SelfDiag2_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1SelfDiag4_Val(float32 data)
{
  return Rte_Write_Adc1SelfDiag4_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltg_Val(float32 data)
{
  return Rte_Write_BattVltg_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd1_Val(float32 data)
{
  return Rte_Write_BattVltgSwd1_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd2_Val(float32 data)
{
  return Rte_Write_BattVltgSwd2_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_EcuT_Val(float32 data)
{
  return Rte_Write_EcuT_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2Cos_Val(float32 data)
{
  return Rte_Write_MotAg2Cos_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2Sin_Val(float32 data)
{
  return Rte_Write_MotAg2Sin_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables









Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup2Ref0_Val(float32 data)
{
  return Rte_Write_Adc1ScanGroup2Ref0_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup2Ref1_Val(float32 data)
{
  return Rte_Write_Adc1ScanGroup2Ref1_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup3Ref0_Val(float32 data)
{
  return Rte_Write_Adc1ScanGroup3Ref0_Val(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_Adc1ScanGroup3Ref1_Val(float32 data)
{
  return Rte_Write_Adc1ScanGroup3Ref1_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Read_Adc0Faild_Logl(boolean *data)
{
  return Rte_Read_Adc0Faild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Read_Adc1Faild_Logl(boolean *data)
{
  return Rte_Read_Adc1Faild_Logl(data);
}




Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgAdcFaild_Logl(boolean data)
{
  return Rte_Write_BattVltgAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd1AdcFaild_Logl(boolean data)
{
  return Rte_Write_BattVltgSwd1AdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_BattVltgSwd2AdcFaild_Logl(boolean data)
{
  return Rte_Write_BattVltgSwd2AdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_EcuTAdcFaild_Logl(boolean data)
{
  return Rte_Write_EcuTAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2CosAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotAg2CosAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotAg2SinAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotAg2SinAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakAAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcPeakAAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakBAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcPeakBAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakCAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcPeakCAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakDAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcPeakDAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakEAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcPeakEAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcPeakFAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcPeakFAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyAAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcVlyAAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyBAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcVlyBAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyCAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcVlyCAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyDAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcVlyDAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyEAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcVlyEAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrAdcVlyFAdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrAdcVlyFAdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrSnsrOffs1AdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrSnsrOffs1AdcFaild_Logl(data);
}

Std_ReturnType TSC_CDD_GmT1xxMcuCfg_Rte_Write_MotCurrSnsrOffs2AdcFaild_Logl(boolean data)
{
  return Rte_Write_MotCurrSnsrOffs2AdcFaild_Logl(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* CDD_GmT1xxMcuCfg */
      /* CDD_GmT1xxMcuCfg */


