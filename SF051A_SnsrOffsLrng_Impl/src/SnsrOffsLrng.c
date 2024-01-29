/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SnsrOffsLrng.c
 *     SW-C Type:  SnsrOffsLrng
 *  Generated at:  Thu Dec  8 10:26:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SnsrOffsLrng>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/****************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name  : SnsrOffsLrng.c
* Module Description: Sensor Offset learning
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version          : 6 %
* %derived_by       : nz2554 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                        SCR #
* -------   -------  --------  -------------------------------------------------------------------------  ------------
* 02/08/16   1       Selva           SF51 v1 Initial Creation                                               EA4#3126
* 03/04/16   2       KK              Updates as per SF051A_SnsrOffsLrng_Design_1.2.0                        EA4#4059
* 06/13/16   3       NS              Added requirement traceability                                         EA4#5910
* 08/17/16   4,5     NS              Updated per FDD v1.4.0                                                 EA4#6809
* 12/07/16   6       SR              Updated per FDD v1.5.0, Fixes for anomaly EA4#7658                     EA4#7859
*---------------------------------------------------------------------------------------------------------------------
*/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  s10p5
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s11p4
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s3p12
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s5p10
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s6p9
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

 *********************************************************************************************************************/

#include "Rte_SnsrOffsLrng.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "SysGlbPrm.h"
#include "NxtrFil.h" 

#define CNV100MICROSECTOSEC_SECPERCNT_F32           0.0001F
#define CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32 0.1F
#define COVRAMTRXNIT_ULS_F32                        2000.0F
#define HWAUTHYTHD_ULS_F32                          0.99F
#define HWTQLRNGSTSLRND_CNT_U08                     4U
#define HWTQLRNGSTSNEGOFFS_CNT_U08                  2U
#define HWTQLRNGSTSNOTLRND_CNT_U08                  0U
#define HWTQLRNGSTSPOSOFFS_CNT_U08                  1U
#define HWTQLRNGSTSZEROOFFS_CNT_U08                 3U
#define HWTQLRNGTMRHILIM_SEC_F32                    1023.0F 
#define IVS10MS_ULSPERSEC_F32                       100.0F 
#define LRNGFILTICON_ULS_F32                        1.099403F 
#define SPDCNVN_MTRPERSECPERKPH_F32                 0.2778F 
#define TISTEP10MS_MINS_F32                         1.6667e-04F 
#define TQINPDETNLOGGAIN_ULS_F32                    10.0F 
#define TQINPDETNLOGINPHILIM_ULS_F32                1000.0F 
#define TQINPDETNLOGINPLOLIM_ULS_F32                2.32831e-10F 
#define YAWELPDTIHILIM_MINS_F32                     1440.0F 
#define YAWRATENOISE_VEHDEGPERSEC_F32               0.2F 
#define MTRXSIZE_CNT_U08                            3U                            
#define ZERO_ULS_F32                                0.0F
#define ONE_ULS_F32                                 1.0F


#define  HWTQOFFSHILIM_HWNWTMTR_F32                 4.0F
#define  HWTQOFFSLOLIM_HWNWTMTR_F32                (-4.0F) 
#define  VEHYAWRATEOFFSHILIM_VEHDEGPERSEC_F32        20.0F
#define  VEHYAWRATEOFFSLOLIM_VEHDEGPERSEC_F32      (-20.0F)  
#define  HWAGOFFSHILIM_HWDEG_F32                     30.0F
#define  HWAGOFFSLOLIM_HWDEG_F32                    (-30.0F) 

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */  
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

static  FUNC(void, SNSROFFSLRNG_CODE) LearnHwAg(boolean HwAgLrngLrngCdnVld_Cnt_T_logl, 
                                                boolean HwAgLrngEna_Cnt_T_logl, 
                                                float32 SysTqFild_HwNm_T_f32,
                                                float32 HandwheelPosition_HwDeg_T_f32 );

static  FUNC(void, SNSROFFSLRNG_CODE)SOaCHierarchyManager(P2VAR(boolean, AUTOMATIC, AUTOMATIC) EnableYOC_Cnt_T_logl, 
                                                          P2VAR(boolean, AUTOMATIC, AUTOMATIC) HwAgLrngEna_Cnt_T_logl, 
                                                          P2VAR(boolean, AUTOMATIC, AUTOMATIC) HwAgLrngRst_Cnt_T_logl);

static  FUNC(void, SNSROFFSLRNG_CODE)Perform_TqInpDetn(void);

static  FUNC(boolean, SNSROFFSLRNG_CODE)EnableLearning(void);

static  FUNC(void, SNSROFFSLRNG_CODE)EnablePreProcessing(float32 HwTqPreproc_dB_T_f32, 
                                                         uint16  SampleCntrLim_Cnt_T_u16, 
                                                         P2VAR(boolean, AUTOMATIC, AUTOMATIC) TqInpPrsntVld_Cnt_T_logl, 
                                                         P2VAR(boolean, AUTOMATIC, AUTOMATIC) TqInpPrsnt_Cnt_T_logl);

static  FUNC(void, SNSROFFSLRNG_CODE) CalculateKVector(const float32 TqMdlXAry_HwRadpS_T_f32[3],
                                                       P2VAR(float32, AUTOMATIC, AUTOMATIC) KVect_Uls_T_f32);

static  FUNC(void, SNSROFFSLRNG_CODE)UpdateCovarianceMatrix(const float32 TqMdlXAry_HwRadpS_T_f32[MTRXSIZE_CNT_U08],
                                                            const float32 KVect_Uls_T_f32[MTRXSIZE_CNT_U08]);

static  FUNC(void, SNSROFFSLRNG_CODE)UpdateHwTqOffs(boolean HwTqEstimnVld_Cnt_T_logl, 
                                                    float32 HwTqDriftEstimnOnCentr_HwNm_T_f32);

static  FUNC(void, SNSROFFSLRNG_CODE)UpdateSampleCnt( float32 HwAgMeasd_HwDeg_T_f32);

