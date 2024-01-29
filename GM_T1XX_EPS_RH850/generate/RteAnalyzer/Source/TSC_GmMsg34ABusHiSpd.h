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
 *          File:  TSC_GmMsg34ABusHiSpd.h
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
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_LstRxnTiMsg34ABusHiSpd_Val(uint32 *data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelLeNonDrvnRawBusHiSpd_Val(uint16 *data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelRiNonDrvnRawBusHiSpd_Val(uint16 *data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Read_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelLeNonDrvnBusHiSpd_Val(float32 data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(boolean data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(boolean data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelRiNonDrvnBusHiSpd_Val(float32 data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(boolean data);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Write_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg34ABusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg34ABusHiSpd_Rte_Prm_GmMsg34ABusHiSpdInvldTiOut_Val(void);
uint16  TSC_GmMsg34ABusHiSpd_Rte_Prm_GmMsg34ABusHiSpdMissTiOut_Val(void);
uint16  TSC_GmMsg34ABusHiSpd_Rte_Prm_GmMsg34ABusHiSpdStuckTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi(void);
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi(void);
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi(void);
uint32 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi(void);
uint16 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn(void);
uint16 *TSC_GmMsg34ABusHiSpd_Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn(void);



