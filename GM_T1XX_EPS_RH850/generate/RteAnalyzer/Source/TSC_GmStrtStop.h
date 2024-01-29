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
 *          File:  TSC_GmStrtStop.h
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
Std_ReturnType TSC_GmStrtStop_Rte_Read_EngSpd_Val(float32 *data);
Std_ReturnType TSC_GmStrtStop_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_GmStrtStop_Rte_Read_HwVel_Val(float32 *data);
Std_ReturnType TSC_GmStrtStop_Rte_Read_Msg0C9BusHiSpdInvld_Logl(boolean *data);
Std_ReturnType TSC_GmStrtStop_Rte_Read_Msg0C9BusHiSpdMiss_Logl(boolean *data);
Std_ReturnType TSC_GmStrtStop_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_GmStrtStop_Rte_Read_VehSpdVld_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmStrtStop_Rte_Write_VehStrtStopMotTqCmdSca_Val(float32 data);
Std_ReturnType TSC_GmStrtStop_Rte_Write_VehStrtStopRampRate_Val(float32 data);
Std_ReturnType TSC_GmStrtStop_Rte_Write_VehStrtStopSt_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_GmStrtStop_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmStrtStop_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmStrtStop_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopFltRateLim_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1EngTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1Sca_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1ToStopRateLim_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopMod2Sca_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModEngTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormRateLim_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopNormToMod1RateLim_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopAndMod2RateLim_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1Tmr_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2Tmr_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val(void);
float32  TSC_GmStrtStop_Rte_Prm_GmStrtStopStopModSca_Val(void);
boolean  TSC_GmStrtStop_Rte_Prm_GmStrtStopEna_Logl(void);

/** Per Instance Memories */
uint32 *TSC_GmStrtStop_Rte_Pim_Mod1RefTmr(void);
uint32 *TSC_GmStrtStop_Rte_Pim_Mod2RefTmr(void);
uint8 *TSC_GmStrtStop_Rte_Pim_PrevActSt(void);
uint8 *TSC_GmStrtStop_Rte_Pim_PrevStrtStopSt(void);



