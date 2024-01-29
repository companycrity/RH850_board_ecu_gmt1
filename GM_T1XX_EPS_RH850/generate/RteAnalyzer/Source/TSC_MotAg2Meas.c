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
 *          File:  TSC_MotAg2Meas.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_MotAg2Meas.h"
#include "TSC_MotAg2Meas.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_MotAg2Meas_Rte_Call_MotAg2EolPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_MotAg2EolPrm_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_MotAg2Meas_Rte_Call_MotAg2EolPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_MotAg2EolPrm_GetErrorStatus(ErrorStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2Cos_Val(float32 *data)
{
  return Rte_Read_MotAg2Cos_Val(data);
}

Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2CosAdcFaild_Logl(boolean *data)
{
  return Rte_Read_MotAg2CosAdcFaild_Logl(data);
}

Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2Sin_Val(float32 *data)
{
  return Rte_Read_MotAg2Sin_Val(data);
}

Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAg2SinAdcFaild_Logl(boolean *data)
{
  return Rte_Read_MotAg2SinAdcFaild_Logl(data);
}

Std_ReturnType TSC_MotAg2Meas_Rte_Read_MotAgMecl2Polarity_Val(sint8 *data)
{
  return Rte_Read_MotAgMecl2Polarity_Val(data);
}




Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2Mecl_Val(u0p16 data)
{
  return Rte_Write_MotAg2Mecl_Val(data);
}

Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2MeclQlfr_Val(SigQlfr1 data)
{
  return Rte_Write_MotAg2MeclQlfr_Val(data);
}

Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2MeclRollgCntr_Val(uint8 data)
{
  return Rte_Write_MotAg2MeclRollgCntr_Val(data);
}

Std_ReturnType TSC_MotAg2Meas_Rte_Write_MotAg2VltgSqd_Val(float32 data)
{
  return Rte_Write_MotAg2VltgSqd_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_MotAg2Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}
Std_ReturnType TSC_MotAg2Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_MotAg2Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_MotAg2Meas_Rte_Prm_MotAg2MeasOffs_Val(void)
{
  return (float32 ) Rte_Prm_MotAg2MeasOffs_Val();
}

MotAgMeasEolPrmRec1 * TSC_MotAg2Meas_Rte_CData_MotAg2EolPrmDft(void)
{
  return (MotAgMeasEolPrmRec1 *) Rte_CData_MotAg2EolPrmDft();
}

     /* MotAg2Meas */
      /* MotAg2Meas */

/** Per Instance Memories */
float32 *TSC_MotAg2Meas_Rte_Pim_MotAg2MeclPrev(void)
{
  return Rte_Pim_MotAg2MeclPrev();
}
uint8 *TSC_MotAg2Meas_Rte_Pim_MotAg2MeclRollgCntrPrev(void)
{
  return Rte_Pim_MotAg2MeclRollgCntrPrev();
}
MotAgMeasEolPrmRec1 *TSC_MotAg2Meas_Rte_Pim_MotAg2EolPrm(void)
{
  return Rte_Pim_MotAg2EolPrm();
}