#define   PimTqInpDetnStg1Buf      (*( Ary1D_f32_72 *)(Rte_Pim_TqInpDetnStg1Buf()))


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Boolean: Boolean
 * s10p5: Integer in interval [-32768...32767]
 * s11p4: Integer in interval [-32768...32767]
 * s3p12: Integer in interval [-32768...32767]
 * s5p10: Integer in interval [-32768...32767]
 * s6p9: Integer in interval [-32768...32767]
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Ary1D_f32_3: Array with 3 element(s) of type float32
 * Ary1D_f32_72: Array with 72 element(s) of type float32
 * Ary2D_f32_3_3: Array with 3 element(s) of type Ary1D_f32_3
 *
 * Record Types:
 * =============
 * SnsrLrndOffsRec1: Record with elements
 *   HwAgLrndTi of type float32
 *   YawRateElpdTi of type float32
 *   HwTqLrngCovariMtrx of type Ary2D_f32_3_3
 *   HwTqLrngEstimnVect of type Ary1D_f32_3
 *   YawRateOffs of type s6p9
 *   HwAgOffs of type s5p10
 *   HwTqOffs of type s3p12
 *   HwAgLrngYawOffsRef of type s6p9
 *   HwAgLrngHwAgFilSt of type s11p4
 *   HwAgLrngSysTqFilSt of type s10p5
 *   HwTqLrngHwAgRef of type s11p4
 *   HwTqLrngSampleCntNeg of type uint16
 *   HwTqLrngSampleCntPos of type uint16
 *   HwTqLrngSts of type uint8
 *   YawRateOffsVld of type boolean
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgLrngDrvgDstPrev(void)
 *   float32 *Rte_Pim_TqInpDetnEnaTi(void)
 *   float32 *Rte_Pim_TqInpDetnHwTqPreProc(void)
 *   float32 *Rte_Pim_TqInpDetnSinGenrAg(void)
 *   float32 *Rte_Pim_TqInpDetnStg1FilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg1FilSt2(void)
 *   float32 *Rte_Pim_TqInpDetnStg2CenFilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg2CenFilSt2(void)
 *   float32 *Rte_Pim_TqInpDetnStg2DwnFilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg2DwnFilSt2(void)
 *   float32 *Rte_Pim_TqInpDetnStg2UpFilSt1(void)
 *   float32 *Rte_Pim_TqInpDetnStg2UpFilSt2(void)
 *   float32 *Rte_Pim_YawLrngElpdLrngTi(void)
 *   float32 *Rte_Pim_YawRatePrev(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwAgFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngHwVelFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngSysTqFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawA(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawRateFild(void)
 *   float32 *Rte_Pim_dSnsrOffsLrngYawRateFildCorrd(void)
 *   uint32 *Rte_Pim_HwTqLrngEnaTmrRef(void)
 *   uint32 *Rte_Pim_HwTqLrngMeasTmrRef(void)
 *   uint16 *Rte_Pim_TqInpDetnPreProcEnaLoop(void)
 *   uint8 *Rte_Pim_TqInpDetnStg1Idx(void)
 *   boolean *Rte_Pim_HwAgLrngStRst(void)
 *   boolean *Rte_Pim_HwTqLrngStRst(void)
 *   boolean *Rte_Pim_HwTqLrngTqInpDetnEnaPrev(void)
 *   boolean *Rte_Pim_HwTqLrngTqInpPrsnt(void)
 *   boolean *Rte_Pim_VehYawRateLrngStRst(void)
 *   boolean *Rte_Pim_VehYawRateOffsFrsh(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngEna(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngRst(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngEna(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngYawLrngCdnVld(void)
 *   boolean *Rte_Pim_dSnsrOffsLrngYawLrngEna(void)
 *   float32 *Rte_Pim_TqInpDetnStg1Buf(void)
 *   FilLpRec1 *Rte_Pim_HwAgCdngFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngFil1(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngFil2(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngSysTqFil1(void)
 *   FilLpRec1 *Rte_Pim_HwAgLrngSysTqFil2(void)
 *   FilLpRec1 *Rte_Pim_HwAgMeasFil1(void)
 *   FilLpRec1 *Rte_Pim_HwAgMeasFil2(void)
 *   FilLpRec1 *Rte_Pim_HwTqMeasFil1(void)
 *   FilLpRec1 *Rte_Pim_HwTqMeasFil2(void)
 *   FilLpRec1 *Rte_Pim_HwVelCdngFil(void)
 *   SnsrLrndOffsRec1 *Rte_Pim_SnsrOffsLrnd(void)
 *   FilLpRec1 *Rte_Pim_SysTqCdngFil(void)
 *   FilLpRec1 *Rte_Pim_TqInpDetnHwTqFil(void)
 *   FilLpRec1 *Rte_Pim_YawACdngFil(void)
 *   FilLpRec1 *Rte_Pim_YawCdngFil1(void)
 *   FilLpRec1 *Rte_Pim_YawCdngFil2(void)
 *   FilLpRec1 *Rte_Pim_YawLrngFil1(void)
 *   FilLpRec1 *Rte_Pim_YawLrngFil2(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawLrngTi_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val(void)
 *   float32 Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val(void)
 *   uint16 Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val(void)
 *   uint8 Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val(void)
 *   boolean Rte_Prm_SnsrOffsLrngFctEna_Logl(void)
 *   boolean Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl(void)
 *   boolean Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl(void)
 *   boolean Rte_Prm_SnsrOffsLrngYawLrngEna_Logl(void)
 *
 *********************************************************************************************************************/


#define SnsrOffsLrng_START_SEC_CODE
#include "SnsrOffsLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetHwAgOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetHwAgOffs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetHwAgOffs_Oper(float32 *HwAgOffs_Arg, boolean *HwAgLrngStRst_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) GetHwAgOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetHwAgOffs_Oper
 *********************************************************************************************************************/
    *HwAgOffs_Arg      = FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwAgOffs, NXTRFIXDPT_P10TOFLOAT_ULS_F32);
    *HwAgLrngStRst_Arg = *Rte_Pim_HwAgLrngStRst();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetHwTqOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetHwTqOffs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetHwTqOffs_Oper(float32 *HwTqOffs_Arg, boolean *HwTqLrngStRst_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) GetHwTqOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetHwTqOffs_Oper
 *********************************************************************************************************************/
    *HwTqOffs_Arg      = FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwTqOffs, NXTRFIXDPT_P12TOFLOAT_ULS_F32);
    *HwTqLrngStRst_Arg = *Rte_Pim_HwTqLrngStRst();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetYawRateOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetYawRateOffs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetYawRateOffs_Oper(float32 *VehYawRateOffs_Arg, boolean *VehYawRateLrngStRst_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) GetYawRateOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetYawRateOffs_Oper
 *********************************************************************************************************************/
    *VehYawRateOffs_Arg      = FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->YawRateOffs, NXTRFIXDPT_P9TOFLOAT_ULS_F32);
    *VehYawRateLrngStRst_Arg = *Rte_Pim_VehYawRateLrngStRst();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstHwTq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstHwTq>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstHwTq_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) RstHwTq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RstHwTq_Oper
 *********************************************************************************************************************/
  Rte_Pim_SnsrOffsLrnd()->HwTqOffs = 0;
  Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg = 0U;
  Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos=0U;
  Rte_Pim_SnsrOffsLrnd()->HwTqLrngSts=0U;
  Rte_Pim_SnsrOffsLrnd()->HwTqLrngHwAgRef = FloatToFixd_s16_f32(SYSGLBPRM_HWAGHILIM_HWDEG_F32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[0]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[1]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[2]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][0]= COVRAMTRXNIT_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][1]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][2]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][0]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][1]= COVRAMTRXNIT_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][2]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][0]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][1]= ZERO_ULS_F32;
 (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][2]= COVRAMTRXNIT_ULS_F32;

  
  Rte_Pim_HwAgMeasFil1()->FilSt = ZERO_ULS_F32;
  Rte_Pim_HwAgMeasFil2()->FilSt = ZERO_ULS_F32;
  Rte_Pim_HwTqMeasFil1()->FilSt = ZERO_ULS_F32;
  Rte_Pim_HwTqMeasFil2()->FilSt = ZERO_ULS_F32;
  Rte_Pim_TqInpDetnHwTqFil()->FilSt = ZERO_ULS_F32;
  
  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngEnaTmrRef());
  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngMeasTmrRef());
  *Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = FALSE;
  *Rte_Pim_HwTqLrngTqInpPrsnt() = TRUE;
  (void)Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstYawAndAg_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstYawAndAg>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstYawAndAg_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) RstYawAndAg_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RstYawAndAg_Oper
 *********************************************************************************************************************/
    Rte_Pim_SnsrOffsLrnd()->YawRateOffs = 0;
    Rte_Pim_SnsrOffsLrnd()->YawRateOffsVld = FALSE;
    Rte_Pim_SnsrOffsLrnd()->YawRateElpdTi = YAWELPDTIHILIM_MINS_F32;
    Rte_Pim_SnsrOffsLrnd()->HwAgOffs = 0;
    Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi = ZERO_ULS_F32;
    Rte_Pim_SnsrOffsLrnd()->HwAgLrngHwAgFilSt = 0;
    Rte_Pim_SnsrOffsLrnd()->HwAgLrngSysTqFilSt = 0;
    Rte_Pim_SnsrOffsLrnd()->HwAgLrngYawOffsRef = 0;
    
    Rte_Pim_YawLrngFil1()->FilSt = ZERO_ULS_F32;
    Rte_Pim_YawLrngFil2()->FilSt = ZERO_ULS_F32;
   *Rte_Pim_YawLrngElpdLrngTi() = ZERO_ULS_F32;
    
    Rte_Pim_HwAgLrngFil1()->FilSt = ZERO_ULS_F32;
    Rte_Pim_HwAgLrngFil2()->FilSt = ZERO_ULS_F32;
    Rte_Pim_HwAgLrngSysTqFil1()->FilSt = ZERO_ULS_F32;
    Rte_Pim_HwAgLrngSysTqFil2()->FilSt = ZERO_ULS_F32;
   
    (void)Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetHwAgOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetHwAgOffs>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetHwAgOffs_Oper
 *********************************************************************************************************************/
  HwAgOffs_Arg = Lim_f32(HwAgOffs_Arg,-Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val(), Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val());
  Rte_Pim_SnsrOffsLrnd()->HwAgOffs = FloatToFixd_s16_f32(HwAgOffs_Arg, NXTRFIXDPT_FLOATTOP10_ULS_F32);
  *Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst_Arg;
 
  if(HwAgLrngStRst_Arg == TRUE)
  { 
      Rte_Pim_HwAgLrngFil1()->FilSt = HwAgOffs_Arg;
      Rte_Pim_HwAgLrngFil2()->FilSt = HwAgOffs_Arg;
      Rte_Pim_HwAgLrngSysTqFil1()->FilSt = ZERO_ULS_F32;
      Rte_Pim_HwAgLrngSysTqFil2()->FilSt = ZERO_ULS_F32;
      Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi = ZERO_ULS_F32;
      Rte_Pim_SnsrOffsLrnd()->HwAgLrngHwAgFilSt = 0;
      Rte_Pim_SnsrOffsLrnd()->HwAgLrngSysTqFilSt = 0;
      Rte_Pim_SnsrOffsLrnd()->HwAgLrngYawOffsRef = Rte_Pim_SnsrOffsLrnd()->YawRateOffs;
  }
 
   (void)Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetHwTqOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetHwTqOffs>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetHwTqOffs_Oper
 *********************************************************************************************************************/
    HwTqOffs_Arg = Lim_f32(HwTqOffs_Arg, -Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val(), Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val());
    Rte_Pim_SnsrOffsLrnd()->HwTqOffs = FloatToFixd_s16_f32(HwTqOffs_Arg, NXTRFIXDPT_FLOATTOP12_ULS_F32);
    *Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst_Arg;
    if(HwTqLrngStRst_Arg == TRUE)
    {
      
      Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg = 0U;
      Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos=0U;
      Rte_Pim_SnsrOffsLrnd()->HwTqLrngSts=0U;
      Rte_Pim_SnsrOffsLrnd()->HwTqLrngHwAgRef = FloatToFixd_s16_f32(SYSGLBPRM_HWAGHILIM_HWDEG_F32,  NXTRFIXDPT_FLOATTOP4_ULS_F32);
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[0]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[1]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[2]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][0]= COVRAMTRXNIT_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][1]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][2]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][0]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][1]= COVRAMTRXNIT_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][2]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][0]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][1]= ZERO_ULS_F32;
      (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][2]= COVRAMTRXNIT_ULS_F32;
      
      Rte_Pim_HwAgMeasFil1()->FilSt = ZERO_ULS_F32;
      Rte_Pim_HwAgMeasFil2()->FilSt = ZERO_ULS_F32;
      Rte_Pim_HwTqMeasFil1()->FilSt = ZERO_ULS_F32;
      Rte_Pim_HwTqMeasFil2()->FilSt = ZERO_ULS_F32;
      Rte_Pim_TqInpDetnHwTqFil()->FilSt = ZERO_ULS_F32;
      
      (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngEnaTmrRef());
      (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngMeasTmrRef());
      *Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = FALSE;
      *Rte_Pim_HwTqLrngTqInpPrsnt() = TRUE;
    } 
    (void)Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetYawRateOffs_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetYawRateOffs>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetYawRateOffs_Oper
 *********************************************************************************************************************/
     VehYawRateOffs_Arg =Lim_f32(VehYawRateOffs_Arg, -Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val(), Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val());
     Rte_Pim_SnsrOffsLrnd()->YawRateOffs = FloatToFixd_s16_f32(VehYawRateOffs_Arg, NXTRFIXDPT_FLOATTOP9_ULS_F32);
     *Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst_Arg; 
     if(VehYawRateLrngStRst_Arg == TRUE)
     {
         Rte_Pim_YawLrngFil1()->FilSt = VehYawRateOffs_Arg;
         Rte_Pim_YawLrngFil2()->FilSt = VehYawRateOffs_Arg;
         *Rte_Pim_YawLrngElpdLrngTi() = ZERO_ULS_F32;
         Rte_Pim_SnsrOffsLrnd()->YawRateElpdTi = ZERO_ULS_F32;   
     }
     (void)Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsLrngInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehYawRateOffs_Val(float32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngInit1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) YawLrngLrngFilFrq_Hz_T_f32; 
    VAR(float32, AUTOMATIC) HwAgLrngFilFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) HwTqLrngFilFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) HwAgOffs_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTqOffs_HwNm_T_f32;
    VAR(float32, AUTOMATIC) VehYawRateOffs_DegpS_T_f32;

    VAR(NvM_RequestResultType,AUTOMATIC) NVMStatusReqRes_Cnt_T_enum;
     
    /**************************Filter Initialisation***************/ 

     /*********** Signal Conditioning filters*****************/ 
    FilLpInit(ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_YawCdngFil1());
    FilLpInit(ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_YawCdngFil2());
    FilLpInit(ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_YawACdngFil());
    FilLpInit(ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwAgCdngFil());
    FilLpInit(ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwVelCdngFil());
    FilLpInit(ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_SysTqCdngFil());


    /***********Offset learning filters****************/
    YawLrngLrngFilFrq_Hz_T_f32 =    LRNGFILTICON_ULS_F32 / Rte_Prm_SnsrOffsLrngYawLrngTi_Val();

    FilLpInit(ZERO_ULS_F32,YawLrngLrngFilFrq_Hz_T_f32, ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_YawLrngFil1());
    FilLpInit(ZERO_ULS_F32,YawLrngLrngFilFrq_Hz_T_f32, ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_YawLrngFil2());


    HwAgLrngFilFrq_Hz_T_f32 = LRNGFILTICON_ULS_F32/ Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
    FilLpInit(ZERO_ULS_F32,HwAgLrngFilFrq_Hz_T_f32, ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwAgLrngFil1());
    FilLpInit(ZERO_ULS_F32,HwAgLrngFilFrq_Hz_T_f32, ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwAgLrngFil2());

    FilLpInit(ZERO_ULS_F32,HwAgLrngFilFrq_Hz_T_f32, ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwAgLrngSysTqFil1());
    FilLpInit(ZERO_ULS_F32,HwAgLrngFilFrq_Hz_T_f32, ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwAgLrngSysTqFil2());

    /******Torque Input Detection Filters******************/

    HwTqLrngFilFrq_Hz_T_f32 = LRNGFILTICON_ULS_F32 / Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
    FilLpInit(ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_TqInpDetnHwTqFil());
    FilLpInit(ZERO_ULS_F32, HwTqLrngFilFrq_Hz_T_f32, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqMeasFil1());
    FilLpInit(ZERO_ULS_F32, HwTqLrngFilFrq_Hz_T_f32, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqMeasFil2());
    FilLpInit(ZERO_ULS_F32, HwTqLrngFilFrq_Hz_T_f32, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwAgMeasFil1());
    FilLpInit(ZERO_ULS_F32, HwTqLrngFilFrq_Hz_T_f32, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwAgMeasFil2());


    /****************NVM Management******************/
    (void)Rte_Call_SnsrOffsLrnd_GetErrorStatus(&NVMStatusReqRes_Cnt_T_enum);

    if(FALSE == Rte_Prm_SnsrOffsLrngFctEna_Logl())
    {   
        /* Not Enabled*/
        HwAgOffs_HwDeg_T_f32 = ZERO_ULS_F32;
        HwTqOffs_HwNm_T_f32 =ZERO_ULS_F32;
        VehYawRateOffs_DegpS_T_f32 = ZERO_ULS_F32;
        
    }
    else if(NVMStatusReqRes_Cnt_T_enum !=  NVM_REQ_OK)
    {  
        /*Data Invalid*/
        HwAgOffs_HwDeg_T_f32 = ZERO_ULS_F32;
        HwTqOffs_HwNm_T_f32 =ZERO_ULS_F32;
        VehYawRateOffs_DegpS_T_f32 = ZERO_ULS_F32; 
        Rte_Pim_SnsrOffsLrnd()->YawRateOffs= 0;
        Rte_Pim_SnsrOffsLrnd()->HwAgOffs= 0;
        Rte_Pim_SnsrOffsLrnd()->HwTqOffs= 0;
        Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi= ZERO_ULS_F32;
        Rte_Pim_SnsrOffsLrnd()->HwAgLrngYawOffsRef= 0;
        Rte_Pim_SnsrOffsLrnd()->YawRateElpdTi= YAWELPDTIHILIM_MINS_F32;
        Rte_Pim_SnsrOffsLrnd()->HwAgLrngHwAgFilSt= 0;
        Rte_Pim_SnsrOffsLrnd()->HwAgLrngSysTqFilSt= 0;
        Rte_Pim_SnsrOffsLrnd()->HwTqLrngHwAgRef= FloatToFixd_s16_f32(SYSGLBPRM_HWAGHILIM_HWDEG_F32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[0]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[1]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[2]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][0]= COVRAMTRXNIT_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][1]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][2]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][0]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][1]= COVRAMTRXNIT_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][2]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][0]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][1]= ZERO_ULS_F32;
        (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][2]= COVRAMTRXNIT_ULS_F32;
        Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg= 0U;
        Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos= 0U;
        Rte_Pim_SnsrOffsLrnd()->HwTqLrngSts= 0U;
        Rte_Pim_SnsrOffsLrnd()->YawRateOffsVld= FALSE;
        (void)Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(TRUE);
    }
    else
    {
        /************Check the naming rules for elements in structure************/
        VehYawRateOffs_DegpS_T_f32 = Lim_f32(FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->YawRateOffs,NXTRFIXDPT_P9TOFLOAT_ULS_F32), -Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val(), Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val()); 
        Rte_Pim_YawLrngFil1()->FilSt = VehYawRateOffs_DegpS_T_f32;
        Rte_Pim_YawLrngFil2()->FilSt = VehYawRateOffs_DegpS_T_f32;  
        
        HwAgOffs_HwDeg_T_f32 = Lim_f32(FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwAgOffs,NXTRFIXDPT_P10TOFLOAT_ULS_F32),-Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val() , Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val());
        
        Rte_Pim_HwAgLrngFil1()->FilSt = FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwAgLrngHwAgFilSt,NXTRFIXDPT_P4TOFLOAT_ULS_F32);
        Rte_Pim_HwAgLrngFil2()->FilSt = Rte_Pim_HwAgLrngFil1()->FilSt; 
        
        Rte_Pim_HwAgLrngSysTqFil1()->FilSt = FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwAgLrngSysTqFilSt,NXTRFIXDPT_P5TOFLOAT_ULS_F32);
        Rte_Pim_HwAgLrngSysTqFil2()->FilSt = Rte_Pim_HwAgLrngSysTqFil1()->FilSt;    
        
        HwTqOffs_HwNm_T_f32 = Lim_f32(FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwTqOffs,NXTRFIXDPT_P12TOFLOAT_ULS_F32), -Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val(), Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val());
        Rte_Pim_HwTqMeasFil1()->FilSt =  HwTqOffs_HwNm_T_f32;
        Rte_Pim_HwTqMeasFil2()->FilSt =  HwTqOffs_HwNm_T_f32;
        (void)Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(TRUE);
    }
    HwAgOffs_HwDeg_T_f32=Lim_f32(HwAgOffs_HwDeg_T_f32,HWAGOFFSLOLIM_HWDEG_F32,HWAGOFFSHILIM_HWDEG_F32);
    HwTqOffs_HwNm_T_f32=Lim_f32(HwTqOffs_HwNm_T_f32, HWTQOFFSLOLIM_HWNWTMTR_F32, HWTQOFFSHILIM_HWNWTMTR_F32);
    VehYawRateOffs_DegpS_T_f32 =Lim_f32(VehYawRateOffs_DegpS_T_f32, VEHYAWRATEOFFSLOLIM_VEHDEGPERSEC_F32, VEHYAWRATEOFFSHILIM_VEHDEGPERSEC_F32);

    (void)Rte_Write_HwAgOffs_Val(HwAgOffs_HwDeg_T_f32);
    (void)Rte_Write_HwTqOffs_Val(HwTqOffs_HwNm_T_f32);
    (void)Rte_Write_VehYawRateOffs_Val(VehYawRateOffs_DegpS_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsLrngPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngPer1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) HandwheelPosition_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTorque_HwNm_T_f32;
    VAR(boolean, AUTOMATIC) HwTqLrngEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) NewMeasReady_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwTqEstimnVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwTqDriftEstimnOnCentr_HwNm_T_f32;
    VAR(float32, AUTOMATIC) HwAgMeasd_HwDeg_T_f32;
    VAR(float32, AUTOMATIC)  TqMdlXSclr_HwRadpS_T_f32;
    VAR(float32, AUTOMATIC)  KVect_Uls_T_f32[MTRXSIZE_CNT_U08];
    VAR(uint8, AUTOMATIC)    HwTqLrngSts_Cnt_T_u08;
    VAR(float32, AUTOMATIC)  SampleImb_Uls_T_f32;
    VAR(float32, AUTOMATIC)  HwAgMeasd_HwRad_T_f32;
    VAR(float32, AUTOMATIC)  TqMdlXAry_HwRadpS_T_f32[MTRXSIZE_CNT_U08];
    VAR(float32, AUTOMATIC)  SampleCntTot_Cnt_T_f32;
    VAR(float32, AUTOMATIC)  HwTqMeasd_HwNm_T_f32;
    VAR(uint16, AUTOMATIC)   IterCnt_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Elapsedtime_Cnt_T_u32;

    (void)Rte_Read_HwAg_Val(&HandwheelPosition_HwDeg_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTorque_HwNm_T_f32);


     
    HwTqLrngEna_Cnt_T_logl= EnableLearning();
    *Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() =  HwTqLrngEna_Cnt_T_logl;

    if(HwTqLrngEna_Cnt_T_logl == TRUE)
    {
         /***************************Measurements_Grabber*************************/
        (void)FilLpUpdOutp_f32(HwTorque_HwNm_T_f32, Rte_Pim_HwTqMeasFil1()); 
        (void)FilLpUpdOutp_f32(HandwheelPosition_HwDeg_T_f32, Rte_Pim_HwAgMeasFil1()); 
        HwTqMeasd_HwNm_T_f32  = FilLpUpdOutp_f32(Rte_Pim_HwTqMeasFil1()->FilSt, Rte_Pim_HwTqMeasFil2());
        HwAgMeasd_HwDeg_T_f32 = FilLpUpdOutp_f32(Rte_Pim_HwAgMeasFil1()->FilSt, Rte_Pim_HwAgMeasFil2());

        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_HwTqLrngMeasTmrRef(),&Elapsedtime_Cnt_T_u32);
        if((Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val() * Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val())>=(CNV100MICROSECTOSEC_SECPERCNT_F32*(float32)Elapsedtime_Cnt_T_u32))
        {
            NewMeasReady_Cnt_T_logl = FALSE;
            HwTqMeasd_HwNm_T_f32 = ZERO_ULS_F32;
            HwAgMeasd_HwDeg_T_f32 = ZERO_ULS_F32;
            
            /**********Hold**********/
            HwTqLrngSts_Cnt_T_u08 = Rte_Pim_SnsrOffsLrnd()->HwTqLrngSts;

        }
        else
        {
            NewMeasReady_Cnt_T_logl = TRUE;
            
            /*********True_UpdateNVMRam*************/
            Rte_Pim_SnsrOffsLrnd()->HwTqLrngHwAgRef = FloatToFixd_s16_f32(HwAgMeasd_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngMeasTmrRef());
            
            /***************************Learning****************************/
            /*************Counter*************/
            UpdateSampleCnt(HwAgMeasd_HwDeg_T_f32);
            SampleCntTot_Cnt_T_f32 =((float32)Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos + (float32)Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg);
            *Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() =  SampleCntTot_Cnt_T_f32;
            
            /*************ForgettingFactor*************/
            if(FloatToFixd_u16_f32(SampleCntTot_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32) > Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val())
            {
                /* Update NVM RAM */
                Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg = 0U;
                Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos = 0U;
                Rte_Pim_SnsrOffsLrnd()->HwTqLrngHwAgRef = FloatToFixd_s16_f32(SYSGLBPRM_HWAGHILIM_HWDEG_F32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[0]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[1]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect)[2]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][0]= COVRAMTRXNIT_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][1]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[0][2]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][0]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][1]= COVRAMTRXNIT_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[1][2]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][0]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][1]= ZERO_ULS_F32;
                (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx)[2][2]= COVRAMTRXNIT_ULS_F32;
                
                /* State Variables */
                (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngEnaTmrRef());
                (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngMeasTmrRef());
                *Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = FALSE;
                *Rte_Pim_HwTqLrngTqInpPrsnt() = TRUE;
                
                /* LPFs */
                Rte_Pim_HwAgMeasFil1()->FilSt       = ZERO_ULS_F32;
                Rte_Pim_HwAgMeasFil2()->FilSt       = ZERO_ULS_F32;
                Rte_Pim_HwTqMeasFil1()->FilSt       = ZERO_ULS_F32;
                Rte_Pim_HwTqMeasFil2()->FilSt       = ZERO_ULS_F32;
                Rte_Pim_TqInpDetnHwTqFil()->FilSt   = ZERO_ULS_F32;
            }
            
            /***********HwPos vs HwTrq Model****************/
            TqMdlXAry_HwRadpS_T_f32[0U]= ONE_ULS_F32;
            HwAgMeasd_HwRad_T_f32=HwAgMeasd_HwDeg_T_f32*ARCHGLBPRM_PIOVER180_ULS_F32;
            TqMdlXAry_HwRadpS_T_f32[1U]= Sin_f32(HwAgMeasd_HwRad_T_f32);
            TqMdlXAry_HwRadpS_T_f32[2U]= Cos_f32(HwAgMeasd_HwRad_T_f32);
            
            
            /*******************Recursive Least Square Regression*****************/
            /***************Calculate K Vector****************************/
            CalculateKVector(TqMdlXAry_HwRadpS_T_f32, KVect_Uls_T_f32);
            
            /**********Calculate Covariance Matrix*************/
            UpdateCovarianceMatrix(TqMdlXAry_HwRadpS_T_f32, KVect_Uls_T_f32);
            
            /***********Update BETA_k************/
            TqMdlXSclr_HwRadpS_T_f32 =ZERO_ULS_F32;
            for(IterCnt_Cnt_T_u16=0U; IterCnt_Cnt_T_u16< (MTRXSIZE_CNT_U08); IterCnt_Cnt_T_u16++)
            {
                TqMdlXSclr_HwRadpS_T_f32 += Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect[IterCnt_Cnt_T_u16] *  TqMdlXAry_HwRadpS_T_f32[IterCnt_Cnt_T_u16];
            }
            for(IterCnt_Cnt_T_u16=0U; IterCnt_Cnt_T_u16< (MTRXSIZE_CNT_U08); IterCnt_Cnt_T_u16++)
            {
                Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect[IterCnt_Cnt_T_u16] += ((HwTqMeasd_HwNm_T_f32 - TqMdlXSclr_HwRadpS_T_f32)*KVect_Uls_T_f32[IterCnt_Cnt_T_u16]);
            }
            
            /****************CalculateOnCenterTorqueDrift********************/
            HwTqDriftEstimnOnCentr_HwNm_T_f32 =  Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect[0] +Rte_Pim_SnsrOffsLrnd()->HwTqLrngEstimnVect[2];
            *Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() =  HwTqDriftEstimnOnCentr_HwNm_T_f32;
            
            /*********ValidityCheck***********************/
            /*********DecideOutputs************/
            if((Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos >0U) && (Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg>0U)) /*(SampleCntTot_Cnt_T_f32>ZERO_ULS_F32) is implied if expr is true*/
            {
                SampleImb_Uls_T_f32 = Abslt_f32_f32((float32)Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos - (float32)Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg) / SampleCntTot_Cnt_T_f32;
                *Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = SampleImb_Uls_T_f32;

                if((SampleCntTot_Cnt_T_f32 >= (float32)Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val()) &&(SampleImb_Uls_T_f32 <= Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val()))
                {
                    /************HwTrqOffsetLearnt************/
                    HwTqLrngSts_Cnt_T_u08  = HWTQLRNGSTSLRND_CNT_U08;
                    HwTqEstimnVld_Cnt_T_logl  = TRUE;
                }
                else if((SampleCntTot_Cnt_T_f32>=(float32)Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val()) &&(SampleImb_Uls_T_f32<=Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val()))
                {
                    /**********************Pos/Neg/Zero Offset Status Selector******************/
                    HwTqEstimnVld_Cnt_T_logl  = FALSE;
                    
                    if((HwTqDriftEstimnOnCentr_HwNm_T_f32 >Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val()))
                    {
                        /*********1_Positive HwTrq Offset**********/
                        HwTqLrngSts_Cnt_T_u08 =HWTQLRNGSTSPOSOFFS_CNT_U08;
                    }
                    else if(HwTqDriftEstimnOnCentr_HwNm_T_f32 < -Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val())
                    {
                        /***********2_Negative HwTrq Offset*************/
                        HwTqLrngSts_Cnt_T_u08 =HWTQLRNGSTSNEGOFFS_CNT_U08;
                    }
                    else
                    {
                        /***************3_Zero HwTrq Offset************/
                        HwTqLrngSts_Cnt_T_u08 =HWTQLRNGSTSZEROOFFS_CNT_U08;
                    }
                }
                else
                {
                    /**************HwTrqNotLearnt*************/
                    HwTqEstimnVld_Cnt_T_logl  = FALSE;
                    HwTqLrngSts_Cnt_T_u08  = HWTQLRNGSTSNOTLRND_CNT_U08;
                }
            }
            else
            {
                /**********HwTrqNotLearnt************/
                HwTqLrngSts_Cnt_T_u08  = HWTQLRNGSTSNOTLRND_CNT_U08;
                HwTqEstimnVld_Cnt_T_logl  = FALSE;
            }
            Rte_Pim_SnsrOffsLrnd()->HwTqLrngSts =HwTqLrngSts_Cnt_T_u08;
            *Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = HwTqEstimnVld_Cnt_T_logl;
            UpdateHwTqOffs(HwTqEstimnVld_Cnt_T_logl, HwTqDriftEstimnOnCentr_HwNm_T_f32);
        }
        *Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = HwTqMeasd_HwNm_T_f32;
        *Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = HwAgMeasd_HwDeg_T_f32;
        *Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = NewMeasReady_Cnt_T_logl;
    }
    else
    {
        HwTqLrngSts_Cnt_T_u08 = Rte_Pim_SnsrOffsLrnd()->HwTqLrngSts;
        *Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = FALSE;
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngMeasTmrRef());
    }

     Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(HwTqLrngSts_Cnt_T_u08);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsLrngPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehYawRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRateVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint8 Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts(void)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngPer2
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) HandwheelPosition_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HandwheelVelocity_HwRadpS_T_f32;
    VAR(float32, AUTOMATIC) HwTorque_HwNm_T_f32;
    VAR(float32, AUTOMATIC) YawLrngBiasEstimnRaw_VehDegpS_T_f32;
    VAR(float32, AUTOMATIC) YawLrngElpdLrngTi_Sec_T_f32;
    VAR(float32, AUTOMATIC) ElpsdTi_Mins_T_f32;
    VAR(float32, AUTOMATIC) SysTqFild_HwNm_T_f32;
    VAR(float32, AUTOMATIC) HwAgFild_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HandwheelVelocityFild_HwRadpS_T_f32;
    VAR(float32, AUTOMATIC) SysTq_HwNm_T_f32;
    VAR(float32, AUTOMATIC) YawA_VehDegpSSq_T_f32;
    VAR(float32, AUTOMATIC) YawRatePrev_VehDegpS_T_f32;
    VAR(float32, AUTOMATIC) YawRateCorrd_DegpS_T_f32;
    VAR(float32, AUTOMATIC) YawRateFild_DegpS_T_f32;
    VAR(float32, AUTOMATIC) TorqueCmdCRF_MtrNm_T_f32;
    VAR(float32, AUTOMATIC) VehicleSpeed_Kph_T_f32;
    VAR(float32, AUTOMATIC) VehicleYawRate_DegpS_T_f32;
    VAR(boolean, AUTOMATIC) HwAgLrngLrngCdnVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) YawLrngLrngCdnVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwAgLrngRst_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwAgLrngEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) EnableYOC_Cnt_T_logl;


    /************Read inputs*****************/

    (void)Rte_Read_HwAg_Val(&HandwheelPosition_HwDeg_T_f32);
    (void)Rte_Read_HwVel_Val(&HandwheelVelocity_HwRadpS_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTorque_HwNm_T_f32);
    (void)Rte_Read_MotTqCmdCrf_Val(&TorqueCmdCRF_MtrNm_T_f32);
    (void)Rte_Read_VehSpd_Val(&VehicleSpeed_Kph_T_f32);
    (void)Rte_Read_VehYawRate_Val(&VehicleYawRate_DegpS_T_f32);
       
 
 
    if(Rte_Prm_SnsrOffsLrngFctEna_Logl() == TRUE)
    {
        /*SOaC_HierarchyManager*/
        SOaCHierarchyManager(&EnableYOC_Cnt_T_logl, &HwAgLrngEna_Cnt_T_logl, &HwAgLrngRst_Cnt_T_logl);
        
        /*****************Condition Signals***************/
        (void)FilLpUpdOutp_f32(VehicleYawRate_DegpS_T_f32, Rte_Pim_YawCdngFil1());
        YawRateFild_DegpS_T_f32 = FilLpUpdOutp_f32(Rte_Pim_YawCdngFil1()->FilSt, Rte_Pim_YawCdngFil2());
        *Rte_Pim_dSnsrOffsLrngYawRateFild() =  YawRateFild_DegpS_T_f32;

        YawRateCorrd_DegpS_T_f32 =  YawRateFild_DegpS_T_f32 - FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->YawRateOffs,NXTRFIXDPT_P9TOFLOAT_ULS_F32);
        *Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() =  YawRateCorrd_DegpS_T_f32;

        YawRatePrev_VehDegpS_T_f32 =FilLpUpdOutp_f32(YawRateFild_DegpS_T_f32, Rte_Pim_YawACdngFil());
        YawA_VehDegpSSq_T_f32 = (YawRatePrev_VehDegpS_T_f32-*Rte_Pim_YawRatePrev()) * IVS10MS_ULSPERSEC_F32;
        *Rte_Pim_dSnsrOffsLrngYawA() =  YawA_VehDegpSSq_T_f32;
        *Rte_Pim_YawRatePrev() =  YawRatePrev_VehDegpS_T_f32;

        SysTq_HwNm_T_f32 =(HwTorque_HwNm_T_f32 - FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwTqOffs,NXTRFIXDPT_P12TOFLOAT_ULS_F32))  + (TorqueCmdCRF_MtrNm_T_f32 * Rte_Prm_SysGlbPrmSysTqRat_Val());
        SysTqFild_HwNm_T_f32 =FilLpUpdOutp_f32(SysTq_HwNm_T_f32, Rte_Pim_SysTqCdngFil());
        *Rte_Pim_dSnsrOffsLrngSysTqFild() =  SysTqFild_HwNm_T_f32;

        HwAgFild_HwDeg_T_f32 =FilLpUpdOutp_f32(HandwheelPosition_HwDeg_T_f32, Rte_Pim_HwAgCdngFil());
        *Rte_Pim_dSnsrOffsLrngHwAgFild() =  HwAgFild_HwDeg_T_f32;
        HandwheelVelocityFild_HwRadpS_T_f32 =FilLpUpdOutp_f32(HandwheelVelocity_HwRadpS_T_f32, Rte_Pim_HwVelCdngFil());
        *Rte_Pim_dSnsrOffsLrngHwVelFild() =  HandwheelVelocityFild_HwRadpS_T_f32;

        /*********YOC**********/
        ElpsdTi_Mins_T_f32 = Rte_Pim_SnsrOffsLrnd()->YawRateElpdTi + TISTEP10MS_MINS_F32;
        if(ElpsdTi_Mins_T_f32 <= Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val())
        {
            Rte_Pim_SnsrOffsLrnd()->YawRateElpdTi = ElpsdTi_Mins_T_f32;
            *Rte_Pim_VehYawRateOffsFrsh() = TRUE;           
        }
        else
        {
            *Rte_Pim_VehYawRateOffsFrsh() = FALSE;
            Rte_Pim_SnsrOffsLrnd()->YawRateElpdTi = Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
        }

    
        /***********Learning Conditions**********/
        if((VehicleSpeed_Kph_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (Abslt_f32_f32(HandwheelPosition_HwDeg_T_f32)<=Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val()) && (Abslt_f32_f32(YawRateFild_DegpS_T_f32) <=(YAWRATENOISE_VEHDEGPERSEC_F32+Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val()))&& (Abslt_f32_f32(YawA_VehDegpSSq_T_f32) <=(Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val()))) 
        {
            YawLrngLrngCdnVld_Cnt_T_logl = TRUE;
        }
        else
        {
            YawLrngLrngCdnVld_Cnt_T_logl = FALSE;
        }
        *Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = YawLrngLrngCdnVld_Cnt_T_logl;
        
        /********Learn*******/
        if((YawLrngLrngCdnVld_Cnt_T_logl == TRUE) &&(EnableYOC_Cnt_T_logl == TRUE))
        {
          YawLrngElpdLrngTi_Sec_T_f32 = *Rte_Pim_YawLrngElpdLrngTi() + ARCHGLBPRM_10MILLISEC_SEC_F32;
          *Rte_Pim_YawLrngElpdLrngTi() = Min_f32(YawLrngElpdLrngTi_Sec_T_f32, Rte_Prm_SnsrOffsLrngYawLrngTi_Val());
          
          /*************Filter For Learning***********/
          (void)FilLpUpdOutp_f32(YawRateFild_DegpS_T_f32, Rte_Pim_YawLrngFil1());
          YawLrngBiasEstimnRaw_VehDegpS_T_f32 = FilLpUpdOutp_f32(Rte_Pim_YawLrngFil1()->FilSt, Rte_Pim_YawLrngFil2());
          *Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() =  YawLrngBiasEstimnRaw_VehDegpS_T_f32;
          
          /*************Update NVM RAM***********/
          if ((Rte_Pim_SnsrOffsLrnd()->YawRateOffsVld == TRUE) || (YawLrngElpdLrngTi_Sec_T_f32 > Rte_Prm_SnsrOffsLrngYawLrngTi_Val()))
          {
              YawLrngBiasEstimnRaw_VehDegpS_T_f32 = Lim_f32(YawLrngBiasEstimnRaw_VehDegpS_T_f32, -Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val(), Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val());
              Rte_Pim_SnsrOffsLrnd()->YawRateOffs = FloatToFixd_s16_f32(YawLrngBiasEstimnRaw_VehDegpS_T_f32, NXTRFIXDPT_FLOATTOP9_ULS_F32);
              Rte_Pim_SnsrOffsLrnd()->YawRateOffsVld = TRUE;
              Rte_Pim_SnsrOffsLrnd()->YawRateElpdTi = ZERO_ULS_F32;
          }
        }
        
        /***************POC*************/
        if(HwAgLrngRst_Cnt_T_logl== TRUE)
        {
          /***********Reset_HwAg_Learning************/  
          Rte_Pim_HwAgLrngFil1()->FilSt = FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwAgOffs,NXTRFIXDPT_P10TOFLOAT_ULS_F32);
          Rte_Pim_HwAgLrngFil2()->FilSt = Rte_Pim_HwAgLrngFil1()->FilSt;
          Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi = ZERO_ULS_F32;
          Rte_Pim_SnsrOffsLrnd()->HwAgLrngYawOffsRef=Rte_Pim_SnsrOffsLrnd()->YawRateOffs;
        }
        
        
        /*Learning Conditions*/
        if((VehicleSpeed_Kph_T_f32 >= Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val()) && (Abslt_f32_f32(HandwheelVelocityFild_HwRadpS_T_f32) <=Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val()) && (Abslt_f32_f32(YawRateCorrd_DegpS_T_f32) <=(Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val()))&& (Abslt_f32_f32(SysTqFild_HwNm_T_f32) <=(Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val()))) 
        {
           *Rte_Pim_HwAgLrngDrvgDstPrev() =  Lim_f32(((VehicleSpeed_Kph_T_f32* SPDCNVN_MTRPERSECPERKPH_F32* ARCHGLBPRM_10MILLISEC_SEC_F32)  +  *Rte_Pim_HwAgLrngDrvgDstPrev()),ZERO_ULS_F32, Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val());
        }
        else
        {
           *Rte_Pim_HwAgLrngDrvgDstPrev() = ZERO_ULS_F32;
        }
        if(*Rte_Pim_HwAgLrngDrvgDstPrev() >= Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val())
        {
           HwAgLrngLrngCdnVld_Cnt_T_logl = TRUE;
        }
        else
        {
           HwAgLrngLrngCdnVld_Cnt_T_logl = FALSE;
        }

        *Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = HwAgLrngLrngCdnVld_Cnt_T_logl;
        LearnHwAg(HwAgLrngLrngCdnVld_Cnt_T_logl, HwAgLrngEna_Cnt_T_logl, SysTqFild_HwNm_T_f32,HwAgFild_HwDeg_T_f32);

   }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define SnsrOffsLrng_STOP_SEC_CODE
