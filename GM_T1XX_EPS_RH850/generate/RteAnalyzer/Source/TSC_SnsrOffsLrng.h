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
 *          File:  TSC_SnsrOffsLrng.h
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
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwAgAuthy_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwVel_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehSpdVld_Logl(boolean *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwAgAuthy_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwVel_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_MotTqCmdCrf_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehSpdVld_Logl(boolean *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehYawRate_Val(float32 *data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehYawRateVld_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_SnsrOffsLrng_Rte_Write_HwAgOffs_Val(float32 data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Write_HwTqOffs_Val(float32 data);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Write_VehYawRateOffs_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);

/** Service interfaces */
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Explicit inter-runnable variables */
void TSC_SnsrOffsLrng_Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(uint8);
uint8 TSC_SnsrOffsLrng_Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts(void);

/** Calibration Component Calibration Parameters */
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val(void);
float32  TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val(void);
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val(void);
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val(void);
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val(void);
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val(void);
uint8  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val(void);
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl(void);
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl(void);
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl(void);
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl(void);

/** Per Instance Memories */
float32 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd(void);
uint32 *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef(void);
uint32 *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef(void);
uint16 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop(void);
uint8 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld(void);
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna(void);
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil(void);
SnsrLrndOffsRec1 *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1(void);
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2(void);



