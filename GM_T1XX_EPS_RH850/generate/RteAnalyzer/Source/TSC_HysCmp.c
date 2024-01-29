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
 *          File:  TSC_HysCmp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HysCmp.h"
#include "TSC_HysCmp.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HysCmp_Rte_Read_AssiCmdBas_Val(float32 *data)
{
  return Rte_Read_AssiCmdBas_Val(data);
}

Std_ReturnType TSC_HysCmp_Rte_Read_AssiMechT_Val(float32 *data)
{
  return Rte_Read_AssiMechT_Val(data);
}

Std_ReturnType TSC_HysCmp_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_HysCmp_Rte_Read_HwTqOvrl_Val(float32 *data)
{
  return Rte_Read_HwTqOvrl_Val(data);
}

Std_ReturnType TSC_HysCmp_Rte_Read_HysCmpCmdDi_Logl(boolean *data)
{
  return Rte_Read_HysCmpCmdDi_Logl(data);
}

Std_ReturnType TSC_HysCmp_Rte_Read_SysFricOffs_Val(float32 *data)
{
  return Rte_Read_SysFricOffs_Val(data);
}

Std_ReturnType TSC_HysCmp_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_HysCmp_Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
{
  return Rte_Read_WhlImbRejctnAmp_Val(data);
}




Std_ReturnType TSC_HysCmp_Rte_Write_HysCmpCmd_Val(float32 data)
{
  return Rte_Write_HysCmpCmd_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HysCmp_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HysCmp_Rte_Prm_HysCmpAssiCmdLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HysCmpAssiCmdLpFilFrq_Val();
}
float32  TSC_HysCmp_Rte_Prm_HysCmpFinalOutpLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HysCmpFinalOutpLpFilFrq_Val();
}
float32  TSC_HysCmp_Rte_Prm_HysCmpHwTqLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HysCmpHwTqLpFilFrq_Val();
}
float32  TSC_HysCmp_Rte_Prm_HysCmpOutpLim_Val(void)
{
  return (float32 ) Rte_Prm_HysCmpOutpLim_Val();
}
float32  TSC_HysCmp_Rte_Prm_HysCmpRevGain_Val(void)
{
  return (float32 ) Rte_Prm_HysCmpRevGain_Val();
}
float32  TSC_HysCmp_Rte_Prm_SysGlbPrmSysTqRat_Val(void)
{
  return (float32 ) Rte_Prm_SysGlbPrmSysTqRat_Val();
}
u9p7  TSC_HysCmp_Rte_Prm_HysCmpAssiInpLim_Val(void)
{
  return (u9p7 ) Rte_Prm_HysCmpAssiInpLim_Val();
}
Ary1D_u4p12_12 * TSC_HysCmp_Rte_Prm_HysCmpEffLossY_Ary1D(void)
{
  return (Ary1D_u4p12_12 *) Rte_Prm_HysCmpEffLossY_Ary1D();
}
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpEffOffsY_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_HysCmpEffOffsY_Ary1D();
}
Ary1D_s14p1_8 * TSC_HysCmp_Rte_Prm_HysCmpFricTScaX_Ary1D(void)
{
  return (Ary1D_s14p1_8 *) Rte_Prm_HysCmpFricTScaX_Ary1D();
}
Ary1D_u9p7_8 * TSC_HysCmp_Rte_Prm_HysCmpFricTScaY_Ary1D(void)
{
  return (Ary1D_u9p7_8 *) Rte_Prm_HysCmpFricTScaY_Ary1D();
}
Ary1D_u8p8_6 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
{
  return (Ary1D_u8p8_6 *) Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D();
}
Ary1D_u2p14_6 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
{
  return (Ary1D_u2p14_6 *) Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D();
}
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D();
}
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D();
}
Ary2D_u4p12_12_8 * TSC_HysCmp_Rte_Prm_HysCmpHwTqScaX_Ary2D(void)
{
  return (Ary2D_u4p12_12_8 *) Rte_Prm_HysCmpHwTqScaX_Ary2D();
}
Ary2D_u4p12_12_8 * TSC_HysCmp_Rte_Prm_HysCmpHwTqScaY_Ary2D(void)
{
  return (Ary2D_u4p12_12_8 *) Rte_Prm_HysCmpHwTqScaY_Ary2D();
}
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpHysSatnY_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_HysCmpHysSatnY_Ary1D();
}
Ary1D_u9p7_5 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(void)
{
  return (Ary1D_u9p7_5 *) Rte_Prm_HysCmpNegHysCmpScaX_Ary1D();
}
Ary1D_u2p14_5 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(void)
{
  return (Ary1D_u2p14_5 *) Rte_Prm_HysCmpNegHysCmpScaY_Ary1D();
}
Ary1D_u8p8_8 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpX_Ary1D(void)
{
  return (Ary1D_u8p8_8 *) Rte_Prm_HysCmpNegHysCmpX_Ary1D();
}
Ary1D_u9p7_8 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpY_Ary1D(void)
{
  return (Ary1D_u9p7_8 *) Rte_Prm_HysCmpNegHysCmpY_Ary1D();
}
Ary1D_u2p14_6 * TSC_HysCmp_Rte_Prm_HysCmpRiseX_Ary1D(void)
{
  return (Ary1D_u2p14_6 *) Rte_Prm_HysCmpRiseX_Ary1D();
}
Ary1D_u2p14_6 * TSC_HysCmp_Rte_Prm_HysCmpRiseY_Ary1D(void)
{
  return (Ary1D_u2p14_6 *) Rte_Prm_HysCmpRiseY_Ary1D();
}
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
{
  return (Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D();
}


     /* HysCmp */
      /* HysCmp */

/** Per Instance Memories */
float32 *TSC_HysCmp_Rte_Pim_PrevAssiCmdFildVal(void)
{
  return Rte_Pim_PrevAssiCmdFildVal();
}
float32 *TSC_HysCmp_Rte_Pim_PrevHwTqFildVal(void)
{
  return Rte_Pim_PrevHwTqFildVal();
}
float32 *TSC_HysCmp_Rte_Pim_PrevRiseX(void)
{
  return Rte_Pim_PrevRiseX();
}
float32 *TSC_HysCmp_Rte_Pim_PrevRiseY(void)
{
  return Rte_Pim_PrevRiseY();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpAssiCmdFild(void)
{
  return Rte_Pim_dHysCmpAssiCmdFild();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpAvl(void)
{
  return Rte_Pim_dHysCmpAvl();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpEffCmpTq(void)
{
  return Rte_Pim_dHysCmpEffCmpTq();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpFric(void)
{
  return Rte_Pim_dHysCmpFric();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpHwTqFild(void)
{
  return Rte_Pim_dHysCmpHwTqFild();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpNegAvl(void)
{
  return Rte_Pim_dHysCmpNegAvl();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpPosAvl(void)
{
  return Rte_Pim_dHysCmpPosAvl();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpRawVal(void)
{
  return Rte_Pim_dHysCmpRawVal();
}
float32 *TSC_HysCmp_Rte_Pim_dHysCmpRiseYFac(void)
{
  return Rte_Pim_dHysCmpRiseYFac();
}
FilLpRec1 *TSC_HysCmp_Rte_Pim_AssiCmdLpFil(void)
{
  return Rte_Pim_AssiCmdLpFil();
}
FilLpRec1 *TSC_HysCmp_Rte_Pim_FinalOutpLpFil(void)
{
  return Rte_Pim_FinalOutpLpFil();
}
FilLpRec1 *TSC_HysCmp_Rte_Pim_HwTqLpFil(void)
{
  return Rte_Pim_HwTqLpFil();
}


