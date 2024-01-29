/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmVehSpdArbn.c
 *     SW-C Type:  GmVehSpdArbn
 *  Generated at:  Tue Mar 15 15:46:30 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmVehSpdArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GmVehSpdArbn.c
* Module Description: Implementation of Vehicle Speed Arbitration (GM) -- CF016A
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       mzjphh %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 09/02/15   1       NS        Initial version                                                                EA4#1633
* 11/12/15   2       NS        Added VehSpdSnsrVld output and additional logic to determine its value         EA4#2470
* 03/15/16   3       NS        Fixed conflict when setting VehSpdMinSecurVld and added delay before NTC diag  EA4#4285
* 05/06/16   4       NS        Updated to match model for FDD v3.0.0                                          EA4#5675
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

 *********************************************************************************************************************/

#include "Rte_GmVehSpdArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrMath.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

#define VEHSPDMAX_KPH_F32       (511.0F)
#define VEHSPDMIN_KPH_F32       (0.0F)
#define DIAGCSTRTUPDLY_CNT_U32  (5000U)

/******************************************** Local Function Prototypes **********************************************/
static FUNC(boolean, GmVehSpdArbn_CODE) DetVld(boolean VldSig1_Cnt_T_logl,
                                               boolean VldSig2_Cnt_T_logl,
                                               boolean StuckSig1_Cnt_T_logl,
                                               boolean StuckSig2_Cnt_T_logl
                                               );
                                                
static FUNC(boolean, GmVehSpdArbn_CODE) DetInvld(boolean VldSig1_Cnt_T_logl,
                                                 boolean VldSig2_Cnt_T_logl,
                                                 boolean VldSig3_Cnt_T_logl,
                                                 boolean VldSig4_Cnt_T_logl);
                                                 
static FUNC(void, GmVehSpdArbn_CODE)    UpdtAvg(boolean VldSig_Cnt_T_logl,
                                                float32 VelSig_Kph_T_f32,
                                                P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) AvgSum_Kph_T_f32,
                                                P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) AvgCnt_Cnt_T_f32);
                                                
static FUNC(void, GmVehSpdArbn_CODE)    CondMax(boolean VldSig_Cnt_T_logl,
                                                float32 VelSig1_Kph_T_f32,
                                                float32 VelSig2_Kph_T_f32,
                                                P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) MaxVel_Kph_T_f32);
                                                
