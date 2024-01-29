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
 *          File:  TSC_CDD_HwTq0Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_HwTq0Meas.h"
#include "TSC_CDD_HwTq0Meas.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_HwTq0Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_HwTq0Offs_SetRamBlockStatus(RamBlockStatus_Arg);
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
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr1MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_IoHwAb_SetFctPrphlHwTq0_Oper(void)
{
  return Rte_Call_IoHwAb_SetFctPrphlHwTq0_Oper();
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Read_HwTq0Polarity_Val(sint8 *data)
{
  return Rte_Read_HwTq0Polarity_Val(data);
}




Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_HwTq0_Val(float32 data)
{
  return Rte_Write_HwTq0_Val(data);
}

Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_HwTq0Qlfr_Val(SigQlfr1 data)
{
  return Rte_Write_HwTq0Qlfr_Val(data);
}

Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_HwTq0RollgCntr_Val(uint8 data)
{
  return Rte_Write_HwTq0RollgCntr_Val(data);
}

Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_RackLimrCcwEotSig0_Val(float32 data)
{
  return Rte_Write_RackLimrCcwEotSig0_Val(data);
}

Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_RackLimrCwEotSig0_Val(float32 data)
{
  return Rte_Write_RackLimrCwEotSig0_Val(data);
}

Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Write_RackLimrEotSig0Avl_Logl(boolean data)
{
  return Rte_Write_RackLimrEotSig0Avl_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_u08_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_CDD_HwTq0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
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





uint16  TSC_CDD_HwTq0Meas_Rte_Prm_HwTq0MeasHwTq0PrtclFltFailStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwTq0MeasHwTq0PrtclFltFailStep_Val();
}
uint16  TSC_CDD_HwTq0Meas_Rte_Prm_HwTq0MeasHwTq0PrtclFltPassStep_Val(void)
{
  return (uint16 ) Rte_Prm_HwTq0MeasHwTq0PrtclFltPassStep_Val();
}

HwTqOffsRec1 * TSC_CDD_HwTq0Meas_Rte_CData_HwTq0OffsDft(void)
{
  return (HwTqOffsRec1 *) Rte_CData_HwTq0OffsDft();
}

     /* CDD_HwTq0Meas */
      /* CDD_HwTq0Meas */

/** Per Instance Memories */
float32 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0MeasPrevHwTq0(void)
{
  return Rte_Pim_HwTq0MeasPrevHwTq0();
}
float32 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrCcwEot0(void)
{
  return Rte_Pim_RackLimrCcwEot0();
}
float32 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrCwEot0(void)
{
  return Rte_Pim_RackLimrCwEot0();
}
uint32 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0MsgMissRxCnt(void)
{
  return Rte_Pim_HwTq0MsgMissRxCnt();
}
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0ComStsErrCntr(void)
{
  return Rte_Pim_HwTq0ComStsErrCntr();
}
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0IntSnsrErrCntr(void)
{
  return Rte_Pim_HwTq0IntSnsrErrCntr();
}
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0MeasPrevRollgCntr(void)
{
  return Rte_Pim_HwTq0MeasPrevRollgCntr();
}
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Data0(void)
{
  return Rte_Pim_RackLimrEot0Data0();
}
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Data1(void)
{
  return Rte_Pim_RackLimrEot0Data1();
}
uint8 *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Data2(void)
{
  return Rte_Pim_RackLimrEot0Data2();
}
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Avl(void)
{
  return Rte_Pim_RackLimrEot0Avl();
}
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Id2DataReadCmpl(void)
{
  return Rte_Pim_RackLimrEot0Id2DataReadCmpl();
}
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Id3DataReadCmpl(void)
{
  return Rte_Pim_RackLimrEot0Id3DataReadCmpl();
}
boolean *TSC_CDD_HwTq0Meas_Rte_Pim_RackLimrEot0Id4DataReadCmpl(void)
{
  return Rte_Pim_RackLimrEot0Id4DataReadCmpl();
}
HwTqOffsRec1 *TSC_CDD_HwTq0Meas_Rte_Pim_HwTq0Offs(void)
{
  return Rte_Pim_HwTq0Offs();
}


