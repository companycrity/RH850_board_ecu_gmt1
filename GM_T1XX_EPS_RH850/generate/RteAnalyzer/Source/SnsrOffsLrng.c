/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SnsrOffsLrng.c
 *        Config:  EPS.dpa
 *     SW-C Type:  SnsrOffsLrng
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SnsrOffsLrng>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */

/* PRQA S 3109 EOF */
/* PRQA S 3112 EOF */
/* PRQA S 3197 EOF */
/* PRQA S 3198 EOF */
/* PRQA S 3199 EOF */
/* PRQA S 3201 EOF */
/* PRQA S 3203 EOF */
/* PRQA S 3205 EOF */
/* PRQA S 3206 EOF */
/* PRQA S 3218 EOF */
/* PRQA S 3229 EOF */
/* PRQA S 2002 EOF */
/* PRQA S 3334 EOF */
/* PRQA S 3417 EOF */
/* PRQA S 3426 EOF */
/* PRQA S 3453 EOF */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * s10p5
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * s11p4
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * s3p12
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * s5p10
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * s6p9
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 *********************************************************************************************************************/

#include "Rte_SnsrOffsLrng.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_SnsrOffsLrng.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void SnsrOffsLrng_TestDefines(void);


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
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s10p5: Integer in interval [-32768...32767]
 * s11p4: Integer in interval [-32768...32767]
 * s3p12: Integer in interval [-32768...32767]
 * s5p10: Integer in interval [-32768...32767]
 * s6p9: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
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
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
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
 *     Returnvalue: float32* is of type Ary1D_f32_72
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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetHwAgOffs_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) GetHwAgOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetHwAgOffs_Oper
 *********************************************************************************************************************/

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  SnsrOffsLrng_TestDefines();


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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetHwTqOffs_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) GetHwTqOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetHwTqOffs_Oper
 *********************************************************************************************************************/

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();


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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetYawRateOffs_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) GetYawRateOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetYawRateOffs_Oper
 *********************************************************************************************************************/

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();


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
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg)
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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RstHwTq_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) RstHwTq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RstHwTq_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(FALSE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


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
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg)
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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RstYawAndAg_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) RstYawAndAg_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RstYawAndAg_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(FALSE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


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
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg)
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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetHwAgOffs_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetHwAgOffs_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(FALSE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


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
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg)
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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetHwTqOffs_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetHwTqOffs_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(FALSE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


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
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg)
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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetYawRateOffs_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetYawRateOffs_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(FALSE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


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
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  NvM_RequestResultType Call_SnsrOffsLrnd_GetErrorStatus_ErrorStatus_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Write_HwAgOffs_Val(Rte_InitValue_HwAgOffs_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Write_HwTqOffs_Val(Rte_InitValue_HwTqOffs_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Write_VehYawRateOffs_Val(Rte_InitValue_VehYawRateOffs_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_GetErrorStatus(&Call_SnsrOffsLrnd_GetErrorStatus_ErrorStatus_Arg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(FALSE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_NvMService_AC3_SRBS_E_NOT_OK:
      fct_error = 1;
      break;
  }


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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  float32 Read_HwAgAuthy_Val;
  float32 Read_HwTq_Val;
  float32 Read_HwVel_Val;
  float32 Read_VehSpd_Val;
  boolean Read_VehSpdVld_Logl;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr = 0U;
  uint32 Call_GetTiSpan100MicroSec32bit_Oper_TiSpan = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwAg_Val(&Read_HwAg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwAgAuthy_Val(&Read_HwAgAuthy_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwTq_Val(&Read_HwTq_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwVel_Val(&Read_HwVel_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_VehSpdVld_Logl(&Read_VehSpdVld_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  TSC_SnsrOffsLrng_Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(0U);

  fct_status = TSC_SnsrOffsLrng_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Call_GetTiSpan100MicroSec32bit_Oper(0U, &Call_GetTiSpan100MicroSec32bit_Oper_TiSpan);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }


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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsLrngPer2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  float32 Read_HwAgAuthy_Val;
  float32 Read_HwTq_Val;
  float32 Read_HwVel_Val;
  float32 Read_MotTqCmdCrf_Val;
  float32 Read_VehSpd_Val;
  boolean Read_VehSpdVld_Logl;
  float32 Read_VehYawRate_Val;
  boolean Read_VehYawRateVld_Logl;

  float32 HwAgLrngDrvgDstPrev;
  float32 TqInpDetnEnaTi;
  float32 TqInpDetnHwTqPreProc;
  float32 TqInpDetnSinGenrAg;
  float32 TqInpDetnStg1FilSt1;
  float32 TqInpDetnStg1FilSt2;
  float32 TqInpDetnStg2CenFilSt1;
  float32 TqInpDetnStg2CenFilSt2;
  float32 TqInpDetnStg2DwnFilSt1;
  float32 TqInpDetnStg2DwnFilSt2;
  float32 TqInpDetnStg2UpFilSt1;
  float32 TqInpDetnStg2UpFilSt2;
  float32 YawLrngElpdLrngTi;
  float32 YawRatePrev;
  float32 dSnsrOffsLrngHwAgFild;
  float32 dSnsrOffsLrngHwAgLrngSysTqLoThd;
  float32 dSnsrOffsLrngHwAgLrngSysTqUpThd;
  float32 dSnsrOffsLrngHwTqLrngHwAgMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqMeas;
  float32 dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  float32 dSnsrOffsLrngHwTqLrngSampleCntTot;
  float32 dSnsrOffsLrngHwTqLrngSampleImb;
  float32 dSnsrOffsLrngHwVelFild;
  float32 dSnsrOffsLrngSysTqFild;
  float32 dSnsrOffsLrngTqInpDetnHwTqFild;
  float32 dSnsrOffsLrngTqInpDetnStg1Outp;
  float32 dSnsrOffsLrngYawA;
  float32 dSnsrOffsLrngYawLrngBiasEstimnRaw;
  float32 dSnsrOffsLrngYawRateFild;
  float32 dSnsrOffsLrngYawRateFildCorrd;
  uint32 HwTqLrngEnaTmrRef;
  uint32 HwTqLrngMeasTmrRef;
  uint16 TqInpDetnPreProcEnaLoop;
  uint8 TqInpDetnStg1Idx;
  boolean HwAgLrngStRst;
  boolean HwTqLrngStRst;
  boolean HwTqLrngTqInpDetnEnaPrev;
  boolean HwTqLrngTqInpPrsnt;
  boolean VehYawRateLrngStRst;
  boolean VehYawRateOffsFrsh;
  boolean dSnsrOffsLrngHwAgLrngCdnVld;
  boolean dSnsrOffsLrngHwAgLrngEna;
  boolean dSnsrOffsLrngHwAgLrngRst;
  boolean dSnsrOffsLrngHwAgLrngSysTqVldt;
  boolean dSnsrOffsLrngHwAgLrngTiVldt;
  boolean dSnsrOffsLrngHwTqLrngEna;
  boolean dSnsrOffsLrngHwTqLrngEstimnVldt;
  boolean dSnsrOffsLrngHwTqLrngMeasEna;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  boolean dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  boolean dSnsrOffsLrngTqInpPrsntRaw;
  boolean dSnsrOffsLrngYawLrngCdnVld;
  boolean dSnsrOffsLrngYawLrngEna;
  Ary1D_f32_72 TqInpDetnStg1Buf;
  FilLpRec1 HwAgCdngFil;
  FilLpRec1 HwAgLrngFil1;
  FilLpRec1 HwAgLrngFil2;
  FilLpRec1 HwAgLrngSysTqFil1;
  FilLpRec1 HwAgLrngSysTqFil2;
  FilLpRec1 HwAgMeasFil1;
  FilLpRec1 HwAgMeasFil2;
  FilLpRec1 HwTqMeasFil1;
  FilLpRec1 HwTqMeasFil2;
  FilLpRec1 HwVelCdngFil;
  SnsrLrndOffsRec1 SnsrOffsLrnd;
  FilLpRec1 SysTqCdngFil;
  FilLpRec1 TqInpDetnHwTqFil;
  FilLpRec1 YawACdngFil;
  FilLpRec1 YawCdngFil1;
  FilLpRec1 YawCdngFil2;
  FilLpRec1 YawLrngFil1;
  FilLpRec1 YawLrngFil2;

  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data;
  float32 SnsrOffsLrngHwAgLrngTi_Val_data;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val_data;
  float32 SnsrOffsLrngHwAgOffsLim_Val_data;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val_data;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val_data;
  float32 SnsrOffsLrngHwTqOffsLim_Val_data;
  float32 SnsrOffsLrngHwVelFilFrq_Val_data;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data;
  float32 SnsrOffsLrngYawACdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val_data;
  float32 SnsrOffsLrngYawLrngTi_Val_data;
  float32 SnsrOffsLrngYawLrngYawAThd_Val_data;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val_data;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val_data;
  float32 SnsrOffsLrngYawRateOffsLim_Val_data;
  float32 SysGlbPrmSysTqRat_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val_data;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val_data;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val_data;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val_data;
  boolean SnsrOffsLrngFctEna_Logl_data;
  boolean SnsrOffsLrngHwAgLrngEna_Logl_data;
  boolean SnsrOffsLrngHwTqLrngEna_Logl_data;
  boolean SnsrOffsLrngYawLrngEna_Logl_data;

  uint8 SnsrOffsLrngPer2_HwTqLrngSts;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HwAgLrngDrvgDstPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngDrvgDstPrev() = HwAgLrngDrvgDstPrev;
  TqInpDetnEnaTi = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnEnaTi() = TqInpDetnEnaTi;
  TqInpDetnHwTqPreProc = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqPreProc() = TqInpDetnHwTqPreProc;
  TqInpDetnSinGenrAg = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnSinGenrAg() = TqInpDetnSinGenrAg;
  TqInpDetnStg1FilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt1() = TqInpDetnStg1FilSt1;
  TqInpDetnStg1FilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1FilSt2() = TqInpDetnStg1FilSt2;
  TqInpDetnStg2CenFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt1() = TqInpDetnStg2CenFilSt1;
  TqInpDetnStg2CenFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2CenFilSt2() = TqInpDetnStg2CenFilSt2;
  TqInpDetnStg2DwnFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt1() = TqInpDetnStg2DwnFilSt1;
  TqInpDetnStg2DwnFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2DwnFilSt2() = TqInpDetnStg2DwnFilSt2;
  TqInpDetnStg2UpFilSt1 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt1() = TqInpDetnStg2UpFilSt1;
  TqInpDetnStg2UpFilSt2 = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg2UpFilSt2() = TqInpDetnStg2UpFilSt2;
  YawLrngElpdLrngTi = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngElpdLrngTi() = YawLrngElpdLrngTi;
  YawRatePrev = *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev();
  *TSC_SnsrOffsLrng_Rte_Pim_YawRatePrev() = YawRatePrev;
  dSnsrOffsLrngHwAgFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgFild() = dSnsrOffsLrngHwAgFild;
  dSnsrOffsLrngHwAgLrngSysTqLoThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() = dSnsrOffsLrngHwAgLrngSysTqLoThd;
  dSnsrOffsLrngHwAgLrngSysTqUpThd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() = dSnsrOffsLrngHwAgLrngSysTqUpThd;
  dSnsrOffsLrngHwTqLrngHwAgMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() = dSnsrOffsLrngHwTqLrngHwAgMeas;
  dSnsrOffsLrngHwTqLrngHwTqMeas = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() = dSnsrOffsLrngHwTqLrngHwTqMeas;
  dSnsrOffsLrngHwTqLrngHwTqOffsRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() = dSnsrOffsLrngHwTqLrngHwTqOffsRaw;
  dSnsrOffsLrngHwTqLrngSampleCntTot = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() = dSnsrOffsLrngHwTqLrngSampleCntTot;
  dSnsrOffsLrngHwTqLrngSampleImb = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() = dSnsrOffsLrngHwTqLrngSampleImb;
  dSnsrOffsLrngHwVelFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwVelFild() = dSnsrOffsLrngHwVelFild;
  dSnsrOffsLrngSysTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngSysTqFild() = dSnsrOffsLrngSysTqFild;
  dSnsrOffsLrngTqInpDetnHwTqFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() = dSnsrOffsLrngTqInpDetnHwTqFild;
  dSnsrOffsLrngTqInpDetnStg1Outp = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() = dSnsrOffsLrngTqInpDetnStg1Outp;
  dSnsrOffsLrngYawA = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawA() = dSnsrOffsLrngYawA;
  dSnsrOffsLrngYawLrngBiasEstimnRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() = dSnsrOffsLrngYawLrngBiasEstimnRaw;
  dSnsrOffsLrngYawRateFild = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFild() = dSnsrOffsLrngYawRateFild;
  dSnsrOffsLrngYawRateFildCorrd = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() = dSnsrOffsLrngYawRateFildCorrd;
  HwTqLrngEnaTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngEnaTmrRef() = HwTqLrngEnaTmrRef;
  HwTqLrngMeasTmrRef = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngMeasTmrRef() = HwTqLrngMeasTmrRef;
  TqInpDetnPreProcEnaLoop = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnPreProcEnaLoop() = TqInpDetnPreProcEnaLoop;
  TqInpDetnStg1Idx = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Idx() = TqInpDetnStg1Idx;
  HwAgLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngStRst() = HwAgLrngStRst;
  HwTqLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngStRst() = HwTqLrngStRst;
  HwTqLrngTqInpDetnEnaPrev = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpDetnEnaPrev() = HwTqLrngTqInpDetnEnaPrev;
  HwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqLrngTqInpPrsnt() = HwTqLrngTqInpPrsnt;
  VehYawRateLrngStRst = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateLrngStRst() = VehYawRateLrngStRst;
  VehYawRateOffsFrsh = *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh();
  *TSC_SnsrOffsLrng_Rte_Pim_VehYawRateOffsFrsh() = VehYawRateOffsFrsh;
  dSnsrOffsLrngHwAgLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() = dSnsrOffsLrngHwAgLrngCdnVld;
  dSnsrOffsLrngHwAgLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngEna() = dSnsrOffsLrngHwAgLrngEna;
  dSnsrOffsLrngHwAgLrngRst = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngRst() = dSnsrOffsLrngHwAgLrngRst;
  dSnsrOffsLrngHwAgLrngSysTqVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() = dSnsrOffsLrngHwAgLrngSysTqVldt;
  dSnsrOffsLrngHwAgLrngTiVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() = dSnsrOffsLrngHwAgLrngTiVldt;
  dSnsrOffsLrngHwTqLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEna() = dSnsrOffsLrngHwTqLrngEna;
  dSnsrOffsLrngHwTqLrngEstimnVldt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() = dSnsrOffsLrngHwTqLrngEstimnVldt;
  dSnsrOffsLrngHwTqLrngMeasEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() = dSnsrOffsLrngHwTqLrngMeasEna;
  dSnsrOffsLrngHwTqLrngTqInpPrsnt = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() = dSnsrOffsLrngHwTqLrngTqInpPrsnt;
  dSnsrOffsLrngHwTqLrngTqInpPrsntVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() = dSnsrOffsLrngHwTqLrngTqInpPrsntVld;
  dSnsrOffsLrngTqInpPrsntRaw = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() = dSnsrOffsLrngTqInpPrsntRaw;
  dSnsrOffsLrngYawLrngCdnVld = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() = dSnsrOffsLrngYawLrngCdnVld;
  dSnsrOffsLrngYawLrngEna = *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna();
  *TSC_SnsrOffsLrng_Rte_Pim_dSnsrOffsLrngYawLrngEna() = dSnsrOffsLrngYawLrngEna;

  (void)memcpy(TqInpDetnStg1Buf, TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), sizeof(Ary1D_f32_72));
  (void)memcpy(TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnStg1Buf(), TqInpDetnStg1Buf, sizeof(Ary1D_f32_72));

  HwAgCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgCdngFil() = HwAgCdngFil;
  HwAgLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil1() = HwAgLrngFil1;
  HwAgLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngFil2() = HwAgLrngFil2;
  HwAgLrngSysTqFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil1() = HwAgLrngSysTqFil1;
  HwAgLrngSysTqFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgLrngSysTqFil2() = HwAgLrngSysTqFil2;
  HwAgMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil1() = HwAgMeasFil1;
  HwAgMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwAgMeasFil2() = HwAgMeasFil2;
  HwTqMeasFil1 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil1() = HwTqMeasFil1;
  HwTqMeasFil2 = *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_HwTqMeasFil2() = HwTqMeasFil2;
  HwVelCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_HwVelCdngFil() = HwVelCdngFil;
  SnsrOffsLrnd = *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd();
  *TSC_SnsrOffsLrng_Rte_Pim_SnsrOffsLrnd() = SnsrOffsLrnd;
  SysTqCdngFil = *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_SysTqCdngFil() = SysTqCdngFil;
  TqInpDetnHwTqFil = *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil();
  *TSC_SnsrOffsLrng_Rte_Pim_TqInpDetnHwTqFil() = TqInpDetnHwTqFil;
  YawACdngFil = *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil();
  *TSC_SnsrOffsLrng_Rte_Pim_YawACdngFil() = YawACdngFil;
  YawCdngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil1() = YawCdngFil1;
  YawCdngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawCdngFil2() = YawCdngFil2;
  YawLrngFil1 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil1() = YawLrngFil1;
  YawLrngFil2 = *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2();
  *TSC_SnsrOffsLrng_Rte_Pim_YawLrngFil2() = YawLrngFil2;

  SnsrOffsLrngHwAgLrngDrvgDstThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val();
  SnsrOffsLrngHwAgLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdMed_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val();
  SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val();
  SnsrOffsLrngHwAgLrngSysTqThdWide_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val();
  SnsrOffsLrngHwAgLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val();
  SnsrOffsLrngHwAgLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val();
  SnsrOffsLrngHwAgLrngYawOffsDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val();
  SnsrOffsLrngHwAgLrngYawRateThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val();
  SnsrOffsLrngHwAgOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val();
  SnsrOffsLrngHwTqLrngEnaTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val();
  SnsrOffsLrngHwTqLrngHwAgDbnd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val();
  SnsrOffsLrngHwTqLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val();
  SnsrOffsLrngHwTqLrngHwTqThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val();
  SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val();
  SnsrOffsLrngHwTqLrngHwVelThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val();
  SnsrOffsLrngHwTqLrngMeasTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val();
  SnsrOffsLrngHwTqLrngMeasTiScar_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val();
  SnsrOffsLrngHwTqLrngSampleImbThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val();
  SnsrOffsLrngHwTqLrngTiWghtCoeff_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val();
  SnsrOffsLrngHwTqLrngVehSpdThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val();
  SnsrOffsLrngHwTqOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val();
  SnsrOffsLrngHwVelFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val();
  SnsrOffsLrngTqAndAgFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val();
  SnsrOffsLrngTqInpDetnHwTqFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val();
  SnsrOffsLrngTqInpDetnPwrEstimnThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val();
  SnsrOffsLrngTqInpDetnSinGenrAmp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val();
  SnsrOffsLrngTqInpDetnSinGenrFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val();
  SnsrOffsLrngTqInpDetnStg1FilGain_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainCen_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val();
  SnsrOffsLrngTqInpDetnStg2FilGainUp_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val();
  SnsrOffsLrngYawACdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val();
  SnsrOffsLrngYawLrngHwAgThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val();
  SnsrOffsLrngYawLrngTi_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngTi_Val();
  SnsrOffsLrngYawLrngYawAThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val();
  SnsrOffsLrngYawOffsFrshTiThd_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val();
  SnsrOffsLrngYawRateCdngFilFrq_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val();
  SnsrOffsLrngYawRateOffsLim_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val();
  SysGlbPrmSysTqRat_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SysGlbPrmSysTqRat_Val();
  SnsrOffsLrngHwTqLrngSampleThd1_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val();
  SnsrOffsLrngHwTqLrngSampleThd2_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val();
  SnsrOffsLrngSampleCntForHwTqLrngRst_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val();
  SnsrOffsLrngTqInpDetnStg2WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val();
  SnsrOffsLrngTqInpDetnStg1WinSize_Val_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val();
  SnsrOffsLrngFctEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngFctEna_Logl();
  SnsrOffsLrngHwAgLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl();
  SnsrOffsLrngHwTqLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl();
  SnsrOffsLrngYawLrngEna_Logl_data = TSC_SnsrOffsLrng_Rte_Prm_SnsrOffsLrngYawLrngEna_Logl();

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwAg_Val(&Read_HwAg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwAgAuthy_Val(&Read_HwAgAuthy_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwTq_Val(&Read_HwTq_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_HwVel_Val(&Read_HwVel_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_MotTqCmdCrf_Val(&Read_MotTqCmdCrf_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_VehSpdVld_Logl(&Read_VehSpdVld_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_VehYawRate_Val(&Read_VehYawRate_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_SnsrOffsLrng_Rte_Read_VehYawRateVld_Logl(&Read_VehYawRateVld_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  SnsrOffsLrngPer2_HwTqLrngSts = TSC_SnsrOffsLrng_Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define SnsrOffsLrng_STOP_SEC_CODE
#include "SnsrOffsLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void SnsrOffsLrng_TestDefines(void)
{
  /* Enumeration Data Types */

  NvM_RequestResultType Test_NvM_RequestResultType_V_1 = NVM_REQ_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_2 = NVM_REQ_NOT_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_3 = NVM_REQ_PENDING;
  NvM_RequestResultType Test_NvM_RequestResultType_V_4 = NVM_REQ_INTEGRITY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_5 = NVM_REQ_BLOCK_SKIPPED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_6 = NVM_REQ_NV_INVALIDATED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_7 = NVM_REQ_CANCELED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_8 = NVM_REQ_REDUNDANCY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_9 = NVM_REQ_RESTORED_FROM_ROM;
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

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
