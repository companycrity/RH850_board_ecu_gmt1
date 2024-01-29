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
 *          File:  TSC_GmMsg0C5BusHiSpd.h
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
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlDstPlsCntrRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlDstTiStampRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlDstVldRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlRotlStsRstRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LeWhlSeqNrRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_LstRxnTiMsg0C5BusHiSpd_Val(uint32 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlDstPlsCntrRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlDstTiStampRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlDstVldRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlRotlStsRstRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Read_RiWhlSeqNrRaw_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_LeWhlDstPlsCntr_Val(uint16 data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_LeWhlDstTiStamp_Val(uint16 data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_LeWhlDstVld_Logl(boolean data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_RiWhlDstPlsCntr_Val(uint16 data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_RiWhlDstTiStamp_Val(uint16 data);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Write_RiWhlDstVld_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg0C5BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdInvldTiOut_Val(void);
uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdMissTiOut_Val(void);
uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdRstTiOut_Val(void);
uint16  TSC_GmMsg0C5BusHiSpd_Rte_Prm_GmMsg0C5BusHiSpdSeqNrTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdLeInvldTmr(void);
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdLeRstTmr(void);
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdLeSeqNrTmr(void);
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRxnTi(void);
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRiInvldTmr(void);
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRiRstTmr(void);
uint32 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRiSeqNrTmr(void);
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt(void);
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp(void);
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt(void);
uint16 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp(void);
uint8 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeSeqNr(void);
uint8 *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiSeqNr(void);
boolean *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevLeVld(void);
boolean *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdPrevRiVld(void);
boolean *TSC_GmMsg0C5BusHiSpd_Rte_Pim_GmMsg0C5BusHiSpdRollgCntrRst(void);



