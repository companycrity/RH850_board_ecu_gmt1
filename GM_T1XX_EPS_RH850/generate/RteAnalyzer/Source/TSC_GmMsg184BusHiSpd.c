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
 *          File:  TSC_GmMsg184BusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg184BusHiSpd.h"
#include "TSC_GmMsg184BusHiSpd.h"








Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Read_HowDetnFlg_Logl(boolean *data)
{
  return Rte_Read_HowDetnFlg_Logl(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Read_HwTqIdptSig_Val(uint8 *data)
{
  return Rte_Read_HwTqIdptSig_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Read_LkaSt_Val(uint8 *data)
{
  return Rte_Read_LkaSt_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Read_LkaTqDlvd_Val(float32 *data)
{
  return Rte_Read_LkaTqDlvd_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}




Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_HandsOffSteerWhlDetnMod_Val(uint8 data)
{
  return Rte_Write_HandsOffSteerWhlDetnMod_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_HandsOffSteerWhlDetnSt_Val(uint8 data)
{
  return Rte_Write_HandsOffSteerWhlDetnSt_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_HandsOffSteerWhlDetnStVld_Val(uint8 data)
{
  return Rte_Write_HandsOffSteerWhlDetnStVld_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_LkaDrvrAppldTq_Val(uint16 data)
{
  return Rte_Write_LkaDrvrAppldTq_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_LkaDrvrAppldTqVld_Val(uint8 data)
{
  return Rte_Write_LkaDrvrAppldTqVld_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_LkaElecPwrSteerTotTqDlvd_Val(uint16 data)
{
  return Rte_Write_LkaElecPwrSteerTotTqDlvd_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlDeltaTqDlvd_Val(uint16 data)
{
  return Rte_Write_LkaTqOvrlDeltaTqDlvd_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlDlvdRollgCntr_Val(uint8 data)
{
  return Rte_Write_LkaTqOvrlDlvdRollgCntr_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlStsChks_Val(uint16 data)
{
  return Rte_Write_LkaTqOvrlStsChks_Val(data);
}

Std_ReturnType TSC_GmMsg184BusHiSpd_Rte_Write_LkaTqOvrlTqDlvdSts_Val(uint8 data)
{
  return Rte_Write_LkaTqOvrlTqDlvdSts_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint8  TSC_GmMsg184BusHiSpd_Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
{
  return (uint8 ) Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val();
}
sint8  TSC_GmMsg184BusHiSpd_Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val(void)
{
  return (sint8 ) Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val();
}
boolean  TSC_GmMsg184BusHiSpd_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
}


     /* GmMsg184BusHiSpd */
      /* GmMsg184BusHiSpd */

/** Per Instance Memories */
uint8 *TSC_GmMsg184BusHiSpd_Rte_Pim_GmMsg184BusHiSpdRollgCntr(void)
{
  return Rte_Pim_GmMsg184BusHiSpdRollgCntr();
}


