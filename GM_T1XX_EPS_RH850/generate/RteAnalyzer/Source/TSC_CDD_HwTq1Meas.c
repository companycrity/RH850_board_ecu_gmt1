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
 *          File:  TSC_CDD_HwTq1Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_HwTq1Meas.h"
#include "TSC_CDD_HwTq1Meas.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_HwTq1Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwTq1Offs_SetRamBlockStatus(RamBlockStatus_Arg);
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
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr1MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper(void)
{
  return Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper();
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Read_HwTq1Polarity_Val(sint8 *data)
{
  return Rte_Read_HwTq1Polarity_Val(data);
}




Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_HwTq1_Val(float32 data)
{
  return Rte_Write_HwTq1_Val(data);
}

Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_HwTq1Qlfr_Val(SigQlfr1 data)
{
  return Rte_Write_HwTq1Qlfr_Val(data);
}

Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_HwTq1RollgCntr_Val(uint8 data)
{
  return Rte_Write_HwTq1RollgCntr_Val(data);
}

Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_RackLimrCcwEotSig1_Val(float32 data)
{
  return Rte_Write_RackLimrCcwEotSig1_Val(data);
}

Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_RackLimrCwEotSig1_Val(float32 data)
{
  return Rte_Write_RackLimrCwEotSig1_Val(data);
}

Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Write_RackLimrEotSig1Avl_Logl(boolean data)
{
  return Rte_Write_RackLimrEotSig1Avl_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_CDD_HwTq1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


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





uint16  TSC_CDD_HwTq1Meas_Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val();
}
uint16  TSC_CDD_HwTq1Meas_Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val();
}

HwTqOffsRec1 * TSC_CDD_HwTq1Meas_Rte_CData_HwTq1OffsDft(void)
{
  return (HwTqOffsRec1 *) Rte_CData_HwTq1OffsDft();
}

     /* CDD_HwTq1Meas */
      /* CDD_HwTq1Meas */

/** Per Instance Memories */
float32 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1MeasPrevHwTq1(void)
{
  return Rte_Pim_HwTq1MeasPrevHwTq1();
}
float32 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrCcwEot1(void)
{
  return Rte_Pim_RackLimrCcwEot1();
}
float32 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrCwEot1(void)
{
  return Rte_Pim_RackLimrCwEot1();
}
uint32 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1MsgMissRxCnt(void)
{
  return Rte_Pim_HwTq1MsgMissRxCnt();
}
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1ComStsErrCntr(void)
{
  return Rte_Pim_HwTq1ComStsErrCntr();
}
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1IntSnsrErrCntr(void)
{
  return Rte_Pim_HwTq1IntSnsrErrCntr();
}
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1MeasPrevRollgCntr(void)
{
  return Rte_Pim_HwTq1MeasPrevRollgCntr();
}
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Data0(void)
{
  return Rte_Pim_RackLimrEot1Data0();
}
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Data1(void)
{
  return Rte_Pim_RackLimrEot1Data1();
}
uint8 *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Data2(void)
{
  return Rte_Pim_RackLimrEot1Data2();
}
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Avl(void)
{
  return Rte_Pim_RackLimrEot1Avl();
}
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Id2DataReadCmpl(void)
{
  return Rte_Pim_RackLimrEot1Id2DataReadCmpl();
}
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Id3DataReadCmpl(void)
{
  return Rte_Pim_RackLimrEot1Id3DataReadCmpl();
}
boolean *TSC_CDD_HwTq1Meas_Rte_Pim_RackLimrEot1Id4DataReadCmpl(void)
{
  return Rte_Pim_RackLimrEot1Id4DataReadCmpl();
}
HwTqOffsRec1 *TSC_CDD_HwTq1Meas_Rte_Pim_HwTq1Offs(void)
{
  return Rte_Pim_HwTq1Offs();
}


