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
 *          File:  TSC_HwAgCorrln.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAgCorrln.h"
#include "TSC_HwAgCorrln.h"








Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgA_Val(float32 *data)
{
  return Rte_Read_HwAgA_Val(data);
}

Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwAgAQlfr_Val(data);
}

Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgARollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwAgARollgCntr_Val(data);
}

Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgB_Val(float32 *data)
{
  return Rte_Read_HwAgB_Val(data);
}

Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgBARollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwAgBARollgCntr_Val(data);
}

Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgBQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwAgBQlfr_Val(data);
}




Std_ReturnType TSC_HwAgCorrln_Rte_Write_HwAgCorrlnSt_Val(uint8 data)
{
  return Rte_Write_HwAgCorrlnSt_Val(data);
}

Std_ReturnType TSC_HwAgCorrln_Rte_Write_HwAgIdptSig_Val(uint8 data)
{
  return Rte_Write_HwAgIdptSig_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HwAgCorrln_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_HwAgCorrln_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_u08_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_HwAgCorrln_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_HwAgCorrln_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnHwAgAbsltDif_Val(void)
{
  return (float32 ) Rte_Prm_HwAgCorrlnHwAgAbsltDif_Val();
}
uint16  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnNtc0x092FailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAgCorrlnNtc0x092FailStep_Val();
}
uint16  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnNtc0x092PassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAgCorrlnNtc0x092PassStep_Val();
}
uint8  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnHwAgMaxStall_Val(void)
{
  return (uint8 ) Rte_Prm_HwAgCorrlnHwAgMaxStall_Val();
}


     /* HwAgCorrln */
      /* HwAgCorrln */

/** Per Instance Memories */
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgARollgCntPrev(void)
{
  return Rte_Pim_HwAgARollgCntPrev();
}
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgAStallCntPrev(void)
{
  return Rte_Pim_HwAgAStallCntPrev();
}
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgBRollgCntPrev(void)
{
  return Rte_Pim_HwAgBRollgCntPrev();
}
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgBStallCntPrev(void)
{
  return Rte_Pim_HwAgBStallCntPrev();
}
boolean *TSC_HwAgCorrln_Rte_Pim_dHwAgCorrlnAgAAvl(void)
{
  return Rte_Pim_dHwAgCorrlnAgAAvl();
}
boolean *TSC_HwAgCorrln_Rte_Pim_dHwAgCorrlnAgBAvl(void)
{
  return Rte_Pim_dHwAgCorrlnAgBAvl();
}


