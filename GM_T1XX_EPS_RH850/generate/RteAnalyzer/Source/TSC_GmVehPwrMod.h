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
 *          File:  TSC_GmVehPwrMod.h
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
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_BusOffHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_EngRunActv_Logl(boolean *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_PrpnSysActvMsgInvld_Logl(boolean *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysPwrModMsgInvld_Logl(boolean *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysPwrModRun_Logl(boolean *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysStEnaReqOvrd_Logl(boolean *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_SysStFltOutpReqDi_Logl(boolean *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_VehSpdArbd_Val(float32 *data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Read_VehSpdSnsrVld_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmVehPwrMod_Rte_Write_PwrSplyEnaReq_Logl(boolean data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Write_SysOperMotTqCmdSca_Val(float32 data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Write_SysOperRampRate_Val(float32 data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Write_SysStReqEna_Logl(boolean data);
Std_ReturnType TSC_GmVehPwrMod_Rte_Write_VehPwrModDftVehSpdEna_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmVehPwrMod_Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg);
Std_ReturnType TSC_GmVehPwrMod_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmVehPwrMod_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val(void);
float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModOperRampRate_Val(void);
float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val(void);
float32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val(void);
uint32  TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmVehPwrMod_Rte_Pim_TqRefTi(void);
boolean *TSC_GmVehPwrMod_Rte_Pim_PrevSysStReqEnaVal(void);
boolean *TSC_GmVehPwrMod_Rte_Pim_TqRefTiActv(void);
boolean *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModHwTqKeepAssi(void);
boolean *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin(void);
boolean *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiOnMin(void);