#include "SnsrOffsLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
* Name:        LearnHwAg
* Description: 
* Inputs:      HwAgLrngLrngCdnVld_Cnt_T_logl
*              HwAgLrngEna_Cnt_T_logl
*              SysTqFild_HwNm_T_f32
* Outputs:     None 
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/     

static  FUNC(void, SNSROFFSLRNG_CODE) LearnHwAg(boolean  HwAgLrngLrngCdnVld_Cnt_T_logl, boolean  HwAgLrngEna_Cnt_T_logl, float32 SysTqFild_HwNm_T_f32, float32 HandwheelPosition_HwDeg_T_f32 )
{
       VAR(float32, AUTOMATIC) ElpsdTi_Sec_T_f32;
       VAR(float32, AUTOMATIC) SysTqAvrg_HwNm_T_f32;
       VAR(float32, AUTOMATIC) HwPosBiasEstRaw_HwDeg_T_f32;
       VAR(float32, AUTOMATIC) HwAgLrngSysTqUpThd_HwNm_T_f32;
       VAR(float32, AUTOMATIC) HwAgLrngSysTqLoThd_HwNm_T_f32;
       VAR(uint8, AUTOMATIC) HwTqLrngSts_Cnt_T_u08;
       VAR(boolean, AUTOMATIC) HwAgLrngTiVldt_Cnt_T_logl;
       VAR(boolean, AUTOMATIC) HwAgLrngSysTqVldt_Cnt_T_logl;

       HwTqLrngSts_Cnt_T_u08 = Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts(); 

       /***********Learn**************/
       if((HwAgLrngLrngCdnVld_Cnt_T_logl == TRUE) &&(HwAgLrngEna_Cnt_T_logl == TRUE))
       {
        /**********LPF*************/
         (void)FilLpUpdOutp_f32(HandwheelPosition_HwDeg_T_f32,Rte_Pim_HwAgLrngFil1());
         HwPosBiasEstRaw_HwDeg_T_f32 = FilLpUpdOutp_f32(Rte_Pim_HwAgLrngFil1()->FilSt,Rte_Pim_HwAgLrngFil2());
         Rte_Pim_SnsrOffsLrnd()->HwAgLrngHwAgFilSt =  FloatToFixd_s16_f32(HwPosBiasEstRaw_HwDeg_T_f32,NXTRFIXDPT_FLOATTOP4_ULS_F32);

         (void)FilLpUpdOutp_f32(SysTqFild_HwNm_T_f32,Rte_Pim_HwAgLrngSysTqFil1());
         SysTqAvrg_HwNm_T_f32 = FilLpUpdOutp_f32(Rte_Pim_HwAgLrngSysTqFil1()->FilSt,Rte_Pim_HwAgLrngSysTqFil2());
         Rte_Pim_SnsrOffsLrnd()->HwAgLrngSysTqFilSt =  FloatToFixd_s16_f32(SysTqAvrg_HwNm_T_f32,NXTRFIXDPT_FLOATTOP5_ULS_F32);

         ElpsdTi_Sec_T_f32 = Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi +  ARCHGLBPRM_10MILLISEC_SEC_F32;
         
         
         /********BiasEstimation_ValidityCheck**************/
         /*******Time_Check************/
         if(ElpsdTi_Sec_T_f32>= Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val())
         {
             Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi = Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
             HwAgLrngTiVldt_Cnt_T_logl        = TRUE;
         }
         else
         {
             Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi = ElpsdTi_Sec_T_f32;
             HwAgLrngTiVldt_Cnt_T_logl = FALSE;
         }
         *Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = HwAgLrngTiVldt_Cnt_T_logl;
         
         /********HwTqAvrg_Check*****************/
         switch(HwTqLrngSts_Cnt_T_u08)
         {
             case HWTQLRNGSTSPOSOFFS_CNT_U08:
                HwAgLrngSysTqUpThd_HwNm_T_f32    = Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
                HwAgLrngSysTqLoThd_HwNm_T_f32    = ZERO_ULS_F32;
                break;
             case HWTQLRNGSTSNEGOFFS_CNT_U08:
                HwAgLrngSysTqUpThd_HwNm_T_f32    = ZERO_ULS_F32;
                HwAgLrngSysTqLoThd_HwNm_T_f32    = -Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
                break;
             case HWTQLRNGSTSZEROOFFS_CNT_U08:
                HwAgLrngSysTqUpThd_HwNm_T_f32    = Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
                HwAgLrngSysTqLoThd_HwNm_T_f32    = -Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
                break;
             case HWTQLRNGSTSLRND_CNT_U08:
                HwAgLrngSysTqUpThd_HwNm_T_f32    = Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
                HwAgLrngSysTqLoThd_HwNm_T_f32    = -Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
                break;
             default:
             /*case HWTQLRNGSTSNOTLRND_CNT_U08:*/
                HwAgLrngSysTqUpThd_HwNm_T_f32    = Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
                HwAgLrngSysTqLoThd_HwNm_T_f32    = -Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
                break;
         }
         *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = HwAgLrngSysTqUpThd_HwNm_T_f32;
         *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = HwAgLrngSysTqLoThd_HwNm_T_f32;
         if((SysTqAvrg_HwNm_T_f32 <= HwAgLrngSysTqUpThd_HwNm_T_f32 ) &&(SysTqAvrg_HwNm_T_f32>= HwAgLrngSysTqLoThd_HwNm_T_f32 ))
         {
              HwAgLrngSysTqVldt_Cnt_T_logl = TRUE;
         }
         else
         {
              HwAgLrngSysTqVldt_Cnt_T_logl = FALSE;
         }
         *Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = HwAgLrngSysTqVldt_Cnt_T_logl;

         if(HwAgLrngSysTqVldt_Cnt_T_logl == TRUE)
         {
             if(HwAgLrngTiVldt_Cnt_T_logl == TRUE)
             {
                 /****** Limit and Keep Learned Value*************/
                 Rte_Pim_SnsrOffsLrnd()->HwAgOffs = FloatToFixd_s16_f32((Lim_f32(HwPosBiasEstRaw_HwDeg_T_f32, -Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val(),Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val())),NXTRFIXDPT_FLOATTOP10_ULS_F32);
            Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi = ZERO_ULS_F32;
             }
             else
             {  
                 /*************Reset_HwAgLrng***********/
                 Rte_Pim_HwAgLrngFil1()->FilSt = FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwAgOffs,NXTRFIXDPT_P10TOFLOAT_ULS_F32);
                 Rte_Pim_HwAgLrngFil2()->FilSt = Rte_Pim_HwAgLrngFil1()->FilSt;
                 Rte_Pim_SnsrOffsLrnd()->HwAgLrngHwAgFilSt = FloatToFixd_s16_f32(Rte_Pim_HwAgLrngFil1()->FilSt,NXTRFIXDPT_FLOATTOP4_ULS_F32);
                 Rte_Pim_HwAgLrngSysTqFil1()->FilSt = ZERO_ULS_F32;
                 Rte_Pim_HwAgLrngSysTqFil2()->FilSt = ZERO_ULS_F32;
                 Rte_Pim_SnsrOffsLrnd()->HwAgLrngSysTqFilSt = 0;
                 Rte_Pim_SnsrOffsLrnd()->HwAgLrndTi = ZERO_ULS_F32;
                 Rte_Pim_SnsrOffsLrnd()->HwAgLrngYawOffsRef = Rte_Pim_SnsrOffsLrnd()->YawRateOffs;
             }
         }
     }
}

