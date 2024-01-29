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
 *          File:  TSC_TEstimn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_TEstimn.h"
#include "TSC_TEstimn.h"








Std_ReturnType TSC_TEstimn_Rte_Read_AmbT_Val(float32 *data)
{
  return Rte_Read_AmbT_Val(data);
}

Std_ReturnType TSC_TEstimn_Rte_Read_AmbTVld_Logl(boolean *data)
{
  return Rte_Read_AmbTVld_Logl(data);
}

Std_ReturnType TSC_TEstimn_Rte_Read_EcuTFild_Val(float32 *data)
{
  return Rte_Read_EcuTFild_Val(data);
}

Std_ReturnType TSC_TEstimn_Rte_Read_EngOilT_Val(float32 *data)
{
  return Rte_Read_EngOilT_Val(data);
}

Std_ReturnType TSC_TEstimn_Rte_Read_EngOilTVld_Logl(boolean *data)
{
  return Rte_Read_EngOilTVld_Logl(data);
}




Std_ReturnType TSC_TEstimn_Rte_Write_AssiMechT_Val(float32 data)
{
  return Rte_Write_AssiMechT_Val(data);
}

Std_ReturnType TSC_TEstimn_Rte_Write_MotFetT_Val(float32 data)
{
  return Rte_Write_MotFetT_Val(data);
}

Std_ReturnType TSC_TEstimn_Rte_Write_MotMagT_Val(float32 data)
{
  return Rte_Write_MotMagT_Val(data);
}

Std_ReturnType TSC_TEstimn_Rte_Write_MotWidgT_Val(float32 data)
{
  return Rte_Write_MotWidgT_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_TEstimn_Rte_Read_AssiMechTEstimnDi_Logl(boolean *data)
{
  return Rte_Read_AssiMechTEstimnDi_Logl(data);
}

Std_ReturnType TSC_TEstimn_Rte_Read_HwVel_Val(float32 *data)
{
  return Rte_Read_HwVel_Val(data);
}

Std_ReturnType TSC_TEstimn_Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
{
  return Rte_Read_MotCurrPeakEstimd_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_TEstimn_Rte_Prm_TEstimnAmbPwrMplr_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAmbPwrMplr_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAmbTSca_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAmbTSca_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechAmbMplr_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechAmbMplr_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechCorrLim_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechCorrLim_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechDampgSca_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechDampgSca_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechDftT_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechDftT_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnAssiMechSlew_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnAssiMechSlew_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTAssiMech_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCorrnTAssiMech_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTCu_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCorrnTCu_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTMag_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCorrnTMag_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCorrnTSi_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCorrnTSi_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCuAmbLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCuAmbLpFilFrq_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCuAmbMplr_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCuAmbMplr_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCuCorrnLim_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCuCorrnLim_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffA1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCuLLFilCoeffA1_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB0_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCuLLFilCoeffB0_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnCuLLFilCoeffB1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnCuLLFilCoeffB1_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnEngTSca_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnEngTSca_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnMagAmbLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnMagAmbLpFilFrq_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnMagAmbMplr_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnMagAmbMplr_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnMagCorrnLim_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnMagCorrnLim_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffA1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnMagLLFilCoeffA1_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB0_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnMagLLFilCoeffB0_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnMagLLFilCoeffB1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnMagLLFilCoeffB1_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnSiAmbLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnSiAmbLpFilFrq_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnSiAmbMplr_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnSiAmbMplr_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnSiCorrnLim_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnSiCorrnLim_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffA1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnSiLLFilCoeffA1_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB0_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnSiLLFilCoeffB0_Val();
}
float32  TSC_TEstimn_Rte_Prm_TEstimnSiLLFilCoeffB1_Val(void)
{
  return (float32 ) Rte_Prm_TEstimnSiLLFilCoeffB1_Val();
}
boolean  TSC_TEstimn_Rte_Prm_TEstimnWghtAvrgTDi_Logl(void)
{
  return (boolean ) Rte_Prm_TEstimnWghtAvrgTDi_Logl();
}


     /* TEstimn */
      /* TEstimn */

/** Per Instance Memories */
float32 *TSC_TEstimn_Rte_Pim_AssiMechTEstimnPrev(void)
{
  return Rte_Pim_AssiMechTEstimnPrev();
}
float32 *TSC_TEstimn_Rte_Pim_AssiMechTSlewLimPrev(void)
{
  return Rte_Pim_AssiMechTSlewLimPrev();
}
float32 *TSC_TEstimn_Rte_Pim_CuTEstimnPrev(void)
{
  return Rte_Pim_CuTEstimnPrev();
}
float32 *TSC_TEstimn_Rte_Pim_MagTEstimnPrev(void)
{
  return Rte_Pim_MagTEstimnPrev();
}
float32 *TSC_TEstimn_Rte_Pim_SiTEstimnPrev(void)
{
  return Rte_Pim_SiTEstimnPrev();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAmbPwr(void)
{
  return Rte_Pim_dTEstimnAmbPwr();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechCorrn(void)
{
  return Rte_Pim_dTEstimnAssiMechCorrn();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechDampgSca(void)
{
  return Rte_Pim_dTEstimnAssiMechDampgSca();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechFil(void)
{
  return Rte_Pim_dTEstimnAssiMechFil();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnAssiMechLLFil(void)
{
  return Rte_Pim_dTEstimnAssiMechLLFil();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnCuCorrn(void)
{
  return Rte_Pim_dTEstimnCuCorrn();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnCuLLFil(void)
{
  return Rte_Pim_dTEstimnCuLLFil();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnMagCorrn(void)
{
  return Rte_Pim_dTEstimnMagCorrn();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnMagLLFil(void)
{
  return Rte_Pim_dTEstimnMagLLFil();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnScadAmbT(void)
{
  return Rte_Pim_dTEstimnScadAmbT();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnScadEngT(void)
{
  return Rte_Pim_dTEstimnScadEngT();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnSiCorrn(void)
{
  return Rte_Pim_dTEstimnSiCorrn();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnSiLLFilv(void)
{
  return Rte_Pim_dTEstimnSiLLFilv();
}
float32 *TSC_TEstimn_Rte_Pim_dTEstimnWghtAvrgT(void)
{
  return Rte_Pim_dTEstimnWghtAvrgT();
}
boolean *TSC_TEstimn_Rte_Pim_AmbTVldPrev(void)
{
  return Rte_Pim_AmbTVldPrev();
}
boolean *TSC_TEstimn_Rte_Pim_AssiMechTInitEna(void)
{
  return Rte_Pim_AssiMechTInitEna();
}
boolean *TSC_TEstimn_Rte_Pim_EngOilTVldPrev(void)
{
  return Rte_Pim_EngOilTVldPrev();
}
FilLpRec1 *TSC_TEstimn_Rte_Pim_AssiMechFilLp(void)
{
  return Rte_Pim_AssiMechFilLp();
}
FilLpRec1 *TSC_TEstimn_Rte_Pim_CuFilLp(void)
{
  return Rte_Pim_CuFilLp();
}
FilLpRec1 *TSC_TEstimn_Rte_Pim_MagFilLp(void)
{
  return Rte_Pim_MagFilLp();
}
FilLpRec1 *TSC_TEstimn_Rte_Pim_SiFilLp(void)
{
  return Rte_Pim_SiFilLp();
}


