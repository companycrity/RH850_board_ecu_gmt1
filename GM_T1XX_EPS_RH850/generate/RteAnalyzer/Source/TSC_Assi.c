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
 *          File:  TSC_Assi.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Assi.h"
#include "TSC_Assi.h"








Std_ReturnType TSC_Assi_Rte_Read_AssiCmdBasSca_Val(float32 *data)
{
  return Rte_Read_AssiCmdBasSca_Val(data);
}

Std_ReturnType TSC_Assi_Rte_Read_AssiLnrGain_Val(float32 *data)
{
  return Rte_Read_AssiLnrGain_Val(data);
}

Std_ReturnType TSC_Assi_Rte_Read_AssiLnrGainEna_Logl(boolean *data)
{
  return Rte_Read_AssiLnrGainEna_Logl(data);
}

Std_ReturnType TSC_Assi_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_Assi_Rte_Read_HwTqHysOvrl_Val(float32 *data)
{
  return Rte_Read_HwTqHysOvrl_Val(data);
}

Std_ReturnType TSC_Assi_Rte_Read_HwTqOvrl_Val(float32 *data)
{
  return Rte_Read_HwTqOvrl_Val(data);
}

Std_ReturnType TSC_Assi_Rte_Read_ThermLimSlowFilMax_Val(float32 *data)
{
  return Rte_Read_ThermLimSlowFilMax_Val(data);
}

Std_ReturnType TSC_Assi_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_Assi_Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
{
  return Rte_Read_WhlImbRejctnAmp_Val(data);
}




Std_ReturnType TSC_Assi_Rte_Write_AssiCmdBas_Val(float32 data)
{
  return Rte_Write_AssiCmdBas_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_Assi_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





Ary2D_u8p8_12_20 * TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
{
  return (Ary2D_u8p8_12_20 *) Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D();
}
Ary2D_s4p11_12_20 * TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
{
  return (Ary2D_s4p11_12_20 *) Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D();
}
Ary2D_u8p8_12_20 * TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
{
  return (Ary2D_u8p8_12_20 *) Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D();
}
Ary2D_s4p11_12_20 * TSC_Assi_Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
{
  return (Ary2D_s4p11_12_20 *) Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D();
}
Ary1D_u16p0_2 * TSC_Assi_Rte_Prm_AssiThermScaX_Ary1D(void)
{
  return (Ary1D_u16p0_2 *) Rte_Prm_AssiThermScaX_Ary1D();
}
Ary1D_u2p14_2 * TSC_Assi_Rte_Prm_AssiThermScaY_Ary1D(void)
{
  return (Ary1D_u2p14_2 *) Rte_Prm_AssiThermScaY_Ary1D();
}
Ary2D_u5p11_12_5 * TSC_Assi_Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(void)
{
  return (Ary2D_u5p11_12_5 *) Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D();
}
Ary2D_u2p14_12_5 * TSC_Assi_Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(void)
{
  return (Ary2D_u2p14_12_5 *) Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D();
}
Ary1D_u9p7_12 * TSC_Assi_Rte_Prm_SysGlbPrmVehSpd_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpd_Ary1D();
}
Ary1D_u9p7_12 * TSC_Assi_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D();
}


     /* Assi */
      /* Assi */

/** Per Instance Memories */
float32 *TSC_Assi_Rte_Pim_dAssiThermAssiSca(void)
{
  return Rte_Pim_dAssiThermAssiSca();
}
float32 *TSC_Assi_Rte_Pim_dAssiWhlImbRejctnBlnd(void)
{
  return Rte_Pim_dAssiWhlImbRejctnBlnd();
}


