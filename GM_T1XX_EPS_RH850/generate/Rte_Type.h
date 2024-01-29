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
 *          File:  Rte_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

# define Rte_TypeDef_WdgM_CheckpointIdType
typedef uint16 WdgM_CheckpointIdType;

# define Rte_TypeDef_WdgM_ModeType
typedef uint8 WdgM_ModeType;

# define Rte_TypeDef_WdgM_SupervisedEntityIdType
typedef uint8 WdgM_SupervisedEntityIdType;

# define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

# define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_WdgM_GlobalStatusType
typedef uint8 WdgM_GlobalStatusType;

# define Rte_TypeDef_WdgM_LocalStatusType
typedef uint8 WdgM_LocalStatusType;

# define Rte_TypeDef_Ary1D_boolean_4
typedef boolean Ary1D_boolean_4[4];

# define Rte_TypeDef_Ary1D_f32_12
typedef float32 Ary1D_f32_12[12];

# define Rte_TypeDef_Ary1D_f32_2
typedef float32 Ary1D_f32_2[2];

# define Rte_TypeDef_Ary1D_f32_26
typedef float32 Ary1D_f32_26[26];

# define Rte_TypeDef_Ary1D_f32_3
typedef float32 Ary1D_f32_3[3];

# define Rte_TypeDef_Ary1D_f32_30
typedef float32 Ary1D_f32_30[30];

# define Rte_TypeDef_Ary1D_f32_4
typedef float32 Ary1D_f32_4[4];

# define Rte_TypeDef_Ary1D_f32_72
typedef float32 Ary1D_f32_72[72];

# define Rte_TypeDef_Ary1D_f32_8
typedef float32 Ary1D_f32_8[8];

# define Rte_TypeDef_Ary1D_float32_2
typedef float32 Ary1D_float32_2[2];

# define Rte_TypeDef_Ary1D_float32_4
typedef float32 Ary1D_float32_4[4];

# define Rte_TypeDef_Ary1D_float32_8
typedef float32 Ary1D_float32_8[8];

# define Rte_TypeDef_Ary1D_s16_22
typedef sint16 Ary1D_s16_22[22];

# define Rte_TypeDef_Ary1D_sint16_22
typedef sint16 Ary1D_sint16_22[22];

# define Rte_TypeDef_Ary1D_u16_3
typedef uint16 Ary1D_u16_3[3];

# define Rte_TypeDef_Ary1D_u32_2
typedef uint32 Ary1D_u32_2[2];

# define Rte_TypeDef_Ary1D_u32_40
typedef uint32 Ary1D_u32_40[40];

# define Rte_TypeDef_Ary1D_u32_512
typedef uint32 Ary1D_u32_512[512];

# define Rte_TypeDef_Ary1D_u32_8
typedef uint32 Ary1D_u32_8[8];

# define Rte_TypeDef_Ary1D_u8_10
typedef uint8 Ary1D_u8_10[10];

# define Rte_TypeDef_Ary1D_u8_12
typedef uint8 Ary1D_u8_12[12];

# define Rte_TypeDef_Ary1D_u8_14
typedef uint8 Ary1D_u8_14[14];

# define Rte_TypeDef_Ary1D_u8_16
typedef uint8 Ary1D_u8_16[16];

# define Rte_TypeDef_Ary1D_u8_17
typedef uint8 Ary1D_u8_17[17];

# define Rte_TypeDef_Ary1D_u8_2
typedef uint8 Ary1D_u8_2[2];

# define Rte_TypeDef_Ary1D_u8_20
typedef uint8 Ary1D_u8_20[20];

# define Rte_TypeDef_Ary1D_u8_22
typedef uint8 Ary1D_u8_22[22];

# define Rte_TypeDef_Ary1D_u8_225
typedef uint8 Ary1D_u8_225[225];

# define Rte_TypeDef_Ary1D_u8_4
typedef uint8 Ary1D_u8_4[4];

# define Rte_TypeDef_Ary1D_u8_40
typedef uint8 Ary1D_u8_40[40];

# define Rte_TypeDef_Ary1D_u8_48
typedef uint8 Ary1D_u8_48[48];

# define Rte_TypeDef_Ary1D_u8_5
typedef uint8 Ary1D_u8_5[5];

# define Rte_TypeDef_Ary1D_u8_6
typedef uint8 Ary1D_u8_6[6];

# define Rte_TypeDef_Ary1D_u8_7
typedef uint8 Ary1D_u8_7[7];

# define Rte_TypeDef_Ary1D_u8_8
typedef uint8 Ary1D_u8_8[8];

# define Rte_TypeDef_Ary1D_u8_822
typedef uint8 Ary1D_u8_822[822];

# define Rte_TypeDef_Ary1D_u8_9
typedef uint8 Ary1D_u8_9[9];

# define Rte_TypeDef_Ary1D_uint16_3
typedef uint16 Ary1D_uint16_3[3];

# define Rte_TypeDef_Ary1D_uint32_512
typedef uint32 Ary1D_uint32_512[512];

# define Rte_TypeDef_DataArray_Type_1
typedef uint8 DataArray_Type_1[1];

# define Rte_TypeDef_DataArray_Type_2
typedef uint8 DataArray_Type_2[2];

# define Rte_TypeDef_DataArray_Type_4
typedef uint8 DataArray_Type_4[4];

# define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[4];

# define Rte_TypeDef_CurrMeasEolGainCalRec1
typedef struct
{
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
  float32 CurrMeasMotCurrEolGainD;
  float32 CurrMeasMotCurrEolGainE;
  float32 CurrMeasMotCurrEolGainF;
} CurrMeasEolGainCalRec1;

# define Rte_TypeDef_CurrMeasEolOffsCalRec1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrEolOffsDifC;
  float32 CurrMeasMotCurrEolOffsDifD;
  float32 CurrMeasMotCurrEolOffsDifE;
  float32 CurrMeasMotCurrEolOffsDifF;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
  float32 CurrMeasMotCurrOffsLoAvrgC;
  float32 CurrMeasMotCurrOffsLoAvrgD;
  float32 CurrMeasMotCurrOffsLoAvrgE;
  float32 CurrMeasMotCurrOffsLoAvrgF;
} CurrMeasEolOffsCalRec1;

# define Rte_TypeDef_DiagcDataRec1
typedef struct
{
  uint16 DiagcSts;
  float32 ActvRampRate;
  float32 ActvMotTqCmdSca;
} DiagcDataRec1;

# define Rte_TypeDef_DutyCycThermProtnFilStValRec1
typedef struct
{
  uint8 Fil3StVal;
  uint8 Fil4StVal;
  uint8 Fil5StVal;
  uint8 Fil6StVal;
} DutyCycThermProtnFilStValRec1;

# define Rte_TypeDef_EotNvmDataRec1
typedef struct
{
  float32 CwEot;
  float32 CcwEot;
  boolean CwEotDetd;
  boolean CcwEotDetd;
} EotNvmDataRec1;

# define Rte_TypeDef_FilNotchGainRec1
typedef struct
{
  float32 FilGainB0;
  float32 FilGainB1;
  float32 FilGainB2;
  float32 FilGainA1;
  float32 FilGainA2;
} FilNotchGainRec1;

# define Rte_TypeDef_FilNotchStRec1
typedef struct
{
  float32 FilSt1;
  float32 FilSt2;
} FilNotchStRec1;

# define Rte_TypeDef_HwAgOffsRec1
typedef struct
{
  float32 OffsTrim;
  boolean OffsTrimPrfmdSts;
} HwAgOffsRec1;

# define Rte_TypeDef_HwAgSnsrTrimRec1
typedef struct
{
  float32 TrimVal;
  boolean TrimPrfmd;
} HwAgSnsrTrimRec1;

# define Rte_TypeDef_HwTqOffsRec1
typedef struct
{
  float32 OffsTrim;
  boolean OffsTrimPrfmdSts;
} HwTqOffsRec1;

# define Rte_TypeDef_MaxHwAgCwAndCcwRec2
typedef struct
{
  float32 HwAgCcwMax;
  float32 HwAgCwMax;
  uint8 HwAgOverTrvlCnt;
} MaxHwAgCwAndCcwRec2;

# define Rte_TypeDef_MotAgMeasEolPrmRec1
typedef struct
{
  float32 SinOffs;
  float32 CosOffs;
  float32 SinAmpRecpr;
  float32 CosAmpRecpr;
  float32 SinDelta;
} MotAgMeasEolPrmRec1;

# define Rte_TypeDef_MotPrmNomEolRec3
typedef struct
{
  float32 MotBackEmfConNom;
  float32 MotRNom;
} MotPrmNomEolRec3;

# define Rte_TypeDef_StordLstPrmRec1
typedef struct
{
  float32 PinionAg;
  boolean PinionAgVld;
} StordLstPrmRec1;

# define Rte_TypeDef_SysFricNonLrngDataRec1
typedef struct
{
  float32 EolFric;
  boolean EnaFricLrng;
  boolean EnaFricOffsOutp;
} SysFricNonLrngDataRec1;

# define Rte_TypeDef_WhlImbRejctnCmpPeakRec1
typedef struct
{
  float32 LePeakPrev;
  float32 RiPeakPrev;
  float32 MaxCompPerc;
  uint32 ActvCmpBand1;
  uint32 ActvCmpBand2;
  uint32 ActvCmpBand3;
} WhlImbRejctnCmpPeakRec1;

# define Rte_TypeDef_AdrMpgReqTyp1
typedef uint8 AdrMpgReqTyp1;

# define Rte_TypeDef_Ary2D_f32_3_3
typedef Ary1D_f32_3 Ary2D_f32_3_3[3];

# define Rte_TypeDef_Ary2D_f32_4_2
typedef Ary1D_f32_2 Ary2D_f32_4_2[4];

# define Rte_TypeDef_Ary2D_f32_8_4
typedef Ary1D_f32_4 Ary2D_f32_8_4[8];

# define Rte_TypeDef_Ary2D_float32_4_2
typedef Ary1D_float32_2 Ary2D_float32_4_2[4];

# define Rte_TypeDef_Ary2D_float32_8_4
typedef Ary1D_float32_4 Ary2D_float32_8_4[8];

# define Rte_TypeDef_Ary2D_u16_8_3
typedef Ary1D_u16_3 Ary2D_u16_8_3[8];

# define Rte_TypeDef_Ary2D_uint16_8_3
typedef Ary1D_uint16_3 Ary2D_uint16_8_3[8];

# define Rte_TypeDef_CalCopySts1
typedef uint8 CalCopySts1;

# define Rte_TypeDef_CrcHwResvCfg1
typedef uint8 CrcHwResvCfg1;

# define Rte_TypeDef_CrcHwResvMod1
typedef uint8 CrcHwResvMod1;

# define Rte_TypeDef_CrcHwSts1
typedef uint8 CrcHwSts1;

# define Rte_TypeDef_CrcHwStsRec1
typedef struct
{
  uint16 TaskId;
  CrcHwSts1 CrcHwSts;
} CrcHwStsRec1;

# define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

# define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

# define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

# define Rte_TypeDef_Dem_DTCOriginType
typedef uint8 Dem_DTCOriginType;

# define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

# define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

# define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dem_EventStatusExtendedType
typedef uint8 Dem_EventStatusExtendedType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

# define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

# define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

# define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

# define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

# define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

# define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

# define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

# define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

# define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

# define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

# define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

# define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

# define Rte_TypeDef_GetSegMod1
typedef uint8 GetSegMod1;

# define Rte_TypeDef_GmFctDiArbnSts1
typedef uint8 GmFctDiArbnSts1;

# define Rte_TypeDef_GmSysPwrMod1
typedef uint8 GmSysPwrMod1;

# define Rte_TypeDef_GmTqArbnEscSt1
typedef uint8 GmTqArbnEscSt1;

# define Rte_TypeDef_GmTqArbnLkaSt1
typedef uint8 GmTqArbnLkaSt1;

# define Rte_TypeDef_HwAgTrajCmdSt1
typedef uint16 HwAgTrajCmdSt1;

# define Rte_TypeDef_IOHWAB_BOOL
typedef boolean IOHWAB_BOOL;

# define Rte_TypeDef_LoaSt1
typedef uint8 LoaSt1;

# define Rte_TypeDef_MfgEnaSt1
typedef uint8 MfgEnaSt1;

# define Rte_TypeDef_MotCurrEolCalSt2
typedef uint8 MotCurrEolCalSt2;

# define Rte_TypeDef_MotQuad1
typedef uint8 MotQuad1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcNrWithResd1
typedef uint16 NtcNrWithResd1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_OnlineCalStsRec1
typedef struct
{
  Ary1D_OnlineCalSegInfoRec1_TunSelnMngt1 Seg;
  CalCopySts1 CopySts;
  uint8 ActvGroup;
  uint8 ActvInin;
  uint8 ActvRt;
} OnlineCalStsRec1;

# define Rte_TypeDef_ReadFltInfoRec1
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} ReadFltInfoRec1;

# define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;

# define Rte_TypeDef_StHlthMonSig2
typedef uint8 StHlthMonSig2;

# define Rte_TypeDef_StHlthMonSig3
typedef uint8 StHlthMonSig3;

# define Rte_TypeDef_SysFricLrngOperMod1
typedef uint8 SysFricLrngOperMod1;

# define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

# define Rte_TypeDef_s10p5
typedef sint16 s10p5;

# define Rte_TypeDef_s11p4
typedef sint16 s11p4;

# define Rte_TypeDef_s14p1
typedef sint16 s14p1;

# define Rte_TypeDef_s15p0
typedef sint16 s15p0;

# define Rte_TypeDef_s15p16
typedef sint32 s15p16;

# define Rte_TypeDef_s18p13
typedef sint32 s18p13;

# define Rte_TypeDef_s1p14
typedef sint16 s1p14;

# define Rte_TypeDef_s3p12
typedef sint16 s3p12;

# define Rte_TypeDef_s4p11
typedef sint16 s4p11;

# define Rte_TypeDef_s5p10
typedef sint16 s5p10;

# define Rte_TypeDef_s6p9
typedef sint16 s6p9;

# define Rte_TypeDef_s7p8
typedef sint16 s7p8;

# define Rte_TypeDef_s8p7
typedef sint16 s8p7;

# define Rte_TypeDef_sm5p12
typedef sint8 sm5p12;

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u10p6
typedef uint16 u10p6;

# define Rte_TypeDef_u11p5
typedef uint16 u11p5;

# define Rte_TypeDef_u12p4
typedef uint16 u12p4;

# define Rte_TypeDef_u13p3
typedef uint16 u13p3;

# define Rte_TypeDef_u16p0
typedef uint16 u16p0;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u2p14
typedef uint16 u2p14;

# define Rte_TypeDef_u3p13
typedef uint16 u3p13;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_u5p11
typedef uint16 u5p11;

# define Rte_TypeDef_u6p10
typedef uint16 u6p10;

# define Rte_TypeDef_u7p9
typedef uint16 u7p9;

# define Rte_TypeDef_u8p8
typedef uint16 u8p8;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_CrcHwStsRec1_4
typedef CrcHwStsRec1 Ary1D_CrcHwStsRec1_4[4];

# define Rte_TypeDef_Ary1D_ReadFltInfoRec1_20
typedef ReadFltInfoRec1 Ary1D_ReadFltInfoRec1_20[20];

# define Rte_TypeDef_Ary1D_s11p4_11
typedef s11p4 Ary1D_s11p4_11[11];

# define Rte_TypeDef_Ary1D_s11p4_14
typedef s11p4 Ary1D_s11p4_14[14];

# define Rte_TypeDef_Ary1D_s11p4_5
typedef s11p4 Ary1D_s11p4_5[5];

# define Rte_TypeDef_Ary1D_s14p1_8
typedef s14p1 Ary1D_s14p1_8[8];

# define Rte_TypeDef_Ary1D_s15p0_4
typedef s15p0 Ary1D_s15p0_4[4];

# define Rte_TypeDef_Ary1D_s15p0_5
typedef s15p0 Ary1D_s15p0_5[5];

# define Rte_TypeDef_Ary1D_s1p14_12
typedef s1p14 Ary1D_s1p14_12[12];

# define Rte_TypeDef_Ary1D_s1p14_128
typedef s1p14 Ary1D_s1p14_128[128];

# define Rte_TypeDef_Ary1D_s1p14_512
typedef s1p14 Ary1D_s1p14_512[512];

# define Rte_TypeDef_Ary1D_s4p11_11
typedef s4p11 Ary1D_s4p11_11[11];

# define Rte_TypeDef_Ary1D_s4p11_20
typedef s4p11 Ary1D_s4p11_20[20];

# define Rte_TypeDef_Ary1D_s4p11_5
typedef s4p11 Ary1D_s4p11_5[5];

# define Rte_TypeDef_Ary1D_s4p11_8
typedef s4p11 Ary1D_s4p11_8[8];

# define Rte_TypeDef_Ary1D_s7p8_11
typedef s7p8 Ary1D_s7p8_11[11];

# define Rte_TypeDef_Ary1D_s7p8_5
typedef s7p8 Ary1D_s7p8_5[5];

# define Rte_TypeDef_Ary1D_s7p8_6
typedef s7p8 Ary1D_s7p8_6[6];

# define Rte_TypeDef_Ary1D_s8p7_14
typedef s8p7 Ary1D_s8p7_14[14];

# define Rte_TypeDef_Ary1D_s8p7_3
typedef s8p7 Ary1D_s8p7_3[3];

# define Rte_TypeDef_Ary1D_sm5p12_128
typedef sm5p12 Ary1D_sm5p12_128[128];

# define Rte_TypeDef_Ary1D_u0p16_10
typedef u0p16 Ary1D_u0p16_10[10];

# define Rte_TypeDef_Ary1D_u0p16_2
typedef u0p16 Ary1D_u0p16_2[2];

# define Rte_TypeDef_Ary1D_u0p16_3
typedef u0p16 Ary1D_u0p16_3[3];

# define Rte_TypeDef_Ary1D_u0p16_8
typedef u0p16 Ary1D_u0p16_8[8];

# define Rte_TypeDef_Ary1D_u10p6_3
typedef u10p6 Ary1D_u10p6_3[3];

# define Rte_TypeDef_Ary1D_u10p6_4
typedef u10p6 Ary1D_u10p6_4[4];

# define Rte_TypeDef_Ary1D_u10p6_5
typedef u10p6 Ary1D_u10p6_5[5];

# define Rte_TypeDef_Ary1D_u10p6_7
typedef u10p6 Ary1D_u10p6_7[7];

# define Rte_TypeDef_Ary1D_u10p6_8
typedef u10p6 Ary1D_u10p6_8[8];

# define Rte_TypeDef_Ary1D_u11p5_10
typedef u11p5 Ary1D_u11p5_10[10];

# define Rte_TypeDef_Ary1D_u11p5_11
typedef u11p5 Ary1D_u11p5_11[11];

# define Rte_TypeDef_Ary1D_u11p5_13
typedef u11p5 Ary1D_u11p5_13[13];

# define Rte_TypeDef_Ary1D_u11p5_4
typedef u11p5 Ary1D_u11p5_4[4];

# define Rte_TypeDef_Ary1D_u11p5_6
typedef u11p5 Ary1D_u11p5_6[6];

# define Rte_TypeDef_Ary1D_u11p5_8
typedef u11p5 Ary1D_u11p5_8[8];

# define Rte_TypeDef_Ary1D_u12p4_13
typedef u12p4 Ary1D_u12p4_13[13];

# define Rte_TypeDef_Ary1D_u12p4_16
typedef u12p4 Ary1D_u12p4_16[16];

# define Rte_TypeDef_Ary1D_u12p4_2
typedef u12p4 Ary1D_u12p4_2[2];

# define Rte_TypeDef_Ary1D_u12p4_4
typedef u12p4 Ary1D_u12p4_4[4];

# define Rte_TypeDef_Ary1D_u12p4_7
typedef u12p4 Ary1D_u12p4_7[7];

# define Rte_TypeDef_Ary1D_u13p3_2
typedef u13p3 Ary1D_u13p3_2[2];

# define Rte_TypeDef_Ary1D_u13p3_6
typedef u13p3 Ary1D_u13p3_6[6];

# define Rte_TypeDef_Ary1D_u16p0_2
typedef u16p0 Ary1D_u16p0_2[2];

# define Rte_TypeDef_Ary1D_u16p0_20
typedef u16p0 Ary1D_u16p0_20[20];

# define Rte_TypeDef_Ary1D_u16p0_8
typedef u16p0 Ary1D_u16p0_8[8];

# define Rte_TypeDef_Ary1D_u1p15_10
typedef u1p15 Ary1D_u1p15_10[10];

# define Rte_TypeDef_Ary1D_u1p15_11
typedef u1p15 Ary1D_u1p15_11[11];

# define Rte_TypeDef_Ary1D_u1p15_12
typedef u1p15 Ary1D_u1p15_12[12];

# define Rte_TypeDef_Ary1D_u1p15_2
typedef u1p15 Ary1D_u1p15_2[2];

# define Rte_TypeDef_Ary1D_u1p15_4
typedef u1p15 Ary1D_u1p15_4[4];

# define Rte_TypeDef_Ary1D_u1p15_5
typedef u1p15 Ary1D_u1p15_5[5];

# define Rte_TypeDef_Ary1D_u1p15_6
typedef u1p15 Ary1D_u1p15_6[6];

# define Rte_TypeDef_Ary1D_u2p14_12
typedef u2p14 Ary1D_u2p14_12[12];

# define Rte_TypeDef_Ary1D_u2p14_16
typedef u2p14 Ary1D_u2p14_16[16];

# define Rte_TypeDef_Ary1D_u2p14_2
typedef u2p14 Ary1D_u2p14_2[2];

# define Rte_TypeDef_Ary1D_u2p14_3
typedef u2p14 Ary1D_u2p14_3[3];

# define Rte_TypeDef_Ary1D_u2p14_4
typedef u2p14 Ary1D_u2p14_4[4];

# define Rte_TypeDef_Ary1D_u2p14_5
typedef u2p14 Ary1D_u2p14_5[5];

# define Rte_TypeDef_Ary1D_u2p14_6
typedef u2p14 Ary1D_u2p14_6[6];

# define Rte_TypeDef_Ary1D_u2p14_7
typedef u2p14 Ary1D_u2p14_7[7];

