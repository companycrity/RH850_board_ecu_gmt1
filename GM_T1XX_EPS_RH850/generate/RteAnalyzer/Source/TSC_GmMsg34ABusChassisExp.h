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
 *          File:  TSC_GmMsg34ABusChassisExp.h
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
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_LstRxnTiMsg34ABusChassisExp_Val(uint32 *data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelLeNonDrvnRawBusChassisExp_Val(uint16 *data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelRiNonDrvnRawBusChassisExp_Val(uint16 *data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Read_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelLeNonDrvnBusChassisExp_Val(float32 data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(boolean data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(boolean data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelRiNonDrvnBusChassisExp_Val(float32 data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(boolean data);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Write_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg34ABusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg34ABusChassisExp_Rte_Prm_GmMsg34ABusChassisExpInvldTiOut_Val(void);
uint16  TSC_GmMsg34ABusChassisExp_Rte_Prm_GmMsg34ABusChassisExpMissTiOut_Val(void);
uint16  TSC_GmMsg34ABusChassisExp_Rte_Prm_GmMsg34ABusChassisExpStuckTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi(void);
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi(void);
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi(void);
uint32 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi(void);
uint16 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn(void);
uint16 *TSC_GmMsg34ABusChassisExp_Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn(void);



