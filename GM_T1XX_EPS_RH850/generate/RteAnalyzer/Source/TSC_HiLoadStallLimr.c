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
 *          File:  TSC_HiLoadStallLimr.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_HiLoadStallLimr.h"
#include "TSC_HiLoadStallLimr.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_HiLoadStallLimr_Rte_Read_MotTqCmdLimdPreStall_Val(float32 *data)
{
  return Rte_Read_MotTqCmdLimdPreStall_Val(data);
}

Std_ReturnType TSC_HiLoadStallLimr_Rte_Read_MotVelCrf_Val(float32 *data)
{
  return Rte_Read_MotVelCrf_Val(data);
}

Std_ReturnType TSC_HiLoadStallLimr_Rte_Read_StallMotTqLimDi_Logl(boolean *data)
{
  return Rte_Read_StallMotTqLimDi_Logl(data);
}




Std_ReturnType TSC_HiLoadStallLimr_Rte_Write_StallMotTqLim_Val(float32 data)
{
  return Rte_Write_StallMotTqLim_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val();
}
float32  TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrMotVelMgnThd_Val(void)
{
  return (float32 ) Rte_Prm_HiLoadStallLimrMotVelMgnThd_Val();
}
float32  TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Val(void)
{
  return (float32 ) Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Val();
}
Ary1D_u8p8_6 * TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D(void)
{
  return (Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D();
}
Ary1D_u8p8_6 * TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D(void)
{
  return (Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D();
}


     /* HiLoadStallLimr */
      /* HiLoadStallLimr */

/** Per Instance Memories */
float32 *TSC_HiLoadStallLimr_Rte_Pim_StallMotTqLimPrev(void)
{
  return Rte_Pim_StallMotTqLimPrev();
}
float32 *TSC_HiLoadStallLimr_Rte_Pim_dHiLoadStallLimrStallMotTqCmd(void)
{
  return Rte_Pim_dHiLoadStallLimrStallMotTqCmd();
}
float32 *TSC_HiLoadStallLimr_Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild(void)
{
  return Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild();
}
float32 *TSC_HiLoadStallLimr_Rte_Pim_dHiLoadStallLimrStallMotTqLim(void)
{
  return Rte_Pim_dHiLoadStallLimrStallMotTqLim();
}
FilLpRec1 *TSC_HiLoadStallLimr_Rte_Pim_StallMotTqCmdFil(void)
{
  return Rte_Pim_StallMotTqCmdFil();
}


