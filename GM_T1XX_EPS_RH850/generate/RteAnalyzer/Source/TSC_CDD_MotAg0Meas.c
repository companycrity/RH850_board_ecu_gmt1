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
 *          File:  TSC_CDD_MotAg0Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_MotAg0Meas.h"
#include "TSC_CDD_MotAg0Meas.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_MotAg0CoeffTbl_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_MotAg0CoeffTbl_GetErrorStatus(ErrorStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_MotAg0CoeffTbl_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_MotAg0CoeffTbl_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Read_MotAg0ErrReg_Val(uint32 *data)
{
  return Rte_Read_MotAg0ErrReg_Val(data);
}

Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Read_MotAg0ParFltCnt_Val(uint16 *data)
{
  return Rte_Read_MotAg0ParFltCnt_Val(data);
}

Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Read_MotAg0VltgFltCnt_Val(uint16 *data)
{
  return Rte_Read_MotAg0VltgFltCnt_Val(data);
}




Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Write_MotAg0MeclQlfr_Val(SigQlfr1 data)
{
  return Rte_Write_MotAg0MeclQlfr_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr, NtcQlfr);
}
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Ary1D_f32_26 * TSC_CDD_MotAg0Meas_Rte_CData_MotAg0CoeffTblDft(void)
{
  return (Ary1D_f32_26 *) Rte_CData_MotAg0CoeffTblDft();
}

     /* CDD_MotAg0Meas */
      /* CDD_MotAg0Meas */

/** Per Instance Memories */
uint32 *TSC_CDD_MotAg0Meas_Rte_Pim_dMotAg0MeasMotAg0RawAgReg(void)
{
  return Rte_Pim_dMotAg0MeasMotAg0RawAgReg();
}
uint32 *TSC_CDD_MotAg0Meas_Rte_Pim_dMotAg0MeasMotAg0RawErrReg(void)
{
  return Rte_Pim_dMotAg0MeasMotAg0RawErrReg();
}
uint32 *TSC_CDD_MotAg0Meas_Rte_Pim_dMotAg0MeasMotAg0RawTurnCntrReg(void)
{
  return Rte_Pim_dMotAg0MeasMotAg0RawTurnCntrReg();
}
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ErrParFltCntPrev(void)
{
  return Rte_Pim_MotAg0ErrParFltCntPrev();
}
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ErrParFltNtcStInfoCntPrev(void)
{
  return Rte_Pim_MotAg0ErrParFltNtcStInfoCntPrev();
}
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ParFltCntPrev(void)
{
  return Rte_Pim_MotAg0ParFltCntPrev();
}
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ParFltNtcStInfoCntPrev(void)
{
  return Rte_Pim_MotAg0ParFltNtcStInfoCntPrev();
}
u0p16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0RawMeclPrev(void)
{
  return Rte_Pim_MotAg0RawMeclPrev();
}
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0VltgFltCntPrev(void)
{
  return Rte_Pim_MotAg0VltgFltCntPrev();
}
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0VltgFltNtcStInfoCntPrev(void)
{
  return Rte_Pim_MotAg0VltgFltNtcStInfoCntPrev();
}
uint8 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ErrPrev(void)
{
  return Rte_Pim_MotAg0ErrPrev();
}
uint8 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0MeclRollgCntrPrev(void)
{
  return Rte_Pim_MotAg0MeclRollgCntrPrev();
}
float32 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0CoeffTbl(void)
{
  return Rte_Pim_MotAg0CoeffTbl();
}
sm5p12 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0CorrnTbl(void)
{
  return Rte_Pim_MotAg0CorrnTbl();
}


