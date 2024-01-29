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
 *          File:  TSC_GmRoadWhlInQlfr.h
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
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlLeDstPlsCntr_Val(uint16 *data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlLeDstTiStamp_Val(uint16 *data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlLeDstVld_Logl(boolean *data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlPlsPerRev_Val(uint8 *data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRiDstPlsCntr_Val(uint16 *data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRiDstTiStamp_Val(uint16 *data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRiDstVld_Logl(boolean *data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Read_WhlRotlStsTiStampResl_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Write_WhlFrqVld_Logl(boolean data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Write_WhlLeFrq_Val(float32 data);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Write_WhlRiFrq_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_GmRoadWhlInQlfr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_GmRoadWhlInQlfr_Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val(void);
float32  TSC_GmRoadWhlInQlfr_Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val(void);

/** Per Instance Memories */
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevLeWhlFrq(void);
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRawLeWhlFrq(void);
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRawRiWhlFrq(void);
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRiWhlFrq(void);
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq(void);
float32 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq(void);
uint32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldTiLeFrqChg(void);
uint32 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldTiRiFrqChg(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldLeWhlDstPlsCntr(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldLeWhlDstTiStamp(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldRiWhlDstPlsCntr(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevVldRiWhlDstTiStamp(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls(void);
uint16 *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp(void);
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevLeWhlFrqVld(void);
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_PrevRiWhlFrqVld(void);
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld(void);
boolean *TSC_GmRoadWhlInQlfr_Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld(void);



