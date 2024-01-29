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
 *          File:  TSC_EotLrng.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_EotLrng.h"
#include "TSC_EotLrng.h"











Std_ReturnType TSC_EotLrng_Rte_Write_HwAgCcwDetd_Logl(boolean data)
{
  return Rte_Write_HwAgCcwDetd_Logl(data);
}

Std_ReturnType TSC_EotLrng_Rte_Write_HwAgCwDetd_Logl(boolean data)
{
  return Rte_Write_HwAgCwDetd_Logl(data);
}

Std_ReturnType TSC_EotLrng_Rte_Write_HwAgEotCcw_Val(float32 data)
{
  return Rte_Write_HwAgEotCcw_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Write_HwAgEotCw_Val(float32 data)
{
  return Rte_Write_HwAgEotCw_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_EotLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_EotLrng_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls
Std_ReturnType TSC_EotLrng_Rte_Call_EotNvmData_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_EotNvmData_GetErrorStatus(ErrorStatus_Arg);
}
Std_ReturnType TSC_EotLrng_Rte_Call_EotNvmData_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_EotNvmData_SetRamBlockStatus(RamBlockStatus_Arg);
}
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus(ErrorStatus_Arg);
}
Std_ReturnType TSC_EotLrng_Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_EotLrng_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgAuthy_Val(float32 *data)
{
  return Rte_Read_HwAgAuthy_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgDiDiagSts_Logl(boolean *data)
{
  return Rte_Read_HwAgDiDiagSts_Logl(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig0Avl_Logl(boolean *data)
{
  return Rte_Read_HwAgEotSig0Avl_Logl(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig0Ccw_Val(float32 *data)
{
  return Rte_Read_HwAgEotSig0Ccw_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig0Cw_Val(float32 *data)
{
  return Rte_Read_HwAgEotSig0Cw_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig1Avl_Logl(boolean *data)
{
  return Rte_Read_HwAgEotSig1Avl_Logl(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig1Ccw_Val(float32 *data)
{
  return Rte_Read_HwAgEotSig1Ccw_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwAgEotSig1Cw_Val(float32 *data)
{
  return Rte_Read_HwAgEotSig1Cw_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_EotLrng_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_EotLrng_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Arg, NtcQlfr_Arg);
}
Std_ReturnType TSC_EotLrng_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
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





float32  TSC_EotLrng_Rte_Prm_EotLrngAuthyStrtLrn_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngAuthyStrtLrn_Val();
}
float32  TSC_EotLrng_Rte_Prm_EotLrngHwAgOverTrvlEntr_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngHwAgOverTrvlEntr_Val();
}
float32  TSC_EotLrng_Rte_Prm_EotLrngHwAgOverTrvlExit_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngHwAgOverTrvlExit_Val();
}
float32  TSC_EotLrng_Rte_Prm_EotLrngHwTqEotLrn_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngHwTqEotLrn_Val();
}
float32  TSC_EotLrng_Rte_Prm_EotLrngMotVelEotLrn_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngMotVelEotLrn_Val();
}
float32  TSC_EotLrng_Rte_Prm_EotLrngRackTrvlMax_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngRackTrvlMax_Val();
}
float32  TSC_EotLrng_Rte_Prm_EotLrngRackTrvlMin_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngRackTrvlMin_Val();
}
float32  TSC_EotLrng_Rte_Prm_EotLrngRstAuthyMin_Val(void)
{
  return (float32 ) Rte_Prm_EotLrngRstAuthyMin_Val();
}
uint16  TSC_EotLrng_Rte_Prm_EotLrngEotLrnTmr_Val(void)
{
  return (uint16 ) Rte_Prm_EotLrngEotLrnTmr_Val();
}
uint8  TSC_EotLrng_Rte_Prm_EotLrngHwAgOverTrvlCnt_Val(void)
{
  return (uint8 ) Rte_Prm_EotLrngHwAgOverTrvlCnt_Val();
}
boolean  TSC_EotLrng_Rte_Prm_EotProtnRackTrvlLimrEna_Logl(void)
{
  return (boolean ) Rte_Prm_EotProtnRackTrvlLimrEna_Logl();
}

EotNvmDataRec1 * TSC_EotLrng_Rte_CData_EotNvmDataDft(void)
{
  return (EotNvmDataRec1 *) Rte_CData_EotNvmDataDft();
}

     /* EotLrng */
      /* EotLrng */

/** Per Instance Memories */
float32 *TSC_EotLrng_Rte_Pim_PrevCcwEot(void)
{
  return Rte_Pim_PrevCcwEot();
}
float32 *TSC_EotLrng_Rte_Pim_PrevCwEot(void)
{
  return Rte_Pim_PrevCwEot();
}
uint32 *TSC_EotLrng_Rte_Pim_CcwEotRefTmr(void)
{
  return Rte_Pim_CcwEotRefTmr();
}
uint32 *TSC_EotLrng_Rte_Pim_CwEotRefTmr(void)
{
  return Rte_Pim_CwEotRefTmr();
}
boolean *TSC_EotLrng_Rte_Pim_HwAgOverTrvlCntrDi(void)
{
  return Rte_Pim_HwAgOverTrvlCntrDi();
}
boolean *TSC_EotLrng_Rte_Pim_RstLimReq(void)
{
  return Rte_Pim_RstLimReq();
}
EotNvmDataRec1 *TSC_EotLrng_Rte_Pim_EotNvmData(void)
{
  return Rte_Pim_EotNvmData();
}
MaxHwAgCwAndCcwRec2 *TSC_EotLrng_Rte_Pim_MaxHwAgCwAndCcw(void)
{
  return Rte_Pim_MaxHwAgCwAndCcw();
}