static FUNC(void, GmVehSpdArbn_CODE)    CondMin(boolean VldSig_Cnt_T_logl,
                                                float32 VelSig1_Kph_T_f32,
                                                float32 VelSig2_Kph_T_f32,
                                                P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) MinVel_Kph_T_f32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
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
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_DiagcRefTi(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnLeDrvnVld(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnLeNonDrvnVld(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnRiDrvnVld(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnRiNonDrvnVld(void)
 *
 *********************************************************************************************************************/


#define GmVehSpdArbn_START_SEC_CODE
#include "GmVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehSpdArbnInit1
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

FUNC(void, GmVehSpdArbn_CODE) GmVehSpdArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehSpdArbnInit1
 *********************************************************************************************************************/
    /* Start reference timer for NTC diagnosis delay */
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_DiagcRefTi());
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehSpdArbnPer1
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
 *   Std_ReturnType Rte_Read_VehPwrModDftVehSpdEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnVldBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnVldBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehSpdArbd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdArbdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdMaxSecur_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdMaxSecurVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdMinSecur_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdMinSecurVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdSnsrVld_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, GmVehSpdArbn_CODE) GmVehSpdArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehSpdArbnPer1
 *********************************************************************************************************************/
    /* Inputs */
    VAR(boolean, AUTOMATIC) VehPwrModDftVehSpdEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) WhlGndVelLeDrvnBusChassisExp_Kph_T_f32;
    VAR(float32, AUTOMATIC) WhlGndVelLeDrvnBusHiSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) WhlGndVelLeDrvnStuckBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelLeDrvnStuckBusHiSpd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelLeDrvnVldBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelLeDrvnVldBusHiSpd_Cnt_T_logl;
    VAR(float32, AUTOMATIC) WhlGndVelLeNonDrvnBusChassisExp_Kph_T_f32;
    VAR(float32, AUTOMATIC) WhlGndVelLeNonDrvnBusHiSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) WhlGndVelLeNonDrvnStuckBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelLeNonDrvnStuckBusHiSpd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelLeNonDrvnVldBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelLeNonDrvnVldBusHiSpd_Cnt_T_logl;
    VAR(float32, AUTOMATIC) WhlGndVelRiDrvnBusChassisExp_Kph_T_f32;
    VAR(float32, AUTOMATIC) WhlGndVelRiDrvnBusHiSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) WhlGndVelRiDrvnStuckBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelRiDrvnStuckBusHiSpd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelRiDrvnVldBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelRiDrvnVldBusHiSpd_Cnt_T_logl;
    VAR(float32, AUTOMATIC) WhlGndVelRiNonDrvnBusChassisExp_Kph_T_f32;
    VAR(float32, AUTOMATIC) WhlGndVelRiNonDrvnBusHiSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) WhlGndVelRiNonDrvnStuckBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelRiNonDrvnStuckBusHiSpd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelRiNonDrvnVldBusChassisExp_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlGndVelRiNonDrvnVldBusHiSpd_Cnt_T_logl;
    
    /* Outputs */
    VAR(float32, AUTOMATIC) VehSpdArbd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdArbdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehSpdMaxSecur_Kph_T_f32 = 0.0F;
    VAR(boolean, AUTOMATIC) VehSpdMaxSecurVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehSpdMinSecur_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdMinSecurVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) VehSpdSnsrVld_Cnt_T_logl;
    
    VAR(boolean, AUTOMATIC) LeDrvnVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) RiDrvnVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) LeNonDrvnVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) RiNonDrvnVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) TmpMinSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) TmpSpdArbd_Kph_T_f32;
    VAR(float32, AUTOMATIC) SpdArbdCnt_Cnt_T_f32;
    VAR(boolean, AUTOMATIC) NTCIdleTiPassd_Cnt_T_logl = FALSE;
    VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32;
    
    
    
    /*** Read inputs ***/
    (void)Rte_Read_VehPwrModDftVehSpdEna_Logl(&VehPwrModDftVehSpdEna_Cnt_T_logl);                               /* REQ: CF016A #202 I */
    (void)Rte_Read_WhlGndVelLeDrvnBusChassisExp_Val(&WhlGndVelLeDrvnBusChassisExp_Kph_T_f32);                   /* REQ: CF016A #115 I */
    (void)Rte_Read_WhlGndVelLeDrvnBusHiSpd_Val(&WhlGndVelLeDrvnBusHiSpd_Kph_T_f32);                             /* REQ: CF016A #107 I */
    (void)Rte_Read_WhlGndVelLeDrvnStuckBusChassisExp_Logl(&WhlGndVelLeDrvnStuckBusChassisExp_Cnt_T_logl);       /* REQ: CF016A #207 I */
    (void)Rte_Read_WhlGndVelLeDrvnStuckBusHiSpd_Logl(&WhlGndVelLeDrvnStuckBusHiSpd_Cnt_T_logl);                 /* REQ: CF016A #211 I */
    (void)Rte_Read_WhlGndVelLeDrvnVldBusChassisExp_Logl(&WhlGndVelLeDrvnVldBusChassisExp_Cnt_T_logl);           /* REQ: CF016A #110 I */
    (void)Rte_Read_WhlGndVelLeDrvnVldBusHiSpd_Logl(&WhlGndVelLeDrvnVldBusHiSpd_Cnt_T_logl);                     /* REQ: CF016A #43 I */
    (void)Rte_Read_WhlGndVelLeNonDrvnBusChassisExp_Val(&WhlGndVelLeNonDrvnBusChassisExp_Kph_T_f32);             /* REQ: CF016A #119 I */
    (void)Rte_Read_WhlGndVelLeNonDrvnBusHiSpd_Val(&WhlGndVelLeNonDrvnBusHiSpd_Kph_T_f32);                       /* REQ: CF016A #116 I */
    (void)Rte_Read_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(&WhlGndVelLeNonDrvnStuckBusChassisExp_Cnt_T_logl); /* REQ: CF016A #214 I */
    (void)Rte_Read_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(&WhlGndVelLeNonDrvnStuckBusHiSpd_Cnt_T_logl);           /* REQ: CF016A #210 I */
    (void)Rte_Read_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(&WhlGndVelLeNonDrvnVldBusChassisExp_Cnt_T_logl);     /* REQ: CF016A #112 I */
    (void)Rte_Read_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(&WhlGndVelLeNonDrvnVldBusHiSpd_Cnt_T_logl);               /* REQ: CF016A #108 I */
    (void)Rte_Read_WhlGndVelRiDrvnBusChassisExp_Val(&WhlGndVelRiDrvnBusChassisExp_Kph_T_f32);                   /* REQ: CF016A #114 I */
    (void)Rte_Read_WhlGndVelRiDrvnBusHiSpd_Val(&WhlGndVelRiDrvnBusHiSpd_Kph_T_f32);                             /* REQ: CF016A #118 I */
    (void)Rte_Read_WhlGndVelRiDrvnStuckBusChassisExp_Logl(&WhlGndVelRiDrvnStuckBusChassisExp_Cnt_T_logl);       /* REQ: CF016A #213 I */
    (void)Rte_Read_WhlGndVelRiDrvnStuckBusHiSpd_Logl(&WhlGndVelRiDrvnStuckBusHiSpd_Cnt_T_logl);                 /* REQ: CF016A #209 I */
    (void)Rte_Read_WhlGndVelRiDrvnVldBusChassisExp_Logl(&WhlGndVelRiDrvnVldBusChassisExp_Cnt_T_logl);           /* REQ: CF016A #111 I */
    (void)Rte_Read_WhlGndVelRiDrvnVldBusHiSpd_Logl(&WhlGndVelRiDrvnVldBusHiSpd_Cnt_T_logl);                     /* REQ: CF016A #42 I */
    (void)Rte_Read_WhlGndVelRiNonDrvnBusChassisExp_Val(&WhlGndVelRiNonDrvnBusChassisExp_Kph_T_f32);             /* REQ: CF016A #120 I */
    (void)Rte_Read_WhlGndVelRiNonDrvnBusHiSpd_Val(&WhlGndVelRiNonDrvnBusHiSpd_Kph_T_f32);                       /* REQ: CF016A #117 I */
    (void)Rte_Read_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(&WhlGndVelRiNonDrvnStuckBusChassisExp_Cnt_T_logl); /* REQ: CF016A #212 I */
    (void)Rte_Read_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(&WhlGndVelRiNonDrvnStuckBusHiSpd_Cnt_T_logl);           /* REQ: CF016A #208 I */
    (void)Rte_Read_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(&WhlGndVelRiNonDrvnVldBusChassisExp_Cnt_T_logl);     /* REQ: CF016A #113 I */
    (void)Rte_Read_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(&WhlGndVelRiNonDrvnVldBusHiSpd_Cnt_T_logl);               /* REQ: CF016A #109 I */
    
    /*** Secure vehicle speed ***/
    /* Left driven */
    /* REQ: CF016A #134 I */
    LeDrvnVld_Cnt_T_logl = DetVld(WhlGndVelLeDrvnVldBusHiSpd_Cnt_T_logl,
                                  WhlGndVelLeDrvnVldBusChassisExp_Cnt_T_logl,
                                  WhlGndVelLeDrvnStuckBusHiSpd_Cnt_T_logl,
                                  WhlGndVelLeDrvnStuckBusChassisExp_Cnt_T_logl);
    *Rte_Pim_dGmVehSpdArbnLeDrvnVld() = LeDrvnVld_Cnt_T_logl;
    /* ENDREQ: CF016A #134 I */
    
    /* Right driven */
    /* REQ: CF016A #148 I */
    RiDrvnVld_Cnt_T_logl = DetVld(WhlGndVelRiDrvnVldBusHiSpd_Cnt_T_logl,
                                  WhlGndVelRiDrvnVldBusChassisExp_Cnt_T_logl,
                                  WhlGndVelRiDrvnStuckBusChassisExp_Cnt_T_logl,
                                  WhlGndVelRiDrvnStuckBusHiSpd_Cnt_T_logl);
    *Rte_Pim_dGmVehSpdArbnRiDrvnVld() = RiDrvnVld_Cnt_T_logl;
    /* ENDREQ: CF016A #148 I */
    
    /* Left non-driven */
    /* REQ: CF016A #164 I */
    LeNonDrvnVld_Cnt_T_logl = DetVld(WhlGndVelLeNonDrvnVldBusHiSpd_Cnt_T_logl,
                                     WhlGndVelLeNonDrvnVldBusChassisExp_Cnt_T_logl,
                                     WhlGndVelLeNonDrvnStuckBusHiSpd_Cnt_T_logl,
                                     WhlGndVelLeNonDrvnStuckBusChassisExp_Cnt_T_logl);
    *Rte_Pim_dGmVehSpdArbnLeNonDrvnVld() = LeNonDrvnVld_Cnt_T_logl;
    /* ENDREQ: CF016A #164 I */

    /* Right non-driven */
    /* REQ: CF016A #165 I */
    RiNonDrvnVld_Cnt_T_logl = DetVld(WhlGndVelRiNonDrvnVldBusHiSpd_Cnt_T_logl,
                                     WhlGndVelRiNonDrvnVldBusChassisExp_Cnt_T_logl,
                                     WhlGndVelRiNonDrvnStuckBusHiSpd_Cnt_T_logl,
                                     WhlGndVelRiNonDrvnStuckBusChassisExp_Cnt_T_logl);
    *Rte_Pim_dGmVehSpdArbnRiNonDrvnVld() = RiNonDrvnVld_Cnt_T_logl;
    /* ENDREQ: CF016A #165 I */
    
    /* REQ: CF016A #151 I */
    if(DetInvld(LeDrvnVld_Cnt_T_logl, RiDrvnVld_Cnt_T_logl, LeNonDrvnVld_Cnt_T_logl, RiNonDrvnVld_Cnt_T_logl) != FALSE)
    {
        /* All signals are invalid */

        VehSpdMaxSecurVld_Cnt_T_logl = FALSE;
        VehSpdMaxSecur_Kph_T_f32 = VEHSPDMAX_KPH_F32;
    }
    else
    {
        /* At least one signal is valid */

        VehSpdMaxSecurVld_Cnt_T_logl = TRUE;
        
        /* Get max secure vehicle speed */
        /* REQ: CF016A #191 I */
        CondMax(LeDrvnVld_Cnt_T_logl, WhlGndVelLeDrvnBusHiSpd_Kph_T_f32, WhlGndVelLeDrvnBusChassisExp_Kph_T_f32, &VehSpdMaxSecur_Kph_T_f32);
        CondMax(RiDrvnVld_Cnt_T_logl, WhlGndVelRiDrvnBusHiSpd_Kph_T_f32, WhlGndVelRiDrvnBusChassisExp_Kph_T_f32, &VehSpdMaxSecur_Kph_T_f32);
        CondMax(LeNonDrvnVld_Cnt_T_logl, WhlGndVelLeNonDrvnBusHiSpd_Kph_T_f32, WhlGndVelLeNonDrvnBusChassisExp_Kph_T_f32, &VehSpdMaxSecur_Kph_T_f32);
        CondMax(RiNonDrvnVld_Cnt_T_logl, WhlGndVelRiNonDrvnBusHiSpd_Kph_T_f32, WhlGndVelRiNonDrvnBusChassisExp_Kph_T_f32, &VehSpdMaxSecur_Kph_T_f32);
        /* ENDREQ: CF016A #191 I */
    }
    /* ENDREQ: CF016A #151 I */
    
    /* REQ: CF016A #200 I */
    if((LeNonDrvnVld_Cnt_T_logl == FALSE) && (RiNonDrvnVld_Cnt_T_logl == FALSE))
    {
        VehSpdMinSecurVld_Cnt_T_logl = FALSE;
        VehSpdMinSecur_Kph_T_f32 = 0.0F;
    }
    else
    {
        VehSpdMinSecurVld_Cnt_T_logl = TRUE;
        
        /* REQ: CF016A #154 I */
        /* Get min secure vehicle speed */
        TmpMinSpd_Kph_T_f32 = VEHSPDMAX_KPH_F32;
        
        CondMin(LeNonDrvnVld_Cnt_T_logl, WhlGndVelLeNonDrvnBusHiSpd_Kph_T_f32, WhlGndVelLeNonDrvnBusChassisExp_Kph_T_f32, &TmpMinSpd_Kph_T_f32);
        CondMin(RiNonDrvnVld_Cnt_T_logl, WhlGndVelRiNonDrvnBusHiSpd_Kph_T_f32, WhlGndVelRiNonDrvnBusChassisExp_Kph_T_f32, &TmpMinSpd_Kph_T_f32);
        
        VehSpdMinSecur_Kph_T_f32 = TmpMinSpd_Kph_T_f32;
        /* ENDREQ: CF016A #154 I */
    }
    /* ENDREQ: CF016A #200 I */
    
    /*** Non-secure vehicle speed ***/
    /* REQ: CF016A #197 I */
    TmpSpdArbd_Kph_T_f32 = 0.0F;    /* Holds sum of various speeds to be averaged */
    SpdArbdCnt_Cnt_T_f32 = 0.0F;    /* Holds count of speeds added to sum for averaging */
    
    UpdtAvg(WhlGndVelLeNonDrvnVldBusHiSpd_Cnt_T_logl, WhlGndVelLeNonDrvnBusHiSpd_Kph_T_f32, &TmpSpdArbd_Kph_T_f32, &SpdArbdCnt_Cnt_T_f32);
    UpdtAvg(WhlGndVelRiNonDrvnVldBusHiSpd_Cnt_T_logl, WhlGndVelRiNonDrvnBusHiSpd_Kph_T_f32, &TmpSpdArbd_Kph_T_f32, &SpdArbdCnt_Cnt_T_f32);
    UpdtAvg(WhlGndVelLeDrvnVldBusHiSpd_Cnt_T_logl, WhlGndVelLeDrvnBusHiSpd_Kph_T_f32, &TmpSpdArbd_Kph_T_f32, &SpdArbdCnt_Cnt_T_f32);
    UpdtAvg(WhlGndVelRiDrvnVldBusHiSpd_Cnt_T_logl, WhlGndVelRiDrvnBusHiSpd_Kph_T_f32, &TmpSpdArbd_Kph_T_f32, &SpdArbdCnt_Cnt_T_f32);
    
    /* Take average while protecting against divide by 0 */
    if(SpdArbdCnt_Cnt_T_f32 > 0.0F)
    {
        VehSpdArbd_Kph_T_f32 = TmpSpdArbd_Kph_T_f32 / SpdArbdCnt_Cnt_T_f32;
    }
    else
    {
        VehSpdArbd_Kph_T_f32 = TmpSpdArbd_Kph_T_f32;
    }
    /* ENDREQ: CF016A #197 I */

    /* Calc_NTCIdleTi */
    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_DiagcRefTi(), &Span_Cnt_T_u32);
    if(Span_Cnt_T_u32 > DIAGCSTRTUPDLY_CNT_U32)
    {
        NTCIdleTiPassd_Cnt_T_logl = TRUE;
    }
    
    /* REQ: CF016A #201 I */
    /* REQ: CF016A #55 I */
    /* REQ: CF016A #216 I */
    if(DetInvld(WhlGndVelRiDrvnVldBusHiSpd_Cnt_T_logl, WhlGndVelLeDrvnVldBusHiSpd_Cnt_T_logl, WhlGndVelRiNonDrvnVldBusHiSpd_Cnt_T_logl, WhlGndVelLeNonDrvnVldBusHiSpd_Cnt_T_logl) != FALSE)
    {
        VehSpdArbdVld_Cnt_T_logl = FALSE;
        VehSpdArbd_Kph_T_f32 = VEHSPDMAX_KPH_F32;

        /* REQ: CF016A #223 I */
        /* Make sure 500ms delay has passed before setting NTC */
        if(NTCIdleTiPassd_Cnt_T_logl != FALSE)
        {
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E0, 0U, NTCSTS_FAILD, 0U);
        }
        /* ENDREQ: CF016A #223 I */
        
        VehSpdSnsrVld_Cnt_T_logl = FALSE;
    }
    /* ENDREQ: CF016A #55 I */
    /* REQ: CF016A #21 I */
    /* REQ: CF016A #216 I */
    else if(VehPwrModDftVehSpdEna_Cnt_T_logl != FALSE)
    {
        VehSpdArbdVld_Cnt_T_logl = FALSE;
        VehSpdArbd_Kph_T_f32 = VEHSPDMAX_KPH_F32;

        /* REQ: CF016A #223 I */
        /* Make sure 500ms delay has passed before setting NTC */
        if(NTCIdleTiPassd_Cnt_T_logl != FALSE)
        {
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E0, 0U, NTCSTS_PASSD, 0U);
        }
        /* ENDREQ: CF016A #223 I */

        VehSpdSnsrVld_Cnt_T_logl = TRUE;
    }
    /* ENDREQ: CF016A #216 I */
    else
    {
        VehSpdArbdVld_Cnt_T_logl = TRUE;

        /* REQ: CF016A #223 I */
        /* Make sure 500ms delay has passed before setting NTC */
        if(NTCIdleTiPassd_Cnt_T_logl != FALSE)
        {
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E0, 0U, NTCSTS_PASSD, 0U);
        }
        /* ENDREQ: CF016A #223 I */

        VehSpdSnsrVld_Cnt_T_logl = TRUE;
    }
    /* ENDREQ: CF016A #21 I */
    /* ENDREQ: CF016A #216 I */
    /* ENDREQ: CF016A #201 I */
    
    /*** Limit outputs ***/
    VehSpdArbd_Kph_T_f32 = Lim_f32(VehSpdArbd_Kph_T_f32, VEHSPDMIN_KPH_F32, VEHSPDMAX_KPH_F32);
    VehSpdMaxSecur_Kph_T_f32 = Lim_f32(VehSpdMaxSecur_Kph_T_f32, VEHSPDMIN_KPH_F32, VEHSPDMAX_KPH_F32);
    VehSpdMinSecur_Kph_T_f32 = Lim_f32(VehSpdMinSecur_Kph_T_f32, VEHSPDMIN_KPH_F32, VEHSPDMAX_KPH_F32);
    
    
    /*** Write outputs ***/
    (void)Rte_Write_VehSpdArbdVld_Logl(VehSpdArbdVld_Cnt_T_logl);           /* REQ: CF016A #186 I */
    (void)Rte_Write_VehSpdArbd_Val(VehSpdArbd_Kph_T_f32);                   /* REQ: CF016A #106 I */
    (void)Rte_Write_VehSpdMaxSecurVld_Logl(VehSpdMaxSecurVld_Cnt_T_logl);   /* REQ: CF016A #189 I */
    (void)Rte_Write_VehSpdMaxSecur_Val(VehSpdMaxSecur_Kph_T_f32);           /* REQ: CF016A #152 I */
    (void)Rte_Write_VehSpdMinSecurVld_Logl(VehSpdMinSecurVld_Cnt_T_logl);   /* REQ: CF016A #190 I */
    (void)Rte_Write_VehSpdMinSecur_Val(VehSpdMinSecur_Kph_T_f32);           /* REQ: CF016A #153 I */
    (void)Rte_Write_VehSpdSnsrVld_Logl(VehSpdSnsrVld_Cnt_T_logl);           /* REQ: CF016A #222 I */
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmVehSpdArbn_STOP_SEC_CODE
#include "GmVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
  * Name        :   DetVld
  * Description :   Determines overall validity of a set of signals
  * Inputs      :   VldSig1/2   - validity of particular input signal (true = valid)
  *                 StuckSig1/2 - stuck/not stuck status of particular input signal (true = stuck)
  * Returns     :   False if any of the signals are invalid or stuck, true otherwise
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(boolean, GmVehSpdArbn_CODE) DetVld(boolean VldSig1_Cnt_T_logl,
                                               boolean VldSig2_Cnt_T_logl,
                                               boolean StuckSig1_Cnt_T_logl,
                                               boolean StuckSig2_Cnt_T_logl)
{
    VAR(boolean, AUTOMATIC) OverallVld_Cnt_T_logl;
    
    if((VldSig1_Cnt_T_logl == FALSE) ||
       (StuckSig1_Cnt_T_logl == TRUE) ||
       (StuckSig2_Cnt_T_logl == TRUE) ||
       (VldSig2_Cnt_T_logl == FALSE))
    {
        OverallVld_Cnt_T_logl = FALSE;   /* Invalid */
    } 
    else
    {
        OverallVld_Cnt_T_logl = TRUE;   /* Valid */
    }
    
    return OverallVld_Cnt_T_logl;
}

