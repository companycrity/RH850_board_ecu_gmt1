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
 *          File:  TSC_GmOvrlStMgr.h
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
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_AbsActvProtd_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_ApaEna_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_EscEna_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_EscLimdActv_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgEotCcw_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgEotCw_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgTar_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgTraj_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwAgTrajEna_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwHaptcEna_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_LkaEna_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_LkaTqCmdCdnd_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_LoaSt_Val(LoaSt1 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_MfgOvrlDi_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg17DBusHiSpdInvld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg17DBusHiSpdMiss_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusChassisExpInvld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusChassisExpMiss_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusHiSpdInvld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg180BusHiSpdMiss_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg1E9BusHiSpdInvld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg1E9BusHiSpdMiss_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg1F5BusHiSpdInvld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg214BusHiSpdInvld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg214BusHiSpdMiss_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg337BusChassisExpInvld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_Msg337BusChassisExpMiss_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_ShiftLvrRvs_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_SysSt_Val(SysSt1 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMax_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMaxVld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMin_Val(float32 *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMinVld_Logl(boolean *data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Read_VehStabyEnhmtActv_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_ApaDrvrIntvDetd_Logl(boolean data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_ApaSt_Val(uint8 data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_EscSt_Val(uint8 data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwAgServoCmd_Val(float32 data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwAgServoEna_Logl(boolean data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwOscnEna_Logl(boolean data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwOscnFrq_Val(float32 data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwOscnMotAmp_Val(float32 data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_HwTqOscSt_Val(uint8 data);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Write_LkaSt_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Service interfaces */
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Explicit inter-runnable variables */
void TSC_GmOvrlStMgr_Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(uint16);
uint16 TSC_GmOvrlStMgr_Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl(void);

/** Calibration Component Calibration Parameters */
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqThd_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcAmp_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcFrq_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val(void);
float32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillThd_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcDurn_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(void);
uint32  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(void);
uint16  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val(void);
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl(void);
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void);
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void);
boolean  TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void);
Ary1D_u2p14_8 * TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(void);
Ary1D_u10p6_8 * TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(void);

/** Per Instance Memories */
uint32 *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi(void);
uint32 *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi(void);
uint16 *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr(void);
uint8 *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr(void);
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt(void);
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt(void);
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt(void);
uint8 *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs(void);
boolean *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill(void);
FilLpRec1 *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil(void);
FilLpRec1 *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil(void);
FilLpRec1 *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil(void);