/*****************************************************************************
* Name:        SOaCHierarchyManager
* Description: 
* Inputs:     None  
* Outputs:    EnableYOC_Cnt_T_logl
*             HwAgLrngEna_Cnt_T_logl
*             HwAgLrngRst_Cnt_T_logl 
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/
static  FUNC(void, SNSROFFSLRNG_CODE)SOaCHierarchyManager(P2VAR(boolean, AUTOMATIC, AUTOMATIC) EnableYOC_Cnt_T_logl, P2VAR(boolean, AUTOMATIC, AUTOMATIC) HwAgLrngEna_Cnt_T_logl, P2VAR(boolean, AUTOMATIC, AUTOMATIC) HwAgLrngRst_Cnt_T_logl)
{
     VAR(float32, AUTOMATIC) HandwheelAuthority_Uls_T_f32;
     VAR(boolean, AUTOMATIC) CmnSigVld_Cnt_T_logl;
     VAR(boolean, AUTOMATIC) VehicleYawRateValid_Cnt_T_logl;
     VAR(boolean, AUTOMATIC) VehicleSpeedValid_Cnt_T_logl;

     (void)Rte_Read_HwAgAuthy_Val(&HandwheelAuthority_Uls_T_f32);
     (void)Rte_Read_VehSpdVld_Logl(&VehicleSpeedValid_Cnt_T_logl);
     (void)Rte_Read_VehYawRateVld_Logl(&VehicleYawRateValid_Cnt_T_logl);

     if((HandwheelAuthority_Uls_T_f32 >=  HWAUTHYTHD_ULS_F32) && (VehicleSpeedValid_Cnt_T_logl== TRUE))
     {
         CmnSigVld_Cnt_T_logl = TRUE;
     }
     else
     {
         CmnSigVld_Cnt_T_logl = FALSE;
     }

     /*YOCEnabler*/
     if((CmnSigVld_Cnt_T_logl == TRUE) &&(VehicleYawRateValid_Cnt_T_logl==TRUE) && (Rte_Prm_SnsrOffsLrngYawLrngEna_Logl()== TRUE))
     {
          *EnableYOC_Cnt_T_logl= TRUE;
     }
     else
     {
          *EnableYOC_Cnt_T_logl= FALSE;
     }
     *Rte_Pim_dSnsrOffsLrngYawLrngEna() = *EnableYOC_Cnt_T_logl;

     /*POCEnabler*/
     if((CmnSigVld_Cnt_T_logl == TRUE) &&(VehicleYawRateValid_Cnt_T_logl==TRUE) && (Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl()== TRUE) && (*Rte_Pim_VehYawRateOffsFrsh()== TRUE)&&(Rte_Pim_SnsrOffsLrnd()->YawRateOffsVld == TRUE))
     {
         *HwAgLrngEna_Cnt_T_logl = TRUE;
     }
     else
     {
         *HwAgLrngEna_Cnt_T_logl = FALSE;
     }
     *Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = *HwAgLrngEna_Cnt_T_logl;
     
     /****POCResetLogic***/
     if(Abslt_f32_f32(FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->YawRateOffs - Rte_Pim_SnsrOffsLrnd()->HwAgLrngYawOffsRef, NXTRFIXDPT_P9TOFLOAT_ULS_F32)) >= Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val())
     {
         *HwAgLrngRst_Cnt_T_logl = TRUE;
     }
     else
     {
         *HwAgLrngRst_Cnt_T_logl = FALSE;
     }
     *Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = *HwAgLrngRst_Cnt_T_logl;
}

