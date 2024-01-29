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
 *          File:  TSC_GateDrv1Ctrl.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GateDrv1Ctrl.h"
#include "TSC_GateDrv1Ctrl.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_GateDrv1Ctrl_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
{
  return Rte_Read_DiagcStsIvtr2Inactv_Logl(data);
}

Std_ReturnType TSC_GateDrv1Ctrl_Rte_Read_StrtUpSt_Val(uint8 *data)
{
  return Rte_Read_StrtUpSt_Val(data);
}

Std_ReturnType TSC_GateDrv1Ctrl_Rte_Read_SysSt_Val(SysSt1 *data)
{
  return Rte_Read_SysSt_Val(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(boolean *PinSt_Arg)
{
  return Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(PinSt_Arg);
}
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt)
{
  return Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(PinSt);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_GateDrv1Ctrl_Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena(boolean data)
{
  Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena( data);
}
void TSC_GateDrv1Ctrl_Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv(boolean data)
{
  Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv( data);
}








Std_ReturnType TSC_GateDrv1Ctrl_Rte_Write_MotDrvr1IninTestCmpl_Logl(boolean data)
{
  return Rte_Write_MotDrvr1IninTestCmpl_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt)
{
  return Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(PinSt);
}
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
boolean TSC_GateDrv1Ctrl_Rte_IrvRead_GateDrv1CtrlPer2_GateDrv1Ena(void)
{
return Rte_IrvRead_GateDrv1CtrlPer2_GateDrv1Ena();
}
boolean TSC_GateDrv1Ctrl_Rte_IrvRead_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv(void)
{
return Rte_IrvRead_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv();
}





uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x061FailStep_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlNtcNr0x061FailStep_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x065FailStep_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlNtcNr0x065FailStep_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val();
}
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val(void)
{
  return (uint16 ) Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val();
}


     /* GateDrv1Ctrl */
      /* GateDrv1Ctrl */

/** Per Instance Memories */
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1Diag0Val(void)
{
  return Rte_Pim_GateDrv1Diag0Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1Diag1Val(void)
{
  return Rte_Pim_GateDrv1Diag1Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1Diag2Val(void)
{
  return Rte_Pim_GateDrv1Diag2Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1StsVal(void)
{
  return Rte_Pim_GateDrv1StsVal();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1VrfyRes0Val(void)
{
  return Rte_Pim_GateDrv1VrfyRes0Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1VrfyRes1Val(void)
{
  return Rte_Pim_GateDrv1VrfyRes1Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1Diag0Val(void)
{
  return Rte_Pim_dGateDrv1CtrlGateDrv1Diag0Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1Diag1Val(void)
{
  return Rte_Pim_dGateDrv1CtrlGateDrv1Diag1Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1Diag2Val(void)
{
  return Rte_Pim_dGateDrv1CtrlGateDrv1Diag2Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1StsVal(void)
{
  return Rte_Pim_dGateDrv1CtrlGateDrv1StsVal();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val(void)
{
  return Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val();
}
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val(void)
{
  return Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val();
}
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1CfgCnt(void)
{
  return Rte_Pim_GateDrv1CfgCnt();
}
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1OffStChkIdx(void)
{
  return Rte_Pim_GateDrv1OffStChkIdx();
}
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1OffStCnt(void)
{
  return Rte_Pim_GateDrv1OffStCnt();
}
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1St(void)
{
  return Rte_Pim_GateDrv1St();
}
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_Ivtr1BootstrpSplyFltPrmVal(void)
{
  return Rte_Pim_Ivtr1BootstrpSplyFltPrmVal();
}
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_Ivtr1GenericFltPrmVal(void)
{
  return Rte_Pim_Ivtr1GenericFltPrmVal();
}
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx(void)
{
  return Rte_Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx();
}
boolean *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1CfgSecAtmpt(void)
{
  return Rte_Pim_GateDrv1CfgSecAtmpt();
}
boolean *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1OffStChkSecAtmpt(void)
{
  return Rte_Pim_GateDrv1OffStChkSecAtmpt();
}
boolean *TSC_GateDrv1Ctrl_Rte_Pim_Ivtr1OffStChkCmpl(void)
{
  return Rte_Pim_Ivtr1OffStChkCmpl();
}


