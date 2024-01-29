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
 *          File:  TSC_HwAgSnsrls.h
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
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_CmplncErrMotToPinion_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotAgCumvAlgndCrf_Val(s18p13 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotAgCumvAlgndVld_Logl(boolean *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotTqCmdCrf_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_PinionAg_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_PinionAgConf_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_VehSpdVld_Logl(boolean *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_VehYawRate_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_WhlFrqVld_Logl(boolean *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_WhlLeFrq_Val(float32 *data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Read_WhlRiFrq_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAgSnsrls_Rte_Write_HwAgSnsrls_Val(float32 data);
Std_ReturnType TSC_HwAgSnsrls_Rte_Write_HwAgSnsrlsConf_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Service interfaces */
Std_ReturnType TSC_HwAgSnsrls_Rte_Call_NvmStordLstPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Explicit inter-runnable variables */
void TSC_HwAgSnsrls_Rte_IrvWrite_HwAgSnsrlsInit1_StordHwAg(float32);
void TSC_HwAgSnsrls_Rte_IrvWrite_HwAgSnsrlsInit1_StordHwConf(float32);
float32 TSC_HwAgSnsrls_Rte_IrvRead_HwAgSnsrlsPer1_StordHwAg(void);
float32 TSC_HwAgSnsrls_Rte_IrvRead_HwAgSnsrlsPer1_StordHwConf(void);

/** Calibration Component Calibration Parameters */
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsCorrdPinionAgHwConf_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsFCentrHwConf_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsPinionTqFilFrq_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsRelHwAgFil1Frq_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsRelHwAgFil2Frq_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsSmotngCoeff_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsSmotngStepThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsStordPinionConf_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsStordPinionConfThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynDifThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynHwConf_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynMotVelThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynPinionTqThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynVehSpdThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynYawRateThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlFrqThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff1_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff2_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwAgThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdHwConf_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdRatThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdVehSpdThd_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsYawRateFilFrq_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_SysGlbPrmSysKineRat_Val(void);
float32  TSC_HwAgSnsrls_Rte_Prm_SysGlbPrmSysTqRat_Val(void);
uint32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynTmr1Thd_Val(void);
uint32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val(void);
uint32  TSC_HwAgSnsrls_Rte_Prm_HwAgSnsrlsWhlSpdTmrThd_Val(void);

/** SW-C local Calibration Parameters */
StordLstPrmRec1 * TSC_HwAgSnsrls_Rte_CData_StordLstPrmDft(void);

/** Per Instance Memories */
float32 *TSC_HwAgSnsrls_Rte_Pim_CorrdPinionAgHwAgOffs(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_CorrdPinionAgHwConf(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_FCentrHwAgOffs(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_FCentrHwConf(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_MotAgOffs(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevFildRelHwAg1(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevHwAgOffs(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevMaxHwConf(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_PrevSmotngHwAg(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_VehDynHwAgOffs(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_WhlSpdHwAgOffs(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_WhlSpdHwConf(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsStordHwAg(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsStordHwConf(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsVehDynHwConf(void);
float32 *TSC_HwAgSnsrls_Rte_Pim_dHwAgSnsrlsWhlSpdHwConf(void);
uint32 *TSC_HwAgSnsrls_Rte_Pim_VehDynRefTmr1(void);
uint32 *TSC_HwAgSnsrls_Rte_Pim_VehDynRefTmr2(void);
uint32 *TSC_HwAgSnsrls_Rte_Pim_WhlSpdRefTmr(void);
uint8 *TSC_HwAgSnsrls_Rte_Pim_SelnCaseSt(void);
boolean *TSC_HwAgSnsrls_Rte_Pim_FCentrHwAgEna(void);
boolean *TSC_HwAgSnsrls_Rte_Pim_MotAgOffsEna(void);
boolean *TSC_HwAgSnsrls_Rte_Pim_PrevSmotngSt(void);
boolean *TSC_HwAgSnsrls_Rte_Pim_PrevVehDynFil1Ena(void);
boolean *TSC_HwAgSnsrls_Rte_Pim_PrevVehDynFil2Ena(void);
boolean *TSC_HwAgSnsrls_Rte_Pim_WhlSpdHwAgLrndEna(void);
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_PinionTqFil(void);
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_RelHwAgFil1(void);
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_RelHwAgFil2(void);
StordLstPrmRec1 *TSC_HwAgSnsrls_Rte_Pim_StordLstPrm(void);
FilLpRec1 *TSC_HwAgSnsrls_Rte_Pim_YawRateFil(void);



