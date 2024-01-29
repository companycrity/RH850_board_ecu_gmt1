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
 *          File:  TSC_Rtn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Rtn.h"
#include "TSC_Rtn.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_Rtn_Rte_Read_AssiMechT_Val(float32 *data)
{
  return Rte_Read_AssiMechT_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_HwAgAuthySca_Val(float32 *data)
{
  return Rte_Read_HwAgAuthySca_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_HwAgRtnOffs_Val(float32 *data)
{
  return Rte_Read_HwAgRtnOffs_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_HwVel_Val(float32 *data)
{
  return Rte_Read_HwVel_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdDi_Logl(boolean *data)
{
  return Rte_Read_RtnCmdDi_Logl(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdDiagcDi_Logl(boolean *data)
{
  return Rte_Read_RtnCmdDiagcDi_Logl(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdSca_Val(float32 *data)
{
  return Rte_Read_RtnCmdSca_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_RtnCmdScaServo_Val(float32 *data)
{
  return Rte_Read_RtnCmdScaServo_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_Rtn_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}




Std_ReturnType TSC_Rtn_Rte_Write_RtnCmd_Val(float32 data)
{
  return Rte_Write_RtnCmd_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_Rtn_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
{
  return Rte_Call_FltInj_f32_Oper(SigPah_Arg, LocnKey_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_Rtn_Rte_Prm_RtnHwAuthySlew_Val(void)
{
  return (float32 ) Rte_Prm_RtnHwAuthySlew_Val();
}
float32  TSC_Rtn_Rte_Prm_RtnOffsRng_Val(void)
{
  return (float32 ) Rte_Prm_RtnOffsRng_Val();
}
float32  TSC_Rtn_Rte_Prm_RtnOffsSlew_Val(void)
{
  return (float32 ) Rte_Prm_RtnOffsSlew_Val();
}
Ary2D_u12p4_9_16 * TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(void)
{
  return (Ary2D_u12p4_9_16 *) Rte_Prm_RtnHwAgOffsCalcdX_Ary2D();
}
Ary2D_u5p11_9_16 * TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(void)
{
  return (Ary2D_u5p11_9_16 *) Rte_Prm_RtnHwAgOffsCalcdY_Ary2D();
}
Ary1D_u8p8_4 * TSC_Rtn_Rte_Prm_RtnHwAuthyScaX_Ary1D(void)
{
  return (Ary1D_u8p8_4 *) Rte_Prm_RtnHwAuthyScaX_Ary1D();
}
Ary1D_u9p7_4 * TSC_Rtn_Rte_Prm_RtnHwAuthyScaY_Ary1D(void)
{
  return (Ary1D_u9p7_4 *) Rte_Prm_RtnHwAuthyScaY_Ary1D();
}
Ary2D_u8p8_9_8 * TSC_Rtn_Rte_Prm_RtnScaTqX_Ary2D(void)
{
  return (Ary2D_u8p8_9_8 *) Rte_Prm_RtnScaTqX_Ary2D();
}
Ary2D_u8p8_9_8 * TSC_Rtn_Rte_Prm_RtnScaTqY_Ary2D(void)
{
  return (Ary2D_u8p8_9_8 *) Rte_Prm_RtnScaTqY_Ary2D();
}
Ary2D_u7p9_9_4 * TSC_Rtn_Rte_Prm_RtnScaVelX_Ary2D(void)
{
  return (Ary2D_u7p9_9_4 *) Rte_Prm_RtnScaVelX_Ary2D();
}
Ary2D_u8p8_9_4 * TSC_Rtn_Rte_Prm_RtnScaVelY_Ary2D(void)
{
  return (Ary2D_u8p8_9_4 *) Rte_Prm_RtnScaVelY_Ary2D();
}
Ary1D_s11p4_14 * TSC_Rtn_Rte_Prm_RtnTScaX_Ary1D(void)
{
  return (Ary1D_s11p4_14 *) Rte_Prm_RtnTScaX_Ary1D();
}
Ary1D_u8p8_14 * TSC_Rtn_Rte_Prm_RtnTScaY_Ary1D(void)
{
  return (Ary1D_u8p8_14 *) Rte_Prm_RtnTScaY_Ary1D();
}
Ary1D_u9p7_9 * TSC_Rtn_Rte_Prm_RtnVehSpdSeln_Ary1D(void)
{
  return (Ary1D_u9p7_9 *) Rte_Prm_RtnVehSpdSeln_Ary1D();
}


     /* Rtn */
      /* Rtn */

/** Per Instance Memories */
float32 *TSC_Rtn_Rte_Pim_PrevHwAgAuthy(void)
{
  return Rte_Pim_PrevHwAgAuthy();
}
float32 *TSC_Rtn_Rte_Pim_PrevHwAgOffsLimd(void)
{
  return Rte_Pim_PrevHwAgOffsLimd();
}
float32 *TSC_Rtn_Rte_Pim_dRtnAbsltHwAgOffsCalcd(void)
{
  return Rte_Pim_dRtnAbsltHwAgOffsCalcd();
}
float32 *TSC_Rtn_Rte_Pim_dRtnAssiMechTRtnSca(void)
{
  return Rte_Pim_dRtnAssiMechTRtnSca();
}
float32 *TSC_Rtn_Rte_Pim_dRtnBascRtn(void)
{
  return Rte_Pim_dRtnBascRtn();
}
float32 *TSC_Rtn_Rte_Pim_dRtnHwAgAuthySca(void)
{
  return Rte_Pim_dRtnHwAgAuthySca();
}
float32 *TSC_Rtn_Rte_Pim_dRtnHwAgRtnCmd(void)
{
  return Rte_Pim_dRtnHwAgRtnCmd();
}
float32 *TSC_Rtn_Rte_Pim_dRtnHwTqRtnSca(void)
{
  return Rte_Pim_dRtnHwTqRtnSca();
}
float32 *TSC_Rtn_Rte_Pim_dRtnHwVelRtnSca(void)
{
  return Rte_Pim_dRtnHwVelRtnSca();
}


