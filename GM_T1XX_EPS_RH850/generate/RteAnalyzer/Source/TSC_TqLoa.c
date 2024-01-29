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
 *          File:  TSC_TqLoa.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_TqLoa.h"
#include "TSC_TqLoa.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_TqLoa_Rte_Read_MotAgLoaMtgtnEna_Logl(boolean *data)
{
  return Rte_Read_MotAgLoaMtgtnEna_Logl(data);
}

Std_ReturnType TSC_TqLoa_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_TqLoa_Rte_Read_PinionAg_Val(float32 *data)
{
  return Rte_Read_PinionAg_Val(data);
}

Std_ReturnType TSC_TqLoa_Rte_Read_PinionAgConf_Val(float32 *data)
{
  return Rte_Read_PinionAgConf_Val(data);
}

Std_ReturnType TSC_TqLoa_Rte_Read_VehLatA_Val(float32 *data)
{
  return Rte_Read_VehLatA_Val(data);
}

Std_ReturnType TSC_TqLoa_Rte_Read_VehLatAVld_Logl(boolean *data)
{
  return Rte_Read_VehLatAVld_Logl(data);
}

Std_ReturnType TSC_TqLoa_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_TqLoa_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}




Std_ReturnType TSC_TqLoa_Rte_Write_TqLoaAvl_Logl(boolean data)
{
  return Rte_Write_TqLoaAvl_Logl(data);
}

Std_ReturnType TSC_TqLoa_Rte_Write_TqLoaCmd_Val(float32 data)
{
  return Rte_Write_TqLoaCmd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_TqLoa_Rte_Prm_TqLoaDrvrTqNom_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaDrvrTqNom_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaMotTqCmdLim_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaMotTqCmdLim_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaMotVelMgnThd_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaMotVelMgnThd_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaTqCmdMgnThd_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaTqCmdMgnThd_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaVehSteerRat_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaVehSteerRat_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaVehUnderSteerGrdt_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaVehUnderSteerGrdt_Val();
}
float32  TSC_TqLoa_Rte_Prm_TqLoaVehWhlBas_Val(void)
{
  return (float32 ) Rte_Prm_TqLoaVehWhlBas_Val();
}
Ary1D_u4p12_8 * TSC_TqLoa_Rte_Prm_TqLoaTqCmdLimY_Ary1D(void)
{
  return (Ary1D_u4p12_8 *) Rte_Prm_TqLoaTqCmdLimY_Ary1D();
}
Ary1D_u2p14_4 * TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(void)
{
  return (Ary1D_u2p14_4 *) Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D();
}
Ary2D_u1p15_8_4 * TSC_TqLoa_Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(void)
{
  return (Ary2D_u1p15_8_4 *) Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D();
}
Ary1D_u4p12_8 * TSC_TqLoa_Rte_Prm_TqLoaVehLatAGainY_Ary1D(void)
{
  return (Ary1D_u4p12_8 *) Rte_Prm_TqLoaVehLatAGainY_Ary1D();
}
Ary1D_u10p6_5 * TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacX_Ary1D(void)
{
  return (Ary1D_u10p6_5 *) Rte_Prm_TqLoaVehSpdScaFacX_Ary1D();
}
Ary1D_u1p15_5 * TSC_TqLoa_Rte_Prm_TqLoaVehSpdScaFacY_Ary1D(void)
{
  return (Ary1D_u1p15_5 *) Rte_Prm_TqLoaVehSpdScaFacY_Ary1D();
}
Ary1D_u10p6_8 * TSC_TqLoa_Rte_Prm_TqLoaVehSpdX_Ary1D(void)
{
  return (Ary1D_u10p6_8 *) Rte_Prm_TqLoaVehSpdX_Ary1D();
}


     /* TqLoa */
      /* TqLoa */

/** Per Instance Memories */
float32 *TSC_TqLoa_Rte_Pim_MotTqCmdPrev(void)
{
  return Rte_Pim_MotTqCmdPrev();
}
float32 *TSC_TqLoa_Rte_Pim_MotVelAndTqBasdScaFacPrev(void)
{
  return Rte_Pim_MotVelAndTqBasdScaFacPrev();
}
float32 *TSC_TqLoa_Rte_Pim_VehLatADifScaFacPrev(void)
{
  return Rte_Pim_VehLatADifScaFacPrev();
}
float32 *TSC_TqLoa_Rte_Pim_dTqLoaMotTqCmdPreScag(void)
{
  return Rte_Pim_dTqLoaMotTqCmdPreScag();
}
float32 *TSC_TqLoa_Rte_Pim_dTqLoaMotVelAndTqBasdScaFac(void)
{
  return Rte_Pim_dTqLoaMotVelAndTqBasdScaFac();
}
float32 *TSC_TqLoa_Rte_Pim_dTqLoaScaFacFinal(void)
{
  return Rte_Pim_dTqLoaScaFacFinal();
}
float32 *TSC_TqLoa_Rte_Pim_dTqLoaVehLatADifScaFac(void)
{
  return Rte_Pim_dTqLoaVehLatADifScaFac();
}
float32 *TSC_TqLoa_Rte_Pim_dTqLoaVehLatAEstimn(void)
{
  return Rte_Pim_dTqLoaVehLatAEstimn();
}
float32 *TSC_TqLoa_Rte_Pim_dTqLoaVehSpdBasdScaFac(void)
{
  return Rte_Pim_dTqLoaVehSpdBasdScaFac();
}
FilLpRec1 *TSC_TqLoa_Rte_Pim_VehLatAEstimnFil(void)
{
  return Rte_Pim_VehLatAEstimnFil();
}


