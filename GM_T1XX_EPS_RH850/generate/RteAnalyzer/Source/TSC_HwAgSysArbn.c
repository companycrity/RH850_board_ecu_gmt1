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
 *          File:  TSC_HwAgSysArbn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAgSysArbn.h"
#include "TSC_HwAgSysArbn.h"















     // Client Server Interfaces:
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HwAgSysArbn_Rte_Read_CmplncErrMotToPinion_Val(float32 *data)
{
  return Rte_Read_CmplncErrMotToPinion_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_CmplncErrPinionToHw_Val(float32 *data)
{
  return Rte_Read_CmplncErrPinionToHw_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgCorrd_Val(float32 *data)
{
  return Rte_Read_HwAgCorrd_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgIdptSig_Val(uint8 *data)
{
  return Rte_Read_HwAgIdptSig_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgSnsrls_Val(float32 *data)
{
  return Rte_Read_HwAgSnsrls_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgSnsrlsConf_Val(float32 *data)
{
  return Rte_Read_HwAgSnsrlsConf_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Read_MotVelVld_Logl(boolean *data)
{
  return Rte_Read_MotVelVld_Logl(data);
}




Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgFinal_Val(float32 data)
{
  return Rte_Write_HwAgFinal_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgNotCorrd_Val(float32 data)
{
  return Rte_Write_HwAgNotCorrd_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgToSerlCom_Val(float32 data)
{
  return Rte_Write_HwAgToSerlCom_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgVldToSerlCom_Logl(boolean data)
{
  return Rte_Write_HwAgVldToSerlCom_Logl(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwVel_Val(float32 data)
{
  return Rte_Write_HwVel_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwVelToSerlCom_Val(float32 data)
{
  return Rte_Write_HwVelToSerlCom_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionAg_Val(float32 data)
{
  return Rte_Write_PinionAg_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionAgConf_Val(float32 data)
{
  return Rte_Write_PinionAgConf_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionVel_Val(float32 data)
{
  return Rte_Write_PinionVel_Val(data);
}

Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionVelConf_Val(float32 data)
{
  return Rte_Write_PinionVelConf_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgSlewRate_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgSlewRate_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnSlewRateTmr_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnSlewRateTmr_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_SysGlbPrmSysKineRat_Val(void)
{
  return (float32 ) Rte_Prm_SysGlbPrmSysKineRat_Val();
}
float32  TSC_HwAgSysArbn_Rte_Prm_SysGlbPrmTorsBarStfn_Val(void)
{
  return (float32 ) Rte_Prm_SysGlbPrmTorsBarStfn_Val();
}
uint32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val(void)
{
  return (uint32 ) Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val();
}
uint16  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val();
}
uint16  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val();
}


     /* HwAgSysArbn */
      /* HwAgSysArbn */

/** Per Instance Memories */
float32 *TSC_HwAgSysArbn_Rte_Pim_HwAgPrev(void)
{
  return Rte_Pim_HwAgPrev();
}
float32 *TSC_HwAgSysArbn_Rte_Pim_PrevHwAgNotCorrd(void)
{
  return Rte_Pim_PrevHwAgNotCorrd();
}
float32 *TSC_HwAgSysArbn_Rte_Pim_PrevPinionAgConf(void)
{
  return Rte_Pim_PrevPinionAgConf();
}
float32 *TSC_HwAgSysArbn_Rte_Pim_PrevSeldHwAg(void)
{
  return Rte_Pim_PrevSeldHwAg();
}
float32 *TSC_HwAgSysArbn_Rte_Pim_SeldHwAgConf(void)
{
  return Rte_Pim_SeldHwAgConf();
}
float32 *TSC_HwAgSysArbn_Rte_Pim_TqSnsrAgPrev(void)
{
  return Rte_Pim_TqSnsrAgPrev();
}
uint32 *TSC_HwAgSysArbn_Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr(void)
{
  return Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr();
}
uint32 *TSC_HwAgSysArbn_Rte_Pim_SlewElpdRefTmr(void)
{
  return Rte_Pim_SlewElpdRefTmr();
}
sint8 *TSC_HwAgSysArbn_Rte_Pim_PrevSrcSeln(void)
{
  return Rte_Pim_PrevSrcSeln();
}
boolean *TSC_HwAgSysArbn_Rte_Pim_HwAgCorrdLtch(void)
{
  return Rte_Pim_HwAgCorrdLtch();
}
boolean *TSC_HwAgSysArbn_Rte_Pim_HwAgKineFlt(void)
{
  return Rte_Pim_HwAgKineFlt();
}
boolean *TSC_HwAgSysArbn_Rte_Pim_HwAgToMotAgCorrln(void)
{
  return Rte_Pim_HwAgToMotAgCorrln();
}
boolean *TSC_HwAgSysArbn_Rte_Pim_SlewSts(void)
{
  return Rte_Pim_SlewSts();
}
FilLpRec1 *TSC_HwAgSysArbn_Rte_Pim_TqSnsrVelFil(void)
{
  return Rte_Pim_TqSnsrVelFil();
}


