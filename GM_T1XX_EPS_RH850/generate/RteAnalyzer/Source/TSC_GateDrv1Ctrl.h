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
 *          File:  TSC_GateDrv1Ctrl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Read_StrtUpSt_Val(uint8 *data);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Read_SysSt_Val(SysSt1 *data);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Write_MotDrvr1IninTestCmpl_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(boolean *PinSt_Arg);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(boolean *PinSt_Arg);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt);
Std_ReturnType TSC_GateDrv1Ctrl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Explicit inter-runnable variables */
void TSC_GateDrv1Ctrl_Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena(boolean);
void TSC_GateDrv1Ctrl_Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv(boolean);
boolean TSC_GateDrv1Ctrl_Rte_IrvRead_GateDrv1CtrlPer2_GateDrv1Ena(void);
boolean TSC_GateDrv1Ctrl_Rte_IrvRead_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv(void);

/** Calibration Component Calibration Parameters */
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x061FailStep_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x065FailStep_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val(void);
uint16  TSC_GateDrv1Ctrl_Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val(void);

/** Per Instance Memories */
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1Diag0Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1Diag1Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1Diag2Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1StsVal(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1VrfyRes0Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1VrfyRes1Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1Diag0Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1Diag1Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1Diag2Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1StsVal(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val(void);
uint16 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val(void);
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1CfgCnt(void);
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1OffStChkIdx(void);
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1OffStCnt(void);
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1St(void);
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_Ivtr1BootstrpSplyFltPrmVal(void);
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_Ivtr1GenericFltPrmVal(void);
uint8 *TSC_GateDrv1Ctrl_Rte_Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx(void);
boolean *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1CfgSecAtmpt(void);
boolean *TSC_GateDrv1Ctrl_Rte_Pim_GateDrv1OffStChkSecAtmpt(void);
boolean *TSC_GateDrv1Ctrl_Rte_Pim_Ivtr1OffStChkCmpl(void);



