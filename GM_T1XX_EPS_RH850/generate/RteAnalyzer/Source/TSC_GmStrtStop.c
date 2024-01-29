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
 *          File:  TSC_GmStrtStop.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmStrtStop.h"
#include "TSC_GmStrtStop.h"















     // Client Server Interfaces:
Std_ReturnType TSC_GmStrtStop_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmStrtStop_Rte_Read_EngSpd_Val(float32 *data)
{
  return Rte_Read_EngSpd_Val(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Read_HwVel_Val(float32 *data)
{
  return Rte_Read_HwVel_Val(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Read_Msg0C9BusHiSpdInvld_Logl(boolean *data)
{
  return Rte_Read_Msg0C9BusHiSpdInvld_Logl(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Read_Msg0C9BusHiSpdMiss_Logl(boolean *data)
{
  return Rte_Read_Msg0C9BusHiSpdMiss_Logl(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}




Std_ReturnType TSC_GmStrtStop_Rte_Write_VehStrtStopMotTqCmdSca_Val(float32 data)
{
  return Rte_Write_VehStrtStopMotTqCmdSca_Val(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Write_VehStrtStopRampRate_Val(float32 data)
{
  return Rte_Write_VehStrtStopRampRate_Val(data);
}

Std_ReturnType TSC_GmStrtStop_Rte_Write_VehStrtStopSt_Val(uint8 data)
{
  return Rte_Write_VehStrtStopSt_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmStrtStop_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopFltRateLim_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopFltRateLim_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1EngTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopMod1EngTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1Sca_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopMod1Sca_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1ToStopRateLim_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopMod1ToStopRateLim_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod2Sca_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopMod2Sca_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModEngTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopNormModEngTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormRateLim_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopNormRateLim_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormToMod1RateLim_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopNormToMod1RateLim_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopAndMod2RateLim_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopAndMod2RateLim_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1Tmr_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod1Tmr_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2Tmr_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod2Tmr_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val();
}
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopModSca_Val(void)
{
  return (float32 ) Rte_Prm_GmStrtStopStopModSca_Val();
}
boolean  TSC_GmStrtStop_Rte_Prm_GmStrtStopEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmStrtStopEna_Logl();
}


     /* GmStrtStop */
      /* GmStrtStop */

/** Per Instance Memories */
uint32 *TSC_GmStrtStop_Rte_Pim_Mod1RefTmr(void)
{
  return Rte_Pim_Mod1RefTmr();
}
uint32 *TSC_GmStrtStop_Rte_Pim_Mod2RefTmr(void)
{
  return Rte_Pim_Mod2RefTmr();
}
uint8 *TSC_GmStrtStop_Rte_Pim_PrevActSt(void)
{
  return Rte_Pim_PrevActSt();
}
uint8 *TSC_GmStrtStop_Rte_Pim_PrevStrtStopSt(void)
{
  return Rte_Pim_PrevStrtStopSt();
}


