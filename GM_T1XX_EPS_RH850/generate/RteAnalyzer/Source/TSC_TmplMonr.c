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
 *          File:  TSC_TmplMonr.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_TmplMonr.h"
#include "TSC_TmplMonr.h"











Std_ReturnType TSC_TmplMonr_Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data)
{
  return Rte_Write_TmplMonrIninTestCmpl_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt)
{
  return Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(PinSt);
}
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt)
{
  return Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(PinSt);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_TmplMonr_Rte_Read_StrtUpSt_Val(uint8 *data)
{
  return Rte_Read_StrtUpSt_Val(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_TmplMonr_Rte_Call_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg)
{
  return Rte_Call_CtrlErrOut_Oper(PinSt_Arg, TrigReg_Arg);
}
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper(boolean *PinSt)
{
  return Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper(PinSt);
}
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt)
{
  return Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(PinSt);
}
Std_ReturnType TSC_TmplMonr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_TmplMonr_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
{
  return Rte_Read_DiagcStsIvtr1Inactv_Logl(data);
}

Std_ReturnType TSC_TmplMonr_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
{
  return Rte_Read_DiagcStsIvtr2Inactv_Logl(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* TmplMonr */
      /* TmplMonr */

/** Per Instance Memories */
uint8 *TSC_TmplMonr_Rte_Pim_TmplMonrIninCntr(void)
{
  return Rte_Pim_TmplMonrIninCntr();
}
uint8 *TSC_TmplMonr_Rte_Pim_TmplMonrNtc40PrmByte(void)
{
  return Rte_Pim_TmplMonrNtc40PrmByte();
}
uint8 *TSC_TmplMonr_Rte_Pim_TmplMonrWdgRstrtCnt(void)
{
  return Rte_Pim_TmplMonrWdgRstrtCnt();
}
boolean *TSC_TmplMonr_Rte_Pim_TmplMonrIninTestCmplFlg(void)
{
  return Rte_Pim_TmplMonrIninTestCmplFlg();
}
boolean *TSC_TmplMonr_Rte_Pim_TmplMonrSpiReadWrOrderFlg1(void)
{
  return Rte_Pim_TmplMonrSpiReadWrOrderFlg1();
}
boolean *TSC_TmplMonr_Rte_Pim_TmplMonrSpiReadWrOrderFlg2(void)
{
  return Rte_Pim_TmplMonrSpiReadWrOrderFlg2();
}


