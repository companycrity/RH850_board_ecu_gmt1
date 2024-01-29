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
 *          File:  TSC_HwTqCorrln.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwTqCorrln.h"
#include "TSC_HwTqCorrln.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqA_Val(float32 *data)
{
  return Rte_Read_HwTqA_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqAQlfr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqARollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqARollgCntr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqB_Val(float32 *data)
{
  return Rte_Read_HwTqB_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqBQlfr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqBRollgCntr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqC_Val(float32 *data)
{
  return Rte_Read_HwTqC_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqCQlfr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqCRollgCntr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqD_Val(float32 *data)
{
  return Rte_Read_HwTqD_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
{
  return Rte_Read_HwTqDQlfr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
{
  return Rte_Read_HwTqDRollgCntr_Val(data);
}




Std_ReturnType TSC_HwTqCorrln_Rte_Write_HwTqCorrlnSts_Val(uint8 data)
{
  return Rte_Write_HwTqCorrlnSts_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HwTqCorrln_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_HwTqCorrln_Rte_IrvWrite_HwTqCorrlnPer1_HwTqChAAvl(boolean data)
{
  Rte_IrvWrite_HwTqCorrlnPer1_HwTqChAAvl( data);
}
void TSC_HwTqCorrln_Rte_IrvWrite_HwTqCorrlnPer1_HwTqChBAvl(boolean data)
{
  Rte_IrvWrite_HwTqCorrlnPer1_HwTqChBAvl( data);
}








Std_ReturnType TSC_HwTqCorrln_Rte_Write_HwTqChACorrlnTraErr_Val(float32 data)
{
  return Rte_Write_HwTqChACorrlnTraErr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Write_HwTqChBCorrlnTraErr_Val(float32 data)
{
  return Rte_Write_HwTqChBCorrlnTraErr_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Write_HwTqIdptSig_Val(uint8 data)
{
  return Rte_Write_HwTqIdptSig_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HwTqCorrln_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_u08_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_HwTqCorrln_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
boolean TSC_HwTqCorrln_Rte_IrvRead_HwTqCorrlnPer2_HwTqChAAvl(void)
{
return Rte_IrvRead_HwTqCorrlnPer2_HwTqChAAvl();
}
boolean TSC_HwTqCorrln_Rte_IrvRead_HwTqCorrlnPer2_HwTqChBAvl(void)
{
return Rte_IrvRead_HwTqCorrlnPer2_HwTqChBAvl();
}

void TSC_HwTqCorrln_Rte_IrvWrite_HwTqCorrlnPer2_HwTqChATqSumLim(float32 data)
{
  Rte_IrvWrite_HwTqCorrlnPer2_HwTqChATqSumLim( data);
}
void TSC_HwTqCorrln_Rte_IrvWrite_HwTqCorrlnPer2_HwTqChBTqSumLim(float32 data)
{
  Rte_IrvWrite_HwTqCorrlnPer2_HwTqChBTqSumLim( data);
}





Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqChA_Val(float32 *data)
{
  return Rte_Read_HwTqChA_Val(data);
}

Std_ReturnType TSC_HwTqCorrln_Rte_Read_HwTqChB_Val(float32 *data)
{
  return Rte_Read_HwTqChB_Val(data);
}








     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_HwTqCorrln_Rte_Call_HwTqChACmnModCmpLpFilSt_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwTqChACmnModCmpLpFilSt_SetRamBlockStatus(RamBlockStatus_Arg);
}
Std_ReturnType TSC_HwTqCorrln_Rte_Call_HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables
float32 TSC_HwTqCorrln_Rte_IrvRead_HwTqCorrlnPer3_HwTqChATqSumLim(void)
{
return Rte_IrvRead_HwTqCorrlnPer3_HwTqChATqSumLim();
}
float32 TSC_HwTqCorrln_Rte_IrvRead_HwTqCorrlnPer3_HwTqChBTqSumLim(void)
{
return Rte_IrvRead_HwTqCorrlnPer3_HwTqChBTqSumLim();
}





float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChACmnModCmpLpFilActvnThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChACmnModCmpLpFilActvnThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChACmnModCmpLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChACmnModCmpLpFilFrq_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChACmnModCmpLpFilOutpLim_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChACmnModCmpLpFilOutpLim_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChAImdtCorrlnChkFailThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChAImdtCorrlnChkFailThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChAImdtCorrlnChkPassThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChAImdtCorrlnChkPassThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChAStabStClrFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChAStabStClrFltThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChAStabStLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChAStabStLpFilFrq_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChAStabStSetFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChAStabStSetFltThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChATqSumMaxLim_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChATqSumMaxLim_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChATraSumClrFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChATraSumClrFltThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilFrq_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBImdtCorrlnChkFailThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBImdtCorrlnChkFailThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBImdtCorrlnChkPassThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBImdtCorrlnChkPassThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBStabStClrFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBStabStClrFltThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBStabStLpFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBStabStLpFilFrq_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBStabStSetFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBStabStSetFltThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBTqSumMaxLim_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBTqSumMaxLim_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBTraSumClrFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBTraSumClrFltThd_Val();
}
float32  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val(void)
{
  return (float32 ) Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val();
}
uint8  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnMaxStallTqA_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqCorrlnMaxStallTqA_Val();
}
uint8  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnMaxStallTqB_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqCorrlnMaxStallTqB_Val();
}
uint8  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnMaxStallTqC_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqCorrlnMaxStallTqC_Val();
}
uint8  TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnMaxStallTqD_Val(void)
{
  return (uint8 ) Rte_Prm_HwTqCorrlnMaxStallTqD_Val();
}
Ary1D_u5p11_17 * TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChATraLpFilX_Ary1D(void)
{
  return (Ary1D_u5p11_17 *) Rte_Prm_HwTqCorrlnChATraLpFilX_Ary1D();
}
Ary1D_u6p10_17 * TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChATraLpFilY_Ary1D(void)
{
  return (Ary1D_u6p10_17 *) Rte_Prm_HwTqCorrlnChATraLpFilY_Ary1D();
}
Ary1D_u5p11_17 * TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBTraLpFilX_Ary1D(void)
{
  return (Ary1D_u5p11_17 *) Rte_Prm_HwTqCorrlnChBTraLpFilX_Ary1D();
}
Ary1D_u6p10_17 * TSC_HwTqCorrln_Rte_Prm_HwTqCorrlnChBTraLpFilY_Ary1D(void)
{
  return (Ary1D_u6p10_17 *) Rte_Prm_HwTqCorrlnChBTraLpFilY_Ary1D();
}

float32  TSC_HwTqCorrln_Rte_CData_HwTqChACmnModCmpLpFilStDft(void)
{
  return (float32 ) Rte_CData_HwTqChACmnModCmpLpFilStDft();
}
float32  TSC_HwTqCorrln_Rte_CData_HwTqChBCmnModCmpLpFilStDft(void)
{
  return (float32 ) Rte_CData_HwTqChBCmnModCmpLpFilStDft();
}

     /* HwTqCorrln */
      /* HwTqCorrln */

/** Per Instance Memories */
float32 *TSC_HwTqCorrln_Rte_Pim_HwTqChACmnModCmpLpFilSt(void)
{
  return Rte_Pim_HwTqChACmnModCmpLpFilSt();
}
float32 *TSC_HwTqCorrln_Rte_Pim_HwTqChBCmnModCmpLpFilSt(void)
{
  return Rte_Pim_HwTqChBCmnModCmpLpFilSt();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqARollgCntrPrev(void)
{
  return Rte_Pim_HwTqARollgCntrPrev();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqAStallCntrPrev(void)
{
  return Rte_Pim_HwTqAStallCntrPrev();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqBRollgCntrPrev(void)
{
  return Rte_Pim_HwTqBRollgCntrPrev();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqBStallCntrPrev(void)
{
  return Rte_Pim_HwTqBStallCntrPrev();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqCRollgCntrPrev(void)
{
  return Rte_Pim_HwTqCRollgCntrPrev();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqCStallCntrPrev(void)
{
  return Rte_Pim_HwTqCStallCntrPrev();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqDRollgCntrPrev(void)
{
  return Rte_Pim_HwTqDRollgCntrPrev();
}
uint8 *TSC_HwTqCorrln_Rte_Pim_HwTqDStallCntrPrev(void)
{
  return Rte_Pim_HwTqDStallCntrPrev();
}
boolean *TSC_HwTqCorrln_Rte_Pim_HwTqChAImdtCorrlnChk(void)
{
  return Rte_Pim_HwTqChAImdtCorrlnChk();
}
boolean *TSC_HwTqCorrln_Rte_Pim_HwTqChBImdtCorrlnChk(void)
{
  return Rte_Pim_HwTqChBImdtCorrlnChk();
}
FilLpRec1 *TSC_HwTqCorrln_Rte_Pim_HwTqChACmnModCmpLpFil(void)
{
  return Rte_Pim_HwTqChACmnModCmpLpFil();
}
FilLpRec1 *TSC_HwTqCorrln_Rte_Pim_HwTqChAStabStLpFil(void)
{
  return Rte_Pim_HwTqChAStabStLpFil();
}
FilLpRec1 *TSC_HwTqCorrln_Rte_Pim_HwTqChATraLpFil(void)
{
  return Rte_Pim_HwTqChATraLpFil();
}
FilLpRec1 *TSC_HwTqCorrln_Rte_Pim_HwTqChBCmnModCmpLpFil(void)
{
  return Rte_Pim_HwTqChBCmnModCmpLpFil();
}
FilLpRec1 *TSC_HwTqCorrln_Rte_Pim_HwTqChBStabStLpFil(void)
{
  return Rte_Pim_HwTqChBStabStLpFil();
}
FilLpRec1 *TSC_HwTqCorrln_Rte_Pim_HwTqChBTraLpFil(void)
{
  return Rte_Pim_HwTqChBTraLpFil();
}


