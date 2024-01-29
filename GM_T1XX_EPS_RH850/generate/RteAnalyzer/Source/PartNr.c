/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PartNr.c
 *        Config:  EPS.dpa
 *     SW-C Type:  PartNr
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <PartNr>
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
 * GmSysPwrMod1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * MfgEnaSt1
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
 *********************************************************************************************************************/

#include "Rte_PartNr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_PartNr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void PartNr_TestDefines(void);


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
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * GmSysPwrMod1: Enumeration of integer in interval [0...255] with enumerators
 *   GMSYSPWRMOD_OFF (0U)
 *   GMSYSPWRMOD_ACSY (1U)
 *   GMSYSPWRMOD_RUN (2U)
 *   GMSYSPWRMOD_CRK (3U)
 * MfgEnaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   MFGENAST_PRDNMOD (0U)
 *   MFGENAST_MFGMOD (1U)
 *   MFGENAST_TESTMOD (2U)
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
 * Ary1D_u8_10: Array with 10 element(s) of type uint8
 * Ary1D_u8_14: Array with 14 element(s) of type uint8
 * Ary1D_u8_16: Array with 16 element(s) of type uint8
 * Ary1D_u8_17: Array with 17 element(s) of type uint8
 * Ary1D_u8_2: Array with 2 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_4: Array with 4 element(s) of type uint8
 * Ary1D_u8_5: Array with 5 element(s) of type uint8
 * Ary1D_u8_6: Array with 6 element(s) of type uint8
 * Ary1D_u8_7: Array with 7 element(s) of type uint8
 * Ary1D_u8_822: Array with 822 element(s) of type uint8
 * Ary1D_u8_9: Array with 9 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PartNrCalProgdSts(void)
 *   uint8 *Rte_Pim_PartNrCustMfgEnaCntr(void)
 *   boolean *Rte_Pim_PartNrPrevSysPwrModRun(void)
 *   uint8 *Rte_Pim_PartNrBasMdlPartNr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_6
 *   uint8 *Rte_Pim_PartNrCcaMfgTrakg(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_9
 *   uint8 *Rte_Pim_PartNrCtrlPidSeedKey(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_10
 *   uint8 *Rte_Pim_PartNrDataUniversalNrSysId(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_9
 *   uint8 *Rte_Pim_PartNrEcuId(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_16
 *   uint8 *Rte_Pim_PartNrEndMdlPartNr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_6
 *   uint8 *Rte_Pim_PartNrNxtrMfgTrakg(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_7
 *   uint8 *Rte_Pim_PartNrProgmDate(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_PartNrProgmSessionSeedKey(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_10
 *   uint8 *Rte_Pim_PartNrRepairShopCod(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_20
 *   uint8 *Rte_Pim_PartNrSecuBypAuthn(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_822
 *   uint8 *Rte_Pim_PartNrSysCodVersNr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_Pim_PartNrSysName(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_20
 *   uint8 *Rte_Pim_PartNrVinData(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_17
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 Rte_CData_PartNrCalProgdStsDft(void)
 *   uint8 Rte_CData_PartNrCustMfgEnaCntrDft(void)
 *   uint8 *Rte_CData_PartNrBasMdlPartNrDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_6
 *   uint8 *Rte_CData_PartNrCcaMfgTrakgDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_9
 *   uint8 *Rte_CData_PartNrCtrlPidSeedKeyDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_10
 *   uint8 *Rte_CData_PartNrDataUniversalNrSysIdDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_9
 *   uint8 *Rte_CData_PartNrEndMdlPartNrDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_6
 *   uint8 *Rte_CData_PartNrNxtrMfgTrakgDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_7
 *   uint8 *Rte_CData_PartNrProgmDateDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_PartNrProgmSessionSeedKeyDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_10
 *   uint8 *Rte_CData_PartNrRepairShopCodDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_20
 *   uint8 *Rte_CData_PartNrSysCodVersNrDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_CData_PartNrSysNameDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_20
 *   uint8 *Rte_CData_PartNrVinDataDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_17
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 *Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_14
 *
 *********************************************************************************************************************/


#define PartNr_START_SEC_CODE
#include "PartNr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrBasMdlPartNrAlphaCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrAlphaCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
 *     Argument BasMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrAlphaCodRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrAlphaCodRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  PartNr_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrBasMdlPartNrAlphaCodWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrAlphaCodWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrAlphaCodWr_Oper(const uint8 *BasMdlPartNrAlphaCod)
 *     Argument BasMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrAlphaCodWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrAlphaCodWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrBasMdlPartNrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
 *     Argument BasMdlPartNr: uint8* is of type Ary1D_u8_4
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrBasMdlPartNrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrWr_Oper(const uint8 *BasMdlPartNr)
 *     Argument BasMdlPartNr: uint8* is of type Ary1D_u8_4
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrCalProgdStsRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCalProgdStsRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCalProgdStsRd_Oper(uint8 *CalProgdSts)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCalProgdStsRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCalProgdStsRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CalProgdSts) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCalProgdStsRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCalProgdStsWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCalProgdStsWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCalProgdStsWr_Oper(uint8 CalProgdSts)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCalProgdStsWr1_InvldVal
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCalProgdStsWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PartNr_CODE) PartNrCalProgdStsWr_Oper(uint8 CalProgdSts) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCalProgdStsWr_Oper (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(FALSE);
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

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCcaMfgTrakgRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCcaMfgTrakgRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
 *     Argument CcaMfgTrakg: uint8* is of type Ary1D_u8_9
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCcaMfgTrakgRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCcaMfgTrakgRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCcaMfgTrakgWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCcaMfgTrakgWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCcaMfgTrakgWr_Oper(const uint8 *CcaMfgTrakg)
 *     Argument CcaMfgTrakg: uint8* is of type Ary1D_u8_9
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCcaMfgTrakgWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCcaMfgTrakgWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrCmpdVehPartnProdtStructRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCmpdVehPartnProdtStructRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCmpdVehPartnProdtStructRd_Oper(uint8 *CmpdVehPartnProdtStruct)
 *     Argument CmpdVehPartnProdtStruct: uint8* is of type Ary1D_u8_14
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCmpdVehPartnProdtStructRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCmpdVehPartnProdtStructRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidKeyChk_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidKeyChk>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCtrlPidKeyChk_Oper(const uint8 *CtrlPidKey)
 *     Argument CtrlPidKey: uint8* is of type Ary1D_u8_5
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCtrlPidKeyChk1_InvldKey
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidKeyChk_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidKeyChk_Oper (returns application error)
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidKeyWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidKeyWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidKeyWr_Oper(const uint8 *CtrlPidKey)
 *     Argument CtrlPidKey: uint8* is of type Ary1D_u8_5
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidKeyWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidKeyWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrCtrlPidSeedKeyWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedKeyWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidSeedKeyWr_Oper(const uint8 *CtrlPidSeedKey)
 *     Argument CtrlPidSeedKey: uint8* is of type Ary1D_u8_10
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedKeyWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedKeyWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrCtrlPidSeedRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidSeedRd_Oper(uint8 *CtrlPidSeed)
 *     Argument CtrlPidSeed: uint8* is of type Ary1D_u8_5
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidSeedUpprByteRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedUpprByteRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidSeedUpprByteRd_Oper(uint8 *CtrlPidSeedUpprByte)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedUpprByteRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCtrlPidSeedUpprByteRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeedUpprByte) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedUpprByteRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidSeedUpprByteWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedUpprByteWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedUpprByteWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedUpprByteWr_Oper (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(FALSE);
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

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCustMfgEnaCntrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCustMfgEnaCntrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCustMfgEnaCntrRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CustMfgEnaCntr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCustMfgEnaCntrRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCustMfgEnaCntrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCustMfgEnaCntrWr>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCustMfgEnaCntrWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PartNr_CODE) PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCustMfgEnaCntrWr_Oper (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Write_CustMfgEnSt_Val(Rte_InitValue_CustMfgEnSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PartNr_Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(FALSE);
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

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrDataUniversalNrSysIdRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrDataUniversalNrSysIdRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
 *     Argument DataUniversalNrSysId: uint8* is of type Ary1D_u8_9
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrDataUniversalNrSysIdRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrDataUniversalNrSysIdRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrDataUniversalNrSysIdWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrDataUniversalNrSysIdWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrDataUniversalNrSysIdWr_Oper(const uint8 *DataUniversalNrSysId)
 *     Argument DataUniversalNrSysId: uint8* is of type Ary1D_u8_9
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrDataUniversalNrSysIdWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrDataUniversalNrSysIdWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrEcuIdRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEcuIdRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
 *     Argument EcuId_Arg: uint8* is of type Ary1D_u8_16
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEcuIdRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEcuIdRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEcuIdWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEcuIdWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrEcuId_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEcuIdWr_Oper(const uint8 *EcuId_Arg)
 *     Argument EcuId_Arg: uint8* is of type Ary1D_u8_16
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEcuIdWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrEcuIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEcuIdWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrEcuId_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrEndMdlPartNrAlphaCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrAlphaCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
 *     Argument EndMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrAlphaCodRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrAlphaCodRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEndMdlPartNrAlphaCodWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrAlphaCodWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod)
 *     Argument EndMdlPartNrAlphaCod: uint8* is of type Ary1D_u8_2
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrAlphaCodWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrAlphaCodWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrEndMdlPartNrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
 *     Argument EndMdlPartNr: uint8* is of type Ary1D_u8_4
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEndMdlPartNrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr)
 *     Argument EndMdlPartNr: uint8* is of type Ary1D_u8_4
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrInit1
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
 *   Std_ReturnType Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Write_CustMfgEnSt_Val(Rte_InitValue_CustMfgEnSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrLstRepairShopCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrLstRepairShopCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrLstRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Argument RepairShopCod: uint8* is of type Ary1D_u8_10
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrLstRepairShopCodRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrLstRepairShopCodRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrNxtrMfgTrakgRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrNxtrMfgTrakgRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
 *     Argument NxtrMfgTrakg: uint8* is of type Ary1D_u8_7
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrNxtrMfgTrakgRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrNxtrMfgTrakgRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrNxtrMfgTrakgWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrNxtrMfgTrakgWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg)
 *     Argument NxtrMfgTrakg: uint8* is of type Ary1D_u8_7
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrNxtrMfgTrakgWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrNxtrMfgTrakgWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrPer1
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
 *   Std_ReturnType Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
 *   Std_ReturnType Rte_Read_SysPwrModRun_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  GmSysPwrMod1 Read_GmSysPwrMod_Val;
  boolean Read_SysPwrModRun_Logl;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Read_GmSysPwrMod_Val(&Read_GmSysPwrMod_Val);
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

  fct_status = TSC_PartNr_Rte_Read_SysPwrModRun_Logl(&Read_SysPwrModRun_Logl);
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

  fct_status = TSC_PartNr_Rte_Write_CustMfgEnSt_Val(Rte_InitValue_CustMfgEnSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PartNr_Rte_Call_SetNtcSts_Oper(0U, 0U, 0U, 0U);
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

  fct_status = TSC_PartNr_Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrProgmDateRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmDateRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrProgmDateRd_Oper(uint8 *ProgmDate)
 *     Argument ProgmDate: uint8* is of type Ary1D_u8_4
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmDateRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmDateRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmDateWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmDateWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrProgmDate_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
 *     Argument ProgmDate: uint8* is of type Ary1D_u8_4
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrProgmDateWr1_OutOfRange
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmDateWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmDateWr_Oper (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrProgmDate_SetRamBlockStatus(FALSE);
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

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmSessionKeyChk_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmSessionKeyChk>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrProgmSessionKeyChk_Oper(const uint8 *ProgmSessionKey)
 *     Argument ProgmSessionKey: uint8* is of type Ary1D_u8_5
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrProgmSessionKeyChk1_InvldKey
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionKeyChk_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionKeyChk_Oper (returns application error)
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmSessionSeedKeyWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmSessionSeedKeyWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrProgmSessionSeedKeyWr_Oper(const uint8 *ProgmSessionSeedKey)
 *     Argument ProgmSessionSeedKey: uint8* is of type Ary1D_u8_10
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionSeedKeyWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionSeedKeyWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrProgmSessionSeedRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmSessionSeedRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrProgmSessionSeedRd_Oper(uint8 *ProgmSessionSeed)
 *     Argument ProgmSessionSeed: uint8* is of type Ary1D_u8_5
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionSeedRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionSeedRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrRepairShopCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrRepairShopCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Argument RepairShopCod: uint8* is of type Ary1D_u8_20
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrRepairShopCodRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrRepairShopCodRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrRepairShopCodWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrRepairShopCodWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
 *     Argument RepairShopCod: uint8* is of type Ary1D_u8_10
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrRepairShopCodWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrRepairShopCodWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrSecuBypAuthnRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSecuBypAuthnRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
 *     Argument SecuBypAuthn_Arg: uint8* is of type Ary1D_u8_822
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSecuBypAuthnRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSecuBypAuthnRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSecuBypAuthnWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSecuBypAuthnWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
 *     Argument SecuBypAuthn_Arg: uint8* is of type Ary1D_u8_822
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSecuBypAuthnWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSecuBypAuthnWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrSysCodVersNrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysCodVersNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
 *     Argument SysCodVersNr: uint8* is of type Ary1D_u8_2
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysCodVersNrRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysCodVersNrRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSysCodVersNrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysCodVersNrWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
 *     Argument SysCodVersNr: uint8* is of type Ary1D_u8_2
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysCodVersNrWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysCodVersNrWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrSysNameRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysNameRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysNameRd_Oper(uint8 *SysName)
 *     Argument SysName: uint8* is of type Ary1D_u8_20
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysNameRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysNameRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSysNameWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysNameWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrSysName_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysNameWr_Oper(const uint8 *SysName)
 *     Argument SysName: uint8* is of type Ary1D_u8_20
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysNameWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysNameWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrSysName_SetRamBlockStatus(FALSE);
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
 * Runnable Entity Name: PartNrVinDataRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrVinDataRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrVinDataRd_Oper(uint8 *VinData)
 *     Argument VinData: uint8* is of type Ary1D_u8_17
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrVinDataRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrVinDataRd_Oper
 *********************************************************************************************************************/

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrVinDataWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrVinDataWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrVinData_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrVinDataWr_Oper(const uint8 *VinData)
 *     Argument VinData: uint8* is of type Ary1D_u8_17
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrVinDataWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrVinDataWr_Oper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 PartNrCalProgdSts;
  uint8 PartNrCustMfgEnaCntr;
  boolean PartNrPrevSysPwrModRun;
  Ary1D_u8_6 PartNrBasMdlPartNr;
  Ary1D_u8_9 PartNrCcaMfgTrakg;
  Ary1D_u8_10 PartNrCtrlPidSeedKey;
  Ary1D_u8_9 PartNrDataUniversalNrSysId;
  Ary1D_u8_16 PartNrEcuId;
  Ary1D_u8_6 PartNrEndMdlPartNr;
  Ary1D_u8_7 PartNrNxtrMfgTrakg;
  Ary1D_u8_4 PartNrProgmDate;
  Ary1D_u8_10 PartNrProgmSessionSeedKey;
  Ary1D_u8_20 PartNrRepairShopCod;
  Ary1D_u8_822 PartNrSecuBypAuthn;
  Ary1D_u8_2 PartNrSysCodVersNr;
  Ary1D_u8_20 PartNrSysName;
  Ary1D_u8_17 PartNrVinData;

  uint8 PartNrCalProgdStsDft_data;
  uint8 PartNrCustMfgEnaCntrDft_data;
  Ary1D_u8_6 PartNrBasMdlPartNrDft_data;
  Ary1D_u8_9 PartNrCcaMfgTrakgDft_data;
  Ary1D_u8_10 PartNrCtrlPidSeedKeyDft_data;
  Ary1D_u8_9 PartNrDataUniversalNrSysIdDft_data;
  Ary1D_u8_6 PartNrEndMdlPartNrDft_data;
  Ary1D_u8_7 PartNrNxtrMfgTrakgDft_data;
  Ary1D_u8_4 PartNrProgmDateDft_data;
  Ary1D_u8_10 PartNrProgmSessionSeedKeyDft_data;
  Ary1D_u8_20 PartNrRepairShopCodDft_data;
  Ary1D_u8_2 PartNrSysCodVersNrDft_data;
  Ary1D_u8_20 PartNrSysNameDft_data;
  Ary1D_u8_17 PartNrVinDataDft_data;

  Ary1D_u8_14 PartNrCmpdVehPartnProdtStruct_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PartNrCalProgdSts = *TSC_PartNr_Rte_Pim_PartNrCalProgdSts();
  *TSC_PartNr_Rte_Pim_PartNrCalProgdSts() = PartNrCalProgdSts;
  PartNrCustMfgEnaCntr = *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr();
  *TSC_PartNr_Rte_Pim_PartNrCustMfgEnaCntr() = PartNrCustMfgEnaCntr;
  PartNrPrevSysPwrModRun = *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun();
  *TSC_PartNr_Rte_Pim_PartNrPrevSysPwrModRun() = PartNrPrevSysPwrModRun;

  (void)memcpy(PartNrBasMdlPartNr, TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrBasMdlPartNr(), PartNrBasMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrCcaMfgTrakg, TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCcaMfgTrakg(), PartNrCcaMfgTrakg, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrCtrlPidSeedKey, TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrCtrlPidSeedKey(), PartNrCtrlPidSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrDataUniversalNrSysId, TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), sizeof(Ary1D_u8_9));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrDataUniversalNrSysId(), PartNrDataUniversalNrSysId, sizeof(Ary1D_u8_9));


  (void)memcpy(PartNrEcuId, TSC_PartNr_Rte_Pim_PartNrEcuId(), sizeof(Ary1D_u8_16));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEcuId(), PartNrEcuId, sizeof(Ary1D_u8_16));


  (void)memcpy(PartNrEndMdlPartNr, TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), sizeof(Ary1D_u8_6));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrEndMdlPartNr(), PartNrEndMdlPartNr, sizeof(Ary1D_u8_6));


  (void)memcpy(PartNrNxtrMfgTrakg, TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), sizeof(Ary1D_u8_7));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrNxtrMfgTrakg(), PartNrNxtrMfgTrakg, sizeof(Ary1D_u8_7));


  (void)memcpy(PartNrProgmDate, TSC_PartNr_Rte_Pim_PartNrProgmDate(), sizeof(Ary1D_u8_4));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmDate(), PartNrProgmDate, sizeof(Ary1D_u8_4));


  (void)memcpy(PartNrProgmSessionSeedKey, TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), sizeof(Ary1D_u8_10));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrProgmSessionSeedKey(), PartNrProgmSessionSeedKey, sizeof(Ary1D_u8_10));


  (void)memcpy(PartNrRepairShopCod, TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrRepairShopCod(), PartNrRepairShopCod, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrSecuBypAuthn, TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), sizeof(Ary1D_u8_822));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSecuBypAuthn(), PartNrSecuBypAuthn, sizeof(Ary1D_u8_822));


  (void)memcpy(PartNrSysCodVersNr, TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), sizeof(Ary1D_u8_2));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysCodVersNr(), PartNrSysCodVersNr, sizeof(Ary1D_u8_2));


  (void)memcpy(PartNrSysName, TSC_PartNr_Rte_Pim_PartNrSysName(), sizeof(Ary1D_u8_20));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrSysName(), PartNrSysName, sizeof(Ary1D_u8_20));


  (void)memcpy(PartNrVinData, TSC_PartNr_Rte_Pim_PartNrVinData(), sizeof(Ary1D_u8_17));
  (void)memcpy(TSC_PartNr_Rte_Pim_PartNrVinData(), PartNrVinData, sizeof(Ary1D_u8_17));


  PartNrCalProgdStsDft_data = TSC_PartNr_Rte_CData_PartNrCalProgdStsDft();
  PartNrCustMfgEnaCntrDft_data = TSC_PartNr_Rte_CData_PartNrCustMfgEnaCntrDft();
  (void)memcpy(PartNrBasMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrBasMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrCcaMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrCcaMfgTrakgDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrCtrlPidSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrCtrlPidSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrDataUniversalNrSysIdDft_data, TSC_PartNr_Rte_CData_PartNrDataUniversalNrSysIdDft(), sizeof(Ary1D_u8_9));
  (void)memcpy(PartNrEndMdlPartNrDft_data, TSC_PartNr_Rte_CData_PartNrEndMdlPartNrDft(), sizeof(Ary1D_u8_6));
  (void)memcpy(PartNrNxtrMfgTrakgDft_data, TSC_PartNr_Rte_CData_PartNrNxtrMfgTrakgDft(), sizeof(Ary1D_u8_7));
  (void)memcpy(PartNrProgmDateDft_data, TSC_PartNr_Rte_CData_PartNrProgmDateDft(), sizeof(Ary1D_u8_4));
  (void)memcpy(PartNrProgmSessionSeedKeyDft_data, TSC_PartNr_Rte_CData_PartNrProgmSessionSeedKeyDft(), sizeof(Ary1D_u8_10));
  (void)memcpy(PartNrRepairShopCodDft_data, TSC_PartNr_Rte_CData_PartNrRepairShopCodDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrSysCodVersNrDft_data, TSC_PartNr_Rte_CData_PartNrSysCodVersNrDft(), sizeof(Ary1D_u8_2));
  (void)memcpy(PartNrSysNameDft_data, TSC_PartNr_Rte_CData_PartNrSysNameDft(), sizeof(Ary1D_u8_20));
  (void)memcpy(PartNrVinDataDft_data, TSC_PartNr_Rte_CData_PartNrVinDataDft(), sizeof(Ary1D_u8_17));

  (void)memcpy(PartNrCmpdVehPartnProdtStruct_Ary1D_data, TSC_PartNr_Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(), sizeof(Ary1D_u8_14));

  fct_status = TSC_PartNr_Rte_Call_PartNrVinData_SetRamBlockStatus(FALSE);
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


#define PartNr_STOP_SEC_CODE
#include "PartNr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void PartNr_TestDefines(void)
{
  /* Enumeration Data Types */

  GmSysPwrMod1 Test_GmSysPwrMod1_V_1 = GMSYSPWRMOD_OFF;
  GmSysPwrMod1 Test_GmSysPwrMod1_V_2 = GMSYSPWRMOD_ACSY;
  GmSysPwrMod1 Test_GmSysPwrMod1_V_3 = GMSYSPWRMOD_RUN;
  GmSysPwrMod1 Test_GmSysPwrMod1_V_4 = GMSYSPWRMOD_CRK;

  MfgEnaSt1 Test_MfgEnaSt1_V_1 = MFGENAST_PRDNMOD;
  MfgEnaSt1 Test_MfgEnaSt1_V_2 = MFGENAST_MFGMOD;
  MfgEnaSt1 Test_MfgEnaSt1_V_3 = MFGENAST_TESTMOD;

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
