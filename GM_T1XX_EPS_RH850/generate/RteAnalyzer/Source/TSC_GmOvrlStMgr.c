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
 *          File:  TSC_GmOvrlStMgr.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmOvrlStMgr.h"
#include "TSC_GmOvrlStMgr.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Arg);
}
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_GmLoaIgnCntr_GetErrorStatus(ErrorStatus_Arg);
}
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_GmOvrlStMgr_Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(uint16 data)
{
  Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl( data);
}





Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_AbsActvProtd_Logl(boolean *data)
{
  return Rte_Read_AbsActvProtd_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_ApaEna_Logl(boolean *data)
{
  return Rte_Read_ApaEna_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_EscEna_Logl(boolean *data)
{
  return Rte_Read_EscEna_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_EscLimdActv_Logl(boolean *data)
{
  return Rte_Read_EscLimdActv_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgEotCcw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCcw_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgEotCw_Val(float32 *data)
{
  return Rte_Read_HwAgEotCw_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgTar_Val(float32 *data)
{
  return Rte_Read_HwAgTar_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgTraj_Val(float32 *data)
{
  return Rte_Read_HwAgTraj_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgTrajEna_Logl(boolean *data)
{
  return Rte_Read_HwAgTrajEna_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwHaptcEna_Logl(boolean *data)
{
  return Rte_Read_HwHaptcEna_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_LkaEna_Logl(boolean *data)
{
  return Rte_Read_LkaEna_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_LkaTqCmdCdnd_Val(float32 *data)
{
  return Rte_Read_LkaTqCmdCdnd_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_LoaSt_Val(LoaSt1 *data)
{
  return Rte_Read_LoaSt_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_MfgOvrlDi_Logl(boolean *data)
{
  return Rte_Read_MfgOvrlDi_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg17DBusHiSpdInvld_Logl(boolean *data)
{
  return Rte_Read_Msg17DBusHiSpdInvld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg17DBusHiSpdMiss_Logl(boolean *data)
{
  return Rte_Read_Msg17DBusHiSpdMiss_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusChassisExpInvld_Logl(boolean *data)
{
  return Rte_Read_Msg180BusChassisExpInvld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusChassisExpMiss_Logl(boolean *data)
{
  return Rte_Read_Msg180BusChassisExpMiss_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusHiSpdInvld_Logl(boolean *data)
{
  return Rte_Read_Msg180BusHiSpdInvld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusHiSpdMiss_Logl(boolean *data)
{
  return Rte_Read_Msg180BusHiSpdMiss_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg1E9BusHiSpdInvld_Logl(boolean *data)
{
  return Rte_Read_Msg1E9BusHiSpdInvld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg1E9BusHiSpdMiss_Logl(boolean *data)
{
  return Rte_Read_Msg1E9BusHiSpdMiss_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg1F5BusHiSpdInvld_Logl(boolean *data)
{
  return Rte_Read_Msg1F5BusHiSpdInvld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg214BusHiSpdInvld_Logl(boolean *data)
{
  return Rte_Read_Msg214BusHiSpdInvld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg214BusHiSpdMiss_Logl(boolean *data)
{
  return Rte_Read_Msg214BusHiSpdMiss_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg337BusChassisExpInvld_Logl(boolean *data)
{
  return Rte_Read_Msg337BusChassisExpInvld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg337BusChassisExpMiss_Logl(boolean *data)
{
  return Rte_Read_Msg337BusChassisExpMiss_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_ShiftLvrRvs_Logl(boolean *data)
{
  return Rte_Read_ShiftLvrRvs_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_SysSt_Val(SysSt1 *data)
{
  return Rte_Read_SysSt_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMax_Val(float32 *data)
{
  return Rte_Read_VehSpdSecurMax_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMaxVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdSecurMaxVld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMin_Val(float32 *data)
{
  return Rte_Read_VehSpdSecurMin_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMinVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdSecurMinVld_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehStabyEnhmtActv_Logl(boolean *data)
{
  return Rte_Read_VehStabyEnhmtActv_Logl(data);
}




Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_ApaDrvrIntvDetd_Logl(boolean data)
{
  return Rte_Write_ApaDrvrIntvDetd_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_ApaSt_Val(uint8 data)
{
  return Rte_Write_ApaSt_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_EscSt_Val(uint8 data)
{
  return Rte_Write_EscSt_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwAgServoCmd_Val(float32 data)
{
  return Rte_Write_HwAgServoCmd_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwAgServoEna_Logl(boolean data)
{
  return Rte_Write_HwAgServoEna_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwOscnEna_Logl(boolean data)
{
  return Rte_Write_HwOscnEna_Logl(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwOscnFrq_Val(float32 data)
{
  return Rte_Write_HwOscnFrq_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwOscnMotAmp_Val(float32 data)
{
  return Rte_Write_HwOscnMotAmp_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwTqOscSt_Val(uint8 data)
{
  return Rte_Write_HwTqOscSt_Val(data);
}

Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_LkaSt_Val(uint8 data)
{
  return Rte_Write_LkaSt_Val(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr_Arg, TiSpan_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
uint16 TSC_GmOvrlStMgr_Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl(void)
{
return Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl();
}













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqThd_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrApaHwTqThd_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcAmp_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrHaptcAmp_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcFrq_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrHaptcFrq_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val();
}
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillThd_Val(void)
{
  return (float32 ) Rte_Prm_GmOvrlStMgrStandStillThd_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcDurn_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrHaptcDurn_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val();
}
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(void)
{
  return (uint32 ) Rte_Prm_GmOvrlStMgrStandStillTiThd_Val();
}
uint16  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val(void)
{
  return (uint16 ) Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val();
}
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl();
}
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrApaMfgEna_Logl();
}
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrEscMfgEna_Logl();
}
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
}
Ary1D_u2p14_8 * TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(void)
{
  return (Ary1D_u2p14_8 *) Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D();
}
Ary1D_u10p6_8 * TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(void)
{
  return (Ary1D_u10p6_8 *) Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D();
}


     /* GmOvrlStMgr */
      /* GmOvrlStMgr */

/** Per Instance Memories */
uint32 *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi(void)
{
  return Rte_Pim_HaptcStTranActvToWaitRefTi();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr(void)
{
  return Rte_Pim_HapticActvRefTmr();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr(void)
{
  return Rte_Pim_HapticWaitRefTmr();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr(void)
{
  return Rte_Pim_LkaFltRefTmr();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1(void)
{
  return Rte_Pim_LkaIntvRefTi1();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2(void)
{
  return Rte_Pim_LkaIntvRefTi2();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi(void)
{
  return Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi(void)
{
  return Rte_Pim_PrevApaIntvRefTi();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi(void)
{
  return Rte_Pim_PrevHaptcReqRefTi();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi(void)
{
  return Rte_Pim_PrevShiftLvrRvsRefTi();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi(void)
{
  return Rte_Pim_PrevVehStandStillRefTi();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi(void)
{
  return Rte_Pim_TqOscCycRefTi();
}
uint32 *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi(void)
{
  return Rte_Pim_TranHaptcWaitToApaStActvRefTi();
}
uint16 *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr(void)
{
  return Rte_Pim_GmLoaIgnCntr();
}
uint8 *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr(void)
{
  return Rte_Pim_LkaFltCntr();
}
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt(void)
{
  return Rte_Pim_PrevApaSt();
}
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt(void)
{
  return Rte_Pim_PrevEscSt();
}
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt(void)
{
  return Rte_Pim_PrevHaptcSt();
}
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt(void)
{
  return Rte_Pim_PrevLkaSt();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd(void)
{
  return Rte_Pim_IgnCntrUpd();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev(void)
{
  return Rte_Pim_LkaFltPrev();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev(void)
{
  return Rte_Pim_LkaIntvPrev();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk(void)
{
  return Rte_Pim_LoaStChk();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna(void)
{
  return Rte_Pim_PrevApaIntvEna();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna(void)
{
  return Rte_Pim_PrevHaptcReqEna();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt(void)
{
  return Rte_Pim_PrevLkaFlt();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna(void)
{
  return Rte_Pim_PrevShiftLvrRvsEna();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna(void)
{
  return Rte_Pim_PrevVehStandStillEna();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs(void)
{
  return Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs();
}
boolean *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill(void)
{
  return Rte_Pim_dGmOvrlStMgrApaStandStill();
}
FilLpRec1 *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil(void)
{
  return Rte_Pim_HwTqLkaLpFil();
}
FilLpRec1 *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil(void)
{
  return Rte_Pim_HwTqLpFil();
}
FilLpRec1 *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil(void)
{
  return Rte_Pim_HwTqOscnLpFil();
}


