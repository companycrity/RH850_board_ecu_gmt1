/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Fee.c
 *        Config:  EPS.dpa
 *    BSW Module:  Fee
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for BSW Module <Fee>
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

#include "SchM_Fee.h"
#include "TSC_SchM_Fee.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


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
 * Dem_DTCGroupType: Integer in interval [0...16777215]
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_OperationCycleIdType: Integer in interval [0...255]
 * Dem_RatioIdType: Integer in interval [1...65535]
 * EcuM_TimeType: Integer in interval [0...4294967295]
 * IOHWAB_BOOL: Boolean
 * NvM_BlockIdType: Integer in interval [1...32767]
 * NvM_BlockIdType: Integer in interval [1...32767]
 * WdgM_CheckpointIdType: Integer in interval [0...65535]
 * WdgM_ModeType: Integer in interval [0...255]
 * WdgM_SupervisedEntityIdType: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s10p5: Integer in interval [-32768...32767]
 * s11p4: Integer in interval [-32768...32767]
 * s14p1: Integer in interval [-32768...32767]
 * s15p0: Integer in interval [-32768...32767]
 * s15p16: Integer in interval [-2147483648...2147483647]
 * s18p13: Integer in interval [-2147483648...2147483647]
 * s1p14: Integer in interval [-32768...32767]
 * s3p12: Integer in interval [-32768...32767]
 * s4p11: Integer in interval [-32768...32767]
 * s5p10: Integer in interval [-32768...32767]
 * s6p9: Integer in interval [-32768...32767]
 * s7p8: Integer in interval [-32768...32767]
 * s8p7: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * sm5p12: Integer in interval [-128...127]
 * u0p16: Integer in interval [0...65535]
 * u10p6: Integer in interval [0...65535]
 * u11p5: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u13p3: Integer in interval [0...65535]
 * u16p0: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u6p10: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * AdrMpgReqTyp1: Enumeration of integer in interval [0...255] with enumerators
 * CalCopySts1: Enumeration of integer in interval [0...255] with enumerators
 * CrcHwResvCfg1: Enumeration of integer in interval [0...255] with enumerators
 * CrcHwResvMod1: Enumeration of integer in interval [0...255] with enumerators
 * CrcHwSts1: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCKindType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCOriginType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebounceResetStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusExtendedType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IndicatorStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_InitMonitorReasonType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprDenomCondIdType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprDenomCondStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_BootTargetType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_ModeType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_ShutdownCauseType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_StateType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_UserType: Enumeration of integer in interval [0...255] with enumerators
 * GetSegMod1: Enumeration of integer in interval [0...255] with enumerators
 * GmFctDiArbnSts1: Enumeration of integer in interval [0...255] with enumerators
 * GmSysPwrMod1: Enumeration of integer in interval [0...255] with enumerators
 * GmTqArbnEscSt1: Enumeration of integer in interval [0...255] with enumerators
 * GmTqArbnLkaSt1: Enumeration of integer in interval [0...255] with enumerators
 * HwAgTrajCmdSt1: Enumeration of integer in interval [0...65535] with enumerators
 * LoaSt1: Enumeration of integer in interval [0...255] with enumerators
 * MfgEnaSt1: Enumeration of integer in interval [0...255] with enumerators
 * MotCurrEolCalSt2: Enumeration of integer in interval [0...255] with enumerators
 * MotQuad1: Enumeration of integer in interval [0...255] with enumerators
 * NtcNr1: Enumeration of integer in interval [0...65535] with enumerators
 * NtcNrWithResd1: Enumeration of integer in interval [0...65535] with enumerators
 * NtcSts1: Enumeration of integer in interval [0...255] with enumerators
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 * StHlthMonSig2: Enumeration of integer in interval [0...255] with enumerators
 * StHlthMonSig3: Enumeration of integer in interval [0...255] with enumerators
 * SysFricLrngOperMod1: Enumeration of integer in interval [0...255] with enumerators
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 * TrigReg1: Enumeration of integer in interval [0...255] with enumerators
 * WdgM_GlobalStatusType: Enumeration of integer in interval [0...255] with enumerators
 * WdgM_LocalStatusType: Enumeration of integer in interval [0...255] with enumerators
 *
 * Array Types:
 * ============
 * Ary1D_BlkFltTblRec1_5: Array with 5 element(s) of type BlkFltTblRec1
 * Ary1D_CmdRtnBufRec1_NvMProxy1: Array with 65535 element(s) of type CmdRtnBufRec1
 * Ary1D_CrcHwStsRec1_4: Array with 4 element(s) of type CrcHwStsRec1
 * Ary1D_NtcFltInfoRec2_20: Array with 20 element(s) of type NtcFltInfoRec2
 * Ary1D_NtcInfoRec4_DiagcMgr: Array with 65535 element(s) of type NtcInfoRec4
 * Ary1D_NtcInfoRec4_DiagcMgrProxyAppl10: Array with 65535 element(s) of type NtcInfoRec4
 * Ary1D_NtcInfoRec4_DiagcMgrProxyAppl6: Array with 65535 element(s) of type NtcInfoRec4
 * Ary1D_OnlineCalPageInfoRec1_2: Array with 2 element(s) of type OnlineCalPageInfoRec1
 * Ary1D_OnlineCalSegInfoRec1_TunSelnMngt1: Array with 65535 element(s) of type OnlineCalSegInfoRec1
 * Ary1D_ReadFltInfoRec1_20: Array with 20 element(s) of type ReadFltInfoRec1
 * Ary1D_SnpshtDataRec1_8: Array with 8 element(s) of type SnpshtDataRec1
 * Ary1D_boolean_4: Array with 4 element(s) of type boolean
 * Ary1D_boolean_NvMProxy1: Array with 65535 element(s) of type boolean
 * Ary1D_f32_12: Array with 12 element(s) of type float32
 * Ary1D_f32_2: Array with 2 element(s) of type float32
 * Ary1D_f32_26: Array with 26 element(s) of type float32
 * Ary1D_f32_3: Array with 3 element(s) of type float32
 * Ary1D_f32_30: Array with 30 element(s) of type float32
 * Ary1D_f32_4: Array with 4 element(s) of type float32
 * Ary1D_f32_72: Array with 72 element(s) of type float32
 * Ary1D_f32_8: Array with 8 element(s) of type float32
 * Ary1D_f32_StHlthSigStc1: Array with 65535 element(s) of type float32
 * Ary1D_float32_2: Array with 2 element(s) of type float32
 * Ary1D_float32_4: Array with 4 element(s) of type float32
 * Ary1D_float32_8: Array with 8 element(s) of type float32
 * Ary1D_s11p4_11: Array with 11 element(s) of type s11p4
 * Ary1D_s11p4_14: Array with 14 element(s) of type s11p4
 * Ary1D_s11p4_5: Array with 5 element(s) of type s11p4
 * Ary1D_s14p1_8: Array with 8 element(s) of type s14p1
 * Ary1D_s15p0_4: Array with 4 element(s) of type s15p0
 * Ary1D_s15p0_5: Array with 5 element(s) of type s15p0
 * Ary1D_s16_22: Array with 22 element(s) of type sint16
 * Ary1D_s16_DiagcMgrProxyAppl10: Array with 65535 element(s) of type sint16
 * Ary1D_s16_DiagcMgrProxyAppl6: Array with 65535 element(s) of type sint16
 * Ary1D_s1p14_12: Array with 12 element(s) of type s1p14
 * Ary1D_s1p14_128: Array with 128 element(s) of type s1p14
 * Ary1D_s1p14_512: Array with 512 element(s) of type s1p14
 * Ary1D_s4p11_11: Array with 11 element(s) of type s4p11
 * Ary1D_s4p11_20: Array with 20 element(s) of type s4p11
 * Ary1D_s4p11_5: Array with 5 element(s) of type s4p11
 * Ary1D_s4p11_8: Array with 8 element(s) of type s4p11
 * Ary1D_s7p8_11: Array with 11 element(s) of type s7p8
 * Ary1D_s7p8_5: Array with 5 element(s) of type s7p8
 * Ary1D_s7p8_6: Array with 6 element(s) of type s7p8
 * Ary1D_s8p7_14: Array with 14 element(s) of type s8p7
 * Ary1D_s8p7_3: Array with 3 element(s) of type s8p7
 * Ary1D_sint16_22: Array with 22 element(s) of type sint16
 * Ary1D_sm5p12_128: Array with 128 element(s) of type sm5p12
 * Ary1D_u08_DiagcMgr1: Array with 65535 element(s) of type uint8
 * Ary1D_u0p16_10: Array with 10 element(s) of type u0p16
 * Ary1D_u0p16_2: Array with 2 element(s) of type u0p16
 * Ary1D_u0p16_3: Array with 3 element(s) of type u0p16
 * Ary1D_u0p16_8: Array with 8 element(s) of type u0p16
 * Ary1D_u10p6_3: Array with 3 element(s) of type u10p6
 * Ary1D_u10p6_4: Array with 4 element(s) of type u10p6
 * Ary1D_u10p6_5: Array with 5 element(s) of type u10p6
 * Ary1D_u10p6_7: Array with 7 element(s) of type u10p6
 * Ary1D_u10p6_8: Array with 8 element(s) of type u10p6
 * Ary1D_u11p5_10: Array with 10 element(s) of type u11p5
 * Ary1D_u11p5_11: Array with 11 element(s) of type u11p5
 * Ary1D_u11p5_13: Array with 13 element(s) of type u11p5
 * Ary1D_u11p5_4: Array with 4 element(s) of type u11p5
 * Ary1D_u11p5_6: Array with 6 element(s) of type u11p5
 * Ary1D_u11p5_8: Array with 8 element(s) of type u11p5
 * Ary1D_u12p4_13: Array with 13 element(s) of type u12p4
 * Ary1D_u12p4_16: Array with 16 element(s) of type u12p4
 * Ary1D_u12p4_2: Array with 2 element(s) of type u12p4
 * Ary1D_u12p4_4: Array with 4 element(s) of type u12p4
 * Ary1D_u12p4_7: Array with 7 element(s) of type u12p4
 * Ary1D_u13p3_2: Array with 2 element(s) of type u13p3
 * Ary1D_u13p3_6: Array with 6 element(s) of type u13p3
 * Ary1D_u16_3: Array with 3 element(s) of type uint16
 * Ary1D_u16p0_2: Array with 2 element(s) of type u16p0
 * Ary1D_u16p0_20: Array with 20 element(s) of type u16p0
 * Ary1D_u16p0_8: Array with 8 element(s) of type u16p0
 * Ary1D_u1p15_10: Array with 10 element(s) of type u1p15
 * Ary1D_u1p15_11: Array with 11 element(s) of type u1p15
 * Ary1D_u1p15_12: Array with 12 element(s) of type u1p15
 * Ary1D_u1p15_2: Array with 2 element(s) of type u1p15
 * Ary1D_u1p15_4: Array with 4 element(s) of type u1p15
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u1p15_6: Array with 6 element(s) of type u1p15
 * Ary1D_u2p14_12: Array with 12 element(s) of type u2p14
 * Ary1D_u2p14_16: Array with 16 element(s) of type u2p14
 * Ary1D_u2p14_2: Array with 2 element(s) of type u2p14
 * Ary1D_u2p14_3: Array with 3 element(s) of type u2p14
 * Ary1D_u2p14_4: Array with 4 element(s) of type u2p14
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u2p14_6: Array with 6 element(s) of type u2p14
 * Ary1D_u2p14_7: Array with 7 element(s) of type u2p14
 * Ary1D_u2p14_8: Array with 8 element(s) of type u2p14
 * Ary1D_u32_2: Array with 2 element(s) of type uint32
 * Ary1D_u32_40: Array with 40 element(s) of type uint32
 * Ary1D_u32_512: Array with 512 element(s) of type uint32
 * Ary1D_u32_8: Array with 8 element(s) of type uint32
 * Ary1D_u32_StHlthSigStc1: Array with 65535 element(s) of type uint32
 * Ary1D_u3p13_10: Array with 10 element(s) of type u3p13
 * Ary1D_u3p13_13: Array with 13 element(s) of type u3p13
 * Ary1D_u3p13_5: Array with 5 element(s) of type u3p13
 * Ary1D_u3p13_8: Array with 8 element(s) of type u3p13
 * Ary1D_u4p12_10: Array with 10 element(s) of type u4p12
 * Ary1D_u4p12_11: Array with 11 element(s) of type u4p12
 * Ary1D_u4p12_12: Array with 12 element(s) of type u4p12
 * Ary1D_u4p12_13: Array with 13 element(s) of type u4p12
 * Ary1D_u4p12_14: Array with 14 element(s) of type u4p12
 * Ary1D_u4p12_2: Array with 2 element(s) of type u4p12
 * Ary1D_u4p12_20: Array with 20 element(s) of type u4p12
 * Ary1D_u4p12_4: Array with 4 element(s) of type u4p12
 * Ary1D_u4p12_5: Array with 5 element(s) of type u4p12
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u4p12_8: Array with 8 element(s) of type u4p12
 * Ary1D_u5p11_10: Array with 10 element(s) of type u5p11
 * Ary1D_u5p11_11: Array with 11 element(s) of type u5p11
 * Ary1D_u5p11_13: Array with 13 element(s) of type u5p11
 * Ary1D_u5p11_14: Array with 14 element(s) of type u5p11
 * Ary1D_u5p11_16: Array with 16 element(s) of type u5p11
 * Ary1D_u5p11_17: Array with 17 element(s) of type u5p11
 * Ary1D_u5p11_5: Array with 5 element(s) of type u5p11
 * Ary1D_u5p11_6: Array with 6 element(s) of type u5p11
 * Ary1D_u5p11_8: Array with 8 element(s) of type u5p11
 * Ary1D_u6p10_10: Array with 10 element(s) of type u6p10
 * Ary1D_u6p10_17: Array with 17 element(s) of type u6p10
 * Ary1D_u6p10_6: Array with 6 element(s) of type u6p10
 * Ary1D_u7p9_12: Array with 12 element(s) of type u7p9
 * Ary1D_u7p9_3: Array with 3 element(s) of type u7p9
 * Ary1D_u7p9_4: Array with 4 element(s) of type u7p9
 * Ary1D_u7p9_6: Array with 6 element(s) of type u7p9
 * Ary1D_u8_10: Array with 10 element(s) of type uint8
 * Ary1D_u8_12: Array with 12 element(s) of type uint8
 * Ary1D_u8_12: Array with 12 element(s) of type uint8
 * Ary1D_u8_14: Array with 14 element(s) of type uint8
 * Ary1D_u8_16: Array with 16 element(s) of type uint8
 * Ary1D_u8_17: Array with 17 element(s) of type uint8
 * Ary1D_u8_2: Array with 2 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_22: Array with 22 element(s) of type uint8
 * Ary1D_u8_225: Array with 225 element(s) of type uint8
 * Ary1D_u8_4: Array with 4 element(s) of type uint8
 * Ary1D_u8_40: Array with 40 element(s) of type uint8
 * Ary1D_u8_48: Array with 48 element(s) of type uint8
 * Ary1D_u8_5: Array with 5 element(s) of type uint8
 * Ary1D_u8_6: Array with 6 element(s) of type uint8
 * Ary1D_u8_7: Array with 7 element(s) of type uint8
 * Ary1D_u8_8: Array with 8 element(s) of type uint8
 * Ary1D_u8_822: Array with 822 element(s) of type uint8
 * Ary1D_u8_9: Array with 9 element(s) of type uint8
 * Ary1D_u8_CmnMfgSrvIf: Array with 65535 element(s) of type uint8
 * Ary1D_u8_StHlthSigStc1: Array with 65535 element(s) of type uint8
 * Ary1D_u8p8_11: Array with 11 element(s) of type u8p8
 * Ary1D_u8p8_14: Array with 14 element(s) of type u8p8
 * Ary1D_u8p8_2: Array with 2 element(s) of type u8p8
 * Ary1D_u8p8_20: Array with 20 element(s) of type u8p8
 * Ary1D_u8p8_4: Array with 4 element(s) of type u8p8
 * Ary1D_u8p8_5: Array with 5 element(s) of type u8p8
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u8p8_7: Array with 7 element(s) of type u8p8
 * Ary1D_u8p8_8: Array with 8 element(s) of type u8p8
 * Ary1D_u9p7_10: Array with 10 element(s) of type u9p7
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary1D_u9p7_16: Array with 16 element(s) of type u9p7
 * Ary1D_u9p7_2: Array with 2 element(s) of type u9p7
 * Ary1D_u9p7_3: Array with 3 element(s) of type u9p7
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 * Ary1D_u9p7_6: Array with 6 element(s) of type u9p7
 * Ary1D_u9p7_7: Array with 7 element(s) of type u9p7
 * Ary1D_u9p7_8: Array with 8 element(s) of type u9p7
 * Ary1D_u9p7_9: Array with 9 element(s) of type u9p7
 * Ary1D_uint16_3: Array with 3 element(s) of type uint16
 * Ary1D_uint32_512: Array with 512 element(s) of type uint32
 * Ary2D_f32_3_3: Array with 3 element(s) of type Ary1D_f32_3
 * Ary2D_f32_4_2: Array with 4 element(s) of type Ary1D_f32_2
 * Ary2D_f32_8_4: Array with 8 element(s) of type Ary1D_f32_4
 * Ary2D_float32_4_2: Array with 4 element(s) of type Ary1D_float32_2
 * Ary2D_float32_8_4: Array with 8 element(s) of type Ary1D_float32_4
 * Ary2D_s1p14_10_12: Array with 10 element(s) of type Ary1D_s1p14_12
 * Ary2D_s4p11_11_8: Array with 11 element(s) of type Ary1D_s4p11_8
 * Ary2D_s4p11_12_11: Array with 12 element(s) of type Ary1D_s4p11_11
 * Ary2D_s4p11_12_20: Array with 12 element(s) of type Ary1D_s4p11_20
 * Ary2D_s4p11_8_11: Array with 8 element(s) of type Ary1D_s4p11_11
 * Ary2D_s7p8_12_11: Array with 12 element(s) of type Ary1D_s7p8_11
 * Ary2D_s7p8_4_5: Array with 4 element(s) of type Ary1D_s7p8_5
 * Ary2D_s7p8_9_5: Array with 9 element(s) of type Ary1D_s7p8_5
 * Ary2D_s7p8_9_6: Array with 9 element(s) of type Ary1D_s7p8_6
 * Ary2D_u0p16_20_8: Array with 20 element(s) of type Ary1D_u0p16_8
 * Ary2D_u0p16_4_2: Array with 4 element(s) of type Ary1D_u0p16_2
 * Ary2D_u10p6_3_7: Array with 3 element(s) of type Ary1D_u10p6_7
 * Ary2D_u12p4_12_13: Array with 12 element(s) of type Ary1D_u12p4_13
 * Ary2D_u12p4_4_2: Array with 4 element(s) of type Ary1D_u12p4_2
 * Ary2D_u12p4_5_4: Array with 5 element(s) of type Ary1D_u12p4_4
 * Ary2D_u12p4_9_16: Array with 9 element(s) of type Ary1D_u12p4_16
 * Ary2D_u16_8_3: Array with 8 element(s) of type Ary1D_u16_3
 * Ary2D_u1p15_12_5: Array with 12 element(s) of type Ary1D_u1p15_5
 * Ary2D_u1p15_5_4: Array with 5 element(s) of type Ary1D_u1p15_4
 * Ary2D_u1p15_8_4: Array with 8 element(s) of type Ary1D_u1p15_4
 * Ary2D_u2p14_12_5: Array with 12 element(s) of type Ary1D_u2p14_5
 * Ary2D_u2p14_6_5: Array with 6 element(s) of type Ary1D_u2p14_5
 * Ary2D_u2p14_6_7: Array with 6 element(s) of type Ary1D_u2p14_7
 * Ary2D_u3p13_12_13: Array with 12 element(s) of type Ary1D_u3p13_13
 * Ary2D_u3p13_20_8: Array with 20 element(s) of type Ary1D_u3p13_8
 * Ary2D_u4p12_12_20: Array with 12 element(s) of type Ary1D_u4p12_20
 * Ary2D_u4p12_12_5: Array with 12 element(s) of type Ary1D_u4p12_5
 * Ary2D_u4p12_12_8: Array with 12 element(s) of type Ary1D_u4p12_8
 * Ary2D_u4p12_3_13: Array with 3 element(s) of type Ary1D_u4p12_13
 * Ary2D_u5p11_12_13: Array with 12 element(s) of type Ary1D_u5p11_13
 * Ary2D_u5p11_12_5: Array with 12 element(s) of type Ary1D_u5p11_5
 * Ary2D_u5p11_9_16: Array with 9 element(s) of type Ary1D_u5p11_16
 * Ary2D_u7p9_9_4: Array with 9 element(s) of type Ary1D_u7p9_4
 * Ary2D_u8p8_12_20: Array with 12 element(s) of type Ary1D_u8p8_20
 * Ary2D_u8p8_6_5: Array with 6 element(s) of type Ary1D_u8p8_5
 * Ary2D_u8p8_9_4: Array with 9 element(s) of type Ary1D_u8p8_4
 * Ary2D_u8p8_9_5: Array with 9 element(s) of type Ary1D_u8p8_5
 * Ary2D_u8p8_9_6: Array with 9 element(s) of type Ary1D_u8p8_6
 * Ary2D_u8p8_9_8: Array with 9 element(s) of type Ary1D_u8p8_8
 * Ary2D_uint16_8_3: Array with 8 element(s) of type Ary1D_uint16_3
 * DataArray_Type_1: Array with 1 element(s) of type uint8
 * DataArray_Type_2: Array with 2 element(s) of type uint8
 * DataArray_Type_4: Array with 4 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 4 element(s) of type uint8
 *
 * Record Types:
 * =============
 * BlkFltTblRec1: Record with elements
 *   Sts of type NtcSts1
 *   Prm of type uint8
 * CmdRtnBufRec1: Record with elements
 *   StdRtn of type uint8
 *   ReqPen of type uint8
 *   ReqRes of type uint8
 * CrcHwStsRec1: Record with elements
 *   TaskId of type uint16
 *   CrcHwSts of type CrcHwSts1
 * CurrMeasEolGainCalRec1: Record with elements
 *   CurrMeasMotCurrEolGainA of type float32
 *   CurrMeasMotCurrEolGainB of type float32
 *   CurrMeasMotCurrEolGainC of type float32
 *   CurrMeasMotCurrEolGainD of type float32
 *   CurrMeasMotCurrEolGainE of type float32
 *   CurrMeasMotCurrEolGainF of type float32
 * CurrMeasEolOffsCalRec1: Record with elements
 *   CurrMeasEolOffsHiBrdgVltg of type float32
 *   CurrMeasMotCurrEolOffsDifA of type float32
 *   CurrMeasMotCurrEolOffsDifB of type float32
 *   CurrMeasMotCurrEolOffsDifC of type float32
 *   CurrMeasMotCurrEolOffsDifD of type float32
 *   CurrMeasMotCurrEolOffsDifE of type float32
 *   CurrMeasMotCurrEolOffsDifF of type float32
 *   CurrMeasMotCurrOffsLoAvrgA of type float32
 *   CurrMeasMotCurrOffsLoAvrgB of type float32
 *   CurrMeasMotCurrOffsLoAvrgC of type float32
 *   CurrMeasMotCurrOffsLoAvrgD of type float32
 *   CurrMeasMotCurrOffsLoAvrgE of type float32
 *   CurrMeasMotCurrOffsLoAvrgF of type float32
 * DiagcDataRec1: Record with elements
 *   DiagcSts of type uint16
 *   ActvRampRate of type float32
 *   ActvMotTqCmdSca of type float32
 * DutyCycThermProtnFilStValRec1: Record with elements
 *   Fil3StVal of type uint8
 *   Fil4StVal of type uint8
 *   Fil5StVal of type uint8
 *   Fil6StVal of type uint8
 * EotNvmDataRec1: Record with elements
 *   CwEot of type float32
 *   CcwEot of type float32
 *   CwEotDetd of type boolean
 *   CcwEotDetd of type boolean
 * FilHpRec1: Record with elements
 *   FilLpRec of type FilLpRec1
 *   CorrnFac of type float32
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 * FilNotchGainRec1: Record with elements
 *   FilGainB0 of type float32
 *   FilGainB1 of type float32
 *   FilGainB2 of type float32
 *   FilGainA1 of type float32
 *   FilGainA2 of type float32
 * FilNotchStRec1: Record with elements
 *   FilSt1 of type float32
 *   FilSt2 of type float32
 * HwAgOffsRec1: Record with elements
 *   OffsTrim of type float32
 *   OffsTrimPrfmdSts of type boolean
 * HwAgSnsrTrimRec1: Record with elements
 *   TrimVal of type float32
 *   TrimPrfmd of type boolean
 * HwTqOffsRec1: Record with elements
 *   OffsTrim of type float32
 *   OffsTrimPrfmdSts of type boolean
 * MaxHwAgCwAndCcwRec2: Record with elements
 *   HwAgCcwMax of type float32
 *   HwAgCwMax of type float32
 *   HwAgOverTrvlCnt of type uint8
 * MotAgMeasEolPrmRec1: Record with elements
 *   SinOffs of type float32
 *   CosOffs of type float32
 *   SinAmpRecpr of type float32
 *   CosAmpRecpr of type float32
 *   SinDelta of type float32
 * MotPrmNomEolRec3: Record with elements
 *   MotBackEmfConNom of type float32
 *   MotRNom of type float32
 * MotRplCoggPrmRec2: Record with elements
 *   CoggOrder1 of type uint16
 *   CoggOrder1X of type s1p14
 *   CoggOrder1Y of type s1p14
 *   CoggOrder2 of type uint16
 *   CoggOrder2X of type s1p14
 *   CoggOrder2Y of type s1p14
 *   CoggOrder3 of type uint16
 *   CoggOrder3X of type s1p14
 *   CoggOrder3Y of type s1p14
 * NtcFltInfoRec2: Record with elements
 *   NtcNr of type NtcNrWithResd1
 *   AgiCntr of type uint8
 *   Sts of type uint8
 * NtcInfoRec4: Record with elements
 *   NtcStInfo of type uint8
 *   Sts of type uint8
 *   AgiCntr of type uint8
 * OnlineCalPageInfoRec1: Record with elements
 *   PageAcs of type uint8
 * OnlineCalSegInfoRec1: Record with elements
 *   Page of type Ary1D_OnlineCalPageInfoRec1_2
 * OnlineCalStsRec1: Record with elements
 *   Seg of type Ary1D_OnlineCalSegInfoRec1_TunSelnMngt1
 *   CopySts of type CalCopySts1
 *   ActvGroup of type uint8
 *   ActvInin of type uint8
 *   ActvRt of type uint8
 * PassFailCntrDiagcRec1: Record with elements
 *   Cntr of type float32
 *   Thd of type float32
 *   NegStep of type float32
 *   PosStep of type float32
 *   Sts of type SigQlfr1
 * ReadFltInfoRec1: Record with elements
 *   NtcNr of type NtcNrWithResd1
 *   AgiCntr of type uint8
 *   Sts of type uint8
 *   NtcStInfo of type uint8
 * SnpshtDataRec1: Record with elements
 *   MicroDiagcData of type uint32
 *   HwTq of type s5p10
 *   MotTq of type s5p10
 *   IgnCntr of type uint32
 *   BrdgVltg of type u6p10
 *   EcuT of type s8p7
 *   NtcNr of type uint16
 *   NtcStInfo of type uint8
 *   SysSt of type SysSt1
 *   VehSpd of type u9p7
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
 * StordLstPrmRec1: Record with elements
 *   PinionAg of type float32
 *   PinionAgVld of type boolean
 * SysFricDataRec1: Record with elements
 *   FricOffs of type float32
 *   BasLineFric of type Ary1D_f32_4
 *   VehLrndFric of type Ary1D_f32_4
 *   Hys of type Ary2D_f32_8_4
 *   RngCntr of type Ary2D_u16_8_3
 *   SysFricLrngOperMod of type SysFricLrngOperMod1
 * SysFricNonLrngDataRec1: Record with elements
 *   EolFric of type float32
 *   EnaFricLrng of type boolean
 *   EnaFricOffsOutp of type boolean
 * WhlImbRejctnCmpPeakRec1: Record with elements
 *   LePeakPrev of type float32
 *   RiPeakPrev of type float32
 *   MaxCompPerc of type float32
 *   ActvCmpBand1 of type uint32
 *   ActvCmpBand2 of type uint32
 *   ActvCmpBand3 of type uint32
 *
 *********************************************************************************************************************/


#define FEE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Schedulable Entity Name: Fee_MainFunction
 *
 *********************************************************************************************************************/

FUNC(void, FEE_CODE) Fee_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Fee_MainFunction
 *********************************************************************************************************************/

  TSC_Fee_SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_0();
  TSC_Fee_SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_0();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FEE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
