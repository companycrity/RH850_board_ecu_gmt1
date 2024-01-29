/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PwrLimr.c
 *     SW-C Type:  PwrLimr
 *  Generated at:  Sun Aug 16 13:09:55 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <PwrLimr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : PwrLimr.c
* Module Description: Implementation of Power Limiter - Current Mode -- SF019B
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       mzjphh %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 08/11/15   1       NS        Initial version                                                                EA4#670
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

  s11p4
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  u11p5
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u4p12
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u5p11
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_PwrLimr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ArchGlbPrm.h"
#include "ElecGlbPrm.h"
#include "NxtrFil.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "SysGlbPrm.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
type for code readability and to allow use of "sizeof". */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PWRLIMRTOMILLISECFACTOR_ULS_U08         10U
#define PWRLIMRTQLIMHILIM_ULS_F32               (1.0F)
#define PWRLIMRTQLIMLOLIM_ULS_F32               (0.0F)
#define MAXNRIVTRS_CNT_U08                      2U

#define PrmPwrLimrMotEnvlpX_s11p4           (*(const Ary1D_s11p4_14 *) Rte_Prm_PwrLimrMotEnvlpX_Ary1D())
#define PrmPwrLimrMotEnvlpY_u5p11           (*(const Ary1D_u5p11_14 *) Rte_Prm_PwrLimrMotEnvlpY_Ary1D())
#define PrmPwrLimrStdOperMotEnvlpX_u11p5    (*(const Ary1D_u11p5_6 *) Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D())
#define PrmPwrLimrStdOperMotEnvlpY_u4p12    (*(const Ary1D_u4p12_6 *) Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D())
#define PrmPwrLimrVltgDptMotVelOffsX_u5p11  (*(const Ary1D_u5p11_10 *) Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D())
#define PrmPwrLimrVltgDptMotVelOffsY_u11p5  (*(const Ary1D_u11p5_10 *) Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D())

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
 * s11p4: Integer in interval [-32768...32767]
 * u11p5: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
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
 *
 * Array Types:
 * ============
 * Ary1D_s11p4_14: Array with 14 element(s) of type s11p4
 * Ary1D_u11p5_10: Array with 10 element(s) of type u11p5
 * Ary1D_u11p5_6: Array with 6 element(s) of type u11p5
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u5p11_10: Array with 10 element(s) of type u5p11
 * Ary1D_u5p11_14: Array with 14 element(s) of type u5p11
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BrdgVltgAdjSlewStVari(void)
 *   float32 *Rte_Pim_PrevBrdgVltgAltFltAdjLim(void)
 *   float32 *Rte_Pim_PrevSpdAdj(void)
 *   float32 *Rte_Pim_SpdAdjSlewStVari(void)
 *   float32 *Rte_Pim_dPwrLimrFildMotVel(void)
 *   float32 *Rte_Pim_dPwrLimrLimDif(void)
 *   float32 *Rte_Pim_dPwrLimrMinStdOperLim(void)
 *   float32 *Rte_Pim_dPwrLimrMotEnvlpSpd(void)
 *   float32 *Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca(void)
 *   float32 *Rte_Pim_dPwrLimrOutpVelOffs(void)
 *   float32 *Rte_Pim_dPwrLimrSpdAdj(void)
 *   float32 *Rte_Pim_dPwrLimrTLimMaxCurr(void)
 *   float32 *Rte_Pim_dPwrLimrTqEnvlpLim1(void)
 *   float32 *Rte_Pim_dPwrLimrTqEnvlpLim4(void)
 *   float32 *Rte_Pim_dPwrLimrTqLim(void)
 *   float32 *Rte_Pim_dPwrLimrTqLim1(void)
 *   float32 *Rte_Pim_dPwrLimrTqLim4(void)
 *   uint32 *Rte_Pim_FltRefTi(void)
 *   boolean *Rte_Pim_PrevThd(void)
 *   FilLpRec1 *Rte_Pim_MotVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_TqLimAssiRednLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_PwrLimrAssiRednLpFilFrq_Val(void)
 *   float32 Rte_Prm_PwrLimrBackEmfConStdT_Val(void)
 *   float32 Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val(void)
 *   float32 Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val(void)
 *   float32 Rte_Prm_PwrLimrFilAssiRednThd_Val(void)
 *   float32 Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val(void)
 *   float32 Rte_Prm_PwrLimrMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_PwrLimrSpdAdjSlewDec_Val(void)
 *   float32 Rte_Prm_PwrLimrSpdAdjSlewInc_Val(void)
 *   uint16 Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val(void)
 *   boolean Rte_Prm_PwrLimrSpdAdjSlewEna_Logl(void)
 *   s11p4 *Rte_Prm_PwrLimrMotEnvlpX_Ary1D(void)
 *   u5p11 *Rte_Prm_PwrLimrMotEnvlpY_Ary1D(void)
 *   u11p5 *Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D(void)
 *   u4p12 *Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D(void)
 *   u5p11 *Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D(void)
 *   u11p5 *Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D(void)
 *
 *********************************************************************************************************************/


