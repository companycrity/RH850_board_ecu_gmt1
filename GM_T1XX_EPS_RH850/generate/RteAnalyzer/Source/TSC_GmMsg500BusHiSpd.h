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
 *          File:  TSC_GmMsg500BusHiSpd.h
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
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Read_LstRxnTiMsg500BusHiSpd_Val(uint32 *data);
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Read_WhlPlsPerRevRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Read_WhlRotlStsTiStampReslRaw_Val(uint16 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Write_WhlPlsPerRev_Val(uint8 data);
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Write_WhlRotlStsTiStampResl_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg500BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
float32  TSC_GmMsg500BusHiSpd_Rte_Prm_GmMsg500BusHiSpdWhlRotlStsTiStampReslDft_Val(void);
uint16  TSC_GmMsg500BusHiSpd_Rte_Prm_GmMsg500BusHiSpdMissTiOut_Val(void);
uint8  TSC_GmMsg500BusHiSpd_Rte_Prm_GmMsg500BusHiSpdWhlPlsPerRevDft_Val(void);

/** Per Instance Memories */
float32 *TSC_GmMsg500BusHiSpd_Rte_Pim_GmMsg500BusHiSpdPrevWhlRotlStsTiStampResl(void);
uint32 *TSC_GmMsg500BusHiSpd_Rte_Pim_GmMsg500BusHiSpdPrevRxnTi(void);
uint8 *TSC_GmMsg500BusHiSpd_Rte_Pim_GmMsg500BusHiSpdPrevWhlPlsPerRev(void);



