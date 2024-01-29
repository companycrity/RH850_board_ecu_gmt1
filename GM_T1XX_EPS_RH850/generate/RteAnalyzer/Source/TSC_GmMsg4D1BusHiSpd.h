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
 *          File:  TSC_GmMsg4D1BusHiSpd.h
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
Std_ReturnType TSC_GmMsg4D1BusHiSpd_Rte_Read_EngOilTRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg4D1BusHiSpd_Rte_Read_EngOilVldRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg4D1BusHiSpd_Rte_Read_LstRxnTiMsg4D1_Val(uint32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg4D1BusHiSpd_Rte_Write_EngOilT_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg4D1BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg4D1BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg4D1BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
float32  TSC_GmMsg4D1BusHiSpd_Rte_Prm_GmMsg4D1BusHiSpdEngOilTDft_Val(void);
uint16  TSC_GmMsg4D1BusHiSpd_Rte_Prm_GmMsg4D1BusHiSpdInvldTiOut_Val(void);
uint16  TSC_GmMsg4D1BusHiSpd_Rte_Prm_GmMsg4D1BusHiSpdMissTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg4D1BusHiSpd_Rte_Pim_GmMsg4D1BusHiSpdInvldMsgTmr(void);



