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
 *          File:  TSC_GmMsg232BusHiSpd.h
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
Std_ReturnType TSC_GmMsg232BusHiSpd_Rte_Read_LstRxnTiMsg232_Val(uint32 *data);
Std_ReturnType TSC_GmMsg232BusHiSpd_Rte_Read_SteerSysPrfmncModReqRaw_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg232BusHiSpd_Rte_Write_DesRtIdx_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg232BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg232BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg232BusHiSpd_Rte_Prm_GmMsg232BusHiSpdMissTiOut_Val(void);

/** Per Instance Memories */
uint8 *TSC_GmMsg232BusHiSpd_Rte_Pim_GmMsg232BusHiSpdPrevDesRtIdx(void);



