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
 *          File:  TSC_SerlComOutpProxy.h
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
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_CodSupported_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_CurrSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetdProtnVal_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetdRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetdVld_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcFailrTyp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcFltTyp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcNr_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcSrc_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcTrig_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPowerSteerAvlSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPowerSteerAvlStsProtnVal_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPowerSteerAvlStsRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPwrSteerTotTqDlvd_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HandsOffSteerWhlDetnMod_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HandsOffSteerWhlDetnSt_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HandsOffSteerWhlDetnStVld_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HistSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaDrvrAppldTq_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaDrvrAppldTqVld_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaElecPwrSteerTotTqDlvd_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlDeltaTqDlvd_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlDlvdRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlStsChks_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlTqDlvdSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_PwrSteerIndcr_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerAssiLimd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerAssiLimdLvl2_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerAssiLimdLvl3_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgAlvRollgCntBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgAlvRollgCntBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgBusChassisExp_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgBusHiSpd_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtBusChassisExp_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtBusHiSpd_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtMaskBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtMaskBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtVldBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtVldBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgMaskBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgMaskBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrCalStsBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrCalStsBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrChksBusChassisExp_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrChksBusHiSpd_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrTypBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrTypBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgVldBusChassisExp_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgVldBusHiSpd_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlDeltaTqDlvd_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlDlvdChks_Val(uint16 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlDlvdRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlTqDlvdSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstFaildCodClrdSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstFaildPwrUpSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstNotPassdCodClrdSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstNotPassdPwrUpSts_Val(uint8 *data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_WarnIndcrReqdSts_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_SerlComOutpProxy_Rte_Write_BusOffChassisExp_Logl(boolean data);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Write_BusOffHiSpd_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg184TxCallBack_Oper(void);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg1CATxCallBack_Oper(void);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg1E5ChassisExpTxCallBack_Oper(void);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg1E5HiSpdTxCallBack_Oper(void);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg335TxCallBack_Oper(void);
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
boolean  TSC_SerlComOutpProxy_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void);
boolean  TSC_SerlComOutpProxy_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void);
boolean  TSC_SerlComOutpProxy_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void);

/** Per Instance Memories */
boolean *TSC_SerlComOutpProxy_Rte_Pim_BusOffChassisExp(void);
boolean *TSC_SerlComOutpProxy_Rte_Pim_BusOffHiSpd(void);



