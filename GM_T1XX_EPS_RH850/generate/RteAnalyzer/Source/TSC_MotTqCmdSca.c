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
 *          File:  TSC_MotTqCmdSca.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_MotTqCmdSca.h"
#include "TSC_MotTqCmdSca.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_MotTqCmdSca_Rte_Call_MotTqScaFac_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_MotTqScaFac_GetErrorStatus(ErrorStatus_Arg);
}
Std_ReturnType TSC_MotTqCmdSca_Rte_Call_MotTqScaFac_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_MotTqScaFac_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_MotTqCmdSca_Rte_Read_MotTqCmdMrf_Val(float32 *data)
{
  return Rte_Read_MotTqCmdMrf_Val(data);
}




Std_ReturnType TSC_MotTqCmdSca_Rte_Write_MotTqCmdMrfScad_Val(float32 data)
{
  return Rte_Write_MotTqCmdMrfScad_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_MotTqCmdSca_Rte_Prm_MotTqCmdScaMax_Val(void)
{
  return (float32 ) Rte_Prm_MotTqCmdScaMax_Val();
}
float32  TSC_MotTqCmdSca_Rte_Prm_MotTqCmdScaMin_Val(void)
{
  return (float32 ) Rte_Prm_MotTqCmdScaMin_Val();
}


     /* MotTqCmdSca */
      /* MotTqCmdSca */

/** Per Instance Memories */
float32 *TSC_MotTqCmdSca_Rte_Pim_MotTqScaFac(void)
{
  return Rte_Pim_MotTqScaFac();
}


