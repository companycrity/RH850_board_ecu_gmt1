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
 *          File:  TSC_SnsrOffsCorrn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_SnsrOffsCorrn.h"
#include "TSC_SnsrOffsCorrn.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_SnsrOffsCorrn_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_SnsrOffsCorrn_Rte_Read_HwAgOffs_Val(float32 *data)
{
  return Rte_Read_HwAgOffs_Val(data);
}

Std_ReturnType TSC_SnsrOffsCorrn_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_SnsrOffsCorrn_Rte_Read_HwTqOffs_Val(float32 *data)
{
  return Rte_Read_HwTqOffs_Val(data);
}

Std_ReturnType TSC_SnsrOffsCorrn_Rte_Read_VehYawRate_Val(float32 *data)
{
  return Rte_Read_VehYawRate_Val(data);
}

Std_ReturnType TSC_SnsrOffsCorrn_Rte_Read_VehYawRateOffs_Val(float32 *data)
{
  return Rte_Read_VehYawRateOffs_Val(data);
}




Std_ReturnType TSC_SnsrOffsCorrn_Rte_Write_HwAgCorrd_Val(float32 data)
{
  return Rte_Write_HwAgCorrd_Val(data);
}

Std_ReturnType TSC_SnsrOffsCorrn_Rte_Write_HwTqCorrd_Val(float32 data)
{
  return Rte_Write_HwTqCorrd_Val(data);
}

Std_ReturnType TSC_SnsrOffsCorrn_Rte_Write_VehYawRateCorrd_Val(float32 data)
{
  return Rte_Write_VehYawRateCorrd_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val();
}
float32  TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val();
}
float32  TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val();
}
boolean  TSC_SnsrOffsCorrn_Rte_Prm_SnsrOffsCorrnOffsEna_Logl(void)
{
  return (boolean ) Rte_Prm_SnsrOffsCorrnOffsEna_Logl();
}


     /* SnsrOffsCorrn */
      /* SnsrOffsCorrn */