#define PwrLimr_START_SEC_CODE
#include "PwrLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, PwrLimr_CODE) PwrLimrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrLimrInit1
 *********************************************************************************************************************/
    FilLpUpdGain(Rte_Prm_PwrLimrAssiRednLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_TqLimAssiRednLpFil());
    FilLpUpdGain(Rte_Prm_PwrLimrMotVelLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_MotVelLpFil());
    
    /* Initialize timer for assist limit condition determination */
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FltRefTi());
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLimrPer1
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
 *   Std_ReturnType Rte_Read_AltFltActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmdPwrLimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_PwrLimrPer1_MinStdOperLim(float32 data)
 *   void Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd(float32 data)
 *   void Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, PwrLimr_CODE) PwrLimrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrLimrPer1
 *********************************************************************************************************************/
    /* Inputs */
    VAR(boolean, AUTOMATIC) AltFltActv_Cnt_T_logl;
    VAR(float32, AUTOMATIC) BrdgVltg_Volt_T_f32;
    VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) MotBackEmfConEstimd_VoltPerMotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdMrf_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelMrf_MotRadPerSec_T_f32;
    
    /* Outputs */
    VAR(float32, AUTOMATIC) MotTqCmdPwrLimd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotEnvlpSpd_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) MinStdOperLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqEnvlpLim1_MotNwtMtr_T_f32;
    
    VAR(float32, AUTOMATIC) TLimMaxCurr_MotNwtMtr_T_f32;
    VAR(uint16, AUTOMATIC)  OutpVelOffs_MotRadPerSec_T_u11p5;
    VAR(float32, AUTOMATIC) OutpVelOffs_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) PwrLimrBrdgVltgAltFltAdj_Volt_T_f32;
    VAR(float32, AUTOMATIC) PwrLimrBrdgVltgAltFltAdjLim_Volt_T_f32;
    VAR(uint16, AUTOMATIC)  BattVltgIntrpInp_Volt_T_u5p11;
    VAR(float32, AUTOMATIC) SpdAdj_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) PwrLimrFildMotVel_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) AbsMotVelMrf_MotRadPerSec_T_f32;
    VAR(uint16, AUTOMATIC)  AbsMotVelMrf_MotRadPerSec_T_u11p5;
    VAR(uint16, AUTOMATIC)  MinStdOperLim_MotNwtMtr_T_u4p12;
    VAR(float32, AUTOMATIC) MotTqCmdIvtrLoaSca_MotNwtMtr_T_f32;
    VAR(sint8, AUTOMATIC)   SignMotEnvlpSpd_Uls_T_s08;
    VAR(float32, AUTOMATIC) AbsMotEnvlpSpd_MotRadPerSec_T_f32;
    VAR(uint16, AUTOMATIC)  AbsMotEnvlpSpd_MotRadPerSec_T_u12p4;
    VAR(float32, AUTOMATIC) TqLim1_MotNwtMtr_T_f32;
    VAR(uint16, AUTOMATIC)  TqEnvlpLim4_MotNwtMtr_T_u5p11;
    VAR(float32, AUTOMATIC) TqEnvlpLim4_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqLim4_MotNwtMtr_T_f32;
    VAR(sint32, AUTOMATIC)  Tmp1MotEnvlp_MotRadPerSec_T_s27p4;
    VAR(uint32, AUTOMATIC)  Tmp2MotEnvlp_MotRadPerSec_T_u21p11;
    VAR(sint32, AUTOMATIC)  DenMotEnvlp_MotRadPerSec_T_s27p4;
    VAR(sint32, AUTOMATIC)  TmpEnvlpLim1_MotNwtMtr_T_s20p11;
    VAR(sint32, AUTOMATIC)  TqEnvlpLim1_MotNwtMtr_T_s20p11;
    VAR(uint16, AUTOMATIC)  TqEnvlpLim1_MotNwtMtr_T_u5p11;
    VAR(float32, AUTOMATIC) Tmp1MotTq_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) Tmp2MotTq_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MRFMotTqCmdTemp_MotNwtMtr_T_f32;
    VAR(uint16, AUTOMATIC)  AbsSpdAdj_MotRadPerSec_T_u12p4;
    VAR(uint16, AUTOMATIC)  TqEnvlpLowVltgLmt_MotNwtMtr_u5p11;
    VAR(float32, AUTOMATIC) TqEnvlpLowVltgLmt_MotNwtMtr_f32;
    
    
    /*** Read inputs ***/
    (void)Rte_Read_AltFltActv_Logl(&AltFltActv_Cnt_T_logl);
    (void)Rte_Read_BrdgVltg_Val(&BrdgVltg_Volt_T_f32);
    (void)Rte_Read_IvtrLoaMtgtnEna_Logl(&IvtrLoaMtgtnEna_Cnt_T_logl);
    (void)Rte_Read_MotBackEmfConEstimd_Val(&MotBackEmfConEstimd_VoltPerMotRadPerSec_T_f32);
    (void)Rte_Read_MotTqCmdMrf_Val(&MotTqCmdMrf_MotNwtMtr_T_f32);
    (void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MotRadPerSec_T_f32);
    
    /*** Max_Mtr_Curr_Lmt_Fn ***/
    if(Rte_Prm_PwrLimrBackEmfConStdT_Val() > 0.0F)
    {
        TLimMaxCurr_MotNwtMtr_T_f32 = (MotBackEmfConEstimd_VoltPerMotRadPerSec_T_f32 * 
            FixdToFloat_f32_u16(PrmPwrLimrMotEnvlpY_u5p11[8], NXTRFIXDPT_P11TOFLOAT_ULS_F32)) / Rte_Prm_PwrLimrBackEmfConStdT_Val();
    }
    else
    {
        TLimMaxCurr_MotNwtMtr_T_f32 = 0.0F;
    }
    /*** END Max_Mtr_Curr_Lmt_Fn ***/
    
    *Rte_Pim_dPwrLimrTLimMaxCurr() = TLimMaxCurr_MotNwtMtr_T_f32;
    
    /*** Battery_Voltage_Fn ***/
    if(AltFltActv_Cnt_T_logl != FALSE)
    {
        PwrLimrBrdgVltgAltFltAdj_Volt_T_f32 = Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val();
    }
    else
    {
        PwrLimrBrdgVltgAltFltAdj_Volt_T_f32 = 0.0F;
    }
    
    PwrLimrBrdgVltgAltFltAdjLim_Volt_T_f32 = Lim_f32(PwrLimrBrdgVltgAltFltAdj_Volt_T_f32,
        (*Rte_Pim_PrevBrdgVltgAltFltAdjLim() - (Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
        (*Rte_Pim_PrevBrdgVltgAltFltAdjLim() + (Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)));
        
    *Rte_Pim_PrevBrdgVltgAltFltAdjLim() = PwrLimrBrdgVltgAltFltAdjLim_Volt_T_f32;
        
    BattVltgIntrpInp_Volt_T_u5p11 = FloatToFixd_u16_f32((BrdgVltg_Volt_T_f32 - PwrLimrBrdgVltgAltFltAdjLim_Volt_T_f32), NXTRFIXDPT_FLOATTOP11_ULS_F32);
    
    OutpVelOffs_MotRadPerSec_T_u11p5 = LnrIntrpn_u16_u16VariXu16VariY(PrmPwrLimrVltgDptMotVelOffsX_u5p11, 
                                                                      PrmPwrLimrVltgDptMotVelOffsY_u11p5, 
                                                                      (uint16)TblSize_m(PrmPwrLimrVltgDptMotVelOffsX_u5p11),
                                                                      BattVltgIntrpInp_Volt_T_u5p11);
        
    OutpVelOffs_MotRadPerSec_T_f32 = FixdToFloat_f32_u16(OutpVelOffs_MotRadPerSec_T_u11p5, NXTRFIXDPT_P5TOFLOAT_ULS_F32);
    /*** END Battery_Voltage_Fn ***/
    
    *Rte_Pim_dPwrLimrOutpVelOffs() = OutpVelOffs_MotRadPerSec_T_f32;
    
    /*** OpVel_Offset_Slew_Rate_Lmt ***/
    if(Rte_Prm_PwrLimrSpdAdjSlewEna_Logl() != FALSE)
    {
        SpdAdj_MotRadPerSec_T_f32 = Lim_f32(OutpVelOffs_MotRadPerSec_T_f32,
                                            (*Rte_Pim_PrevSpdAdj() - (Rte_Prm_PwrLimrSpdAdjSlewDec_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                            (*Rte_Pim_PrevSpdAdj() + (Rte_Prm_PwrLimrSpdAdjSlewInc_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    }
    else
    {
        SpdAdj_MotRadPerSec_T_f32 = OutpVelOffs_MotRadPerSec_T_f32;
    }
    *Rte_Pim_PrevSpdAdj() = SpdAdj_MotRadPerSec_T_f32;
    /*** END OpVel_Offset_Slew_Rate_Lmt ***/
    
    *Rte_Pim_dPwrLimrSpdAdj() = SpdAdj_MotRadPerSec_T_f32;
    
    /*** MtrVel LP Filter ***/
    PwrLimrFildMotVel_MotRadPerSec_T_f32 = FilLpUpdOutp_f32(MotVelMrf_MotRadPerSec_T_f32, Rte_Pim_MotVelLpFil());
    *Rte_Pim_dPwrLimrFildMotVel() = PwrLimrFildMotVel_MotRadPerSec_T_f32;
    
    /*** Calculate motor envelope speed ***/
    MotEnvlpSpd_MotRadPerSec_T_f32 = (SpdAdj_MotRadPerSec_T_f32 * (float32)Sign_s08_f32(PwrLimrFildMotVel_MotRadPerSec_T_f32)) + PwrLimrFildMotVel_MotRadPerSec_T_f32;
    *Rte_Pim_dPwrLimrMotEnvlpSpd() = MotEnvlpSpd_MotRadPerSec_T_f32;
    Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd(MotEnvlpSpd_MotRadPerSec_T_f32);
    
    AbsMotVelMrf_MotRadPerSec_T_f32 = Abslt_f32_f32(PwrLimrFildMotVel_MotRadPerSec_T_f32);
    AbsMotVelMrf_MotRadPerSec_T_u11p5 = FloatToFixd_u16_f32(AbsMotVelMrf_MotRadPerSec_T_f32, NXTRFIXDPT_FLOATTOP5_ULS_F32);
    
    /*** MinStdOp_Volt_Max_Net_Assist ***/
    MinStdOperLim_MotNwtMtr_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmPwrLimrStdOperMotEnvlpX_u11p5,
                                                                    PrmPwrLimrStdOperMotEnvlpY_u4p12, 
                                                                    (uint16)TblSize_m(PrmPwrLimrStdOperMotEnvlpX_u11p5),
                                                                    AbsMotVelMrf_MotRadPerSec_T_u11p5);
    /*** END MinStdOp_Volt_Max_Net_Assist ***/
    
    MinStdOperLim_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(MinStdOperLim_MotNwtMtr_T_u4p12, NXTRFIXDPT_P12TOFLOAT_ULS_F32);
    Rte_IrvWrite_PwrLimrPer1_MinStdOperLim(MinStdOperLim_MotNwtMtr_T_f32);
    *Rte_Pim_dPwrLimrMinStdOperLim() = MinStdOperLim_MotNwtMtr_T_f32;
    
    /*** TqCmd_Scl_Inverter ***/
    if((IvtrLoaMtgtnEna_Cnt_T_logl != FALSE) || (ELECGLBPRM_IVTRCNT_CNT_U08 == 1U))
    {
        MotTqCmdIvtrLoaSca_MotNwtMtr_T_f32 = MotTqCmdMrf_MotNwtMtr_T_f32 / 1.0F;
    }
    else
    {
        MotTqCmdIvtrLoaSca_MotNwtMtr_T_f32 = MotTqCmdMrf_MotNwtMtr_T_f32 / (float32)MAXNRIVTRS_CNT_U08;
    }
    /*** END TqCmd_Scl_Inverter ***/
    
    *Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca() = MotTqCmdIvtrLoaSca_MotNwtMtr_T_f32;
    
    /*** Output_Velocity_Fn ***/
    SignMotEnvlpSpd_Uls_T_s08 = Sign_s08_f32(MotEnvlpSpd_MotRadPerSec_T_f32);
    AbsMotEnvlpSpd_MotRadPerSec_T_f32 = Abslt_f32_f32(MotEnvlpSpd_MotRadPerSec_T_f32);
    AbsMotEnvlpSpd_MotRadPerSec_T_u12p4 = FloatToFixd_u16_f32(AbsMotEnvlpSpd_MotRadPerSec_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
    
    /*** TqEnvlpLim4 ***/
    TqEnvlpLim4_MotNwtMtr_T_u5p11 = LnrIntrpn_u16_s16VariXu16VariY(PrmPwrLimrMotEnvlpX_s11p4,
                                                                   PrmPwrLimrMotEnvlpY_u5p11,
                                                                   (uint16)TblSize_m(PrmPwrLimrMotEnvlpX_s11p4),
                                                                   (-1 * (sint16)(AbsMotEnvlpSpd_MotRadPerSec_T_u12p4)));
    TqEnvlpLim4_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(TqEnvlpLim4_MotNwtMtr_T_u5p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
    TqEnvlpLim4_MotNwtMtr_T_f32 = -TqEnvlpLim4_MotNwtMtr_T_f32;
    /*** END TqEnvlpLim4 ***/
    
    *Rte_Pim_dPwrLimrTqEnvlpLim4() = TqEnvlpLim4_MotNwtMtr_T_f32;
    
    /*** ChooseMax4 ***/
    TqLim4_MotNwtMtr_T_f32 = Max_f32(TqEnvlpLim4_MotNwtMtr_T_f32, -TLimMaxCurr_MotNwtMtr_T_f32);
    /*** END ChooseMax4 ***/
    
    *Rte_Pim_dPwrLimrTqLim4() = TqLim4_MotNwtMtr_T_f32;
    
    if(Abslt_u16_s16(PrmPwrLimrMotEnvlpX_s11p4[2]) >= AbsMotEnvlpSpd_MotRadPerSec_T_u12p4)
    {
        if(AbsMotEnvlpSpd_MotRadPerSec_T_u12p4 > Abslt_u16_s16(PrmPwrLimrMotEnvlpX_s11p4[13]))
        {
            /*** TqEnvlpLmt1_1 ***/
            Tmp1MotEnvlp_MotRadPerSec_T_s27p4 = (sint32)((uint32)AbsMotEnvlpSpd_MotRadPerSec_T_u12p4) - (sint32)PrmPwrLimrMotEnvlpX_s11p4[13];
            Tmp2MotEnvlp_MotRadPerSec_T_u21p11 = (uint32)PrmPwrLimrMotEnvlpY_u5p11[2] + (uint32)PrmPwrLimrMotEnvlpY_u5p11[13];
            DenMotEnvlp_MotRadPerSec_T_s27p4 = (sint32)PrmPwrLimrMotEnvlpX_s11p4[2] + (sint32)PrmPwrLimrMotEnvlpX_s11p4[13];
            TmpEnvlpLim1_MotNwtMtr_T_s20p11 = (Tmp1MotEnvlp_MotRadPerSec_T_s27p4 * (sint32)Tmp2MotEnvlp_MotRadPerSec_T_u21p11) / DenMotEnvlp_MotRadPerSec_T_s27p4;
            TqEnvlpLim1_MotNwtMtr_T_s20p11 = TmpEnvlpLim1_MotNwtMtr_T_s20p11 + (sint32)((uint32)PrmPwrLimrMotEnvlpY_u5p11[13]);
            TqEnvlpLim1_MotNwtMtr_T_f32 = FixdToFloat_f32_s32(TqEnvlpLim1_MotNwtMtr_T_s20p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
            /*** END TqEnvlpLmt1_1 ***/
        }
        else
        {
            /*** TqEnvlpLmt1_2 ***/
            TqEnvlpLim1_MotNwtMtr_T_u5p11 = LnrIntrpn_u16_s16VariXu16VariY(PrmPwrLimrMotEnvlpX_s11p4,  /* Check with Kathleen on this */
                                                                            PrmPwrLimrMotEnvlpY_u5p11,
                                                                            (uint16)TblSize_m(PrmPwrLimrMotEnvlpX_s11p4),
                                                                            (sint16)AbsMotEnvlpSpd_MotRadPerSec_T_u12p4);
            TqEnvlpLim1_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(TqEnvlpLim1_MotNwtMtr_T_u5p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
            /*** END TqEnvlpLmt1_2 ***/
        }
        
        /*** ChooseMin1_If ***/
        TqLim1_MotNwtMtr_T_f32 = Min_f32(TLimMaxCurr_MotNwtMtr_T_f32, TqEnvlpLim1_MotNwtMtr_T_f32);
        /*** END ChooseMin1_If ***/
        
        /*** Apply_Limit_If ***/
        Tmp1MotTq_MotNwtMtr_T_f32 = (float32)SignMotEnvlpSpd_Uls_T_s08 * MotTqCmdIvtrLoaSca_MotNwtMtr_T_f32;
        Tmp2MotTq_MotNwtMtr_T_f32 = Lim_f32(Tmp1MotTq_MotNwtMtr_T_f32, TqLim4_MotNwtMtr_T_f32, TqLim1_MotNwtMtr_T_f32);
        MRFMotTqCmdTemp_MotNwtMtr_T_f32 = Tmp2MotTq_MotNwtMtr_T_f32 * (float32)SignMotEnvlpSpd_Uls_T_s08;
        /*** END Apply_Limit_If ***/
    }
    else
    {
        TqEnvlpLim1_MotNwtMtr_T_f32 = TqEnvlpLim4_MotNwtMtr_T_f32;
        
        /*** ChooseMin1_Else ***/
        TqLim1_MotNwtMtr_T_f32 = Min_f32(TLimMaxCurr_MotNwtMtr_T_f32, TqEnvlpLim1_MotNwtMtr_T_f32);
        /*** END ChooseMin1_Else ***/
        
        /*** Apply_Limit_Else ***/
        MRFMotTqCmdTemp_MotNwtMtr_T_f32 = (float32)SignMotEnvlpSpd_Uls_T_s08 * TqLim1_MotNwtMtr_T_f32;
        /*** END Apply_Limit_Else ***/
    }
    
    Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1(TqEnvlpLim1_MotNwtMtr_T_f32);
    *Rte_Pim_dPwrLimrTqEnvlpLim1() = TqEnvlpLim1_MotNwtMtr_T_f32;
    
    *Rte_Pim_dPwrLimrTqLim1() = TqLim1_MotNwtMtr_T_f32;
    
    AbsSpdAdj_MotRadPerSec_T_u12p4 = FloatToFixd_u16_f32(Abslt_f32_f32(SpdAdj_MotRadPerSec_T_f32), NXTRFIXDPT_FLOATTOP4_ULS_F32); /* Ask Kathleen */
    TqEnvlpLowVltgLmt_MotNwtMtr_u5p11 = LnrIntrpn_u16_s16VariXu16VariY(PrmPwrLimrMotEnvlpX_s11p4, 
                                                                        PrmPwrLimrMotEnvlpY_u5p11,
                                                                        (uint16)TblSize_m(PrmPwrLimrMotEnvlpX_s11p4),
                                                                        (sint16)AbsSpdAdj_MotRadPerSec_T_u12p4);
    TqEnvlpLowVltgLmt_MotNwtMtr_f32 = FixdToFloat_f32_u16(TqEnvlpLowVltgLmt_MotNwtMtr_u5p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
    
    MotTqCmdPwrLimd_MotNwtMtr_T_f32 = Lim_f32(MRFMotTqCmdTemp_MotNwtMtr_T_f32, -TqEnvlpLowVltgLmt_MotNwtMtr_f32, TqEnvlpLowVltgLmt_MotNwtMtr_f32);
    MotTqCmdPwrLimd_MotNwtMtr_T_f32 = Lim_f32(MotTqCmdPwrLimd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    (void)Rte_Write_MotTqCmdPwrLimd_Val(MotTqCmdPwrLimd_MotNwtMtr_T_f32);
    /*** END Output_Velocity_Fn ***/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLimrPer2
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrLimrRednFac_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_PwrLimrPer2_MinStdOperLim(void)
 *   float32 Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd(void)
 *   float32 Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, PwrLimr_CODE) PwrLimrPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrLimrPer2
 *********************************************************************************************************************/
    /* Inputs */
    VAR(float32, AUTOMATIC) MotTqCmdMrf_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqEnvlpLim1_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MinStdOperLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotEnvlpSpd_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) BrdgVltg_Volt_T_f32;
    
    VAR(float32, AUTOMATIC) LimDif_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqLim_Cnt_T_f32;
    VAR(float32, AUTOMATIC) FildTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) FildTqDiff_Uls_T_f32;
    VAR(float32, AUTOMATIC) BrdgVltgDiff_Uls_T_f32;
    VAR(uint32, AUTOMATIC)  RcvrlTiSpan_Cnt_T_u32 = 0U;
    VAR(float32, AUTOMATIC) AbsMotEnvlpSpd1_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) TmpEnvlpSpd_MotRadPerSec_T_f32;
    VAR(sint8, AUTOMATIC)   SignMotEnvlpSpd1_Uls_T_f32;
    VAR(float32, AUTOMATIC) AbsMotTqCmdMrf_MotNwtMtr_T_f32;
    VAR(uint32, AUTOMATIC)  RcvrlTiSpan_MilliSec_T_u32;
    
    
    /*** Read inputs ***/
    (void)Rte_Read_MotTqCmdMrf_Val(&MotTqCmdMrf_MotNwtMtr_T_f32);
    TqEnvlpLim1_MotNwtMtr_T_f32 = Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1();
    MinStdOperLim_MotNwtMtr_T_f32 = Rte_IrvRead_PwrLimrPer2_MinStdOperLim();
    MotEnvlpSpd_MotRadPerSec_T_f32 = Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd();
    (void)Rte_Read_BrdgVltg_Val(&BrdgVltg_Volt_T_f32);
    
    LimDif_MotNwtMtr_T_f32 = TqEnvlpLim1_MotNwtMtr_T_f32 - MinStdOperLim_MotNwtMtr_T_f32;
    *Rte_Pim_dPwrLimrLimDif() = LimDif_MotNwtMtr_T_f32;
    
    /*** Asst_Lmt_Determination_and_Mag_Calc ***/
    if((MinStdOperLim_MotNwtMtr_T_f32 > 0.0F)  || (MinStdOperLim_MotNwtMtr_T_f32 < 0.0F))
    {
        AbsMotEnvlpSpd1_MotRadPerSec_T_f32 = Abslt_f32_f32(MotEnvlpSpd_MotRadPerSec_T_f32);
        TmpEnvlpSpd_MotRadPerSec_T_f32 = FixdToFloat_f32_s16(PrmPwrLimrMotEnvlpX_s11p4[13], NXTRFIXDPT_P4TOFLOAT_ULS_F32);
        SignMotEnvlpSpd1_Uls_T_f32 = Sign_s08_f32(MotEnvlpSpd_MotRadPerSec_T_f32);
        if((Sign_s08_f32(MotTqCmdMrf_MotNwtMtr_T_f32) == SignMotEnvlpSpd1_Uls_T_f32)
                && (AbsMotEnvlpSpd1_MotRadPerSec_T_f32 < TmpEnvlpSpd_MotRadPerSec_T_f32))
        {
            AbsMotTqCmdMrf_MotNwtMtr_T_f32 = Abslt_f32_f32(MotTqCmdMrf_MotNwtMtr_T_f32);
            if((LimDif_MotNwtMtr_T_f32 < 0.0F) && (AbsMotTqCmdMrf_MotNwtMtr_T_f32 > TqEnvlpLim1_MotNwtMtr_T_f32))
            {
                TqLim_Cnt_T_f32 = Abslt_f32_f32(LimDif_MotNwtMtr_T_f32);
            }
            else
            {
                TqLim_Cnt_T_f32 = 0.0F;
            }
        }
        else
        {
            TqLim_Cnt_T_f32 = 0.0F;
        }
    }
    else
    {
        TqLim_Cnt_T_f32 = 0.0F;
    }
    /*** END Asst_Lmt_Determination_and_Mag_Calc ***/
    
    *Rte_Pim_dPwrLimrTqLim() = TqLim_Cnt_T_f32;
    
    /*** AssiLimMgnFil ***/
    FildTqLim_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(TqLim_Cnt_T_f32, Rte_Pim_TqLimAssiRednLpFil());
    /*** END AssiLimMgnFil ***/
    
    FildTqDiff_Uls_T_f32 = FildTqLim_MotNwtMtr_T_f32 - Rte_Prm_PwrLimrFilAssiRednThd_Val();
    BrdgVltgDiff_Uls_T_f32 = BrdgVltg_Volt_T_f32 - Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val();
    
    /*** Asst_Lmt_Condition_Determination ***/
    if(FildTqDiff_Uls_T_f32 >= 0.0F)
    {
        *Rte_Pim_PrevThd() = TRUE;
    }
    else
    {
        if(BrdgVltgDiff_Uls_T_f32 >= 0.0F) /* Already know FildTqDiff is less than 0 */
        {
            /* Get elapsed time */
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FltRefTi(), &RcvrlTiSpan_Cnt_T_u32);
        }
        else
        {
            /* Reset timer */
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FltRefTi());
        }
        
        /* Convert 100 microsec time span to millisec */
        RcvrlTiSpan_MilliSec_T_u32 = RcvrlTiSpan_Cnt_T_u32 / PWRLIMRTOMILLISECFACTOR_ULS_U08;
       
        if(RcvrlTiSpan_MilliSec_T_u32 >= Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val())
        {
            *Rte_Pim_PrevThd() = FALSE;
        }
    }
    
    /* Set NTC based on previous threshold */
    if(*Rte_Pim_PrevThd() != FALSE)
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0B2, 0U, NTCSTS_FAILD, 0U);
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0B2, 0U, NTCSTS_PASSD, 0U);
    }
    
    FildTqLim_MotNwtMtr_T_f32 = Lim_f32(FildTqLim_MotNwtMtr_T_f32, PWRLIMRTQLIMLOLIM_ULS_F32, PWRLIMRTQLIMHILIM_ULS_F32);
   
    (void)Rte_Write_PwrLimrRednFac_Val(FildTqLim_MotNwtMtr_T_f32);
    /*** END Asst_Lmt_Condition_Determination ***/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PwrLimr_STOP_SEC_CODE
#include "PwrLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
