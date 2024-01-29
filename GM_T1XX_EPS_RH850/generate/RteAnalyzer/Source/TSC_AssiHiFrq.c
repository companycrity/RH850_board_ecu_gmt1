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
 *          File:  TSC_AssiHiFrq.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_AssiHiFrq.h"
#include "TSC_AssiHiFrq.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_AssiHiFrq_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_AssiHiFrq_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_AssiHiFrq_Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
{
  return Rte_Read_WhlImbRejctnAmp_Val(data);
}




Std_ReturnType TSC_AssiHiFrq_Rte_Write_AssiHiFrqCmd_Val(float32 data)
{
  return Rte_Write_AssiHiFrqCmd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_AssiHiFrqHpFilFrq_Val();
}
Ary2D_u3p13_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqGainY_Ary2D(void)
{
  return (Ary2D_u3p13_12_13 *) Rte_Prm_AssiHiFrqGainY_Ary2D();
}
Ary1D_u7p9_12 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(void)
{
  return (Ary1D_u7p9_12 *) Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D();
}
Ary2D_u5p11_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
{
  return (Ary2D_u5p11_12_13 *) Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D();
}
Ary2D_u5p11_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqTqX_Ary2D(void)
{
  return (Ary2D_u5p11_12_13 *) Rte_Prm_AssiHiFrqTqX_Ary2D();
}
Ary2D_u4p12_12_5 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
{
  return (Ary2D_u4p12_12_5 *) Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D();
}
Ary2D_u1p15_12_5 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
{
  return (Ary2D_u1p15_12_5 *) Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D();
}
Ary2D_u3p13_12_13 * TSC_AssiHiFrq_Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
{
  return (Ary2D_u3p13_12_13 *) Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D();
}
Ary1D_u9p7_12 * TSC_AssiHiFrq_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D();
}


     /* AssiHiFrq */
      /* AssiHiFrq */

/** Per Instance Memories */
float32 *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGain(void)
{
  return Rte_Pim_dAssiHiFrqGain();
}
float32 *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainBlnd(void)
{
  return Rte_Pim_dAssiHiFrqGainBlnd();
}
float32 *TSC_AssiHiFrq_Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero(void)
{
  return Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero();
}
FilHpRec1 *TSC_AssiHiFrq_Rte_Pim_HwTqHpFil(void)
{
  return Rte_Pim_HwTqHpFil();
}