# define Rte_TypeDef_Ary1D_u2p14_8
typedef u2p14 Ary1D_u2p14_8[8];

# define Rte_TypeDef_Ary1D_u3p13_10
typedef u3p13 Ary1D_u3p13_10[10];

# define Rte_TypeDef_Ary1D_u3p13_13
typedef u3p13 Ary1D_u3p13_13[13];

# define Rte_TypeDef_Ary1D_u3p13_5
typedef u3p13 Ary1D_u3p13_5[5];

# define Rte_TypeDef_Ary1D_u3p13_8
typedef u3p13 Ary1D_u3p13_8[8];

# define Rte_TypeDef_Ary1D_u4p12_10
typedef u4p12 Ary1D_u4p12_10[10];

# define Rte_TypeDef_Ary1D_u4p12_11
typedef u4p12 Ary1D_u4p12_11[11];

# define Rte_TypeDef_Ary1D_u4p12_12
typedef u4p12 Ary1D_u4p12_12[12];

# define Rte_TypeDef_Ary1D_u4p12_13
typedef u4p12 Ary1D_u4p12_13[13];

# define Rte_TypeDef_Ary1D_u4p12_14
typedef u4p12 Ary1D_u4p12_14[14];

# define Rte_TypeDef_Ary1D_u4p12_2
typedef u4p12 Ary1D_u4p12_2[2];

# define Rte_TypeDef_Ary1D_u4p12_20
typedef u4p12 Ary1D_u4p12_20[20];

# define Rte_TypeDef_Ary1D_u4p12_4
typedef u4p12 Ary1D_u4p12_4[4];

# define Rte_TypeDef_Ary1D_u4p12_5
typedef u4p12 Ary1D_u4p12_5[5];

# define Rte_TypeDef_Ary1D_u4p12_6
typedef u4p12 Ary1D_u4p12_6[6];

# define Rte_TypeDef_Ary1D_u4p12_8
typedef u4p12 Ary1D_u4p12_8[8];

# define Rte_TypeDef_Ary1D_u5p11_10
typedef u5p11 Ary1D_u5p11_10[10];

# define Rte_TypeDef_Ary1D_u5p11_11
typedef u5p11 Ary1D_u5p11_11[11];

# define Rte_TypeDef_Ary1D_u5p11_13
typedef u5p11 Ary1D_u5p11_13[13];

# define Rte_TypeDef_Ary1D_u5p11_14
typedef u5p11 Ary1D_u5p11_14[14];

# define Rte_TypeDef_Ary1D_u5p11_16
typedef u5p11 Ary1D_u5p11_16[16];

# define Rte_TypeDef_Ary1D_u5p11_17
typedef u5p11 Ary1D_u5p11_17[17];

# define Rte_TypeDef_Ary1D_u5p11_5
typedef u5p11 Ary1D_u5p11_5[5];

# define Rte_TypeDef_Ary1D_u5p11_6
typedef u5p11 Ary1D_u5p11_6[6];

# define Rte_TypeDef_Ary1D_u5p11_8
typedef u5p11 Ary1D_u5p11_8[8];

# define Rte_TypeDef_Ary1D_u6p10_10
typedef u6p10 Ary1D_u6p10_10[10];

# define Rte_TypeDef_Ary1D_u6p10_17
typedef u6p10 Ary1D_u6p10_17[17];

# define Rte_TypeDef_Ary1D_u6p10_6
typedef u6p10 Ary1D_u6p10_6[6];

# define Rte_TypeDef_Ary1D_u7p9_12
typedef u7p9 Ary1D_u7p9_12[12];

# define Rte_TypeDef_Ary1D_u7p9_3
typedef u7p9 Ary1D_u7p9_3[3];

# define Rte_TypeDef_Ary1D_u7p9_4
typedef u7p9 Ary1D_u7p9_4[4];

# define Rte_TypeDef_Ary1D_u7p9_6
typedef u7p9 Ary1D_u7p9_6[6];

# define Rte_TypeDef_Ary1D_u8p8_11
typedef u8p8 Ary1D_u8p8_11[11];

# define Rte_TypeDef_Ary1D_u8p8_14
typedef u8p8 Ary1D_u8p8_14[14];

# define Rte_TypeDef_Ary1D_u8p8_2
typedef u8p8 Ary1D_u8p8_2[2];

# define Rte_TypeDef_Ary1D_u8p8_20
typedef u8p8 Ary1D_u8p8_20[20];

# define Rte_TypeDef_Ary1D_u8p8_4
typedef u8p8 Ary1D_u8p8_4[4];

# define Rte_TypeDef_Ary1D_u8p8_5
typedef u8p8 Ary1D_u8p8_5[5];

# define Rte_TypeDef_Ary1D_u8p8_6
typedef u8p8 Ary1D_u8p8_6[6];

# define Rte_TypeDef_Ary1D_u8p8_7
typedef u8p8 Ary1D_u8p8_7[7];

# define Rte_TypeDef_Ary1D_u8p8_8
typedef u8p8 Ary1D_u8p8_8[8];

# define Rte_TypeDef_Ary1D_u9p7_10
typedef u9p7 Ary1D_u9p7_10[10];

# define Rte_TypeDef_Ary1D_u9p7_12
typedef u9p7 Ary1D_u9p7_12[12];

# define Rte_TypeDef_Ary1D_u9p7_16
typedef u9p7 Ary1D_u9p7_16[16];

# define Rte_TypeDef_Ary1D_u9p7_2
typedef u9p7 Ary1D_u9p7_2[2];

# define Rte_TypeDef_Ary1D_u9p7_3
typedef u9p7 Ary1D_u9p7_3[3];

# define Rte_TypeDef_Ary1D_u9p7_4
typedef u9p7 Ary1D_u9p7_4[4];

# define Rte_TypeDef_Ary1D_u9p7_5
typedef u9p7 Ary1D_u9p7_5[5];

# define Rte_TypeDef_Ary1D_u9p7_6
typedef u9p7 Ary1D_u9p7_6[6];

# define Rte_TypeDef_Ary1D_u9p7_7
typedef u9p7 Ary1D_u9p7_7[7];

# define Rte_TypeDef_Ary1D_u9p7_8
typedef u9p7 Ary1D_u9p7_8[8];

# define Rte_TypeDef_Ary1D_u9p7_9
typedef u9p7 Ary1D_u9p7_9[9];

# define Rte_TypeDef_Ary2D_s1p14_10_12
typedef Ary1D_s1p14_12 Ary2D_s1p14_10_12[10];

# define Rte_TypeDef_Ary2D_s4p11_11_8
typedef Ary1D_s4p11_8 Ary2D_s4p11_11_8[11];

# define Rte_TypeDef_Ary2D_s4p11_12_11
typedef Ary1D_s4p11_11 Ary2D_s4p11_12_11[12];

# define Rte_TypeDef_Ary2D_s4p11_12_20
typedef Ary1D_s4p11_20 Ary2D_s4p11_12_20[12];

# define Rte_TypeDef_Ary2D_s4p11_8_11
typedef Ary1D_s4p11_11 Ary2D_s4p11_8_11[8];

# define Rte_TypeDef_Ary2D_s7p8_12_11
typedef Ary1D_s7p8_11 Ary2D_s7p8_12_11[12];

# define Rte_TypeDef_Ary2D_s7p8_4_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_4_5[4];

# define Rte_TypeDef_Ary2D_s7p8_9_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_9_5[9];

# define Rte_TypeDef_Ary2D_s7p8_9_6
typedef Ary1D_s7p8_6 Ary2D_s7p8_9_6[9];

# define Rte_TypeDef_Ary2D_u0p16_20_8
typedef Ary1D_u0p16_8 Ary2D_u0p16_20_8[20];

# define Rte_TypeDef_Ary2D_u0p16_4_2
typedef Ary1D_u0p16_2 Ary2D_u0p16_4_2[4];

# define Rte_TypeDef_Ary2D_u10p6_3_7
typedef Ary1D_u10p6_7 Ary2D_u10p6_3_7[3];

# define Rte_TypeDef_Ary2D_u12p4_12_13
typedef Ary1D_u12p4_13 Ary2D_u12p4_12_13[12];

# define Rte_TypeDef_Ary2D_u12p4_4_2
typedef Ary1D_u12p4_2 Ary2D_u12p4_4_2[4];

# define Rte_TypeDef_Ary2D_u12p4_5_4
typedef Ary1D_u12p4_4 Ary2D_u12p4_5_4[5];

# define Rte_TypeDef_Ary2D_u12p4_9_16
typedef Ary1D_u12p4_16 Ary2D_u12p4_9_16[9];

# define Rte_TypeDef_Ary2D_u1p15_12_5
typedef Ary1D_u1p15_5 Ary2D_u1p15_12_5[12];

# define Rte_TypeDef_Ary2D_u1p15_5_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_5_4[5];

# define Rte_TypeDef_Ary2D_u1p15_8_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_8_4[8];

# define Rte_TypeDef_Ary2D_u2p14_12_5
typedef Ary1D_u2p14_5 Ary2D_u2p14_12_5[12];

# define Rte_TypeDef_Ary2D_u2p14_6_5
typedef Ary1D_u2p14_5 Ary2D_u2p14_6_5[6];

# define Rte_TypeDef_Ary2D_u2p14_6_7
typedef Ary1D_u2p14_7 Ary2D_u2p14_6_7[6];

# define Rte_TypeDef_Ary2D_u3p13_12_13
typedef Ary1D_u3p13_13 Ary2D_u3p13_12_13[12];

# define Rte_TypeDef_Ary2D_u3p13_20_8
typedef Ary1D_u3p13_8 Ary2D_u3p13_20_8[20];

# define Rte_TypeDef_Ary2D_u4p12_12_20
typedef Ary1D_u4p12_20 Ary2D_u4p12_12_20[12];

# define Rte_TypeDef_Ary2D_u4p12_12_5
typedef Ary1D_u4p12_5 Ary2D_u4p12_12_5[12];

# define Rte_TypeDef_Ary2D_u4p12_12_8
typedef Ary1D_u4p12_8 Ary2D_u4p12_12_8[12];

# define Rte_TypeDef_Ary2D_u4p12_3_13
typedef Ary1D_u4p12_13 Ary2D_u4p12_3_13[3];

# define Rte_TypeDef_Ary2D_u5p11_12_13
typedef Ary1D_u5p11_13 Ary2D_u5p11_12_13[12];

# define Rte_TypeDef_Ary2D_u5p11_12_5
typedef Ary1D_u5p11_5 Ary2D_u5p11_12_5[12];

# define Rte_TypeDef_Ary2D_u5p11_9_16
typedef Ary1D_u5p11_16 Ary2D_u5p11_9_16[9];

# define Rte_TypeDef_Ary2D_u7p9_9_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_9_4[9];

# define Rte_TypeDef_Ary2D_u8p8_12_20
typedef Ary1D_u8p8_20 Ary2D_u8p8_12_20[12];

# define Rte_TypeDef_Ary2D_u8p8_6_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_6_5[6];

# define Rte_TypeDef_Ary2D_u8p8_9_4
typedef Ary1D_u8p8_4 Ary2D_u8p8_9_4[9];

# define Rte_TypeDef_Ary2D_u8p8_9_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_9_5[9];

# define Rte_TypeDef_Ary2D_u8p8_9_6
typedef Ary1D_u8p8_6 Ary2D_u8p8_9_6[9];

# define Rte_TypeDef_Ary2D_u8p8_9_8
typedef Ary1D_u8p8_8 Ary2D_u8p8_9_8[9];

# define Rte_TypeDef_BlkFltTblRec1
typedef struct
{
  NtcSts1 Sts;
  uint8 Prm;
} BlkFltTblRec1;

# define Rte_TypeDef_MotRplCoggPrmRec2
typedef struct
{
  uint16 CoggOrder1;
  s1p14 CoggOrder1X;
  s1p14 CoggOrder1Y;
  uint16 CoggOrder2;
  s1p14 CoggOrder2X;
  s1p14 CoggOrder2Y;
  uint16 CoggOrder3;
  s1p14 CoggOrder3X;
  s1p14 CoggOrder3Y;
} MotRplCoggPrmRec2;

# define Rte_TypeDef_NtcFltInfoRec2
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
} NtcFltInfoRec2;

# define Rte_TypeDef_PassFailCntrDiagcRec1
typedef struct
{
  float32 Cntr;
  float32 Thd;
  float32 NegStep;
  float32 PosStep;
  SigQlfr1 Sts;
} PassFailCntrDiagcRec1;

# define Rte_TypeDef_SnpshtDataRec1
typedef struct
{
  uint32 MicroDiagcData;
  s5p10 HwTq;
  s5p10 MotTq;
  uint32 IgnCntr;
  u6p10 BrdgVltg;
  s8p7 EcuT;
  uint16 NtcNr;
  uint8 NtcStInfo;
  SysSt1 SysSt;
  u9p7 VehSpd;
} SnpshtDataRec1;

# define Rte_TypeDef_SnsrLrndOffsRec1
typedef struct
{
  float32 HwAgLrndTi;
  float32 YawRateElpdTi;
  Ary2D_f32_3_3 HwTqLrngCovariMtrx;
  Ary1D_f32_3 HwTqLrngEstimnVect;
  s6p9 YawRateOffs;
  s5p10 HwAgOffs;
  s3p12 HwTqOffs;
  s6p9 HwAgLrngYawOffsRef;
  s11p4 HwAgLrngHwAgFilSt;
  s10p5 HwAgLrngSysTqFilSt;
  s11p4 HwTqLrngHwAgRef;
  uint16 HwTqLrngSampleCntNeg;
  uint16 HwTqLrngSampleCntPos;
  uint8 HwTqLrngSts;
  boolean YawRateOffsVld;
} SnsrLrndOffsRec1;

# define Rte_TypeDef_SysFricDataRec1
typedef struct
{
  float32 FricOffs;
  Ary1D_f32_4 BasLineFric;
  Ary1D_f32_4 VehLrndFric;
  Ary2D_f32_8_4 Hys;
  Ary2D_u16_8_3 RngCntr;
  SysFricLrngOperMod1 SysFricLrngOperMod;
} SysFricDataRec1;

# define Rte_TypeDef_Ary1D_BlkFltTblRec1_5
typedef BlkFltTblRec1 Ary1D_BlkFltTblRec1_5[5];

# define Rte_TypeDef_Ary1D_NtcFltInfoRec2_20
typedef NtcFltInfoRec2 Ary1D_NtcFltInfoRec2_20[20];

# define Rte_TypeDef_Ary1D_SnpshtDataRec1_8
typedef SnpshtDataRec1 Ary1D_SnpshtDataRec1_8[8];


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_UInt16
typedef uint16 UInt16;

#  define Rte_TypeDef_UInt8
typedef uint8 UInt8;

#  define Rte_TypeDef_Ary1D_f32_5
typedef float32 Ary1D_f32_5[5];

#  define Rte_TypeDef_Ary1D_u08_14
typedef uint8 Ary1D_u08_14[14];

#  define Rte_TypeDef_Ary1D_u08_22
typedef uint8 Ary1D_u08_22[22];

#  define Rte_TypeDef_Ary1D_u08_48
typedef uint8 Ary1D_u08_48[48];

#  define Rte_TypeDef_Ary1D_u08_6
typedef uint8 Ary1D_u08_6[6];

#  define Rte_TypeDef_Ary1D_u16_257
typedef uint16 Ary1D_u16_257[257];

#  define Rte_TypeDef_Ary1D_u8_520
typedef uint8 Ary1D_u8_520[520];

#  define Rte_TypeDef_Ary1D_uint8_14
typedef uint8 Ary1D_uint8_14[14];

#  define Rte_TypeDef_Ary1D_uint8_22
typedef uint8 Ary1D_uint8_22[22];

#  define Rte_TypeDef_Ary1D_uint8_48
typedef uint8 Ary1D_uint8_48[48];

#  define Rte_TypeDef_Ary1D_uint8_6
typedef uint8 Ary1D_uint8_6[6];

#  define Rte_TypeDef_AnHwTqScaFacRec1
typedef struct
{
  float32 SnsrSca;
  boolean SnsrScaPrfmdSts;
} AnHwTqScaFacRec1;

#  define Rte_TypeDef_CurrMeasEolOffsGainCalRec1
typedef struct
{
  float32 CurrMeasMotCurrOffsZeroAvrgA;
  float32 CurrMeasMotCurrOffsZeroAvrgB;
  float32 CurrMeasMotCurrOffsZeroAvrgC;
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
} CurrMeasEolOffsGainCalRec1;

#  define Rte_TypeDef_EOLGainOffs1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
  float32 CurrMeasMotCurrEolGainD;
  float32 CurrMeasMotCurrEolGainE;
  float32 CurrMeasMotCurrEolGainF;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrEolOffsDifC;
  float32 CurrMeasMotCurrEolOffsDifD;
  float32 CurrMeasMotCurrEolOffsDifE;
  float32 CurrMeasMotCurrEolOffsDifF;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
  float32 CurrMeasMotCurrOffsLoAvrgC;
  float32 CurrMeasMotCurrOffsLoAvrgD;
  float32 CurrMeasMotCurrOffsLoAvrgE;
  float32 CurrMeasMotCurrOffsLoAvrgF;
} EOLGainOffs1;

#  define Rte_TypeDef_MaxHwAgCwAndCcwRec1
typedef struct
{
  float32 HwAgCcwMax;
  float32 HwAgCwMax;
} MaxHwAgCwAndCcwRec1;

#  define Rte_TypeDef_MotPrmNomEolRec2
typedef struct
{
  float32 MotKeNom;
  float32 MotRNom;
} MotPrmNomEolRec2;

#  define Rte_TypeDef_NtcFltInfoRec1
typedef struct
{
  uint16 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} NtcFltInfoRec1;

#  define Rte_TypeDef_NtcInfoRec1
typedef struct
{
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} NtcInfoRec1;

#  define Rte_TypeDef_NvMProxyNonTrustedRtnBufRec
typedef struct
{
  uint8 StdRtn;
  uint8 ReqPen;
  uint8 ReqRes;
} NvMProxyNonTrustedRtnBufRec;

#  define Rte_TypeDef_SyncCrcHwStsRec1
typedef struct
{
  uint16 TaskId;
  uint8 CrcHwSts;
} SyncCrcHwStsRec1;

#  define Rte_TypeDef_Ary1D_NtcFltInfoRec1_20
typedef NtcFltInfoRec1 Ary1D_NtcFltInfoRec1_20[20];

#  define Rte_TypeDef_Ary1D_NtcInfoRec1_512
typedef NtcInfoRec1 Ary1D_NtcInfoRec1_512[512];

#  define Rte_TypeDef_Ary1D_s10p5_8
typedef s10p5 Ary1D_s10p5_8[8];

#  define Rte_TypeDef_Ary1D_s7p8_12
typedef s7p8 Ary1D_s7p8_12[12];

#  define Rte_TypeDef_Ary1D_s7p8_20
typedef s7p8 Ary1D_s7p8_20[20];

#  define Rte_TypeDef_Ary1D_u10p6_12
typedef u10p6 Ary1D_u10p6_12[12];

#  define Rte_TypeDef_Ary1D_u10p6_13
typedef u10p6 Ary1D_u10p6_13[13];

#  define Rte_TypeDef_Ary1D_u10p6_9
typedef u10p6 Ary1D_u10p6_9[9];

#  define Rte_TypeDef_Ary1D_u12p4_12
typedef u12p4 Ary1D_u12p4_12[12];

#  define Rte_TypeDef_Ary1D_u12p4_9
typedef u12p4 Ary1D_u12p4_9[9];

#  define Rte_TypeDef_Ary1D_u2p14_10
typedef u2p14 Ary1D_u2p14_10[10];

#  define Rte_TypeDef_Ary1D_u2p14_9
typedef u2p14 Ary1D_u2p14_9[9];

#  define Rte_TypeDef_Ary1D_u4p12_3
typedef u4p12 Ary1D_u4p12_3[3];

#  define Rte_TypeDef_Ary1D_u6p10_9
typedef u6p10 Ary1D_u6p10_9[9];

#  define Rte_TypeDef_Ary1D_u8p8_10
typedef u8p8 Ary1D_u8p8_10[10];

#  define Rte_TypeDef_Ary1D_u8p8_3
typedef u8p8 Ary1D_u8p8_3[3];

#  define Rte_TypeDef_Ary2D_f32_4_5
typedef Ary1D_f32_5 Ary2D_f32_4_5[4];

#  define Rte_TypeDef_Ary2D_f32_4_8
typedef Ary1D_f32_8 Ary2D_f32_4_8[4];

#  define Rte_TypeDef_Ary2D_f32_5_4
typedef Ary1D_f32_4 Ary2D_f32_5_4[5];

#  define Rte_TypeDef_Ary2D_f32_5_5
typedef Ary1D_f32_5 Ary2D_f32_5_5[5];

#  define Rte_TypeDef_Ary2D_s11p4_1_5
typedef Ary1D_s11p4_5 Ary2D_s11p4_1_5[1];

#  define Rte_TypeDef_Ary2D_s7p8_11_12
typedef Ary1D_s7p8_12 Ary2D_s7p8_11_12[11];

#  define Rte_TypeDef_Ary2D_s7p8_3_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_3_5[3];

#  define Rte_TypeDef_Ary2D_s7p8_3_6
typedef Ary1D_s7p8_6 Ary2D_s7p8_3_6[3];

#  define Rte_TypeDef_Ary2D_u10p6_1_5
typedef Ary1D_u10p6_5 Ary2D_u10p6_1_5[1];

#  define Rte_TypeDef_Ary2D_u10p6_1_8
typedef Ary1D_u10p6_8 Ary2D_u10p6_1_8[1];

#  define Rte_TypeDef_Ary2D_u10p6_8_12
typedef Ary1D_u10p6_12 Ary2D_u10p6_8_12[8];

#  define Rte_TypeDef_Ary2D_u10p6_8_9
typedef Ary1D_u10p6_9 Ary2D_u10p6_8_9[8];

#  define Rte_TypeDef_Ary2D_u12p4_8_12
typedef Ary1D_u12p4_12 Ary2D_u12p4_8_12[8];

