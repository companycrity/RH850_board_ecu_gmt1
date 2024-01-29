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
 *          File:  TSC_GmMsg1E9BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg1E9BusHiSpd.h"
#include "TSC_GmMsg1E9BusHiSpd.h"








Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_AbsActvRaw_Val(uint8 *data)
{
  return Rte_Read_AbsActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_AbsFaildRaw_Val(uint8 *data)
{
  return Rte_Read_AbsFaildRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_LstRxnTiMsg1E9_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg1E9_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_RdntVehStabyEnhmtActv_Logl(boolean *data)
{
  return Rte_Read_RdntVehStabyEnhmtActv_Logl(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_TracCtrlSysActvRaw_Val(uint8 *data)
{
  return Rte_Read_TracCtrlSysActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_TracCtrlSysEnaRaw_Val(uint8 *data)
{
  return Rte_Read_TracCtrlSysEnaRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehDynCtrlSysStRaw_Val(uint8 *data)
{
  return Rte_Read_VehDynCtrlSysStRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehDynYawRateRaw_Val(uint16 *data)
{
  return Rte_Read_VehDynYawRateRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehDynYawRateVldRaw_Val(uint8 *data)
{
  return Rte_Read_VehDynYawRateVldRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehStabyEnhmtActvRaw_Val(uint8 *data)
{
  return Rte_Read_VehStabyEnhmtActvRaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehStabyEnhmtLatARaw_Val(uint16 *data)
{
  return Rte_Read_VehStabyEnhmtLatARaw_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehStabyEnhmtLatAVldRaw_Val(uint8 *data)
{
  return Rte_Read_VehStabyEnhmtLatAVldRaw_Val(data);
}




Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_InvldMsg1E9_Logl(boolean data)
{
  return Rte_Write_InvldMsg1E9_Logl(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_MissMsg1E9_Logl(boolean data)
{
  return Rte_Write_MissMsg1E9_Logl(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComAbsActv_Logl(boolean data)
{
  return Rte_Write_SerlComAbsActv_Logl(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComLatA_Val(float32 data)
{
  return Rte_Write_SerlComLatA_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComTcsActv_Logl(boolean data)
{
  return Rte_Write_SerlComTcsActv_Logl(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComYawRate_Val(float32 data)
{
  return Rte_Write_SerlComYawRate_Val(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComYawRateVld_Logl(boolean data)
{
  return Rte_Write_SerlComYawRateVld_Logl(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_VehLatAVldSerlCom_Logl(boolean data)
{
  return Rte_Write_VehLatAVldSerlCom_Logl(data);
}

Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_VehStabyEnhmtActv_Logl(boolean data)
{
  return Rte_Write_VehStabyEnhmtActv_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdLatADft_Val(void)
{
  return (float32 ) Rte_Prm_GmMsg1E9BusHiSpdLatADft_Val();
}
float32  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdYawRateDft_Val(void)
{
  return (float32 ) Rte_Prm_GmMsg1E9BusHiSpdYawRateDft_Val();
}
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdAbsFaildTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1E9BusHiSpdAbsFaildTiOut_Val();
}
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdLatAInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1E9BusHiSpdLatAInvldTiOut_Val();
}
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1E9BusHiSpdMissTiOut_Val();
}
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdTcsDisadTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1E9BusHiSpdTcsDisadTiOut_Val();
}
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val();
}
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val();
}
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val();
}


     /* GmMsg1E9BusHiSpd */
      /* GmMsg1E9BusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdAbsFaildTmr(void)
{
  return Rte_Pim_GmMsg1E9BusHiSpdAbsFaildTmr();
}
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdLatAInvldTmr(void)
{
  return Rte_Pim_GmMsg1E9BusHiSpdLatAInvldTmr();
}
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr(void)
{
  return Rte_Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr();
}
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdTcsEnaTmr(void)
{
  return Rte_Pim_GmMsg1E9BusHiSpdTcsEnaTmr();
}
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr(void)
{
  return Rte_Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr();
}
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdYawRateInvldTmr(void)
{
  return Rte_Pim_GmMsg1E9BusHiSpdYawRateInvldTmr();
}


