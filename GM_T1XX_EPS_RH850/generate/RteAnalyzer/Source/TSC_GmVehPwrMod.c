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
 *          File:  TSC_GmVehPwrMod.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmVehPwrMod.h"
#include "TSC_GmVehPwrMod.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmVehPwrMod_Rte_Read_BusOffHiSpd_Logl(boolean *data)
{
  return Rte_Read_BusOffHiSpd_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_EngRunActv_Logl(boolean *data)
{
  return Rte_Read_EngRunActv_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_PrpnSysActvMsgInvld_Logl(boolean *data)
{
  return Rte_Read_PrpnSysActvMsgInvld_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysPwrModMsgInvld_Logl(boolean *data)
{
  return Rte_Read_SysPwrModMsgInvld_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysPwrModRun_Logl(boolean *data)
{
  return Rte_Read_SysPwrModRun_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysStEnaReqOvrd_Logl(boolean *data)
{
  return Rte_Read_SysStEnaReqOvrd_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
{
  return Rte_Read_SysStFltOutpReqDi_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_VehSpdArbd_Val(float32 *data)
{
  return Rte_Read_VehSpdArbd_Val(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Read_VehSpdSnsrVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdSnsrVld_Logl(data);
}




Std_ReturnType TSC_GmVehPwrMod_Rte_Write_PwrSplyEnaReq_Logl(boolean data)
{
  return Rte_Write_PwrSplyEnaReq_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Write_SysOperMotTqCmdSca_Val(float32 data)
{
  return Rte_Write_SysOperMotTqCmdSca_Val(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Write_SysOperRampRate_Val(float32 data)
{
  return Rte_Write_SysOperRampRate_Val(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Write_SysStReqEna_Logl(boolean data)
{
  return Rte_Write_SysStReqEna_Logl(data);
}

Std_ReturnType TSC_GmVehPwrMod_Rte_Write_VehPwrModDftVehSpdEna_Logl(boolean data)
{
  return Rte_Write_VehPwrModDftVehSpdEna_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmVehPwrMod_Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
{
  return Rte_Call_GetGpioMcuEna_Oper(PinSt_Arg);
}
Std_ReturnType TSC_GmVehPwrMod_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_GmVehPwrMod_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val(void)
{
  return (float32 ) Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val();
}
float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModOperRampRate_Val(void)
{
  return (float32 ) Rte_Prm_GmVehPwrModOperRampRate_Val();
}
float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val(void)
{
  return (float32 ) Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val();
}
float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val(void)
{
  return (float32 ) Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val();
}
uint32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val(void)
{
  return (uint32 ) Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val();
}


     /* GmVehPwrMod */
      /* GmVehPwrMod */

/** Per Instance Memories */
uint32 *TSC_GmVehPwrMod_Rte_Pim_TqRefTi(void)
{
  return Rte_Pim_TqRefTi();
}
boolean *TSC_GmVehPwrMod_Rte_Pim_PrevSysStReqEnaVal(void)
{
  return Rte_Pim_PrevSysStReqEnaVal();
}
boolean *TSC_GmVehPwrMod_Rte_Pim_TqRefTiActv(void)
{
  return Rte_Pim_TqRefTiActv();
}
boolean *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModHwTqKeepAssi(void)
{
  return Rte_Pim_dGmVehPwrModHwTqKeepAssi();
}
boolean *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin(void)
{
  return Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin();
}
boolean *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiOnMin(void)
{
  return Rte_Pim_dGmVehPwrModVehSpdAssiOnMin();
}


