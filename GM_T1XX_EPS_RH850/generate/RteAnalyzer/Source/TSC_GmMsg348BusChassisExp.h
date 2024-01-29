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
 *          File:  TSC_GmMsg348BusChassisExp.h
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
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_LstRxnTiMsg348BusChassisExp_Val(uint32 *data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelLeDrvnRawBusChassisExp_Val(uint16 *data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelLeDrvnVldRawBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelRiDrvnRawBusChassisExp_Val(uint16 *data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Read_WhlGndVelRiDrvnVldRawBusChassisExp_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelLeDrvnBusChassisExp_Val(float32 data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelLeDrvnStuckBusChassisExp_Logl(boolean data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelLeDrvnVldBusChassisExp_Logl(boolean data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelRiDrvnBusChassisExp_Val(float32 data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelRiDrvnStuckBusChassisExp_Logl(boolean data);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Write_WhlGndVelRiDrvnVldBusChassisExp_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg348BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg348BusChassisExp_Rte_Prm_GmMsg348BusChassisExpInvldTiOut_Val(void);
uint16  TSC_GmMsg348BusChassisExp_Rte_Prm_GmMsg348BusChassisExpMissTiOut_Val(void);
uint16  TSC_GmMsg348BusChassisExp_Rte_Prm_GmMsg348BusChassisExpStuckTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi(void);
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi(void);
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi(void);
uint32 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi(void);
uint16 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn(void);
uint16 *TSC_GmMsg348BusChassisExp_Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn(void);



