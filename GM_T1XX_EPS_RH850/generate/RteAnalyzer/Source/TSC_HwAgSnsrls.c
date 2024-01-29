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
 *          File:  TSC_HwAgSnsrls.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAgSnsrls.h"
#include "TSC_HwAgSnsrls.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}


     // Service calls
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_NvmStordLstPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_NvmStordLstPrm_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_HwAgSnsrls_Rte_IrvWrite_HwAgSnsrlsInit1_StordHwAg(float32 data)
{
  Rte_IrvWrite_HwAgSnsrlsInit1_StordHwAg( data);
}
void TSC_HwAgSnsrls_Rte_IrvWrite_HwAgSnsrlsInit1_StordHwConf(float32 data)
{
  Rte_IrvWrite_HwAgSnsrlsInit1_StordHwConf( data);
}





Std_ReturnType TSC_HwAgSnsrls_Rte_Read_CmplncErrMotToPinion_Val(float32 *data)
{
  return Rte_Read_CmplncErrMotToPinion_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotAgCumvAlgndCrf_Val(s18p13 *data)
{
  return Rte_Read_MotAgCumvAlgndCrf_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotAgCumvAlgndVld_Logl(boolean *data)
{
  return Rte_Read_MotAgCumvAlgndVld_Logl(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotTqCmdCrf_Val(float32 *data)
{
  return Rte_Read_MotTqCmdCrf_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_PinionAg_Val(float32 *data)
{
  return Rte_Read_PinionAg_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_PinionAgConf_Val(float32 *data)
{
  return Rte_Read_PinionAgConf_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_VehYawRate_Val(float32 *data)
{
  return Rte_Read_VehYawRate_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_WhlFrqVld_Logl(boolean *data)
{
  return Rte_Read_WhlFrqVld_Logl(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_WhlLeFrq_Val(float32 *data)
{
  return Rte_Read_WhlLeFrq_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Read_WhlRiFrq_Val(float32 *data)
{
  return Rte_Read_WhlRiFrq_Val(data);
}




Std_ReturnType TSC_HwAgSnsrls_Rte_Write_HwAgSnsrls_Val(float32 data)
{
  return Rte_Write_HwAgSnsrls_Val(data);
}

Std_ReturnType TSC_HwAgSnsrls_Rte_Write_HwAgSnsrlsConf_Val(float32 data)
{
  return Rte_Write_HwAgSnsrlsConf_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
float32 TSC_HwAgSnsrls_Rte_IrvRead_HwAgSnsrlsPer1_StordHwAg(void)
{
return Rte_IrvRead_HwAgSnsrlsPer1_StordHwAg();
}
float32 TSC_HwAgSnsrls_Rte_IrvRead_HwAgSnsrlsPer1_StordHwConf(void)
{
return Rte_IrvRead_HwAgSnsrlsPer1_StordHwConf();
}













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsCorrdPinionAgHwConf_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsCorrdPinionAgHwConf_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsFCentrHwConf_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsFCentrHwConf_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsPinionTqFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsPinionTqFilFrq_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsRelHwAgFil1Frq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsRelHwAgFil1Frq_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsRelHwAgFil2Frq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsRelHwAgFil2Frq_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsSmotngCoeff_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsSmotngCoeff_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsSmotngStepThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsSmotngStepThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsStordPinionConf_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsStordPinionConf_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsStordPinionConfThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsStordPinionConfThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynDifThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsVehDynDifThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynHwConf_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsVehDynHwConf_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynMotVelThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsVehDynMotVelThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynPinionTqThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsVehDynPinionTqThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynVehSpdThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsVehDynVehSpdThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynYawRateThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsVehDynYawRateThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlFrqThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsWhlFrqThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff1_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff1_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff2_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff2_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwAgThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsWhlSpdHwAgThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwConf_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsWhlSpdHwConf_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdRatThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsWhlSpdRatThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdVehSpdThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsWhlSpdVehSpdThd_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsYawRateFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSnsrlsYawRateFilFrq_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_SysGlbPrmSysKineRat_Val(void)
{
  return (float32 ) Rte_Prm_SysGlbPrmSysKineRat_Val();
}
float32  TSC_HwAgSnsrls_Rte_Prm_SysGlbPrmSysTqRat_Val(void)
{
  return (float32 ) Rte_Prm_SysGlbPrmSysTqRat_Val();
}
uint32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynTmr1Thd_Val(void)
{
  return (uint32 ) Rte_Prm_HwAgSnsrlsVehDynTmr1Thd_Val();
}
uint32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val(void)
{
  return (uint32 ) Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val();
}
uint32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdTmrThd_Val(void)
{
  return (uint32 ) Rte_Prm_HwAgSnsrlsWhlSpdTmrThd_Val();
}

StordLstPrmRec1 * TSC_HwAgSnsrls_Rte_CData_StordLstPrmDft(void)
{
  return (StordLstPrmRec1 *) Rte_CData_StordLstPrmDft();
}

     /* HwAgSnsrls */
      /* HwAgSnsrls */

/** Per Instance Memories */
float32 *TSC_HwAgSnsrls_Rte_Pim_CorrdPinionAgHwAgOffs(void)
{
  return Rte_Pim_CorrdPinionAgHwAgOffs();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_CorrdPinionAgHwConf(void)
{
  return Rte_Pim_CorrdPinionAgHwConf();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_FCentrHwAgOffs(void)
{
  return Rte_Pim_FCentrHwAgOffs();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_FCentrHwConf(void)
{
  return Rte_Pim_FCentrHwConf();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_MotAgOffs(void)
{
  return Rte_Pim_MotAgOffs();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevFildRelHwAg1(void)
{
  return Rte_Pim_PrevFildRelHwAg1();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevHwAgOffs(void)
{
  return Rte_Pim_PrevHwAgOffs();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevMaxHwConf(void)
{
  return Rte_Pim_PrevMaxHwConf();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevSmotngHwAg(void)
{
  return Rte_Pim_PrevSmotngHwAg();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_VehDynHwAgOffs(void)
{
  return Rte_Pim_VehDynHwAgOffs();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_WhlSpdHwAgOffs(void)
{
  return Rte_Pim_WhlSpdHwAgOffs();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_WhlSpdHwConf(void)
{
  return Rte_Pim_WhlSpdHwConf();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsStordHwAg(void)
{
  return Rte_Pim_dHwAgSnsrlsStordHwAg();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsStordHwConf(void)
{
  return Rte_Pim_dHwAgSnsrlsStordHwConf();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsVehDynHwConf(void)
{
  return Rte_Pim_dHwAgSnsrlsVehDynHwConf();
}
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsWhlSpdHwConf(void)
{
  return Rte_Pim_dHwAgSnsrlsWhlSpdHwConf();
}
uint32 *TSC_HwAgSnsrls_Rte_Pim_VehDynRefTmr1(void)
{
  return Rte_Pim_VehDynRefTmr1();
}
uint32 *TSC_HwAgSnsrls_Rte_Pim_VehDynRefTmr2(void)
{
  return Rte_Pim_VehDynRefTmr2();
}
uint32 *TSC_HwAgSnsrls_Rte_Pim_WhlSpdRefTmr(void)
{
  return Rte_Pim_WhlSpdRefTmr();
}
uint8 *TSC_HwAgSnsrls_Rte_Pim_SelnCaseSt(void)
{
  return Rte_Pim_SelnCaseSt();
}
boolean *TSC_HwAgSnsrls_Rte_Pim_FCentrHwAgEna(void)
{
  return Rte_Pim_FCentrHwAgEna();
}
boolean *TSC_HwAgSnsrls_Rte_Pim_MotAgOffsEna(void)
{
  return Rte_Pim_MotAgOffsEna();
}
boolean *TSC_HwAgSnsrls_Rte_Pim_PrevSmotngSt(void)
{
  return Rte_Pim_PrevSmotngSt();
}
boolean *TSC_HwAgSnsrls_Rte_Pim_PrevVehDynFil1Ena(void)
{
  return Rte_Pim_PrevVehDynFil1Ena();
}
boolean *TSC_HwAgSnsrls_Rte_Pim_PrevVehDynFil2Ena(void)
{
  return Rte_Pim_PrevVehDynFil2Ena();
}
boolean *TSC_HwAgSnsrls_Rte_Pim_WhlSpdHwAgLrndEna(void)
{
  return Rte_Pim_WhlSpdHwAgLrndEna();
}
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_PinionTqFil(void)
{
  return Rte_Pim_PinionTqFil();
}
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_RelHwAgFil1(void)
{
  return Rte_Pim_RelHwAgFil1();
}
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_RelHwAgFil2(void)
{
  return Rte_Pim_RelHwAgFil2();
}
StordLstPrmRec1 *TSC_HwAgSnsrls_Rte_Pim_StordLstPrm(void)
{
  return Rte_Pim_StordLstPrm();
}
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_YawRateFil(void)
{
  return Rte_Pim_YawRateFil();
}