/*****************************************************************************************************************
  * Name        :   DetInvld
  * Description :   Determines overall invalidity of a set of signals
  * Inputs      :   VldSig1-4 - validity of particular signal (true = valid)
  * Returns     :   True if all signals are invalid, false otherwise
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(boolean, GmVehSpdArbn_CODE) DetInvld(boolean VldSig1_Cnt_T_logl,
                                                 boolean VldSig2_Cnt_T_logl,
                                                 boolean VldSig3_Cnt_T_logl,
                                                 boolean VldSig4_Cnt_T_logl)
{
    VAR(boolean, AUTOMATIC) OverallInvld_Cnt_T_logl;
    
    if((VldSig1_Cnt_T_logl == FALSE) &&
       (VldSig2_Cnt_T_logl == FALSE) &&
       (VldSig3_Cnt_T_logl == FALSE) &&
       (VldSig4_Cnt_T_logl == FALSE))
    {
        OverallInvld_Cnt_T_logl = TRUE;   /* Invalid */
    } 
    else
    {
        OverallInvld_Cnt_T_logl = FALSE;  /* Valid */
    }
    
    return OverallInvld_Cnt_T_logl;
}

/*****************************************************************************************************************
  * Name        :   UpdtAvg
  * Description :   Updates sum and count for an average
  * Inputs      :   VldSig - validity of signal to be added to average sum
  *                 VelSig - value of signal to be added to average sum
  * Input/Output:   AvgSum - sum that will ultimately be numerator of average
  *                 AvgCnt - count that will ultimately be denominator of average
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(void, GmVehSpdArbn_CODE) UpdtAvg(boolean VldSig_Cnt_T_logl,
                                             float32 VelSig_Kph_T_f32,
                                             P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) AvgSum_Kph_T_f32,
                                             P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) AvgCnt_Cnt_T_f32)
{
    if(VldSig_Cnt_T_logl != FALSE)
    {
        *AvgSum_Kph_T_f32 += VelSig_Kph_T_f32;
        *AvgCnt_Cnt_T_f32 += 1.0F;
    }
}

/*****************************************************************************************************************
  * Name        :   CondMax
  * Description :   Finds the maximum of three values provided the conditional is TRUE
  * Inputs      :   VldSig    - overall validity of the two input velocity signals
  *                 VelSig1/2 - velocity signals that maximum is being taken from
  * Input/Output:   MaxVel    - maximum velocity
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(void, GmVehSpdArbn_CODE)    CondMax(boolean VldSig_Cnt_T_logl,
                                                float32 VelSig1_Kph_T_f32,
                                                float32 VelSig2_Kph_T_f32,
                                                P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) MaxVel_Kph_T_f32)
{
    if(VldSig_Cnt_T_logl != FALSE)
    {
        *MaxVel_Kph_T_f32 = Max_f32(Max_f32(*MaxVel_Kph_T_f32, VelSig1_Kph_T_f32), VelSig2_Kph_T_f32);
    }
}
                                                
/*****************************************************************************************************************
  * Name        :   CondMin
  * Description :   Finds the minimum of three values provided the conditional is TRUE
  * Inputs      :   VldSig    - overall validity of the two input velocity signals
  *                 VelSig1/2 - velocity signals that minimum is being taken from
  * Input/Output:   MinVel    - minimum velocity 
  * Usage Notes :   None
  ****************************************************************************************************************/                                            
static FUNC(void, GmVehSpdArbn_CODE)    CondMin(boolean VldSig_Cnt_T_logl,
                                                float32 VelSig1_Kph_T_f32,
                                                float32 VelSig2_Kph_T_f32,
                                                P2VAR(float32, AUTOMATIC, GmVehSpdArbn_VAR) MinVel_Kph_T_f32)
{
    if(VldSig_Cnt_T_logl != FALSE)
    {
        *MinVel_Kph_T_f32 = Min_f32(Min_f32(*MinVel_Kph_T_f32, VelSig1_Kph_T_f32), VelSig2_Kph_T_f32);
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
