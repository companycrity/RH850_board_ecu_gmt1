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
 *          File:  TSC_GmMsg335BusChassisExp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg335BusChassisExp.h"
#include "TSC_GmMsg335BusChassisExp.h"








Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Read_ApaDrvrIntvDetd_Logl(boolean *data)
{
  return Rte_Read_ApaDrvrIntvDetd_Logl(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Read_ApaSt_Val(uint8 *data)
{
  return Rte_Read_ApaSt_Val(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Read_HwTqIdptSig_Val(uint8 *data)
{
  return Rte_Read_HwTqIdptSig_Val(data);
}




Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetd_Val(uint8 data)
{
  return Rte_Write_DrvrSteerIntvDetd_Val(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetdProtnVal_Val(uint8 data)
{
  return Rte_Write_DrvrSteerIntvDetdProtnVal_Val(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetdRollgCntr_Val(uint8 data)
{
  return Rte_Write_DrvrSteerIntvDetdRollgCntr_Val(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Write_DrvrSteerIntvDetdVld_Val(uint8 data)
{
  return Rte_Write_DrvrSteerIntvDetdVld_Val(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Write_ElecPowerSteerAvlSts_Val(uint8 data)
{
  return Rte_Write_ElecPowerSteerAvlSts_Val(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Write_ElecPowerSteerAvlStsProtnVal_Val(uint8 data)
{
  return Rte_Write_ElecPowerSteerAvlStsProtnVal_Val(data);
}

Std_ReturnType TSC_GmMsg335BusChassisExp_Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val(uint8 data)
{
  return Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint8  TSC_GmMsg335BusChassisExp_Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
{
  return (uint8 ) Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val();
}


     /* GmMsg335BusChassisExp */
      /* GmMsg335BusChassisExp */

/** Per Instance Memories */
uint8 *TSC_GmMsg335BusChassisExp_Rte_Pim_GmMsg335BusChassisExpRollgCntr(void)
{
  return Rte_Pim_GmMsg335BusChassisExpRollgCntr();
}


