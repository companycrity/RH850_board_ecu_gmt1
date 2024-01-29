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
 *          File:  TSC_GmMsg180BusChassisExp.h
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
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_LstRxnTiMsg180BusChassisExp_Val(uint32 *data);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlAlvRollgCntrRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlCmdChksRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlDeltaTqCmdActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Read_TqOvrlDeltaTqCmdValRaw_Val(uint16 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_EscCmd_Val(float32 data);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_EscReqActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_InvldMsg180BusChassisExp_Logl(boolean data);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Write_MissMsg180BusChassisExp_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg180BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpInvldProtnValTiOut_Val(void);
uint16  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpMissTiOut_Val(void);
uint16  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpRollgCntrInvldTiOut_Val(void);
sint8  TSC_GmMsg180BusChassisExp_Rte_Prm_GmMsg180BusChassisExpTqPolarity_Val(void);

/** Per Instance Memories */
float32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevEscCmd(void);
uint32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpInvldProtnValTmr(void);
uint32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpInvldRollgCntrTmr(void);
uint32 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevRxnTi(void);
uint8 *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevRollgCntrVal(void);
boolean *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevEscCmdActv(void);
boolean *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpPrevInvld(void);
boolean *TSC_GmMsg180BusChassisExp_Rte_Pim_GmMsg180BusChassisExpRollgCntrRst(void);