#  define Rte_TypeDef_Ary2D_u16_3_8
typedef Ary1D_u16p0_8 Ary2D_u16_3_8[3];

#  define Rte_TypeDef_Ary2D_u1p15_1_5
typedef Ary1D_u1p15_5 Ary2D_u1p15_1_5[1];

#  define Rte_TypeDef_Ary2D_u2p14_1_4
typedef Ary1D_u2p14_4 Ary2D_u2p14_1_4[1];

#  define Rte_TypeDef_Ary2D_u2p14_5_10
typedef Ary1D_u2p14_10 Ary2D_u2p14_5_10[5];

#  define Rte_TypeDef_Ary2D_u2p14_5_8
typedef Ary1D_u2p14_8 Ary2D_u2p14_5_8[5];

#  define Rte_TypeDef_Ary2D_u2p14_7_6
typedef Ary1D_u2p14_6 Ary2D_u2p14_7_6[7];

#  define Rte_TypeDef_Ary2D_u2p14_7_8
typedef Ary1D_u2p14_8 Ary2D_u2p14_7_8[7];

#  define Rte_TypeDef_Ary2D_u4p12_13_3
typedef Ary1D_u4p12_3 Ary2D_u4p12_13_3[13];

#  define Rte_TypeDef_Ary2D_u4p12_1_8
typedef Ary1D_u4p12_8 Ary2D_u4p12_1_8[1];

#  define Rte_TypeDef_Ary2D_u6p10_5_9
typedef Ary1D_u6p10_9 Ary2D_u6p10_5_9[5];

#  define Rte_TypeDef_Ary2D_u6p10_8_9
typedef Ary1D_u6p10_9 Ary2D_u6p10_8_9[8];

#  define Rte_TypeDef_Ary2D_u7p9_8_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_8_4[8];

#  define Rte_TypeDef_Ary2D_u8p8_3_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_3_5[3];

#  define Rte_TypeDef_Ary2D_u8p8_3_6
typedef Ary1D_u8p8_6 Ary2D_u8p8_3_6[3];

#  define Rte_TypeDef_Ary2D_u8p8_5_10
typedef Ary1D_u8p8_10 Ary2D_u8p8_5_10[5];

#  define Rte_TypeDef_Ary2D_u8p8_5_8
typedef Ary1D_u8p8_8 Ary2D_u8p8_5_8[5];

#  define Rte_TypeDef_BattSwdVltgCorrlnSts1
typedef uint8 BattSwdVltgCorrlnSts1;

#  define Rte_TypeDef_BswM_ModeGroup_Logl
typedef uint8 BswM_ModeGroup_Logl;

#  define Rte_TypeDef_BswM_ModeGroup_SysSt
typedef uint8 BswM_ModeGroup_SysSt;

#  define Rte_TypeDef_EgyModSt1
typedef uint8 EgyModSt1;

#  define Rte_TypeDef_MotCurrEolCalSt1
typedef uint8 MotCurrEolCalSt1;

#  define Rte_TypeDef_MotRplCoggPrmRec1
typedef struct
{
  uint16 CoggOrder1;
  s1p14 CoggOrder1X;
  s1p14 CoggOrder1Y;
  uint16 CoggOrder2;
  s1p14 CoggOrder2X;
  s1p14 CoggOrder2Y;
  uint16 CoggOrder3;
  s1p14 CoggOrder3X;
  s1p14 CoggOrder3Y;
} MotRplCoggPrmRec1;

#  define Rte_TypeDef_NtcNr2
typedef uint16 NtcNr2;

#  define Rte_TypeDef_NvMProxyFltTblRec1
typedef struct
{
  NtcSts1 FltSts;
  uint8 FltPrm;
} NvMProxyFltTblRec1;

#  define Rte_TypeDef_NvMProxyRtnBufAry1D
typedef NvMProxyNonTrustedRtnBufRec NvMProxyRtnBufAry1D[30];

#  define Rte_TypeDef_StHlthMonSig1
typedef uint8 StHlthMonSig1;

#  define Rte_TypeDef_StrtUpSt1
typedef uint8 StrtUpSt1;

#  define Rte_TypeDef_SyncCrcHwStsAry1D1
typedef SyncCrcHwStsRec1 SyncCrcHwStsAry1D1[4];

#  define Rte_TypeDef_s2p13
typedef sint16 s2p13;

#  define Rte_TypeDef_Ary1D_s2p13_1024
typedef s2p13 Ary1D_s2p13_1024[1024];

#  define Rte_TypeDef_Ary1D_s2p13_1025
typedef s2p13 Ary1D_s2p13_1025[1025];

#  define Rte_TypeDef_NtcInfoRec3
typedef struct
{
  NtcNr2 NtcNr;
  uint8 NtcStInfo;
  uint8 Sts;
  sint16 DebCntr;
  uint8 AgiCntr;
} NtcInfoRec3;

#  define Rte_TypeDef_NvMProxyFltTblAry1D1
typedef NvMProxyFltTblRec1 NvMProxyFltTblAry1D1[5];

#  define Rte_TypeDef_Ary1D_NtcInfoRec3_65535
typedef NtcInfoRec3 Ary1D_NtcInfoRec3_65535[512];

# endif


/**********************************************************************************************************************
 * Calibration Parameter Types
 *********************************************************************************************************************/
typedef P2CONST(void, TYPEDEF, RTE_CONST) Rte_ParameterRefType;
typedef Rte_ParameterRefType Rte_ParameterRefTabType[66];
typedef P2CONST(Rte_ParameterRefType, TYPEDEF, RTE_CONST) Rte_ParameterBaseType;

# define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Rte_ParameterBaseType, RTE_VAR_NOINIT) RteParameterBase;