/*****************************************************************************
* Name:        Perform_TqInpDetn
* Description: 
* Inputs:     None
*   
*              
* Outputs:     None
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/
static  FUNC(void, SNSROFFSLRNG_CODE)Perform_TqInpDetn(void)
{
    VAR(uint16, AUTOMATIC) IterCnt_Cnt_T_u16;
     
    if(*Rte_Pim_HwTqLrngTqInpDetnEnaPrev() == FALSE)
    {
        *Rte_Pim_TqInpDetnPreProcEnaLoop() = 0U;
        *Rte_Pim_HwTqLrngTqInpPrsnt() = TRUE;
        *Rte_Pim_TqInpDetnStg1Idx() =0U;
        for(IterCnt_Cnt_T_u16=0U; IterCnt_Cnt_T_u16<TblSize_m(PimTqInpDetnStg1Buf); IterCnt_Cnt_T_u16++)
        {
            Rte_Pim_TqInpDetnStg1Buf()[IterCnt_Cnt_T_u16] =ZERO_ULS_F32;
        }
        *Rte_Pim_TqInpDetnEnaTi() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnSinGenrAg() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg1FilSt2() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg1FilSt1() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg2DwnFilSt2() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg2DwnFilSt1() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg2CenFilSt2() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg2CenFilSt1() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg2UpFilSt2() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnStg2UpFilSt1() =ZERO_ULS_F32;
        *Rte_Pim_TqInpDetnHwTqPreProc() =ZERO_ULS_F32;
        Rte_Pim_TqInpDetnHwTqFil()->FilSt =ZERO_ULS_F32;

    }
}

/*****************************************************************************
* Name:        EnableLearning
* Description: 
* Inputs:     None           
* Outputs:     HwTqLrngEna_Cnt_T_logl
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/
static  FUNC(boolean, SNSROFFSLRNG_CODE)EnableLearning(void)
{
    VAR(float32, AUTOMATIC) HandwheelAuthority_Uls_T_f32;
    VAR(float32, AUTOMATIC) HandwheelPosition_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HandwheelVelocity_HwRadpS_T_f32;
    VAR(float32, AUTOMATIC) HwTorque_HwNm_T_f32;
    VAR(float32, AUTOMATIC) VehicleSpeed_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehicleSpeedValid_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwTqLrngEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwTorqueFild_HwNm_T_f32;
    VAR(boolean, AUTOMATIC) HwAgMoved_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) TqInpPrsntVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) TqInpPrsnt_Cnt_T_logl;
    VAR(float32, AUTOMATIC) PhaAgStep_Rad_T_f32;
    VAR(float32, AUTOMATIC) HwTqPreproc_dB_T_f32;
    VAR(float32, AUTOMATIC) FreqCenFilSt0_Uls_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC) FreqDwnFilSt1_Uls_T_f32;
    VAR(float32, AUTOMATIC) FreqDwnFilSt0_Uls_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC) SGoutput_dB_T_f32;
    VAR(float32, AUTOMATIC) MagnSq_Uls_T_f32;
    VAR(float32, AUTOMATIC) FilSt0_Uls_T_f32;
    VAR(float32, AUTOMATIC) FilSt1_Uls_T_f32;
    VAR(float32, AUTOMATIC) FreqCenFilSt1_Uls_T_f32;
    VAR(float32, AUTOMATIC) MagnSqFreqUp_Uls_T_f32;
    VAR(float32, AUTOMATIC) MagnSqFreqCen_Uls_T_f32;
    VAR(float32, AUTOMATIC) MagnSqFreqDwn_Uls_T_f32;
    VAR(float32, AUTOMATIC) TrqOscCmd_MtrNm_T_f32;
    VAR(float32, AUTOMATIC) HwTrq_HwNm_T_f32;
    VAR(float32, AUTOMATIC) X0HwTrq_HwNm_T_f32;
    VAR(uint16, AUTOMATIC) SampleCntrLim_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) TqInpDetnPreProcEnaLoop_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Elapsedtime_Cnt_T_u32;
       
    (void)Rte_Read_HwAgAuthy_Val(&HandwheelAuthority_Uls_T_f32);
    (void)Rte_Read_HwVel_Val(&HandwheelVelocity_HwRadpS_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTorque_HwNm_T_f32);
    (void)Rte_Read_VehSpdVld_Logl(&VehicleSpeedValid_Cnt_T_logl);
    (void)Rte_Read_VehSpd_Val(&VehicleSpeed_Kph_T_f32);
    (void)Rte_Read_HwAg_Val(&HandwheelPosition_HwDeg_T_f32 );

    /*********EnableLearning********/
    if((Rte_Prm_SnsrOffsLrngFctEna_Logl() == TRUE) && (Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl() == TRUE) &&(HandwheelAuthority_Uls_T_f32 >=HWAUTHYTHD_ULS_F32) &&(VehicleSpeedValid_Cnt_T_logl== TRUE))
    {
         /************** EnableLearning****************/
         /*********Filer_HwTq*****************/
         HwTorqueFild_HwNm_T_f32 = FilLpUpdOutp_f32(HwTorque_HwNm_T_f32,Rte_Pim_TqInpDetnHwTqFil());
         *Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild()  =  HwTorqueFild_HwNm_T_f32;
         
         /**********EnablingConditions*****************/
         /****************CheckLastMeasHwPos**************/
         if(Abslt_f32_f32(HandwheelPosition_HwDeg_T_f32 - FixdToFloat_f32_s16(Rte_Pim_SnsrOffsLrnd()->HwTqLrngHwAgRef,NXTRFIXDPT_P4TOFLOAT_ULS_F32)) >= Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val())
         {
            HwAgMoved_Cnt_T_logl = TRUE;
            Rte_Pim_SnsrOffsLrnd()->HwTqLrngHwAgRef = FloatToFixd_s16_f32(SYSGLBPRM_HWAGHILIM_HWDEG_F32,NXTRFIXDPT_FLOATTOP4_ULS_F32);
         }
         else
         {
            HwAgMoved_Cnt_T_logl = FALSE;
         }
         
         
         if((Abslt_f32_f32(HwTorque_HwNm_T_f32)<= Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val()) &&   
                        (Abslt_f32_f32(HandwheelVelocity_HwRadpS_T_f32) <=  Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val()) && 
                        (Abslt_f32_f32(HandwheelPosition_HwDeg_T_f32) <=  Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val()) && 
                        (VehicleSpeed_Kph_T_f32 <= Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val()) &&
                        (HwAgMoved_Cnt_T_logl == TRUE))
         {
            /**********Perform_TqInpDetn*************/
            /*********Step 1************/
            Perform_TqInpDetn();

            
            /*********Step 2************/
            /************ElapsedTime*********/
            *Rte_Pim_TqInpDetnEnaTi() = Min_f32(*Rte_Pim_TqInpDetnEnaTi() +  ARCHGLBPRM_2MILLISEC_SEC_F32, HWTQLRNGTMRHILIM_SEC_F32);

            /*************************Enable Preprocessing**************/
            
            /***Preprocessing**/
            SampleCntrLim_Cnt_T_u16 = (uint16)Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val() + (uint16)Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();

            /********************SampleCounter************/
            *Rte_Pim_TqInpDetnPreProcEnaLoop() = *Rte_Pim_TqInpDetnPreProcEnaLoop()+1U;
            TqInpDetnPreProcEnaLoop_Cnt_T_u16 = Min_u16(*Rte_Pim_TqInpDetnPreProcEnaLoop(), SampleCntrLim_Cnt_T_u16);

            /***********************Stage 1*********************/
            /************Sliding_Goertzel_ver001**************/

            /**********SinGen*******************/
            PhaAgStep_Rad_T_f32 = Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val() * ARCHGLBPRM_2PI_ULS_F32* ARCHGLBPRM_2MILLISEC_SEC_F32;
            *Rte_Pim_TqInpDetnSinGenrAg() = PhaAgStep_Rad_T_f32 +  *Rte_Pim_TqInpDetnSinGenrAg();
            /*********Angle Wrapper********/
            if(*Rte_Pim_TqInpDetnSinGenrAg() >=  ARCHGLBPRM_2PI_ULS_F32)
            {
                *Rte_Pim_TqInpDetnSinGenrAg() = *Rte_Pim_TqInpDetnSinGenrAg() -  ARCHGLBPRM_2PI_ULS_F32;
            }
            TrqOscCmd_MtrNm_T_f32 =  Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val() * Sin_f32(*Rte_Pim_TqInpDetnSinGenrAg());
            HwTrq_HwNm_T_f32 = HwTorqueFild_HwNm_T_f32 +  TrqOscCmd_MtrNm_T_f32;
                       
            /****************SlidingGoertzel*******************/
            
            /******************Sliding_Input*******************/
            X0HwTrq_HwNm_T_f32 =HwTrq_HwNm_T_f32 - Rte_Pim_TqInpDetnStg1Buf()[*Rte_Pim_TqInpDetnStg1Idx()];
            Rte_Pim_TqInpDetnStg1Buf()[*Rte_Pim_TqInpDetnStg1Idx()] =  HwTrq_HwNm_T_f32;
            if( (*Rte_Pim_TqInpDetnStg1Idx() + 1U) >=  Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val())
            {
                *Rte_Pim_TqInpDetnStg1Idx() = 0U;
            }
            else
            {
                *Rte_Pim_TqInpDetnStg1Idx() = *Rte_Pim_TqInpDetnStg1Idx() +1U;
            }
            
            /*****************Calculate_Magnitude**************/
            /*Goertzel_Part1*/
            FilSt0_Uls_T_f32 = (X0HwTrq_HwNm_T_f32 + (Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val()* *Rte_Pim_TqInpDetnStg1FilSt1())) - (*Rte_Pim_TqInpDetnStg1FilSt2());
            FilSt1_Uls_T_f32 = *Rte_Pim_TqInpDetnStg1FilSt1();
            *Rte_Pim_TqInpDetnStg1FilSt2() = *Rte_Pim_TqInpDetnStg1FilSt1();
            *Rte_Pim_TqInpDetnStg1FilSt1() = FilSt0_Uls_T_f32;

            /*Goertzel_Part2*/
            MagnSq_Uls_T_f32 = ((FilSt0_Uls_T_f32*FilSt0_Uls_T_f32) + (FilSt1_Uls_T_f32*FilSt1_Uls_T_f32)) - (FilSt0_Uls_T_f32*FilSt1_Uls_T_f32*Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val());

            SGoutput_dB_T_f32 = (log10f(Lim_f32((MagnSq_Uls_T_f32/((float32)Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val()*(float32)Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val())),TQINPDETNLOGINPLOLIM_ULS_F32 ,TQINPDETNLOGINPHILIM_ULS_F32)))* TQINPDETNLOGGAIN_ULS_F32;
            *Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() =  SGoutput_dB_T_f32;
            
            
            /*****************************General_Goertzel*********************/
            /***Stage 2************/
            if(TqInpDetnPreProcEnaLoop_Cnt_T_u16 >= (uint16)Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val())
            {
                /****************************Goertzel_part1_1*******************************/
                FreqDwnFilSt0_Uls_T_f32 =  (SGoutput_dB_T_f32 + (Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val() * *Rte_Pim_TqInpDetnStg2DwnFilSt1())) - *Rte_Pim_TqInpDetnStg2DwnFilSt2();
                FreqDwnFilSt1_Uls_T_f32 =  *Rte_Pim_TqInpDetnStg2DwnFilSt1();

                *Rte_Pim_TqInpDetnStg2DwnFilSt2() = *Rte_Pim_TqInpDetnStg2DwnFilSt1();
                *Rte_Pim_TqInpDetnStg2DwnFilSt1() =  FreqDwnFilSt0_Uls_T_f32;

                /****************************Goertzel_part1_2*******************************/
                FreqCenFilSt0_Uls_T_f32 =  (SGoutput_dB_T_f32 + (Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val() * *Rte_Pim_TqInpDetnStg2CenFilSt1())) - *Rte_Pim_TqInpDetnStg2CenFilSt2();
                FreqCenFilSt1_Uls_T_f32 =  *Rte_Pim_TqInpDetnStg2CenFilSt1();

                *Rte_Pim_TqInpDetnStg2CenFilSt2() = *Rte_Pim_TqInpDetnStg2CenFilSt1();
                *Rte_Pim_TqInpDetnStg2CenFilSt1() =  FreqCenFilSt0_Uls_T_f32;

                /****************************Goertzel_part1_3*******************************/
                FilSt0_Uls_T_f32 =  (SGoutput_dB_T_f32 + (Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val() * *Rte_Pim_TqInpDetnStg2UpFilSt1())) - *Rte_Pim_TqInpDetnStg2UpFilSt2();
                FilSt1_Uls_T_f32 =  *Rte_Pim_TqInpDetnStg2UpFilSt1();

                *Rte_Pim_TqInpDetnStg2UpFilSt2() = *Rte_Pim_TqInpDetnStg2UpFilSt1();
                *Rte_Pim_TqInpDetnStg2UpFilSt1() =  FilSt0_Uls_T_f32;
            }
            
            if(TqInpDetnPreProcEnaLoop_Cnt_T_u16 < SampleCntrLim_Cnt_T_u16)
            {
                HwTqPreproc_dB_T_f32 = *Rte_Pim_TqInpDetnHwTqPreProc();
                *Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop_Cnt_T_u16;
                
            }
            else
            {       
                *Rte_Pim_TqInpDetnStg2DwnFilSt2() = ZERO_ULS_F32;
                *Rte_Pim_TqInpDetnStg2DwnFilSt1() = ZERO_ULS_F32;
                *Rte_Pim_TqInpDetnStg2CenFilSt2() = ZERO_ULS_F32;
                *Rte_Pim_TqInpDetnStg2CenFilSt1() = ZERO_ULS_F32;
                *Rte_Pim_TqInpDetnStg2UpFilSt2()  = ZERO_ULS_F32;
                *Rte_Pim_TqInpDetnStg2UpFilSt1()  = ZERO_ULS_F32;
                *Rte_Pim_TqInpDetnPreProcEnaLoop() = (uint16)Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
                
                /************Goertzel_Part2_1************/
                MagnSqFreqDwn_Uls_T_f32 = ((FreqDwnFilSt0_Uls_T_f32*FreqDwnFilSt0_Uls_T_f32) + (FreqDwnFilSt1_Uls_T_f32*FreqDwnFilSt1_Uls_T_f32)) -(FreqDwnFilSt0_Uls_T_f32*FreqDwnFilSt1_Uls_T_f32*Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val());
                
                /************Goertzel_Part2_2************/
                MagnSqFreqCen_Uls_T_f32 = ((FreqCenFilSt0_Uls_T_f32*FreqCenFilSt0_Uls_T_f32) + (FreqCenFilSt1_Uls_T_f32*FreqCenFilSt1_Uls_T_f32)) -(FreqCenFilSt0_Uls_T_f32*FreqCenFilSt1_Uls_T_f32*Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val());
                
                /************Goertzel_Part2_3************/
                MagnSqFreqUp_Uls_T_f32 =  ((FilSt0_Uls_T_f32*FilSt0_Uls_T_f32) + (FilSt1_Uls_T_f32*FilSt1_Uls_T_f32)) -(FilSt0_Uls_T_f32*FilSt1_Uls_T_f32*Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val());

                HwTqPreproc_dB_T_f32 = (log10f(Lim_f32(((MagnSqFreqDwn_Uls_T_f32 + MagnSqFreqCen_Uls_T_f32 + MagnSqFreqUp_Uls_T_f32)/(float32)((float32)Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val()*(float32)Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val())),TQINPDETNLOGINPLOLIM_ULS_F32 ,TQINPDETNLOGINPHILIM_ULS_F32)))* TQINPDETNLOGGAIN_ULS_F32;
                
                *Rte_Pim_TqInpDetnHwTqPreProc() =  HwTqPreproc_dB_T_f32;
            }

            EnablePreProcessing( HwTqPreproc_dB_T_f32, SampleCntrLim_Cnt_T_u16, &TqInpPrsntVld_Cnt_T_logl, &TqInpPrsnt_Cnt_T_logl);
            
            *Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = TRUE;
         }
         else
         {
            *Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = FALSE; 
            
            /************Default_TqInpDetn***************/
            TqInpPrsntVld_Cnt_T_logl = FALSE;
            TqInpPrsnt_Cnt_T_logl = TRUE;
         }
         *Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = TqInpPrsntVld_Cnt_T_logl;
         *Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = TqInpPrsnt_Cnt_T_logl;
         
         
         if((TqInpPrsntVld_Cnt_T_logl==TRUE) &&(TqInpPrsnt_Cnt_T_logl== FALSE))
         {
             (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_HwTqLrngEnaTmrRef(),&Elapsedtime_Cnt_T_u32);
             if(((float32)Elapsedtime_Cnt_T_u32*CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32) >= Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val() )
             {
                HwTqLrngEna_Cnt_T_logl = TRUE;
             }
             else
             {
                HwTqLrngEna_Cnt_T_logl = FALSE;
             }
         }
         else
         {
             HwTqLrngEna_Cnt_T_logl = FALSE;
             (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwTqLrngEnaTmrRef());
         }
    }
    else
    {
      HwTqLrngEna_Cnt_T_logl = FALSE;
    }

    return HwTqLrngEna_Cnt_T_logl;
}

