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
 *          File:  TSC_GmMsg1E9BusHiSpd.h
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
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_AbsActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_AbsFaildRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_LstRxnTiMsg1E9_Val(uint32 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_RdntVehStabyEnhmtActv_Logl(boolean *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_TracCtrlSysActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_TracCtrlSysEnaRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehDynCtrlSysStRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehDynYawRateRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehDynYawRateVldRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehStabyEnhmtActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehStabyEnhmtLatARaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Read_VehStabyEnhmtLatAVldRaw_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_InvldMsg1E9_Logl(boolean data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_MissMsg1E9_Logl(boolean data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComAbsActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComLatA_Val(float32 data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComTcsActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComYawRate_Val(float32 data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_SerlComYawRateVld_Logl(boolean data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_VehLatAVldSerlCom_Logl(boolean data);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Write_VehStabyEnhmtActv_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg1E9BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
float32  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdLatADft_Val(void);
float32  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdYawRateDft_Val(void);
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdAbsFaildTiOut_Val(void);
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdLatAInvldTiOut_Val(void);
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdMissTiOut_Val(void);
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdTcsDisadTiOut_Val(void);
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val(void);
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val(void);
uint16  TSC_GmMsg1E9BusHiSpd_Rte_Prm_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdAbsFaildTmr(void);
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdLatAInvldTmr(void);
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr(void);
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdTcsEnaTmr(void);
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr(void);
uint32 *TSC_GmMsg1E9BusHiSpd_Rte_Pim_GmMsg1E9BusHiSpdYawRateInvldTmr(void);



