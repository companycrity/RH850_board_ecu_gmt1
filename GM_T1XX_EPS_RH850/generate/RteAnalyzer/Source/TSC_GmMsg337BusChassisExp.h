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
 *          File:  TSC_GmMsg337BusChassisExp.h
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
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_LstRxnTiMsg337BusChassisExp_Val(uint32 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqActvVldRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqProtnValRaw_Val(uint32 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqRollgCntrRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlAgReqTarAgRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlFbReqActvProtnValRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlFbReqActvRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Read_SteerWhlFbReqActvRollgCntrRaw_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_ApaReqActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_FbReqActv_Logl(boolean data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_InvldMsg337_Logl(boolean data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_MissMsg337_Logl(boolean data);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Write_SteerWhlAgReqTarAg_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg337BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpInvldDiagcTiOut_Val(void);
uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpInvldProtnValTiOut_Val(void);
uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val(void);
uint16  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpMissTiOut_Val(void);
sint8  TSC_GmMsg337BusChassisExp_Rte_Prm_GmMsg337BusChassisExpTarAgPolarity_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr(void);
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr(void);
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpFbProtnValInvldTmr(void);
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr(void);
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpInvldTmr(void);
uint32 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevRxnTi(void);
uint8 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal(void);
uint8 *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal(void);
boolean *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpPrevInvld(void);
boolean *TSC_GmMsg337BusChassisExp_Rte_Pim_GmMsg337BusChassisExpRollgCntrRst(void);



