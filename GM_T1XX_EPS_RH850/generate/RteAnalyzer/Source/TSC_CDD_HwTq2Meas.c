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
 *          File:  TSC_CDD_HwTq2Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_HwTq2Meas.h"
#include "TSC_CDD_HwTq2Meas.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_HwTq2Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwTq2Offs_SetRamBlockStatus(RamBlockStatus_Arg);
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
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr1MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_IoHwAb_SetFctPrphlHwTq2_Oper(void)
{
  return Rte_Call_IoHwAb_SetFctPrphlHwTq2_Oper();
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Read_HwTq2Polarity_Val(sint8 *data)
{
  return Rte_Read_HwTq2Polarity_Val(data);
}




Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_GearIdn1_Val(uint8 data)
{
  return Rte_Write_GearIdn1_Val(data);
}

Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_GearIdn1Vld_Logl(boolean data)
{
  return Rte_Write_GearIdn1Vld_Logl(data);
}

Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_HwTq2_Val(float32 data)
{
  return Rte_Write_HwTq2_Val(data);
}

Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_HwTq2Qlfr_Val(SigQlfr1 data)
{
  return Rte_Write_HwTq2Qlfr_Val(data);
}

Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_HwTq2RollgCntr_Val(uint8 data)
{
  return Rte_Write_HwTq2RollgCntr_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
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





uint16  TSC_CDD_HwTq2Meas_Rte_Prm_HwTq2MeasHwTq2PrtclFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwTq2MeasHwTq2PrtclFltFailStep_Val();
}
uint16  TSC_CDD_HwTq2Meas_Rte_Prm_HwTq2MeasHwTq2PrtclFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwTq2MeasHwTq2PrtclFltPassStep_Val();
}

HwTqOffsRec1 * TSC_CDD_HwTq2Meas_Rte_CData_HwTq2OffsDft(void)
{
  return (HwTqOffsRec1 *) Rte_CData_HwTq2OffsDft();
}

     /* CDD_HwTq2Meas */
      /* CDD_HwTq2Meas */

/** Per Instance Memories */
float32 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2MeasPrevHwTq2(void)
{
  return Rte_Pim_HwTq2MeasPrevHwTq2();
}
uint32 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2MsgMissRxCnt(void)
{
  return Rte_Pim_HwTq2MsgMissRxCnt();
}
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_GearIdn1Data(void)
{
  return Rte_Pim_GearIdn1Data();
}
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2ComStsErrCntr(void)
{
  return Rte_Pim_HwTq2ComStsErrCntr();
}
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2IntSnsrErrCntr(void)
{
  return Rte_Pim_HwTq2IntSnsrErrCntr();
}
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2MeasPrevRollgCntr(void)
{
  return Rte_Pim_HwTq2MeasPrevRollgCntr();
}
boolean *TSC_CDD_HwTq2Meas_Rte_Pim_GearIdn1Avl(void)
{
  return Rte_Pim_GearIdn1Avl();
}
HwTqOffsRec1 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2Offs(void)
{
  return Rte_Pim_HwTq2Offs();
}


