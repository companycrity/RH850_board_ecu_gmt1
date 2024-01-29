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
 *          File:  TSC_HowDetn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HowDetn.h"
#include "TSC_HowDetn.h"











Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnEstimn_Val(float32 data)
{
  return Rte_Write_HowDetnEstimn_Val(data);
}

Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnFlg_Logl(boolean data)
{
  return Rte_Write_HowDetnFlg_Logl(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HowDetn_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_HowDetn_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_HowDetn_Rte_Write_HowDetnSt_Val(sint8 data)
{
  return Rte_Write_HowDetnSt_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HowDetn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_HowDetn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HowDetn_Rte_Prm_HowDetnEstimLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnEstimLpFilFrq_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnMinVehSpd_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnMinVehSpd_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnOffThd_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnOffThd_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnOffTi_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnOffTi_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnPercOfPrevHowEstim_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnPercOfPrevHowEstim_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnSlewRate_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnSlewRate_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnStLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnStLpFilFrq_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnTqFinalLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnTqFinalLpFilFrq_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnTqHpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnTqHpFilFrq_Val();
}
float32  TSC_HowDetn_Rte_Prm_HowDetnTqInitLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HowDetnTqInitLpFilFrq_Val();
}
Ary1D_u9p7_9 * TSC_HowDetn_Rte_Prm_HowDetnHiFrqGainY_Ary1D(void)
{
  return (Ary1D_u9p7_9 *) Rte_Prm_HowDetnHiFrqGainY_Ary1D();
}
Ary2D_u8p8_9_6 * TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateX_Ary2D(void)
{
  return (Ary2D_u8p8_9_6 *) Rte_Prm_HowDetnHiFrqRateX_Ary2D();
}
Ary2D_s7p8_9_6 * TSC_HowDetn_Rte_Prm_HowDetnHiFrqRateY_Ary2D(void)
{
  return (Ary2D_s7p8_9_6 *) Rte_Prm_HowDetnHiFrqRateY_Ary2D();
}
Ary2D_u8p8_9_5 * TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateX_Ary2D(void)
{
  return (Ary2D_u8p8_9_5 *) Rte_Prm_HowDetnLoFrqRateX_Ary2D();
}
Ary2D_s7p8_9_5 * TSC_HowDetn_Rte_Prm_HowDetnLoFrqRateY_Ary2D(void)
{
  return (Ary2D_s7p8_9_5 *) Rte_Prm_HowDetnLoFrqRateY_Ary2D();
}
Ary1D_u8p8_7 * TSC_HowDetn_Rte_Prm_HowDetnStThdX_Ary1D(void)
{
  return (Ary1D_u8p8_7 *) Rte_Prm_HowDetnStThdX_Ary1D();
}
Ary1D_u9p7_9 * TSC_HowDetn_Rte_Prm_HowDetnVehSpd_Ary1D(void)
{
  return (Ary1D_u9p7_9 *) Rte_Prm_HowDetnVehSpd_Ary1D();
}


     /* HowDetn */
      /* HowDetn */

/** Per Instance Memories */
float32 *TSC_HowDetn_Rte_Pim_PrevCalcdHowEstim(void)
{
  return Rte_Pim_PrevCalcdHowEstim();
}
float32 *TSC_HowDetn_Rte_Pim_PrevHowEstim(void)
{
  return Rte_Pim_PrevHowEstim();
}
float32 *TSC_HowDetn_Rte_Pim_dHowDetnAbsHiFrqTq(void)
{
  return Rte_Pim_dHowDetnAbsHiFrqTq();
}
float32 *TSC_HowDetn_Rte_Pim_dHowDetnAbsLoFrqTq(void)
{
  return Rte_Pim_dHowDetnAbsLoFrqTq();
}
uint32 *TSC_HowDetn_Rte_Pim_RefTiHowOff(void)
{
  return Rte_Pim_RefTiHowOff();
}
boolean *TSC_HowDetn_Rte_Pim_HowOffPrev(void)
{
  return Rte_Pim_HowOffPrev();
}
FilLpRec1 *TSC_HowDetn_Rte_Pim_EstimLpFil(void)
{
  return Rte_Pim_EstimLpFil();
}
FilLpRec1 *TSC_HowDetn_Rte_Pim_FinalLpFil(void)
{
  return Rte_Pim_FinalLpFil();
}
FilLpRec1 *TSC_HowDetn_Rte_Pim_IniLpFil1(void)
{
  return Rte_Pim_IniLpFil1();
}
FilLpRec1 *TSC_HowDetn_Rte_Pim_IniLpFil2(void)
{
  return Rte_Pim_IniLpFil2();
}
FilLpRec1 *TSC_HowDetn_Rte_Pim_IniLpFil3(void)
{
  return Rte_Pim_IniLpFil3();
}
FilLpRec1 *TSC_HowDetn_Rte_Pim_StLpFil(void)
{
  return Rte_Pim_StLpFil();
}
FilHpRec1 *TSC_HowDetn_Rte_Pim_TqHpFil(void)
{
  return Rte_Pim_TqHpFil();
}


