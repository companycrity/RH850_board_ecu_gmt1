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
 *          File:  TSC_RtnPahFwl.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_RtnPahFwl.h"
#include "TSC_RtnPahFwl.h"















     // Client Server Interfaces:
Std_ReturnType TSC_RtnPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_RtnPahFwl_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_RtnPahFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
{
  return Rte_Read_MfgEnaSt_Val(data);
}

Std_ReturnType TSC_RtnPahFwl_Rte_Read_RtnCmd_Val(float32 *data)
{
  return Rte_Read_RtnCmd_Val(data);
}

Std_ReturnType TSC_RtnPahFwl_Rte_Read_RtnCmdDi_Logl(boolean *data)
{
  return Rte_Read_RtnCmdDi_Logl(data);
}

Std_ReturnType TSC_RtnPahFwl_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_RtnPahFwl_Rte_Write_RtnCmdLimd_Val(float32 data)
{
  return Rte_Write_RtnCmdLimd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





Ary1D_s11p4_11 * TSC_RtnPahFwl_Rte_Prm_RtnPahFwlUpprBndTblX_Ary1D(void)
{
  return (Ary1D_s11p4_11 *) Rte_Prm_RtnPahFwlUpprBndTblX_Ary1D();
}
Ary2D_s4p11_11_8 * TSC_RtnPahFwl_Rte_Prm_RtnPahFwlUpprBndTblY_Ary2D(void)
{
  return (Ary2D_s4p11_11_8 *) Rte_Prm_RtnPahFwlUpprBndTblY_Ary2D();
}
Ary1D_u9p7_8 * TSC_RtnPahFwl_Rte_Prm_RtnPahFwlVehSpd_Ary1D(void)
{
  return (Ary1D_u9p7_8 *) Rte_Prm_RtnPahFwlVehSpd_Ary1D();
}


     /* RtnPahFwl */
      /* RtnPahFwl */

/** Per Instance Memories */
float32 *TSC_RtnPahFwl_Rte_Pim_dRtnPahFwlLowrBnd(void)
{
  return Rte_Pim_dRtnPahFwlLowrBnd();
}
float32 *TSC_RtnPahFwl_Rte_Pim_dRtnPahFwlUpprBnd(void)
{
  return Rte_Pim_dRtnPahFwlUpprBnd();
}
boolean *TSC_RtnPahFwl_Rte_Pim_dRtnPahFwlOverBnd(void)
{
  return Rte_Pim_dRtnPahFwlOverBnd();
}


