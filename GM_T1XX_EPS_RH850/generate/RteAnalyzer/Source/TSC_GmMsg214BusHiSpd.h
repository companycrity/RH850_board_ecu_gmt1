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
 *          File:  TSC_GmMsg214BusHiSpd.h
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
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_AbsActvProtdProtnValRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_AbsActvProtdRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_AbsActvProtdRollgCntrRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_LstRxnTiMsg214_Val(uint32 *data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_RdntVehStabyEnhmtSysActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Read_VehStabyEnhmtActv_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_AbsInvld_Logl(boolean data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_AbsProtd_Logl(boolean data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_MissMsg214_Logl(boolean data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_RdntVehStabyEnhmtActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_VehStabyEnhmtActvMsg214_Logl(boolean data);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Write_VehStabyEnhmtInvld_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg214BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val(void);
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val(void);
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val(void);
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdMissTiOut_Val(void);
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val(void);
uint16  TSC_GmMsg214BusHiSpd_Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr(void);
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr(void);
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr(void);
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdPrevRxnTi(void);
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr(void);
uint32 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr(void);
uint8 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal(void);
uint8 *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal(void);
boolean *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdPrevAbsProtd(void);
boolean *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld(void);
boolean *TSC_GmMsg214BusHiSpd_Rte_Pim_GmMsg214BusHiSpdRollgCntrRst(void);



