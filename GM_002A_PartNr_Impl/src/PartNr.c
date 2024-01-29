/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PartNr.c
 *     SW-C Type:  PartNr
 *  Generated at:  Thu Sep 29 09:16:53 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <PartNr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: PartNr.c
* Module Description: Implementation of GM Part Number Component
* Project           : CBD
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          7 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------     --------
* 10/08/15  1        JWJ       Initial component version                                                       EA4#4318
* 11/06/15  2        JWJ       Added GMLAN cal and read service                                                EA4#3470
* 02/14/16  3        JWJ       Added server runnable to get/set upper byte of CPID seed for DID F5             EA4#3918
* 04/12/16  4        JWJ       Corrected calibration port type                                                 EA4#5236
* 05/16/16  5        JWJ       Added support for ECU ID and SBAT                                               EA4#5763
*                              Corrected the CMEC decrement logic to singly decrement on transition to OFF     EA4#5132
* 08/10/16  6        JWJ       Corrected NRC for CMEC write when zero for EA4#6612                             EA4#6848
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
  GmSysPwrMod1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  MfgEnaSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

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

#include "Rte_PartNr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define PARTNRCALPROGD_CNT_U08     0x55u
#define PARTNRCALNOTPROGD_CNT_U08  0xAAu


static FUNC(MfgEnaSt1, AUTOMATIC) DetermineCustomerMecState(void);
static FUNC(uint8, AUTOMATIC) BinaryCodedDecimalToDecimal(VAR(uint8, AUTOMATIC) Input_Cnt_T_u08);
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
 *   uint8 *Rte_Pim_PartNrCcaMfgTrakg(void)
 *   uint8 *Rte_Pim_PartNrCtrlPidSeedKey(void)
 *   uint8 *Rte_Pim_PartNrDataUniversalNrSysId(void)
 *   uint8 *Rte_Pim_PartNrEcuId(void)
 *   uint8 *Rte_Pim_PartNrEndMdlPartNr(void)
 *   uint8 *Rte_Pim_PartNrNxtrMfgTrakg(void)
 *   uint8 *Rte_Pim_PartNrProgmDate(void)
 *   uint8 *Rte_Pim_PartNrProgmSessionSeedKey(void)
 *   uint8 *Rte_Pim_PartNrRepairShopCod(void)
 *   uint8 *Rte_Pim_PartNrSecuBypAuthn(void)
 *   uint8 *Rte_Pim_PartNrSysCodVersNr(void)
 *   uint8 *Rte_Pim_PartNrSysName(void)
 *   uint8 *Rte_Pim_PartNrVinData(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 Rte_CData_PartNrCalProgdStsDft(void)
 *   uint8 Rte_CData_PartNrCustMfgEnaCntrDft(void)
 *   uint8 *Rte_CData_PartNrBasMdlPartNrDft(void)
 *   uint8 *Rte_CData_PartNrCcaMfgTrakgDft(void)
 *   uint8 *Rte_CData_PartNrCtrlPidSeedKeyDft(void)
 *   uint8 *Rte_CData_PartNrDataUniversalNrSysIdDft(void)
 *   uint8 *Rte_CData_PartNrEndMdlPartNrDft(void)
 *   uint8 *Rte_CData_PartNrNxtrMfgTrakgDft(void)
 *   uint8 *Rte_CData_PartNrProgmDateDft(void)
 *   uint8 *Rte_CData_PartNrProgmSessionSeedKeyDft(void)
 *   uint8 *Rte_CData_PartNrRepairShopCodDft(void)
 *   uint8 *Rte_CData_PartNrSysCodVersNrDft(void)
 *   uint8 *Rte_CData_PartNrSysNameDft(void)
 *   uint8 *Rte_CData_PartNrVinDataDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 *Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(void)
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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrAlphaCodRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 2U; Index_Cnt_T_u08 += 1U)
	{
		BasMdlPartNrAlphaCod[Index_Cnt_T_u08] = Rte_Pim_PartNrBasMdlPartNr()[Index_Cnt_T_u08 + 4U];
	}

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
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrAlphaCodWr_Oper(const uint8 *BasMdlPartNrAlphaCod)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrAlphaCodWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 2U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrBasMdlPartNr()[Index_Cnt_T_u08 + 4U] = BasMdlPartNrAlphaCod[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 4U; Index_Cnt_T_u08 += 1U)
	{
		BasMdlPartNr[Index_Cnt_T_u08] = Rte_Pim_PartNrBasMdlPartNr()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrWr_Oper(const uint8 *BasMdlPartNr)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrBasMdlPartNrWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 4U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrBasMdlPartNr()[Index_Cnt_T_u08] = BasMdlPartNr[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(TRUE);

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

FUNC(void, PartNr_CODE) PartNrCalProgdStsRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CalProgdSts) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCalProgdStsRd_Oper
 *********************************************************************************************************************/

	*CalProgdSts = *Rte_Pim_PartNrCalProgdSts();

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
 *   Std_ReturnType Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(Boolean RamBlockStatus)
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

FUNC(Std_ReturnType, PartNr_CODE) PartNrCalProgdStsWr_Oper(uint8 CalProgdSts) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCalProgdStsWr_Oper (returns application error)
 *********************************************************************************************************************/

  VAR(Std_ReturnType, AUTOMATIC) RetCod_Cnt_T_u08 = RTE_E_OK;

	/* Only supported values for this service are 0x55 (programmed) or 0xAA (not programmed) */
	if ((CalProgdSts == PARTNRCALPROGD_CNT_U08) || (CalProgdSts == PARTNRCALNOTPROGD_CNT_U08))
	{
		*Rte_Pim_PartNrCalProgdSts() = CalProgdSts;

		(void)Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(TRUE);
	}
	else
	{
		RetCod_Cnt_T_u08 = RTE_E_PartNrCalProgdStsWr1_InvldVal;
	}

	return RetCod_Cnt_T_u08;

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCcaMfgTrakgRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 9U; Index_Cnt_T_u08 += 1U)
	{
		CcaMfgTrakg[Index_Cnt_T_u08] = Rte_Pim_PartNrCcaMfgTrakg()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCcaMfgTrakgWr_Oper(const uint8 *CcaMfgTrakg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCcaMfgTrakgWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 9U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrCcaMfgTrakg()[Index_Cnt_T_u08] = CcaMfgTrakg[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(Ary1D_u8_14, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCmpdVehPartnProdtStructRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 14U; Index_Cnt_T_u08 += 1U)
	{
		CmpdVehPartnProdtStruct[Index_Cnt_T_u08] = Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D()[Index_Cnt_T_u08];
	}

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
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCtrlPidKeyChk1_InvldKey
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidKeyChk_Oper (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(Std_ReturnType, AUTOMATIC) RetCod_Cnt_T_u08 = RTE_E_OK;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08 += 1U)
	{
		if (Rte_Pim_PartNrCtrlPidSeedKey()[Index_Cnt_T_u08 + 5U] != CtrlPidKey[Index_Cnt_T_u08])
		{
			RetCod_Cnt_T_u08 = RTE_E_PartNrCtrlPidKeyChk1_InvldKey;
		}
	}

	return RetCod_Cnt_T_u08;

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
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidKeyWr_Oper(const uint8 *CtrlPidKey)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidKeyWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrCtrlPidSeedKey()[Index_Cnt_T_u08 + 5U] = CtrlPidKey[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(TRUE);

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
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidSeedKeyWr_Oper(const uint8 *CtrlPidSeedKey)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedKeyWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 10U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrCtrlPidSeedKey()[Index_Cnt_T_u08] = CtrlPidSeedKey[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08 += 1U)
	{
		CtrlPidSeed[Index_Cnt_T_u08] = Rte_Pim_PartNrCtrlPidSeedKey()[Index_Cnt_T_u08];
	}

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

FUNC(void, PartNr_CODE) PartNrCtrlPidSeedUpprByteRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeedUpprByte) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedUpprByteRd_Oper
 *********************************************************************************************************************/

	*CtrlPidSeedUpprByte = Rte_Pim_PartNrCtrlPidSeedKey()[4U];

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
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
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

FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCtrlPidSeedUpprByteWr_Oper (returns application error)
 *********************************************************************************************************************/

	VAR(Std_ReturnType, AUTOMATIC) RetCod_Cnt_T_u08 = RTE_E_OK;

	if (*Rte_Pim_PartNrCustMfgEnaCntr() != 0U)
	{
		Rte_Pim_PartNrCtrlPidSeedKey()[4U] = CtrlPidSeedUpprByte;
		(void)Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(TRUE);
	}
	else
	{
		RetCod_Cnt_T_u08 = RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero;
	}

	return RetCod_Cnt_T_u08;

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

FUNC(void, PartNr_CODE) PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CustMfgEnaCntr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCustMfgEnaCntrRd_Oper
 *********************************************************************************************************************/

	*CustMfgEnaCntr = *Rte_Pim_PartNrCustMfgEnaCntr();

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
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
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

FUNC(Std_ReturnType, PartNr_CODE) PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrCustMfgEnaCntrWr_Oper (returns application error)
 *********************************************************************************************************************/

	VAR(Std_ReturnType, AUTOMATIC) RetCod_Cnt_T_u08 = RTE_E_OK;
	VAR(MfgEnaSt1, AUTOMATIC) CustMfgEnSt_Cnt_T_enum;

	if (*Rte_Pim_PartNrCustMfgEnaCntr() != 0U)
	{
		*Rte_Pim_PartNrCustMfgEnaCntr() = CustMfgEnaCntr;
		(void)Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(TRUE);
	}
	else
	{
		RetCod_Cnt_T_u08 = RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero;
	}

	CustMfgEnSt_Cnt_T_enum = DetermineCustomerMecState();
	(void)Rte_Write_CustMfgEnSt_Val(CustMfgEnSt_Cnt_T_enum);

	return RetCod_Cnt_T_u08;

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrDataUniversalNrSysIdRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 9U; Index_Cnt_T_u08 += 1U)
	{
		DataUniversalNrSysId[Index_Cnt_T_u08] = Rte_Pim_PartNrDataUniversalNrSysId()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrDataUniversalNrSysIdWr_Oper(const uint8 *DataUniversalNrSysId)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrDataUniversalNrSysIdWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 9U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrDataUniversalNrSysId()[Index_Cnt_T_u08] = DataUniversalNrSysId[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrEcuIdRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEcuIdRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 16U; Index_Cnt_T_u08 += 1U)
	{
		EcuId_Arg[Index_Cnt_T_u08] = Rte_Pim_PartNrEcuId()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrEcuId_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEcuIdWr_Oper(const uint8 *EcuId_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEcuIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrEcuIdWr_Oper(P2CONST(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEcuIdWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 16U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrEcuId()[Index_Cnt_T_u08] = EcuId_Arg[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrEcuId_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrAlphaCodRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 2U; Index_Cnt_T_u08 += 1U)
	{
		EndMdlPartNrAlphaCod[Index_Cnt_T_u08] = Rte_Pim_PartNrEndMdlPartNr()[Index_Cnt_T_u08 + 4U];
	}

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
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrAlphaCodWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 2U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrEndMdlPartNr()[Index_Cnt_T_u08 + 4U] = EndMdlPartNrAlphaCod[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 4U; Index_Cnt_T_u08 += 1U)
	{
		EndMdlPartNr[Index_Cnt_T_u08] = Rte_Pim_PartNrEndMdlPartNr()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrEndMdlPartNrWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 4U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrEndMdlPartNr()[Index_Cnt_T_u08] = EndMdlPartNr[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(TRUE);

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

FUNC(void, PartNr_CODE) PartNrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrInit1
 *********************************************************************************************************************/

	VAR(MfgEnaSt1, AUTOMATIC) CustMfgEnSt_Cnt_T_enum;
	CustMfgEnSt_Cnt_T_enum = DetermineCustomerMecState();
	(void)Rte_Write_CustMfgEnSt_Val(CustMfgEnSt_Cnt_T_enum);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrLstRepairShopCodRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 10U; Index_Cnt_T_u08 += 1U)
	{
		RepairShopCod[Index_Cnt_T_u08] = Rte_Pim_PartNrRepairShopCod()[Index_Cnt_T_u08];
	}

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrNxtrMfgTrakgRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 7U; Index_Cnt_T_u08 += 1U)
	{
		NxtrMfgTrakg[Index_Cnt_T_u08] = Rte_Pim_PartNrNxtrMfgTrakg()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrNxtrMfgTrakgWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 7U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrNxtrMfgTrakg()[Index_Cnt_T_u08] = NxtrMfgTrakg[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(TRUE);

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
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, PartNr_CODE) PartNrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrPer1
 *********************************************************************************************************************/

	VAR(MfgEnaSt1, AUTOMATIC) CustMfgEnSt_Cnt_T_enum;
	VAR(GmSysPwrMod1, AUTOMATIC) SysPwrMod_Cnt_T_enum;


	(void)Rte_Read_GmSysPwrMod_Val(&SysPwrMod_Cnt_T_enum);

	CustMfgEnSt_Cnt_T_enum = DetermineCustomerMecState();


	/* If we are in run... */
	if (SysPwrMod_Cnt_T_enum == GMSYSPWRMOD_RUN)
	{
		/* Set flag to indicate that we reached RUN mode */
		*Rte_Pim_PartNrPrevSysPwrModRun() = TRUE;
	}
	else if (SysPwrMod_Cnt_T_enum == GMSYSPWRMOD_OFF)
	{
		/* Once in OFF decrement the MEC if we were in RUN */
		if (*Rte_Pim_PartNrPrevSysPwrModRun() == TRUE)
		{
			/* Clear the flag so we don't decrement again without going back to RUN */
			*Rte_Pim_PartNrPrevSysPwrModRun() = FALSE;

			/* Don't touch the CMEC if it's 0 or 255 - those values are special */
			if (CustMfgEnSt_Cnt_T_enum == MFGENAST_MFGMOD)
			{
				*Rte_Pim_PartNrCustMfgEnaCntr() -= 1U;
				(void)Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(TRUE);
			}
		}
	}
	else
	{
		/* Don't do anything in the ACSY or CRK states */
	}


	/* If the cal programmed status is NOT PROGRAMMED, set NTC 0x1F2 */
	if (*Rte_Pim_PartNrCalProgdSts() != PARTNRCALPROGD_CNT_U08)
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F2, 1U, NTCSTS_FAILD, 0U);
	}
	else
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F2, 0U, NTCSTS_PASSD, 0U);
	}


	(void)Rte_Write_CustMfgEnSt_Val(CustMfgEnSt_Cnt_T_enum);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrProgmDateRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmDateRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 4U; Index_Cnt_T_u08 += 1U)
	{
		ProgmDate[Index_Cnt_T_u08] = Rte_Pim_PartNrProgmDate()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrProgmDate_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrProgmDateWr1_OutOfRange
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmDateWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmDateWr_Oper (returns application error)
 *********************************************************************************************************************/

  VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(Std_ReturnType, AUTOMATIC) RetCod_Cnt_T_u08 = RTE_E_OK;
	VAR(uint8, AUTOMATIC) Month_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Day_Cnt_T_u08;

	Month_Cnt_T_u08 = BinaryCodedDecimalToDecimal(ProgmDate[2U]);
	Day_Cnt_T_u08 = BinaryCodedDecimalToDecimal(ProgmDate[3U]);

	if ((Month_Cnt_T_u08 >= 1U) &&
		(Month_Cnt_T_u08 <= 12U) &&
		(Day_Cnt_T_u08 >= 1U) &&
		(Day_Cnt_T_u08 <= 31U))
	{
		for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 4U; Index_Cnt_T_u08 += 1U)
		{
			Rte_Pim_PartNrProgmDate()[Index_Cnt_T_u08] = ProgmDate[Index_Cnt_T_u08];
		}

		(void)Rte_Call_PartNrProgmDate_SetRamBlockStatus(TRUE);
	}
	else
	{
		RetCod_Cnt_T_u08 = RTE_E_PartNrProgmDateWr1_OutOfRange;
	}


	return RetCod_Cnt_T_u08;

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
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrProgmSessionKeyChk1_InvldKey
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionKeyChk_Oper (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(Std_ReturnType, AUTOMATIC) RetCod_Cnt_T_u08 = RTE_E_OK;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08 += 1U)
	{
		if (Rte_Pim_PartNrProgmSessionSeedKey()[Index_Cnt_T_u08 + 5U] != ProgmSessionKey[Index_Cnt_T_u08])
		{
			RetCod_Cnt_T_u08 = RTE_E_PartNrProgmSessionKeyChk1_InvldKey;
		}
	}

	return RetCod_Cnt_T_u08;

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
 *   Std_ReturnType Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrProgmSessionSeedKeyWr_Oper(const uint8 *ProgmSessionSeedKey)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionSeedKeyWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 10U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrProgmSessionSeedKey()[Index_Cnt_T_u08] = ProgmSessionSeedKey[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrProgmSessionSeedRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 5U; Index_Cnt_T_u08 += 1U)
	{
		ProgmSessionSeed[Index_Cnt_T_u08] = Rte_Pim_PartNrProgmSessionSeedKey()[Index_Cnt_T_u08];
	}

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrRepairShopCodRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrRepairShopCodRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 20U; Index_Cnt_T_u08 += 1U)
	{
		RepairShopCod[Index_Cnt_T_u08] = Rte_Pim_PartNrRepairShopCod()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrRepairShopCodWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrRepairShopCodWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 10U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrRepairShopCod()[Index_Cnt_T_u08 + 10U] = Rte_Pim_PartNrRepairShopCod()[Index_Cnt_T_u08];
		Rte_Pim_PartNrRepairShopCod()[Index_Cnt_T_u08] = RepairShopCod[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSecuBypAuthnRd_Oper
 *********************************************************************************************************************/

	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;

	for (Index_Cnt_T_u16 = 0U; Index_Cnt_T_u16 < 822U; Index_Cnt_T_u16 += 1U)
	{
		SecuBypAuthn_Arg[Index_Cnt_T_u16] = Rte_Pim_PartNrSecuBypAuthn()[Index_Cnt_T_u16];
	}

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
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSecuBypAuthnWr_Oper
 *********************************************************************************************************************/

	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;

	for (Index_Cnt_T_u16 = 0U; Index_Cnt_T_u16 < 822U; Index_Cnt_T_u16 += 1U)
	{
		Rte_Pim_PartNrSecuBypAuthn()[Index_Cnt_T_u16] = SecuBypAuthn_Arg[Index_Cnt_T_u16];
	}

	(void)Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysCodVersNrRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 2U; Index_Cnt_T_u08 += 1U)
	{
		SysCodVersNr[Index_Cnt_T_u08] = Rte_Pim_PartNrSysCodVersNr()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysCodVersNrWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 2U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrSysCodVersNr()[Index_Cnt_T_u08] = SysCodVersNr[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrSysNameRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysNameRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 20U; Index_Cnt_T_u08 += 1U)
	{
		SysName[Index_Cnt_T_u08] = Rte_Pim_PartNrSysName()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrSysName_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysNameWr_Oper(const uint8 *SysName)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrSysNameWr_Oper(P2CONST(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrSysNameWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 20U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrSysName()[Index_Cnt_T_u08] = SysName[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrSysName_SetRamBlockStatus(TRUE);

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
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrVinDataRd_Oper(P2VAR(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrVinDataRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 17U; Index_Cnt_T_u08 += 1U)
	{
		VinData[Index_Cnt_T_u08] = Rte_Pim_PartNrVinData()[Index_Cnt_T_u08];
	}

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
 *   Std_ReturnType Rte_Call_PartNrVinData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrVinDataWr_Oper(const uint8 *VinData)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, PartNr_CODE) PartNrVinDataWr_Oper(P2CONST(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PartNrVinDataWr_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 17U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_PartNrVinData()[Index_Cnt_T_u08] = VinData[Index_Cnt_T_u08];
	}

	(void)Rte_Call_PartNrVinData_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PartNr_STOP_SEC_CODE
#include "PartNr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


static FUNC(MfgEnaSt1, AUTOMATIC) DetermineCustomerMecState(void)
{
	VAR(MfgEnaSt1, AUTOMATIC) CustMfgEnSt_Cnt_T_enum;

	switch (*Rte_Pim_PartNrCustMfgEnaCntr())
	{
		case 0U:
			CustMfgEnSt_Cnt_T_enum = MFGENAST_PRDNMOD;
			break;
		case 255U:
			CustMfgEnSt_Cnt_T_enum = MFGENAST_TESTMOD;
			break;
		default:
			CustMfgEnSt_Cnt_T_enum = MFGENAST_MFGMOD;
			break;
	}

	return CustMfgEnSt_Cnt_T_enum;
}


static FUNC(uint8, AUTOMATIC) BinaryCodedDecimalToDecimal(VAR(uint8, AUTOMATIC) Input_Cnt_T_u08)
{
	VAR(uint8, AUTOMATIC) Output_Cnt_T_u08;

	Output_Cnt_T_u08 = ((uint8)(Input_Cnt_T_u08 >> 4U)) * 10U;
	Output_Cnt_T_u08 += (Input_Cnt_T_u08 & 0x0FU);

	return Output_Cnt_T_u08;
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
