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
 *          File:  TSC_MotCurrRegCfg.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_MotCurrRegCfg.h"
#include "TSC_MotCurrRegCfg.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_CurrMeasLoaMtgtnEna_Logl(boolean *data)
{
  return Rte_Read_CurrMeasLoaMtgtnEna_Logl(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
{
  return Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data)
{
  return Rte_Read_IvtrLoaMtgtnEna_Logl(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
{
  return Rte_Read_MotCurrEolCalSt_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_MotInduDaxEstimd_Val(float32 *data)
{
  return Rte_Read_MotInduDaxEstimd_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_MotInduQaxEstimd_Val(float32 *data)
{
  return Rte_Read_MotInduQaxEstimd_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_MotREstimd_Val(float32 *data)
{
  return Rte_Read_MotREstimd_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_MotVelMrf_Val(float32 *data)
{
  return Rte_Read_MotVelMrf_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}




Std_ReturnType TSC_MotCurrRegCfg_Rte_Write_MotAgElecDly_Val(float32 data)
{
  return Rte_Write_MotAgElecDly_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Write_MotDampgDax_Val(float32 data)
{
  return Rte_Write_MotDampgDax_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Write_MotDampgQax_Val(float32 data)
{
  return Rte_Write_MotDampgQax_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Write_MotIntglGainDax_Val(float32 data)
{
  return Rte_Write_MotIntglGainDax_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Write_MotIntglGainQax_Val(float32 data)
{
  return Rte_Write_MotIntglGainQax_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Write_MotPropGainDax_Val(float32 data)
{
  return Rte_Write_MotPropGainDax_Val(data);
}

Std_ReturnType TSC_MotCurrRegCfg_Rte_Write_MotPropGainQax_Val(float32 data)
{
  return Rte_Write_MotPropGainQax_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val();
}
float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val();
}
float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val();
}
float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val();
}
float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val();
}
float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotRVirtDax_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgMotRVirtDax_Val();
}
float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotRVirtQax_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgMotRVirtQax_Val();
}
float32  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val();
}
uint8  TSC_MotCurrRegCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
{
  return (uint8 ) Rte_Prm_SysGlbPrmMotPoleCnt_Val();
}
boolean  TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void)
{
  return (boolean ) Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl();
}
boolean  TSC_MotCurrRegCfg_Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
{
  return (boolean ) Rte_Prm_MotRefMdlFbCtrlDi_Logl();
}
Ary1D_u10p6_4 * TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(void)
{
  return (Ary1D_u10p6_4 *) Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D();
}
Ary1D_u10p6_4 * TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(void)
{
  return (Ary1D_u10p6_4 *) Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D();
}
Ary1D_u11p5_4 * TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(void)
{
  return (Ary1D_u11p5_4 *) Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D();
}
Ary1D_u9p7_4 * TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D(void)
{
  return (Ary1D_u9p7_4 *) Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D();
}
Ary1D_u9p7_4 * TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D(void)
{
  return (Ary1D_u9p7_4 *) Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D();
}


     /* MotCurrRegCfg */
      /* MotCurrRegCfg */

/** Per Instance Memories */
float32 *TSC_MotCurrRegCfg_Rte_Pim_dMotCurrRegCfgMotVelMrfFild(void)
{
  return Rte_Pim_dMotCurrRegCfgMotVelMrfFild();
}
FilLpRec1 *TSC_MotCurrRegCfg_Rte_Pim_MotVelMrfFild(void)
{
  return Rte_Pim_MotVelMrfFild();
}