# define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
extern CONST(Rte_ParameterRefTabType, RTE_CONST) RteParameterRefTab;
# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP (0)
typedef struct
{
  Ary1D_u11p5_13 HwAgTrakgServoDampgTqX_Ary1D;
  Ary2D_u4p12_3_13 HwAgTrakgServoDampgTqY_Ary2D;
  Ary1D_u0p16_3 HwAgTrakgServoDftlGainY_Ary1D;
  Ary1D_u2p14_3 HwAgTrakgServoIntglGainY_Ary1D;
  Ary1D_u10p6_3 HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D;
  Ary1D_u12p4_7 HwAgTrakgServoPropGainX_Ary1D;
  Ary2D_u10p6_3_7 HwAgTrakgServoPropGainY_Ary2D;
  Ary1D_u1p15_10 HwAgTrakgServoSmotngX_Ary1D;
} Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt00_DEFAULT_RTE_CALPRM_GROUP (1)
typedef struct
{
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
} Rte_Calprm_CalRegn03Rt00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt01_DEFAULT_RTE_CALPRM_GROUP (2)
typedef struct
{
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
} Rte_Calprm_CalRegn03Rt01_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt02_DEFAULT_RTE_CALPRM_GROUP (3)
typedef struct
{
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
} Rte_Calprm_CalRegn03Rt02_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt03_DEFAULT_RTE_CALPRM_GROUP (4)
typedef struct
{
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
} Rte_Calprm_CalRegn03Rt03_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt04_DEFAULT_RTE_CALPRM_GROUP (5)
typedef struct
{
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
} Rte_Calprm_CalRegn03Rt04_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP (6)
typedef struct
{
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
} Rte_Calprm_CalRegn03Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP (7)
typedef struct
{
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u12p4_5_4 EotProtnEntrGainX_Ary2D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u0p16_4_2 EotProtnExitDampgY_Ary2D;
  Ary2D_u12p4_4_2 EotProtnHwDegDampgX_Ary2D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D;
} Rte_Calprm_CalRegn03Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP (8)
typedef struct
{
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
} Rte_Calprm_CalRegn03Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP (9)
typedef struct
{
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u12p4_5_4 EotProtnEntrGainX_Ary2D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u0p16_4_2 EotProtnExitDampgY_Ary2D;
  Ary2D_u12p4_4_2 EotProtnHwDegDampgX_Ary2D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D;
} Rte_Calprm_CalRegn03Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP (10)
typedef struct
{
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
} Rte_Calprm_CalRegn03Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP (11)
typedef struct
{
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u12p4_5_4 EotProtnEntrGainX_Ary2D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u0p16_4_2 EotProtnExitDampgY_Ary2D;
  Ary2D_u12p4_4_2 EotProtnHwDegDampgX_Ary2D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D;
} Rte_Calprm_CalRegn03Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP (12)
typedef struct
{
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
} Rte_Calprm_CalRegn03Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP (13)
typedef struct
{
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u12p4_5_4 EotProtnEntrGainX_Ary2D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u0p16_4_2 EotProtnExitDampgY_Ary2D;
  Ary2D_u12p4_4_2 EotProtnHwDegDampgX_Ary2D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D;
} Rte_Calprm_CalRegn03Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP (14)
typedef struct
{
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
} Rte_Calprm_CalRegn03Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP (15)
typedef struct
{
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u12p4_5_4 EotProtnEntrGainX_Ary2D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u0p16_4_2 EotProtnExitDampgY_Ary2D;
  Ary2D_u12p4_4_2 EotProtnHwDegDampgX_Ary2D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D;
} Rte_Calprm_CalRegn03Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP (16)
typedef struct
{
  CurrMeasEolGainCalRec1 CurrMeasEolGainCalSetDft;
  CurrMeasEolOffsCalRec1 CurrMeasEolOffsCalSetDft;
} Rte_Calprm_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_EotLrng_DEFAULT_RTE_CDATA_GROUP (17)
typedef struct
{
  EotNvmDataRec1 EotNvmDataDft;
} Rte_Calprm_EotLrng_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_SysFricLrng_DEFAULT_RTE_CDATA_GROUP (18)
typedef struct
{
  SysFricDataRec1 FricLrngDataDft;
  SysFricNonLrngDataRec1 FricNonLrngDataDft;
} Rte_Calprm_SysFricLrng_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP (19)
typedef struct
{
  HwAgOffsRec1 HwAg0OffsDft;
} Rte_Calprm_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP (20)
typedef struct
{
  HwAgOffsRec1 HwAg1OffsDft;
} Rte_Calprm_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP (21)
typedef struct
{
  HwAgSnsrTrimRec1 HwAgTrimDataDft;
} Rte_Calprm_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP (22)
typedef struct
{
  HwTqOffsRec1 HwTq0OffsDft;
} Rte_Calprm_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP (23)
typedef struct
{
  HwTqOffsRec1 HwTq1OffsDft;
} Rte_Calprm_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP (24)
typedef struct
{
  HwTqOffsRec1 HwTq2OffsDft;
} Rte_Calprm_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP (25)
typedef struct
{
  HwTqOffsRec1 HwTq3OffsDft;
} Rte_Calprm_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP (26)
typedef struct
{
  float32 HwTqChACmnModCmpLpFilStDft;
  float32 HwTqChBCmnModCmpLpFilStDft;
} Rte_Calprm_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP (27)
typedef struct
{
  float32 LePeakPrevDft;
  float32 MaxCompPercDft;
  float32 RiPeakPrevDft;
  uint32 ActvCmpBand1Dft;
  uint32 ActvCmpBand2Dft;
  uint32 ActvCmpBand3Dft;
} Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP (28)
typedef struct
{
  boolean WhlImbRejctnFctEna_Logl;
} Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP (29)
typedef struct
{
  Ary1D_f32_26 MotAg0CoeffTblDft;
} Rte_Calprm_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP (30)
typedef struct
{
  Ary1D_f32_26 MotAg1CoeffTblDft;
} Rte_Calprm_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP (31)
typedef struct
{
  MotAgMeasEolPrmRec1 MotAg2EolPrmDft;
} Rte_Calprm_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP (32)
typedef struct
{
  u0p16 MotAgCmpMotAgBackEmfDft;
} Rte_Calprm_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP (33)
typedef struct
{
  uint32 NvmIgnCntr_DefaultValue;
  uint8 NvmMfgEnaCntr_DefaultValue;
  Ary1D_u8_10 NvmNxtrSeedKey_DefaultValue;
  Ary1D_u32_2 SeedKeyDft;
} Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP (34)
typedef struct
{
  uint8 PartNrCalProgdStsDft;
  uint8 PartNrCustMfgEnaCntrDft;
  Ary1D_u8_6 PartNrBasMdlPartNrDft;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft;
  Ary1D_u8_6 PartNrEndMdlPartNrDft;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft;
  Ary1D_u8_4 PartNrProgmDateDft;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft;
  Ary1D_u8_20 PartNrRepairShopCodDft;
  Ary1D_u8_2 PartNrSysCodVersNrDft;
  Ary1D_u8_20 PartNrSysNameDft;
  Ary1D_u8_17 PartNrVinDataDft;
} Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_PullCmpActv_DEFAULT_RTE_CDATA_GROUP (35)
typedef struct
{
  float32 PullCmpLongTermDft;
} Rte_Calprm_PullCmpActv_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP (36)
typedef struct
{
  StordLstPrmRec1 StordLstPrmDft;
} Rte_Calprm_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP (37)
typedef struct
{
  float32 AssiSumLimPullCmpLim_Val;
  float32 BattVltgCorrlnSysMinVltg_Val;
  float32 BattVltgSwdMax_Val;
  float32 BrdgVltgMax_Val;
  float32 BattVltgCorrlnAllwdVltgDif_Val;
  float32 BattVltgCorrlnBattLoVltg_Val;
  float32 BattVltgCorrlnBattOverVltg_Val;
  float32 BattVltgCorrlnBattUnderVltg_Val;
  float32 BattVltgCorrlnRcvrlBattLoVltg_Val;
  float32 BattVltgCorrlnRcvrlBattOverVltg_Val;
  float32 BattVltgCorrlnRcvrlBattUnderVltg_Val;
  float32 CurrMeasEolGainMax_Val;
  float32 CurrMeasEolGainMin_Val;
  float32 CurrMeasEolGainNumer_Val;
  float32 CurrMeasEolMaxMotVel_Val;
  float32 CurrMeasEolOffsHiBrdgVltgMin_Val;
  float32 CurrMeasEolOffsMax_Val;
  float32 CurrMeasEolOffsMin_Val;
  float32 CurrMeasMotCurrAdcVlyWrmIninMax_Val;
  float32 CurrMeasMotCurrAdcVlyWrmIninMin_Val;
  float32 MotCurrRegCfgMotRVirtDax_Val;
  float32 MotCurrRegCfgMotRVirtQax_Val;
  float32 MotCurrRegVltgLimrCurrLoaScarSlewRate_Val;
  float32 MotCurrRegVltgLimrDaxAntiWdupCoeff_Val;
  float32 MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val;
  float32 MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val;
  float32 MotCurrRegVltgLimrMotCurrPredTi_Val;
  float32 MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val;
  float32 MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val;
  float32 MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val;
  float32 MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val;
  float32 MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val;
  float32 MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val;
  float32 MotCurrRegVltgLimrQaxAntiWdupCoeff_Val;
  float32 MotRefMdlIvtrDeadTiBrdgVltgSca_Val;
  float32 SinVltgGennDthrLpFilCoeff_Val;
  float32 CurrMeasCorrlnMaxErrCurr_Val;
  float32 DutyCycThermProtnAbsltMotVelBreakPt_Val;
  float32 DutyCycThermProtnAbsltTTqSlewHiLim_Val;
  float32 DutyCycThermProtnAbsltTTqSlewLoLim_Val;
  float32 DutyCycThermProtnCtrlT_Val;
  float32 DutyCycThermProtnIgnOffMsgWaitTi_Val;
  float32 DutyCycThermProtnTqCmdSlewDwn_Val;
  float32 DutyCycThermProtnTqCmdSlewUp_Val;
  float32 EcuTMeasDftT_Val;
  float32 EcuTMeasFilTau_Val;
  float32 EcuTMeasRngDiagcMax_Val;
  float32 EcuTMeasRngDiagcMin_Val;
  float32 EcuTMeasScag_Val;
  float32 EcuTMeasScagOffs_Val;
  float32 EotProtnFwlInactvLim_Val;
  float32 GmFctDiArbnEotHwAgThd_Val;
  float32 GmFctDiArbnEotTi_Val;
  float32 GmFctDiArbnOnCentrHwAgThd_Val;
  float32 GmFctDiArbnOnCentrHwTqThd_Val;
  float32 GmFctDiArbnOnCentrTi_Val;
  float32 GmFctDiArbnSrvTi_Val;
  float32 GmMsg0C9BusHiSpdVehSpdThd_Val;
  float32 GmMsg1E9BusHiSpdLatADft_Val;
  float32 GmMsg1E9BusHiSpdYawRateDft_Val;
  float32 GmMsg3F1BusHiSpdAmbTDft_Val;
  float32 GmMsg4D1BusHiSpdEngOilTDft_Val;
  float32 GmMsg500BusHiSpdWhlRotlStsTiStampReslDft_Val;
  float32 HwAgCorrlnHwAgAbsltDif_Val;
  float32 HwAgSnsrlsCorrdPinionAgHwConf_Val;
  float32 HwAgSnsrlsFCentrHwConf_Val;
  float32 HwAgSnsrlsPinionTqFilFrq_Val;
  float32 HwAgSnsrlsRelHwAgFil1Frq_Val;
  float32 HwAgSnsrlsRelHwAgFil2Frq_Val;
  float32 HwAgSnsrlsSmotngCoeff_Val;
  float32 HwAgSnsrlsSmotngStepThd_Val;
  float32 HwAgSnsrlsStordPinionConf_Val;
  float32 HwAgSnsrlsStordPinionConfThd_Val;
  float32 HwAgSnsrlsVehDynDifThd_Val;
  float32 HwAgSnsrlsVehDynHwConf_Val;
  float32 HwAgSnsrlsVehDynMotVelThd_Val;
  float32 HwAgSnsrlsVehDynPinionTqThd_Val;
  float32 HwAgSnsrlsWhlFrqThd_Val;
  float32 HwAgSnsrlsWhlSpdHwAgCoeff1_Val;
  float32 HwAgSnsrlsWhlSpdHwAgCoeff2_Val;
  float32 HwAgSnsrlsWhlSpdHwAgThd_Val;
  float32 HwAgSnsrlsWhlSpdHwConf_Val;
  float32 HwAgSnsrlsWhlSpdRatThd_Val;
  float32 HwAgSnsrlsWhlSpdVehSpdThd_Val;
  float32 HwAgSysArbnHwAgConf1Snsr_Val;
  float32 HwAgSysArbnHwAgConf2Snsr_Val;
  float32 HwAgSysArbnHwAgConfNoSnsr_Val;
  float32 HwAgSysArbnHwAgCorrdCorrlnThd_Val;
  float32 HwAgSysArbnHwAgCorrlnRng_Val;
  float32 HwAgSysArbnHwAgSlewRate_Val;
  float32 HwAgSysArbnHwAgSnsrlsCorrlnThd_Val;
  float32 HwAgSysArbnHwAgSnsrlsKineThd_Val;
  float32 HwAgSysArbnSerlComHwAgCorrdConf_Val;
  float32 HwAgSysArbnSerlComHwAgSnsrlsConf_Val;
  float32 HwAgSysArbnSlewRateTmr_Val;
  float32 HwAgTrajGennAMax_Val;
  float32 HwAgTrajGennAgMax_Val;
  float32 HwAgTrajGennVelMax_Val;
  float32 HwTqCorrlnChACmnModCmpLpFilActvnThd_Val;
  float32 HwTqCorrlnChACmnModCmpLpFilFrq_Val;
  float32 HwTqCorrlnChACmnModCmpLpFilOutpLim_Val;
  float32 HwTqCorrlnChAImdtCorrlnChkFailThd_Val;
  float32 HwTqCorrlnChAImdtCorrlnChkPassThd_Val;
  float32 HwTqCorrlnChAStabStClrFltThd_Val;
  float32 HwTqCorrlnChAStabStLpFilFrq_Val;
  float32 HwTqCorrlnChAStabStSetFltThd_Val;
  float32 HwTqCorrlnChATqSumMaxLim_Val;
  float32 HwTqCorrlnChATraSumClrFltThd_Val;
  float32 HwTqCorrlnChATraSumSetFltThd_Val;
  float32 HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val;
  float32 HwTqCorrlnChBCmnModCmpLpFilFrq_Val;
  float32 HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val;
  float32 HwTqCorrlnChBImdtCorrlnChkFailThd_Val;
  float32 HwTqCorrlnChBImdtCorrlnChkPassThd_Val;
  float32 HwTqCorrlnChBStabStClrFltThd_Val;
  float32 HwTqCorrlnChBStabStLpFilFrq_Val;
  float32 HwTqCorrlnChBStabStSetFltThd_Val;
  float32 HwTqCorrlnChBTqSumMaxLim_Val;
  float32 HwTqCorrlnChBTraSumClrFltThd_Val;
  float32 HwTqCorrlnChBTraSumSetFltThd_Val;
  float32 LoaMgrCurrIvtrMtgtnRate_Val;
  float32 LoaMgrCurrIvtrMtgtnSca_Val;
  float32 LoaMgrCurrMeasMtgtnRate_Val;
  float32 LoaMgrCurrMeasMtgtnSca_Val;
  float32 LoaMgrFadeOutStRate_Val;
  float32 LoaMgrIvtrMtgtnRate_Val;
  float32 LoaMgrIvtrMtgtnSca_Val;
  float32 LoaMgrLimdStRate_Val;
  float32 LoaMgrLimdStSca_Val;
  float32 LoaMgrMotAgMtgtnRate_Val;
  float32 LoaMgrMotAgMtgtnSca_Val;
  float32 MotAg2MeasOffs_Val;
  float32 MotCtrlPrmEstimnFetRNom_Val;
  float32 MotCtrlPrmEstimnFetThermCoeff_Val;
  float32 MotCtrlPrmEstimnMagThermCoeff_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConHiLim_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConLoLim_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val;
  float32 MotCtrlPrmEstimnMotInduDaxHiLim_Val;
  float32 MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val;
  float32 MotCtrlPrmEstimnMotInduDaxLoLim_Val;
  float32 MotCtrlPrmEstimnMotInduDaxNom_Val;
  float32 MotCtrlPrmEstimnMotInduQaxHiLim_Val;
  float32 MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val;
  float32 MotCtrlPrmEstimnMotInduQaxLoLim_Val;
  float32 MotCtrlPrmEstimnMotInduQaxNom_Val;
  float32 MotCtrlPrmEstimnMotRHiLim_Val;
  float32 MotCtrlPrmEstimnMotRLoLim_Val;
  float32 MotCtrlPrmEstimnMotRNom_Val;
  float32 MotCtrlPrmEstimnMotWidgThermCoeff_Val;
  float32 MotCtrlPrmEstimnTNom_Val;
  float32 MotCurrPeakEstimnCurrFilFrq_Val;
  float32 MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val;
  float32 MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val;
  float32 MotCurrRegCfgIntglGainSampleTi_Val;
  float32 MotCurrRegCfgMotAgCompuDly_Val;
  float32 MotCurrRegCfgMotDampgRatDax_Val;
  float32 MotCurrRegCfgMotDampgRatQax_Val;
  float32 MotCurrRegCfgMotVelFilFrq_Val;
  float32 MotDrvDiagcErrFilFrq_Val;
  float32 MotRefMdlCurrDaxBoostGain_Val;
  float32 MotRefMdlCurrItrnTolr_Val;
  float32 MotRefMdlMotCurrDaxMaxSca_Val;
  float32 MotRefMdlMotVelLpFilFrq_Val;
  float32 MotRefMdlMotVltgDerivtvTiCon_Val;
  float32 MotRefMdlTqItrnTolr_Val;
  float32 MotRefMdlVltgOverRThdSca_Val;
  float32 MotRplCoggCfgMotAgTiDly_Val;
  float32 MotTqCmdScaMax_Val;
  float32 MotTqCmdScaMin_Val;
  float32 PwrDiscnctOpenThd_Val;
  float32 PwrLimrAssiRednLpFilFrq_Val;
  float32 PwrLimrBackEmfConStdT_Val;
  float32 PwrLimrBrdgVltgAdjSlew_Val;
  float32 PwrLimrBrdgVltgAltFltAdj_Val;
  float32 PwrLimrFilAssiRednThd_Val;
  float32 PwrLimrLoVoltAssiRcvrThd_Val;
  float32 PwrLimrMotVelLpFilFrq_Val;
  float32 PwrLimrSpdAdjSlewDec_Val;
  float32 PwrLimrSpdAdjSlewInc_Val;
  float32 StHlthSigNormnMaxFricThd_Val;
  float32 StHlthSigNormnMinRackTrvlLim_Val;
  float32 StHlthSigNormnMotVelCal_Val;
  float32 StHlthSigNormnStHlthCurrMotSum_Val;
  float32 StHlthSigNormnStHlthPhaInfo_Val;
  float32 StHlthSigNormnValMaxStHlthErr_Val;
  float32 StHlthSigNormnValMinStHlthErr_Val;
  float32 StHlthSigNormnWhlImbRejctnThd_Val;
  float32 TqOscnFallRampRateCal_Val;
  float32 TqOscnRisngRampRateCal_Val;
  float32 VehSigCdngDftLatA_Val;
  float32 VehSigCdngDftLgtA_Val;
  float32 VehSigCdngDftVehSpd_Val;
  float32 VehSigCdngDftYawRate_Val;
  float32 VehSigCdngLatADifThd_Val;
  float32 VehSigCdngLatAFilFrq_Val;
  float32 VehSigCdngLtgADifThd_Val;
  float32 VehSigCdngVehSpdDifThd_Val;
  float32 VehSigCdngVehYawSlewRate_Val;
  float32 VehSigCdngYawRateDifThd_Val;
  float32 VehSpdLimrPosMaxOffs1_Val;
  float32 VehSpdLimrPosMaxOffs2_Val;
  float32 WhlImbRejctnFrqDiagcLpFil_Val;
  uint32 CurrMeasEolFixdPwmPerd_Val;
  uint32 CurrMeasEolOffsHiCmuOffs_Val;
  uint32 CurrMeasEolOffsLoCmuOffs_Val;
  uint32 CurrMeasMinRqrdPhaOnTi_Val;
  uint32 CurrMeasMotAgCompuDly_Val;
  uint32 TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val;
  uint32 TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val;
  uint32 TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val;
  uint32 TSG31CfgAndUseMtrAg0SPIStart_Val;
  uint32 TSG31CfgAndUsePwmDbnd_Val;
  uint32 HwAgSnsrlsVehDynTmr1Thd_Val;
  uint32 HwAgSnsrlsVehDynTmr2Thd_Val;
  uint32 HwAgSnsrlsWhlSpdTmrThd_Val;
  uint32 HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val;
  uint32 MotDrvDiagcErrOffs_Val;
  uint32 MotDrvDiagcErrThd_Val;
  uint32 NxtrCalIdsCal0DevlpRelNr_Val;
  uint32 NxtrCalIdsCal0DevlpTiStamp_Val;
  s18p13 MotQuadDetnMotDirHysInsts_Val;
  uint16 BasAssiPahFwlOverLimDiagcFailStep_Val;
  uint16 BasAssiPahFwlOverLimDiagcPassStep_Val;
  uint16 HiFrqAssiPahFwlOverLimDiagcFailStep_Val;
  uint16 HiFrqAssiPahFwlOverLimDiagcPassStep_Val;
  uint16 AssiSumLimNtc0x0C4FailStep_Val;
  uint16 AssiSumLimNtc0x0C4PassStep_Val;
  uint16 BattVltgCorrlnNtc0x03C0x0440x04CFailStep_Val;
  uint16 BattVltgCorrlnNtc0x03C0x0440x04CPassStep_Val;
  uint16 BattVltgCorrlnNtc0x03DFailStep_Val;
  uint16 BattVltgCorrlnNtc0x03DPassStep_Val;
  uint16 BattVltgCorrlnNtc0x0B0FailStep_Val;
  uint16 BattVltgCorrlnNtc0x0B0PassStep_Val;
  uint16 BattVltgCorrlnNtc0x0B1FailStep_Val;
  uint16 BattVltgCorrlnNtc0x0B1PassStep_Val;
  uint16 BattVltgCorrlnNtc0x0B5FailStep_Val;
  uint16 BattVltgCorrlnNtc0x0B5PassStep_Val;
  uint16 AdcDiagcNtc0x032FailStep_Val;
  uint16 AdcDiagcNtc0x032PassStep_Val;
  uint16 AdcDiagcNtc0x033FailStep_Val;
  uint16 AdcDiagcNtc0x033PassStep_Val;
  uint16 CurrMeasEolGainNrOfSample_Val;
  uint16 CurrMeasEolOffsNrOfSample_Val;
  uint16 CurrMeasNtc0x05DFailStep_Val;
  uint16 CurrMeasNtc0x05DPassStep_Val;
  uint16 CurrMeasNtc0x06DFailStep_Val;
  uint16 CurrMeasNtc0x06DPassStep_Val;
  uint16 HwTq2MeasHwTq2PrtclFltFailStep_Val;
  uint16 HwTq2MeasHwTq2PrtclFltPassStep_Val;
  uint16 HwTq3MeasHwTq3PrtclFltFailStep_Val;
  uint16 HwTq3MeasHwTq3PrtclFltPassStep_Val;
  uint16 CmnMfgSrvSecuAcsAtmptTiOut_Val;
  uint16 CurrMeasCorrlnNtc0x04DFailStep_Val;
  uint16 CurrMeasCorrlnNtc0x04DPassStep_Val;
  uint16 CurrMeasCorrlnNtc0x04EFailStep_Val;
  uint16 CurrMeasCorrlnNtc0x04EPassStep_Val;
  uint16 DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val;
  uint16 DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val;
  uint16 DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val;
  uint16 DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val;
  u16p0 DutyCycThermProtnDutyCycFildThd_Val;
  uint16 EcuTMeasNtc0x045FailStep_Val;
  uint16 EcuTMeasNtc0x045PassStep_Val;
  uint16 GateDrv0CtrlNtcNr0x050FailStep_Val;
  uint16 GateDrv0CtrlNtcNr0x050PassStep_Val;
  uint16 GateDrv0CtrlNtcNr0x051FailStep_Val;
  uint16 GateDrv0CtrlNtcNr0x051PassStep_Val;
  uint16 GateDrv0CtrlNtcNr0x055FailStep_Val;
  uint16 GateDrv0CtrlNtcNr0x055PassStep_Val;
  uint16 GateDrv0CtrlUnit0Cfg2WrVal_Val;
  uint16 GateDrv0CtrlUnit0Cfg3WrVal_Val;
  uint16 GateDrv0CtrlUnit0Cfg4WrVal_Val;
  uint16 GateDrv0CtrlUnit0Cfg7WrVal_Val;
  uint16 GateDrv1CtrlNtcNr0x060FailStep_Val;
  uint16 GateDrv1CtrlNtcNr0x060PassStep_Val;
  uint16 GateDrv1CtrlNtcNr0x061FailStep_Val;
  uint16 GateDrv1CtrlNtcNr0x061PassStep_Val;
  uint16 GateDrv1CtrlNtcNr0x065FailStep_Val;
  uint16 GateDrv1CtrlNtcNr0x065PassStep_Val;
  uint16 GateDrv1CtrlUnit1Cfg2WrVal_Val;
  uint16 GateDrv1CtrlUnit1Cfg3WrVal_Val;
  uint16 GateDrv1CtrlUnit1Cfg4WrVal_Val;
  uint16 GateDrv1CtrlUnit1Cfg7WrVal_Val;
  uint16 GmMsg0C5BusHiSpdInvldTiOut_Val;
  uint16 GmMsg0C5BusHiSpdMissTiOut_Val;
  uint16 GmMsg0C5BusHiSpdRstTiOut_Val;
  uint16 GmMsg0C5BusHiSpdSeqNrTiOut_Val;
  uint16 GmMsg0C9BusHiSpdInvldTiOut_Val;
  uint16 GmMsg0C9BusHiSpdMissTiOut_Val;
  uint16 GmMsg17DBusHiSpdInvldTiOut_Val;
  uint16 GmMsg17DBusHiSpdMissTiOut_Val;
  uint16 GmMsg180BusChassisExpInvldProtnValTiOut_Val;
  uint16 GmMsg180BusChassisExpMissTiOut_Val;
  uint16 GmMsg180BusChassisExpRollgCntrInvldTiOut_Val;
  uint16 GmMsg180BusHiSpdCrcInvldTiOut_Val;
  uint16 GmMsg180BusHiSpdMissTiOut_Val;
  uint16 GmMsg180BusHiSpdRollgCntrInvldTiOut_Val;
  uint16 GmMsg182BusChassisExpInvldTiOut_Val;
  uint16 GmMsg182BusChassisExpMissTiOut_Val;
  uint16 GmMsg1E9BusHiSpdAbsFaildTiOut_Val;
  uint16 GmMsg1E9BusHiSpdLatAInvldTiOut_Val;
  uint16 GmMsg1E9BusHiSpdMissTiOut_Val;
  uint16 GmMsg1E9BusHiSpdTcsDisadTiOut_Val;
  uint16 GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val;
  uint16 GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val;
  uint16 GmMsg1E9BusHiSpdYawRateInvldTiOut_Val;
  uint16 GmMsg1F1BusHiSpdMissTiOut_Val;
  uint16 GmMsg1F5BusHiSpdInvldTiOut_Val;
  uint16 GmMsg1F5BusHiSpdMissTiOut_Val;
  uint16 GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val;
  uint16 GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val;
  uint16 GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val;
  uint16 GmMsg214BusHiSpdMissTiOut_Val;
  uint16 GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val;
  uint16 GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val;
  uint16 GmMsg232BusHiSpdMissTiOut_Val;
  uint16 GmMsg337BusChassisExpInvldDiagcTiOut_Val;
  uint16 GmMsg337BusChassisExpInvldProtnValTiOut_Val;
  uint16 GmMsg337BusChassisExpInvldRollgCntrTiOut_Val;
  uint16 GmMsg337BusChassisExpMissTiOut_Val;
  uint16 GmMsg348BusChassisExpInvldTiOut_Val;
  uint16 GmMsg348BusChassisExpMissTiOut_Val;
  uint16 GmMsg348BusChassisExpStuckTiOut_Val;
  uint16 GmMsg348BusHiSpdInvldTiOut_Val;
  uint16 GmMsg348BusHiSpdMissTiOut_Val;
  uint16 GmMsg348BusHiSpdStuckTiOut_Val;
  uint16 GmMsg34ABusChassisExpInvldTiOut_Val;
  uint16 GmMsg34ABusChassisExpMissTiOut_Val;
  uint16 GmMsg34ABusChassisExpStuckTiOut_Val;
  uint16 GmMsg34ABusHiSpdInvldTiOut_Val;
  uint16 GmMsg34ABusHiSpdMissTiOut_Val;
  uint16 GmMsg34ABusHiSpdStuckTiOut_Val;
  uint16 GmMsg3F1BusHiSpdInvldTiOut_Val;
  uint16 GmMsg3F1BusHiSpdMissTiOut_Val;
  uint16 GmMsg4D1BusHiSpdInvldTiOut_Val;
  uint16 GmMsg4D1BusHiSpdMissTiOut_Val;
  uint16 GmMsg500BusHiSpdMissTiOut_Val;
  uint16 HwAgCorrlnNtc0x092FailStep_Val;
  uint16 HwAgCorrlnNtc0x092PassStep_Val;
  uint16 HwAgSysArbnHwAgCorrlnFailDebStep_Val;
  uint16 HwAgSysArbnHwAgCorrlnPassDebStep_Val;
  uint16 PwrLimrLoVoltAssiRcvrTi_Val;
  uint16 PwrSplyNtc0x07BFailStep_Val;
  uint16 PwrSplyNtc0x07BPassStep_Val;
  uint16 PwrSplyNtc0x07CFailStep_Val;
  uint16 PwrSplyNtc0x07CPassStep_Val;
  uint16 PwrSplyNtc0x07DFailStep_Val;
  uint16 PwrSplyNtc0x07DPassStep_Val;
  uint16 SnsrOffsLrngSampleCntForHwTqLrngRst_Val;
  u16p0 StHlthSigNormnDutyCycFltLimThd_Val;
  u0p16 StHlthSigNormnStHlthCorrlnErr_Val;
  uint8 CurrMeasEolTranCntrThd_Val;
  uint8 CurrMeasArbnMaxStallCntr_Val;
  uint8 MotRplCoggCmdHrmncOrder1Elec_Val;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val;
  uint8 CmnMfgSrvSecuAcsMaxNrAtmpt_Val;
  uint8 CurrMeasCorrlnMaxStallCntr_Val;
  uint8 EotLrngHwAgOverTrvlCnt_Val;
  uint8 LoaMgrHwTqIdptSigFltThd_Val;
  uint8 GmMsg500BusHiSpdWhlPlsPerRevDft_Val;
  uint8 HwAgArbnHwAgMaxStall_Val;
  uint8 HwAgCorrlnHwAgMaxStall_Val;
  uint8 HwTqArbnMaxStallTqA_Val;
  uint8 HwTqArbnMaxStallTqB_Val;
  uint8 HwTqArbnMaxStallTqC_Val;
  uint8 HwTqArbnMaxStallTqD_Val;
  uint8 HwTqCorrlnMaxStallTqA_Val;
  uint8 HwTqCorrlnMaxStallTqB_Val;
  uint8 HwTqCorrlnMaxStallTqC_Val;
  uint8 HwTqCorrlnMaxStallTqD_Val;
  uint8 LoaMgrCurrMeasIdptSig0Resp_Val;
  uint8 LoaMgrCurrMeasIdptSig1Resp_Val;
  uint8 LoaMgrCurrMeasIdptSig2Resp_Val;
  uint8 LoaMgrCurrMeasIdptSigFltThd_Val;
  uint8 LoaMgrHwTqIdptSig0NoTqLoaResp_Val;
  uint8 LoaMgrHwTqIdptSig1NoTqLoaResp_Val;
  uint8 LoaMgrHwTqIdptSig2Resp_Val;
  uint8 LoaMgrHwTqIdptSig4Resp_Val;
  uint8 LoaMgrHwTqLoaAvlResp_Val;
  uint8 LoaMgrIvtrIdptSig0Resp_Val;
  uint8 LoaMgrIvtrIdptSig1Resp_Val;
  uint8 LoaMgrIvtrIdptSig2Resp_Val;
  uint8 LoaMgrIvtrIdptSigFltThd_Val;
  uint8 LoaMgrMotAgAvlSnsrlsResp_Val;
  uint8 LoaMgrMotAgIdptSig0NoSnsrlsResp_Val;
  uint8 LoaMgrMotAgIdptSig1NoSnsrlsResp_Val;
  uint8 LoaMgrMotAgIdptSig2Resp_Val;
  uint8 LoaMgrMotAgIdptSig3Resp_Val;
  uint8 LoaMgrMotAgIdptSigFltThd_Val;
  uint8 MotRefMdlMinCurrItrnLim_Val;
  uint8 MotRefMdlRefLocnItrnLim_Val;
  uint8 MotRefMdlTqItrnLim_Val;
  uint8 NxtrCalIdsCal0DevlpRelSt_Val;
  uint8 NxtrCalIdsCal0DevlpVers_Val;
  uint8 StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val;
  uint8 StHlthSigNormnCurrMotSumStHlthDiagThd_Val;
  uint8 StHlthSigNormnDigTqStHlthDiagThd_Val;
  uint8 StHlthSigNormnIdptSigStHlthSca_Val;
  uint8 StHlthSigNormnMotPosStHlthDiagThd_Val;
  uint8 StHlthSigNormnPhaInfoStHlthDiagThd_Val;
  sint8 GmMsg180BusChassisExpTqPolarity_Val;
  sint8 GmMsg180BusHiSpdTqPolarity_Val;
  sint8 GmMsg184BusHiSpdTqPolarity_Val;
  sint8 GmMsg1CaBusChassisExpTqPolarity_Val;
  sint8 GmMsg337BusChassisExpTarAgPolarity_Val;
  boolean AssiPahFwlDiRcvr_Logl;
  boolean MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl;
  boolean MotCurrRegVltgLimrMotCurrPredEna_Logl;
  boolean MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl;
  boolean MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl;
  boolean MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl;
  boolean MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl;
  boolean MotRefMdlFbCtrlDi_Logl;
  boolean DutyCycThermProtnCtrlTSeln_Logl;
  boolean DutyCycThermProtnIgnOffCtrlEna_Logl;
  boolean DutyCycThermProtnMotPrTSeln_Logl;
  boolean DutyCycThermProtnMplrTSeln_Logl;
  boolean DutyCycThermProtnSlowFilTSeln_Logl;
  boolean LoaMgrCurrIvtrMtgtnScaZeroEna_Logl;
  boolean LoaMgrCurrMeasMtgtnScaZeroEna_Logl;
  boolean LoaMgrIvtrMtgtnScaZeroEna_Logl;
  boolean LoaMgrMotAgMtgtnScaZeroEna_Logl;
  boolean MotRefMdlVltgModDynCmpEna_Logl;
  boolean PwrLimrSpdAdjSlewEna_Logl;
  boolean TqOscnUseRampRateCal_Logl;
  boolean TunSelnAuthyTunSelnRtDiCmd_Logl;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D;
  Ary1D_u9p7_12 AssiPahFwlVehSpd_Ary1D;
  Ary1D_u1p15_6 CmplncErrHwAgNonLinCmplncDepTblY_Ary1D;
  Ary1D_u5p11_6 CmplncErrHwAgNonLinCmplncIndTblX_Ary1D;
  Ary1D_u8p8_6 CmplncErrMotAgNonLinCmplncDepTblY_Ary1D;
  Ary1D_u5p11_6 CmplncErrMotAgNonLinCmplncIndTblX_Ary1D;
  Ary1D_u11p5_8 DampgPahFwlAssiAddlDampgX_Ary1D;
  Ary1D_u5p11_8 DampgPahFwlAssiAddlDampgY_Ary1D;
  Ary1D_u11p5_8 DampgPahFwlDampgCmdAddlDampgX_Ary1D;
  Ary1D_u5p11_8 DampgPahFwlDampgCmdAddlDampgY_Ary1D;
  Ary1D_u11p5_11 DampgPahFwlDftDampgX_Ary1D;
  Ary1D_u9p7_12 DampgPahFwlVehSpd_Ary1D;
  Ary1D_s15p0_4 DutyCycThermProtnAbsltCtrlTTblX_Ary1D;
  Ary1D_u9p7_4 DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D;
  Ary1D_s15p0_4 DutyCycThermProtnAbsltCuTTblX_Ary1D;
  Ary1D_u9p7_4 DutyCycThermProtnAbsltCuTTqTblY_Ary1D;
  Ary1D_u9p7_5 DutyCycThermProtnLstTblValNonStall_Ary1D;
  Ary1D_u9p7_5 DutyCycThermProtnLstTblValStall_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr1NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr1StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr2NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr2StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr3NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr3StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr4NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr4StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr5NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr5StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr6NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr6StallTblY_Ary1D;
  Ary1D_s15p0_5 DutyCycThermProtnMplrTblX_Ary1D;
  Ary1D_u16p0_8 DutyCycThermProtnThermLoadLimTblX_Ary1D;
  Ary1D_u9p7_8 DutyCycThermProtnThermLoadLimTblY_Ary1D;
  Ary1D_s11p4_5 EotProtnFwlEotDampgActvBndX_Ary1D;
  Ary1D_u9p7_4 EotProtnFwlVehSpd_Ary1D;
  Ary1D_u5p11_17 HwTqCorrlnChATraLpFilX_Ary1D;
  Ary1D_u6p10_17 HwTqCorrlnChATraLpFilY_Ary1D;
  Ary1D_u5p11_17 HwTqCorrlnChBTraLpFilX_Ary1D;
  Ary1D_u6p10_17 HwTqCorrlnChBTraLpFilY_Ary1D;
  Ary1D_u9p7_16 MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D;
  Ary1D_u2p14_16 MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D;
  Ary1D_u9p7_6 MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D;
  Ary1D_u9p7_7 MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D;
  Ary1D_u11p5_4 MotCurrRegCfgMotCtrlPrmSelnX_Ary1D;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqDaxY_Ary1D;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqQaxY_Ary1D;
  Ary1D_u4p12_11 MotRefMdlCurrDaxBoostTqScaX_Ary1D;
  Ary1D_u1p15_11 MotRefMdlCurrDaxBoostTqScaY_Ary1D;
  Ary1D_float32_8 MotRefMdlCurrDaxQaxRefDelta_Ary1D;
  Ary1D_u11p5_10 MotRefMdlQuad13VltgSdlX_Ary1D;
  Ary1D_u3p13_10 MotRefMdlQuad13VltgSdlY_Ary1D;
  Ary1D_u11p5_10 MotRefMdlQuad24VltgSdlX_Ary1D;
  Ary1D_u3p13_10 MotRefMdlQuad24VltgSdlY_Ary1D;
  Ary1D_u9p7_10 MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D;
  Ary1D_u9p7_12 MotRplCoggCfgMotCurrQaxRpl_Ary1D;
  Ary2D_u3p13_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D;
  Ary2D_u0p16_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D;
  Ary1D_u5p11_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1X_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1Y_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2X_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2Y_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3X_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3Y_Ary2D;
  Ary1D_u16p0_20 MotRplCoggCfgMotVelBilnrSeln_Ary1D;
  Ary1D_u2p14_4 MotTqTranlDampgVehSpdBlndY_Ary1D;
  Ary1D_u8_6 NxtrCalIdsCal0DevlpAuthor_Ary1D;
  Ary1D_u8_48 NxtrCalIdsCal0DevlpDesc_Ary1D;
  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D;
  Ary1D_s11p4_14 PwrLimrMotEnvlpX_Ary1D;
  Ary1D_u5p11_14 PwrLimrMotEnvlpY_Ary1D;
  Ary1D_u11p5_6 PwrLimrStdOperMotEnvlpX_Ary1D;
  Ary1D_u4p12_6 PwrLimrStdOperMotEnvlpY_Ary1D;
  Ary1D_u5p11_10 PwrLimrVltgDptMotVelOffsX_Ary1D;
  Ary1D_u11p5_10 PwrLimrVltgDptMotVelOffsY_Ary1D;
  Ary1D_u5p11_11 TqOscnAmpLimY_Ary1D;
  Ary1D_u8p8_11 TqOscnFrqIn_Ary1D;
  Ary1D_u9p7_5 VehSpdLimrMaxAssiX_Ary1D;
  Ary1D_u5p11_5 VehSpdLimrMaxAssiY_Ary1D;
} Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP (38)
typedef struct
{
  float32 WhlImbRejctnDcTrendFltRcvryDly_Val;
  float32 WhlImbRejctnFrqDiagcFltRcvryDly_Val;
  float32 WhlImbRejctnFrqDiagcUgrPoleMgn_Val;
  float32 WhlImbRejctnMaxMgnFltRcvryDly_Val;
  float32 WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val;
  boolean WhlImbRejctnFrqDiagcEna_Logl;
} Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP (39)
typedef struct
{
  float32 HwAgVehCentrTrimHwAgLim_Val;
  float32 HwAgVehCentrTrimVehSpdMaxThd_Val;
} Rte_Calprm_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP (40)
typedef struct
{
  float32 AssiPahFwlCmdSplitLpFilFrq_Val;
  float32 AssiPahFwlFwlActvLpFilFrq_Val;
  float32 AssiPahFwlHysCmpLim_Val;
  float32 AssiPahFwlRestoreThd_Val;
  float32 DampgPahFwlActvFwlLpFilFrq_Val;
  float32 DampgPahFwlDampgCmdLpFilFrq_Val;
  float32 DampgPahFwlInertiaCmpLpFilFrq_Val;
  float32 GmVehPwrModOperRampRate_Val;
  float32 HiLoadStallLimrMotTqCmdFilFrq_Val;
  float32 HiLoadStallLimrMotVelMgnThd_Val;
  float32 HiLoadStallLimrStallMotTqLimSlewRate_Val;
  float32 HwAgSnsrlsVehDynVehSpdThd_Val;
  float32 HwAgSnsrlsVehDynYawRateThd_Val;
  float32 HwAgSnsrlsYawRateFilFrq_Val;
  float32 HwAgSysArbnTqSnsrVelFilFrq_Val;
  float32 SysGlbPrmTorsBarStfn_Val;
  float32 LimrCdngGainDecSlew_Val;
  float32 LimrCdngTqDecSlew_Val;
  float32 MotTqTranlDampgCmdLim_Val;
  float32 MotTqTranlDampgDampgCoeff_Val;
  float32 MotTqTranlDampgTmrPt1_Val;
  float32 MotTqTranlDampgTmrPt2_Val;
  float32 MotTqTranlDampgVelThd_Val;
  float32 StHlthSigNormnHiCtrlrT_Val;
  float32 StHlthSigNormnLoCtrlrT_Val;
  float32 SysFricLrngAvrgFricFrq_Val;
  float32 SysFricLrngBasLineEolFric_Val;
  float32 SysFricLrngDataPrepLpFilFrq_Val;
  float32 SysFricLrngEolFricDifHiLim_Val;
  float32 SysFricLrngEolFricDifLoLim_Val;
  float32 SysFricLrngEolFricDifScagFac_Val;
  float32 SysFricLrngFricDiagcThd_Val;
  float32 SysFricLrngFricDiagcTiThd_Val;
  float32 SysFricLrngFricOffs_Val;
  float32 SysFricLrngFricOffsHiLim_Val;
  float32 SysFricLrngFricOffsLoLim_Val;
  float32 SysFricLrngFricOffsLpFilFrq_Val;
  float32 SysFricLrngGain_Val;
  float32 SysFricLrngHwPosnAuthyThd_Val;
  float32 SysFricLrngHwVelConstrLim_Val;
  float32 SysFricLrngHwVelHiLim_Val;
  float32 SysFricLrngHwVelLoLim_Val;
  float32 SysFricLrngIgnCycFricChgLim_Val;
  float32 SysFricLrngLatAHiLim_Val;
  float32 SysFricLrngLatALoLim_Val;
  float32 SysFricLrngTHiLim_Val;
  float32 SysFricLrngTLoLim_Val;
  float32 TEstimnAmbPwrMplr_Val;
  float32 TEstimnAmbTSca_Val;
  float32 TEstimnAssiMechAmbLpFilFrq_Val;
  float32 TEstimnAssiMechAmbMplr_Val;
  float32 TEstimnAssiMechCorrLim_Val;
  float32 TEstimnAssiMechDampgSca_Val;
  float32 TEstimnAssiMechDftT_Val;
  float32 TEstimnAssiMechLLFilCoeffA1_Val;
  float32 TEstimnAssiMechLLFilCoeffB0_Val;
  float32 TEstimnAssiMechLLFilCoeffB1_Val;
  float32 TEstimnAssiMechSlew_Val;
  float32 TEstimnCorrnTAssiMech_Val;
  float32 TEstimnCorrnTCu_Val;
  float32 TEstimnCorrnTMag_Val;
  float32 TEstimnCorrnTSi_Val;
  float32 TEstimnCuAmbLpFilFrq_Val;
  float32 TEstimnCuAmbMplr_Val;
  float32 TEstimnCuCorrnLim_Val;
  float32 TEstimnCuLLFilCoeffA1_Val;
  float32 TEstimnCuLLFilCoeffB0_Val;
  float32 TEstimnCuLLFilCoeffB1_Val;
  float32 TEstimnEngTSca_Val;
  float32 TEstimnMagAmbLpFilFrq_Val;
  float32 TEstimnMagCorrnLim_Val;
  float32 TEstimnMagLLFilCoeffA1_Val;
  float32 TEstimnMagLLFilCoeffB0_Val;
  float32 TEstimnMagLLFilCoeffB1_Val;
  float32 TEstimnSiAmbLpFilFrq_Val;
  float32 TEstimnSiAmbMplr_Val;
  float32 TEstimnSiCorrnLim_Val;
  float32 TEstimnSiLLFilCoeffA1_Val;
  float32 TEstimnSiLLFilCoeffB0_Val;
  float32 TEstimnSiLLFilCoeffB1_Val;
  float32 VehSigCdngLatASlewRate_Val;
  float32 VehSigCdngLtgASlewRate_Val;
  float32 VehSigCdngVehSpdSlewRate_Val;
  float32 WhlImbRejctnDcTrendFltRcvryThd_Val;
  uint32 SysFricLrngThd_Val;
  uint16 HwTq0MeasHwTq0PrtclFltFailStep_Val;
  uint16 HwTq0MeasHwTq0PrtclFltPassStep_Val;
  uint16 HwTq1MeasHwTq1PrtclFltFailStep_Val;
  uint16 HwTq1MeasHwTq1PrtclFltPassStep_Val;
  uint16 McuDiagc2MilliSecCntrCompThd_Val;
  uint16 McuDiagcFltFailStep_Val;
  uint16 McuDiagcFltPassStep_Val;
  uint16 SnsrMeasStrtTrigDly_Val;
  uint16 HwAg0MeasHwAg0IfFltFailStep_Val;
  uint16 HwAg0MeasHwAg0IfFltPassStep_Val;
  uint16 HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val;
  uint16 HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val;
  uint16 HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val;
  uint16 HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val;
  uint16 HwAg1MeasHwAg1IfFltFailStep_Val;
  uint16 HwAg1MeasHwAg1IfFltPassStep_Val;
  uint16 HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val;
  uint16 HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val;
  uint16 HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val;
  uint16 HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val;
  u2p14 MotTqTranlDampgRampEnd_Val;
  uint16 PwrDiscnctNtc0x042FailStep_Val;
  uint16 PwrDiscnctNtc0x042PassStep_Val;
  uint16 PwrDiscnctNtc0x04AFailStep_Val;
  uint16 PwrDiscnctNtc0x04APassStep_Val;
  uint16 SysFricLrngRngCntrThd_Val;
  uint8 SysGlbPrmMotPoleCnt_Val;
  uint8 HwAg0MeasVrnrErrThd_Val;
  uint8 HwAg1MeasVrnrErrThd_Val;
  boolean TEstimnWghtAvrgTDi_Logl;
  Ary1D_u8p8_20 AssiPahFwlDftAssiX_Ary1D;
  Ary1D_s4p11_20 AssiPahFwlDftAssiY_Ary1D;
  Ary2D_s4p11_12_11 AssiPahFwlHiFrqUpprLimY_Ary2D;
  Ary2D_s4p11_12_11 AssiPahFwlUpprLimX_Ary2D;
  Ary2D_s4p11_12_11 AssiPahFwlUpprLimY_Ary2D;
  Ary1D_s11p4_11 DampgPahFwlDampgCmdUpprLimX_Ary1D;
  Ary2D_s7p8_12_11 DampgPahFwlDampgCmdUpprLimY_Ary2D;
  Ary1D_u5p11_11 DampgPahFwlDftDampgY_Ary1D;
  Ary1D_s11p4_11 DampgPahFwlInertiaCmpUpprLimX_Ary1D;
  Ary2D_s7p8_12_11 DampgPahFwlInertiaCmpUpprLimY_Ary2D;
  Ary1D_s4p11_5 EotProtnFwlActvCmdLowrBnd_Ary1D;
  Ary1D_s4p11_5 EotProtnFwlActvCmdUpprBnd_Ary1D;
  Ary1D_u8p8_6 HiLoadStallLimrStallMotTqCmdLimX_Ary1D;
  Ary1D_u8p8_6 HiLoadStallLimrStallMotTqCmdLimY_Ary1D;
  Ary1D_u8_22 HwAg0MeasSnsr0Rev_Ary1D;
  Ary1D_u8_22 HwAg0MeasSnsr1Rev_Ary1D;
  Ary1D_sint16_22 HwAg0MeasStep_Ary1D;
  Ary1D_u8_22 HwAg1MeasSnsr0Rev_Ary1D;
  Ary1D_u8_22 HwAg1MeasSnsr1Rev_Ary1D;
  Ary1D_sint16_22 HwAg1MeasStep_Ary1D;
  Ary1D_u9p7_2 LimrCdngGainIncSlewX_Ary1D;
  Ary1D_u9p7_2 LimrCdngGainIncSlewY_Ary1D;
  Ary1D_u9p7_2 LimrCdngTqIncSlewX_Ary1D;
  Ary1D_u13p3_2 LimrCdngTqIncSlewY_Ary1D;
  Ary1D_u9p7_4 MotTqTranlDampgVehSpdBlndX_Ary1D;
  Ary1D_s11p4_11 RtnPahFwlUpprBndTblX_Ary1D;
  Ary2D_s4p11_8_11 RtnPahFwlUpprBndTblY_Ary2D;
  Ary1D_u9p7_8 RtnPahFwlVehSpd_Ary1D;
  Ary1D_float32_4 SysFricLrngBasLineFric_Ary1D;
  Ary2D_float32_8_4 SysFricLrngBasLineHys_Ary2D;
  Ary2D_uint16_8_3 SysFricLrngBasLineRngCntr_Ary2D;
  Ary1D_float32_4 SysFricLrngFricChgWght_Ary1D;
  Ary1D_float32_4 SysFricLrngFricHysHwAgPt_Ary1D;
  Ary1D_u11p5_10 SysFricLrngIvsTrsmRatX_Ary1D;
  Ary1D_u6p10_10 SysFricLrngIvsTrsmRatY_Ary1D;
  Ary1D_boolean_4 SysFricLrngMaskVehSpd_Ary1D;
  Ary2D_float32_4_2 SysFricLrngVehSpd_Ary2D;
  Ary1D_u9p7_6 TunSelnAuthyVehSpdX_Ary1D;
} Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP (41)
typedef struct
{
  float32 GmRoadWhlInQlfrMaxAllwblFrq_Val;
  float32 GmRoadWhlInQlfrMaxFrqChg_Val;
  float32 WhlImbRejctnDcTrendFltRcvryNegStep_Val;
  float32 WhlImbRejctnDcTrendFltRcvryPosStep_Val;
  float32 WhlImbRejctnFrqDiagcAmpThd_Val;
  float32 WhlImbRejctnFrqDiagcFltRcvryNegStep_Val;
  float32 WhlImbRejctnFrqDiagcFltRcvryPosStep_Val;
  float32 WhlImbRejctnFrqDiagcFltRcvryThd_Val;
  float32 WhlImbRejctnFrqDiagcThd_Val;
  float32 WhlImbRejctnMaxMgnFltNegStep_Val;
  float32 WhlImbRejctnMaxMgnFltPosStep_Val;
  float32 WhlImbRejctnMaxMgnFltRcvryNegStep_Val;
  float32 WhlImbRejctnMaxMgnFltRcvryPosStep_Val;
  float32 WhlImbRejctnMaxMgnFltRcvryThd_Val;
  float32 WhlImbRejctnMaxMgnFltThd_Val;
  float32 WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val;
  float32 WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val;
  float32 WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val;
  u16p0 WhlImbRejctnFrqDiagcTout_Val;
} Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP (42)
typedef struct
{
  float32 GmVehPwrModHwTqMinKeepAssi_Val;
  float32 GmVehPwrModVehSpdAssiOnMin_Val;
  float32 GmVehPwrModVehSpdMinKeepAssi_Val;
  uint32 GmVehPwrModHwTqMinKeepTmr_Val;
  Ary2D_s7p8_4_5 EotProtnFwlEotDampgActvBndY_Ary2D;
} Rte_Calprm_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP (43)
typedef struct
{
  float32 TEstimnMagAmbMplr_Val;
  Ary1D_u4p12_6 TunSelnAuthyHwTqY_Ary1D;
  Ary1D_u6p10_6 TunSelnAuthyHwVelY_Ary1D;
} Rte_Calprm_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP (44)
typedef struct
{
  float32 TEstimnMagAmbMplr_Val;
  Ary1D_u4p12_6 TunSelnAuthyHwTqY_Ary1D;
  Ary1D_u6p10_6 TunSelnAuthyHwVelY_Ary1D;
} Rte_Calprm_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP (45)
typedef struct
{
  float32 TEstimnMagAmbMplr_Val;
  Ary1D_u4p12_6 TunSelnAuthyHwTqY_Ary1D;
  Ary1D_u6p10_6 TunSelnAuthyHwVelY_Ary1D;
} Rte_Calprm_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP (46)
typedef struct
{
  float32 TEstimnMagAmbMplr_Val;
  Ary1D_u4p12_6 TunSelnAuthyHwTqY_Ary1D;
  Ary1D_u6p10_6 TunSelnAuthyHwVelY_Ary1D;
} Rte_Calprm_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP (47)
typedef struct
{
  float32 TEstimnMagAmbMplr_Val;
  Ary1D_u4p12_6 TunSelnAuthyHwTqY_Ary1D;
  Ary1D_u6p10_6 TunSelnAuthyHwVelY_Ary1D;
} Rte_Calprm_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP (48)
typedef struct
{
  float32 SnsrOffsCorrnHwAgLrndOffsLim_Val;
  float32 SnsrOffsCorrnHwTqLrndOffsLim_Val;
  float32 SnsrOffsCorrnVehYawRateLrndOffsLim_Val;
  float32 SnsrOffsLrngHwAgLrngTi_Val;
  float32 SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val;
  float32 SnsrOffsLrngHwTqLrngMeasTi_Val;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd1_Val;
  float32 SnsrOffsLrngHwTqLrngSampleImbThd2_Val;
  float32 SnsrOffsLrngHwTqLrngTiWghtCoeff_Val;
  float32 SnsrOffsLrngYawLrngTi_Val;
  uint32 NxtrCalIdsCal1DevlpRelNr_Val;
  uint32 NxtrCalIdsCal1DevlpTiStamp_Val;
  uint16 SnsrOffsLrngHwTqLrngSampleThd1_Val;
  uint16 SnsrOffsLrngHwTqLrngSampleThd2_Val;
  uint8 NxtrCalIdsCal1DevlpRelSt_Val;
  uint8 NxtrCalIdsCal1DevlpVers_Val;
  boolean InertiaCmpVelDecelGainEnaCal_Logl;
  boolean SnsrOffsCorrnOffsEna_Logl;
  Ary1D_uint32_512 DiagcMgrFltResp_Ary1D;
  Ary1D_u8_6 NxtrCalIdsCal1DevlpAuthor_Ary1D;
  Ary1D_u8_48 NxtrCalIdsCal1DevlpDesc_Ary1D;
} Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP (49)
typedef struct
{
  float32 GmOvrlStMgrLkaHwTqThd1_Val;
  float32 GmOvrlStMgrLkaHwTqThd2_Val;
  boolean GmOvrlStMgrApaMfgEna_Logl;
  boolean GmOvrlStMgrEscMfgEna_Logl;
  boolean GmOvrlStMgrLkaMfgEna_Logl;
  boolean PullCmpActvEna_Logl;
} Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP (50)
typedef struct
{
  float32 GmOvrlStMgrApaHwTqThd_Val;
  float32 GmOvrlStMgrApaVehSpdHiLim_Val;
  float32 GmOvrlStMgrEscVehSpdHiLim_Val;
  float32 GmOvrlStMgrHaptcAmp_Val;
  float32 GmOvrlStMgrLkaVehSpdHiLim_Val;
  float32 GmOvrlStMgrLkaVehSpdLoLim_Val;
  float32 HowDetnMinVehSpd_Val;
  float32 HowDetnPercOfPrevHowEstim_Val;
  float32 HowDetnSlewRate_Val;
  float32 HowDetnTqHpFilFrq_Val;
  float32 SnsrOffsLrngHwAgLrngDrvgDstThd_Val;
  float32 SnsrOffsLrngHwAgLrngHwVelThd_Val;
  float32 SnsrOffsLrngHwAgLrngSysTqThd_Val;
  float32 SnsrOffsLrngHwAgLrngSysTqThdMed_Val;
  float32 SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val;
  float32 SnsrOffsLrngHwAgLrngSysTqThdWide_Val;
  float32 SnsrOffsLrngHwAgLrngVehSpdThd_Val;
  float32 SnsrOffsLrngHwAgLrngYawOffsDbnd_Val;
  float32 SnsrOffsLrngHwAgLrngYawRateThd_Val;
  float32 SnsrOffsLrngHwAgOffsLim_Val;
  float32 SnsrOffsLrngHwTqLrngEnaTiThd_Val;
  float32 SnsrOffsLrngHwTqLrngHwAgDbnd_Val;
  float32 SnsrOffsLrngHwTqLrngHwAgThd_Val;
  float32 SnsrOffsLrngHwTqLrngHwTqThd_Val;
  float32 SnsrOffsLrngHwTqLrngHwVelThd_Val;
  float32 SnsrOffsLrngHwTqLrngMeasTiScar_Val;
  float32 SnsrOffsLrngHwTqLrngVehSpdThd_Val;
  float32 SnsrOffsLrngHwTqOffsLim_Val;
  float32 SnsrOffsLrngTqInpDetnPwrEstimnThd_Val;
  float32 SnsrOffsLrngTqInpDetnSinGenrAmp_Val;
  float32 SnsrOffsLrngTqInpDetnSinGenrFrq_Val;
  float32 SnsrOffsLrngTqInpDetnStg1FilGain_Val;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainCen_Val;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val;
  float32 SnsrOffsLrngTqInpDetnStg2FilGainUp_Val;
  float32 SnsrOffsLrngYawLrngHwAgThd_Val;
  float32 SnsrOffsLrngYawLrngYawAThd_Val;
  float32 SnsrOffsLrngYawOffsFrshTiThd_Val;
  float32 SnsrOffsLrngYawRateOffsLim_Val;
  uint32 GmOvrlStMgrHaptcDurn_Val;
  uint16 SnsrOffsLrngTqInpDetnStg2WinSize_Val;
  uint8 SnsrOffsLrngTqInpDetnStg1WinSize_Val;
  boolean GmOvrlStMgrApaHaptcEna_Logl;
  boolean SnsrOffsLrngFctEna_Logl;
  boolean SnsrOffsLrngHwAgLrngEna_Logl;
  boolean SnsrOffsLrngHwTqLrngEna_Logl;
  boolean SnsrOffsLrngYawLrngEna_Logl;
  Ary1D_u9p7_9 HowDetnHiFrqGainY_Ary1D;
  Ary2D_u8p8_9_6 HowDetnHiFrqRateX_Ary2D;
  Ary2D_s7p8_9_6 HowDetnHiFrqRateY_Ary2D;
  Ary2D_u8p8_9_5 HowDetnLoFrqRateX_Ary2D;
  Ary2D_s7p8_9_5 HowDetnLoFrqRateY_Ary2D;
  Ary1D_u8p8_7 HowDetnStThdX_Ary1D;
  Ary1D_u9p7_9 HowDetnVehSpd_Ary1D;
} Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP (51)
typedef struct
{
  float32 GmOvrlStMgrApaHwTqFilFrq_Val;
  float32 GmOvrlStMgrHwTqFilFrq_Val;
  float32 GmOvrlStMgrLkaHwTqFilFrq_Val;
  float32 GmTqArbnEscMaxTq_Val;
  float32 GmTqArbnLkaOutpOvrlUpprLim_Val;
  float32 HowDetnEstimLpFilFrq_Val;
  float32 HowDetnStLpFilFrq_Val;
  float32 HowDetnTqFinalLpFilFrq_Val;
  float32 HowDetnTqInitLpFilFrq_Val;
  float32 SnsrOffsLrngHwVelFilFrq_Val;
  float32 SnsrOffsLrngTqAndAgFilFrq_Val;
  float32 SnsrOffsLrngTqInpDetnHwTqFilFrq_Val;
  float32 SnsrOffsLrngYawACdngFilFrq_Val;
  float32 SnsrOffsLrngYawRateCdngFilFrq_Val;
  uint32 GmOvrlStMgrLkaHwTqTiThd2_Val;
  boolean GmStrtStopEna_Logl;
  boolean GmTqArbnApaAssiScaEna_Logl;
  boolean GmTqArbnApaDampgScaEna_Logl;
  boolean GmTqArbnApaRtnScaEna_Logl;
} Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP (52)
typedef struct
{
  uint32 GmOvrlStMgrLkaHwTqTiThd1_Val;
} Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP (53)
typedef struct
{
  float32 GmOvrlStMgrHaptcFrq_Val;
  float32 GmStrtStopFltRateLim_Val;
  float32 GmStrtStopMod1EngTranThd_Val;
  float32 GmStrtStopMod1Sca_Val;
  float32 GmStrtStopMod1ToStopRateLim_Val;
  float32 GmStrtStopMod1VehSpdTranThd_Val;
  float32 GmStrtStopMod2Sca_Val;
  float32 GmStrtStopNormModEngTranThd_Val;
  float32 GmStrtStopNormModVehSpdTranThd_Val;
  float32 GmStrtStopNormRateLim_Val;
  float32 GmStrtStopNormToMod1RateLim_Val;
  float32 GmStrtStopStopAndMod2RateLim_Val;
  float32 GmStrtStopStopMod1HwTqTranThd_Val;
  float32 GmStrtStopStopMod1HwVelTranThd_Val;
  float32 GmStrtStopStopMod1Tmr_Val;
  float32 GmStrtStopStopMod1VehSpdTranThd_Val;
  float32 GmStrtStopStopMod2HwTqTranThd_Val;
  float32 GmStrtStopStopMod2HwVelTranThd_Val;
  float32 GmStrtStopStopMod2Tmr_Val;
  float32 GmStrtStopStopMod2VehSpdTranThd_Val;
  float32 GmStrtStopStopModSca_Val;
  float32 HowDetnOffThd_Val;
  float32 HowDetnOffTi_Val;
  uint32 GmOvrlStMgrApaHwTqTiThd_Val;
  uint32 GmOvrlStMgrHaptcReactnTi_Val;
  uint32 GmOvrlStMgrHaptcReqTiThd_Val;
  boolean GmTqArbnLkaSlewEna_Logl;
  Ary1D_u4p12_6 GmTqArbnApaDiRateX_Ary1D;
} Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP (54)
typedef struct
{
  float32 GmOvrlStMgrHwAgTarLimr_Val;
  float32 GmOvrlStMgrStandStillThd_Val;
  float32 GmTqArbnApaEnaRate_Val;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val;
  uint32 GmOvrlStMgrStandStillTiThd_Val;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D;
} Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt01GroupC_DEFAULT_RTE_CALPRM_GROUP (55)
typedef struct
{
  float32 GmOvrlStMgrHwAgTarLimr_Val;
  float32 GmOvrlStMgrStandStillThd_Val;
  float32 GmTqArbnApaEnaRate_Val;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val;
  uint32 GmOvrlStMgrStandStillTiThd_Val;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D;
} Rte_Calprm_CalRegn02Rt01GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt02GroupC_DEFAULT_RTE_CALPRM_GROUP (56)
typedef struct
{
  float32 GmOvrlStMgrHwAgTarLimr_Val;
  float32 GmOvrlStMgrStandStillThd_Val;
  float32 GmTqArbnApaEnaRate_Val;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val;
  uint32 GmOvrlStMgrStandStillTiThd_Val;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D;
} Rte_Calprm_CalRegn02Rt02GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt03GroupC_DEFAULT_RTE_CALPRM_GROUP (57)
typedef struct
{
  float32 GmOvrlStMgrHwAgTarLimr_Val;
  float32 GmOvrlStMgrStandStillThd_Val;
  float32 GmTqArbnApaEnaRate_Val;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val;
  uint32 GmOvrlStMgrStandStillTiThd_Val;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D;
} Rte_Calprm_CalRegn02Rt03GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt04GroupC_DEFAULT_RTE_CALPRM_GROUP (58)
typedef struct
{
  float32 GmOvrlStMgrHwAgTarLimr_Val;
  float32 GmOvrlStMgrStandStillThd_Val;
  float32 GmTqArbnApaEnaRate_Val;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val;
  uint32 GmOvrlStMgrStandStillTiThd_Val;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D;
} Rte_Calprm_CalRegn02Rt04GroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP (59)
typedef struct
{
  float32 DampgQuadHwTqBacklsh_Val;
  float32 DampgQuadMotVelBacklsh_Val;
  float32 EotLrngHwAgOverTrvlEntr_Val;
  float32 EotLrngHwAgOverTrvlExit_Val;
  float32 EotProtnSoftEndStopAuthyThd_Val;
  float32 HwAgTrakgServoEnaRate_Val;
  float32 HwAgTrakgServoExecRate_Val;
  float32 HwAgTrakgServoMaxRamp_Val;
  float32 HwAgTrakgServoMinRamp_Val;
  float32 HwAgTrakgServoPidLim_Val;
  float32 HwAgTrakgServoRampCmpl_Val;
  float32 TqLoaDrvrTqNom_Val;
  float32 TqLoaMotTqCmdLim_Val;
  float32 TqLoaMotVelAndTqBasdScaFacFallRate_Val;
  float32 TqLoaMotVelAndTqBasdScaFacMax_Val;
  float32 TqLoaMotVelAndTqBasdScaFacMin_Val;
  float32 TqLoaMotVelAndTqBasdScaFacRiseRate_Val;
  float32 TqLoaMotVelMgnThd_Val;
  float32 TqLoaTqCmdMgnThd_Val;
  float32 TqLoaVehLatADifScaFacFallRate_Val;
  float32 TqLoaVehLatADifScaFacRiseRate_Val;
  float32 TqLoaVehLatAEstimnFilFrq_Val;
  float32 TqLoaVehSteerRat_Val;
  float32 TqLoaVehUnderSteerGrdt_Val;
  float32 TqLoaVehWhlBas_Val;
  float32 WhlImbRejctnCmdMgnLp1FilFrq_Val;
  float32 WhlImbRejctnCmdMgnLp2FilFrq_Val;
  float32 WhlImbRejctnDcTrendLpFil_Val;
  uint32 NxtrCalIdsCal2DevlpRelNr_Val;
  uint32 NxtrCalIdsCal2DevlpTiStamp_Val;
  uint8 NxtrCalIdsCal2DevlpRelSt_Val;
  uint8 NxtrCalIdsCal2DevlpVers_Val;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D;
  Ary1D_u4p12_6 HwAgTrakgServoDiRateX_Ary1D;
  Ary1D_u7p9_6 HwAgTrakgServoDiRateY_Ary1D;
  Ary1D_u10p6_3 HwAgTrakgServoHwAgRateLim_Ary1D;
  Ary1D_u8p8_4 HwAgTrakgServoMaxCmdX_Ary1D;
  Ary1D_u4p12_4 HwAgTrakgServoMaxCmdY_Ary1D;
  Ary1D_u9p7_3 HwAgTrakgServoVehSpdBasd_Ary1D;
  Ary1D_u8_6 NxtrCalIdsCal2DevlpAuthor_Ary1D;
  Ary1D_u8_48 NxtrCalIdsCal2DevlpDesc_Ary1D;
  Ary1D_u4p12_8 TqLoaTqCmdLimY_Ary1D;
  Ary1D_u2p14_4 TqLoaVehLatADifScaFacX_Ary1D;
  Ary2D_u1p15_8_4 TqLoaVehLatADifScaFacY_Ary2D;
  Ary1D_u4p12_8 TqLoaVehLatAGainY_Ary1D;
  Ary1D_u10p6_5 TqLoaVehSpdScaFacX_Ary1D;
  Ary1D_u1p15_5 TqLoaVehSpdScaFacY_Ary1D;
  Ary1D_u10p6_8 TqLoaVehSpdX_Ary1D;
} Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03CmnGroupA_DEFAULT_RTE_CALPRM_GROUP (60)
typedef struct
{
  float32 HysCmpOutpLim_Val;
  float32 HysCmpRevGain_Val;
  Ary1D_u16p0_2 AssiThermScaX_Ary1D;
  Ary1D_u2p14_2 AssiThermScaY_Ary1D;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D;
} Rte_Calprm_CalRegn03CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP (61)
typedef struct
{
  float32 EotProtnActvRegnBypMaxThd_Val;
  float32 EotProtnDeltaTqThd_Val;
  float32 PullCmpActvCmpLrnTiDecShoTerm_Val;
  float32 PullCmpActvCmpLrnTiIncShoTerm_Val;
  float32 PullCmpActvCmpLrnTiLongTerm_Val;
  float32 PullCmpActvCmpShoTermRstHwAgThd_Val;
  float32 PullCmpActvCmpShoTermRstHwTqThd_Val;
  float32 PullCmpActvCmpShoTermRstLatAThd_Val;
  float32 PullCmpActvCmpShoTermRstYawRateThd_Val;
  float32 PullCmpActvHwTqFilFrqLongTerm_Val;
  float32 PullCmpActvHwTqFilFrqLrngEna_Val;
  float32 PullCmpActvHwTqFilFrqShoTerm_Val;
  float32 PullCmpActvLongTermLim_Val;
  float32 PullCmpActvLrngEnaAgConfMinMgn_Val;
  float32 PullCmpActvLrngEnaHwAgMaxMgn_Val;
  float32 PullCmpActvLrngEnaHwTqMaxMgn_Val;
  float32 PullCmpActvLrngEnaHwVelMaxMgn_Val;
  float32 PullCmpActvLrngEnaLatAMaxMgn_Val;
  float32 PullCmpActvLrngEnaTiThd_Val;
  float32 PullCmpActvLrngEnaVehSpdMaxMgn_Val;
  float32 PullCmpActvLrngEnaVehSpdMinMgn_Val;
  float32 PullCmpActvLrngEnaVehSpdRateMaxMgn_Val;
  float32 PullCmpActvLrngEnaYawRateMaxMgn_Val;
  float32 PullCmpActvOpstSignTiShoTerm_Val;
  float32 PullCmpActvOutpMaxRate_Val;
  float32 PullCmpActvPullCmpShoTermLim_Val;
  float32 PullCmpActvPullCmpTotLim_Val;
  float32 PullCmpActvPullErrLimLongTerm_Val;
  float32 PullCmpActvPullErrMgnThd_Val;
  float32 PullCmpActvPullErrShoTermLim_Val;
  float32 PullCmpActvShoTermRampTi_Val;
  float32 WhlImbRejctnAutScaTar_Val;
  float32 WhlImbRejctnScaCncl_Val;
  float32 WhlImbRejctnUgrPoleMgn_Val;
  float32 WhlImbRejctnVehSpdEna_Val;
  u16p0 WhlImbRejctnRampDwnTi_Val;
  boolean WhlImbRejctnAutScaEna_Logl;
  Ary1D_u12p4_2 EotProtnMotSpdIncptY_Ary1D;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_4 PullCmpActvVehSpdScaTblX_Ary1D;
  Ary1D_u2p14_4 PullCmpActvVehSpdScaTblY_Ary1D;
} Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP (62)
typedef struct
{
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val;
  float32 GmOvrlStMgrLoaMtgtnHaptcFrq_Val;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val;
  Ary1D_u2p14_8 GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D;
  Ary1D_u10p6_8 GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D;
} Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP (63)
typedef struct
{
  float32 AssiHiFrqHpFilFrq_Val;
  float32 SysGlbPrmSysKineRat_Val;
  float32 EotLrngRackTrvlMin_Val;
  float32 DampgHydBasCoeff1_Val;
  float32 DampgHydBasCoeff2_Val;
  float32 DampgHydBasCoeff3_Val;
  float32 DampgHydBasCoeff4_Val;
  float32 DampgHydOutpLim_Val;
  float32 DampgMotVelLpFilFrq_Val;
  float32 DampgQuad13Mplr_Val;
  float32 DampgQuad24Mplr_Val;
  float32 DampgQuadHwTqLpFilFrq_Val;
  float32 DampgQuadMotVelLpFilFrq_Val;
  float32 DampgQuadScaLpFilFrq_Val;
  float32 EotLrngAuthyStrtLrn_Val;
  float32 EotLrngHwTqEotLrn_Val;
  float32 EotLrngMotVelEotLrn_Val;
  float32 EotLrngRackTrvlMax_Val;
  float32 EotLrngRstAuthyMin_Val;
  float32 EotProtnDftPosn_Val;
  float32 EotProtnEntrStLpFilFrq_Val;
  float32 EotProtnExitStLpFilFrq_Val;
  float32 EotProtnHwAgMax_Val;
  float32 EotProtnHwAgMin_Val;
  float32 EotProtnHwTqLpFilFrq_Val;
  float32 EotProtnMotSpdIncptSca_Val;
  float32 EotProtnPosnRampStep_Val;
  float32 EotProtnRackTrvlLimrAuthyThd_Val;
  float32 EotProtnRackTrvlLimrAuthyThdLimd_Val;
  float32 GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val;
  float32 SysGlbPrmSysTqRat_Val;
  float32 HwAgTrakgServoDftlTermLpFilFrq_Val;
  float32 HwAgTrakgServoHwAgLpFilFrq_Val;
  float32 HwAgTrakgServoHwTqLpFilFrq_Val;
  float32 HysCmpAssiCmdLpFilFrq_Val;
  float32 HysCmpFinalOutpLpFilFrq_Val;
  float32 HysCmpHwTqLpFilFrq_Val;
  float32 InertiaCmpVelMotInertia_Val;
  float32 InertiaCmpVelTqSnsrVelFilFrq_Val;
  float32 PullCmpActvYawRateFilFrq_Val;
  float32 RtnHwAuthySlew_Val;
  float32 RtnOffsRng_Val;
  float32 RtnOffsSlew_Val;
  float32 StabyCmpHwTqLpFilFrq_Val;
  float32 WhlImbRejctnBlndCmdMgnLp1FilFrq_Val;
  float32 WhlImbRejctnBlndCmdMgnLp2FilFrq_Val;
  float32 WhlImbRejctnDistbnMgnLpFil_Val;
  float32 WhlImbRejctnWhlSpdLpFil_Val;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val;
  uint16 EotLrngEotLrnTmr_Val;
  uint16 GmOvrlStMgrLoaStIgnCntrThd_Val;
  uint8 PwrpkCmpbltyChkGearId_Val;
  boolean EotProtnRackTrvlLimrEna_Logl;
  boolean EotProtnRunEotVelImpctAndSoftEndStop_Logl;
  boolean EotProtnSoftEndStopEna_Logl;
  Ary1D_u4p12_12 DampgHydAssiLim_Ary1D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptX_Ary1D;
  Ary1D_u1p15_10 HwAgTrakgServoSmotngY_Ary1D;
  Ary1D_u8p8_4 RtnHwAuthyScaX_Ary1D;
  Ary1D_u9p7_4 RtnHwAuthyScaY_Ary1D;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndX_Ary1D;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndY_Ary1D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd04Y_Ary2D;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd34TqX_Ary2D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd34Y_Ary2D;
  FilNotchGainRec1 InertiaCmpVelNotchFilStruct_Rec;
  FilNotchGainRec1 StabyCmpNotchFil1Struct_Rec;
  FilNotchGainRec1 StabyCmpNotchFil2Struct_Rec;
  FilNotchGainRec1 StabyCmpNotchFil3Struct_Rec;
  FilNotchGainRec1 StabyCmpNotchFil4Struct_Rec;
} Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP (64)
typedef struct
{
  float32 InertiaCmpVelDampgDecelGain_Val;
  float32 InertiaCmpVelDampgDecelGainFallSlew_Val;
  float32 InertiaCmpVelDampgGainOffThd_Val;
  float32 InertiaCmpVelDampgGainOnThd_Val;
  u9p7 HysCmpAssiInpLim_Val;
  Ary1D_s8p7_14 DampgTScaX_Ary1D;
  Ary1D_u4p12_14 DampgTScaY_Ary1D;
  Ary1D_s14p1_8 HysCmpFricTScaX_Ary1D;
  Ary1D_u9p7_8 HysCmpFricTScaY_Ary1D;
  Ary1D_u2p14_12 InertiaCmpVelCmdScaY_Ary1D;
  Ary1D_u11p5_6 InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D;
  Ary1D_u13p3_6 InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D;
  Ary1D_u12p4_2 InertiaCmpVelMotVelBasdOutpScagX_Ary1D;
  Ary1D_u1p15_2 InertiaCmpVelMotVelBasdOutpScagY_Ary1D;
  Ary1D_u2p14_12 InertiaCmpVelTqSnsrVelSca_Ary1D;
  Ary1D_s11p4_14 RtnTScaX_Ary1D;
  Ary1D_u8p8_14 RtnTScaY_Ary1D;
  Ary1D_u9p7_6 StabyCmpNotchFilBilnrBlndVehSpd_Ary1D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd02Y_Ary2D;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd12TqX_Ary2D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd12Y_Ary2D;
} Rte_Calprm_CalRegn03Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP (65)
typedef struct
{
  float32 EotProtnDampgSlew_Val;
  float32 EotProtnHwAgGain_Val;
  float32 EotProtnMotVelGain_Val;
  float32 EotProtnRackTrvlLimrRng_Val;
  float32 EotProtnRackTrvlLimrRngLimd_Val;
  float32 EotProtnRackTrvlLimrVehSpdThd_Val;
  float32 EotProtnSoftEndStopVehSpdThd_Val;
  float32 WhlImbRejctnAdpvFac_Val;
  float32 WhlImbRejctnCurrMgnSlewPerLoop_Val;
  float32 WhlImbRejctnDcTrendTh2Tq_Val;
  float32 WhlImbRejctnDcTrendThTq_Val;
  float32 WhlImbRejctnDcTrendTi2Sec_Val;
  float32 WhlImbRejctnDcTrendTiSec_Val;
  float32 WhlImbRejctnEnaSlewPerLoop_Val;
  float32 WhlImbRejctnMaxMgn_Val;
  float32 WhlImbRejctnMgnEstimnDeltaSca_Val;
  float32 WhlImbRejctnMgnEstimnDiThd_Val;
  float32 WhlImbRejctnMgnEstimnEnaThd_Val;
  float32 WhlImbRejctnMgnEstimnFrq_Val;
  float32 WhlImbRejctnMgnEstimnFrqDelta_Val;
  float32 WhlImbRejctnMgnEstimnLeak_Val;
  float32 WhlImbRejctnWhlSpdCorrlnThd_Val;
  uint16 WhlImbRejctnMaxDurn_Val;
  u16p0 WhlImbRejctnWhlSpdCorrlnTi_Val;
  Ary1D_u4p12_2 EotProtnHwTqScaX_Ary1D;
  Ary1D_u6p10_6 WhlImbRejctnFrqScaTblX_Ary1D;
  Ary1D_u1p15_6 WhlImbRejctnFrqScaTblY_Ary1D;
  Ary1D_u7p9_3 WhlImbRejctnPhaAdjX_Ary1D;
  Ary1D_s8p7_3 WhlImbRejctnPhaAdjY_Ary1D;
} Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(Ary1D_u0p16_8, RTE_CONST) Rte_C_Ary1D_u0p16_8_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u16p0_2, RTE_CONST) Rte_C_Ary1D_u16p0_2_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u2p14_2, RTE_CONST) Rte_C_Ary1D_u2p14_2_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u32_8, RTE_CONST) Rte_C_Ary1D_u32_8_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u32_8, RTE_CONST) Rte_C_Ary1D_u32_8_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# include "Rte_DataHandleType.h"

