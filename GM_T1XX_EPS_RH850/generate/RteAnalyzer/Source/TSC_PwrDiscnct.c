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
 *          File:  TSC_PwrDiscnct.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_PwrDiscnct.h"
#include "TSC_PwrDiscnct.h"








Std_ReturnType TSC_PwrDiscnct_Rte_Read_BattVltg_Val(float32 *data)
{
  return Rte_Read_BattVltg_Val(data);
}

Std_ReturnType TSC_PwrDiscnct_Rte_Read_BattVltgSwd1_Val(float32 *data)
{
  return Rte_Read_BattVltgSwd1_Val(data);
}

Std_ReturnType TSC_PwrDiscnct_Rte_Read_BattVltgSwd2_Val(float32 *data)
{
  return Rte_Read_BattVltgSwd2_Val(data);
}

Std_ReturnType TSC_PwrDiscnct_Rte_Read_StrtUpSt_Val(uint8 *data)
{
  return Rte_Read_StrtUpSt_Val(data);
}

Std_ReturnType TSC_PwrDiscnct_Rte_Read_SysSt_Val(SysSt1 *data)
{
  return Rte_Read_SysSt_Val(data);
}




Std_ReturnType TSC_PwrDiscnct_Rte_Write_PwrDiscnctATestCmpl_Logl(boolean data)
{
  return Rte_Write_PwrDiscnctATestCmpl_Logl(data);
}

Std_ReturnType TSC_PwrDiscnct_Rte_Write_PwrDiscnctBTestCmpl_Logl(boolean data)
{
  return Rte_Write_PwrDiscnctBTestCmpl_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_PwrDiscnct_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr, NtcQlfr);
}
Std_ReturnType TSC_PwrDiscnct_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_PwrDiscnct_Rte_Prm_BattVltgSwdMax_Val(void)
{
  return (float32 ) Rte_Prm_BattVltgSwdMax_Val();
}
float32  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctOpenThd_Val(void)
{
  return (float32 ) Rte_Prm_PwrDiscnctOpenThd_Val();
}
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x042FailStep_Val(void)
{
  return (uint16 ) Rte_Prm_PwrDiscnctNtc0x042FailStep_Val();
}
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x042PassStep_Val(void)
{
  return (uint16 ) Rte_Prm_PwrDiscnctNtc0x042PassStep_Val();
}
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x04AFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_PwrDiscnctNtc0x04AFailStep_Val();
}
uint16  TSC_PwrDiscnct_Rte_Prm_PwrDiscnctNtc0x04APassStep_Val(void)
{
  return (uint16 ) Rte_Prm_PwrDiscnctNtc0x04APassStep_Val();
}


     /* PwrDiscnct */
      /* PwrDiscnct */

/** Per Instance Memories */
float32 *TSC_PwrDiscnct_Rte_Pim_PwrDiscnctDeltaVltg1(void)
{
  return Rte_Pim_PwrDiscnctDeltaVltg1();
}
float32 *TSC_PwrDiscnct_Rte_Pim_PwrDiscnctDeltaVltg2(void)
{
  return Rte_Pim_PwrDiscnctDeltaVltg2();
}
boolean *TSC_PwrDiscnct_Rte_Pim_PwrDiscnctSeqATestCmplPrev(void)
{
  return Rte_Pim_PwrDiscnctSeqATestCmplPrev();
}


