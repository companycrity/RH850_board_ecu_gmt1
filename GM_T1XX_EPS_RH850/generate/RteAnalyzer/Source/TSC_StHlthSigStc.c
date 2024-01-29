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
 *          File:  TSC_StHlthSigStc.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_StHlthSigStc.h"
#include "TSC_StHlthSigStc.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_SigStcHistDataAry_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_SigStcHistDataAry_GetErrorStatus(ErrorStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_StHlthSigStc_Rte_Read_AbsltMotPosABDifStHlth_Val(uint8 *data)
{
  return Rte_Read_AbsltMotPosABDifStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_AbsltMotPosACDifStHlth_Val(uint8 *data)
{
  return Rte_Read_AbsltMotPosACDifStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_AbsltMotPosBCDifStHlth_Val(uint8 *data)
{
  return Rte_Read_AbsltMotPosBCDifStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_CtrlrTStHlth_Val(uint8 *data)
{
  return Rte_Read_CtrlrTStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_CurrMotSumABCStHlth_Val(uint8 *data)
{
  return Rte_Read_CurrMotSumABCStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_CurrMotSumDEFStHlth_Val(uint8 *data)
{
  return Rte_Read_CurrMotSumDEFStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_DigTqIdptSigStHlth_Val(uint8 *data)
{
  return Rte_Read_DigTqIdptSigStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_DigTqSnsrAStHlth_Val(uint8 *data)
{
  return Rte_Read_DigTqSnsrAStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_DigTqSnsrBStHlth_Val(uint8 *data)
{
  return Rte_Read_DigTqSnsrBStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_DutyCycStHlth_Val(uint8 *data)
{
  return Rte_Read_DutyCycStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_EotImpctStHlth_Val(uint8 *data)
{
  return Rte_Read_EotImpctStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_FricEstimnStHlth_Val(uint8 *data)
{
  return Rte_Read_FricEstimnStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_MotPosStHlth_Val(uint8 *data)
{
  return Rte_Read_MotPosStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_OutpAssiStHlth_Val(uint8 *data)
{
  return Rte_Read_OutpAssiStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaAStHlth_Val(uint8 *data)
{
  return Rte_Read_PhaAStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaBStHlth_Val(uint8 *data)
{
  return Rte_Read_PhaBStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaCStHlth_Val(uint8 *data)
{
  return Rte_Read_PhaCStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaDStHlth_Val(uint8 *data)
{
  return Rte_Read_PhaDStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaEStHlth_Val(uint8 *data)
{
  return Rte_Read_PhaEStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaFStHlth_Val(uint8 *data)
{
  return Rte_Read_PhaFStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_RamEccSngBitCorrnStHlth_Val(uint8 *data)
{
  return Rte_Read_RamEccSngBitCorrnStHlth_Val(data);
}

Std_ReturnType TSC_StHlthSigStc_Rte_Read_WhlImbMaxCmpStHlth_Val(uint8 *data)
{
  return Rte_Read_WhlImbMaxCmpStHlth_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* StHlthSigStc */
      /* StHlthSigStc */
void TSC_StHlthSigStc_Rte_Enter_StHlthSigStc_ExclusiveArea(void)
{
  Rte_Enter_StHlthSigStc_ExclusiveArea();
}
void TSC_StHlthSigStc_Rte_Exit_StHlthSigStc_ExclusiveArea(void)
{
  Rte_Exit_StHlthSigStc_ExclusiveArea();
}

/** Per Instance Memories */
boolean *TSC_StHlthSigStc_Rte_Pim_VldNvm(void)
{
  return Rte_Pim_VldNvm();
}
uint32 *TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(void)
{
  return Rte_Pim_IgnCycSampleCntrAry();
}
uint8 *TSC_StHlthSigStc_Rte_Pim_RamBuf(void)
{
  return Rte_Pim_RamBuf();
}
float32 *TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(void)
{
  return Rte_Pim_SigAvrgBuf();
}
uint8 *TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(void)
{
  return Rte_Pim_SigStcHistDataAry();
}


