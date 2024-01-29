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
 *          File:  TSC_GmRoadWhlInQlfr.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmRoadWhlInQlfr.h"
#include "TSC_GmRoadWhlInQlfr.h"















     // Client Server Interfaces:
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlLeDstPlsCntr_Val(uint16 *data)
{
  return Rte_Read_WhlLeDstPlsCntr_Val(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlLeDstTiStamp_Val(uint16 *data)
{
  return Rte_Read_WhlLeDstTiStamp_Val(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlLeDstVld_Logl(boolean *data)
{
  return Rte_Read_WhlLeDstVld_Logl(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlPlsPerRev_Val(uint8 *data)
{
  return Rte_Read_WhlPlsPerRev_Val(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRiDstPlsCntr_Val(uint16 *data)
{
  return Rte_Read_WhlRiDstPlsCntr_Val(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRiDstTiStamp_Val(uint16 *data)
{
  return Rte_Read_WhlRiDstTiStamp_Val(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRiDstVld_Logl(boolean *data)
{
  return Rte_Read_WhlRiDstVld_Logl(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRotlStsTiStampResl_Val(float32 *data)
{
  return Rte_Read_WhlRotlStsTiStampResl_Val(data);
}




Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Write_WhlFrqVld_Logl(boolean data)
{
  return Rte_Write_WhlFrqVld_Logl(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Write_WhlLeFrq_Val(float32 data)
{
  return Rte_Write_WhlLeFrq_Val(data);
}

Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Write_WhlRiFrq_Val(float32 data)
{
  return Rte_Write_WhlRiFrq_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmRoadWhlInQlfr_Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val(void)
{
  return (float32 ) Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val();
}
float32  TSC_GmRoadWhlInQlfr_Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val(void)
{
  return (float32 ) Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val();
}


     /* GmRoadWhlInQlfr */
      /* GmRoadWhlInQlfr */

/** Per Instance Memories */
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevLeWhlFrq(void)
{
  return Rte_Pim_PrevLeWhlFrq();
}
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRawLeWhlFrq(void)
{
  return Rte_Pim_PrevRawLeWhlFrq();
}
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRawRiWhlFrq(void)
{
  return Rte_Pim_PrevRawRiWhlFrq();
}
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRiWhlFrq(void)
{
  return Rte_Pim_PrevRiWhlFrq();
}
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq();
}
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq();
}
uint32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldTiLeFrqChg(void)
{
  return Rte_Pim_PrevVldTiLeFrqChg();
}
uint32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldTiRiFrqChg(void)
{
  return Rte_Pim_PrevVldTiRiFrqChg();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldLeWhlDstPlsCntr(void)
{
  return Rte_Pim_PrevVldLeWhlDstPlsCntr();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldLeWhlDstTiStamp(void)
{
  return Rte_Pim_PrevVldLeWhlDstTiStamp();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldRiWhlDstPlsCntr(void)
{
  return Rte_Pim_PrevVldRiWhlDstPlsCntr();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldRiWhlDstTiStamp(void)
{
  return Rte_Pim_PrevVldRiWhlDstTiStamp();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls();
}
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp();
}
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevLeWhlFrqVld(void)
{
  return Rte_Pim_PrevLeWhlFrqVld();
}
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRiWhlFrqVld(void)
{
  return Rte_Pim_PrevRiWhlFrqVld();
}
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld();
}
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld(void)
{
  return Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld();
}


