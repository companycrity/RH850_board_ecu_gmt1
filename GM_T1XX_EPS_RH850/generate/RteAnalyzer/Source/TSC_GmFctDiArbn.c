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
 *          File:  TSC_GmFctDiArbn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmFctDiArbn.h"
#include "TSC_GmFctDiArbn.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmFctDiArbn_Rte_Read_ApaEna_Logl(boolean *data)
{
  return Rte_Read_ApaEna_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Read_EscEna_Logl(boolean *data)
{
  return Rte_Read_EscEna_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwAgEotCcw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCcw_Val(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwAgEotCw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCw_Val(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Read_LkaEna_Logl(boolean *data)
{
  return Rte_Read_LkaEna_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Read_LoaSt_Val(LoaSt1 *data)
{
  return Rte_Read_LoaSt_Val(data);
}




Std_ReturnType TSC_GmFctDiArbn_Rte_Write_ApaEnaArbn_Logl(boolean data)
{
  return Rte_Write_ApaEnaArbn_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Write_EscEnaArbn_Logl(boolean data)
{
  return Rte_Write_EscEnaArbn_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Write_GmFctDiSts_Val(GmFctDiArbnSts1 data)
{
  return Rte_Write_GmFctDiSts_Val(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Write_InertiaCmpDecelGainDi_Logl(boolean data)
{
  return Rte_Write_InertiaCmpDecelGainDi_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Write_LkaEnaArbn_Logl(boolean data)
{
  return Rte_Write_LkaEnaArbn_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Write_PullCmpActvDi_Logl(boolean data)
{
  return Rte_Write_PullCmpActvDi_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Write_TunSetRtDi_Logl(boolean data)
{
  return Rte_Write_TunSetRtDi_Logl(data);
}

Std_ReturnType TSC_GmFctDiArbn_Rte_Write_WhlImbRejctnDi_Logl(boolean data)
{
  return Rte_Write_WhlImbRejctnDi_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmFctDiArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_GmFctDiArbn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
boolean TSC_GmFctDiArbn_Rte_IrvRead_GmFctDiArbnPer1_FctDiReq(void)
{
return Rte_IrvRead_GmFctDiArbnPer1_FctDiReq();
}
uint32 TSC_GmFctDiArbn_Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi(void)
{
return Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi();
}













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_GmFctDiArbn_Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(boolean data)
{
  Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq( data);
}
void TSC_GmFctDiArbn_Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(uint32 data)
{
  Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi( data);
}




float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotHwAgThd_Val(void)
{
  return (float32 ) Rte_Prm_GmFctDiArbnEotHwAgThd_Val();
}
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnEotTi_Val(void)
{
  return (float32 ) Rte_Prm_GmFctDiArbnEotTi_Val();
}
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val(void)
{
  return (float32 ) Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val();
}
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val(void)
{
  return (float32 ) Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val();
}
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnOnCentrTi_Val(void)
{
  return (float32 ) Rte_Prm_GmFctDiArbnOnCentrTi_Val();
}
float32  TSC_GmFctDiArbn_Rte_Prm_GmFctDiArbnSrvTi_Val(void)
{
  return (float32 ) Rte_Prm_GmFctDiArbnSrvTi_Val();
}


     /* GmFctDiArbn */
      /* GmFctDiArbn */

/** Per Instance Memories */
uint32 *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRngElpdTi(void)
{
  return Rte_Pim_InCcwEotRngElpdTi();
}
uint32 *TSC_GmFctDiArbn_Rte_Pim_InCwEotRngElpdTi(void)
{
  return Rte_Pim_InCwEotRngElpdTi();
}
uint32 *TSC_GmFctDiArbn_Rte_Pim_OnCentrElpdTi(void)
{
  return Rte_Pim_OnCentrElpdTi();
}
boolean *TSC_GmFctDiArbn_Rte_Pim_CcwEotEnad(void)
{
  return Rte_Pim_CcwEotEnad();
}
boolean *TSC_GmFctDiArbn_Rte_Pim_CwEotEnad(void)
{
  return Rte_Pim_CwEotEnad();
}
boolean *TSC_GmFctDiArbn_Rte_Pim_FctDiLtch(void)
{
  return Rte_Pim_FctDiLtch();
}
boolean *TSC_GmFctDiArbn_Rte_Pim_InCcwEotRng(void)
{
  return Rte_Pim_InCcwEotRng();
}
boolean *TSC_GmFctDiArbn_Rte_Pim_InCwEotRng(void)
{
  return Rte_Pim_InCwEotRng();
}
boolean *TSC_GmFctDiArbn_Rte_Pim_InOnCentrRng(void)
{
  return Rte_Pim_InOnCentrRng();
}


