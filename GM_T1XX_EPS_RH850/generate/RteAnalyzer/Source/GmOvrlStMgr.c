/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmOvrlStMgr.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmOvrlStMgr
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmOvrlStMgr>
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
 * LoaSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NtcNr1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * NtcSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u10p6
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u2p14
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_GmOvrlStMgr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmOvrlStMgr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void GmOvrlStMgr_TestDefines(void);


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
 * u10p6: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * LoaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   LOAST_NORM (0U)
 *   LOAST_LIMD (1U)
 *   LOAST_SWBASDMTGTN (2U)
 *   LOAST_FADEOUT (3U)
 *   LOAST_CTRLDSHTDWNREQD (4U)
 *   LOAST_IMDTSHTDWNREQD (5U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u10p6_8: Array with 8 element(s) of type u10p6
 * Ary1D_u2p14_8: Array with 8 element(s) of type u2p14
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_HaptcStTranActvToWaitRefTi(void)
 *   uint32 *Rte_Pim_HapticActvRefTmr(void)
 *   uint32 *Rte_Pim_HapticWaitRefTmr(void)
 *   uint32 *Rte_Pim_LkaFltRefTmr(void)
 *   uint32 *Rte_Pim_LkaIntvRefTi1(void)
 *   uint32 *Rte_Pim_LkaIntvRefTi2(void)
 *   uint32 *Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi(void)
 *   uint32 *Rte_Pim_PrevApaIntvRefTi(void)
 *   uint32 *Rte_Pim_PrevHaptcReqRefTi(void)
 *   uint32 *Rte_Pim_PrevShiftLvrRvsRefTi(void)
 *   uint32 *Rte_Pim_PrevVehStandStillRefTi(void)
 *   uint32 *Rte_Pim_TqOscCycRefTi(void)
 *   uint32 *Rte_Pim_TranHaptcWaitToApaStActvRefTi(void)
 *   uint16 *Rte_Pim_GmLoaIgnCntr(void)
 *   uint8 *Rte_Pim_LkaFltCntr(void)
 *   uint8 *Rte_Pim_PrevApaSt(void)
 *   uint8 *Rte_Pim_PrevEscSt(void)
 *   uint8 *Rte_Pim_PrevHaptcSt(void)
 *   uint8 *Rte_Pim_PrevLkaSt(void)
 *   boolean *Rte_Pim_IgnCntrUpd(void)
 *   boolean *Rte_Pim_LkaFltPrev(void)
 *   boolean *Rte_Pim_LkaIntvPrev(void)
 *   boolean *Rte_Pim_LoaStChk(void)
 *   boolean *Rte_Pim_PrevApaIntvEna(void)
 *   boolean *Rte_Pim_PrevHaptcReqEna(void)
 *   boolean *Rte_Pim_PrevLkaFlt(void)
 *   boolean *Rte_Pim_PrevShiftLvrRvsEna(void)
 *   boolean *Rte_Pim_PrevVehStandStillEna(void)
 *   boolean *Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs(void)
 *   boolean *Rte_Pim_dGmOvrlStMgrApaStandStill(void)
 *   FilLpRec1 *Rte_Pim_HwTqLkaLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqOscnLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrApaHwTqThd_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHaptcAmp_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHaptcFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrStandStillThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcDurn_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(void)
 *   uint16 Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *   u2p14 *Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_8
 *   u10p6 *Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_8
 *
 *********************************************************************************************************************/


#define GmOvrlStMgr_START_SEC_CODE
#include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetGmLoaIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetGmLoaIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetGmLoaIgnCntr_Oper(uint16 *GmLoaIgnCntr_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetGmLoaIgnCntr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) GetGmLoaIgnCntr_Oper(P2VAR(uint16, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) GmLoaIgnCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetGmLoaIgnCntr_Oper
 *********************************************************************************************************************/

  uint32 HaptcStTranActvToWaitRefTi;
  uint32 HapticActvRefTmr;
  uint32 HapticWaitRefTmr;
  uint32 LkaFltRefTmr;
  uint32 LkaIntvRefTi1;
  uint32 LkaIntvRefTi2;
  uint32 LoaMtgtnHaptcFbStrtOnRefTi;
  uint32 PrevApaIntvRefTi;
  uint32 PrevHaptcReqRefTi;
  uint32 PrevShiftLvrRvsRefTi;
  uint32 PrevVehStandStillRefTi;
  uint32 TqOscCycRefTi;
  uint32 TranHaptcWaitToApaStActvRefTi;
  uint16 GmLoaIgnCntr;
  uint8 LkaFltCntr;
  uint8 PrevApaSt;
  uint8 PrevEscSt;
  uint8 PrevHaptcSt;
  uint8 PrevLkaSt;
  boolean IgnCntrUpd;
  boolean LkaFltPrev;
  boolean LkaIntvPrev;
  boolean LoaStChk;
  boolean PrevApaIntvEna;
  boolean PrevHaptcReqEna;
  boolean PrevLkaFlt;
  boolean PrevShiftLvrRvsEna;
  boolean PrevVehStandStillEna;
  boolean dGmOvrlStMgrApaShiftLvrRvs;
  boolean dGmOvrlStMgrApaStandStill;
  FilLpRec1 HwTqLkaLpFil;
  FilLpRec1 HwTqLpFil;
  FilLpRec1 HwTqOscnLpFil;

  float32 GmOvrlStMgrApaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrApaHwTqThd_Val_data;
  float32 GmOvrlStMgrApaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrEscVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrHaptcAmp_Val_data;
  float32 GmOvrlStMgrHaptcFrq_Val_data;
  float32 GmOvrlStMgrHwAgTarLimr_Val_data;
  float32 GmOvrlStMgrHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd1_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd2_Val_data;
  float32 GmOvrlStMgrLkaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrLkaVehSpdLoLim_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data;
  float32 GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data;
  float32 GmOvrlStMgrStandStillThd_Val_data;
  uint32 GmOvrlStMgrApaHwTqTiThd_Val_data;
  uint32 GmOvrlStMgrHaptcDurn_Val_data;
  uint32 GmOvrlStMgrHaptcReactnTi_Val_data;
  uint32 GmOvrlStMgrHaptcReqTiThd_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd1_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd2_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val_data;
  uint32 GmOvrlStMgrStandStillTiThd_Val_data;
  uint16 GmOvrlStMgrLoaStIgnCntrThd_Val_data;
  boolean GmOvrlStMgrApaHaptcEna_Logl_data;
  boolean GmOvrlStMgrApaMfgEna_Logl_data;
  boolean GmOvrlStMgrEscMfgEna_Logl_data;
  boolean GmOvrlStMgrLkaMfgEna_Logl_data;
  Ary1D_u2p14_8 GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data;
  Ary1D_u10p6_8 GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HaptcStTranActvToWaitRefTi = *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi() = HaptcStTranActvToWaitRefTi;
  HapticActvRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr() = HapticActvRefTmr;
  HapticWaitRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr() = HapticWaitRefTmr;
  LkaFltRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr() = LkaFltRefTmr;
  LkaIntvRefTi1 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1() = LkaIntvRefTi1;
  LkaIntvRefTi2 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2() = LkaIntvRefTi2;
  LoaMtgtnHaptcFbStrtOnRefTi = *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi() = LoaMtgtnHaptcFbStrtOnRefTi;
  PrevApaIntvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi() = PrevApaIntvRefTi;
  PrevHaptcReqRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi() = PrevHaptcReqRefTi;
  PrevShiftLvrRvsRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi() = PrevShiftLvrRvsRefTi;
  PrevVehStandStillRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi() = PrevVehStandStillRefTi;
  TqOscCycRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi() = TqOscCycRefTi;
  TranHaptcWaitToApaStActvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi() = TranHaptcWaitToApaStActvRefTi;
  GmLoaIgnCntr = *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr() = GmLoaIgnCntr;
  LkaFltCntr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr() = LkaFltCntr;
  PrevApaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt() = PrevApaSt;
  PrevEscSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt() = PrevEscSt;
  PrevHaptcSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt() = PrevHaptcSt;
  PrevLkaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt() = PrevLkaSt;
  IgnCntrUpd = *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd();
  *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd() = IgnCntrUpd;
  LkaFltPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev() = LkaFltPrev;
  LkaIntvPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev() = LkaIntvPrev;
  LoaStChk = *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk() = LoaStChk;
  PrevApaIntvEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna() = PrevApaIntvEna;
  PrevHaptcReqEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna() = PrevHaptcReqEna;
  PrevLkaFlt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt() = PrevLkaFlt;
  PrevShiftLvrRvsEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna() = PrevShiftLvrRvsEna;
  PrevVehStandStillEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna() = PrevVehStandStillEna;
  dGmOvrlStMgrApaShiftLvrRvs = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs() = dGmOvrlStMgrApaShiftLvrRvs;
  dGmOvrlStMgrApaStandStill = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill() = dGmOvrlStMgrApaStandStill;
  HwTqLkaLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil() = HwTqLkaLpFil;
  HwTqLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil() = HwTqLpFil;
  HwTqOscnLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil() = HwTqOscnLpFil;

  GmOvrlStMgrApaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val();
  GmOvrlStMgrApaHwTqThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqThd_Val();
  GmOvrlStMgrApaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val();
  GmOvrlStMgrEscVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val();
  GmOvrlStMgrHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcAmp_Val();
  GmOvrlStMgrHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcFrq_Val();
  GmOvrlStMgrHwAgTarLimr_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val();
  GmOvrlStMgrHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val();
  GmOvrlStMgrLkaHwTqThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val();
  GmOvrlStMgrLkaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val();
  GmOvrlStMgrLkaVehSpdLoLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val();
  GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val();
  GmOvrlStMgrStandStillThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillThd_Val();
  GmOvrlStMgrApaHwTqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val();
  GmOvrlStMgrHaptcDurn_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcDurn_Val();
  GmOvrlStMgrHaptcReactnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val();
  GmOvrlStMgrHaptcReqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val();
  GmOvrlStMgrLkaHwTqTiThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val();
  GmOvrlStMgrLkaHwTqTiThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val();
  GmOvrlStMgrShiftLvrTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val();
  GmOvrlStMgrStandStillTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillTiThd_Val();
  GmOvrlStMgrLoaStIgnCntrThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val();
  GmOvrlStMgrApaHaptcEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl();
  GmOvrlStMgrApaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl();
  GmOvrlStMgrEscMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl();
  GmOvrlStMgrLkaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
  (void)memcpy(GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(), sizeof(Ary1D_u2p14_8));
  (void)memcpy(GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(), sizeof(Ary1D_u10p6_8));

  GmOvrlStMgr_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmOvrlStMgrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmOvrlStMgrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmOvrlStMgrInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 HaptcStTranActvToWaitRefTi;
  uint32 HapticActvRefTmr;
  uint32 HapticWaitRefTmr;
  uint32 LkaFltRefTmr;
  uint32 LkaIntvRefTi1;
  uint32 LkaIntvRefTi2;
  uint32 LoaMtgtnHaptcFbStrtOnRefTi;
  uint32 PrevApaIntvRefTi;
  uint32 PrevHaptcReqRefTi;
  uint32 PrevShiftLvrRvsRefTi;
  uint32 PrevVehStandStillRefTi;
  uint32 TqOscCycRefTi;
  uint32 TranHaptcWaitToApaStActvRefTi;
  uint16 GmLoaIgnCntr;
  uint8 LkaFltCntr;
  uint8 PrevApaSt;
  uint8 PrevEscSt;
  uint8 PrevHaptcSt;
  uint8 PrevLkaSt;
  boolean IgnCntrUpd;
  boolean LkaFltPrev;
  boolean LkaIntvPrev;
  boolean LoaStChk;
  boolean PrevApaIntvEna;
  boolean PrevHaptcReqEna;
  boolean PrevLkaFlt;
  boolean PrevShiftLvrRvsEna;
  boolean PrevVehStandStillEna;
  boolean dGmOvrlStMgrApaShiftLvrRvs;
  boolean dGmOvrlStMgrApaStandStill;
  FilLpRec1 HwTqLkaLpFil;
  FilLpRec1 HwTqLpFil;
  FilLpRec1 HwTqOscnLpFil;

  float32 GmOvrlStMgrApaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrApaHwTqThd_Val_data;
  float32 GmOvrlStMgrApaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrEscVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrHaptcAmp_Val_data;
  float32 GmOvrlStMgrHaptcFrq_Val_data;
  float32 GmOvrlStMgrHwAgTarLimr_Val_data;
  float32 GmOvrlStMgrHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd1_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd2_Val_data;
  float32 GmOvrlStMgrLkaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrLkaVehSpdLoLim_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data;
  float32 GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data;
  float32 GmOvrlStMgrStandStillThd_Val_data;
  uint32 GmOvrlStMgrApaHwTqTiThd_Val_data;
  uint32 GmOvrlStMgrHaptcDurn_Val_data;
  uint32 GmOvrlStMgrHaptcReactnTi_Val_data;
  uint32 GmOvrlStMgrHaptcReqTiThd_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd1_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd2_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val_data;
  uint32 GmOvrlStMgrStandStillTiThd_Val_data;
  uint16 GmOvrlStMgrLoaStIgnCntrThd_Val_data;
  boolean GmOvrlStMgrApaHaptcEna_Logl_data;
  boolean GmOvrlStMgrApaMfgEna_Logl_data;
  boolean GmOvrlStMgrEscMfgEna_Logl_data;
  boolean GmOvrlStMgrLkaMfgEna_Logl_data;
  Ary1D_u2p14_8 GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data;
  Ary1D_u10p6_8 GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;

  NvM_RequestResultType Call_GmLoaIgnCntr_GetErrorStatus_ErrorStatus_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HaptcStTranActvToWaitRefTi = *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi() = HaptcStTranActvToWaitRefTi;
  HapticActvRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr() = HapticActvRefTmr;
  HapticWaitRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr() = HapticWaitRefTmr;
  LkaFltRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr() = LkaFltRefTmr;
  LkaIntvRefTi1 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1() = LkaIntvRefTi1;
  LkaIntvRefTi2 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2() = LkaIntvRefTi2;
  LoaMtgtnHaptcFbStrtOnRefTi = *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi() = LoaMtgtnHaptcFbStrtOnRefTi;
  PrevApaIntvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi() = PrevApaIntvRefTi;
  PrevHaptcReqRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi() = PrevHaptcReqRefTi;
  PrevShiftLvrRvsRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi() = PrevShiftLvrRvsRefTi;
  PrevVehStandStillRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi() = PrevVehStandStillRefTi;
  TqOscCycRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi() = TqOscCycRefTi;
  TranHaptcWaitToApaStActvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi() = TranHaptcWaitToApaStActvRefTi;
  GmLoaIgnCntr = *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr() = GmLoaIgnCntr;
  LkaFltCntr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr() = LkaFltCntr;
  PrevApaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt() = PrevApaSt;
  PrevEscSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt() = PrevEscSt;
  PrevHaptcSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt() = PrevHaptcSt;
  PrevLkaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt() = PrevLkaSt;
  IgnCntrUpd = *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd();
  *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd() = IgnCntrUpd;
  LkaFltPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev() = LkaFltPrev;
  LkaIntvPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev() = LkaIntvPrev;
  LoaStChk = *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk() = LoaStChk;
  PrevApaIntvEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna() = PrevApaIntvEna;
  PrevHaptcReqEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna() = PrevHaptcReqEna;
  PrevLkaFlt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt() = PrevLkaFlt;
  PrevShiftLvrRvsEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna() = PrevShiftLvrRvsEna;
  PrevVehStandStillEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna() = PrevVehStandStillEna;
  dGmOvrlStMgrApaShiftLvrRvs = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs() = dGmOvrlStMgrApaShiftLvrRvs;
  dGmOvrlStMgrApaStandStill = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill() = dGmOvrlStMgrApaStandStill;
  HwTqLkaLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil() = HwTqLkaLpFil;
  HwTqLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil() = HwTqLpFil;
  HwTqOscnLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil() = HwTqOscnLpFil;

  GmOvrlStMgrApaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val();
  GmOvrlStMgrApaHwTqThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqThd_Val();
  GmOvrlStMgrApaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val();
  GmOvrlStMgrEscVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val();
  GmOvrlStMgrHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcAmp_Val();
  GmOvrlStMgrHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcFrq_Val();
  GmOvrlStMgrHwAgTarLimr_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val();
  GmOvrlStMgrHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val();
  GmOvrlStMgrLkaHwTqThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val();
  GmOvrlStMgrLkaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val();
  GmOvrlStMgrLkaVehSpdLoLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val();
  GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val();
  GmOvrlStMgrStandStillThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillThd_Val();
  GmOvrlStMgrApaHwTqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val();
  GmOvrlStMgrHaptcDurn_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcDurn_Val();
  GmOvrlStMgrHaptcReactnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val();
  GmOvrlStMgrHaptcReqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val();
  GmOvrlStMgrLkaHwTqTiThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val();
  GmOvrlStMgrLkaHwTqTiThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val();
  GmOvrlStMgrShiftLvrTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val();
  GmOvrlStMgrStandStillTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillTiThd_Val();
  GmOvrlStMgrLoaStIgnCntrThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val();
  GmOvrlStMgrApaHaptcEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl();
  GmOvrlStMgrApaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl();
  GmOvrlStMgrEscMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl();
  GmOvrlStMgrLkaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
  (void)memcpy(GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(), sizeof(Ary1D_u2p14_8));
  (void)memcpy(GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(), sizeof(Ary1D_u10p6_8));

  TSC_GmOvrlStMgr_Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(0U);

  fct_status = TSC_GmOvrlStMgr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Call_SetNtcSts_Oper(0U, 0U, 0U, 0U);
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
    case RTE_E_SetNtcSts_PortIf1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_GetErrorStatus(&Call_GmLoaIgnCntr_GetErrorStatus_ErrorStatus_Arg);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: GmOvrlStMgrPer1
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
 *   Std_ReturnType Rte_Read_AbsActvProtd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ApaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscLimdActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTar_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTraj_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrajEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwHaptcEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LkaTqCmdCdnd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_MfgOvrlDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg17DBusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg17DBusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusChassisExpInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusChassisExpMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1E9BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1E9BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1F5BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg214BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg214BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg337BusChassisExpInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg337BusChassisExpMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ShiftLvrRvs_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMaxVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMinVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtActv_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApaDrvrIntvDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_ApaSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EscSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwAgServoCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgServoEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwOscnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwOscnFrq_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwOscnMotAmp_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqOscSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaSt_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmOvrlStMgrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmOvrlStMgrPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_AbsActvProtd_Logl;
  boolean Read_ApaEna_Logl;
  boolean Read_EscEna_Logl;
  boolean Read_EscLimdActv_Logl;
  float32 Read_HwAgEotCcw_Val;
  float32 Read_HwAgEotCw_Val;
  float32 Read_HwAgTar_Val;
  float32 Read_HwAgTraj_Val;
  boolean Read_HwAgTrajEna_Logl;
  boolean Read_HwHaptcEna_Logl;
  float32 Read_HwTq_Val;
  boolean Read_LkaEna_Logl;
  float32 Read_LkaTqCmdCdnd_Val;
  LoaSt1 Read_LoaSt_Val;
  boolean Read_MfgOvrlDi_Logl;
  boolean Read_Msg17DBusHiSpdInvld_Logl;
  boolean Read_Msg17DBusHiSpdMiss_Logl;
  boolean Read_Msg180BusChassisExpInvld_Logl;
  boolean Read_Msg180BusChassisExpMiss_Logl;
  boolean Read_Msg180BusHiSpdInvld_Logl;
  boolean Read_Msg180BusHiSpdMiss_Logl;
  boolean Read_Msg1E9BusHiSpdInvld_Logl;
  boolean Read_Msg1E9BusHiSpdMiss_Logl;
  boolean Read_Msg1F5BusHiSpdInvld_Logl;
  boolean Read_Msg214BusHiSpdInvld_Logl;
  boolean Read_Msg214BusHiSpdMiss_Logl;
  boolean Read_Msg337BusChassisExpInvld_Logl;
  boolean Read_Msg337BusChassisExpMiss_Logl;
  boolean Read_ShiftLvrRvs_Logl;
  SysSt1 Read_SysSt_Val;
  float32 Read_VehSpd_Val;
  float32 Read_VehSpdSecurMax_Val;
  boolean Read_VehSpdSecurMaxVld_Logl;
  float32 Read_VehSpdSecurMin_Val;
  boolean Read_VehSpdSecurMinVld_Logl;
  boolean Read_VehStabyEnhmtActv_Logl;

  uint32 HaptcStTranActvToWaitRefTi;
  uint32 HapticActvRefTmr;
  uint32 HapticWaitRefTmr;
  uint32 LkaFltRefTmr;
  uint32 LkaIntvRefTi1;
  uint32 LkaIntvRefTi2;
  uint32 LoaMtgtnHaptcFbStrtOnRefTi;
  uint32 PrevApaIntvRefTi;
  uint32 PrevHaptcReqRefTi;
  uint32 PrevShiftLvrRvsRefTi;
  uint32 PrevVehStandStillRefTi;
  uint32 TqOscCycRefTi;
  uint32 TranHaptcWaitToApaStActvRefTi;
  uint16 GmLoaIgnCntr;
  uint8 LkaFltCntr;
  uint8 PrevApaSt;
  uint8 PrevEscSt;
  uint8 PrevHaptcSt;
  uint8 PrevLkaSt;
  boolean IgnCntrUpd;
  boolean LkaFltPrev;
  boolean LkaIntvPrev;
  boolean LoaStChk;
  boolean PrevApaIntvEna;
  boolean PrevHaptcReqEna;
  boolean PrevLkaFlt;
  boolean PrevShiftLvrRvsEna;
  boolean PrevVehStandStillEna;
  boolean dGmOvrlStMgrApaShiftLvrRvs;
  boolean dGmOvrlStMgrApaStandStill;
  FilLpRec1 HwTqLkaLpFil;
  FilLpRec1 HwTqLpFil;
  FilLpRec1 HwTqOscnLpFil;

  float32 GmOvrlStMgrApaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrApaHwTqThd_Val_data;
  float32 GmOvrlStMgrApaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrEscVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrHaptcAmp_Val_data;
  float32 GmOvrlStMgrHaptcFrq_Val_data;
  float32 GmOvrlStMgrHwAgTarLimr_Val_data;
  float32 GmOvrlStMgrHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd1_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd2_Val_data;
  float32 GmOvrlStMgrLkaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrLkaVehSpdLoLim_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data;
  float32 GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data;
  float32 GmOvrlStMgrStandStillThd_Val_data;
  uint32 GmOvrlStMgrApaHwTqTiThd_Val_data;
  uint32 GmOvrlStMgrHaptcDurn_Val_data;
  uint32 GmOvrlStMgrHaptcReactnTi_Val_data;
  uint32 GmOvrlStMgrHaptcReqTiThd_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd1_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd2_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val_data;
  uint32 GmOvrlStMgrStandStillTiThd_Val_data;
  uint16 GmOvrlStMgrLoaStIgnCntrThd_Val_data;
  boolean GmOvrlStMgrApaHaptcEna_Logl_data;
  boolean GmOvrlStMgrApaMfgEna_Logl_data;
  boolean GmOvrlStMgrEscMfgEna_Logl_data;
  boolean GmOvrlStMgrLkaMfgEna_Logl_data;
  Ary1D_u2p14_8 GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data;
  Ary1D_u10p6_8 GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data;

  uint16 GmOvrlStMgrPer1_IgnCntrLcl;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;
  uint32 Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HaptcStTranActvToWaitRefTi = *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi() = HaptcStTranActvToWaitRefTi;
  HapticActvRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr() = HapticActvRefTmr;
  HapticWaitRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr() = HapticWaitRefTmr;
  LkaFltRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr() = LkaFltRefTmr;
  LkaIntvRefTi1 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1() = LkaIntvRefTi1;
  LkaIntvRefTi2 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2() = LkaIntvRefTi2;
  LoaMtgtnHaptcFbStrtOnRefTi = *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi() = LoaMtgtnHaptcFbStrtOnRefTi;
  PrevApaIntvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi() = PrevApaIntvRefTi;
  PrevHaptcReqRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi() = PrevHaptcReqRefTi;
  PrevShiftLvrRvsRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi() = PrevShiftLvrRvsRefTi;
  PrevVehStandStillRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi() = PrevVehStandStillRefTi;
  TqOscCycRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi() = TqOscCycRefTi;
  TranHaptcWaitToApaStActvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi() = TranHaptcWaitToApaStActvRefTi;
  GmLoaIgnCntr = *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr() = GmLoaIgnCntr;
  LkaFltCntr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr() = LkaFltCntr;
  PrevApaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt() = PrevApaSt;
  PrevEscSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt() = PrevEscSt;
  PrevHaptcSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt() = PrevHaptcSt;
  PrevLkaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt() = PrevLkaSt;
  IgnCntrUpd = *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd();
  *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd() = IgnCntrUpd;
  LkaFltPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev() = LkaFltPrev;
  LkaIntvPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev() = LkaIntvPrev;
  LoaStChk = *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk() = LoaStChk;
  PrevApaIntvEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna() = PrevApaIntvEna;
  PrevHaptcReqEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna() = PrevHaptcReqEna;
  PrevLkaFlt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt() = PrevLkaFlt;
  PrevShiftLvrRvsEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna() = PrevShiftLvrRvsEna;
  PrevVehStandStillEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna() = PrevVehStandStillEna;
  dGmOvrlStMgrApaShiftLvrRvs = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs() = dGmOvrlStMgrApaShiftLvrRvs;
  dGmOvrlStMgrApaStandStill = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill() = dGmOvrlStMgrApaStandStill;
  HwTqLkaLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil() = HwTqLkaLpFil;
  HwTqLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil() = HwTqLpFil;
  HwTqOscnLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil() = HwTqOscnLpFil;

  GmOvrlStMgrApaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val();
  GmOvrlStMgrApaHwTqThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqThd_Val();
  GmOvrlStMgrApaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val();
  GmOvrlStMgrEscVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val();
  GmOvrlStMgrHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcAmp_Val();
  GmOvrlStMgrHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcFrq_Val();
  GmOvrlStMgrHwAgTarLimr_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val();
  GmOvrlStMgrHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val();
  GmOvrlStMgrLkaHwTqThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val();
  GmOvrlStMgrLkaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val();
  GmOvrlStMgrLkaVehSpdLoLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val();
  GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val();
  GmOvrlStMgrStandStillThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillThd_Val();
  GmOvrlStMgrApaHwTqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val();
  GmOvrlStMgrHaptcDurn_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcDurn_Val();
  GmOvrlStMgrHaptcReactnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val();
  GmOvrlStMgrHaptcReqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val();
  GmOvrlStMgrLkaHwTqTiThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val();
  GmOvrlStMgrLkaHwTqTiThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val();
  GmOvrlStMgrShiftLvrTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val();
  GmOvrlStMgrStandStillTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillTiThd_Val();
  GmOvrlStMgrLoaStIgnCntrThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val();
  GmOvrlStMgrApaHaptcEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl();
  GmOvrlStMgrApaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl();
  GmOvrlStMgrEscMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl();
  GmOvrlStMgrLkaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
  (void)memcpy(GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(), sizeof(Ary1D_u2p14_8));
  (void)memcpy(GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(), sizeof(Ary1D_u10p6_8));

  fct_status = TSC_GmOvrlStMgr_Rte_Read_AbsActvProtd_Logl(&Read_AbsActvProtd_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_ApaEna_Logl(&Read_ApaEna_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_EscEna_Logl(&Read_EscEna_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_EscLimdActv_Logl(&Read_EscLimdActv_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_HwAgEotCcw_Val(&Read_HwAgEotCcw_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_HwAgEotCw_Val(&Read_HwAgEotCw_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_HwAgTar_Val(&Read_HwAgTar_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_HwAgTraj_Val(&Read_HwAgTraj_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_HwAgTrajEna_Logl(&Read_HwAgTrajEna_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_HwHaptcEna_Logl(&Read_HwHaptcEna_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_LkaEna_Logl(&Read_LkaEna_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_LkaTqCmdCdnd_Val(&Read_LkaTqCmdCdnd_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_LoaSt_Val(&Read_LoaSt_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_MfgOvrlDi_Logl(&Read_MfgOvrlDi_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg17DBusHiSpdInvld_Logl(&Read_Msg17DBusHiSpdInvld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg17DBusHiSpdMiss_Logl(&Read_Msg17DBusHiSpdMiss_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg180BusChassisExpInvld_Logl(&Read_Msg180BusChassisExpInvld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg180BusChassisExpMiss_Logl(&Read_Msg180BusChassisExpMiss_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg180BusHiSpdInvld_Logl(&Read_Msg180BusHiSpdInvld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg180BusHiSpdMiss_Logl(&Read_Msg180BusHiSpdMiss_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg1E9BusHiSpdInvld_Logl(&Read_Msg1E9BusHiSpdInvld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg1E9BusHiSpdMiss_Logl(&Read_Msg1E9BusHiSpdMiss_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg1F5BusHiSpdInvld_Logl(&Read_Msg1F5BusHiSpdInvld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg214BusHiSpdInvld_Logl(&Read_Msg214BusHiSpdInvld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg214BusHiSpdMiss_Logl(&Read_Msg214BusHiSpdMiss_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg337BusChassisExpInvld_Logl(&Read_Msg337BusChassisExpInvld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_Msg337BusChassisExpMiss_Logl(&Read_Msg337BusChassisExpMiss_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_ShiftLvrRvs_Logl(&Read_ShiftLvrRvs_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_SysSt_Val(&Read_SysSt_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMax_Val(&Read_VehSpdSecurMax_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMaxVld_Logl(&Read_VehSpdSecurMaxVld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMin_Val(&Read_VehSpdSecurMin_Val);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_VehSpdSecurMinVld_Logl(&Read_VehSpdSecurMinVld_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Read_VehStabyEnhmtActv_Logl(&Read_VehStabyEnhmtActv_Logl);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Write_ApaDrvrIntvDetd_Logl(Rte_InitValue_ApaDrvrIntvDetd_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_ApaSt_Val(Rte_InitValue_ApaSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_EscSt_Val(Rte_InitValue_EscSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_HwAgServoCmd_Val(Rte_InitValue_HwAgServoCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_HwAgServoEna_Logl(Rte_InitValue_HwAgServoEna_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_HwOscnEna_Logl(Rte_InitValue_HwOscnEna_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_HwOscnFrq_Val(Rte_InitValue_HwOscnFrq_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_HwOscnMotAmp_Val(Rte_InitValue_HwOscnMotAmp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_HwTqOscSt_Val(Rte_InitValue_HwTqOscSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmOvrlStMgr_Rte_Write_LkaSt_Val(Rte_InitValue_LkaSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  GmOvrlStMgrPer1_IgnCntrLcl = TSC_GmOvrlStMgr_Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl();

  fct_status = TSC_GmOvrlStMgr_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Call_GetTiSpan100MicroSec32bit_Oper(0U, &Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg);
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

  fct_status = TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: SetGmLoaIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetGmLoaIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetGmLoaIgnCntr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetGmLoaIgnCntr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 HaptcStTranActvToWaitRefTi;
  uint32 HapticActvRefTmr;
  uint32 HapticWaitRefTmr;
  uint32 LkaFltRefTmr;
  uint32 LkaIntvRefTi1;
  uint32 LkaIntvRefTi2;
  uint32 LoaMtgtnHaptcFbStrtOnRefTi;
  uint32 PrevApaIntvRefTi;
  uint32 PrevHaptcReqRefTi;
  uint32 PrevShiftLvrRvsRefTi;
  uint32 PrevVehStandStillRefTi;
  uint32 TqOscCycRefTi;
  uint32 TranHaptcWaitToApaStActvRefTi;
  uint16 GmLoaIgnCntr;
  uint8 LkaFltCntr;
  uint8 PrevApaSt;
  uint8 PrevEscSt;
  uint8 PrevHaptcSt;
  uint8 PrevLkaSt;
  boolean IgnCntrUpd;
  boolean LkaFltPrev;
  boolean LkaIntvPrev;
  boolean LoaStChk;
  boolean PrevApaIntvEna;
  boolean PrevHaptcReqEna;
  boolean PrevLkaFlt;
  boolean PrevShiftLvrRvsEna;
  boolean PrevVehStandStillEna;
  boolean dGmOvrlStMgrApaShiftLvrRvs;
  boolean dGmOvrlStMgrApaStandStill;
  FilLpRec1 HwTqLkaLpFil;
  FilLpRec1 HwTqLpFil;
  FilLpRec1 HwTqOscnLpFil;

  float32 GmOvrlStMgrApaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrApaHwTqThd_Val_data;
  float32 GmOvrlStMgrApaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrEscVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrHaptcAmp_Val_data;
  float32 GmOvrlStMgrHaptcFrq_Val_data;
  float32 GmOvrlStMgrHwAgTarLimr_Val_data;
  float32 GmOvrlStMgrHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqFilFrq_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd1_Val_data;
  float32 GmOvrlStMgrLkaHwTqThd2_Val_data;
  float32 GmOvrlStMgrLkaVehSpdHiLim_Val_data;
  float32 GmOvrlStMgrLkaVehSpdLoLim_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data;
  float32 GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data;
  float32 GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data;
  float32 GmOvrlStMgrStandStillThd_Val_data;
  uint32 GmOvrlStMgrApaHwTqTiThd_Val_data;
  uint32 GmOvrlStMgrHaptcDurn_Val_data;
  uint32 GmOvrlStMgrHaptcReactnTi_Val_data;
  uint32 GmOvrlStMgrHaptcReqTiThd_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd1_Val_data;
  uint32 GmOvrlStMgrLkaHwTqTiThd2_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data;
  uint32 GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data;
  uint32 GmOvrlStMgrShiftLvrTiThd_Val_data;
  uint32 GmOvrlStMgrStandStillTiThd_Val_data;
  uint16 GmOvrlStMgrLoaStIgnCntrThd_Val_data;
  boolean GmOvrlStMgrApaHaptcEna_Logl_data;
  boolean GmOvrlStMgrApaMfgEna_Logl_data;
  boolean GmOvrlStMgrEscMfgEna_Logl_data;
  boolean GmOvrlStMgrLkaMfgEna_Logl_data;
  Ary1D_u2p14_8 GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data;
  Ary1D_u10p6_8 GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  HaptcStTranActvToWaitRefTi = *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_HaptcStTranActvToWaitRefTi() = HaptcStTranActvToWaitRefTi;
  HapticActvRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticActvRefTmr() = HapticActvRefTmr;
  HapticWaitRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_HapticWaitRefTmr() = HapticWaitRefTmr;
  LkaFltRefTmr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltRefTmr() = LkaFltRefTmr;
  LkaIntvRefTi1 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi1() = LkaIntvRefTi1;
  LkaIntvRefTi2 = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvRefTi2() = LkaIntvRefTi2;
  LoaMtgtnHaptcFbStrtOnRefTi = *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi() = LoaMtgtnHaptcFbStrtOnRefTi;
  PrevApaIntvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvRefTi() = PrevApaIntvRefTi;
  PrevHaptcReqRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqRefTi() = PrevHaptcReqRefTi;
  PrevShiftLvrRvsRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsRefTi() = PrevShiftLvrRvsRefTi;
  PrevVehStandStillRefTi = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillRefTi() = PrevVehStandStillRefTi;
  TqOscCycRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TqOscCycRefTi() = TqOscCycRefTi;
  TranHaptcWaitToApaStActvRefTi = *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi();
  *TSC_GmOvrlStMgr_Rte_Pim_TranHaptcWaitToApaStActvRefTi() = TranHaptcWaitToApaStActvRefTi;
  GmLoaIgnCntr = *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_GmLoaIgnCntr() = GmLoaIgnCntr;
  LkaFltCntr = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltCntr() = LkaFltCntr;
  PrevApaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaSt() = PrevApaSt;
  PrevEscSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevEscSt() = PrevEscSt;
  PrevHaptcSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcSt() = PrevHaptcSt;
  PrevLkaSt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaSt() = PrevLkaSt;
  IgnCntrUpd = *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd();
  *TSC_GmOvrlStMgr_Rte_Pim_IgnCntrUpd() = IgnCntrUpd;
  LkaFltPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaFltPrev() = LkaFltPrev;
  LkaIntvPrev = *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev();
  *TSC_GmOvrlStMgr_Rte_Pim_LkaIntvPrev() = LkaIntvPrev;
  LoaStChk = *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk();
  *TSC_GmOvrlStMgr_Rte_Pim_LoaStChk() = LoaStChk;
  PrevApaIntvEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevApaIntvEna() = PrevApaIntvEna;
  PrevHaptcReqEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevHaptcReqEna() = PrevHaptcReqEna;
  PrevLkaFlt = *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevLkaFlt() = PrevLkaFlt;
  PrevShiftLvrRvsEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevShiftLvrRvsEna() = PrevShiftLvrRvsEna;
  PrevVehStandStillEna = *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna();
  *TSC_GmOvrlStMgr_Rte_Pim_PrevVehStandStillEna() = PrevVehStandStillEna;
  dGmOvrlStMgrApaShiftLvrRvs = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs() = dGmOvrlStMgrApaShiftLvrRvs;
  dGmOvrlStMgrApaStandStill = *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill();
  *TSC_GmOvrlStMgr_Rte_Pim_dGmOvrlStMgrApaStandStill() = dGmOvrlStMgrApaStandStill;
  HwTqLkaLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLkaLpFil() = HwTqLkaLpFil;
  HwTqLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqLpFil() = HwTqLpFil;
  HwTqOscnLpFil = *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil();
  *TSC_GmOvrlStMgr_Rte_Pim_HwTqOscnLpFil() = HwTqOscnLpFil;

  GmOvrlStMgrApaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val();
  GmOvrlStMgrApaHwTqThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqThd_Val();
  GmOvrlStMgrApaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val();
  GmOvrlStMgrEscVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val();
  GmOvrlStMgrHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcAmp_Val();
  GmOvrlStMgrHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcFrq_Val();
  GmOvrlStMgrHwAgTarLimr_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val();
  GmOvrlStMgrHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqFilFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val();
  GmOvrlStMgrLkaHwTqThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val();
  GmOvrlStMgrLkaHwTqThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val();
  GmOvrlStMgrLkaVehSpdHiLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val();
  GmOvrlStMgrLkaVehSpdLoLim_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val();
  GmOvrlStMgrLoaMtgtnHaptcFrq_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val();
  GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val();
  GmOvrlStMgrStandStillThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillThd_Val();
  GmOvrlStMgrApaHwTqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val();
  GmOvrlStMgrHaptcDurn_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcDurn_Val();
  GmOvrlStMgrHaptcReactnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val();
  GmOvrlStMgrHaptcReqTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val();
  GmOvrlStMgrLkaHwTqTiThd1_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val();
  GmOvrlStMgrLkaHwTqTiThd2_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val();
  GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val();
  GmOvrlStMgrShiftLvrTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val();
  GmOvrlStMgrStandStillTiThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrStandStillTiThd_Val();
  GmOvrlStMgrLoaStIgnCntrThd_Val_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val();
  GmOvrlStMgrApaHaptcEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl();
  GmOvrlStMgrApaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl();
  GmOvrlStMgrEscMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl();
  GmOvrlStMgrLkaMfgEna_Logl_data = TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
  (void)memcpy(GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(), sizeof(Ary1D_u2p14_8));
  (void)memcpy(GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D_data, TSC_GmOvrlStMgr_Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(), sizeof(Ary1D_u10p6_8));

  fct_status = TSC_GmOvrlStMgr_Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(FALSE);
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


#define GmOvrlStMgr_STOP_SEC_CODE
#include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void GmOvrlStMgr_TestDefines(void)
{
  /* Enumeration Data Types */

  LoaSt1 Test_LoaSt1_V_1 = LOAST_NORM;
  LoaSt1 Test_LoaSt1_V_2 = LOAST_LIMD;
  LoaSt1 Test_LoaSt1_V_3 = LOAST_SWBASDMTGTN;
  LoaSt1 Test_LoaSt1_V_4 = LOAST_FADEOUT;
  LoaSt1 Test_LoaSt1_V_5 = LOAST_CTRLDSHTDWNREQD;
  LoaSt1 Test_LoaSt1_V_6 = LOAST_IMDTSHTDWNREQD;

  NtcNr1 Test_NtcNr1_V_1 = NTCNR_0X001;
  NtcNr1 Test_NtcNr1_V_2 = NTCNR_0X002;
  NtcNr1 Test_NtcNr1_V_3 = NTCNR_0X003;
  NtcNr1 Test_NtcNr1_V_4 = NTCNR_0X004;
  NtcNr1 Test_NtcNr1_V_5 = NTCNR_0X005;
  NtcNr1 Test_NtcNr1_V_6 = NTCNR_0X006;
  NtcNr1 Test_NtcNr1_V_7 = NTCNR_0X007;
  NtcNr1 Test_NtcNr1_V_8 = NTCNR_0X008;
  NtcNr1 Test_NtcNr1_V_9 = NTCNR_0X009;
  NtcNr1 Test_NtcNr1_V_10 = NTCNR_0X00A;
  NtcNr1 Test_NtcNr1_V_11 = NTCNR_0X00B;
  NtcNr1 Test_NtcNr1_V_12 = NTCNR_0X00C;
  NtcNr1 Test_NtcNr1_V_13 = NTCNR_0X00D;
  NtcNr1 Test_NtcNr1_V_14 = NTCNR_0X00E;
  NtcNr1 Test_NtcNr1_V_15 = NTCNR_0X00F;
  NtcNr1 Test_NtcNr1_V_16 = NTCNR_0X010;
  NtcNr1 Test_NtcNr1_V_17 = NTCNR_0X011;
  NtcNr1 Test_NtcNr1_V_18 = NTCNR_0X012;
  NtcNr1 Test_NtcNr1_V_19 = NTCNR_0X013;
  NtcNr1 Test_NtcNr1_V_20 = NTCNR_0X014;
  NtcNr1 Test_NtcNr1_V_21 = NTCNR_0X015;
  NtcNr1 Test_NtcNr1_V_22 = NTCNR_0X016;
  NtcNr1 Test_NtcNr1_V_23 = NTCNR_0X017;
  NtcNr1 Test_NtcNr1_V_24 = NTCNR_0X018;
  NtcNr1 Test_NtcNr1_V_25 = NTCNR_0X019;
  NtcNr1 Test_NtcNr1_V_26 = NTCNR_0X01A;
  NtcNr1 Test_NtcNr1_V_27 = NTCNR_0X01B;
  NtcNr1 Test_NtcNr1_V_28 = NTCNR_0X01C;
  NtcNr1 Test_NtcNr1_V_29 = NTCNR_0X01D;
  NtcNr1 Test_NtcNr1_V_30 = NTCNR_0X01E;
  NtcNr1 Test_NtcNr1_V_31 = NTCNR_0X01F;
  NtcNr1 Test_NtcNr1_V_32 = NTCNR_0X020;
  NtcNr1 Test_NtcNr1_V_33 = NTCNR_0X021;
  NtcNr1 Test_NtcNr1_V_34 = NTCNR_0X022;
  NtcNr1 Test_NtcNr1_V_35 = NTCNR_0X023;
  NtcNr1 Test_NtcNr1_V_36 = NTCNR_0X024;
  NtcNr1 Test_NtcNr1_V_37 = NTCNR_0X025;
  NtcNr1 Test_NtcNr1_V_38 = NTCNR_0X026;
  NtcNr1 Test_NtcNr1_V_39 = NTCNR_0X027;
  NtcNr1 Test_NtcNr1_V_40 = NTCNR_0X028;
  NtcNr1 Test_NtcNr1_V_41 = NTCNR_0X029;
  NtcNr1 Test_NtcNr1_V_42 = NTCNR_0X02A;
  NtcNr1 Test_NtcNr1_V_43 = NTCNR_0X02B;
  NtcNr1 Test_NtcNr1_V_44 = NTCNR_0X02C;
  NtcNr1 Test_NtcNr1_V_45 = NTCNR_0X02D;
  NtcNr1 Test_NtcNr1_V_46 = NTCNR_0X02E;
  NtcNr1 Test_NtcNr1_V_47 = NTCNR_0X02F;
  NtcNr1 Test_NtcNr1_V_48 = NTCNR_0X030;
  NtcNr1 Test_NtcNr1_V_49 = NTCNR_0X031;
  NtcNr1 Test_NtcNr1_V_50 = NTCNR_0X032;
  NtcNr1 Test_NtcNr1_V_51 = NTCNR_0X033;
  NtcNr1 Test_NtcNr1_V_52 = NTCNR_0X034;
  NtcNr1 Test_NtcNr1_V_53 = NTCNR_0X035;
  NtcNr1 Test_NtcNr1_V_54 = NTCNR_0X036;
  NtcNr1 Test_NtcNr1_V_55 = NTCNR_0X037;
  NtcNr1 Test_NtcNr1_V_56 = NTCNR_0X038;
  NtcNr1 Test_NtcNr1_V_57 = NTCNR_0X039;
  NtcNr1 Test_NtcNr1_V_58 = NTCNR_0X03A;
  NtcNr1 Test_NtcNr1_V_59 = NTCNR_0X03B;
  NtcNr1 Test_NtcNr1_V_60 = NTCNR_0X03C;
  NtcNr1 Test_NtcNr1_V_61 = NTCNR_0X03D;
  NtcNr1 Test_NtcNr1_V_62 = NTCNR_0X03E;
  NtcNr1 Test_NtcNr1_V_63 = NTCNR_0X03F;
  NtcNr1 Test_NtcNr1_V_64 = NTCNR_0X040;
  NtcNr1 Test_NtcNr1_V_65 = NTCNR_0X041;
  NtcNr1 Test_NtcNr1_V_66 = NTCNR_0X042;
  NtcNr1 Test_NtcNr1_V_67 = NTCNR_0X043;
  NtcNr1 Test_NtcNr1_V_68 = NTCNR_0X044;
  NtcNr1 Test_NtcNr1_V_69 = NTCNR_0X045;
  NtcNr1 Test_NtcNr1_V_70 = NTCNR_0X046;
  NtcNr1 Test_NtcNr1_V_71 = NTCNR_0X047;
  NtcNr1 Test_NtcNr1_V_72 = NTCNR_0X048;
  NtcNr1 Test_NtcNr1_V_73 = NTCNR_0X049;
  NtcNr1 Test_NtcNr1_V_74 = NTCNR_0X04A;
  NtcNr1 Test_NtcNr1_V_75 = NTCNR_0X04B;
  NtcNr1 Test_NtcNr1_V_76 = NTCNR_0X04C;
  NtcNr1 Test_NtcNr1_V_77 = NTCNR_0X04D;
  NtcNr1 Test_NtcNr1_V_78 = NTCNR_0X04E;
  NtcNr1 Test_NtcNr1_V_79 = NTCNR_0X04F;
  NtcNr1 Test_NtcNr1_V_80 = NTCNR_0X050;
  NtcNr1 Test_NtcNr1_V_81 = NTCNR_0X051;
  NtcNr1 Test_NtcNr1_V_82 = NTCNR_0X052;
  NtcNr1 Test_NtcNr1_V_83 = NTCNR_0X053;
  NtcNr1 Test_NtcNr1_V_84 = NTCNR_0X054;
  NtcNr1 Test_NtcNr1_V_85 = NTCNR_0X055;
  NtcNr1 Test_NtcNr1_V_86 = NTCNR_0X056;
  NtcNr1 Test_NtcNr1_V_87 = NTCNR_0X057;
  NtcNr1 Test_NtcNr1_V_88 = NTCNR_0X058;
  NtcNr1 Test_NtcNr1_V_89 = NTCNR_0X059;
  NtcNr1 Test_NtcNr1_V_90 = NTCNR_0X05A;
  NtcNr1 Test_NtcNr1_V_91 = NTCNR_0X05B;
  NtcNr1 Test_NtcNr1_V_92 = NTCNR_0X05C;
  NtcNr1 Test_NtcNr1_V_93 = NTCNR_0X05D;
  NtcNr1 Test_NtcNr1_V_94 = NTCNR_0X05E;
  NtcNr1 Test_NtcNr1_V_95 = NTCNR_0X05F;
  NtcNr1 Test_NtcNr1_V_96 = NTCNR_0X060;
  NtcNr1 Test_NtcNr1_V_97 = NTCNR_0X061;
  NtcNr1 Test_NtcNr1_V_98 = NTCNR_0X062;
  NtcNr1 Test_NtcNr1_V_99 = NTCNR_0X063;
  NtcNr1 Test_NtcNr1_V_100 = NTCNR_0X064;
  NtcNr1 Test_NtcNr1_V_101 = NTCNR_0X065;
  NtcNr1 Test_NtcNr1_V_102 = NTCNR_0X066;
  NtcNr1 Test_NtcNr1_V_103 = NTCNR_0X067;
  NtcNr1 Test_NtcNr1_V_104 = NTCNR_0X068;
  NtcNr1 Test_NtcNr1_V_105 = NTCNR_0X069;
  NtcNr1 Test_NtcNr1_V_106 = NTCNR_0X06A;
  NtcNr1 Test_NtcNr1_V_107 = NTCNR_0X06B;
  NtcNr1 Test_NtcNr1_V_108 = NTCNR_0X06C;
  NtcNr1 Test_NtcNr1_V_109 = NTCNR_0X06D;
  NtcNr1 Test_NtcNr1_V_110 = NTCNR_0X06E;
  NtcNr1 Test_NtcNr1_V_111 = NTCNR_0X06F;
  NtcNr1 Test_NtcNr1_V_112 = NTCNR_0X070;
  NtcNr1 Test_NtcNr1_V_113 = NTCNR_0X071;
  NtcNr1 Test_NtcNr1_V_114 = NTCNR_0X072;
  NtcNr1 Test_NtcNr1_V_115 = NTCNR_0X073;
  NtcNr1 Test_NtcNr1_V_116 = NTCNR_0X074;
  NtcNr1 Test_NtcNr1_V_117 = NTCNR_0X075;
  NtcNr1 Test_NtcNr1_V_118 = NTCNR_0X076;
  NtcNr1 Test_NtcNr1_V_119 = NTCNR_0X077;
  NtcNr1 Test_NtcNr1_V_120 = NTCNR_0X078;
  NtcNr1 Test_NtcNr1_V_121 = NTCNR_0X079;
  NtcNr1 Test_NtcNr1_V_122 = NTCNR_0X07A;
  NtcNr1 Test_NtcNr1_V_123 = NTCNR_0X07B;
  NtcNr1 Test_NtcNr1_V_124 = NTCNR_0X07C;
  NtcNr1 Test_NtcNr1_V_125 = NTCNR_0X07D;
  NtcNr1 Test_NtcNr1_V_126 = NTCNR_0X07E;
  NtcNr1 Test_NtcNr1_V_127 = NTCNR_0X07F;
  NtcNr1 Test_NtcNr1_V_128 = NTCNR_0X080;
  NtcNr1 Test_NtcNr1_V_129 = NTCNR_0X081;
  NtcNr1 Test_NtcNr1_V_130 = NTCNR_0X082;
  NtcNr1 Test_NtcNr1_V_131 = NTCNR_0X083;
  NtcNr1 Test_NtcNr1_V_132 = NTCNR_0X084;
  NtcNr1 Test_NtcNr1_V_133 = NTCNR_0X085;
  NtcNr1 Test_NtcNr1_V_134 = NTCNR_0X086;
  NtcNr1 Test_NtcNr1_V_135 = NTCNR_0X087;
  NtcNr1 Test_NtcNr1_V_136 = NTCNR_0X088;
  NtcNr1 Test_NtcNr1_V_137 = NTCNR_0X089;
  NtcNr1 Test_NtcNr1_V_138 = NTCNR_0X08A;
  NtcNr1 Test_NtcNr1_V_139 = NTCNR_0X08B;
  NtcNr1 Test_NtcNr1_V_140 = NTCNR_0X08C;
  NtcNr1 Test_NtcNr1_V_141 = NTCNR_0X08D;
  NtcNr1 Test_NtcNr1_V_142 = NTCNR_0X08E;
  NtcNr1 Test_NtcNr1_V_143 = NTCNR_0X08F;
  NtcNr1 Test_NtcNr1_V_144 = NTCNR_0X090;
  NtcNr1 Test_NtcNr1_V_145 = NTCNR_0X091;
  NtcNr1 Test_NtcNr1_V_146 = NTCNR_0X092;
  NtcNr1 Test_NtcNr1_V_147 = NTCNR_0X093;
  NtcNr1 Test_NtcNr1_V_148 = NTCNR_0X094;
  NtcNr1 Test_NtcNr1_V_149 = NTCNR_0X095;
  NtcNr1 Test_NtcNr1_V_150 = NTCNR_0X096;
  NtcNr1 Test_NtcNr1_V_151 = NTCNR_0X097;
  NtcNr1 Test_NtcNr1_V_152 = NTCNR_0X098;
  NtcNr1 Test_NtcNr1_V_153 = NTCNR_0X099;
  NtcNr1 Test_NtcNr1_V_154 = NTCNR_0X09A;
  NtcNr1 Test_NtcNr1_V_155 = NTCNR_0X09B;
  NtcNr1 Test_NtcNr1_V_156 = NTCNR_0X09C;
  NtcNr1 Test_NtcNr1_V_157 = NTCNR_0X09D;
  NtcNr1 Test_NtcNr1_V_158 = NTCNR_0X09E;
  NtcNr1 Test_NtcNr1_V_159 = NTCNR_0X09F;
  NtcNr1 Test_NtcNr1_V_160 = NTCNR_0X0A0;
  NtcNr1 Test_NtcNr1_V_161 = NTCNR_0X0A1;
  NtcNr1 Test_NtcNr1_V_162 = NTCNR_0X0A2;
  NtcNr1 Test_NtcNr1_V_163 = NTCNR_0X0A3;
  NtcNr1 Test_NtcNr1_V_164 = NTCNR_0X0A4;
  NtcNr1 Test_NtcNr1_V_165 = NTCNR_0X0A5;
  NtcNr1 Test_NtcNr1_V_166 = NTCNR_0X0A6;
  NtcNr1 Test_NtcNr1_V_167 = NTCNR_0X0A7;
  NtcNr1 Test_NtcNr1_V_168 = NTCNR_0X0A8;
  NtcNr1 Test_NtcNr1_V_169 = NTCNR_0X0A9;
  NtcNr1 Test_NtcNr1_V_170 = NTCNR_0X0AA;
  NtcNr1 Test_NtcNr1_V_171 = NTCNR_0X0AB;
  NtcNr1 Test_NtcNr1_V_172 = NTCNR_0X0AC;
  NtcNr1 Test_NtcNr1_V_173 = NTCNR_0X0AD;
  NtcNr1 Test_NtcNr1_V_174 = NTCNR_0X0AE;
  NtcNr1 Test_NtcNr1_V_175 = NTCNR_0X0AF;
  NtcNr1 Test_NtcNr1_V_176 = NTCNR_0X0B0;
  NtcNr1 Test_NtcNr1_V_177 = NTCNR_0X0B1;
  NtcNr1 Test_NtcNr1_V_178 = NTCNR_0X0B2;
  NtcNr1 Test_NtcNr1_V_179 = NTCNR_0X0B3;
  NtcNr1 Test_NtcNr1_V_180 = NTCNR_0X0B4;
  NtcNr1 Test_NtcNr1_V_181 = NTCNR_0X0B5;
  NtcNr1 Test_NtcNr1_V_182 = NTCNR_0X0B6;
  NtcNr1 Test_NtcNr1_V_183 = NTCNR_0X0B7;
  NtcNr1 Test_NtcNr1_V_184 = NTCNR_0X0B8;
  NtcNr1 Test_NtcNr1_V_185 = NTCNR_0X0B9;
  NtcNr1 Test_NtcNr1_V_186 = NTCNR_0X0BA;
  NtcNr1 Test_NtcNr1_V_187 = NTCNR_0X0BB;
  NtcNr1 Test_NtcNr1_V_188 = NTCNR_0X0BC;
  NtcNr1 Test_NtcNr1_V_189 = NTCNR_0X0BD;
  NtcNr1 Test_NtcNr1_V_190 = NTCNR_0X0BE;
  NtcNr1 Test_NtcNr1_V_191 = NTCNR_0X0BF;
  NtcNr1 Test_NtcNr1_V_192 = NTCNR_0X0C0;
  NtcNr1 Test_NtcNr1_V_193 = NTCNR_0X0C1;
  NtcNr1 Test_NtcNr1_V_194 = NTCNR_0X0C2;
  NtcNr1 Test_NtcNr1_V_195 = NTCNR_0X0C3;
  NtcNr1 Test_NtcNr1_V_196 = NTCNR_0X0C4;
  NtcNr1 Test_NtcNr1_V_197 = NTCNR_0X0C5;
  NtcNr1 Test_NtcNr1_V_198 = NTCNR_0X0C6;
  NtcNr1 Test_NtcNr1_V_199 = NTCNR_0X0C7;
  NtcNr1 Test_NtcNr1_V_200 = NTCNR_0X0C8;
  NtcNr1 Test_NtcNr1_V_201 = NTCNR_0X0C9;
  NtcNr1 Test_NtcNr1_V_202 = NTCNR_0X0CA;
  NtcNr1 Test_NtcNr1_V_203 = NTCNR_0X0CB;
  NtcNr1 Test_NtcNr1_V_204 = NTCNR_0X0CC;
  NtcNr1 Test_NtcNr1_V_205 = NTCNR_0X0CD;
  NtcNr1 Test_NtcNr1_V_206 = NTCNR_0X0CE;
  NtcNr1 Test_NtcNr1_V_207 = NTCNR_0X0CF;
  NtcNr1 Test_NtcNr1_V_208 = NTCNR_0X0D0;
  NtcNr1 Test_NtcNr1_V_209 = NTCNR_0X0D1;
  NtcNr1 Test_NtcNr1_V_210 = NTCNR_0X0D2;
  NtcNr1 Test_NtcNr1_V_211 = NTCNR_0X0D3;
  NtcNr1 Test_NtcNr1_V_212 = NTCNR_0X0D4;
  NtcNr1 Test_NtcNr1_V_213 = NTCNR_0X0D5;
  NtcNr1 Test_NtcNr1_V_214 = NTCNR_0X0D6;
  NtcNr1 Test_NtcNr1_V_215 = NTCNR_0X0D7;
  NtcNr1 Test_NtcNr1_V_216 = NTCNR_0X0D8;
  NtcNr1 Test_NtcNr1_V_217 = NTCNR_0X0D9;
  NtcNr1 Test_NtcNr1_V_218 = NTCNR_0X0DA;
  NtcNr1 Test_NtcNr1_V_219 = NTCNR_0X0DB;
  NtcNr1 Test_NtcNr1_V_220 = NTCNR_0X0DC;
  NtcNr1 Test_NtcNr1_V_221 = NTCNR_0X0DD;
  NtcNr1 Test_NtcNr1_V_222 = NTCNR_0X0DE;
  NtcNr1 Test_NtcNr1_V_223 = NTCNR_0X0DF;
  NtcNr1 Test_NtcNr1_V_224 = NTCNR_0X0E0;
  NtcNr1 Test_NtcNr1_V_225 = NTCNR_0X0E1;
  NtcNr1 Test_NtcNr1_V_226 = NTCNR_0X0E2;
  NtcNr1 Test_NtcNr1_V_227 = NTCNR_0X0E3;
  NtcNr1 Test_NtcNr1_V_228 = NTCNR_0X0E4;
  NtcNr1 Test_NtcNr1_V_229 = NTCNR_0X0E5;
  NtcNr1 Test_NtcNr1_V_230 = NTCNR_0X0E6;
  NtcNr1 Test_NtcNr1_V_231 = NTCNR_0X0E7;
  NtcNr1 Test_NtcNr1_V_232 = NTCNR_0X0E8;
  NtcNr1 Test_NtcNr1_V_233 = NTCNR_0X0E9;
  NtcNr1 Test_NtcNr1_V_234 = NTCNR_0X0EA;
  NtcNr1 Test_NtcNr1_V_235 = NTCNR_0X0EB;
  NtcNr1 Test_NtcNr1_V_236 = NTCNR_0X0EC;
  NtcNr1 Test_NtcNr1_V_237 = NTCNR_0X0ED;
  NtcNr1 Test_NtcNr1_V_238 = NTCNR_0X0EE;
  NtcNr1 Test_NtcNr1_V_239 = NTCNR_0X0EF;
  NtcNr1 Test_NtcNr1_V_240 = NTCNR_0X0F0;
  NtcNr1 Test_NtcNr1_V_241 = NTCNR_0X0F1;
  NtcNr1 Test_NtcNr1_V_242 = NTCNR_0X0F2;
  NtcNr1 Test_NtcNr1_V_243 = NTCNR_0X0F3;
  NtcNr1 Test_NtcNr1_V_244 = NTCNR_0X0F4;
  NtcNr1 Test_NtcNr1_V_245 = NTCNR_0X0F5;
  NtcNr1 Test_NtcNr1_V_246 = NTCNR_0X0F6;
  NtcNr1 Test_NtcNr1_V_247 = NTCNR_0X0F7;
  NtcNr1 Test_NtcNr1_V_248 = NTCNR_0X0F8;
  NtcNr1 Test_NtcNr1_V_249 = NTCNR_0X0F9;
  NtcNr1 Test_NtcNr1_V_250 = NTCNR_0X0FA;
  NtcNr1 Test_NtcNr1_V_251 = NTCNR_0X0FB;
  NtcNr1 Test_NtcNr1_V_252 = NTCNR_0X0FC;
  NtcNr1 Test_NtcNr1_V_253 = NTCNR_0X0FD;
  NtcNr1 Test_NtcNr1_V_254 = NTCNR_0X0FE;
  NtcNr1 Test_NtcNr1_V_255 = NTCNR_0X0FF;
  NtcNr1 Test_NtcNr1_V_256 = NTCNR_0X100;
  NtcNr1 Test_NtcNr1_V_257 = NTCNR_0X101;
  NtcNr1 Test_NtcNr1_V_258 = NTCNR_0X102;
  NtcNr1 Test_NtcNr1_V_259 = NTCNR_0X103;
  NtcNr1 Test_NtcNr1_V_260 = NTCNR_0X104;
  NtcNr1 Test_NtcNr1_V_261 = NTCNR_0X105;
  NtcNr1 Test_NtcNr1_V_262 = NTCNR_0X106;
  NtcNr1 Test_NtcNr1_V_263 = NTCNR_0X107;
  NtcNr1 Test_NtcNr1_V_264 = NTCNR_0X108;
  NtcNr1 Test_NtcNr1_V_265 = NTCNR_0X109;
  NtcNr1 Test_NtcNr1_V_266 = NTCNR_0X10A;
  NtcNr1 Test_NtcNr1_V_267 = NTCNR_0X10B;
  NtcNr1 Test_NtcNr1_V_268 = NTCNR_0X10C;
  NtcNr1 Test_NtcNr1_V_269 = NTCNR_0X10D;
  NtcNr1 Test_NtcNr1_V_270 = NTCNR_0X10E;
  NtcNr1 Test_NtcNr1_V_271 = NTCNR_0X10F;
  NtcNr1 Test_NtcNr1_V_272 = NTCNR_0X110;
  NtcNr1 Test_NtcNr1_V_273 = NTCNR_0X111;
  NtcNr1 Test_NtcNr1_V_274 = NTCNR_0X112;
  NtcNr1 Test_NtcNr1_V_275 = NTCNR_0X113;
  NtcNr1 Test_NtcNr1_V_276 = NTCNR_0X114;
  NtcNr1 Test_NtcNr1_V_277 = NTCNR_0X115;
  NtcNr1 Test_NtcNr1_V_278 = NTCNR_0X116;
  NtcNr1 Test_NtcNr1_V_279 = NTCNR_0X117;
  NtcNr1 Test_NtcNr1_V_280 = NTCNR_0X118;
  NtcNr1 Test_NtcNr1_V_281 = NTCNR_0X119;
  NtcNr1 Test_NtcNr1_V_282 = NTCNR_0X11A;
  NtcNr1 Test_NtcNr1_V_283 = NTCNR_0X11B;
  NtcNr1 Test_NtcNr1_V_284 = NTCNR_0X11C;
  NtcNr1 Test_NtcNr1_V_285 = NTCNR_0X11D;
  NtcNr1 Test_NtcNr1_V_286 = NTCNR_0X11E;
  NtcNr1 Test_NtcNr1_V_287 = NTCNR_0X11F;
  NtcNr1 Test_NtcNr1_V_288 = NTCNR_0X120;
  NtcNr1 Test_NtcNr1_V_289 = NTCNR_0X121;
  NtcNr1 Test_NtcNr1_V_290 = NTCNR_0X122;
  NtcNr1 Test_NtcNr1_V_291 = NTCNR_0X123;
  NtcNr1 Test_NtcNr1_V_292 = NTCNR_0X124;
  NtcNr1 Test_NtcNr1_V_293 = NTCNR_0X125;
  NtcNr1 Test_NtcNr1_V_294 = NTCNR_0X126;
  NtcNr1 Test_NtcNr1_V_295 = NTCNR_0X127;
  NtcNr1 Test_NtcNr1_V_296 = NTCNR_0X128;
  NtcNr1 Test_NtcNr1_V_297 = NTCNR_0X129;
  NtcNr1 Test_NtcNr1_V_298 = NTCNR_0X12A;
  NtcNr1 Test_NtcNr1_V_299 = NTCNR_0X12B;
  NtcNr1 Test_NtcNr1_V_300 = NTCNR_0X12C;
  NtcNr1 Test_NtcNr1_V_301 = NTCNR_0X12D;
  NtcNr1 Test_NtcNr1_V_302 = NTCNR_0X12E;
  NtcNr1 Test_NtcNr1_V_303 = NTCNR_0X12F;
  NtcNr1 Test_NtcNr1_V_304 = NTCNR_0X130;
  NtcNr1 Test_NtcNr1_V_305 = NTCNR_0X131;
  NtcNr1 Test_NtcNr1_V_306 = NTCNR_0X132;
  NtcNr1 Test_NtcNr1_V_307 = NTCNR_0X133;
  NtcNr1 Test_NtcNr1_V_308 = NTCNR_0X134;
  NtcNr1 Test_NtcNr1_V_309 = NTCNR_0X135;
  NtcNr1 Test_NtcNr1_V_310 = NTCNR_0X136;
  NtcNr1 Test_NtcNr1_V_311 = NTCNR_0X137;
  NtcNr1 Test_NtcNr1_V_312 = NTCNR_0X138;
  NtcNr1 Test_NtcNr1_V_313 = NTCNR_0X139;
  NtcNr1 Test_NtcNr1_V_314 = NTCNR_0X13A;
  NtcNr1 Test_NtcNr1_V_315 = NTCNR_0X13B;
  NtcNr1 Test_NtcNr1_V_316 = NTCNR_0X13C;
  NtcNr1 Test_NtcNr1_V_317 = NTCNR_0X13D;
  NtcNr1 Test_NtcNr1_V_318 = NTCNR_0X13E;
  NtcNr1 Test_NtcNr1_V_319 = NTCNR_0X13F;
  NtcNr1 Test_NtcNr1_V_320 = NTCNR_0X140;
  NtcNr1 Test_NtcNr1_V_321 = NTCNR_0X141;
  NtcNr1 Test_NtcNr1_V_322 = NTCNR_0X142;
  NtcNr1 Test_NtcNr1_V_323 = NTCNR_0X143;
  NtcNr1 Test_NtcNr1_V_324 = NTCNR_0X144;
  NtcNr1 Test_NtcNr1_V_325 = NTCNR_0X145;
  NtcNr1 Test_NtcNr1_V_326 = NTCNR_0X146;
  NtcNr1 Test_NtcNr1_V_327 = NTCNR_0X147;
  NtcNr1 Test_NtcNr1_V_328 = NTCNR_0X148;
  NtcNr1 Test_NtcNr1_V_329 = NTCNR_0X149;
  NtcNr1 Test_NtcNr1_V_330 = NTCNR_0X14A;
  NtcNr1 Test_NtcNr1_V_331 = NTCNR_0X14B;
  NtcNr1 Test_NtcNr1_V_332 = NTCNR_0X14C;
  NtcNr1 Test_NtcNr1_V_333 = NTCNR_0X14D;
  NtcNr1 Test_NtcNr1_V_334 = NTCNR_0X14E;
  NtcNr1 Test_NtcNr1_V_335 = NTCNR_0X14F;
  NtcNr1 Test_NtcNr1_V_336 = NTCNR_0X150;
  NtcNr1 Test_NtcNr1_V_337 = NTCNR_0X151;
  NtcNr1 Test_NtcNr1_V_338 = NTCNR_0X152;
  NtcNr1 Test_NtcNr1_V_339 = NTCNR_0X153;
  NtcNr1 Test_NtcNr1_V_340 = NTCNR_0X154;
  NtcNr1 Test_NtcNr1_V_341 = NTCNR_0X155;
  NtcNr1 Test_NtcNr1_V_342 = NTCNR_0X156;
  NtcNr1 Test_NtcNr1_V_343 = NTCNR_0X157;
  NtcNr1 Test_NtcNr1_V_344 = NTCNR_0X158;
  NtcNr1 Test_NtcNr1_V_345 = NTCNR_0X159;
  NtcNr1 Test_NtcNr1_V_346 = NTCNR_0X15A;
  NtcNr1 Test_NtcNr1_V_347 = NTCNR_0X15B;
  NtcNr1 Test_NtcNr1_V_348 = NTCNR_0X15C;
  NtcNr1 Test_NtcNr1_V_349 = NTCNR_0X15D;
  NtcNr1 Test_NtcNr1_V_350 = NTCNR_0X15E;
  NtcNr1 Test_NtcNr1_V_351 = NTCNR_0X15F;
  NtcNr1 Test_NtcNr1_V_352 = NTCNR_0X160;
  NtcNr1 Test_NtcNr1_V_353 = NTCNR_0X161;
  NtcNr1 Test_NtcNr1_V_354 = NTCNR_0X162;
  NtcNr1 Test_NtcNr1_V_355 = NTCNR_0X163;
  NtcNr1 Test_NtcNr1_V_356 = NTCNR_0X164;
  NtcNr1 Test_NtcNr1_V_357 = NTCNR_0X165;
  NtcNr1 Test_NtcNr1_V_358 = NTCNR_0X166;
  NtcNr1 Test_NtcNr1_V_359 = NTCNR_0X167;
  NtcNr1 Test_NtcNr1_V_360 = NTCNR_0X168;
  NtcNr1 Test_NtcNr1_V_361 = NTCNR_0X169;
  NtcNr1 Test_NtcNr1_V_362 = NTCNR_0X16A;
  NtcNr1 Test_NtcNr1_V_363 = NTCNR_0X16B;
  NtcNr1 Test_NtcNr1_V_364 = NTCNR_0X16C;
  NtcNr1 Test_NtcNr1_V_365 = NTCNR_0X16D;
  NtcNr1 Test_NtcNr1_V_366 = NTCNR_0X16E;
  NtcNr1 Test_NtcNr1_V_367 = NTCNR_0X16F;
  NtcNr1 Test_NtcNr1_V_368 = NTCNR_0X170;
  NtcNr1 Test_NtcNr1_V_369 = NTCNR_0X171;
  NtcNr1 Test_NtcNr1_V_370 = NTCNR_0X172;
  NtcNr1 Test_NtcNr1_V_371 = NTCNR_0X173;
  NtcNr1 Test_NtcNr1_V_372 = NTCNR_0X174;
  NtcNr1 Test_NtcNr1_V_373 = NTCNR_0X175;
  NtcNr1 Test_NtcNr1_V_374 = NTCNR_0X176;
  NtcNr1 Test_NtcNr1_V_375 = NTCNR_0X177;
  NtcNr1 Test_NtcNr1_V_376 = NTCNR_0X178;
  NtcNr1 Test_NtcNr1_V_377 = NTCNR_0X179;
  NtcNr1 Test_NtcNr1_V_378 = NTCNR_0X17A;
  NtcNr1 Test_NtcNr1_V_379 = NTCNR_0X17B;
  NtcNr1 Test_NtcNr1_V_380 = NTCNR_0X17C;
  NtcNr1 Test_NtcNr1_V_381 = NTCNR_0X17D;
  NtcNr1 Test_NtcNr1_V_382 = NTCNR_0X17E;
  NtcNr1 Test_NtcNr1_V_383 = NTCNR_0X17F;
  NtcNr1 Test_NtcNr1_V_384 = NTCNR_0X180;
  NtcNr1 Test_NtcNr1_V_385 = NTCNR_0X181;
  NtcNr1 Test_NtcNr1_V_386 = NTCNR_0X182;
  NtcNr1 Test_NtcNr1_V_387 = NTCNR_0X183;
  NtcNr1 Test_NtcNr1_V_388 = NTCNR_0X184;
  NtcNr1 Test_NtcNr1_V_389 = NTCNR_0X185;
  NtcNr1 Test_NtcNr1_V_390 = NTCNR_0X186;
  NtcNr1 Test_NtcNr1_V_391 = NTCNR_0X187;
  NtcNr1 Test_NtcNr1_V_392 = NTCNR_0X188;
  NtcNr1 Test_NtcNr1_V_393 = NTCNR_0X189;
  NtcNr1 Test_NtcNr1_V_394 = NTCNR_0X18A;
  NtcNr1 Test_NtcNr1_V_395 = NTCNR_0X18B;
  NtcNr1 Test_NtcNr1_V_396 = NTCNR_0X18C;
  NtcNr1 Test_NtcNr1_V_397 = NTCNR_0X18D;
  NtcNr1 Test_NtcNr1_V_398 = NTCNR_0X18E;
  NtcNr1 Test_NtcNr1_V_399 = NTCNR_0X18F;
  NtcNr1 Test_NtcNr1_V_400 = NTCNR_0X190;
  NtcNr1 Test_NtcNr1_V_401 = NTCNR_0X191;
  NtcNr1 Test_NtcNr1_V_402 = NTCNR_0X192;
  NtcNr1 Test_NtcNr1_V_403 = NTCNR_0X193;
  NtcNr1 Test_NtcNr1_V_404 = NTCNR_0X194;
  NtcNr1 Test_NtcNr1_V_405 = NTCNR_0X195;
  NtcNr1 Test_NtcNr1_V_406 = NTCNR_0X196;
  NtcNr1 Test_NtcNr1_V_407 = NTCNR_0X197;
  NtcNr1 Test_NtcNr1_V_408 = NTCNR_0X198;
  NtcNr1 Test_NtcNr1_V_409 = NTCNR_0X199;
  NtcNr1 Test_NtcNr1_V_410 = NTCNR_0X19A;
  NtcNr1 Test_NtcNr1_V_411 = NTCNR_0X19B;
  NtcNr1 Test_NtcNr1_V_412 = NTCNR_0X19C;
  NtcNr1 Test_NtcNr1_V_413 = NTCNR_0X19D;
  NtcNr1 Test_NtcNr1_V_414 = NTCNR_0X19E;
  NtcNr1 Test_NtcNr1_V_415 = NTCNR_0X19F;
  NtcNr1 Test_NtcNr1_V_416 = NTCNR_0X1A0;
  NtcNr1 Test_NtcNr1_V_417 = NTCNR_0X1A1;
  NtcNr1 Test_NtcNr1_V_418 = NTCNR_0X1A2;
  NtcNr1 Test_NtcNr1_V_419 = NTCNR_0X1A3;
  NtcNr1 Test_NtcNr1_V_420 = NTCNR_0X1A4;
  NtcNr1 Test_NtcNr1_V_421 = NTCNR_0X1A5;
  NtcNr1 Test_NtcNr1_V_422 = NTCNR_0X1A6;
  NtcNr1 Test_NtcNr1_V_423 = NTCNR_0X1A7;
  NtcNr1 Test_NtcNr1_V_424 = NTCNR_0X1A8;
  NtcNr1 Test_NtcNr1_V_425 = NTCNR_0X1A9;
  NtcNr1 Test_NtcNr1_V_426 = NTCNR_0X1AA;
  NtcNr1 Test_NtcNr1_V_427 = NTCNR_0X1AB;
  NtcNr1 Test_NtcNr1_V_428 = NTCNR_0X1AC;
  NtcNr1 Test_NtcNr1_V_429 = NTCNR_0X1AD;
  NtcNr1 Test_NtcNr1_V_430 = NTCNR_0X1AE;
  NtcNr1 Test_NtcNr1_V_431 = NTCNR_0X1AF;
  NtcNr1 Test_NtcNr1_V_432 = NTCNR_0X1B0;
  NtcNr1 Test_NtcNr1_V_433 = NTCNR_0X1B1;
  NtcNr1 Test_NtcNr1_V_434 = NTCNR_0X1B2;
  NtcNr1 Test_NtcNr1_V_435 = NTCNR_0X1B3;
  NtcNr1 Test_NtcNr1_V_436 = NTCNR_0X1B4;
  NtcNr1 Test_NtcNr1_V_437 = NTCNR_0X1B5;
  NtcNr1 Test_NtcNr1_V_438 = NTCNR_0X1B6;
  NtcNr1 Test_NtcNr1_V_439 = NTCNR_0X1B7;
  NtcNr1 Test_NtcNr1_V_440 = NTCNR_0X1B8;
  NtcNr1 Test_NtcNr1_V_441 = NTCNR_0X1B9;
  NtcNr1 Test_NtcNr1_V_442 = NTCNR_0X1BA;
  NtcNr1 Test_NtcNr1_V_443 = NTCNR_0X1BB;
  NtcNr1 Test_NtcNr1_V_444 = NTCNR_0X1BC;
  NtcNr1 Test_NtcNr1_V_445 = NTCNR_0X1BD;
  NtcNr1 Test_NtcNr1_V_446 = NTCNR_0X1BE;
  NtcNr1 Test_NtcNr1_V_447 = NTCNR_0X1BF;
  NtcNr1 Test_NtcNr1_V_448 = NTCNR_0X1C0;
  NtcNr1 Test_NtcNr1_V_449 = NTCNR_0X1C1;
  NtcNr1 Test_NtcNr1_V_450 = NTCNR_0X1C2;
  NtcNr1 Test_NtcNr1_V_451 = NTCNR_0X1C3;
  NtcNr1 Test_NtcNr1_V_452 = NTCNR_0X1C4;
  NtcNr1 Test_NtcNr1_V_453 = NTCNR_0X1C5;
  NtcNr1 Test_NtcNr1_V_454 = NTCNR_0X1C6;
  NtcNr1 Test_NtcNr1_V_455 = NTCNR_0X1C7;
  NtcNr1 Test_NtcNr1_V_456 = NTCNR_0X1C8;
  NtcNr1 Test_NtcNr1_V_457 = NTCNR_0X1C9;
  NtcNr1 Test_NtcNr1_V_458 = NTCNR_0X1CA;
  NtcNr1 Test_NtcNr1_V_459 = NTCNR_0X1CB;
  NtcNr1 Test_NtcNr1_V_460 = NTCNR_0X1CC;
  NtcNr1 Test_NtcNr1_V_461 = NTCNR_0X1CD;
  NtcNr1 Test_NtcNr1_V_462 = NTCNR_0X1CE;
  NtcNr1 Test_NtcNr1_V_463 = NTCNR_0X1CF;
  NtcNr1 Test_NtcNr1_V_464 = NTCNR_0X1D0;
  NtcNr1 Test_NtcNr1_V_465 = NTCNR_0X1D1;
  NtcNr1 Test_NtcNr1_V_466 = NTCNR_0X1D2;
  NtcNr1 Test_NtcNr1_V_467 = NTCNR_0X1D3;
  NtcNr1 Test_NtcNr1_V_468 = NTCNR_0X1D4;
  NtcNr1 Test_NtcNr1_V_469 = NTCNR_0X1D5;
  NtcNr1 Test_NtcNr1_V_470 = NTCNR_0X1D6;
  NtcNr1 Test_NtcNr1_V_471 = NTCNR_0X1D7;
  NtcNr1 Test_NtcNr1_V_472 = NTCNR_0X1D8;
  NtcNr1 Test_NtcNr1_V_473 = NTCNR_0X1D9;
  NtcNr1 Test_NtcNr1_V_474 = NTCNR_0X1DA;
  NtcNr1 Test_NtcNr1_V_475 = NTCNR_0X1DB;
  NtcNr1 Test_NtcNr1_V_476 = NTCNR_0X1DC;
  NtcNr1 Test_NtcNr1_V_477 = NTCNR_0X1DD;
  NtcNr1 Test_NtcNr1_V_478 = NTCNR_0X1DE;
  NtcNr1 Test_NtcNr1_V_479 = NTCNR_0X1DF;
  NtcNr1 Test_NtcNr1_V_480 = NTCNR_0X1E0;
  NtcNr1 Test_NtcNr1_V_481 = NTCNR_0X1E1;
  NtcNr1 Test_NtcNr1_V_482 = NTCNR_0X1E2;
  NtcNr1 Test_NtcNr1_V_483 = NTCNR_0X1E3;
  NtcNr1 Test_NtcNr1_V_484 = NTCNR_0X1E4;
  NtcNr1 Test_NtcNr1_V_485 = NTCNR_0X1E5;
  NtcNr1 Test_NtcNr1_V_486 = NTCNR_0X1E6;
  NtcNr1 Test_NtcNr1_V_487 = NTCNR_0X1E7;
  NtcNr1 Test_NtcNr1_V_488 = NTCNR_0X1E8;
  NtcNr1 Test_NtcNr1_V_489 = NTCNR_0X1E9;
  NtcNr1 Test_NtcNr1_V_490 = NTCNR_0X1EA;
  NtcNr1 Test_NtcNr1_V_491 = NTCNR_0X1EB;
  NtcNr1 Test_NtcNr1_V_492 = NTCNR_0X1EC;
  NtcNr1 Test_NtcNr1_V_493 = NTCNR_0X1ED;
  NtcNr1 Test_NtcNr1_V_494 = NTCNR_0X1EE;
  NtcNr1 Test_NtcNr1_V_495 = NTCNR_0X1EF;
  NtcNr1 Test_NtcNr1_V_496 = NTCNR_0X1F0;
  NtcNr1 Test_NtcNr1_V_497 = NTCNR_0X1F1;
  NtcNr1 Test_NtcNr1_V_498 = NTCNR_0X1F2;
  NtcNr1 Test_NtcNr1_V_499 = NTCNR_0X1F3;
  NtcNr1 Test_NtcNr1_V_500 = NTCNR_0X1F4;
  NtcNr1 Test_NtcNr1_V_501 = NTCNR_0X1F5;
  NtcNr1 Test_NtcNr1_V_502 = NTCNR_0X1F6;
  NtcNr1 Test_NtcNr1_V_503 = NTCNR_0X1F7;
  NtcNr1 Test_NtcNr1_V_504 = NTCNR_0X1F8;
  NtcNr1 Test_NtcNr1_V_505 = NTCNR_0X1F9;
  NtcNr1 Test_NtcNr1_V_506 = NTCNR_0X1FA;
  NtcNr1 Test_NtcNr1_V_507 = NTCNR_0X1FB;
  NtcNr1 Test_NtcNr1_V_508 = NTCNR_0X1FC;
  NtcNr1 Test_NtcNr1_V_509 = NTCNR_0X1FD;
  NtcNr1 Test_NtcNr1_V_510 = NTCNR_0X1FE;
  NtcNr1 Test_NtcNr1_V_511 = NTCNR_0X1FF;

  NtcSts1 Test_NtcSts1_V_1 = NTCSTS_PASSD;
  NtcSts1 Test_NtcSts1_V_2 = NTCSTS_FAILD;
  NtcSts1 Test_NtcSts1_V_3 = NTCSTS_PREPASSD;
  NtcSts1 Test_NtcSts1_V_4 = NTCSTS_PREFAILD;

  NvM_RequestResultType Test_NvM_RequestResultType_V_1 = NVM_REQ_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_2 = NVM_REQ_NOT_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_3 = NVM_REQ_PENDING;
  NvM_RequestResultType Test_NvM_RequestResultType_V_4 = NVM_REQ_INTEGRITY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_5 = NVM_REQ_BLOCK_SKIPPED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_6 = NVM_REQ_NV_INVALIDATED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_7 = NVM_REQ_CANCELED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_8 = NVM_REQ_REDUNDANCY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_9 = NVM_REQ_RESTORED_FROM_ROM;

  SysSt1 Test_SysSt1_V_1 = SYSST_DI;
  SysSt1 Test_SysSt1_V_2 = SYSST_OFF;
  SysSt1 Test_SysSt1_V_3 = SYSST_ENA;
  SysSt1 Test_SysSt1_V_4 = SYSST_WRMININ;
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
