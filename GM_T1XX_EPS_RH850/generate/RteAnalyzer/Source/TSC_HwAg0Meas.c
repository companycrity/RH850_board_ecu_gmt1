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
 *          File:  TSC_HwAg0Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HwAg0Meas.h"
#include "TSC_HwAg0Meas.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_HwAg0Meas_Rte_Call_HwAg0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwAg0Offs_SetRamBlockStatus(RamBlockStatus_Arg);
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
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr1MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_HwAg0Meas_Rte_Call_IoHwAb_SetFctPrphlHwAg0_Oper(void)
{
  return Rte_Call_IoHwAb_SetFctPrphlHwAg0_Oper();
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_HwAg0Meas_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_u08_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_HwAg0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0Raw(uint16 data)
{
  Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0Raw( data);
}
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0TestOk( data);
}












     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0Raw(uint16 data)
{
  Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0Raw( data);
}
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0TestOk( data);
}
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1Raw(uint16 data)
{
  Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1Raw( data);
}
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1TestOk( data);
}





Std_ReturnType TSC_HwAg0Meas_Rte_Read_HwAg0Polarity_Val(sint8 *data)
{
  return Rte_Read_HwAg0Polarity_Val(data);
}




Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0_Val(float32 data)
{
  return Rte_Write_HwAg0_Val(data);
}

Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0Qlfr_Val(SigQlfr1 data)
{
  return Rte_Write_HwAg0Qlfr_Val(data);
}

Std_ReturnType TSC_HwAg0Meas_Rte_Write_HwAg0RollgCntr_Val(uint8 data)
{
  return Rte_Write_HwAg0RollgCntr_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_HwAg0Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_HwAg0Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr, NtcQlfr);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0Raw(void)
{
return Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0Raw();
}
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0TestOk(void)
{
return Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0TestOk();
}
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1Raw(void)
{
return Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1Raw();
}
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1TestOk(void)
{
return Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1TestOk();
}

void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1Raw(uint16 data)
{
  Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1Raw( data);
}
void TSC_HwAg0Meas_Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1TestOk(uint8 data)
{
  Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1TestOk( data);
}












     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0Raw(void)
{
return Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0Raw();
}
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0TestOk(void)
{
return Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0TestOk();
}
uint16 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1Raw(void)
{
return Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1Raw();
}
uint8 TSC_HwAg0Meas_Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1TestOk(void)
{
return Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1TestOk();
}





uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0IfFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg0MeasHwAg0IfFltFailStep_Val();
}
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0IfFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg0MeasHwAg0IfFltPassStep_Val();
}
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val();
}
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val();
}
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val();
}
uint16  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val();
}
uint8  TSC_HwAg0Meas_Rte_Prm_HwAg0MeasVrnrErrThd_Val(void)
{
  return (uint8 ) Rte_Prm_HwAg0MeasVrnrErrThd_Val();
}
Ary1D_u8_22 * TSC_HwAg0Meas_Rte_Prm_HwAg0MeasSnsr0Rev_Ary1D(void)
{
  return (Ary1D_u8_22 *) Rte_Prm_HwAg0MeasSnsr0Rev_Ary1D();
}
Ary1D_u8_22 * TSC_HwAg0Meas_Rte_Prm_HwAg0MeasSnsr1Rev_Ary1D(void)
{
  return (Ary1D_u8_22 *) Rte_Prm_HwAg0MeasSnsr1Rev_Ary1D();
}
Ary1D_s16_22 * TSC_HwAg0Meas_Rte_Prm_HwAg0MeasStep_Ary1D(void)
{
  return (Ary1D_s16_22 *) Rte_Prm_HwAg0MeasStep_Ary1D();
}

HwAgOffsRec1 * TSC_HwAg0Meas_Rte_CData_HwAg0OffsDft(void)
{
  return (HwAgOffsRec1 *) Rte_CData_HwAg0OffsDft();
}

     /* HwAg0Meas */
      /* HwAg0Meas */

/** Per Instance Memories */
float32 *TSC_HwAg0Meas_Rte_Pim_HwAg0PrevHwAg0(void)
{
  return Rte_Pim_HwAg0PrevHwAg0();
}
float32 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0(void)
{
  return Rte_Pim_PrevHwAg0();
}
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0Abs(void)
{
  return Rte_Pim_dHwAg0MeasSnsr0Abs();
}
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0Rel(void)
{
  return Rte_Pim_dHwAg0MeasSnsr0Rel();
}
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1Abs(void)
{
  return Rte_Pim_dHwAg0MeasSnsr1Abs();
}
float32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1Rel(void)
{
  return Rte_Pim_dHwAg0MeasSnsr1Rel();
}
uint32 *TSC_HwAg0Meas_Rte_Pim_HwAg0RawDataAvlStrtTi(void)
{
  return Rte_Pim_HwAg0RawDataAvlStrtTi();
}
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0CS(void)
{
  return Rte_Pim_dHwAg0MeasSnsr0CS();
}
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr0FRXD(void)
{
  return Rte_Pim_dHwAg0MeasSnsr0FRXD();
}
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1CS(void)
{
  return Rte_Pim_dHwAg0MeasSnsr1CS();
}
uint32 *TSC_HwAg0Meas_Rte_Pim_dHwAg0MeasSnsr1FRXD(void)
{
  return Rte_Pim_dHwAg0MeasSnsr1FRXD();
}
uint16 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr0Raw(void)
{
  return Rte_Pim_PrevHwAg0Snsr0Raw();
}
uint16 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr1Raw(void)
{
  return Rte_Pim_PrevHwAg0Snsr1Raw();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0PrevRollCnt(void)
{
  return Rte_Pim_HwAg0PrevRollCnt();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0PrevStepSeqNr(void)
{
  return Rte_Pim_HwAg0PrevStepSeqNr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0ComStsErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr0ComStsErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0IdErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr0IdErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0IntSnsrErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr0IntSnsrErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr0NoMsgErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr0NoMsgErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1ComStsErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr1ComStsErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1IdErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr1IdErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1IntSnsrErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr1IntSnsrErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0Snsr1NoMsgErrCntr(void)
{
  return Rte_Pim_HwAg0Snsr1NoMsgErrCntr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_HwAg0SnsrTrigNr(void)
{
  return Rte_Pim_HwAg0SnsrTrigNr();
}
SigQlfr1 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Qlfr(void)
{
  return Rte_Pim_PrevHwAg0Qlfr();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr0TestOk(void)
{
  return Rte_Pim_PrevHwAg0Snsr0TestOk();
}
uint8 *TSC_HwAg0Meas_Rte_Pim_PrevHwAg0Snsr1TestOk(void)
{
  return Rte_Pim_PrevHwAg0Snsr1TestOk();
}
boolean *TSC_HwAg0Meas_Rte_Pim_HwAg0InitStepSeqNrCmpl(void)
{
  return Rte_Pim_HwAg0InitStepSeqNrCmpl();
}
HwAgOffsRec1 *TSC_HwAg0Meas_Rte_Pim_HwAg0Offs(void)
{
  return Rte_Pim_HwAg0Offs();
}


