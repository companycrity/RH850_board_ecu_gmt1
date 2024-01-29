/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StHlthSigNormn.c
 *     SW-C Type:  StHlthSigNormn
 *  Generated at:  Wed Sep 28 16:12:24 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StHlthSigNormn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: StHlthSigNormn.c
* Module Description: Implementation of State of Health Signal Normalization
* Project           : CBD
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       tzyksv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/13/16  1        AR        Initial Version																	EA4#3759
* 02/15/16  2        AR        Enabled concurrency for server runnable UpdRawSig_Oper 							EA4#3759
* 05/02/16  3        AR        Updated for new signals monitoring                   							EA4#5445
* 07/06/16  4        AR        Fix for floating point divide by zero error added             					EA4#6434
* 09/27/16  5        AR        Friction Estimation & WIR added                              					EA4#7305
* 10/12/16  6        AR        Code coverage issue fixed                                    					EA4#7978
**********************************************************************************************************************/

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
  NtcNr1
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  NtcSts1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  StHlthMonSig3
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  SysFricLrngOperMod1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_StHlthSigNormn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "ArchGlbPrm.h"
#include "NxtrFixdPt.h"
 /******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1] There is no appropriate action to take on the return value */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

 /* Controller Temperature State of Health related constants */

#define LOTSTHLTH0PERC_CNT_U08 ((uint8)(0U))
#define HITSTHLTH0PERC_CNT_U08 ((uint8)(1U))
#define LOTSTHLTH50PERC_CNT_U08 ((uint8)(2U))
#define HITSTHLTH50PERC_CNT_U08  ((uint8)(3U))
#define TSTHLTH0PERC_CNT_U08 ((uint8)(3U))
#define TSTHLTH50PERCPOS_CNT_U08 ((uint8)(2U))
#define TPRSNTCYCDATAPOSN_CNT_U08 ((uint8)(2U))

/* Output Assist due to Voltage State of Health related constants */
#define LOVLTGSTHLTH0PERC_CNT_U08 ((uint8)(0U))
#define HIVLTGSTHLTH0PERC_CNT_U08 ((uint8)(1U))
#define LOVLTGSTHLTH50PERC_CNT_U08 ((uint8)(2U))
#define VLTGSTHLTH0PERC_CNT_U08 ((uint8)(3U))
#define VLTGSTHLTH50PERCPOS_CNT_U08 ((uint8)(2U))
#define VLTGPRSNTCYCDATAPOSN_CNT_U08 ((uint8)(2U))

/* Local defines */
#define TMAXRNGVAL_CNT_U08 ((uint8)(15U))
#define VLTGMAXRNGVAL_CNT_U08 ((uint8)(15U))

#define STHLTHSCAGFAC_CNT_F32 (100.0F)
#define HWTQIDPTSIG_CNT_U08 ((uint8)(4U))
#define HLTH100PERC_CNT_U08 ((uint8)(100U))
#define HLTH100PERC_CNT_F32 (100.0F)
#define HLTH50PERC_CNT_U08 ((uint8)(50U))
#define HLTH0PERC_CNT_U08 ((uint8)(0U))
#define MOTAG2MEAS_VALMINERR_VOLTSQD_F32 (0.0625F)
#define MOTAG2MEAS_VALMAXERR_VOLTSQD_F32 (5.76F)
#define MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16 (14562U)      /* Corresponds to Angle Difference Threshold '0.2222' */ 
#define STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32  (255.0F)
#define STHLTHFLOATZEROVAL_ULS_F32 (0.0F)

/* Divide-by-zero error protection logic - default values */
#define DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32 (3.0F)
#define MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16 (1U)
#define MOTPOSNERRZEROTHD_MOTREV_U0P16 (2U) /* u0p16 type - value 3.051804379e-05 */
#define CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32 (12.0F)
#define PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32 (180000.0F)
#define MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32 (0.5575F)
#define MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32 (1.92F)
#define FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32 (11.85F)

/* Friction Estimation and Wheel Imbalance Rejection State of Health Limit values */
#define WHLIMBMAXCMPSTHLTHHILI_CNT_U08 ((uint8)(100U))
#define WHLIMBMAXCMPSTHLTHLOLI_CNT_U08 ((uint8)(0U))
#define FRICESTSTHLTHHILI_CNT_F32 (100.0F)
#define FRICESTSTHLTHLOLI_CNT_F32 (0.0F)





