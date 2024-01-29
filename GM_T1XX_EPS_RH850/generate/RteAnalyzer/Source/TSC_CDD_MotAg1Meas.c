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
 *          File:  TSC_CDD_MotAg1Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_MotAg1Meas.h"
#include "TSC_CDD_MotAg1Meas.h"















     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Call_MotAg1CoeffTbl_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_MotAg1CoeffTbl_GetErrorStatus(ErrorStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Call_MotAg1CoeffTbl_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_MotAg1CoeffTbl_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Read_MotAg1ErrReg_Val(uint32 *data)
{
  return Rte_Read_MotAg1ErrReg_Val(data);
}

Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Read_MotAg1ParFltCnt_Val(uint16 *data)
{
  return Rte_Read_MotAg1ParFltCnt_Val(data);
}

Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Read_MotAg1VltgFltCnt_Val(uint16 *data)
{
  return Rte_Read_MotAg1VltgFltCnt_Val(data);
}




Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Write_MotAg1MeclQlfr_Val(SigQlfr1 data)
{
  return Rte_Write_MotAg1MeclQlfr_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr, NtcQlfr);
}
Std_ReturnType TSC_CDD_MotAg1Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Ary1D_f32_26 * TSC_CDD_MotAg1Meas_Rte_CData_MotAg1CoeffTblDft(void)
{
  return (Ary1D_f32_26 *) Rte_CData_MotAg1CoeffTblDft();
}

     /* CDD_MotAg1Meas */
      /* CDD_MotAg1Meas */

/** Per Instance Memories */
uint32 *TSC_CDD_MotAg1Meas_Rte_Pim_dMotAg1MeasMotAg1RawAgReg(void)
{
  return Rte_Pim_dMotAg1MeasMotAg1RawAgReg();
}
uint32 *TSC_CDD_MotAg1Meas_Rte_Pim_dMotAg1MeasMotAg1RawErrReg(void)
{
  return Rte_Pim_dMotAg1MeasMotAg1RawErrReg();
}
uint32 *TSC_CDD_MotAg1Meas_Rte_Pim_dMotAg1MeasMotAg1RawTurnCntrReg(void)
{
  return Rte_Pim_dMotAg1MeasMotAg1RawTurnCntrReg();
}
uint16 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1ErrParFltCntPrev(void)
{
  return Rte_Pim_MotAg1ErrParFltCntPrev();
}
uint16 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1ErrParFltNtcStInfoCntPrev(void)
{
  return Rte_Pim_MotAg1ErrParFltNtcStInfoCntPrev();
}
uint16 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1ParFltCntPrev(void)
{
  return Rte_Pim_MotAg1ParFltCntPrev();
}
uint16 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1ParFltNtcStInfoCntPrev(void)
{
  return Rte_Pim_MotAg1ParFltNtcStInfoCntPrev();
}
u0p16 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1RawMeclPrev(void)
{
  return Rte_Pim_MotAg1RawMeclPrev();
}
uint16 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1VltgFltCntPrev(void)
{
  return Rte_Pim_MotAg1VltgFltCntPrev();
}
uint16 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1VltgFltNtcStInfoCntPrev(void)
{
  return Rte_Pim_MotAg1VltgFltNtcStInfoCntPrev();
}
uint8 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1ErrPrev(void)
{
  return Rte_Pim_MotAg1ErrPrev();
}
uint8 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1MeclRollgCntrPrev(void)
{
  return Rte_Pim_MotAg1MeclRollgCntrPrev();
}
float32 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1CoeffTbl(void)
{
  return Rte_Pim_MotAg1CoeffTbl();
}
sm5p12 *TSC_CDD_MotAg1Meas_Rte_Pim_MotAg1CorrnTbl(void)
{
  return Rte_Pim_MotAg1CorrnTbl();
}


