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
 *          File:  TSC_StabyCmp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_StabyCmp.h"
#include "TSC_StabyCmp.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_StabyCmp_Rte_Read_AssiCmdBasSca_Val(float32 *data)
{
  return Rte_Read_AssiCmdBasSca_Val(data);
}

Std_ReturnType TSC_StabyCmp_Rte_Read_AssiCmdSum_Val(float32 *data)
{
  return Rte_Read_AssiCmdSum_Val(data);
}

Std_ReturnType TSC_StabyCmp_Rte_Read_AssiPahLimrActv_Val(float32 *data)
{
  return Rte_Read_AssiPahLimrActv_Val(data);
}

Std_ReturnType TSC_StabyCmp_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_StabyCmp_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_StabyCmp_Rte_Write_AssiCmd_Val(float32 data)
{
  return Rte_Write_AssiCmd_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_StabyCmp_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_StabyCmp_Rte_Prm_StabyCmpHwTqLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_StabyCmpHwTqLpFilFrq_Val();
}
Ary1D_u2p14_2 * TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndX_Ary1D(void)
{
  return (Ary1D_u2p14_2 *) Rte_Prm_StabyCmpAssiScaBlndX_Ary1D();
}
Ary1D_u2p14_2 * TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndY_Ary1D(void)
{
  return (Ary1D_u2p14_2 *) Rte_Prm_StabyCmpAssiScaBlndY_Ary1D();
}
Ary1D_u9p7_6 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(void)
{
  return (Ary1D_u9p7_6 *) Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D();
}
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(void)
{
  return (Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D();
}
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(void)
{
  return (Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D();
}
Ary2D_u8p8_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(void)
{
  return (Ary2D_u8p8_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D();
}
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(void)
{
  return (Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D();
}
Ary2D_u8p8_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(void)
{
  return (Ary2D_u8p8_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D();
}
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(void)
{
  return (Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D();
}
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil1Struct_Rec(void)
{
  return (FilNotchGainRec1 *) Rte_Prm_StabyCmpNotchFil1Struct_Rec();
}
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil2Struct_Rec(void)
{
  return (FilNotchGainRec1 *) Rte_Prm_StabyCmpNotchFil2Struct_Rec();
}
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil3Struct_Rec(void)
{
  return (FilNotchGainRec1 *) Rte_Prm_StabyCmpNotchFil3Struct_Rec();
}
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil4Struct_Rec(void)
{
  return (FilNotchGainRec1 *) Rte_Prm_StabyCmpNotchFil4Struct_Rec();
}


     /* StabyCmp */
      /* StabyCmp */

/** Per Instance Memories */
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpAssiScaCmpBlnd(void)
{
  return Rte_Pim_dStabyCmpAssiScaCmpBlnd();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil02Blnd(void)
{
  return Rte_Pim_dStabyCmpNotchFil02Blnd();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil04Blnd(void)
{
  return Rte_Pim_dStabyCmpNotchFil04Blnd();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Blnd(void)
{
  return Rte_Pim_dStabyCmpNotchFil12Blnd();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Outp(void)
{
  return Rte_Pim_dStabyCmpNotchFil12Outp();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil1Outp(void)
{
  return Rte_Pim_dStabyCmpNotchFil1Outp();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil2Outp(void)
{
  return Rte_Pim_dStabyCmpNotchFil2Outp();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Blnd(void)
{
  return Rte_Pim_dStabyCmpNotchFil34Blnd();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Outp(void)
{
  return Rte_Pim_dStabyCmpNotchFil34Outp();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil3Outp(void)
{
  return Rte_Pim_dStabyCmpNotchFil3Outp();
}
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil4Outp(void)
{
  return Rte_Pim_dStabyCmpNotchFil4Outp();
}
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch1Fil(void)
{
  return Rte_Pim_AssiNotch1Fil();
}
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch2Fil(void)
{
  return Rte_Pim_AssiNotch2Fil();
}
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch3Fil(void)
{
  return Rte_Pim_AssiNotch3Fil();
}
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch4Fil(void)
{
  return Rte_Pim_AssiNotch4Fil();
}
FilLpRec1 *TSC_StabyCmp_Rte_Pim_HwTqLpFil(void)
{
  return Rte_Pim_HwTqLpFil();
}