# ifdef RTE_MICROSAR_PIM_EXPORT


/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Assi_dAssiThermAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Assi_dAssiWhlImbRejctnBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGainBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGainWhlImbRejtcnZero; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_CombdAssiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlActvRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqAssiLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqAssiUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdHpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdLpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqLpLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlSumInp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_BrdgVltgSumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsHiBrdgVltg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumDPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumEPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumFPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_TempMotCurrAdcVlySum1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_TempMotCurrAdcVlySum2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0MeasPrevHwTq0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrCcwEot0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrCwEot0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevHwTq1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCcwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_HwTq2MeasPrevHwTq2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_HwTq3MeasPrevHwTq3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_DigMotHwPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_AntiWdupCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_AntiWdupCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_CurrLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_DualEcuLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_IvtrLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotCtrlMotVltgDaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotCtrlMotVltgQaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgIntglCmdDaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgIntglCmdQaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrAntiWdupCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrAntiWdupCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdErrDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdErrQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgBrdgFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgCmdFinal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDampgDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDampgQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDaxFb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDecouplFbDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDecouplFbQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDircFbDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDircFbQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPreLimDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPreLimQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPropCmdDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPropCmdQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxFb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxFfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgSatnIvsRat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgSatnRat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrPhaAdvPreDly; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotCoggCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotRplCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelAvrgTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelTiStampRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_Fil1OutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_Fil2OutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_RndNrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_PrevHwTqBacklshOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_PrevHydOutpLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_PrevMotVelBacklshOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgAssiMechTSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff1Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff2Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff3Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff4Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgHwTqSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgMotVelDampgCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgQuadHwTqBacklsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgQuadMotVelBacklsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlActvRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlAddDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpHpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLpLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_AbsltTLimSlewStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_LstTblValRateLimrStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_ReInitCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltCtrlrTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltCuTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr12T; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr36T; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnThermLoadLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnThermLoadLimTblYVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_PrevCcwEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_PrevCwEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevEotAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevEotDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevImpctPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEntrGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEotAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEotGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnExitGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnLimPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgFwX0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRawLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRawRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRawLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRawRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_ActPosnServoCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_DesLkaTqCmdRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_PosnServoSmotngEnaRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnDesLkaTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnEscTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnLkaOutpTqReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnLkaTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnPosnServoSmotngLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_PrevCalcdHowEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_PrevHowEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_dHowDetnAbsHiFrqTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_dHowDetnAbsLoFrqTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0PrevHwAg0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_CorrdPinionAgHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_CorrdPinionAgHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_MotAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevFildRelHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevMaxHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevSmotngHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsStordHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsStordHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsVehDynHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsWhlSpdHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevHwAgNotCorrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevPinionAgConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevSeldHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SeldHwAgConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_TqSnsrAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_AMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_HwPosnIni; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_HwPosnOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_SignHwPosnDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_TiDeltaA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_TiDeltaVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_TiSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_VelMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_HwAgTarRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevDftlErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevHwAgTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevIntglErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevSmotng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoDftlTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoHwAgTarFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoIntglTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoPidCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoPropTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoRtnScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoSmotngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChACmnModCmpLpFilSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBCmnModCmpLpFilSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevAssiCmdFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevHwTqFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseX; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseY; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAssiCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpEffCmpTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpHwTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpNegAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpPosAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRawVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRiseYFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_DecelGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_PreScagCmpCmdPrev1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_PreScagCmpCmdPrev2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_ScaDrvrVelPrev1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_ScaDrvrVelPrev2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelAssiBasdDampgCoeff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelCalcdInertiaCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelFilFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelMotVelBasdOutpScag; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotScadDrvrVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchBlndVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchInpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchOutpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelRawDecelGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelScadDrvrVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelTqSnsrVelFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevEotAssiScaCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevEotMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevStallMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevSysMotTqCmdScaCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevThermMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevVehSpdMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2MeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnCtrlrREstimdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnFetRFfEstimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdPreLimDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdPreLimQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotRFfEstimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_dMotCurrPeakEstimnMotCurrDaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_dMotCurrPeakEstimnMotCurrQaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrRegCfg_dMotCurrRegCfgMotVelMrfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrDaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrQaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgDaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgQaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrQaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrSqdMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlInterCalcnCurrDaxMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotCurrDaxBoost; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotTqCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVelFildFf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPhaAdvAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncDaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncQaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlRelncTqCoeff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotAgElecDlyRpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotCurrQaxToMotTqGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder1Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder1Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder2Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder2Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder3Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder3Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqCmdSca_MotTqScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgCmdCtrld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgSignPhaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgTiElpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgVelDampgCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_MotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevAntiWdupCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevDerivtvOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrInp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_VelSlewRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_CmpLrnTiDecShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_CmpLrnTiIncShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_CmpLrnTiLongTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_IntgtrGainDecShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_IntgtrGainIncShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_PullCmpCmdRateLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_PullCmpCmdTot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_PullCmpLongTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_PullCmpShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_VehSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_VehSpdRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_dPullCmpActvIntgtrGainShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_dPullCmpActvPullErrLongTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_dPullCmpActvPullErrShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctDeltaVltg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctDeltaVltg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_BrdgVltgAdjSlewStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_PrevBrdgVltgAltFltAdjLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_PrevSpdAdj; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_SpdAdjSlewStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrFildMotVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrLimDif; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMinStdOperLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMotEnvlpSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMotTqCmdIvtrLoaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrOutpVelOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrSpdAdj; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTLimMaxCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqEnvlpLim1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqEnvlpLim4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgAuthy; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgOffsLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAbsltHwAgOffsCalcd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAssiMechTRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnBascRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgAuthySca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgRtnCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwTqRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwVelRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngDrvgDstPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnEnaTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnHwTqPreProc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnSinGenrAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1FilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1FilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2CenFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2CenFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2DwnFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2DwnFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2UpFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2UpFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawLrngElpdLrngTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqLoThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqUpThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwAgMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwTqMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwTqOffsRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngSampleCntTot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngSampleImb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwVelFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngSysTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpDetnHwTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpDetnStg1Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngBiasEstimnRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawRateFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawRateFildCorrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevCmdSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlTarSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpAssiScaCmpBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil02Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil04Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil1Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil2Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil3Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil4Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_EstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_PrevFricOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_PrevMaxRawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnEstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTSlewLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAmbPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechDampgSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnCuCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnCuLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnMagCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnMagLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadAmbT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadEngT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnSiCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnSiLLFilv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnWghtAvrgT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_MotTqCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_MotVelAndTqBasdScaFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_VehLatADifScaFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaMotTqCmdPreScag; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaMotVelAndTqBasdScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaScaFacFinal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehLatADifScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehLatAEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehSpdBasdScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_AmpRampSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevFallRampRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevLimdAmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevPhaAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevPhaAgInc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevRisngRampRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_dTqOscnPreFinalCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_dTqOscnRateLimdAmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_dTqOscnSinCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrBreakPt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrBreakPt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_EnaSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcUgr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcUgr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_LeCurrMgnSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil1Coeff1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil1Coeff2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil2Coeff1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil2Coeff2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PrevFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PrevHwTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RiCurrMgnSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_ScaLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_ScaRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrLe1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrLe2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrRi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrRi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnCnclTqOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnCurrMgnLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnCurrMgnRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnFildWhlSpdLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnFildWhlSpdRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnLMSqdOutLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnLMSqdOutRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnScaLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnScaRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnWhlSpdCorrPerc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_DmaCfgAndUse2MilliSecAdcStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_MotAg0ReadPtrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_MotAg0TrsmStrt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_MotAg1ReadPtrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_MotAg1TrsmStrt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_d2MilliSecAdcActDmaTrfTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_d2MilliSecAdcMaxDmaTrfTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsCrcChkStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_HwTq2MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_HwTq3MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuCoreCfgAndDiagc_CoreCompTestRegRead; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_dMotAg0MeasMotAg0RawAgReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_dMotAg0MeasMotAg0RawErrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_dMotAg0MeasMotAg0RawTurnCntrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawAgReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawErrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawTurnCntrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_ShtdwnClsChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamFailrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamWordLineRead; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemDtsRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufADblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufBDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi0RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi1RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi2RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi3RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpiRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PwmPerdRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SnsrMeasStrt_TqMsgTrigCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_TSG31CfgAndUse_TSG31CfgAndUseAdcStrtOfCnvnPeak; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_TSG31CfgAndUse_TSG31CfgAndUseMotAg0SPIStart; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj0CfgAndUse_PhaOnTiCntrAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj0CfgAndUse_PhaOnTiCntrBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj0CfgAndUse_PhaOnTiCntrCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrDPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrEPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrFPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_CcwEotRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_CwEotRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCcwEotRngElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCwEotRngElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_OnCentrElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HaptcStTranActvToWaitRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HapticActvRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HapticWaitRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaFltRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaIntvRefTi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaIntvRefTi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LoaMtgtnHaptcFbStrtOnRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevApaIntvRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevHaptcReqRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevShiftLvrRvsRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevVehStandStillRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_TqOscCycRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_TranHaptcWaitToApaStActvRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldTiLeFrqChg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldTiRiFrqChg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_Mod1RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_Mod2RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_TqRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_DiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_RefTiHowOff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0RawDataAvlStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1RawDataAvlStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynRefTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynRefTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgToMotAgCorrlnDurnRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SlewElpdRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_TmrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RefTiRampDwn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PolarityCfg_PolarityCfgSaved; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_RefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_RefTiOpstSign; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_FltRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrpkCmpbltyChk_GearIdnRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngEnaTmrRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngMeasTmrRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RefTmrLrngConstr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RefTmrNtc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendRefTiEnaLrngTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendRefTiEnaLrngTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcRefTiEnaLrngTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_SlowSpdDiagcRefTiEnaLrngTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnDiagcRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnRefTiEnaLrngTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s15p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotCtrlMotAgCumvAlgndMrfRevSVPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s15p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotCtrlMotAgMeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s18p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotAgCumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s18p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_dMotQuadDetnMotAgCumDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_GainEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCtrlNtc5DErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCtrlNtc6DErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_Ntc5DErrCnt2MilliSecPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_Ntc6DErrCnt2MilliSecPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_OffsEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_PhaOnTiErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcHwIdxKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_FastLoopCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_LoopCntr2MilliSecStore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_LoopCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcFastLoopCntrMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcFastLoopCntrMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcLoopCntr2MilliSecMotCtrlDif; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0ErrParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0ErrParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0ParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0ParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0RawMeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0VltgFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0VltgFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ErrParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ErrParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1RawMeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1VltgFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1VltgFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgMeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotAgBackEmf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdCoggIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelMotAgRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcEnaSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u9p7, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnLstTblVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u9p7, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnLstTblValSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr5; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_dGateDrv1CtrlGateDrv1Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_dGateDrv1CtrlGateDrv1Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_dGateDrv1CtrlGateDrv1Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_dGateDrv1CtrlGateDrv1StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_dGateDrv1CtrlGateDrv1VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_dGateDrv1CtrlGateDrv1VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_GmLoaIgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldLeWhlDstPlsCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldLeWhlDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldRiWhlDstPlsCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldRiWhlDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeDeltaPls; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeDeltaTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiDeltaPls; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiDeltaTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr0Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr1Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr0Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr1Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwAgTrajCmdSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_CmdSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnErrThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnPreProcEnaLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_MotAgCorrlnErrThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysStMod_dSysStModTranVect; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u5p11, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrLimTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u5p11, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrZeroVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgRngOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgSwd1Ok; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgSwd1RngOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgSwd2Ok; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgSwd2RngOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x03CQlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x03DQlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x044QlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x04CQlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adc0CfgAndUse_Adc0DiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adc0CfgAndUse_Adc0DiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adc1CfgAndUse_Adc1DiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adc1CfgAndUse_Adc1DiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc0FltCntSt0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc0FltCntSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc0FltCntSt4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc0FltCntSt6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc0ScanGroup2RefFltCntSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc0ScanGroup3RefFltCntSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc1FltCntSt0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc1FltCntSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc1FltCntSt4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc1FltCntSt6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc1ScanGroup2RefFltCntSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_Adc1ScanGroup3RefFltCntSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_AdcDiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_AdcDiagcSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_AdcDiagc_AdcDiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolGainSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolTranCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotCurrEolCalSt2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolCalStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrRollgCnt1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrRollgCnt2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_GearIdn1Data; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_HwTq2ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_HwTq2IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_HwTq2MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_GearIdn2Data; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_HwTq3ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_HwTq3IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_HwTq3MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_FastLoopCntrDiagcCfgd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0ErrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0MeclRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ErrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1MeclRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgARollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgAStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgBRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgBStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_CmpEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotVelIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_CurrMeasCorrlnSens0RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_CurrMeasCorrlnSens0StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_CurrMeasCorrlnSens1RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_CurrMeasCorrlnSens1StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_ClrDiagcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_PrevClrDtcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_PrevClrNtcFlg10; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil3ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil4ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil5ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil6ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_NewSoftEndStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevSoftEndStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0St; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0BootstrpSplyFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0GenericFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1CfgCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1OffStChkIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1OffStCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1St; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_Ivtr1BootstrpSplyFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_Ivtr1GenericFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaFltCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevApaSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevEscSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevHaptcSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevLkaSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_PrevActSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_PrevStrtStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0PrevRollCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0PrevStepSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0SnsrTrigNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Qlfr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr0TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr1TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevRollCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevStepSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1SnsrTrigNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Qlfr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr0TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr1TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgARollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgAStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgBRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgBStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_SelnCaseSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqArbnTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevVltgModSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2MeclRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgARollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgAStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgBRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgBStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgCRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgCStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMinCurrNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTqNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LoaSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_LoaStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrUpSeq_PwrTurnOffCtrlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1Idx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_AbsltMotPosABDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_AbsltMotPosACDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_AbsltMotPosBCDifStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_CurrMotSumABCStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_CurrMotSumDEFStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_DigTqIdptSigStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_DigTqSnsrAStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_DigTqSnsrBStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_EcuTRngIgnCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_EotImpctCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_MotPosStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaAStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaBStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaCStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaDStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaEStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_PhaFStHlthSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_VltgRngIgnCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricLrngOperMod1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngOperModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysStMod_SysStModPrevSysSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrNtc40PrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrWdgRstrtCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvIninIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvRtIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevRamPageAcs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_RamTblSwt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevSrcSeln; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotDirInstsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotTqCmdSignPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_dMotQuadDetnTqCmdSign; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_AssiPrfmncPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolOffsProcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_WrmIninTestCmplPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsSngBitErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_PwrOnRstCrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_GearIdn1Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_GearIdn2Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_NvmStsCollctd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitSoftFailr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_TSG31CfgAndUse_TSG31CfgAndUseSysStEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_DampgDecPrfmncPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_ReInitCntrFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_HwAgOverTrvlCntrDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_RstLimReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevRackTrvlLimrEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevRackTrvlLimrInin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnDetd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnRackTrvlLimrDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlPinionAgConfSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0OffStChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1CfgSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_GateDrv1OffStChkSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv1Ctrl_Ivtr1OffStChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_CcwEotEnad; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_CwEotEnad; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_FctDiLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCcwEotRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCwEotRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InOnCentrRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_IgnCntrUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaFltPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaIntvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LoaStChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevApaIntvEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevHaptcReqEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevLkaFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevShiftLvrRvsEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevVehStandStillEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_dGmOvrlStMgrApaShiftLvrRvs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_dGmOvrlStMgrApaStandStill; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevLeWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRiWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_PrevSysStReqEnaVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_TqRefTiActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_dGmVehPwrModHwTqKeepAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_dGmVehPwrModVehSpdAssiKeepMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_dGmVehPwrModVehSpdAssiOnMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnLeDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnLeNonDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnRiDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnRiNonDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_HowOffPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0InitStepSeqNrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1InitStepSeqNrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_dHwAgArbnAgAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_dHwAgArbnAgBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_dHwAgCorrlnAgAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_dHwAgCorrlnAgBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwAgEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_MotAgOffsEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevSmotngSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevVehDynFil1Ena; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevVehDynFil2Ena; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwAgLrndEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgCorrdLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgKineFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgToMotAgCorrln; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SlewSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_CalcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoRampCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnChAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnChBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChAImdtCorrlnChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBImdtCorrlnChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_NotchFilChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgAOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgBOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgCOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_UnitDly; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_DiagStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_StLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgTmrEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrlStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_FctActvSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RampDwnCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_LrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_LrngEnad; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_OpstSignPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_PullCmpLongTermRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_PullCmpShoTermRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_dPullCmpActvShoTermRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctSeqATestCmplPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_PrevThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_PwrSplyReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_PwrSplyReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_PwrSplyStrtUpSelfTestCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlOverBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngTqInpDetnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngTqInpPrsnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_VehYawRateLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_VehYawRateOffsFrsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngCdnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngTiVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngEstimnVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngMeasEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngTqInpPrsnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngTqInpPrsntVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpPrsntRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngCdnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigNormn_EntrEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_VldNvm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngRunOneTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffsOutpDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AmbTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTInitEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_EngOilTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninTestCmplFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevDcThdExcdd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PrevEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_dTqOscnNonZeroAmpFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpdVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRateVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLrngEnaPrevTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLrngEnaPrevTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DistbnMagEnadPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcLrngEnaPrevTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PrevSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RampNo; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RampYes; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_SlowSpdDiagcLrngEnaPrevTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnDiagcLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnLrngEnaPrevTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_26, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0CoeffTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_sm5p12_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg0Meas_MotAg0CorrnTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_26, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1CoeffTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_sm5p12_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1CorrnTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_s1p14_512, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_MotCoggCmdY; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u0p16_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgTiBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_BlkFltTblRec1_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_BlkFltTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_CmdRtnBufRec1_NvMProxy1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_CmdRtnBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_boolean_NvMProxy1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_NvmBlkActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_CrcHwStsRec1_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SyncCrc_CrcHwSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_NtcFltInfoRec2_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrNtcFltAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_DiagcMgr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcIdxPrevSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcMgrNtcInfo10Ary; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_s16_DiagcMgrProxyAppl10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcMgrNtcInfo10DebCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_CosDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_SinDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder1X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder1Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder2X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder2Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder3X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder3Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_72, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1Buf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_StHlthSigStc1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_IgnCycSampleCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_StHlthSigStc1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_RamBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_StHlthSigStc1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_SigAvrgBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_225, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StHlthSigStc_SigStcHistDataAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FilAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehBasLineFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_LeStDlyUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_LeStVariUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RiStDlyUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RiStVariUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_StordValLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_StordValRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilHpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_HwTqHpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_FwlActvLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_HiFrqCmdLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_LowrLimLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_UpprLimLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(CurrMeasEolGainCalRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolGainCalSet; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(CurrMeasEolOffsCalRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolOffsCalSet; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq2Meas_HwTq2Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq3Meas_HwTq3Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgBrdgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgQaxFfLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_MotVelDampgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgHwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgMotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgScaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_DampgCmdLpFilLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_DampgCmdLpFilUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_FwlActvLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_InertiaCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_InertiaCmpLpFilLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_InertiaCmpLpFilUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcData10; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_ProxySetNtcData10; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil1ValStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil2ValStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DutyCycThermProtnFilStValRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_FilStVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild3Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild4Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild5Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild6Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EcuTMeas_EcuTMeasFilStVarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EotNvmDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_EotNvmData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MaxHwAgCwAndCcwRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_MaxHwAgCwAndCcw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_EotAssiScaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HwTqLkaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HwTqOscnLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_APASmotngHwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqCmdFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_EstimLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_FinalLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_IniLpFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_IniLpFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_IniLpFil3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_StLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilHpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_TqHpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwAgOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwAgOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PinionTqFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_RelHwAgFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_RelHwAgFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(StordLstPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_StordLstPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_YawRateFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_TqSnsrVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_DftlTermLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwAgSnsrTrimRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgVehCentrTrim_HwAgTrimData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChACmnModCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChAStabStLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChATraLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBCmnModCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBStabStLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBTraLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_AssiCmdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_FinalOutpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrVelFilNotchSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgMeasEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotPrmNomEolRec3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_MotPrmNom; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrDaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrQaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrRegCfg_MotVelMrfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaAFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaBFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaCFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaDFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaEFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaFFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotRplCoggPrmRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotRplCoggPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_HwTqLpFilLongTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_HwTqLpFilLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_HwTqLpFilShoTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PullCmpActv_VehYawRateLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_TqLimAssiRednLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngSysTqFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngSysTqFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgMeasFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgMeasFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqMeasFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqMeasFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwVelCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SnsrLrndOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_SnsrOffsLrnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_SysTqCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnHwTqFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawACdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawCdngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawCdngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawLrngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawLrngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch3Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch4Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AssiMechTLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricChgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricNonLrngDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricNonLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgAuthyLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_LatALpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehSpdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_VehLatAEstimnFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqOscn_PreFinalCmdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(OnlineCalStsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_OnlineCalSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_HwTqFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_LatAFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_BlndCmdMgnLp1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_BlndCmdMgnLp2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_CmdMgnLp1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_CmdMgnLp2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(WhlImbRejctnCmpPeakRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_CmpPeakData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DistbnMgnLeLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DistbnMgnRiLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdLeLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdRiLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdPrevEndSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevEscCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg182BusChassisExp_GmMsg182BusChassisExpPrevVehLgtA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg500BusHiSpd_GmMsg500BusHiSpdPrevWhlRotlStsTiStampResl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_IgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SessionTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedKeyTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedKeyTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_DtcNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_MsgCntxt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeRstTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeSeqNrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiRstTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiSeqNrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdInvldMsgTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg17DBusHiSpd_GmMsg17DBusHiSpdInvldMsgTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpInvldProtnValTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdInvldCrcTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg182BusChassisExp_GmMsg182BusChassisExpInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdAbsFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatAInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdTcsEnaTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1F5BusHiSpd_GmMsg1F5BusHiSpdInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqProtnValInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbProtnValInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbRollgCntrInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg3F1BusHiSpd_GmMsg3F1BusHiSpdInvldMsgTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdInvldMsgTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg500BusHiSpd_GmMsg500BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_TrigTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_GmIgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstPlsCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstPlsCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_NxtrMfgEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SessionCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidKeyAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionKeyAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmFctDiArbnSts1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_PrevGmFctDiArbnSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_Srv12LoopCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_SrvCntxt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_PrevClrNtcFlg6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg184BusHiSpd_GmMsg184BusHiSpdRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1CABusChassisExp_GmMsg1CABusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E5BusChassisExp_GmMsg1E5BusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E5BusHiSpd_GmMsg1E5BusHiSpdRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg232BusHiSpd_GmMsg232BusHiSpdPrevDesRtIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg335BusChassisExp_GmMsg335BusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevAgReqRollgCntVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevFbReqRollgCntVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg500BusHiSpd_GmMsg500BusHiSpdPrevWhlPlsPerRev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_ActvEveId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_EveCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCalProgdSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCustMfgEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiAssiMechTEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiDutyCycThermProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiEotProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiHysCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiInertiaCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiLoaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiSysFricLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiSysMotTqCmdRampRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgDiagcInhb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsSeedReqCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsUnlckd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SysStReqEnaOvrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrvIf_CmnMfgSrvUnlckd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CpidActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedReqd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcCtrlPidSeedTmrActvd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedReqd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_CustDiagcProgmSessionSeedTmrActvd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_GmDiCtrlPidTstRunng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_PrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CustDiagc_SysStReqEnaOvrdCust; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdPrevEngRunActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevEscCmdActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpPrevInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusChassisExp_GmMsg180BusChassisExpRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdPrevTqReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg180BusHiSpd_GmMsg180BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1F1BusHiSpd_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1F5BusHiSpd_GmMsg1F5BusHiSpdPrevShiftLvrInRvs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevAbsProtd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_TrigActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrPrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_SerlComOutpProxy_BusOffChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_SerlComOutpProxy_BusOffHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_CcaHwPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_CcaSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiRestore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_EpsSysSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_2, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_CmnMfgSrvIf, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrvIf_DataBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6Ary; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_s16_DiagcMgrProxyAppl6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6DebCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_DtcMap; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_DtcTrigStsAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_EveMap; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrBasMdlPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_9, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCcaMfgTrakg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCtrlPidSeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_9, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrDataUniversalNrSysId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrEcuId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrEndMdlPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_7, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrNxtrMfgTrakg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrProgmDate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrProgmSessionSeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrRepairShopCod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_822, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSecuBypAuthn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSysCodVersNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSysName; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_17, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrVinData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcData6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_ProxySetNtcData6; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# endif


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn01Rt01_Dummy_Ary1D_u4p12_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u4p12_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn01Rt01_Dummy_Ary1D_u4p12_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn01Rt01_Dummy_Ary1D_u4p12_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn01Rt01_Dummy_Ary1D_u4p12_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u6p10, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn01Rt01_Dummy_Ary1D_u6p10_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u6p10_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn01Rt01_Dummy_Ary1D_u6p10_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn01Rt01_Dummy_Ary1D_u6p10_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn01Rt01_Dummy_Ary1D_u6p10_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_AAACalRegn01Rt01_Dummy_float32_CalPortIf1_R
{
  P2FUNC(float32, RTE_CODE, Prm_Val) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn01Rt01_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn01Rt01_Dummy_Ary1D_u4p12_6_CalPortIf1_R TunSelnAuthyHwTqY;
  struct Rte_PDS_AAACalRegn01Rt01_Dummy_Ary1D_u6p10_6_CalPortIf1_R TunSelnAuthyHwVelY;
  struct Rte_PDS_AAACalRegn01Rt01_Dummy_float32_CalPortIf1_R TEstimnMagAmbMplr;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt01_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt01_Dummy_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt01_Dummy_2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt01_Dummy_3; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt01_Dummy_4; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u1p15_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u1p15_10, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u1p15_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u1p15_10_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u1p15_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u4p12_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u4p12_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u4p12_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u4p12_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u4p12_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u7p9, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u7p9_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u7p9_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u7p9_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u7p9_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u7p9_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u8p8_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u8p8_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary2D_u4p12_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u4p12_12_20, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupC_Dummy_Ary2D_u4p12_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary2D_u4p12_12_20_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupC_Dummy_Ary2D_u4p12_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_float32_CalPortIf1_R
{
  P2FUNC(float32, RTE_CODE, Prm_Val) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_uint32_CalPortIf1_R
{
  P2FUNC(uint32, RTE_CODE, Prm_Val) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u1p15_10_CalPortIf1_R GmTqArbnApaSmotngX;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u1p15_10_CalPortIf1_R GmTqArbnApaSmotngY;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u4p12_6_CalPortIf1_R GmTqArbnLkaSlewY;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u7p9_6_CalPortIf1_R GmTqArbnApaDiRateY;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary1D_u8p8_6_CalPortIf1_R GmTqArbnLkaSlewX;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary2D_u4p12_12_20_CalPortIf1_R GmTqArbnLkaOutpOvrlX;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_Ary2D_u4p12_12_20_CalPortIf1_R GmTqArbnLkaOutpOvrlY;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_float32_CalPortIf1_R GmOvrlStMgrHwAgTarLimr;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_float32_CalPortIf1_R GmOvrlStMgrStandStillThd;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_float32_CalPortIf1_R GmTqArbnApaEnaRate;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_float32_CalPortIf1_R GmTqArbnApaSmotngHwTqLpFilFrq;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_uint32_CalPortIf1_R GmOvrlStMgrShiftLvrTiThd;
  struct Rte_PDS_AAACalRegn02Rt01GroupC_Dummy_uint32_CalPortIf1_R GmOvrlStMgrStandStillTiThd;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupC_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupC_Dummy_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupC_Dummy_2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupC_Dummy_3; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupC_Dummy_4; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u0p16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u0p16_10, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u1p15_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u2p14, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u2p14_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u4p12_10, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_10_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u4p12_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u8p8_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(s4p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_s4p11_12_20, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u12p4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u12p4_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u12p4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u12p4_9_16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u3p13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u3p13_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u5p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u5p11_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u5p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u5p11_9_16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u7p9, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u7p9_9_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u8p8_12_20, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u8p8_9_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u8p8_9_8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R InertiaCmpVelAssiBasdDampgRollgY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R InertiaCmpVelAssiBasdDampgStatY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R InertiaCmpVelDampgSpdBlndY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R InertiaCmpVelNotchBlndY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R HysCmpFricWhlImbRejctnBlndY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_10_CalPortIf1_R InertiaCmpVelAssiBasdDampgCoeffX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff1ScaY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff2ScaY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff3ScaY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff4ScaY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R HysCmpFricWhlImbRejctnBlndX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R HysCmpFricWhlImbRejctnOffY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R HysCmpFricWhlImbRejctnOnY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMinY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R DampgMotVelX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R RtnHwAgOffsCalcdX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R AssiHiFrqGainY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R AssiHiFrqTqX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R DampgMotVelY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R RtnHwAgOffsCalcdY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R RtnScaVelX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMinX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R RtnScaVelY;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R RtnScaTqX;
  struct Rte_PDS_AAACalRegn03Rt01GroupA_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R RtnScaTqY;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupA_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupA_Dummy_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupA_Dummy_2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupA_Dummy_3; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupA_Dummy_4; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u0p16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u0p16_10, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u0p16_10_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(s4p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_s4p11_12_20, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u0p16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u0p16_4_2, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u12p4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u12p4_4_2, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_4_2_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u12p4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u12p4_5_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_5_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u1p15_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u1p15_5_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u2p14, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u2p14_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u3p13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u3p13_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u4p12_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u5p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u5p11_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u5p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u5p11_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u8p8_12_20, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u0p16_10_CalPortIf1_R InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R EotProtnDampgVehSpdTbl;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R EotProtnEntrGainVehSpdTbl;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMaxY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R EotProtnExitDampgY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R EotProtnNormDampgY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_4_2_CalPortIf1_R EotProtnHwDegDampgX;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u12p4_5_4_CalPortIf1_R EotProtnEntrGainX;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R AssiHiFrqWhlImbRejctnBlndY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R EotProtnEntrGainY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R AssiWhlImbRejctnBlndScaY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R AssiHiFrqWhlImbRejctnGainY;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R AssiHiFrqWhlImbRejctnBlndX;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R AssiHiFrqTqWhlImbRejctnTqX;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R AssiWhlImbRejctnBlndScaX;
  struct Rte_PDS_AAACalRegn03Rt01GroupB_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMaxX;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupB_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupB_Dummy_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupB_Dummy_2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupB_Dummy_3; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01GroupB_Dummy_4; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u7p9, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01_Dummy_Ary1D_u7p9_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u7p9_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn03Rt01_Dummy_Ary1D_u7p9_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn03Rt01_Dummy_Ary1D_u7p9_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn03Rt01_Dummy_Ary1D_u7p9_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn03Rt01_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn03Rt01_Dummy_Ary1D_u7p9_12_CalPortIf1_R InertiaCmpVelDampgFilFrq;
  struct Rte_PDS_AAACalRegn03Rt01_Dummy_Ary1D_u7p9_12_CalPortIf1_R InertiaCmpVelDampgFilFrqWhlImbRejctnOn;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01_Dummy_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01_Dummy_2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01_Dummy_3; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn03Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn03Rt01_Dummy_4; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned int Rte_BitType;
/**********************************************************************************************************************
 * type and extern declarations of RTE internal variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

# define RTE_STATE_UNINIT    (0U)
# define RTE_STATE_SCHM_INIT (1U)
# define RTE_STATE_INIT      (2U)

# define RTE_START_SEC_VAR_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_ZERO_INIT) Rte_InitState; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_CORE

/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGain_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGainEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DampgCmdBasDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_EotProtnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_FricLrngDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_HysCmpCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CmnMfgSrv_IgnCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_LoaScaDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgDiagcInhb_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpLrngDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_RtnCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_StallMotTqLimDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrdEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CustDiagc_GmIgnCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_MfgOvrlDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_SerlComDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_SysStReqEnaOvrdCombd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiagc_ThermLimFlgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngSpdStsNorm_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_InvldMsg0C9_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_PtCrkActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_PwrSteerIndcr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl3_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg17DBusHiSpd_InvldMsg17D_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg17DBusHiSpd_MissMsg17D_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_EscCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_EscReqActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_InvldMsg180BusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_MissMsg180BusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_InvldMsg180BusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_LkaCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_LkaReqActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_MissMsg180BusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg182BusChassisExp_SerlComVehLgtA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgAlvRollgCntBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtMaskBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtVldBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgMaskBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrCalStsBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrChksBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrTypBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgVldBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_MissMsg1E9_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComLatA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComYawRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(GmSysPwrMod1, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F5BusHiSpd_InvldMsg1F5_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F5BusHiSpd_ShiftLvrInRvs_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_AbsInvld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_AbsProtd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_MissMsg214_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_VehStabyEnhmtActvMsg214_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg232BusHiSpd_DesRtIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_ApaReqActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_FbReqActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_InvldMsg337_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_MissMsg337_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg3F1BusHiSpd_AmbT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg4D1BusHiSpd_EngOilT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg500BusHiSpd_WhlPlsPerRev_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg500BusHiSpd_WhlRotlStsTiStampResl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CodSupported_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CurrSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFailrTyp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFltTyp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcNr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcSrc_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcTrig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_HistSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_PartNr_CustMfgEnSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdProtnValRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdRollgCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsFaildRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_BackUpPwrModMstVirtDevAuthyRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SerlComInpProxy_BusOffChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SerlComInpProxy_BusOffHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngOilTRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngOilVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngRunActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_EngSpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_EngSpdStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstPlsCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstTiStampRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlRotlStsRstRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlSeqNrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdProtnValRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdRollgCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdTqReqActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LkaCmdTqValRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg0C5_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg0C9_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg17D_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg180BusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg180BusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg182_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1E9_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1F1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1F5_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg214_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg232_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg337BusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg348BusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg348BusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg34ABusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg34ABusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg3F1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg4D1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg500BusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_OutdAirTCorrdValMaskRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_OutdAirTCorrdValRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_OutdAirTCorrdValVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_PtCrkActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstPlsCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstTiStampRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlRotlStsRstRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlSeqNrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_ShiftLvrPosnRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_ShiftLvrPosnVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerSysPrfmncModReqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqActvVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqProtnValRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqRollgCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqTarAgRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvProtnValRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvRollgCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysBackUpPwrModEnaRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysBackUpPwrModRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysPwrModRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlAlvRollgCntrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlCmdChksRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlDeltaTqCmdActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_TqOvrlDeltaTqCmdValRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TracCtrlSysActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TracCtrlSysEnaRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynCtrlSysStRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynOverUnderSteerVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynYawRateRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynYawRateVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtActvRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLatARaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLatAVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLgtALoReslRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLgtALoReslVldRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlPlsPerRevRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlRotlStsTiStampReslRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SerlComOutpProxy_BusOffChassisExp_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SerlComOutpProxy_BusOffHiSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBas_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_HwTqHysOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiHiFrq_AssiHiFrqCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiPahFwl_AssiCmdSum_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiPahFwl_AssiPahLimrActv_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimdPreStall_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimrMin_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdPreLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_SysProtnRednFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_TqSteerMtgtnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_BattVltgCorrln_BattSwdVltgCorrlnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_BattVltgCorrln_BattVltgCorrlnIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_BattVltgCorrln_DftBrdgVltgActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_BattVltgCorrln_InhbBattVltgDiagc_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_BattVltgCorrln_SwdVltgLimd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_AdcDiagc_Adc0Faild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_AdcDiagc_Adc1Faild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_AdcDiagc_AdcDiagcEndPtrOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_AdcDiagc_AdcDiagcStrtPtrOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MotCurrEolCalSt2, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrEolCalSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrQlfr1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrQlfr2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_Adc1ScanGroup2Ref0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_Adc1ScanGroup2Ref1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_Adc1ScanGroup3Ref0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_Adc1ScanGroup3Ref1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_Adc1SelfDiag0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_Adc1SelfDiag2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_Adc1SelfDiag4_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_BattVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_BattVltgAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_BattVltgSwd1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_BattVltgSwd1AdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_BattVltgSwd2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_BattVltgSwd2AdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_EcuT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_EcuTAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotAg2Cos_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotAg2CosAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotAg2Sin_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotAg2SinAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcPeakAAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcPeakBAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcPeakCAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcPeakDAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcPeakEAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcPeakFAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcVlyAAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcVlyBAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcVlyCAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcVlyDAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcVlyEAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrAdcVlyFAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrSnsrOffs1AdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_GmT1xxMcuCfg_MotCurrSnsrOffs2AdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_RackLimrCcwEotSig0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_RackLimrCwEotSig0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCwEotSig1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_GearIdn1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_GearIdn1Vld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_GearIdn2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_GearIdn2Vld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_McuDiagc_LoopCntr2MilliSec_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg0Meas_MotAg0MeclQlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg1Meas_MotAg1MeclQlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s18p13, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndCrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s18p13, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndMrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Adc0ScanGroup2Ref0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Adc0ScanGroup2Ref1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Adc0ScanGroup3Ref0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Adc0ScanGroup3Ref1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Adc0SelfDiag0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Adc0SelfDiag2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Adc0SelfDiag4_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_DualEcuMotCtrlMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_FastLoopCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg0ErrReg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg0Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg0MeclRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg0ParFltCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg0VltgFltCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1ErrReg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1MeclRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1ParFltCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1VltgFltCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ary1D_u0p16_8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgBuf_Ary1D; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgBufIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s15p16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgCumvAlgndMrfRev_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgCumvInid_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ary1D_u32_8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgTiBuf_Ary1D; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotBackEmfVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyD_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyE_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyF_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdD_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdE_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdF_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrRollgCntr1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrRollgCntr2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotInduDaxEstimdIvs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotInduQaxEstimdIvs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Ntc5DErrCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Ntc6DErrCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_SlowLoopCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmplncErr_CmplncErrMotToPinion_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmplncErr_CmplncErrPinionToHw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMeasCorrlnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMeasIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMotSumABC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMotSumDEF_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdBas_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DampgPahFwl_DampgCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsDftHwAg_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsDftHwAgSerlComExprtVal_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsDftVehSpd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr2Inactv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsLimdTPrfmnc_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsWhlImbRejctnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_DiagcMgr_RegInBRAMDAT1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_SysStFltOutpReqDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_DutyCycThermProtn_IgnTiOff_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermLimSlowFilMax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermRednFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DutyCycThermProtn_VehTiVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCcwDetd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCwDetd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgDiDiagSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotActvCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotAssiSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotDampgCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotActvCmdLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotDampgCmdLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv1Ctrl_MotDrvr1IninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_ApaEnaArbn_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_EscEnaArbn_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(GmFctDiArbnSts1, RTE_VAR_INIT) Rte_GmFctDiArbn_GmFctDiSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_InertiaCmpDecelGainDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_LkaEnaArbn_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_PullCmpActvDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_TunSetRtDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_WhlImbRejctnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_ApaDrvrIntvDetd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_ApaSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_EscSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgServoCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgServoEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgTrajEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwOscnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwOscnFrq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwOscnMotAmp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwTqOscSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_LkaSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlFrqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlLeFrq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlRiFrq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmStrtStop_VehStrtStopMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmStrtStop_VehStrtStopRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmStrtStop_VehStrtStopSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_AssiCmdBasSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_DampgCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_EscCmdArbd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmTqArbn_EscLimdActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_HwTqOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_LkaTqCmdCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_MotTqCmdOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmTqArbn_PullCmpCustLrngDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_RtnCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehPwrMod_PwrSplyEnaReq_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehPwrMod_SysOperMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehPwrMod_SysOperRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehPwrMod_SysStReqEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdArbd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdArbdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMaxSecur_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMaxSecurVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMinSecur_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMinSecurVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdSnsrVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HiLoadStallLimr_StallMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HowDetn_HowDetnEstimn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HowDetn_HowDetnFlg_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_HowDetn_HowDetnSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAg0Meas_HwAg0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwAg0Meas_HwAg0Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAg0Meas_HwAg0RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgArbn_HwAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAgCorrln_HwAgCorrlnSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAgCorrln_HwAgIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_HwAgSnsrls_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_HwAgSnsrlsConf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgFinal_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgNotCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgToSerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgVldToSerlCom_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVelToSerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionVel_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionVelConf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgTrajGenn_HwAgTrajGennEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgTrajGenn_HwAgTrakgServoCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgTrakgServo_MotTqServoCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgVehTrimOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTqChA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTqChB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqChACorrlnTraErr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqChBCorrlnTraErr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqCorrlnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HysCmp_HysCmpCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_InertiaCmpVel_InertiaCmpVelCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotAssiScaCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_StallMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_SysMotTqCmdScaCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_ThermMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_VehSpdMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_CurrMeasLoaMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_HwTqLoaMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_IvtrLoaMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaRateLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(LoaSt1, RTE_VAR_INIT) Rte_LoaMgr_LoaSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgLoaMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgSnsrlsAvl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2MeclQlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2MeclRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2VltgSqd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgABErrTerm_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgACErrTerm_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgBCErrTerm_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclCorrlnSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduDaxEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduQaxEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotREstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_MotCurrRegCfg_DualEcuMotCtrlMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotAgElecDly_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotDampgDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotDampgQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotIntglGainDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotIntglGainQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotPropGainDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotPropGainQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrD_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrE_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrF_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_MotQuadDetn_MotDirInsts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MotQuad1, RTE_VAR_INIT) Rte_MotQuadDetn_MotQuad_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxMax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrQaxCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFfStat_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFfStat_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotAgElecDlyRpl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotCurrQaxToMotTqGain_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder1Mgn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder1Pha_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder2Mgn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder2Pha_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder3Mgn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder3Pha_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqCmdSca_MotTqCmdMrfScad_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdMrfDampd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_AssiMechPolarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg0Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg1Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg2Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg3Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg4Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg5Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg6Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg7Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq0Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq1Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq2Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq3Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq4Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq5Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq6Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq7Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl0Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl1Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl2Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl3Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl4Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl5Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl6Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl7Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotElecMeclPolarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PullCmpActv_PullCmpCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctATestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctBTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrLimr_AltFltActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_MotTqCmdPwrLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_PwrLimrRednFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_PwrUpSeq_StrtUpSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrUpSeq_SysStWrmIninCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_HwAgRtnOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Rtn_RtnCmdDiagcDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmdScaServo_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_RtnPahFwl_RtnCmdLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsCorrn_HwAgCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsCorrn_HwTqCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsCorrn_VehYawRateCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_HwAgOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_HwTqOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_VehYawRateOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosABDifStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosACDifStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_AbsltMotPosBCDifStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CtrlrTRng_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CtrlrTStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CurrMotSumABCStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_CurrMotSumDEFStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DigTqIdptSigStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DigTqSnsrAStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DigTqSnsrBStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_DutyCycStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_EotImpctStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_FricEstimnStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_MotPosStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_OutpAssiStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaAStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaBStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaCStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaDStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaEStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_PhaFStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_RamEccSngBitCorrnStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_VltgRng_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StHlthSigNormn_WhlImbMaxCmpStHlth_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_SysMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_StOutpCtrl_SysStReqDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_MotTqCmdSwp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SysFricLrng_FricLrngCustEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_MaxLrndFric_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysSatnFricEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_AmbTVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AssiMechT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_EngOilTVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotFetT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotMagT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotWidgT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TmplMonr_TmplMonrIninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TqLoa_TqLoaAvl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TqLoa_TqLoaCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TqOscn_HwOscnActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TqOscn_HwOscnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TqOscn_HwOscnDcThdExcdd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TqOscn_HwOscnFallRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TqOscn_HwOscnRisngRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvGroup_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvIninIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvRtIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(CalCopySts1, RTE_VAR_INIT) Rte_TunSelnMngt_CalCopySts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_DesIninIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVldSerlCom_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRateVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSpdLimr_VehSpdMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnAmp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnCustEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmdEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DutyCycThermProtn_FilStVariReInitFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_GateDrv0Ena; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_Ivtr0PhyFltInpActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv1Ctrl_GateDrv1Ena; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv1Ctrl_Ivtr1PhyFltInpActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GmFctDiArbn_FctDiReq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_Irv_GmFctDiArbn_FctDiStrtTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_GmOvrlStMgr_IgnCntrLcl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr0Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr0TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr1Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr1TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr0Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr0TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr1Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr1TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgSnsrls_StordHwAg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgSnsrls_StordHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgTrajGenn_HwATar; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgTrajGenn_HwAgTar; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgTrajGenn_HwVelTar; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChAAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChATqSumLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChBAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChBTqSumLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotCtrlPrmEstimn_MotBackEmfConFf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotCurrPeakEstimn_MotCurrEstimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ary1D_u16p0_2, RTE_VAR_INIT) Rte_Irv_MotTqTranlDampg_CtrldDampgScaX; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ary1D_u2p14_2, RTE_VAR_INIT) Rte_Irv_MotTqTranlDampg_CtrldDampgScaY; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_IntgtrGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_PropGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_TqCmdLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_PullCmpActv_RampDwnStepSize; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_MinStdOperLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_MotEnvlpSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_TqEnvlpLim1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_SnsrOffsLrng_HwTqLrngSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_StHlthSigNormn_EolFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_CmdAmp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_CurrMgnSlewRate; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_DcTrendFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_EnaSlewRate; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_FrqDiagcFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_IniCmpFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_MaxMgnFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_SlowSpdDiagc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_WhlSpdCorrlnFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



# endif /* defined(RTE_CORE) */

#endif /* _RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

*/
