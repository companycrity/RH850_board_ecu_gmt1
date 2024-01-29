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
 *          File:  TSC_GmMsg0C9BusHiSpd.h
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
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_EngRunActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_EngSpdRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_EngSpdStsRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_LstRxnTiMsg0C9_Val(uint32 *data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_PtCrkActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Read_VehSpdVld_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_EngRunActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_EngSpd_Val(float32 data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_EngSpdStsNorm_Logl(boolean data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_InvldMsg0C9_Logl(boolean data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_MissMsg0C9_Logl(boolean data);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Write_PtCrkActv_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg0C9BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
float32  TSC_GmMsg0C9BusHiSpd_Rte_Prm_GmMsg0C9BusHiSpdVehSpdThd_Val(void);
uint16  TSC_GmMsg0C9BusHiSpd_Rte_Prm_GmMsg0C9BusHiSpdInvldTiOut_Val(void);
uint16  TSC_GmMsg0C9BusHiSpd_Rte_Prm_GmMsg0C9BusHiSpdMissTiOut_Val(void);

/** Per Instance Memories */
float32 *TSC_GmMsg0C9BusHiSpd_Rte_Pim_GmMsg0C9BusHiSpdPrevEndSpd(void);
uint32 *TSC_GmMsg0C9BusHiSpd_Rte_Pim_GmMsg0C9BusHiSpdInvldMsgTmr(void);
boolean *TSC_GmMsg0C9BusHiSpd_Rte_Pim_GmMsg0C9BusHiSpdPrevEngRunActv(void);



