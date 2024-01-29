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
 *          File:  TSC_EotProtnFwl.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_EotProtnFwl.h"
#include "TSC_EotProtnFwl.h"















     // Client Server Interfaces:
Std_ReturnType TSC_EotProtnFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_EotProtnFwl_Rte_Read_EotActvCmd_Val(float32 *data)
{
  return Rte_Read_EotActvCmd_Val(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Read_EotDampgCmd_Val(float32 *data)
{
  return Rte_Read_EotDampgCmd_Val(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Read_EotProtnDi_Logl(boolean *data)
{
  return Rte_Read_EotProtnDi_Logl(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
{
  return Rte_Read_MfgEnaSt_Val(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Read_PinionAgConf_Val(float32 *data)
{
  return Rte_Read_PinionAgConf_Val(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_EotProtnFwl_Rte_Write_EotActvCmdLimd_Val(float32 data)
{
  return Rte_Write_EotActvCmdLimd_Val(data);
}

Std_ReturnType TSC_EotProtnFwl_Rte_Write_EotDampgCmdLimd_Val(float32 data)
{
  return Rte_Write_EotDampgCmdLimd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_EotProtnFwl_Rte_Prm_EotProtnFwlInactvLim_Val(void)
{
  return (float32 ) Rte_Prm_EotProtnFwlInactvLim_Val();
}
float32  TSC_EotProtnFwl_Rte_Prm_EotProtnHwAgMin_Val(void)
{
  return (float32 ) Rte_Prm_EotProtnHwAgMin_Val();
}
float32  TSC_EotProtnFwl_Rte_Prm_EotProtnRackTrvlLimrRng_Val(void)
{
  return (float32 ) Rte_Prm_EotProtnRackTrvlLimrRng_Val();
}
float32  TSC_EotProtnFwl_Rte_Prm_EotProtnSoftEndStopAuthyThd_Val(void)
{
  return (float32 ) Rte_Prm_EotProtnSoftEndStopAuthyThd_Val();
}
Ary1D_s4p11_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlActvCmdLowrBnd_Ary1D(void)
{
  return (Ary1D_s4p11_5 *) Rte_Prm_EotProtnFwlActvCmdLowrBnd_Ary1D();
}
Ary1D_s4p11_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlActvCmdUpprBnd_Ary1D(void)
{
  return (Ary1D_s4p11_5 *) Rte_Prm_EotProtnFwlActvCmdUpprBnd_Ary1D();
}
Ary1D_s11p4_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlEotDampgActvBndX_Ary1D(void)
{
  return (Ary1D_s11p4_5 *) Rte_Prm_EotProtnFwlEotDampgActvBndX_Ary1D();
}
Ary2D_s7p8_4_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlEotDampgActvBndY_Ary2D(void)
{
  return (Ary2D_s7p8_4_5 *) Rte_Prm_EotProtnFwlEotDampgActvBndY_Ary2D();
}
Ary1D_u9p7_4 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlVehSpd_Ary1D(void)
{
  return (Ary1D_u9p7_4 *) Rte_Prm_EotProtnFwlVehSpd_Ary1D();
}
Ary2D_u12p4_4_2 * TSC_EotProtnFwl_Rte_Prm_EotProtnHwDegDampgX_Ary2D(void)
{
  return (Ary2D_u12p4_4_2 *) Rte_Prm_EotProtnHwDegDampgX_Ary2D();
}


     /* EotProtnFwl */
      /* EotProtnFwl */

/** Per Instance Memories */
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdActvLowrBnd(void)
{
  return Rte_Pim_dEotProtnFwlEotActvCmdActvLowrBnd();
}
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdActvUpprBnd(void)
{
  return Rte_Pim_dEotProtnFwlEotActvCmdActvUpprBnd();
}
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgActvLowrBnd(void)
{
  return Rte_Pim_dEotProtnFwlEotDampgActvLowrBnd();
}
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgActvUpprBnd(void)
{
  return Rte_Pim_dEotProtnFwlEotDampgActvUpprBnd();
}
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgFwX0(void)
{
  return Rte_Pim_dEotProtnFwlEotDampgFwX0();
}
uint8 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdMod(void)
{
  return Rte_Pim_dEotProtnFwlEotActvCmdMod();
}
uint8 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgMod(void)
{
  return Rte_Pim_dEotProtnFwlEotDampgMod();
}
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdOverActvLim(void)
{
  return Rte_Pim_dEotProtnFwlEotActvCmdOverActvLim();
}
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdOverInactvLim(void)
{
  return Rte_Pim_dEotProtnFwlEotActvCmdOverInactvLim();
}
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgOverActvLim(void)
{
  return Rte_Pim_dEotProtnFwlEotDampgOverActvLim();
}
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgOverInactvLim(void)
{
  return Rte_Pim_dEotProtnFwlEotDampgOverInactvLim();
}
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlPinionAgConfSts(void)
{
  return Rte_Pim_dEotProtnFwlPinionAgConfSts();
}