/*****************************************************************************
* Name:        EnablePreProcessing
* Description: 
* Inputs:      HwTqPreproc_dB_T_f32   
*              SampleCntrLim_Cnt_T_u16
*   
*              
* Outputs:     *TqInpPrsntVld_Cnt_T_logl
*              *TqInpPrsnt_Cnt_T_logl*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/
static  FUNC(void, SNSROFFSLRNG_CODE)EnablePreProcessing(float32 HwTqPreproc_dB_T_f32, uint16 SampleCntrLim_Cnt_T_u16, P2VAR(boolean, AUTOMATIC, AUTOMATIC) TqInpPrsntVld_Cnt_T_logl, P2VAR(boolean, AUTOMATIC, AUTOMATIC) TqInpPrsnt_Cnt_T_logl)
{       
    VAR(boolean, AUTOMATIC) TqInpPrsntRaw_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwTqPreprocVld_Cnt_T_logl;      

    if(HwTqPreproc_dB_T_f32 > Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val())
    {
        TqInpPrsntRaw_Cnt_T_logl = TRUE;
    }
    else
    {
        TqInpPrsntRaw_Cnt_T_logl = FALSE;
    }
    *Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = TqInpPrsntRaw_Cnt_T_logl;
    
    
    if( *Rte_Pim_TqInpDetnEnaTi()>= (ARCHGLBPRM_2MILLISEC_SEC_F32*(float32)SampleCntrLim_Cnt_T_u16))
    {
        HwTqPreprocVld_Cnt_T_logl = TRUE;
    }
    else
    {
        HwTqPreprocVld_Cnt_T_logl = FALSE;
    }
    
    if(HwTqPreprocVld_Cnt_T_logl == TRUE)
    {
        if(TqInpPrsntRaw_Cnt_T_logl == TRUE)
        {
            *TqInpPrsntVld_Cnt_T_logl = TRUE;
            *TqInpPrsnt_Cnt_T_logl = TRUE;
        }
        else
        {
            *TqInpPrsntVld_Cnt_T_logl = TRUE;
            *TqInpPrsnt_Cnt_T_logl = FALSE;
        }
    }
    else
    {
        *TqInpPrsntVld_Cnt_T_logl = FALSE;
        *TqInpPrsnt_Cnt_T_logl = *Rte_Pim_HwTqLrngTqInpPrsnt();
    }
    
    *Rte_Pim_HwTqLrngTqInpPrsnt() = *TqInpPrsnt_Cnt_T_logl;
}

/*****************************************************************************
* Name:        CalculateKVector
* Description: 
* Inputs:      TqMdlAryKVect_Uls_T_f32 -Array of 3 Matrix                  
*              
*   
*              
* Outputs:     KVect_Uls_T_f32
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/
static  FUNC(void, SNSROFFSLRNG_CODE)CalculateKVector( const float32 TqMdlXAry_HwRadpS_T_f32[MTRXSIZE_CNT_U08], P2VAR(float32, AUTOMATIC, AUTOMATIC) KVect_Uls_T_f32)
{   

    VAR(float32, AUTOMATIC) SumQTemp_HwRadpS_T_f32;
    VAR(float32, AUTOMATIC) SumQTempSclr_HwRadpS_T_f32;
    VAR(float32, AUTOMATIC) QTemp_HwRadpS_T_f32[MTRXSIZE_CNT_U08];
    VAR(uint16, AUTOMATIC)  IterCnt1_Cnt_T_u16,IterCnt2_Cnt_T_u16;
    
    for(IterCnt1_Cnt_T_u16=0U; IterCnt1_Cnt_T_u16< (TblSize_m(QTemp_HwRadpS_T_f32)); IterCnt1_Cnt_T_u16++)
    {
        SumQTemp_HwRadpS_T_f32 = ZERO_ULS_F32;
        for (IterCnt2_Cnt_T_u16=0U; IterCnt2_Cnt_T_u16< TblSize_m(QTemp_HwRadpS_T_f32);IterCnt2_Cnt_T_u16++)
        {
            SumQTemp_HwRadpS_T_f32 += Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx[IterCnt1_Cnt_T_u16][IterCnt2_Cnt_T_u16] * TqMdlXAry_HwRadpS_T_f32[IterCnt2_Cnt_T_u16];
        }
        QTemp_HwRadpS_T_f32[IterCnt1_Cnt_T_u16]= SumQTemp_HwRadpS_T_f32;
    }
    
    SumQTempSclr_HwRadpS_T_f32 =ZERO_ULS_F32;
    for(IterCnt1_Cnt_T_u16=0U; IterCnt1_Cnt_T_u16< (TblSize_m(QTemp_HwRadpS_T_f32)); IterCnt1_Cnt_T_u16++)
    {
        SumQTempSclr_HwRadpS_T_f32 += TqMdlXAry_HwRadpS_T_f32[IterCnt1_Cnt_T_u16]*QTemp_HwRadpS_T_f32[IterCnt1_Cnt_T_u16];
    }
    SumQTempSclr_HwRadpS_T_f32=SumQTempSclr_HwRadpS_T_f32 + Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
    
    for(IterCnt1_Cnt_T_u16=0U; IterCnt1_Cnt_T_u16< (TblSize_m(QTemp_HwRadpS_T_f32)); IterCnt1_Cnt_T_u16++)
    {
        KVect_Uls_T_f32[IterCnt1_Cnt_T_u16] = QTemp_HwRadpS_T_f32[IterCnt1_Cnt_T_u16]/SumQTempSclr_HwRadpS_T_f32;
    }
    
}


/*****************************************************************************
* Name:        UpdateCovarianceMatrix
* Description: 
* Inputs:      TqMdlAryKVect_Uls_T_f32 -Array of 3*3 Matrix                
*              TblSize_Cnt_T_u16 - One dimension size of Covariance Matrix
*   
*              
* Outputs:     None
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/
static  FUNC(void, SNSROFFSLRNG_CODE)UpdateCovarianceMatrix(const float32 TqMdlXAry_HwRadpS_T_f32[MTRXSIZE_CNT_U08], const float32 KVect_Uls_T_f32[MTRXSIZE_CNT_U08])
{
    VAR(uint16, AUTOMATIC)  IterCnt1_Cnt_T_u16,IterCnt2_Cnt_T_u16,IterCnt3_Cnt_T_u16;
    VAR(float32, AUTOMATIC) SumQTemp_HwRadpS_T_f32;
    VAR(float32, AUTOMATIC) HwTqLrngCovariMtrx_T_HwRadpS_T_f32[MTRXSIZE_CNT_U08][MTRXSIZE_CNT_U08];
    CONST(float32, AUTOMATIC)  IDYMTRX_ULS_F32[MTRXSIZE_CNT_U08][MTRXSIZE_CNT_U08] ={{ONE_ULS_F32,ZERO_ULS_F32,ZERO_ULS_F32}, {ZERO_ULS_F32,ONE_ULS_F32,ZERO_ULS_F32},{ZERO_ULS_F32,ZERO_ULS_F32,ONE_ULS_F32}};
        VAR(float32, AUTOMATIC)  TqMdlAryKVect_Uls_T_f32[MTRXSIZE_CNT_U08][MTRXSIZE_CNT_U08];
    /**************Matrix Multiply dimensions (MTRXSIZE_CNT_U08*1) * (1*MTRXSIZE_CNT_U08)*******/ 
    for(IterCnt1_Cnt_T_u16=0U; IterCnt1_Cnt_T_u16< MTRXSIZE_CNT_U08;IterCnt1_Cnt_T_u16++)
    {
        for(IterCnt2_Cnt_T_u16=0U; IterCnt2_Cnt_T_u16< MTRXSIZE_CNT_U08;IterCnt2_Cnt_T_u16++)
        {
            TqMdlAryKVect_Uls_T_f32[IterCnt1_Cnt_T_u16][IterCnt2_Cnt_T_u16]= IDYMTRX_ULS_F32[IterCnt1_Cnt_T_u16][IterCnt2_Cnt_T_u16] -(KVect_Uls_T_f32[IterCnt1_Cnt_T_u16] * TqMdlXAry_HwRadpS_T_f32[IterCnt2_Cnt_T_u16]); 
        }
    }
    for(IterCnt1_Cnt_T_u16=0U; IterCnt1_Cnt_T_u16<(MTRXSIZE_CNT_U08);IterCnt1_Cnt_T_u16++)
    {
        for(IterCnt2_Cnt_T_u16=0U; IterCnt2_Cnt_T_u16<(MTRXSIZE_CNT_U08);IterCnt2_Cnt_T_u16++)
        {
            SumQTemp_HwRadpS_T_f32 = ZERO_ULS_F32;
            
            for(IterCnt3_Cnt_T_u16=0U;IterCnt3_Cnt_T_u16<(MTRXSIZE_CNT_U08);IterCnt3_Cnt_T_u16++)
            {
                SumQTemp_HwRadpS_T_f32 +=   TqMdlAryKVect_Uls_T_f32[IterCnt1_Cnt_T_u16][IterCnt3_Cnt_T_u16] * (Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx[IterCnt3_Cnt_T_u16][IterCnt2_Cnt_T_u16]); 
            }
             HwTqLrngCovariMtrx_T_HwRadpS_T_f32[IterCnt1_Cnt_T_u16][IterCnt2_Cnt_T_u16] = SumQTemp_HwRadpS_T_f32;
        }
    }
    for(IterCnt1_Cnt_T_u16=0U; IterCnt1_Cnt_T_u16<(MTRXSIZE_CNT_U08);IterCnt1_Cnt_T_u16++)
    {
        for(IterCnt2_Cnt_T_u16=0U; IterCnt2_Cnt_T_u16<(MTRXSIZE_CNT_U08);IterCnt2_Cnt_T_u16++)
        {
            Rte_Pim_SnsrOffsLrnd()->HwTqLrngCovariMtrx[IterCnt1_Cnt_T_u16][IterCnt2_Cnt_T_u16] =HwTqLrngCovariMtrx_T_HwRadpS_T_f32[IterCnt1_Cnt_T_u16][IterCnt2_Cnt_T_u16];
        }
            
    }       
}

