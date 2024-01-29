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
 *          File:  TSC_GmMsg778BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg778BusHiSpd.h"
#include "TSC_GmMsg778BusHiSpd.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Read_SysSt_Val(SysSt1 *data)
{
  return Rte_Read_SysSt_Val(data);
}




Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_CodSupported_Val(uint8 data)
{
  return Rte_Write_CodSupported_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_CurrSts_Val(uint8 data)
{
  return Rte_Write_CurrSts_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_DtcFailrTyp_Val(uint8 data)
{
  return Rte_Write_DtcFailrTyp_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_DtcFltTyp_Val(uint8 data)
{
  return Rte_Write_DtcFltTyp_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_DtcNr_Val(uint16 data)
{
  return Rte_Write_DtcNr_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_DtcSrc_Val(uint8 data)
{
  return Rte_Write_DtcSrc_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_DtcTrig_Val(uint8 data)
{
  return Rte_Write_DtcTrig_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_HistSts_Val(uint8 data)
{
  return Rte_Write_HistSts_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
{
  return Rte_Write_TstFaildCodClrdSts_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
{
  return Rte_Write_TstFaildPwrUpSts_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
{
  return Rte_Write_TstNotPassdCodClrdSts_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
{
  return Rte_Write_TstNotPassdPwrUpSts_Val(data);
}

Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
{
  return Rte_Write_WarnIndcrReqdSts_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Call_DtcTrigStsAry_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_DtcTrigStsAry_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_GmMsg778BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* GmMsg778BusHiSpd */
      /* GmMsg778BusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigTmr(void)
{
  return Rte_Pim_TrigTmr();
}
uint8 *TSC_GmMsg778BusHiSpd_Rte_Pim_ActvEveId(void)
{
  return Rte_Pim_ActvEveId();
}
uint8 *TSC_GmMsg778BusHiSpd_Rte_Pim_EveCnt(void)
{
  return Rte_Pim_EveCnt();
}
boolean *TSC_GmMsg778BusHiSpd_Rte_Pim_TrigActv(void)
{
  return Rte_Pim_TrigActv();
}
uint32 *TSC_GmMsg778BusHiSpd_Rte_Pim_DtcMap(void)
{
  return Rte_Pim_DtcMap();
}
uint8 *TSC_GmMsg778BusHiSpd_Rte_Pim_DtcTrigStsAry(void)
{
  return Rte_Pim_DtcTrigStsAry();
}
uint8 *TSC_GmMsg778BusHiSpd_Rte_Pim_EveMap(void)
{
  return Rte_Pim_EveMap();
}


