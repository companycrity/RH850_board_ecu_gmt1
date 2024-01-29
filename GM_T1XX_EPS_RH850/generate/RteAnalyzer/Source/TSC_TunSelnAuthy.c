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
 *          File:  TSC_TunSelnAuthy.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_TunSelnAuthy.h"
#include "TSC_TunSelnAuthy.h"








Std_ReturnType TSC_TunSelnAuthy_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_TunSelnAuthy_Rte_Read_HwVel_Val(float32 *data)
{
  return Rte_Read_HwVel_Val(data);
}

Std_ReturnType TSC_TunSelnAuthy_Rte_Read_TunSelnRtDi_Logl(boolean *data)
{
  return Rte_Read_TunSelnRtDi_Logl(data);
}

Std_ReturnType TSC_TunSelnAuthy_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





boolean  TSC_TunSelnAuthy_Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl(void)
{
  return (boolean ) Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl();
}
Ary1D_u4p12_6 * TSC_TunSelnAuthy_Rte_Prm_TunSelnAuthyHwTqY_Ary1D(void)
{
  return (Ary1D_u4p12_6 *) Rte_Prm_TunSelnAuthyHwTqY_Ary1D();
}
Ary1D_u6p10_6 * TSC_TunSelnAuthy_Rte_Prm_TunSelnAuthyHwVelY_Ary1D(void)
{
  return (Ary1D_u6p10_6 *) Rte_Prm_TunSelnAuthyHwVelY_Ary1D();
}
Ary1D_u9p7_6 * TSC_TunSelnAuthy_Rte_Prm_TunSelnAuthyVehSpdX_Ary1D(void)
{
  return (Ary1D_u9p7_6 *) Rte_Prm_TunSelnAuthyVehSpdX_Ary1D();
}


     /* TunSelnAuthy */
      /* TunSelnAuthy */


