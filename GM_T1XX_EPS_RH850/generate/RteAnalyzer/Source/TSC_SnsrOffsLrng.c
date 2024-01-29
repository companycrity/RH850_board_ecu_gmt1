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
 *          File:  TSC_SnsrOffsLrng.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_SnsrOffsLrng.h"
#include "TSC_SnsrOffsLrng.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}


     // Service calls
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg)
{
  return Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(RamBlockStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables









Std_ReturnType TSC_SnsrOffsLrng_Rte_Write_HwAgOffs_Val(float32 data)
{
  return Rte_Write_HwAgOffs_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Write_HwTqOffs_Val(float32 data)
{
  return Rte_Write_HwTqOffs_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Write_VehYawRateOffs_Val(float32 data)
{
  return Rte_Write_VehYawRateOffs_Val(data);
}





     // Client Server Interfaces:


     // Service calls
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
{
  return Rte_Call_SnsrOffsLrnd_GetErrorStatus(ErrorStatus_Arg);
}


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwAg_Val(float32 *data)
{
  return Rte_Read_HwAg_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwAgAuthy_Val(float32 *data)
{
  return Rte_Read_HwAgAuthy_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_HwVel_Val(float32 *data)
{
  return Rte_Read_HwVel_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehSpd_Val(float32 *data)
{
  return Rte_Read_VehSpd_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehSpdVld_Logl(boolean *data)
{
  return Rte_Read_VehSpdVld_Logl(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_SnsrOffsLrng_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables

void TSC_SnsrOffsLrng_Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(uint8 data)
{
  Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts( data);
}





Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_MotTqCmdCrf_Val(float32 *data)
{
  return Rte_Read_MotTqCmdCrf_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehYawRate_Val(float32 *data)
{
  return Rte_Read_VehYawRate_Val(data);
}

Std_ReturnType TSC_SnsrOffsLrng_Rte_Read_VehYawRateVld_Logl(boolean *data)
{
  return Rte_Read_VehYawRateVld_Logl(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables
uint8 TSC_SnsrOffsLrng_Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts(void)
{
return Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts();
}





float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val(void)
{
  return (float32 ) Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
}
float32  TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val(void)
{
  return (float32 ) Rte_Prm_SysGlbPrmSysTqRat_Val();
}
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val(void)
{
  return (uint16 ) Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
}
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val(void)
{
  return (uint16 ) Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
}
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val(void)
{
  return (uint16 ) Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
}
uint16  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val(void)
{
  return (uint16 ) Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
}
uint8  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val(void)
{
  return (uint8 ) Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
}
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl(void)
{
  return (boolean ) Rte_Prm_SnsrOffsLrngFctEna_Logl();
}
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl(void)
{
  return (boolean ) Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
}
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl(void)
{
  return (boolean ) Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
}
boolean  TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl(void)
{
  return (boolean ) Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();
}


     /* SnsrOffsLrng */
      /* SnsrOffsLrng */

/** Per Instance Memories */
float32 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev(void)
{
  return Rte_Pim_HwAgLrngDrvgDstPrev();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi(void)
{
  return Rte_Pim_TqInpDetnEnaTi();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc(void)
{
  return Rte_Pim_TqInpDetnHwTqPreProc();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg(void)
{
  return Rte_Pim_TqInpDetnSinGenrAg();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1(void)
{
  return Rte_Pim_TqInpDetnStg1FilSt1();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2(void)
{
  return Rte_Pim_TqInpDetnStg1FilSt2();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1(void)
{
  return Rte_Pim_TqInpDetnStg2CenFilSt1();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2(void)
{
  return Rte_Pim_TqInpDetnStg2CenFilSt2();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1(void)
{
  return Rte_Pim_TqInpDetnStg2DwnFilSt1();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2(void)
{
  return Rte_Pim_TqInpDetnStg2DwnFilSt2();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1(void)
{
  return Rte_Pim_TqInpDetnStg2UpFilSt1();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2(void)
{
  return Rte_Pim_TqInpDetnStg2UpFilSt2();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi(void)
{
  return Rte_Pim_YawLrngElpdLrngTi();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev(void)
{
  return Rte_Pim_YawRatePrev();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgFild();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild(void)
{
  return Rte_Pim_dSnsrOffsLrngHwVelFild();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild(void)
{
  return Rte_Pim_dSnsrOffsLrngSysTqFild();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild(void)
{
  return Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp(void)
{
  return Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA(void)
{
  return Rte_Pim_dSnsrOffsLrngYawA();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw(void)
{
  return Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild(void)
{
  return Rte_Pim_dSnsrOffsLrngYawRateFild();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd(void)
{
  return Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
}
uint32 *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef(void)
{
  return Rte_Pim_HwTqLrngEnaTmrRef();
}
uint32 *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef(void)
{
  return Rte_Pim_HwTqLrngMeasTmrRef();
}
uint16 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop(void)
{
  return Rte_Pim_TqInpDetnPreProcEnaLoop();
}
uint8 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx(void)
{
  return Rte_Pim_TqInpDetnStg1Idx();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst(void)
{
  return Rte_Pim_HwAgLrngStRst();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst(void)
{
  return Rte_Pim_HwTqLrngStRst();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev(void)
{
  return Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt(void)
{
  return Rte_Pim_HwTqLrngTqInpPrsnt();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst(void)
{
  return Rte_Pim_VehYawRateLrngStRst();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh(void)
{
  return Rte_Pim_VehYawRateOffsFrsh();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt(void)
{
  return Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld(void)
{
  return Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw(void)
{
  return Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld(void)
{
  return Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
}
boolean *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna(void)
{
  return Rte_Pim_dSnsrOffsLrngYawLrngEna();
}
float32 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(void)
{
  return Rte_Pim_TqInpDetnStg1Buf();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil(void)
{
  return Rte_Pim_HwAgCdngFil();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1(void)
{
  return Rte_Pim_HwAgLrngFil1();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2(void)
{
  return Rte_Pim_HwAgLrngFil2();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1(void)
{
  return Rte_Pim_HwAgLrngSysTqFil1();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2(void)
{
  return Rte_Pim_HwAgLrngSysTqFil2();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1(void)
{
  return Rte_Pim_HwAgMeasFil1();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2(void)
{
  return Rte_Pim_HwAgMeasFil2();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1(void)
{
  return Rte_Pim_HwTqMeasFil1();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2(void)
{
  return Rte_Pim_HwTqMeasFil2();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil(void)
{
  return Rte_Pim_HwVelCdngFil();
}
SnsrLrndOffsRec1 *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd(void)
{
  return Rte_Pim_SnsrOffsLrnd();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil(void)
{
  return Rte_Pim_SysTqCdngFil();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil(void)
{
  return Rte_Pim_TqInpDetnHwTqFil();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil(void)
{
  return Rte_Pim_YawACdngFil();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1(void)
{
  return Rte_Pim_YawCdngFil1();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2(void)
{
  return Rte_Pim_YawCdngFil2();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1(void)
{
  return Rte_Pim_YawLrngFil1();
}
FilLpRec1 *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2(void)
{
  return Rte_Pim_YawLrngFil2();
}


