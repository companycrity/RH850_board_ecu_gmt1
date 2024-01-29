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
 *          File:  TSC_HwAg1Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAg1Meas.h"
#include "TSC_HwAg1Meas.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_HwAg1Meas_Rte_Call_HwAg1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwAg1Offs_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr1MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_HwAg1Meas_Rte_Call_IoHwAb_SetFctPrphlHwAg1_Oper(void)
{
  return Rte_Call_IoHwAb_SetFctPrphlHwAg1_Oper();
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_HwAg1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(uint16 data)
{
  Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw( data);
}
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk( data);
}












     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr0Raw(uint16 data)
{
  Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr0Raw( data);
}
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr0TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr0TestOk( data);
}
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(uint16 data)
{
  Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw( data);
}
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk( data);
}





Std_ReturnType TSC_HwAg1Meas_Rte_Read_HwAg1Polarity_Val(sint8 *data)
{
  return Rte_Read_HwAg1Polarity_Val(data);
}




Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1_Val(float32 data)
{
  return Rte_Write_HwAg1_Val(data);
}

Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1Qlfr_Val(SigQlfr1 data)
{
  return Rte_Write_HwAg1Qlfr_Val(data);
}

Std_ReturnType TSC_HwAg1Meas_Rte_Write_HwAg1RollgCntr_Val(uint8 data)
{
  return Rte_Write_HwAg1RollgCntr_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HwAg1Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr, NtcQlfr);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw(void)
{
return Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw();
}
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk(void)
{
return Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk();
}
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw(void)
{
return Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw();
}
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk(void)
{
return Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk();
}

void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer4_HwAg1Snsr1Raw(uint16 data)
{
  Rte_IrvWrite_HwAg1MeasPer4_HwAg1Snsr1Raw( data);
}
void TSC_HwAg1Meas_Rte_IrvWrite_HwAg1MeasPer4_HwAg1Snsr1TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg1MeasPer4_HwAg1Snsr1TestOk( data);
}












     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr0Raw(void)
{
return Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr0Raw();
}
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr0TestOk(void)
{
return Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr0TestOk();
}
uint16 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr1Raw(void)
{
return Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr1Raw();
}
uint8 TSC_HwAg1Meas_Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr1TestOk(void)
{
return Rte_IrvRead_HwAg1MeasPer5_HwAg1Snsr1TestOk();
}





uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val();
}
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val();
}
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val();
}
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val();
}
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val();
}
uint16  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val();
}
uint8  TSC_HwAg1Meas_Rte_Prm_HwAg1MeasVrnrErrThd_Val(void)
{
  return (uint8 ) Rte_Prm_HwAg1MeasVrnrErrThd_Val();
}
Ary1D_u8_22 * TSC_HwAg1Meas_Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D(void)
{
  return (Ary1D_u8_22 *) Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D();
}
Ary1D_u8_22 * TSC_HwAg1Meas_Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D(void)
{
  return (Ary1D_u8_22 *) Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D();
}
Ary1D_s16_22 * TSC_HwAg1Meas_Rte_Prm_HwAg1MeasStep_Ary1D(void)
{
  return (Ary1D_s16_22 *) Rte_Prm_HwAg1MeasStep_Ary1D();
}

HwAgOffsRec1 * TSC_HwAg1Meas_Rte_CData_HwAg1OffsDft(void)
{
  return (HwAgOffsRec1 *) Rte_CData_HwAg1OffsDft();
}

     /* HwAg1Meas */
      /* HwAg1Meas */

/** Per Instance Memories */
float32 *TSC_HwAg1Meas_Rte_Pim_HwAg1PrevHwAg1(void)
{
  return Rte_Pim_HwAg1PrevHwAg1();
}
float32 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1(void)
{
  return Rte_Pim_PrevHwAg1();
}
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0Abs(void)
{
  return Rte_Pim_dHwAg1MeasSnsr0Abs();
}
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0Rel(void)
{
  return Rte_Pim_dHwAg1MeasSnsr0Rel();
}
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1Abs(void)
{
  return Rte_Pim_dHwAg1MeasSnsr1Abs();
}
float32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1Rel(void)
{
  return Rte_Pim_dHwAg1MeasSnsr1Rel();
}
uint32 *TSC_HwAg1Meas_Rte_Pim_HwAg1RawDataAvlStrtTi(void)
{
  return Rte_Pim_HwAg1RawDataAvlStrtTi();
}
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0CS(void)
{
  return Rte_Pim_dHwAg1MeasSnsr0CS();
}
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr0FRXD(void)
{
  return Rte_Pim_dHwAg1MeasSnsr0FRXD();
}
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1CS(void)
{
  return Rte_Pim_dHwAg1MeasSnsr1CS();
}
uint32 *TSC_HwAg1Meas_Rte_Pim_dHwAg1MeasSnsr1FRXD(void)
{
  return Rte_Pim_dHwAg1MeasSnsr1FRXD();
}
uint16 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr0Raw(void)
{
  return Rte_Pim_PrevHwAg1Snsr0Raw();
}
uint16 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr1Raw(void)
{
  return Rte_Pim_PrevHwAg1Snsr1Raw();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1PrevRollCnt(void)
{
  return Rte_Pim_HwAg1PrevRollCnt();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1PrevStepSeqNr(void)
{
  return Rte_Pim_HwAg1PrevStepSeqNr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0ComStsErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr0ComStsErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0IdErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr0IdErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0IntSnsrErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr0IntSnsrErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr0NoMsgErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr0NoMsgErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1ComStsErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr1ComStsErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1IdErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr1IdErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1IntSnsrErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr1IntSnsrErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1Snsr1NoMsgErrCntr(void)
{
  return Rte_Pim_HwAg1Snsr1NoMsgErrCntr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_HwAg1SnsrTrigNr(void)
{
  return Rte_Pim_HwAg1SnsrTrigNr();
}
SigQlfr1 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Qlfr(void)
{
  return Rte_Pim_PrevHwAg1Qlfr();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr0TestOk(void)
{
  return Rte_Pim_PrevHwAg1Snsr0TestOk();
}
uint8 *TSC_HwAg1Meas_Rte_Pim_PrevHwAg1Snsr1TestOk(void)
{
  return Rte_Pim_PrevHwAg1Snsr1TestOk();
}
boolean *TSC_HwAg1Meas_Rte_Pim_HwAg1InitStepSeqNrCmpl(void)
{
  return Rte_Pim_HwAg1InitStepSeqNrCmpl();
}
HwAgOffsRec1 *TSC_HwAg1Meas_Rte_Pim_HwAg1Offs(void)
{
  return Rte_Pim_HwAg1Offs();
}


