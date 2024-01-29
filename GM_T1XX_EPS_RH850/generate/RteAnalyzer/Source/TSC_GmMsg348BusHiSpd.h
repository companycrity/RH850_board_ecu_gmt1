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
 *          File:  TSC_GmMsg348BusHiSpd.h
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
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_LstRxnTiMsg348BusHiSpd_Val(uint32 *data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelLeDrvnRawBusHiSpd_Val(uint16 *data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelLeDrvnVldRawBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelRiDrvnRawBusHiSpd_Val(uint16 *data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Read_WhlGndVelRiDrvnVldRawBusHiSpd_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelLeDrvnBusHiSpd_Val(float32 data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelLeDrvnStuckBusHiSpd_Logl(boolean data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelLeDrvnVldBusHiSpd_Logl(boolean data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelRiDrvnBusHiSpd_Val(float32 data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelRiDrvnStuckBusHiSpd_Logl(boolean data);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Write_WhlGndVelRiDrvnVldBusHiSpd_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg348BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg348BusHiSpd_Rte_Prm_GmMsg348BusHiSpdInvldTiOut_Val(void);
uint16  TSC_GmMsg348BusHiSpd_Rte_Prm_GmMsg348BusHiSpdMissTiOut_Val(void);
uint16  TSC_GmMsg348BusHiSpd_Rte_Prm_GmMsg348BusHiSpdStuckTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi(void);
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi(void);
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi(void);
uint32 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi(void);
uint16 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn(void);
uint16 *TSC_GmMsg348BusHiSpd_Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn(void);