/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, StHlthSigNormn_CODE) OutpAssiMon(void);
static FUNC(void, StHlthSigNormn_CODE) EcuTFildMon(void);
static FUNC(void, StHlthSigNormn_CODE) RamEccSngBitCorrnStHlthCalc(void);
static FUNC(void, StHlthSigNormn_CODE) DigTqSnsrStHlthCalc(StHlthMonSig3 SigId_Arg);
static FUNC(void, StHlthSigNormn_CODE) DutyCycExcddStHlthCalc(void);
static FUNC(void, StHlthSigNormn_CODE) EotImpctCntrStHlthCalc(void);
static FUNC(void, StHlthSigNormn_CODE) MotPosnStHlthCalc(void);
static FUNC(void, StHlthSigNormn_CODE) MotPosnErrStHlthCalc(StHlthMonSig3 SigId_Arg);
static FUNC(void, StHlthSigNormn_CODE) CurrMotSumStHlthCalc(StHlthMonSig3 SigId_Arg);
static FUNC(void, StHlthSigNormn_CODE) PhaVltgStHlthCalc(StHlthMonSig3 SigId_Arg);
static FUNC(uint8, StHlthSigNormn_CODE) PhaVltgCalcStHlth(float32 MotDrvErrX_NanoSec_T_f32);
static FUNC(void, StHlthSigNormn_CODE)  FricEstimnStHlthCalc(void);
static FUNC(void, StHlthSigNormn_CODE)  WhlImbRejctnStHlthCalc(void);


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
 * u0p16: Integer in interval [0...65535]
 *
 * Enumeration Types:
 * ==================
 * NtcNr1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_0X001 (1U)
 *   NTCNR_0X002 (2U)
 *   NTCNR_0X003 (3U)
 *   NTCNR_0X004 (4U)
 *   NTCNR_0X005 (5U)
 *   NTCNR_0X006 (6U)
 *   NTCNR_0X007 (7U)
 *   NTCNR_0X008 (8U)
 *   NTCNR_0X009 (9U)
 *   NTCNR_0X00A (10U)
 *   NTCNR_0X00B (11U)
 *   NTCNR_0X00C (12U)
 *   NTCNR_0X00D (13U)
 *   NTCNR_0X00E (14U)
 *   NTCNR_0X00F (15U)
 *   NTCNR_0X010 (16U)
 *   NTCNR_0X011 (17U)
 *   NTCNR_0X012 (18U)
 *   NTCNR_0X013 (19U)
 *   NTCNR_0X014 (20U)
 *   NTCNR_0X015 (21U)
 *   NTCNR_0X016 (22U)
 *   NTCNR_0X017 (23U)
 *   NTCNR_0X018 (24U)
 *   NTCNR_0X019 (25U)
 *   NTCNR_0X01A (26U)
 *   NTCNR_0X01B (27U)
 *   NTCNR_0X01C (28U)
 *   NTCNR_0X01D (29U)
 *   NTCNR_0X01E (30U)
 *   NTCNR_0X01F (31U)
 *   NTCNR_0X020 (32U)
 *   NTCNR_0X021 (33U)
 *   NTCNR_0X022 (34U)
 *   NTCNR_0X023 (35U)
 *   NTCNR_0X024 (36U)
 *   NTCNR_0X025 (37U)
 *   NTCNR_0X026 (38U)
 *   NTCNR_0X027 (39U)
 *   NTCNR_0X028 (40U)
 *   NTCNR_0X029 (41U)
 *   NTCNR_0X02A (42U)
 *   NTCNR_0X02B (43U)
 *   NTCNR_0X02C (44U)
 *   NTCNR_0X02D (45U)
 *   NTCNR_0X02E (46U)
 *   NTCNR_0X02F (47U)
 *   NTCNR_0X030 (48U)
 *   NTCNR_0X031 (49U)
 *   NTCNR_0X032 (50U)
 *   NTCNR_0X033 (51U)
 *   NTCNR_0X034 (52U)
 *   NTCNR_0X035 (53U)
 *   NTCNR_0X036 (54U)
 *   NTCNR_0X037 (55U)
 *   NTCNR_0X038 (56U)
 *   NTCNR_0X039 (57U)
 *   NTCNR_0X03A (58U)
 *   NTCNR_0X03B (59U)
 *   NTCNR_0X03C (60U)
 *   NTCNR_0X03D (61U)
 *   NTCNR_0X03E (62U)
 *   NTCNR_0X03F (63U)
 *   NTCNR_0X040 (64U)
 *   NTCNR_0X041 (65U)
 *   NTCNR_0X042 (66U)
 *   NTCNR_0X043 (67U)
 *   NTCNR_0X044 (68U)
 *   NTCNR_0X045 (69U)
 *   NTCNR_0X046 (70U)
 *   NTCNR_0X047 (71U)
 *   NTCNR_0X048 (72U)
 *   NTCNR_0X049 (73U)
 *   NTCNR_0X04A (74U)
 *   NTCNR_0X04B (75U)
 *   NTCNR_0X04C (76U)
 *   NTCNR_0X04D (77U)
 *   NTCNR_0X04E (78U)
 *   NTCNR_0X04F (79U)
 *   NTCNR_0X050 (80U)
 *   NTCNR_0X051 (81U)
 *   NTCNR_0X052 (82U)
 *   NTCNR_0X053 (83U)
 *   NTCNR_0X054 (84U)
 *   NTCNR_0X055 (85U)
 *   NTCNR_0X056 (86U)
 *   NTCNR_0X057 (87U)
 *   NTCNR_0X058 (88U)
 *   NTCNR_0X059 (89U)
 *   NTCNR_0X05A (90U)
 *   NTCNR_0X05B (91U)
 *   NTCNR_0X05C (92U)
 *   NTCNR_0X05D (93U)
 *   NTCNR_0X05E (94U)
 *   NTCNR_0X05F (95U)
 *   NTCNR_0X060 (96U)
 *   NTCNR_0X061 (97U)
 *   NTCNR_0X062 (98U)
 *   NTCNR_0X063 (99U)
 *   NTCNR_0X064 (100U)
 *   NTCNR_0X065 (101U)
 *   NTCNR_0X066 (102U)
 *   NTCNR_0X067 (103U)
 *   NTCNR_0X068 (104U)
 *   NTCNR_0X069 (105U)
 *   NTCNR_0X06A (106U)
 *   NTCNR_0X06B (107U)
 *   NTCNR_0X06C (108U)
 *   NTCNR_0X06D (109U)
 *   NTCNR_0X06E (110U)
 *   NTCNR_0X06F (111U)
 *   NTCNR_0X070 (112U)
 *   NTCNR_0X071 (113U)
 *   NTCNR_0X072 (114U)
 *   NTCNR_0X073 (115U)
 *   NTCNR_0X074 (116U)
 *   NTCNR_0X075 (117U)
 *   NTCNR_0X076 (118U)
 *   NTCNR_0X077 (119U)
 *   NTCNR_0X078 (120U)
 *   NTCNR_0X079 (121U)
 *   NTCNR_0X07A (122U)
 *   NTCNR_0X07B (123U)
 *   NTCNR_0X07C (124U)
 *   NTCNR_0X07D (125U)
 *   NTCNR_0X07E (126U)
 *   NTCNR_0X07F (127U)
 *   NTCNR_0X080 (128U)
 *   NTCNR_0X081 (129U)
 *   NTCNR_0X082 (130U)
 *   NTCNR_0X083 (131U)
 *   NTCNR_0X084 (132U)
 *   NTCNR_0X085 (133U)
 *   NTCNR_0X086 (134U)
 *   NTCNR_0X087 (135U)
 *   NTCNR_0X088 (136U)
 *   NTCNR_0X089 (137U)
 *   NTCNR_0X08A (138U)
 *   NTCNR_0X08B (139U)
 *   NTCNR_0X08C (140U)
 *   NTCNR_0X08D (141U)
 *   NTCNR_0X08E (142U)
 *   NTCNR_0X08F (143U)
 *   NTCNR_0X090 (144U)
 *   NTCNR_0X091 (145U)
 *   NTCNR_0X092 (146U)
 *   NTCNR_0X093 (147U)
 *   NTCNR_0X094 (148U)
 *   NTCNR_0X095 (149U)
 *   NTCNR_0X096 (150U)
 *   NTCNR_0X097 (151U)
 *   NTCNR_0X098 (152U)
 *   NTCNR_0X099 (153U)
 *   NTCNR_0X09A (154U)
 *   NTCNR_0X09B (155U)
 *   NTCNR_0X09C (156U)
 *   NTCNR_0X09D (157U)
 *   NTCNR_0X09E (158U)
 *   NTCNR_0X09F (159U)
 *   NTCNR_0X0A0 (160U)
 *   NTCNR_0X0A1 (161U)
 *   NTCNR_0X0A2 (162U)
 *   NTCNR_0X0A3 (163U)
 *   NTCNR_0X0A4 (164U)
 *   NTCNR_0X0A5 (165U)
 *   NTCNR_0X0A6 (166U)
 *   NTCNR_0X0A7 (167U)
 *   NTCNR_0X0A8 (168U)
 *   NTCNR_0X0A9 (169U)
 *   NTCNR_0X0AA (170U)
 *   NTCNR_0X0AB (171U)
 *   NTCNR_0X0AC (172U)
 *   NTCNR_0X0AD (173U)
 *   NTCNR_0X0AE (174U)
 *   NTCNR_0X0AF (175U)
 *   NTCNR_0X0B0 (176U)
 *   NTCNR_0X0B1 (177U)
 *   NTCNR_0X0B2 (178U)
 *   NTCNR_0X0B3 (179U)
 *   NTCNR_0X0B4 (180U)
 *   NTCNR_0X0B5 (181U)
 *   NTCNR_0X0B6 (182U)
 *   NTCNR_0X0B7 (183U)
 *   NTCNR_0X0B8 (184U)
 *   NTCNR_0X0B9 (185U)
 *   NTCNR_0X0BA (186U)
 *   NTCNR_0X0BB (187U)
 *   NTCNR_0X0BC (188U)
 *   NTCNR_0X0BD (189U)
 *   NTCNR_0X0BE (190U)
 *   NTCNR_0X0BF (191U)
 *   NTCNR_0X0C0 (192U)
 *   NTCNR_0X0C1 (193U)
 *   NTCNR_0X0C2 (194U)
 *   NTCNR_0X0C3 (195U)
 *   NTCNR_0X0C4 (196U)
 *   NTCNR_0X0C5 (197U)
 *   NTCNR_0X0C6 (198U)
 *   NTCNR_0X0C7 (199U)
 *   NTCNR_0X0C8 (200U)
 *   NTCNR_0X0C9 (201U)
 *   NTCNR_0X0CA (202U)
 *   NTCNR_0X0CB (203U)
 *   NTCNR_0X0CC (204U)
 *   NTCNR_0X0CD (205U)
 *   NTCNR_0X0CE (206U)
 *   NTCNR_0X0CF (207U)
 *   NTCNR_0X0D0 (208U)
 *   NTCNR_0X0D1 (209U)
 *   NTCNR_0X0D2 (210U)
 *   NTCNR_0X0D3 (211U)
 *   NTCNR_0X0D4 (212U)
 *   NTCNR_0X0D5 (213U)
 *   NTCNR_0X0D6 (214U)
 *   NTCNR_0X0D7 (215U)
 *   NTCNR_0X0D8 (216U)
 *   NTCNR_0X0D9 (217U)
 *   NTCNR_0X0DA (218U)
 *   NTCNR_0X0DB (219U)
 *   NTCNR_0X0DC (220U)
 *   NTCNR_0X0DD (221U)
 *   NTCNR_0X0DE (222U)
 *   NTCNR_0X0DF (223U)
 *   NTCNR_0X0E0 (224U)
 *   NTCNR_0X0E1 (225U)
 *   NTCNR_0X0E2 (226U)
 *   NTCNR_0X0E3 (227U)
 *   NTCNR_0X0E4 (228U)
 *   NTCNR_0X0E5 (229U)
 *   NTCNR_0X0E6 (230U)
 *   NTCNR_0X0E7 (231U)
 *   NTCNR_0X0E8 (232U)
 *   NTCNR_0X0E9 (233U)
 *   NTCNR_0X0EA (234U)
 *   NTCNR_0X0EB (235U)
 *   NTCNR_0X0EC (236U)
 *   NTCNR_0X0ED (237U)
 *   NTCNR_0X0EE (238U)
 *   NTCNR_0X0EF (239U)
 *   NTCNR_0X0F0 (240U)
 *   NTCNR_0X0F1 (241U)
 *   NTCNR_0X0F2 (242U)
 *   NTCNR_0X0F3 (243U)
 *   NTCNR_0X0F4 (244U)
 *   NTCNR_0X0F5 (245U)
 *   NTCNR_0X0F6 (246U)
 *   NTCNR_0X0F7 (247U)
 *   NTCNR_0X0F8 (248U)
 *   NTCNR_0X0F9 (249U)
 *   NTCNR_0X0FA (250U)
 *   NTCNR_0X0FB (251U)
 *   NTCNR_0X0FC (252U)
 *   NTCNR_0X0FD (253U)
 *   NTCNR_0X0FE (254U)
 *   NTCNR_0X0FF (255U)
 *   NTCNR_0X100 (256U)
 *   NTCNR_0X101 (257U)
 *   NTCNR_0X102 (258U)
 *   NTCNR_0X103 (259U)
 *   NTCNR_0X104 (260U)
 *   NTCNR_0X105 (261U)
 *   NTCNR_0X106 (262U)
 *   NTCNR_0X107 (263U)
 *   NTCNR_0X108 (264U)
 *   NTCNR_0X109 (265U)
 *   NTCNR_0X10A (266U)
 *   NTCNR_0X10B (267U)
 *   NTCNR_0X10C (268U)
 *   NTCNR_0X10D (269U)
 *   NTCNR_0X10E (270U)
 *   NTCNR_0X10F (271U)
 *   NTCNR_0X110 (272U)
 *   NTCNR_0X111 (273U)
 *   NTCNR_0X112 (274U)
 *   NTCNR_0X113 (275U)
 *   NTCNR_0X114 (276U)
 *   NTCNR_0X115 (277U)
 *   NTCNR_0X116 (278U)
 *   NTCNR_0X117 (279U)
 *   NTCNR_0X118 (280U)
 *   NTCNR_0X119 (281U)
 *   NTCNR_0X11A (282U)
 *   NTCNR_0X11B (283U)
 *   NTCNR_0X11C (284U)
 *   NTCNR_0X11D (285U)
 *   NTCNR_0X11E (286U)
 *   NTCNR_0X11F (287U)
 *   NTCNR_0X120 (288U)
 *   NTCNR_0X121 (289U)
 *   NTCNR_0X122 (290U)
 *   NTCNR_0X123 (291U)
 *   NTCNR_0X124 (292U)
 *   NTCNR_0X125 (293U)
 *   NTCNR_0X126 (294U)
 *   NTCNR_0X127 (295U)
 *   NTCNR_0X128 (296U)
 *   NTCNR_0X129 (297U)
 *   NTCNR_0X12A (298U)
 *   NTCNR_0X12B (299U)
 *   NTCNR_0X12C (300U)
 *   NTCNR_0X12D (301U)
 *   NTCNR_0X12E (302U)
 *   NTCNR_0X12F (303U)
 *   NTCNR_0X130 (304U)
 *   NTCNR_0X131 (305U)
 *   NTCNR_0X132 (306U)
 *   NTCNR_0X133 (307U)
 *   NTCNR_0X134 (308U)
 *   NTCNR_0X135 (309U)
 *   NTCNR_0X136 (310U)
 *   NTCNR_0X137 (311U)
 *   NTCNR_0X138 (312U)
 *   NTCNR_0X139 (313U)
 *   NTCNR_0X13A (314U)
 *   NTCNR_0X13B (315U)
 *   NTCNR_0X13C (316U)
 *   NTCNR_0X13D (317U)
 *   NTCNR_0X13E (318U)
 *   NTCNR_0X13F (319U)
 *   NTCNR_0X140 (320U)
 *   NTCNR_0X141 (321U)
 *   NTCNR_0X142 (322U)
 *   NTCNR_0X143 (323U)
 *   NTCNR_0X144 (324U)
 *   NTCNR_0X145 (325U)
 *   NTCNR_0X146 (326U)
 *   NTCNR_0X147 (327U)
 *   NTCNR_0X148 (328U)
 *   NTCNR_0X149 (329U)
 *   NTCNR_0X14A (330U)
 *   NTCNR_0X14B (331U)
 *   NTCNR_0X14C (332U)
 *   NTCNR_0X14D (333U)
 *   NTCNR_0X14E (334U)
 *   NTCNR_0X14F (335U)
 *   NTCNR_0X150 (336U)
 *   NTCNR_0X151 (337U)
 *   NTCNR_0X152 (338U)
 *   NTCNR_0X153 (339U)
 *   NTCNR_0X154 (340U)
 *   NTCNR_0X155 (341U)
 *   NTCNR_0X156 (342U)
 *   NTCNR_0X157 (343U)
 *   NTCNR_0X158 (344U)
 *   NTCNR_0X159 (345U)
 *   NTCNR_0X15A (346U)
 *   NTCNR_0X15B (347U)
 *   NTCNR_0X15C (348U)
 *   NTCNR_0X15D (349U)
 *   NTCNR_0X15E (350U)
 *   NTCNR_0X15F (351U)
 *   NTCNR_0X160 (352U)
 *   NTCNR_0X161 (353U)
 *   NTCNR_0X162 (354U)
 *   NTCNR_0X163 (355U)
 *   NTCNR_0X164 (356U)
 *   NTCNR_0X165 (357U)
 *   NTCNR_0X166 (358U)
 *   NTCNR_0X167 (359U)
 *   NTCNR_0X168 (360U)
 *   NTCNR_0X169 (361U)
 *   NTCNR_0X16A (362U)
 *   NTCNR_0X16B (363U)
 *   NTCNR_0X16C (364U)
 *   NTCNR_0X16D (365U)
 *   NTCNR_0X16E (366U)
 *   NTCNR_0X16F (367U)
 *   NTCNR_0X170 (368U)
 *   NTCNR_0X171 (369U)
 *   NTCNR_0X172 (370U)
 *   NTCNR_0X173 (371U)
 *   NTCNR_0X174 (372U)
 *   NTCNR_0X175 (373U)
 *   NTCNR_0X176 (374U)
 *   NTCNR_0X177 (375U)
 *   NTCNR_0X178 (376U)
 *   NTCNR_0X179 (377U)
 *   NTCNR_0X17A (378U)
 *   NTCNR_0X17B (379U)
 *   NTCNR_0X17C (380U)
 *   NTCNR_0X17D (381U)
 *   NTCNR_0X17E (382U)
 *   NTCNR_0X17F (383U)
 *   NTCNR_0X180 (384U)
 *   NTCNR_0X181 (385U)
 *   NTCNR_0X182 (386U)
 *   NTCNR_0X183 (387U)
 *   NTCNR_0X184 (388U)
 *   NTCNR_0X185 (389U)
 *   NTCNR_0X186 (390U)
 *   NTCNR_0X187 (391U)
 *   NTCNR_0X188 (392U)
 *   NTCNR_0X189 (393U)
 *   NTCNR_0X18A (394U)
 *   NTCNR_0X18B (395U)
 *   NTCNR_0X18C (396U)
 *   NTCNR_0X18D (397U)
 *   NTCNR_0X18E (398U)
 *   NTCNR_0X18F (399U)
 *   NTCNR_0X190 (400U)
 *   NTCNR_0X191 (401U)
 *   NTCNR_0X192 (402U)
 *   NTCNR_0X193 (403U)
 *   NTCNR_0X194 (404U)
 *   NTCNR_0X195 (405U)
 *   NTCNR_0X196 (406U)
 *   NTCNR_0X197 (407U)
 *   NTCNR_0X198 (408U)
 *   NTCNR_0X199 (409U)
 *   NTCNR_0X19A (410U)
 *   NTCNR_0X19B (411U)
 *   NTCNR_0X19C (412U)
 *   NTCNR_0X19D (413U)
 *   NTCNR_0X19E (414U)
 *   NTCNR_0X19F (415U)
 *   NTCNR_0X1A0 (416U)
 *   NTCNR_0X1A1 (417U)
 *   NTCNR_0X1A2 (418U)
 *   NTCNR_0X1A3 (419U)
 *   NTCNR_0X1A4 (420U)
 *   NTCNR_0X1A5 (421U)
 *   NTCNR_0X1A6 (422U)
 *   NTCNR_0X1A7 (423U)
 *   NTCNR_0X1A8 (424U)
 *   NTCNR_0X1A9 (425U)
 *   NTCNR_0X1AA (426U)
 *   NTCNR_0X1AB (427U)
 *   NTCNR_0X1AC (428U)
 *   NTCNR_0X1AD (429U)
 *   NTCNR_0X1AE (430U)
 *   NTCNR_0X1AF (431U)
 *   NTCNR_0X1B0 (432U)
 *   NTCNR_0X1B1 (433U)
 *   NTCNR_0X1B2 (434U)
 *   NTCNR_0X1B3 (435U)
 *   NTCNR_0X1B4 (436U)
 *   NTCNR_0X1B5 (437U)
 *   NTCNR_0X1B6 (438U)
 *   NTCNR_0X1B7 (439U)
 *   NTCNR_0X1B8 (440U)
 *   NTCNR_0X1B9 (441U)
 *   NTCNR_0X1BA (442U)
 *   NTCNR_0X1BB (443U)
 *   NTCNR_0X1BC (444U)
 *   NTCNR_0X1BD (445U)
 *   NTCNR_0X1BE (446U)
 *   NTCNR_0X1BF (447U)
 *   NTCNR_0X1C0 (448U)
 *   NTCNR_0X1C1 (449U)
 *   NTCNR_0X1C2 (450U)
 *   NTCNR_0X1C3 (451U)
 *   NTCNR_0X1C4 (452U)
 *   NTCNR_0X1C5 (453U)
 *   NTCNR_0X1C6 (454U)
 *   NTCNR_0X1C7 (455U)
 *   NTCNR_0X1C8 (456U)
 *   NTCNR_0X1C9 (457U)
 *   NTCNR_0X1CA (458U)
 *   NTCNR_0X1CB (459U)
 *   NTCNR_0X1CC (460U)
 *   NTCNR_0X1CD (461U)
 *   NTCNR_0X1CE (462U)
 *   NTCNR_0X1CF (463U)
 *   NTCNR_0X1D0 (464U)
 *   NTCNR_0X1D1 (465U)
 *   NTCNR_0X1D2 (466U)
 *   NTCNR_0X1D3 (467U)
 *   NTCNR_0X1D4 (468U)
 *   NTCNR_0X1D5 (469U)
 *   NTCNR_0X1D6 (470U)
 *   NTCNR_0X1D7 (471U)
 *   NTCNR_0X1D8 (472U)
 *   NTCNR_0X1D9 (473U)
 *   NTCNR_0X1DA (474U)
 *   NTCNR_0X1DB (475U)
 *   NTCNR_0X1DC (476U)
 *   NTCNR_0X1DD (477U)
 *   NTCNR_0X1DE (478U)
 *   NTCNR_0X1DF (479U)
 *   NTCNR_0X1E0 (480U)
 *   NTCNR_0X1E1 (481U)
 *   NTCNR_0X1E2 (482U)
 *   NTCNR_0X1E3 (483U)
 *   NTCNR_0X1E4 (484U)
 *   NTCNR_0X1E5 (485U)
 *   NTCNR_0X1E6 (486U)
 *   NTCNR_0X1E7 (487U)
 *   NTCNR_0X1E8 (488U)
 *   NTCNR_0X1E9 (489U)
 *   NTCNR_0X1EA (490U)
 *   NTCNR_0X1EB (491U)
 *   NTCNR_0X1EC (492U)
 *   NTCNR_0X1ED (493U)
 *   NTCNR_0X1EE (494U)
 *   NTCNR_0X1EF (495U)
 *   NTCNR_0X1F0 (496U)
 *   NTCNR_0X1F1 (497U)
 *   NTCNR_0X1F2 (498U)
 *   NTCNR_0X1F3 (499U)
 *   NTCNR_0X1F4 (500U)
 *   NTCNR_0X1F5 (501U)
 *   NTCNR_0X1F6 (502U)
 *   NTCNR_0X1F7 (503U)
 *   NTCNR_0X1F8 (504U)
 *   NTCNR_0X1F9 (505U)
 *   NTCNR_0X1FA (506U)
 *   NTCNR_0X1FB (507U)
 *   NTCNR_0X1FC (508U)
 *   NTCNR_0X1FD (509U)
 *   NTCNR_0X1FE (510U)
 *   NTCNR_0X1FF (511U)
 * NtcSts1: Enumeration of integer in interval [0...255] with enumerators
 *   NTCSTS_PASSD (0U)
 *   NTCSTS_FAILD (1U)
 *   NTCSTS_PREPASSD (2U)
 *   NTCSTS_PREFAILD (3U)
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 * StHlthMonSig3: Enumeration of integer in interval [0...255] with enumerators
 *   STHLTHMONSIG_ECUTFILTD (0U)
 *   STHLTHMONSIG_ASSIDUETOVLTG (1U)
 *   STHLTHMONSIG_DIGTQSNSRA (2U)
 *   STHLTHMONSIG_DIGTQSNSRB (3U)
 *   STHLTHMONSIG_DIGTQIDPTSIG (4U)
 *   STHLTHMONSIG_DUTYCYC (5U)
 *   STHLTHMONSIG_EOTIMPCT (6U)
 *   STHLTHMONSIG_MOTPOS (7U)
 *   STHLTHMONSIG_MOTPOSABDIFF (8U)
 *   STHLTHMONSIG_MOTPOSACDIFF (9U)
 *   STHLTHMONSIG_MOTPOSBCDIFF (10U)
 *   STHLTHMONSIG_CURRMOTSUMABC (11U)
 *   STHLTHMONSIG_CURRMOTSUMDEF (12U)
 *   STHLTHMONSIG_MOTPOSPHASEA (13U)
 *   STHLTHMONSIG_MOTPOSPHASEB (14U)
 *   STHLTHMONSIG_MOTPOSPHASEC (15U)
 *   STHLTHMONSIG_MOTPOSPHASED (16U)
 *   STHLTHMONSIG_MOTPOSPHASEE (17U)
 *   STHLTHMONSIG_MOTPOSPHASEF (18U)
 *   STHLTHMONSIG_BITCORRN (19U)
 *   STHLTHMONSIG_FRICESTIMN (20U)
 *   STHLTHMONSIG_WHLIMBREJCTN (21U)
 * SysFricLrngOperMod1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSFRICLRNGOPERMOD_CALIBRATION (0U)
 *   SYSFRICLRNGOPERMOD_NORMAL (1U)
 *   SYSFRICLRNGOPERMOD_CLEAR (2U)
 *   SYSFRICLRNGOPERMOD_IDLE (3U)
 *   SYSFRICLRNGOPERMOD_BASELINE (4U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   u0p16 *Rte_Pim_MotAgCorrlnErrThd(void)
 *   uint8 *Rte_Pim_AbsltMotPosABDifStHlthSts(void)
 *   uint8 *Rte_Pim_AbsltMotPosACDifStHlthSts(void)
 *   uint8 *Rte_Pim_AbsltMotPosBCDifStHlthSts(void)
 *   uint8 *Rte_Pim_CurrMotSumABCStHlthSts(void)
 *   uint8 *Rte_Pim_CurrMotSumDEFStHlthSts(void)
 *   uint8 *Rte_Pim_DigTqIdptSigStHlthSts(void)
 *   uint8 *Rte_Pim_DigTqSnsrAStHlthSts(void)
 *   uint8 *Rte_Pim_DigTqSnsrBStHlthSts(void)
 *   uint8 *Rte_Pim_EcuTRngIgnCyc(void)
 *   uint8 *Rte_Pim_EotImpctCntr(void)
 *   uint8 *Rte_Pim_MotPosStHlthSts(void)
 *   uint8 *Rte_Pim_PhaAStHlthSts(void)
 *   uint8 *Rte_Pim_PhaBStHlthSts(void)
 *   uint8 *Rte_Pim_PhaCStHlthSts(void)
 *   uint8 *Rte_Pim_PhaDStHlthSts(void)
 *   uint8 *Rte_Pim_PhaEStHlthSts(void)
 *   uint8 *Rte_Pim_PhaFStHlthSts(void)
 *   uint8 *Rte_Pim_VltgRngIgnCyc(void)
 *   boolean *Rte_Pim_EntrEot(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val(void)
 *   float32 Rte_Prm_EcuTMeasRngDiagcMax_Val(void)
 *   float32 Rte_Prm_EcuTMeasRngDiagcMin_Val(void)
 *   float32 Rte_Prm_EotLrngAuthyStrtLrn_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val(void)
 *   float32 Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnHiCtrlrT_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnLoCtrlrT_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnMaxFricThd_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnMotVelCal_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnValMinStHlthErr_Val(void)
 *   float32 Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val(void)
 *   uint32 Rte_Prm_MotDrvDiagcErrThd_Val(void)
 *   uint16 Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val(void)
 *   uint16 Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val(void)
 *   u0p16 Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *
 *********************************************************************************************************************/


#define StHlthSigNormn_START_SEC_CODE
#include "StHlthSigNormn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StHlthSigNormnInit1
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
 *   Std_ReturnType Rte_Write_AbsltMotPosABDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosACDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosBCDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTRng_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumABCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumDEFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqIdptSigStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DutyCycStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EotImpctStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotPosStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutpAssiStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaDStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaEStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RamEccSngBitCorrnStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VltgRng_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_StHlthSigNormnInit1_EolFric(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, StHlthSigNormn_CODE) StHlthSigNormnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StHlthSigNormnInit1
 *********************************************************************************************************************/
     VAR(float32, AUTOMATIC)   EolFric_Uls_T_f32; 
     VAR(SysFricLrngOperMod1, AUTOMATIC)   FricLrngOperMod_Uls_T_enum; 
     VAR(boolean, AUTOMATIC)   FricLrngEna_Cnt_T_lgc; 
     VAR(boolean, AUTOMATIC)   FricLrngOffsOutpEna_Cnt_T_lgc; 

     /* Initialize all State of Health PIMs to 100 */
    *Rte_Pim_EotImpctCntr()  = HLTH100PERC_CNT_U08;
    *Rte_Pim_AbsltMotPosABDifStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_AbsltMotPosACDifStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_AbsltMotPosBCDifStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_CurrMotSumABCStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_CurrMotSumDEFStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_DigTqIdptSigStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_DigTqSnsrAStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_DigTqSnsrBStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_PhaAStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_PhaBStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_PhaCStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_PhaDStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_PhaEStHlthSts() = HLTH100PERC_CNT_U08;
    *Rte_Pim_PhaFStHlthSts() = HLTH100PERC_CNT_U08;
    
    /* Motor Angle Correlation Error */
    *Rte_Pim_MotAgCorrlnErrThd() =(uint16)(((uint32)MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16*(uint32)2U*(((uint32)1U <<16U)/Rte_Prm_SysGlbPrmMotPoleCnt_Val()))>>16U);
    /*Get Friction Learning Data Client*/
    (void)Rte_Call_GetFricLrngData_Oper(&FricLrngEna_Cnt_T_lgc, &FricLrngOffsOutpEna_Cnt_T_lgc, &FricLrngOperMod_Uls_T_enum, &EolFric_Uls_T_f32);
    /* Store EolFric value in IRV */
    Rte_IrvWrite_StHlthSigNormnInit1_EolFric(EolFric_Uls_T_f32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: UpdRawSig_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <UpdRawSig>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CurrMotSumABC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumDEF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DutyCycThermProtnMaxOutp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqChACorrlnTraErr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqChBCorrlnTraErr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LclRamEccSngBitCntrOutp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MaxLrndFric_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg2VltgSqd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAgABErrTerm_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAgACErrTerm_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAgBCErrTerm_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrE_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDrvErrF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RackLimrEotSig0Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RackLimrEotSig1Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AbsltMotPosABDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosACDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsltMotPosBCDifStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTRng_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CtrlrTStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumABCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumDEFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqIdptSigStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DigTqSnsrBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DutyCycStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EotImpctStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FricEstimnStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotPosStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutpAssiStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaAStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaBStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaCStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaDStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaEStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PhaFStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RamEccSngBitCorrnStHlth_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VltgRng_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlImbMaxCmpStHlth_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_UpdRawSig_Oper_EolFric(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void UpdRawSig_Oper(StHlthMonSig3 SigId_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, StHlthSigNormn_CODE) UpdRawSig_Oper(StHlthMonSig3 SigId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: UpdRawSig_Oper
 *********************************************************************************************************************/
/* REQ: ES105A #6 I */
/* REQ: ES105A #7 I */
/* REQ: ES105A #8 I */
    switch(SigId_Arg)
    {
        /* Controller Temperature - State of Health calculation */
        case STHLTHMONSIG_ECUTFILTD:     
            EcuTFildMon();         
        break;
        /* Assist due to Voltage - State of Health calculation */
        case STHLTHMONSIG_ASSIDUETOVLTG:     
            OutpAssiMon();       
        break;
       /* Digital Torque Sensors */
        case STHLTHMONSIG_DIGTQSNSRA:
        case STHLTHMONSIG_DIGTQSNSRB:
        case STHLTHMONSIG_DIGTQIDPTSIG:        
            DigTqSnsrStHlthCalc(SigId_Arg);
        break;             
        /* Duty cycle exceeded */
        case STHLTHMONSIG_DUTYCYC:
            DutyCycExcddStHlthCalc();
        break;                
        /* EOT Impact */
        case STHLTHMONSIG_EOTIMPCT:
            EotImpctCntrStHlthCalc();
        break;          
        /* Motor position */
        case STHLTHMONSIG_MOTPOS:
            MotPosnStHlthCalc();
        break;              
        /* Motor Position error */
        case STHLTHMONSIG_MOTPOSABDIFF:
        case STHLTHMONSIG_MOTPOSACDIFF:
        case STHLTHMONSIG_MOTPOSBCDIFF:
            MotPosnErrStHlthCalc(SigId_Arg);
        break; 
        /* Current Motor Sum */
        case STHLTHMONSIG_CURRMOTSUMABC:
        case STHLTHMONSIG_CURRMOTSUMDEF:
            CurrMotSumStHlthCalc(SigId_Arg);
        break;     
        /* Phase Voltage Verification */
        case STHLTHMONSIG_MOTPOSPHASEA:
        case STHLTHMONSIG_MOTPOSPHASEB:
        case STHLTHMONSIG_MOTPOSPHASEC:
        case STHLTHMONSIG_MOTPOSPHASED:
        case STHLTHMONSIG_MOTPOSPHASEE:
        case STHLTHMONSIG_MOTPOSPHASEF:
            PhaVltgStHlthCalc(SigId_Arg);
        break;     
        /* Single Bit RAM ECC Error */
        case STHLTHMONSIG_BITCORRN:
            RamEccSngBitCorrnStHlthCalc();
        break;               
        case STHLTHMONSIG_FRICESTIMN:
            FricEstimnStHlthCalc();
        break;
        case STHLTHMONSIG_WHLIMBREJCTN:
            WhlImbRejctnStHlthCalc();        
        break;
        default:
        break;     
    }
/* ENDREQ: ES105A #6 I */
/* ENDREQ: ES105A #7 I */
/* ENDREQ: ES105A #8 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StHlthSigNormn_STOP_SEC_CODE
#include "StHlthSigNormn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


 /******************************************************************************
  * Name:        EcuTFildMon
  * Description: Implements State of Health normalization logic for Controller 
  *              temperature
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
/* REQ: ES105A #39 I */ 
/* REQ: ES105A #40 I */ 
static FUNC(void, StHlthSigNormn_CODE) EcuTFildMon(void)
{
    VAR(float32, AUTOMATIC)  EcuTFild_DegCgrd_T_f32 = 0.0F;      
    VAR(uint8, AUTOMATIC)   PrsntCtrlrTRng_Cnt_T_u08; 
    VAR(uint8, AUTOMATIC)   PrsntCycCtrlrTStHlth_Cnt_T_u08;      
    VAR(uint8, AUTOMATIC)   CtrlrTRngOut_Cnt_T_u08;     

    (void)Rte_Read_EcuTFild_Val(&EcuTFild_DegCgrd_T_f32); /* REQ: ES105A #14 I */

    /* Check if the controller temperature is between StHlthSigNormnLoCtrlrT and StHlthSigNormnHiCtrlrT */
    if ((EcuTFild_DegCgrd_T_f32 >= Rte_Prm_StHlthSigNormnLoCtrlrT_Val())&& 
        (EcuTFild_DegCgrd_T_f32 <= Rte_Prm_StHlthSigNormnHiCtrlrT_Val())) /* REQ: ES105A #41 I */ 
    {
        /* REQ: ES105A #41 I */ 
        /* REQ: ES105A #46 I */         
        PrsntCycCtrlrTStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;
        PrsntCtrlrTRng_Cnt_T_u08 = 0U; 
        /* ENDREQ: ES105A #41 I */
        /* ENDREQ: ES105A #46 I */
    }
    /* Controller temperature is between EcuTMeasRngDiagcMin and StHlthSigNormnLoCtrlrT */
    else if ((EcuTFild_DegCgrd_T_f32 >= Rte_Prm_EcuTMeasRngDiagcMin_Val()) &&
             (EcuTFild_DegCgrd_T_f32 < Rte_Prm_StHlthSigNormnLoCtrlrT_Val())) /* REQ: ES105A #42 I */
    {
        /* REQ: ES105A #42 I */ 
        /* REQ: ES105A #46 I */    
        PrsntCycCtrlrTStHlth_Cnt_T_u08 = HLTH50PERC_CNT_U08;
        *Rte_Pim_EcuTRngIgnCyc() |= (uint8)(1U << LOTSTHLTH50PERC_CNT_U08);
        PrsntCtrlrTRng_Cnt_T_u08 = (uint8)(1U << LOTSTHLTH50PERC_CNT_U08);
        /* ENDREQ: ES105A #42 I */
        /* ENDREQ: ES105A #46 I */        
    }
    /* Controller temperature is between EcuTMeasRngDiagcMax and StHlthSigNormnHiCtrlrT */
    else if ((EcuTFild_DegCgrd_T_f32 <= Rte_Prm_EcuTMeasRngDiagcMax_Val()) &&
             (EcuTFild_DegCgrd_T_f32 > Rte_Prm_StHlthSigNormnHiCtrlrT_Val()))/* REQ: ES105A #43 I */
    {
        /* REQ: ES105A #43 I */ 
        /* REQ: ES105A #46 I */    
        PrsntCycCtrlrTStHlth_Cnt_T_u08 = HLTH50PERC_CNT_U08;
        *Rte_Pim_EcuTRngIgnCyc() |= (uint8)(1U << HITSTHLTH50PERC_CNT_U08);
        PrsntCtrlrTRng_Cnt_T_u08 = (uint8)(1U << HITSTHLTH50PERC_CNT_U08);
        /* ENDREQ: ES105A #43 I */
        /* ENDREQ: ES105A #46 I */        
    }
    /* Controller temperature is less than EcuTMeasRngDiagcMin */
    else if (EcuTFild_DegCgrd_T_f32 < Rte_Prm_EcuTMeasRngDiagcMin_Val()) /* REQ: ES105A #44 I */
    {
        /* REQ: ES105A #44 I */ 
        /* REQ: ES105A #46 I */    
        PrsntCycCtrlrTStHlth_Cnt_T_u08 = 0U;
        *Rte_Pim_EcuTRngIgnCyc() |= (uint8)(1U << LOTSTHLTH0PERC_CNT_U08);
        PrsntCtrlrTRng_Cnt_T_u08 = (uint8)(1U << LOTSTHLTH0PERC_CNT_U08);
        /* ENDREQ: ES105A #44 I */
        /* ENDREQ: ES105A #46 I */        
    }
    /* Greater than EcuTMeasRngDiagcMax */
    else
    {
        /* REQ: ES105A #45 I */ 
        /* REQ: ES105A #46 I */    
        PrsntCycCtrlrTStHlth_Cnt_T_u08 = 0U;
        *Rte_Pim_EcuTRngIgnCyc() |= (uint8)(1U << HITSTHLTH0PERC_CNT_U08);
        PrsntCtrlrTRng_Cnt_T_u08 = (uint8)(1U << HITSTHLTH0PERC_CNT_U08);
        /* ENDREQ: ES105A #45 I */
        /* ENDREQ: ES105A #46 I */        
    }
    
    /* Controller temperature range update for ignition cycle */
    /* REQ: ES105A #46 I */ 
    if ((*Rte_Pim_EcuTRngIgnCyc() & TSTHLTH0PERC_CNT_U08) != 0U)
    {
        CtrlrTRngOut_Cnt_T_u08 = (uint8)(*Rte_Pim_EcuTRngIgnCyc() & TSTHLTH0PERC_CNT_U08);
    }
    else
    {
        CtrlrTRngOut_Cnt_T_u08 = (uint8)(*Rte_Pim_EcuTRngIgnCyc() >> TSTHLTH50PERCPOS_CNT_U08);
    }

    /* Controller temperature range update for present cycle */
    if ((PrsntCtrlrTRng_Cnt_T_u08 & TSTHLTH0PERC_CNT_U08) != 0U)
    {
        CtrlrTRngOut_Cnt_T_u08 |= (uint8)(PrsntCtrlrTRng_Cnt_T_u08 << TPRSNTCYCDATAPOSN_CNT_U08);
    }
    else
    {
        CtrlrTRngOut_Cnt_T_u08 |= PrsntCtrlrTRng_Cnt_T_u08;
    }  
    /* ENDREQ: ES105A #46 I */ 
    
    /* Limit the outputs */    
    PrsntCycCtrlrTStHlth_Cnt_T_u08 = Lim_u08(PrsntCycCtrlrTStHlth_Cnt_T_u08, 0U, HLTH100PERC_CNT_U08);    
    CtrlrTRngOut_Cnt_T_u08 = Lim_u08(CtrlrTRngOut_Cnt_T_u08, 0U, TMAXRNGVAL_CNT_U08);
    /* Write State of Health to RTE */
    (void)Rte_Write_CtrlrTStHlth_Val(PrsntCycCtrlrTStHlth_Cnt_T_u08); /* REQ: ES105A #26 I */
    /* Write temperature range to RTE */
    (void)Rte_Write_CtrlrTRng_Val(CtrlrTRngOut_Cnt_T_u08);   /* REQ: ES105A #26 I */ 

}
/* ENDREQ: ES105A #39 I */
/* ENDREQ: ES105A #40 I */
 /******************************************************************************
  * Name:        OutpAssiMon
  * Description: Implements State of Health normalization logic for Assist due  
  *              to voltage
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
/* REQ: ES105A #48 I */ 
/* REQ: ES105A #49 I */  
static FUNC(void, StHlthSigNormn_CODE) OutpAssiMon(void)
{  
    /* Temporary variables to get status of NTCs */
	VAR(SigQlfr1, AUTOMATIC) NtcQlfr0x0B0_Cnt_T_enum;    
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr0x0B1_Cnt_T_enum; 
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr0x0B5_Cnt_T_enum; 
    
	VAR(uint8, AUTOMATIC)   PrsntCycVltgRng_Cnt_T_u08; 
	VAR(uint8, AUTOMATIC)   PrsntCycOutpAssiStHlth_Cnt_T_u08;  
    VAR(uint8, AUTOMATIC)   VltgRngOut_Cnt_T_u08;  

    /* Get ECU Voltage related NTC qualifier status */
    (void) Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0B0, &NtcQlfr0x0B0_Cnt_T_enum); /* REQ: ES105A #15 I */ 
    (void) Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0B1, &NtcQlfr0x0B1_Cnt_T_enum); /* REQ: ES105A #15 I */ 
    (void) Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0B5, &NtcQlfr0x0B5_Cnt_T_enum); /* REQ: ES105A #15 I */ 

     /* REQ: ES105A #50 I */
    /* If none of the NTC is active */
    if (( NtcQlfr0x0B0_Cnt_T_enum != SIGQLFR_FAILD) && 
        ( NtcQlfr0x0B1_Cnt_T_enum != SIGQLFR_FAILD) && 
        ( NtcQlfr0x0B5_Cnt_T_enum != SIGQLFR_FAILD))
    {
        PrsntCycVltgRng_Cnt_T_u08 = 0U; 
        PrsntCycOutpAssiStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;  
    }
    /* ENDREQ: ES105A #51 I */ 
    /* Under voltage NTC is active */
     /* REQ: ES105A #51 I */ 
    else if ( NtcQlfr0x0B0_Cnt_T_enum == SIGQLFR_FAILD)
    {
        PrsntCycOutpAssiStHlth_Cnt_T_u08 = 0U;   
        PrsntCycVltgRng_Cnt_T_u08 = (uint8)(1U << LOVLTGSTHLTH0PERC_CNT_U08); 
        *Rte_Pim_VltgRngIgnCyc() |= (uint8)(1U << LOVLTGSTHLTH0PERC_CNT_U08);        
    }
    /* ENDREQ: ES105A #51 I */  
    /* Over Voltage NTC is active */
    /* REQ: ES105A #52 I */ 
    else if( NtcQlfr0x0B5_Cnt_T_enum == SIGQLFR_FAILD)
    {

        PrsntCycOutpAssiStHlth_Cnt_T_u08 = 0U;    
        PrsntCycVltgRng_Cnt_T_u08 = (uint8)(1U << HIVLTGSTHLTH0PERC_CNT_U08); 
        *Rte_Pim_VltgRngIgnCyc() |= (uint8)(1U << HIVLTGSTHLTH0PERC_CNT_U08);      
    } 
    /* ENDREQ: ES105A #52 I */ 
    /* Low voltage NTC is active */
    /* REQ: ES105A #53 I */     
    else 
    {
        PrsntCycOutpAssiStHlth_Cnt_T_u08 = HLTH50PERC_CNT_U08;    
        PrsntCycVltgRng_Cnt_T_u08 = (uint8)(1U << LOVLTGSTHLTH50PERC_CNT_U08); 
        *Rte_Pim_VltgRngIgnCyc() |= (uint8)(1U << LOVLTGSTHLTH50PERC_CNT_U08);         
    } 
    /* ENDREQ: ES105A #53 I */     
 


    
     /* Voltage range update for ignition cycle */
    /* REQ: ES105A #54 I */ 
    if ((*Rte_Pim_VltgRngIgnCyc() & VLTGSTHLTH0PERC_CNT_U08) != 0U)
    {
        VltgRngOut_Cnt_T_u08 = (uint8)(*Rte_Pim_VltgRngIgnCyc() & VLTGSTHLTH0PERC_CNT_U08);
    }
    else
    {
        VltgRngOut_Cnt_T_u08 = (uint8)(*Rte_Pim_VltgRngIgnCyc() >> VLTGSTHLTH50PERCPOS_CNT_U08);
    }

    /* Voltage range update for present cycle */
    if ((PrsntCycVltgRng_Cnt_T_u08 & VLTGSTHLTH0PERC_CNT_U08) != 0U)
    {
        VltgRngOut_Cnt_T_u08 |= (uint8)(PrsntCycVltgRng_Cnt_T_u08 << VLTGPRSNTCYCDATAPOSN_CNT_U08);
    }
    else
    {
        VltgRngOut_Cnt_T_u08 |= PrsntCycVltgRng_Cnt_T_u08;
    }
    /* ENDREQ: ES105A #54 I */     
    /* Limiting the outputs */
    PrsntCycOutpAssiStHlth_Cnt_T_u08 = Lim_u08(PrsntCycOutpAssiStHlth_Cnt_T_u08, 0U, HLTH100PERC_CNT_U08);    
    VltgRngOut_Cnt_T_u08 = Lim_u08(VltgRngOut_Cnt_T_u08, 0U, VLTGMAXRNGVAL_CNT_U08);
    
    /* Write State of Health value to RTE */
    (void)Rte_Write_OutpAssiStHlth_Val(PrsntCycOutpAssiStHlth_Cnt_T_u08); /* REQ: ES105A #27 I */
    /* Write Voltage Range to RTE */
    (void)Rte_Write_VltgRng_Val(VltgRngOut_Cnt_T_u08);        /* REQ: ES105A #27 I */       
}
/* ENDREQ: ES105A #48 I */ 
/* ENDREQ: ES105A #49 I */   

 /******************************************************************************
  * Name:        DigTqSnsrStHlthCalc
  * Description: Implements State of Health normalization logic for Digital Torque
  *              Sensors
  * Inputs:      SigId_Arg - Torque sensor channel Id.
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) DigTqSnsrStHlthCalc(StHlthMonSig3 SigId_Arg)
{
    VAR(float32, AUTOMATIC)  HwTqChXCorrlnTraErr_HwNwtMtr_T_f32 = 0.0F;   
    VAR(float32, AUTOMATIC)  DenomVal_T_f32;      
    VAR(uint8, AUTOMATIC)    OutpStHlthVal_Cnt_T_u08;
    VAR(uint8, AUTOMATIC)    HwTqIdptSig_Cnt_T_u08 = 0U;
    
    switch(SigId_Arg)
    {
        case STHLTHMONSIG_DIGTQSNSRA:      
            /* Get value for Channel A */
            (void)Rte_Read_HwTqChACorrlnTraErr_Val(&HwTqChXCorrlnTraErr_HwNwtMtr_T_f32);               
            /* Check if the value is beyond outer boundary */
            if(Abslt_f32_f32(HwTqChXCorrlnTraErr_HwNwtMtr_T_f32) > Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val())
            {
                OutpStHlthVal_Cnt_T_u08 = HLTH0PERC_CNT_U08;
            }
            else
            {
                /* Divide by zero protection */
                DenomVal_T_f32 = Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val();

                if(DenomVal_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
                {
                    DenomVal_T_f32 = DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32;                    
                }
                /* State of Health Value calc */                
                OutpStHlthVal_Cnt_T_u08 = (uint8)(
                FloatToFixd_u16_f32(Lim_f32(
                (((1.0F- (Abslt_f32_f32(HwTqChXCorrlnTraErr_HwNwtMtr_T_f32)/DenomVal_T_f32)))*(STHLTHSCAGFAC_CNT_F32)),STHLTHFLOATZEROVAL_ULS_F32,STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32),NXTRFIXDPT_FLOATTOP0_ULS_F32
                )
                );
            }
            /* Limit the output */
            OutpStHlthVal_Cnt_T_u08 = Lim_u08(OutpStHlthVal_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);
            /* Retain the State Health Value in PIM */            
            *Rte_Pim_DigTqSnsrAStHlthSts() = OutpStHlthVal_Cnt_T_u08; 
            /* Write to RTE */
            (void)Rte_Write_DigTqSnsrAStHlth_Val(OutpStHlthVal_Cnt_T_u08);        

        break;
        case STHLTHMONSIG_DIGTQSNSRB:        
            /* Get value for Channel B */
            (void)Rte_Read_HwTqChBCorrlnTraErr_Val(&HwTqChXCorrlnTraErr_HwNwtMtr_T_f32);   
            /* Check if the value is beyond outer boundary */            
            if(Abslt_f32_f32(HwTqChXCorrlnTraErr_HwNwtMtr_T_f32) > Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val())
            {
                OutpStHlthVal_Cnt_T_u08 = 0U;
            }
            else
            {
                DenomVal_T_f32 = Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val();                
                /* Divide by zero protection */
                if(DenomVal_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
                {
                    DenomVal_T_f32 = DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32;                    
                }
                /* State of Health Value calc */                
                OutpStHlthVal_Cnt_T_u08 = (uint8)(
                FloatToFixd_u16_f32(Lim_f32(
                (((1.0F- (Abslt_f32_f32(HwTqChXCorrlnTraErr_HwNwtMtr_T_f32)/DenomVal_T_f32)))*(STHLTHSCAGFAC_CNT_F32)),STHLTHFLOATZEROVAL_ULS_F32,STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32),NXTRFIXDPT_FLOATTOP0_ULS_F32
                )
                );              
            }        
            /* Limit the output */
            OutpStHlthVal_Cnt_T_u08 = Lim_u08(OutpStHlthVal_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);
            /* Retain the State Health Value in PIM */              
            *Rte_Pim_DigTqSnsrBStHlthSts() = OutpStHlthVal_Cnt_T_u08;            
            /* Write to RTE */
            (void)Rte_Write_DigTqSnsrBStHlth_Val(OutpStHlthVal_Cnt_T_u08);         
        break; 
        default:
            /* Digital Torque Independent Signal */
            (void)Rte_Read_HwTqIdptSig_Val(&HwTqIdptSig_Cnt_T_u08);
            
            if(HwTqIdptSig_Cnt_T_u08 == HWTQIDPTSIG_CNT_U08)
            {
               OutpStHlthVal_Cnt_T_u08 = HLTH100PERC_CNT_U08;
            }
            else
            {               
               OutpStHlthVal_Cnt_T_u08 = (Rte_Prm_StHlthSigNormnIdptSigStHlthSca_Val())* HwTqIdptSig_Cnt_T_u08;
            }        
            /* Limit the output */
            OutpStHlthVal_Cnt_T_u08 = Lim_u08(OutpStHlthVal_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);
            /* Retain the State Health Value in PIM */
            *Rte_Pim_DigTqIdptSigStHlthSts() = OutpStHlthVal_Cnt_T_u08;
            /* Write to RTE */            
            (void)Rte_Write_DigTqIdptSigStHlth_Val(OutpStHlthVal_Cnt_T_u08);        
           
        break;
    }        
    /* Set NTC if any of the State of Health value falls below threshold value*/
    if(((*Rte_Pim_DigTqSnsrAStHlthSts())   < Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val()) ||
       ((*Rte_Pim_DigTqSnsrBStHlthSts())   < Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val()) ||
       ((*Rte_Pim_DigTqIdptSigStHlthSts()) < Rte_Prm_StHlthSigNormnDigTqStHlthDiagThd_Val()))
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D0, 0U, NTCSTS_FAILD,0U);        
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D0, 0U, NTCSTS_PASSD,0U);               
    }    
}

 /******************************************************************************
  * Name:        DutyCycExcddStHlthCalc
  * Description: Implements State of Health normalization logic for Duty cycle
  *              Exceeded
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) DutyCycExcddStHlthCalc(void)
{    
    VAR(uint16, AUTOMATIC)    DutyCycThermProtnMaxOutp_Uls_T_u16 = 0U;  
    VAR(uint8, AUTOMATIC)     DutyCycStHlth_Cnt_T_u08;   
        
    /* Read Input signal */    
    (void)Rte_Read_DutyCycThermProtnMaxOutp_Val(&DutyCycThermProtnMaxOutp_Uls_T_u16);
    /* Calculate State of Health Value */
    if(DutyCycThermProtnMaxOutp_Uls_T_u16 >= Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val())
    {
        DutyCycStHlth_Cnt_T_u08 = HLTH0PERC_CNT_U08;
    }
    else if(DutyCycThermProtnMaxOutp_Uls_T_u16 >= Rte_Prm_StHlthSigNormnDutyCycFltLimThd_Val())
    {
        DutyCycStHlth_Cnt_T_u08 = HLTH50PERC_CNT_U08;
    }
    else
    {
        DutyCycStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;        
    }
    /* Limit the output */
    DutyCycStHlth_Cnt_T_u08 = Lim_u08(DutyCycStHlth_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);
    /* Write to RTE */
    (void)Rte_Write_DutyCycStHlth_Val(DutyCycStHlth_Cnt_T_u08);
    
}
 /******************************************************************************
  * Name:        EotImpctCntrStHlthCalc
  * Description: Implements State of Health normalization logic for EOT Impact
  *              Counter
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) EotImpctCntrStHlthCalc(void)
{
    VAR(float32, AUTOMATIC)  HwAg_HwDeg_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC)  HwAgEotCcw_HwDeg_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC)  HwAgEotCw_HwDeg_T_f32 = 0.0F; 
    VAR(float32, AUTOMATIC)  HwAuthy_Uls_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC)  MotVelCrf_MotRadPerSec_T_f32 = 0.0F;   
    VAR(boolean, AUTOMATIC)  RackLimrEotSig0Avl_Uls_T_lgc = FALSE; 
    VAR(boolean, AUTOMATIC)  RackLimrEotSig1Avl_Uls_T_lgc = FALSE;   
    VAR(uint8, AUTOMATIC)    EotImpctStHlth_Cnt_T_u08;
    
    /* Read Inputs */
    (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
    (void)Rte_Read_HwAgEotCcw_Val(&HwAgEotCcw_HwDeg_T_f32);
    (void)Rte_Read_HwAgEotCw_Val(&HwAgEotCw_HwDeg_T_f32);
    (void)Rte_Read_HwAuthy_Val(&HwAuthy_Uls_T_f32);
    (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
    (void)Rte_Read_RackLimrEotSig0Avl_Logl(&RackLimrEotSig0Avl_Uls_T_lgc);
    (void)Rte_Read_RackLimrEotSig1Avl_Logl(&RackLimrEotSig1Avl_Uls_T_lgc);   
    
    /* Check Hand-wheel Authority */
    if(HwAuthy_Uls_T_f32 > Rte_Prm_EotLrngAuthyStrtLrn_Val())
    {        
        /* Check if hand-wheel angle value is greater than or equal to 0 */
        if(HwAg_HwDeg_T_f32 >= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
        {            
            if( (RackLimrEotSig1Avl_Uls_T_lgc == TRUE) &&
                (HwAg_HwDeg_T_f32 >=(HwAgEotCw_HwDeg_T_f32 - Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val())))
            {
                if(MotVelCrf_MotRadPerSec_T_f32 > Rte_Prm_StHlthSigNormnMotVelCal_Val())
                {
                    
                    if(*Rte_Pim_EntrEot() == FALSE)
                    {
                        *Rte_Pim_EntrEot() = TRUE;
                        
                        if(*Rte_Pim_EotImpctCntr() > 0U)
                        {
                            *Rte_Pim_EotImpctCntr() = (*Rte_Pim_EotImpctCntr()) - 1U;
                        }
                    }
                }
            }
            else
            {
                *Rte_Pim_EntrEot() = FALSE;
            }        
        } 
        else
        {
            if( (RackLimrEotSig0Avl_Uls_T_lgc == TRUE) &&
                (HwAg_HwDeg_T_f32 <=(HwAgEotCcw_HwDeg_T_f32 + Rte_Prm_StHlthSigNormnMinRackTrvlLim_Val())))
            {
                if(MotVelCrf_MotRadPerSec_T_f32 < (-Rte_Prm_StHlthSigNormnMotVelCal_Val()))
                {
                    if(*Rte_Pim_EntrEot() == FALSE)
                    {
                        *Rte_Pim_EntrEot() = TRUE;
                        
                        if(*Rte_Pim_EotImpctCntr() > 0U)
                        {
                            *Rte_Pim_EotImpctCntr() = (*Rte_Pim_EotImpctCntr()) - 1U;
                        }
                    }
                }
            }
            else
            {
                *Rte_Pim_EntrEot() = FALSE;
            }   
        }

    }
    else
    {
        *Rte_Pim_EntrEot() = FALSE;
    }
    EotImpctStHlth_Cnt_T_u08 = *Rte_Pim_EotImpctCntr();    
    /* Limit the output */
    EotImpctStHlth_Cnt_T_u08 = Lim_u08(EotImpctStHlth_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);
    /* Write to output */
    (void) Rte_Write_EotImpctStHlth_Val(EotImpctStHlth_Cnt_T_u08);  
}

 /******************************************************************************
  * Name:        MotPosnStHlthCalc
  * Description: Implements State of Health normalization logic for Motor Position
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) MotPosnStHlthCalc(void)
{
    VAR(float32, AUTOMATIC)  VltgSqd_VoltSqd_T_f32  = 0.0F; 
    VAR(float32, AUTOMATIC)  DenomDifVal_VoltSqd_T_f32;      
    VAR(float32, AUTOMATIC)  NumerDifVal_VoltSqd_T_f32;       
    VAR(uint8, AUTOMATIC)    MotPosStHlth_Cnt_T_u08;    
    
    /* Read Input */
    (void)Rte_Read_MotAg2VltgSqd_Val(&VltgSqd_VoltSqd_T_f32);
    
    if( ( VltgSqd_VoltSqd_T_f32 <= Rte_Prm_StHlthSigNormnValMinStHlthErr_Val()) || 
        ( VltgSqd_VoltSqd_T_f32 >= Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val()))
    {
        if((VltgSqd_VoltSqd_T_f32 <= MOTAG2MEAS_VALMINERR_VOLTSQD_F32) ||
            ( VltgSqd_VoltSqd_T_f32 >= MOTAG2MEAS_VALMAXERR_VOLTSQD_F32))
        {
            MotPosStHlth_Cnt_T_u08 = HLTH0PERC_CNT_U08;
        }
        else if( VltgSqd_VoltSqd_T_f32 < Rte_Prm_StHlthSigNormnValMinStHlthErr_Val())
        {
            NumerDifVal_VoltSqd_T_f32 = VltgSqd_VoltSqd_T_f32 - MOTAG2MEAS_VALMINERR_VOLTSQD_F32;
            
            DenomDifVal_VoltSqd_T_f32 = Rte_Prm_StHlthSigNormnValMinStHlthErr_Val() - MOTAG2MEAS_VALMINERR_VOLTSQD_F32;

            if(DenomDifVal_VoltSqd_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
            {
                DenomDifVal_VoltSqd_T_f32 = MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32;
            } 
            
            MotPosStHlth_Cnt_T_u08 = (uint8)(
            FloatToFixd_u16_f32(
            Lim_f32((((NumerDifVal_VoltSqd_T_f32/ DenomDifVal_VoltSqd_T_f32))* (STHLTHSCAGFAC_CNT_F32)),STHLTHFLOATZEROVAL_ULS_F32,STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32),
            NXTRFIXDPT_FLOATTOP0_ULS_F32
            )
            );
            
        }
        else
        {
            NumerDifVal_VoltSqd_T_f32 = MOTAG2MEAS_VALMAXERR_VOLTSQD_F32 - VltgSqd_VoltSqd_T_f32;         
            
            DenomDifVal_VoltSqd_T_f32 = MOTAG2MEAS_VALMAXERR_VOLTSQD_F32 - Rte_Prm_StHlthSigNormnValMaxStHlthErr_Val();

            if(DenomDifVal_VoltSqd_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
            {
                DenomDifVal_VoltSqd_T_f32 = MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32;
            }         
           
            MotPosStHlth_Cnt_T_u08 = (uint8)(
            FloatToFixd_u16_f32(
            Lim_f32((((NumerDifVal_VoltSqd_T_f32/ DenomDifVal_VoltSqd_T_f32))* (STHLTHSCAGFAC_CNT_F32)),STHLTHFLOATZEROVAL_ULS_F32,STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32),
            NXTRFIXDPT_FLOATTOP0_ULS_F32
            )
            );     
           
        }
    }
    else
    {
        MotPosStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;
    }
    
    /* Limit the output */    
    MotPosStHlth_Cnt_T_u08 = Lim_u08(MotPosStHlth_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);
  
    /* Set NTC if State of Health value falls below threshold value*/  
    if(MotPosStHlth_Cnt_T_u08 < Rte_Prm_StHlthSigNormnMotPosStHlthDiagThd_Val())
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D1, 0U, NTCSTS_FAILD,0U);        
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D1, 0U, NTCSTS_PASSD,0U);               
    }    
    
    /* Write to RTE Port */
    (void)Rte_Write_MotPosStHlth_Val(MotPosStHlth_Cnt_T_u08);    
    
}
 /******************************************************************************
  * Name:        MotPosnErrStHlthCalc
  * Description: Implements State of Health normalization logic for Motor position
  *              Error
  * Inputs:      SigId_Arg - Phase ID.
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) MotPosnErrStHlthCalc(StHlthMonSig3 SigId_Arg)
{
    VAR(uint16, AUTOMATIC)  MotAgXxErrTerm_MotRev_T_u0p16  = 0U; 
    VAR(uint16, AUTOMATIC)  DenomDifVal_MotRev_T_u0p16;      
    VAR(uint16, AUTOMATIC)  NumerDifVal_MotRev_T_u0p16;   
    VAR(uint8, AUTOMATIC)   AbsltMotPosXxDifStHlth_Cnt_T_u08;
    
    /* Read input for the given channel */
    switch(SigId_Arg)
    {
        case STHLTHMONSIG_MOTPOSABDIFF:        
            (void)Rte_Read_MotAgABErrTerm_Val(&MotAgXxErrTerm_MotRev_T_u0p16);            
        break;
        case STHLTHMONSIG_MOTPOSACDIFF:   
            (void)Rte_Read_MotAgACErrTerm_Val(&MotAgXxErrTerm_MotRev_T_u0p16);
        break;
        default:        
            (void)Rte_Read_MotAgBCErrTerm_Val(&MotAgXxErrTerm_MotRev_T_u0p16);
        break;
    }       
    
    /* State of Health Calculation */
    if(MotAgXxErrTerm_MotRev_T_u0p16 > Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val())
    {
        if(MotAgXxErrTerm_MotRev_T_u0p16 >= *Rte_Pim_MotAgCorrlnErrThd())
        {
            AbsltMotPosXxDifStHlth_Cnt_T_u08 = HLTH0PERC_CNT_U08;
        }
        else
        {
            NumerDifVal_MotRev_T_u0p16 = (*Rte_Pim_MotAgCorrlnErrThd()) - MotAgXxErrTerm_MotRev_T_u0p16;                
            /* Divide-by-Zero Error protection */                
            DenomDifVal_MotRev_T_u0p16 = (*Rte_Pim_MotAgCorrlnErrThd())  - Rte_Prm_StHlthSigNormnStHlthCorrlnErr_Val();
            
            if(DenomDifVal_MotRev_T_u0p16 <= MOTPOSNERRZEROTHD_MOTREV_U0P16)
            {
                DenomDifVal_MotRev_T_u0p16 = MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16;
            }
            AbsltMotPosXxDifStHlth_Cnt_T_u08 = (uint8)(FloatToFixd_u16_f32(Lim_f32(((((FixdToFloat_f32_u16(NumerDifVal_MotRev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32) / FixdToFloat_f32_u16(DenomDifVal_MotRev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32))))* (STHLTHSCAGFAC_CNT_F32)),STHLTHFLOATZEROVAL_ULS_F32,STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32), NXTRFIXDPT_FLOATTOP0_ULS_F32));              
            /*AbsltMotPosXxDifStHlth_Cnt_T_u08 = (uint8)(((float32)((NumerDifVal_MotRev_T_u0p16 / DenomDifVal_MotRev_T_u0p16)))* (STHLTHSCAGFAC_CNT_F32));     */          
        }            
    }
    else
    {
        AbsltMotPosXxDifStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;  
    }
    
    /* Output limiting */
    AbsltMotPosXxDifStHlth_Cnt_T_u08 = Lim_u08(AbsltMotPosXxDifStHlth_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);  

    /* Write to RTE */
    switch(SigId_Arg)
    {
        case STHLTHMONSIG_MOTPOSABDIFF: 
            *Rte_Pim_AbsltMotPosABDifStHlthSts() = AbsltMotPosXxDifStHlth_Cnt_T_u08;
            (void)Rte_Write_AbsltMotPosABDifStHlth_Val(AbsltMotPosXxDifStHlth_Cnt_T_u08);            
        break;
        case STHLTHMONSIG_MOTPOSACDIFF:   
            *Rte_Pim_AbsltMotPosACDifStHlthSts() = AbsltMotPosXxDifStHlth_Cnt_T_u08;
            (void)Rte_Write_AbsltMotPosACDifStHlth_Val(AbsltMotPosXxDifStHlth_Cnt_T_u08); 
        break;

        default:
            *Rte_Pim_AbsltMotPosBCDifStHlthSts() = AbsltMotPosXxDifStHlth_Cnt_T_u08;
            (void)Rte_Write_AbsltMotPosBCDifStHlth_Val(AbsltMotPosXxDifStHlth_Cnt_T_u08); 
        break;      
    }   
    
    /* Setting NTC */
    if(((*Rte_Pim_AbsltMotPosABDifStHlthSts())  <  Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val()) || 
       ((*Rte_Pim_AbsltMotPosACDifStHlthSts())  <  Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val()) || 
       ((*Rte_Pim_AbsltMotPosBCDifStHlthSts())  <  Rte_Prm_StHlthSigNormnAbsltMotPosDifStHlthDiagThd_Val()))
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D2, 0U, NTCSTS_FAILD,0U);        
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D2, 0U, NTCSTS_PASSD,0U);               
    }      
    
}
 /******************************************************************************
  * Name:        CurrMotSumStHlthCalc
  * Description: Implements State of Health normalization logic for Current Motor
  *              sum
  * Inputs:      SigId_Arg - Phase ID.
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) CurrMotSumStHlthCalc(StHlthMonSig3 SigId_Arg)
{
    VAR(float32, AUTOMATIC)  CurrMotSumXxx_Ampr_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC)  DenomDifVal_Ampr_T_f32;
    VAR(float32, AUTOMATIC)  NumerDifVal_Ampr_T_f32;
    VAR(uint8, AUTOMATIC)    CurrMotSumXxxStHlth_Cnt_T_u08;
    
    /* Read input */
    switch(SigId_Arg)
    {
        case STHLTHMONSIG_CURRMOTSUMABC:
            (void)Rte_Read_CurrMotSumABC_Val(&CurrMotSumXxx_Ampr_T_f32);            
        break;
        default:
            (void)Rte_Read_CurrMotSumDEF_Val(&CurrMotSumXxx_Ampr_T_f32);            
        break;
    }
    /* Calculate State of Health */        
    if( CurrMotSumXxx_Ampr_T_f32 > Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val())
    {
        if( CurrMotSumXxx_Ampr_T_f32 >= Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val())
        {
            CurrMotSumXxxStHlth_Cnt_T_u08 = HLTH0PERC_CNT_U08;
        }
        else
        {
            NumerDifVal_Ampr_T_f32 = Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val() - CurrMotSumXxx_Ampr_T_f32;
            
            /* Divide-by-zero error protection */
            
            DenomDifVal_Ampr_T_f32 = Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val() - Rte_Prm_StHlthSigNormnStHlthCurrMotSum_Val();
            
            if(DenomDifVal_Ampr_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
            {
                DenomDifVal_Ampr_T_f32 = CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32;                        
            }
            
            CurrMotSumXxxStHlth_Cnt_T_u08 = (uint8)(FloatToFixd_u16_f32(Lim_f32(((NumerDifVal_Ampr_T_f32/DenomDifVal_Ampr_T_f32)*(STHLTHSCAGFAC_CNT_F32)),STHLTHFLOATZEROVAL_ULS_F32,STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32), NXTRFIXDPT_FLOATTOP0_ULS_F32));
        }                
    }
    else
    {
        CurrMotSumXxxStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;
    }
    /* Output limiting */
    CurrMotSumXxxStHlth_Cnt_T_u08 = Lim_u08(CurrMotSumXxxStHlth_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);  
    
    /* Write to RTE */
    switch(SigId_Arg)
    {
        case STHLTHMONSIG_CURRMOTSUMABC:
            *Rte_Pim_CurrMotSumABCStHlthSts() = CurrMotSumXxxStHlth_Cnt_T_u08;
            (void)Rte_Write_CurrMotSumABCStHlth_Val(CurrMotSumXxxStHlth_Cnt_T_u08);
            
        break;
        default:
            *Rte_Pim_CurrMotSumDEFStHlthSts() = CurrMotSumXxxStHlth_Cnt_T_u08;
            (void)Rte_Write_CurrMotSumDEFStHlth_Val(CurrMotSumXxxStHlth_Cnt_T_u08);        
        break;
    }    
   
    /* Setting NTC */    
    if(((*Rte_Pim_CurrMotSumABCStHlthSts()) <  Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val())||
       ((*Rte_Pim_CurrMotSumDEFStHlthSts()) <  Rte_Prm_StHlthSigNormnCurrMotSumStHlthDiagThd_Val()))
        
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D3, 0U, NTCSTS_FAILD,0U);        
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D3, 0U, NTCSTS_PASSD,0U);               
    }      
}

 /******************************************************************************
  * Name:        PhaVltgStHlthCalc
  * Description: Implements State of Health normalization logic for Phase Voltage 
  *              Verification
  * Inputs:      SigId_Arg - Phase ID.
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) PhaVltgStHlthCalc(StHlthMonSig3 SigId_Arg)
{
    VAR(float32, AUTOMATIC)  MotDrvErrX_NanoSec_T_f32 = 0.0F;

    VAR(uint8, AUTOMATIC)    PhaXStHlth_Cnt_T_u08;
    
    /* Read input */
    switch(SigId_Arg)
    {    
        case STHLTHMONSIG_MOTPOSPHASEA:
            (void)Rte_Read_MotDrvErrA_Val(&MotDrvErrX_NanoSec_T_f32);        
        break;
        case STHLTHMONSIG_MOTPOSPHASEB:
            (void)Rte_Read_MotDrvErrB_Val(&MotDrvErrX_NanoSec_T_f32);
        break;
        case STHLTHMONSIG_MOTPOSPHASEC:
            (void)Rte_Read_MotDrvErrC_Val(&MotDrvErrX_NanoSec_T_f32);
        break;
        case STHLTHMONSIG_MOTPOSPHASED:
            (void)Rte_Read_MotDrvErrD_Val(&MotDrvErrX_NanoSec_T_f32);
        break;
        case STHLTHMONSIG_MOTPOSPHASEE:
            (void)Rte_Read_MotDrvErrE_Val(&MotDrvErrX_NanoSec_T_f32);
        break;
        default:
            (void)Rte_Read_MotDrvErrF_Val(&MotDrvErrX_NanoSec_T_f32);
        break;
    }
    /* Calculate State of Health */
    PhaXStHlth_Cnt_T_u08 = PhaVltgCalcStHlth(MotDrvErrX_NanoSec_T_f32);
            
    /* Write to RTE */
    switch(SigId_Arg)
    {    
        case STHLTHMONSIG_MOTPOSPHASEA:
            *Rte_Pim_PhaAStHlthSts() = PhaXStHlth_Cnt_T_u08;
            (void)Rte_Write_PhaAStHlth_Val(PhaXStHlth_Cnt_T_u08);       
        break;
        case STHLTHMONSIG_MOTPOSPHASEB:
            *Rte_Pim_PhaBStHlthSts() = PhaXStHlth_Cnt_T_u08;
            (void)Rte_Write_PhaBStHlth_Val(PhaXStHlth_Cnt_T_u08);          
        break;
        case STHLTHMONSIG_MOTPOSPHASEC:
            *Rte_Pim_PhaCStHlthSts() = PhaXStHlth_Cnt_T_u08;
            (void)Rte_Write_PhaCStHlth_Val(PhaXStHlth_Cnt_T_u08);  
        break;
        case STHLTHMONSIG_MOTPOSPHASED:
            *Rte_Pim_PhaDStHlthSts() = PhaXStHlth_Cnt_T_u08;
            (void)Rte_Write_PhaDStHlth_Val(PhaXStHlth_Cnt_T_u08);          
        break;
        case STHLTHMONSIG_MOTPOSPHASEE:
            *Rte_Pim_PhaEStHlthSts() = PhaXStHlth_Cnt_T_u08;
            (void)Rte_Write_PhaEStHlth_Val(PhaXStHlth_Cnt_T_u08);          
        break;
        default:
            *Rte_Pim_PhaFStHlthSts() = PhaXStHlth_Cnt_T_u08;
            (void)Rte_Write_PhaFStHlth_Val(PhaXStHlth_Cnt_T_u08);          
        break;
    }
    /* Set NTC */    
    if(((*Rte_Pim_PhaAStHlthSts()) < Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val()) ||
    ((*Rte_Pim_PhaBStHlthSts()) < Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val()) ||
    ((*Rte_Pim_PhaCStHlthSts()) < Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val()) ||
    ((*Rte_Pim_PhaDStHlthSts()) < Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val()) ||
    ((*Rte_Pim_PhaEStHlthSts()) < Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val()) ||
    ((*Rte_Pim_PhaFStHlthSts()) < Rte_Prm_StHlthSigNormnPhaInfoStHlthDiagThd_Val()))
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D4, 0U, NTCSTS_FAILD,0U);        
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1D4, 0U, NTCSTS_PASSD,0U);               
    }    
}

 /******************************************************************************
  * Name:        PhaVltgCalcStHlth
  * Description: Calculates state of health for Phase voltage
  * Inputs:      MotDrvErrX_NanoSec_T_f32 - Motor Driver Error for given phase
  * Outputs:     PhaXStHlth_Cnt_T_u08 - State of Health value
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(uint8, StHlthSigNormn_CODE) PhaVltgCalcStHlth(float32 MotDrvErrX_NanoSec_T_f32)
{
    VAR(float32, AUTOMATIC)  NumerDifVal_NanoSec_T_f32;
    VAR(float32, AUTOMATIC)  DenomDifVal_NanoSec_T_f32;        
    VAR(uint8, AUTOMATIC)    PhaXStHlth_Cnt_T_u08;
    /* Calculate State Of Health */
    if(MotDrvErrX_NanoSec_T_f32 > Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val())
    {
        if(MotDrvErrX_NanoSec_T_f32 >= ((float32)Rte_Prm_MotDrvDiagcErrThd_Val()))
        {
            PhaXStHlth_Cnt_T_u08 = HLTH0PERC_CNT_U08;
        }
        else
        {
            NumerDifVal_NanoSec_T_f32 = ((float32)(Rte_Prm_MotDrvDiagcErrThd_Val())) - MotDrvErrX_NanoSec_T_f32;       

            DenomDifVal_NanoSec_T_f32 = ((float32)Rte_Prm_MotDrvDiagcErrThd_Val()) - Rte_Prm_StHlthSigNormnStHlthPhaInfo_Val();
            
            /* Divide-by-zero error protection */                    
            if(DenomDifVal_NanoSec_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
            {
                DenomDifVal_NanoSec_T_f32 = PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32;
            }
            
            PhaXStHlth_Cnt_T_u08 = (uint8)(FloatToFixd_u16_f32(Lim_f32((((NumerDifVal_NanoSec_T_f32/DenomDifVal_NanoSec_T_f32))*(STHLTHSCAGFAC_CNT_F32)),STHLTHFLOATZEROVAL_ULS_F32,STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32),NXTRFIXDPT_FLOATTOP0_ULS_F32));
            
        }
    }
    else
    {
        PhaXStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;
    }
    
    /* Output limiting */
    PhaXStHlth_Cnt_T_u08 = Lim_u08(PhaXStHlth_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);  
    
    return(PhaXStHlth_Cnt_T_u08);
}

 /******************************************************************************
  * Name:        RamEccSngBitCorrnStHlthCalc
  * Description: Implements State of Health normalization logic for RAM ECC Single 
  *              bit Correction  
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) RamEccSngBitCorrnStHlthCalc(void)
{
    VAR(uint8, AUTOMATIC)   LclRamEccSngBitCntrOutp_Cnt_T_u08; 
    VAR(uint8, AUTOMATIC)   RamEccSngBitCorrnStHlth_Cnt_T_u08; 
    
    /* Read input */
    (void)Rte_Read_LclRamEccSngBitCntrOutp_Val(&LclRamEccSngBitCntrOutp_Cnt_T_u08);   
    /* Calculate State of Health */
    RamEccSngBitCorrnStHlth_Cnt_T_u08 =  HLTH100PERC_CNT_U08 - LclRamEccSngBitCntrOutp_Cnt_T_u08;
    /* Limit output */
    RamEccSngBitCorrnStHlth_Cnt_T_u08 = Lim_u08(RamEccSngBitCorrnStHlth_Cnt_T_u08,HLTH0PERC_CNT_U08,HLTH100PERC_CNT_U08);
    /* Write to RTE */
    (void)Rte_Write_RamEccSngBitCorrnStHlth_Val(RamEccSngBitCorrnStHlth_Cnt_T_u08);
}
 /******************************************************************************
  * Name:        FricEstimnStHlthCalc
  * Description: Implements State of Health normalization logic for Friction  
  *              Estimation
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE)  FricEstimnStHlthCalc(void)
{
    VAR(float32, AUTOMATIC)  MaxLrndFric_HwNwtMtr_T_f32; 
    VAR(float32, AUTOMATIC)  AbsMaxLrndFricDiff_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC)  FricEstDelta_HwNwtMtr_T_f32; 
    VAR(float32, AUTOMATIC)  FricEstimnStHlth_Cnt_T_f32; 
    VAR(uint8, AUTOMATIC)  FricEstimnStHlth_Cnt_T_u08; 

    (void)Rte_Read_MaxLrndFric_Val(&MaxLrndFric_HwNwtMtr_T_f32);
    
    if(MaxLrndFric_HwNwtMtr_T_f32 <= Rte_Prm_StHlthSigNormnMaxFricThd_Val())
    {        
        AbsMaxLrndFricDiff_HwNwtMtr_T_f32 = Abslt_f32_f32(MaxLrndFric_HwNwtMtr_T_f32 - Rte_IrvRead_UpdRawSig_Oper_EolFric());
        FricEstDelta_HwNwtMtr_T_f32 = Rte_Prm_StHlthSigNormnMaxFricThd_Val() - Rte_IrvRead_UpdRawSig_Oper_EolFric();
        
        /* Divide-by-zero protection */        
        if(FricEstDelta_HwNwtMtr_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32 )
        {
            FricEstDelta_HwNwtMtr_T_f32 = FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32;
        }
        /* Calculating Friction Estimation State of Health */
        FricEstimnStHlth_Cnt_T_f32 = (1.0F - (AbsMaxLrndFricDiff_HwNwtMtr_T_f32/FricEstDelta_HwNwtMtr_T_f32))*(HLTH100PERC_CNT_F32);
        /* Limit the float value within 0 to 100 */
        FricEstimnStHlth_Cnt_T_f32 = Lim_f32(FricEstimnStHlth_Cnt_T_f32, FRICESTSTHLTHLOLI_CNT_F32,FRICESTSTHLTHHILI_CNT_F32);
        /* Convert float to uint8 */
        FricEstimnStHlth_Cnt_T_u08 = (uint8)FloatToFixd_u16_f32(FricEstimnStHlth_Cnt_T_f32,NXTRFIXDPT_FLOATTOP0_ULS_F32);
      
    }
    else
    {
        FricEstimnStHlth_Cnt_T_u08 = HLTH0PERC_CNT_U08;
        
    }
   
    (void)Rte_Write_FricEstimnStHlth_Val(FricEstimnStHlth_Cnt_T_u08);
    
}
 /******************************************************************************
  * Name:        WhlImbRejctnStHlthCalc
  * Description: Implements State of Health normalization logic for Wheel  
  *              Imbalance Rejection
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigNormn_CODE) WhlImbRejctnStHlthCalc(void)
{
    VAR(float32, AUTOMATIC)  WhlImbRejctnCmd_MotNwtMtr_T_f32; 
    VAR(uint8, AUTOMATIC)  WhlImbMaxCmpStHlth_Cnt_T_u08; 
    
    (void)Rte_Read_WhlImbRejctnCmd_Val(&WhlImbRejctnCmd_MotNwtMtr_T_f32);
    
    if(Abslt_f32_f32(WhlImbRejctnCmd_MotNwtMtr_T_f32) >= Rte_Prm_StHlthSigNormnWhlImbRejctnThd_Val())
    {
        WhlImbMaxCmpStHlth_Cnt_T_u08 = HLTH0PERC_CNT_U08;
    }
    else
    {
        WhlImbMaxCmpStHlth_Cnt_T_u08 = HLTH100PERC_CNT_U08;
    }
    WhlImbMaxCmpStHlth_Cnt_T_u08 = Lim_u08(WhlImbMaxCmpStHlth_Cnt_T_u08, WHLIMBMAXCMPSTHLTHLOLI_CNT_U08,WHLIMBMAXCMPSTHLTHHILI_CNT_U08);
    
    (void)Rte_Write_WhlImbMaxCmpStHlth_Val(WhlImbMaxCmpStHlth_Cnt_T_u08);    
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
