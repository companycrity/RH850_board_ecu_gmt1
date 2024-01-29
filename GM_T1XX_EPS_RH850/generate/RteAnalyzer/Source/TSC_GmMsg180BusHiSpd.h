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
 *          File:  TSC_GmMsg180BusHiSpd.h
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
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdProtnValRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdRollgCntrRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdTqReqActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LkaCmdTqValRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Read_LstRxnTiMsg180BusHiSpd_Val(uint32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_InvldMsg180BusHiSpd_Logl(boolean data);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_LkaCmd_Val(float32 data);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_LkaReqActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Write_MissMsg180BusHiSpd_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg180BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdCrcInvldTiOut_Val(void);
uint16  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdMissTiOut_Val(void);
uint16  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdRollgCntrInvldTiOut_Val(void);
sint8  TSC_GmMsg180BusHiSpd_Rte_Prm_GmMsg180BusHiSpdTqPolarity_Val(void);

/** Per Instance Memories */
float32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevTqCmd(void);
uint32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdInvldCrcTmr(void);
uint32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdInvldRollgCntrTmr(void);
uint32 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevRxnTi(void);
uint8 *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevRollgCntrVal(void);
boolean *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevInvld(void);
boolean *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdPrevTqReq(void);
boolean *TSC_GmMsg180BusHiSpd_Rte_Pim_GmMsg180BusHiSpdRollgCntrRst(void);