/*****************************************************************************
* Name:        UpdateHwTqOffs
* Description: 
* Inputs:      HwTqEstimnVld_Cnt_T_logl                
*              HwTqDriftEstimnOnCentr_HwNm_T_f32
*   
*              
* Outputs:     None
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/

static  FUNC(void, SNSROFFSLRNG_CODE)UpdateHwTqOffs(boolean HwTqEstimnVld_Cnt_T_logl, float32 HwTqDriftEstimnOnCentr_HwNm_T_f32)
{
    if(HwTqEstimnVld_Cnt_T_logl == TRUE)
    {
        Rte_Pim_SnsrOffsLrnd()->HwTqOffs = FloatToFixd_s16_f32(Lim_f32(HwTqDriftEstimnOnCentr_HwNm_T_f32,-Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val(),Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val()), NXTRFIXDPT_FLOATTOP12_ULS_F32);
    }
}


/*****************************************************************************
* Name:        UpdateSampleCnt
* Description: 
* Inputs:      HwAgMeasd_HwDeg_T_f32
*
*   
*              
* Outputs:     None
*
* Usage Notes:  Function shall only be called by SnsrOffsLrng functions .              
*****************************************************************************/

static FUNC(void, SNSROFFSLRNG_CODE)UpdateSampleCnt(float32 HwAgMeasd_HwDeg_T_f32)
{
    if(HwAgMeasd_HwDeg_T_f32>=ZERO_ULS_F32)
    {
        Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntPos++;
    }
    else
    {
        Rte_Pim_SnsrOffsLrnd()->HwTqLrngSampleCntNeg++;
    }
}



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
