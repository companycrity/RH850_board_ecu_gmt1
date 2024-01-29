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
 *          File:  TSC_GmMsg0C5BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg0C5BusHiSpd.h"
#include "TSC_GmMsg0C5BusHiSpd.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlDstPlsCntrRaw_Val(uint16 *data)
{
  return Rte_Read_LeWhlDstPlsCntrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlDstTiStampRaw_Val(uint16 *data)
{
  return Rte_Read_LeWhlDstTiStampRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlDstVldRaw_Val(uint8 *data)
{
  return Rte_Read_LeWhlDstVldRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlRotlStsRstRaw_Val(uint8 *data)
{
  return Rte_Read_LeWhlRotlStsRstRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlSeqNrRaw_Val(uint8 *data)
{
  return Rte_Read_LeWhlSeqNrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LstRxnTiMsg0C5BusHiSpd_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg0C5BusHiSpd_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlDstPlsCntrRaw_Val(uint16 *data)
{
  return Rte_Read_RiWhlDstPlsCntrRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlDstTiStampRaw_Val(uint16 *data)
{
  return Rte_Read_RiWhlDstTiStampRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlDstVldRaw_Val(uint8 *data)
{
  return Rte_Read_RiWhlDstVldRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlRotlStsRstRaw_Val(uint8 *data)
{
  return Rte_Read_RiWhlRotlStsRstRaw_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlSeqNrRaw_Val(uint8 *data)
{
  return Rte_Read_RiWhlSeqNrRaw_Val(data);
}




Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_LeWhlDstPlsCntr_Val(uint16 data)
{
  return Rte_Write_LeWhlDstPlsCntr_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_LeWhlDstTiStamp_Val(uint16 data)
{
  return Rte_Write_LeWhlDstTiStamp_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_LeWhlDstVld_Logl(boolean data)
{
  return Rte_Write_LeWhlDstVld_Logl(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_RiWhlDstPlsCntr_Val(uint16 data)
{
  return Rte_Write_RiWhlDstPlsCntr_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_RiWhlDstTiStamp_Val(uint16 data)
{
  return Rte_Write_RiWhlDstTiStamp_Val(data);
}

Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_RiWhlDstVld_Logl(boolean data)
{
  return Rte_Write_RiWhlDstVld_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg0C5BusHiSpdInvldTiOut_Val();
}
uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg0C5BusHiSpdMissTiOut_Val();
}
uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdRstTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg0C5BusHiSpdRstTiOut_Val();
}
uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdSeqNrTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg0C5BusHiSpdSeqNrTiOut_Val();
}


     /* GmMsg0C5BusHiSpd */
      /* GmMsg0C5BusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdLeInvldTmr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdLeInvldTmr();
}
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdLeRstTmr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdLeRstTmr();
}
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdLeSeqNrTmr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdLeSeqNrTmr();
}
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRxnTi(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevRxnTi();
}
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRiInvldTmr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdRiInvldTmr();
}
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRiRstTmr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdRiRstTmr();
}
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRiSeqNrTmr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdRiSeqNrTmr();
}
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt();
}
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp();
}
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt();
}
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp();
}
uint8 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeSeqNr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevLeSeqNr();
}
uint8 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiSeqNr(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevRiSeqNr();
}
boolean *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeVld(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevLeVld();
}
boolean *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiVld(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdPrevRiVld();
}
boolean *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRollgCntrRst(void)
{
  return Rte_Pim_GmMsg0C5BusHiSpdRollgCntrRst();
}


