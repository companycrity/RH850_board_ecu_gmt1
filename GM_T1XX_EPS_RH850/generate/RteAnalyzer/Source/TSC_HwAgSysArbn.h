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
 *          File:  TSC_HwAgSysArbn.h
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
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_CmplncErrMotToPinion_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_CmplncErrPinionToHw_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgCorrd_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgIdptSig_Val(uint8 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgSnsrls_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwAgSnsrlsConf_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Read_MotVelVld_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgFinal_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgNotCorrd_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgToSerlCom_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwAgVldToSerlCom_Logl(boolean data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwVel_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_HwVelToSerlCom_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionAg_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionAgConf_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionVel_Val(float32 data);
Std_ReturnType TSC_HwAgSysArbn_Rte_Write_PinionVelConf_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_HwAgSysArbn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgSlewRate_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnSlewRateTmr_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_SysGlbPrmSysKineRat_Val(void);
float32  TSC_HwAgSysArbn_Rte_Prm_SysGlbPrmTorsBarStfn_Val(void);
uint32  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val(void);
uint16  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val(void);
uint16  TSC_HwAgSysArbn_Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val(void);

/** Per Instance Memories */
float32 *TSC_HwAgSysArbn_Rte_Pim_HwAgPrev(void);
float32 *TSC_HwAgSysArbn_Rte_Pim_PrevHwAgNotCorrd(void);
float32 *TSC_HwAgSysArbn_Rte_Pim_PrevPinionAgConf(void);
float32 *TSC_HwAgSysArbn_Rte_Pim_PrevSeldHwAg(void);
float32 *TSC_HwAgSysArbn_Rte_Pim_SeldHwAgConf(void);
float32 *TSC_HwAgSysArbn_Rte_Pim_TqSnsrAgPrev(void);
uint32 *TSC_HwAgSysArbn_Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr(void);
uint32 *TSC_HwAgSysArbn_Rte_Pim_SlewElpdRefTmr(void);
sint8 *TSC_HwAgSysArbn_Rte_Pim_PrevSrcSeln(void);
boolean *TSC_HwAgSysArbn_Rte_Pim_HwAgCorrdLtch(void);
boolean *TSC_HwAgSysArbn_Rte_Pim_HwAgKineFlt(void);
boolean *TSC_HwAgSysArbn_Rte_Pim_HwAgToMotAgCorrln(void);
boolean *TSC_HwAgSysArbn_Rte_Pim_SlewSts(void);
FilLpRec1 *TSC_HwAgSysArbn_Rte_Pim_TqSnsrVelFil(void);



