/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmRoadWhlInQlfr.c
 *     SW-C Type:  GmRoadWhlInQlfr
 *  Generated at:  Wed Mar 23 11:16:34 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmRoadWhlInQlfr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GmRoadWhlInQlfr.c
* Module Description: Implementation of Road Wheel Input Qualifier (GM) -- CF018A
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       nz2796 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 02/25/16   1       NS        Initial version                                                                EA4#3952
* 03/23/16   2       NS        Added several display variables                                                EA4#4920
* 09/16/16   3       NS        Fix for time stamp overflow problems                                           EA4#7633
* 11/29/16	 4       ML		   Updated to fix Anomaly EA4#8205												  EA4#8608
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

#include "Rte_GmRoadWhlInQlfr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/******************************************** Embedded Local Constants ***********************************************/
#define DELTAPLSROLLOVR_CNT_S16         ((sint16)1024)
#define DELTATISTAMPCNTROLLOVR_CNT_S32  ((sint32)65536)
#define LEFRQOUTOFRNG_CNT_U08           1U
#define LEFRQCHGOUTOFRNG_CNT_U08        2U
#define RIFRQOUTOFRNG_CNT_U08           16U
#define RIFRQCHGOUTOFRNG_CNT_U08        32U
#define WHLFRQMAX_HZ_F32                60.0F
#define WHLFRQMIN_HZ_F32                0.01F
#define PARKDURN_CNT_F32                65000000.0F
#define PREVRAWWHLFRQMIN_HZ_F32         0.0293F
#define NODEBSTEP_CNT_U16               65535U
#define SECTO100MICROSECCNVN_CNT_F32    10000.0F

/******************************************** Local Function Declarations ***********************************************/
static FUNC(void, GMROADWHLINQLFR_CODE) CalcLeWhlFrqAndFrqVld(float32 WhlRotlStsTiStampResl_SecPerCnt_T_f32,
                                                                uint16 WhlLeDstPlsCntr_Cnt_T_u16,
                                                                uint16 WhlLeDstTiStamp_Cnt_T_u16, 
                                                                uint8 WhlPlsPerRev_CntPerRoadWhlRev_T_u08,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeWhlFrqVld_Cnt_T_logl, 
                                                                P2VAR(float32, AUTOMATIC, GmRoadWhlInQlfr_VAR) WhlLeFrq_Hz_T_f32, 
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeFrqOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeFrqChgOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeWhlDiagFlg_Cnt_T_logl);
                                                                
static FUNC(void, GMROADWHLINQLFR_CODE) CalcRiWhlFrqAndFrqVld(float32 WhlRotlStsTiStampResl_SecPerCnt_T_f32, 
                                                                uint16 WhlRiDstPlsCntr_Cnt_T_u16,
                                                                uint16 WhlRiDstTiStamp_Cnt_T_u16, 
                                                                uint8 WhlPlsPerRev_CntPerRoadWhlRev_T_u08,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiWhlFrqVld_Cnt_T_logl, 
                                                                P2VAR(float32, AUTOMATIC, GmRoadWhlInQlfr_VAR) WhlRiFrq_Hz_T_f32, 
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiFrqOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiFrqChgOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiWhlDiagFlg_Cnt_T_logl);       

static FUNC(void, GMROADWHLINQLFR_CODE) NTCDiag(boolean LeWhlDiagFlag_Cnt_T_logl,
                                                boolean RiWhlDiagFlag_Cnt_T_logl, 
                                                boolean LeFrqOutOfRng_Cnt_T_logl,
                                                boolean RiFrqOutOfRng_Cnt_T_logl, 
                                                boolean LeFrqChgOutOfRng_Cnt_T_logl, 
                                                boolean RiFrqChgOutOfRng_Cnt_T_logl);                                                                

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
 *   float32 *Rte_Pim_PrevLeWhlFrq(void)
 *   float32 *Rte_Pim_PrevRawLeWhlFrq(void)
 *   float32 *Rte_Pim_PrevRawRiWhlFrq(void)
 *   float32 *Rte_Pim_PrevRiWhlFrq(void)
 *   float32 *Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq(void)
 *   float32 *Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq(void)
 *   uint32 *Rte_Pim_PrevVldTiLeFrqChg(void)
 *   uint32 *Rte_Pim_PrevVldTiRiFrqChg(void)
 *   uint16 *Rte_Pim_PrevVldLeWhlDstPlsCntr(void)
 *   uint16 *Rte_Pim_PrevVldLeWhlDstTiStamp(void)
 *   uint16 *Rte_Pim_PrevVldRiWhlDstPlsCntr(void)
 *   uint16 *Rte_Pim_PrevVldRiWhlDstTiStamp(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp(void)
 *   boolean *Rte_Pim_PrevLeWhlFrqVld(void)
 *   boolean *Rte_Pim_PrevRiWhlFrqVld(void)
 *   boolean *Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld(void)
 *   boolean *Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val(void)
 *   float32 Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val(void)
 *
 *********************************************************************************************************************/


#define GmRoadWhlInQlfr_START_SEC_CODE
#include "GmRoadWhlInQlfr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmRoadWhlInQlfrInit1
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, GmRoadWhlInQlfr_CODE) GmRoadWhlInQlfrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmRoadWhlInQlfrInit1
 *********************************************************************************************************************/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E3, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    
    *Rte_Pim_PrevRawLeWhlFrq() = PREVRAWWHLFRQMIN_HZ_F32;
    *Rte_Pim_PrevRawRiWhlFrq() = PREVRAWWHLFRQMIN_HZ_F32;
    *Rte_Pim_PrevLeWhlFrq() = WHLFRQMIN_HZ_F32;
    *Rte_Pim_PrevRiWhlFrq() = WHLFRQMIN_HZ_F32;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmRoadWhlInQlfrPer1
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
 *   Std_ReturnType Rte_Read_WhlLeDstPlsCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlLeDstTiStamp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlLeDstVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlPlsPerRev_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlRiDstPlsCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlRiDstTiStamp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlRiDstVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlRotlStsTiStampResl_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlFrqVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlLeFrq_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlRiFrq_Val(float32 data)
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

FUNC(void, GmRoadWhlInQlfr_CODE) GmRoadWhlInQlfrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmRoadWhlInQlfrPer1
 *********************************************************************************************************************/
    /* Inputs */
    VAR(uint16, AUTOMATIC)  WhlLeDstPlsCntr_Cnt_T_u16;
    VAR(uint16, AUTOMATIC)  WhlLeDstTiStamp_Cnt_T_u16;
    VAR(boolean, AUTOMATIC) WhlLeDstVld_Cnt_T_logl;
    VAR(uint8, AUTOMATIC)   WhlPlsPerRev_CntPerRoadWhlRev_T_u08;
    VAR(uint16, AUTOMATIC)  WhlRiDstPlsCntr_Cnt_T_u16;
    VAR(uint16, AUTOMATIC)  WhlRiDstTiStamp_Cnt_T_u16;
    VAR(boolean, AUTOMATIC) WhlRiDstVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) WhlRotlStsTiStampResl_SecPerCnt_T_f32;
    
    /* Outputs */
    VAR(boolean, AUTOMATIC) WhlFrqVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) WhlLeFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlRiFrq_Hz_T_f32;
    
    VAR(boolean, AUTOMATIC) LeWhlFrqVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) LeFrqOutOfRng_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) LeFrqChgOutOfRng_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) LeWhlDiagFlag_Cnt_T_logl = FALSE;
    
    VAR(boolean, AUTOMATIC) RiWhlFrqVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) RiFrqOutOfRng_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) RiFrqChgOutOfRng_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) RiWhlDiagFlag_Cnt_T_logl = FALSE;
    
    
    /* Read inputs */
    (void)Rte_Read_WhlLeDstPlsCntr_Val(&WhlLeDstPlsCntr_Cnt_T_u16);
    (void)Rte_Read_WhlLeDstTiStamp_Val(&WhlLeDstTiStamp_Cnt_T_u16);
    (void)Rte_Read_WhlLeDstVld_Logl(&WhlLeDstVld_Cnt_T_logl);
    (void)Rte_Read_WhlPlsPerRev_Val(&WhlPlsPerRev_CntPerRoadWhlRev_T_u08);
    (void)Rte_Read_WhlRiDstPlsCntr_Val(&WhlRiDstPlsCntr_Cnt_T_u16);
    (void)Rte_Read_WhlRiDstTiStamp_Val(&WhlRiDstTiStamp_Cnt_T_u16);
    (void)Rte_Read_WhlRiDstVld_Logl(&WhlRiDstVld_Cnt_T_logl);
    (void)Rte_Read_WhlRotlStsTiStampResl_Val(&WhlRotlStsTiStampResl_SecPerCnt_T_f32);
    
    if(WhlLeDstVld_Cnt_T_logl == FALSE)
    {
        /*** "Set Min Le Whl Frq and false" block ***/
        LeWhlFrqVld_Cnt_T_logl = FALSE;
        WhlLeFrq_Hz_T_f32 = *Rte_Pim_PrevLeWhlFrq();
    }
    else
    {
        /*** "Chk Curr and Prev LeWhlDstTiStamp" block ***/
        if(WhlLeDstTiStamp_Cnt_T_u16 != *Rte_Pim_PrevVldLeWhlDstTiStamp())
        {
            /*** "Calc LeWhlFrq and LeWhlFrqVld" block ***/
            CalcLeWhlFrqAndFrqVld(WhlRotlStsTiStampResl_SecPerCnt_T_f32, WhlLeDstPlsCntr_Cnt_T_u16,
                                    WhlLeDstTiStamp_Cnt_T_u16, WhlPlsPerRev_CntPerRoadWhlRev_T_u08,
                                    &LeWhlFrqVld_Cnt_T_logl, &WhlLeFrq_Hz_T_f32, &LeFrqOutOfRng_Cnt_T_logl,
                                    &LeFrqChgOutOfRng_Cnt_T_logl, &LeWhlDiagFlag_Cnt_T_logl);        
        }
        else
        {
            LeWhlFrqVld_Cnt_T_logl = *Rte_Pim_PrevLeWhlFrqVld();
            WhlLeFrq_Hz_T_f32 = *Rte_Pim_PrevLeWhlFrq();
            LeFrqOutOfRng_Cnt_T_logl = FALSE;
            LeFrqChgOutOfRng_Cnt_T_logl = FALSE;
            LeWhlDiagFlag_Cnt_T_logl = FALSE;
        }
        
        *Rte_Pim_PrevVldLeWhlDstTiStamp() = WhlLeDstTiStamp_Cnt_T_u16;
        *Rte_Pim_PrevVldLeWhlDstPlsCntr() = WhlLeDstPlsCntr_Cnt_T_u16;
    }
    
    *Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld() = LeWhlFrqVld_Cnt_T_logl;
    
    if(WhlRiDstVld_Cnt_T_logl == FALSE)
    {
        /*** "Set Min Ri Whl Frq and false" block ***/
        RiWhlFrqVld_Cnt_T_logl = FALSE;
        WhlRiFrq_Hz_T_f32 = *Rte_Pim_PrevRiWhlFrq();
    }
    else
    {
        /*** "Chk Curr and Prev RiWhlDstTiStamp" block ***/
        if(WhlRiDstTiStamp_Cnt_T_u16 != *Rte_Pim_PrevVldRiWhlDstTiStamp())
        {
            /*** "Calc RiWhlFrq and RiWhlFrqVld" block ***/
            CalcRiWhlFrqAndFrqVld(WhlRotlStsTiStampResl_SecPerCnt_T_f32, WhlRiDstPlsCntr_Cnt_T_u16,
                                    WhlRiDstTiStamp_Cnt_T_u16, WhlPlsPerRev_CntPerRoadWhlRev_T_u08,
                                    &RiWhlFrqVld_Cnt_T_logl, &WhlRiFrq_Hz_T_f32, &RiFrqOutOfRng_Cnt_T_logl,
                                    &RiFrqChgOutOfRng_Cnt_T_logl, &RiWhlDiagFlag_Cnt_T_logl);
        }
        else
        {
            RiWhlFrqVld_Cnt_T_logl = *Rte_Pim_PrevRiWhlFrqVld();
            WhlRiFrq_Hz_T_f32 = *Rte_Pim_PrevRiWhlFrq();
            RiFrqOutOfRng_Cnt_T_logl = FALSE;
            RiFrqChgOutOfRng_Cnt_T_logl = FALSE;
            RiWhlDiagFlag_Cnt_T_logl = FALSE;
        }
                         
        *Rte_Pim_PrevVldRiWhlDstTiStamp() = WhlRiDstTiStamp_Cnt_T_u16;
        *Rte_Pim_PrevVldRiWhlDstPlsCntr() = WhlRiDstPlsCntr_Cnt_T_u16;
    }
    
    *Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld() = RiWhlFrqVld_Cnt_T_logl;
    
    if((LeWhlFrqVld_Cnt_T_logl != FALSE) && (RiWhlFrqVld_Cnt_T_logl != FALSE))
    {
        WhlFrqVld_Cnt_T_logl = TRUE;
    }
    else
    {
        WhlFrqVld_Cnt_T_logl = FALSE;
    }
    
    /* Perform NTC diagnostics */
    NTCDiag(LeWhlDiagFlag_Cnt_T_logl, RiWhlDiagFlag_Cnt_T_logl, LeFrqOutOfRng_Cnt_T_logl,
            RiFrqOutOfRng_Cnt_T_logl, LeFrqChgOutOfRng_Cnt_T_logl, RiFrqChgOutOfRng_Cnt_T_logl);
    
    
    /* Limit outputs */
    WhlLeFrq_Hz_T_f32 = Lim_f32(WhlLeFrq_Hz_T_f32, WHLFRQMIN_HZ_F32, WHLFRQMAX_HZ_F32);
    WhlRiFrq_Hz_T_f32 = Lim_f32(WhlRiFrq_Hz_T_f32, WHLFRQMIN_HZ_F32, WHLFRQMAX_HZ_F32);
    
    /* Write outputs */
    (void)Rte_Write_WhlFrqVld_Logl(WhlFrqVld_Cnt_T_logl);
    (void)Rte_Write_WhlLeFrq_Val(WhlLeFrq_Hz_T_f32);
    (void)Rte_Write_WhlRiFrq_Val(WhlRiFrq_Hz_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmRoadWhlInQlfr_STOP_SEC_CODE
#include "GmRoadWhlInQlfr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   CalcLeWhlFrqAndFrqVld
* Description   :   Implementation of "Chk Curr and Prev LeWhlDstTiStamp" block            
* Inputs        :   WhlRotlStsTiStampResl_SecPerCnt_T_f32, WhlLeDstPlsCntr_Cnt_T_u16,                   
*                   WhlLeDstTiStamp_Cnt_T_u16, WhlPlsPerRev_CntPerRoadWhlRev_T_u08
* Outputs       :   *LeWhlFrqVld_Cnt_T_logl, *WhlLeFrq_Hz_T_f32, *LeFrqOutOfRng_Cnt_T_logl,
*                   *LeFrqChgOutOfRng_Cnt_T_logl, *LeWhlDiagFlg_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMROADWHLINQLFR_CODE) CalcLeWhlFrqAndFrqVld(float32 WhlRotlStsTiStampResl_SecPerCnt_T_f32,
                                                                uint16 WhlLeDstPlsCntr_Cnt_T_u16,
                                                                uint16 WhlLeDstTiStamp_Cnt_T_u16, 
                                                                uint8 WhlPlsPerRev_CntPerRoadWhlRev_T_u08,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeWhlFrqVld_Cnt_T_logl, 
                                                                P2VAR(float32, AUTOMATIC, GmRoadWhlInQlfr_VAR) WhlLeFrq_Hz_T_f32, 
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeFrqOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeFrqChgOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) LeWhlDiagFlg_Cnt_T_logl)
{
    VAR(uint32, AUTOMATIC) Span_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) LeDeltaPls_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) LeDeltaTiStampCnt_Cnt_T_u16;
    VAR(sint16, AUTOMATIC) LeDeltaPls_Cnt_T_s16 = (sint16)WhlLeDstPlsCntr_Cnt_T_u16 - (sint16)*Rte_Pim_PrevVldLeWhlDstPlsCntr();
    VAR(sint32, AUTOMATIC) LeDeltaTiStampCnt_Cnt_T_s32 = (sint32)WhlLeDstTiStamp_Cnt_T_u16 - (sint32)*Rte_Pim_PrevVldLeWhlDstTiStamp();
    VAR(float32, AUTOMATIC) RawLeWhlFrq_WhlRevPerSec_T_f32;
    VAR(float32, AUTOMATIC) RawLeWhlFrqLimd_WhlRevPerSec_T_f32;
    
   
    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrevVldTiLeFrqChg(), &Span_Cnt_T_u32);
    
    if(Span_Cnt_T_u32 < FloatToFixd_u32_f32((WhlRotlStsTiStampResl_SecPerCnt_T_f32 * PARKDURN_CNT_F32 * SECTO100MICROSECCNVN_CNT_F32), NXTRFIXDPT_FLOATTOP0_ULS_F32))
    {
        if(LeDeltaPls_Cnt_T_s16 < 0)
        {
            LeDeltaPls_Cnt_T_s16 = LeDeltaPls_Cnt_T_s16 + DELTAPLSROLLOVR_CNT_S16;
            LeDeltaPls_Cnt_T_u16 = (uint16)(LeDeltaPls_Cnt_T_s16);
        }
        else
        {
            LeDeltaPls_Cnt_T_u16 = (uint16)(LeDeltaPls_Cnt_T_s16);
        }
        
        *Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls() = LeDeltaPls_Cnt_T_u16;
        
        if(LeDeltaTiStampCnt_Cnt_T_s32 < 0)
        {
            LeDeltaTiStampCnt_Cnt_T_s32 = LeDeltaTiStampCnt_Cnt_T_s32 + DELTATISTAMPCNTROLLOVR_CNT_S32;
        }
		LeDeltaTiStampCnt_Cnt_T_u16 = (uint16)(LeDeltaTiStampCnt_Cnt_T_s32);
        
        *Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp() = LeDeltaTiStampCnt_Cnt_T_u16;
        
        RawLeWhlFrq_WhlRevPerSec_T_f32 = (float32)LeDeltaPls_Cnt_T_u16 / ((float32)WhlPlsPerRev_CntPerRoadWhlRev_T_u08 * (float32)LeDeltaTiStampCnt_Cnt_T_u16 * WhlRotlStsTiStampResl_SecPerCnt_T_f32);
                                            
        *Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq() = RawLeWhlFrq_WhlRevPerSec_T_f32;
                                            
        if(RawLeWhlFrq_WhlRevPerSec_T_f32 > Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val())
        {
            *LeWhlFrqVld_Cnt_T_logl = FALSE;
            *LeFrqOutOfRng_Cnt_T_logl = TRUE;
            RawLeWhlFrqLimd_WhlRevPerSec_T_f32 = Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val();
        }
        else
        {
            *LeWhlFrqVld_Cnt_T_logl = TRUE;
            *LeFrqOutOfRng_Cnt_T_logl = FALSE;
            RawLeWhlFrqLimd_WhlRevPerSec_T_f32 = RawLeWhlFrq_WhlRevPerSec_T_f32;
        }
        
        if(Abslt_f32_f32(RawLeWhlFrq_WhlRevPerSec_T_f32 - *Rte_Pim_PrevRawLeWhlFrq()) > Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val())
        {
            *LeWhlFrqVld_Cnt_T_logl = FALSE;
            *LeFrqChgOutOfRng_Cnt_T_logl = TRUE;
            *WhlLeFrq_Hz_T_f32 = *Rte_Pim_PrevLeWhlFrq();
        }
        else
        {
            *LeFrqChgOutOfRng_Cnt_T_logl = FALSE;
            *WhlLeFrq_Hz_T_f32 = RawLeWhlFrqLimd_WhlRevPerSec_T_f32;
            *Rte_Pim_PrevLeWhlFrq() = RawLeWhlFrqLimd_WhlRevPerSec_T_f32;
        }
        
        *LeWhlDiagFlg_Cnt_T_logl = TRUE;
        
        *Rte_Pim_PrevRawLeWhlFrq() = RawLeWhlFrq_WhlRevPerSec_T_f32;
        *Rte_Pim_PrevLeWhlFrqVld() = *LeWhlFrqVld_Cnt_T_logl;
    }
    else
    {
        *LeWhlFrqVld_Cnt_T_logl = *Rte_Pim_PrevLeWhlFrqVld();
        *WhlLeFrq_Hz_T_f32 = *Rte_Pim_PrevLeWhlFrq();
        *LeFrqOutOfRng_Cnt_T_logl = FALSE;
        *LeFrqChgOutOfRng_Cnt_T_logl = FALSE;
        *LeWhlDiagFlg_Cnt_T_logl = FALSE;
    }
    
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrevVldTiLeFrqChg());
}

/*******************************************************************************
* Name          :   CalcRiWhlFrqAndFrqVld
* Description   :   Implementation of "Chk Curr and Prev RiWhlDstTiStamp" block            
* Inputs        :   WhlRotlStsTiStampResl_SecPerCnt_T_f32, WhlRiDstPlsCntr_Cnt_T_u16,                   
*                   WhlRiDstTiStamp_Cnt_T_u16, WhlPlsPerRev_CntPerRoadWhlRev_T_u08
* Outputs       :   *RiWhlFrqVld_Cnt_T_logl, *WhlRiFrq_Hz_T_f32, *RiFrqOutOfRng_Cnt_T_logl,
*                   *RiFrqChgOutOfRng_Cnt_T_logl, *RiWhlDiagFlg_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMROADWHLINQLFR_CODE) CalcRiWhlFrqAndFrqVld(float32 WhlRotlStsTiStampResl_SecPerCnt_T_f32, 
                                                                uint16 WhlRiDstPlsCntr_Cnt_T_u16,
                                                                uint16 WhlRiDstTiStamp_Cnt_T_u16, 
                                                                uint8 WhlPlsPerRev_CntPerRoadWhlRev_T_u08,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiWhlFrqVld_Cnt_T_logl, 
                                                                P2VAR(float32, AUTOMATIC, GmRoadWhlInQlfr_VAR) WhlRiFrq_Hz_T_f32, 
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiFrqOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiFrqChgOutOfRng_Cnt_T_logl,
                                                                P2VAR(boolean, AUTOMATIC, GmRoadWhlInQlfr_VAR) RiWhlDiagFlg_Cnt_T_logl)
{
    VAR(uint32, AUTOMATIC) Span_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) RiDeltaPls_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) RiDeltaTiStampCnt_Cnt_T_u16;
    VAR(sint16, AUTOMATIC) RiDeltaPls_Cnt_T_s16 = (sint16)WhlRiDstPlsCntr_Cnt_T_u16 - (sint16)*Rte_Pim_PrevVldRiWhlDstPlsCntr();
    VAR(sint32, AUTOMATIC) RiDeltaTiStampCnt_Cnt_T_s32 = (sint32)WhlRiDstTiStamp_Cnt_T_u16 - (sint32)*Rte_Pim_PrevVldRiWhlDstTiStamp();
    VAR(float32, AUTOMATIC) RawRiWhlFrq_WhlRevPerSec_T_f32;
    VAR(float32, AUTOMATIC) RawRiWhlFrqLimd_WhlRevPerSec_T_f32;
    
    
    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrevVldTiRiFrqChg(), &Span_Cnt_T_u32);
    
    if(Span_Cnt_T_u32 < FloatToFixd_u32_f32((WhlRotlStsTiStampResl_SecPerCnt_T_f32 * PARKDURN_CNT_F32 * SECTO100MICROSECCNVN_CNT_F32), NXTRFIXDPT_FLOATTOP0_ULS_F32))
    {
        if(RiDeltaPls_Cnt_T_s16 < 0)
        {
            RiDeltaPls_Cnt_T_s16 = RiDeltaPls_Cnt_T_s16 + DELTAPLSROLLOVR_CNT_S16;
            RiDeltaPls_Cnt_T_u16 = (uint16)(RiDeltaPls_Cnt_T_s16);
        }
        else
        {
            RiDeltaPls_Cnt_T_u16 = (uint16)(RiDeltaPls_Cnt_T_s16);
        }
        
        *Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls() = RiDeltaPls_Cnt_T_u16;
        
        if(RiDeltaTiStampCnt_Cnt_T_s32 < 0)
        {
            RiDeltaTiStampCnt_Cnt_T_s32 = RiDeltaTiStampCnt_Cnt_T_s32 + DELTATISTAMPCNTROLLOVR_CNT_S32;
        }
		RiDeltaTiStampCnt_Cnt_T_u16 = (uint16)(RiDeltaTiStampCnt_Cnt_T_s32);
        
        *Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp() = RiDeltaTiStampCnt_Cnt_T_u16;
        
        RawRiWhlFrq_WhlRevPerSec_T_f32 = (float32)RiDeltaPls_Cnt_T_u16 / 
                                            ((float32)WhlPlsPerRev_CntPerRoadWhlRev_T_u08 * (float32)RiDeltaTiStampCnt_Cnt_T_u16 * WhlRotlStsTiStampResl_SecPerCnt_T_f32);
                                            
        *Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq() = RawRiWhlFrq_WhlRevPerSec_T_f32;
                                            
        if(RawRiWhlFrq_WhlRevPerSec_T_f32 > Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val())
        {
            *RiWhlFrqVld_Cnt_T_logl = FALSE;
            *RiFrqOutOfRng_Cnt_T_logl = TRUE;
            RawRiWhlFrqLimd_WhlRevPerSec_T_f32 = Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val();
        }
        else
        {
            *RiWhlFrqVld_Cnt_T_logl = TRUE;
            *RiFrqOutOfRng_Cnt_T_logl = FALSE;
            RawRiWhlFrqLimd_WhlRevPerSec_T_f32 = RawRiWhlFrq_WhlRevPerSec_T_f32;
        }
        
        if(Abslt_f32_f32(RawRiWhlFrq_WhlRevPerSec_T_f32 - *Rte_Pim_PrevRawRiWhlFrq()) > Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val())
        {
            *RiWhlFrqVld_Cnt_T_logl = FALSE;
            *RiFrqChgOutOfRng_Cnt_T_logl = TRUE;
            *WhlRiFrq_Hz_T_f32 = *Rte_Pim_PrevRiWhlFrq();
        }
        else
        {
            *RiFrqChgOutOfRng_Cnt_T_logl = FALSE;
            *WhlRiFrq_Hz_T_f32 = RawRiWhlFrqLimd_WhlRevPerSec_T_f32;
            *Rte_Pim_PrevRiWhlFrq() = RawRiWhlFrqLimd_WhlRevPerSec_T_f32;
        }
        
        *RiWhlDiagFlg_Cnt_T_logl = TRUE;
        
        *Rte_Pim_PrevRawRiWhlFrq() = RawRiWhlFrq_WhlRevPerSec_T_f32;
        *Rte_Pim_PrevRiWhlFrqVld() = *RiWhlFrqVld_Cnt_T_logl;
    }
    else
    {
        *RiWhlFrqVld_Cnt_T_logl = *Rte_Pim_PrevRiWhlFrqVld();
        *WhlRiFrq_Hz_T_f32 = *Rte_Pim_PrevRiWhlFrq();
        *RiFrqOutOfRng_Cnt_T_logl = FALSE;
        *RiFrqChgOutOfRng_Cnt_T_logl = FALSE;
        *RiWhlDiagFlg_Cnt_T_logl = FALSE;
    }
    
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrevVldTiRiFrqChg());
}

/*******************************************************************************
* Name          :   NTCDiag
* Description   :   Implementation of "NTC Diag" block and immediately preceding logic           
* Inputs        :   LeWhlDiagFlag_Cnt_T_logl, RiWhlDiagFlag_Cnt_T_logl,                   
*                   LeFrqOutOfRng_Cnt_T_logl, RiFrqOutOfRng_Cnt_T_logl,
*                   LeFrqChgOutOfRng_Cnt_T_logl, RiFrqChgOutOfRng_Cnt_T_logl
* Outputs       :   
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMROADWHLINQLFR_CODE) NTCDiag(boolean LeWhlDiagFlag_Cnt_T_logl,
                                                boolean RiWhlDiagFlag_Cnt_T_logl, 
                                                boolean LeFrqOutOfRng_Cnt_T_logl,
                                                boolean RiFrqOutOfRng_Cnt_T_logl, 
                                                boolean LeFrqChgOutOfRng_Cnt_T_logl, 
                                                boolean RiFrqChgOutOfRng_Cnt_T_logl)
{
    VAR(uint8, AUTOMATIC) NtcStsInfo_Cnt_T_u08 = 0U;
    
    if((LeWhlDiagFlag_Cnt_T_logl != FALSE) || (RiWhlDiagFlag_Cnt_T_logl != FALSE))
    {
        if( (LeFrqOutOfRng_Cnt_T_logl != FALSE) ||
            (RiFrqOutOfRng_Cnt_T_logl != FALSE) ||
            (LeFrqChgOutOfRng_Cnt_T_logl != FALSE) ||
            (RiFrqChgOutOfRng_Cnt_T_logl != FALSE) )
        {
            /* NTC 0x0E3 Faild */
            if(LeFrqOutOfRng_Cnt_T_logl != FALSE)
            {
                NtcStsInfo_Cnt_T_u08 = LEFRQOUTOFRNG_CNT_U08;
            }
            
            if(LeFrqChgOutOfRng_Cnt_T_logl != FALSE)
            {
                NtcStsInfo_Cnt_T_u08 += LEFRQCHGOUTOFRNG_CNT_U08;
            }
            
            if(RiFrqOutOfRng_Cnt_T_logl != FALSE)
            {
                NtcStsInfo_Cnt_T_u08 += RIFRQOUTOFRNG_CNT_U08;
            }
            
            if(RiFrqChgOutOfRng_Cnt_T_logl != FALSE)
            {
                NtcStsInfo_Cnt_T_u08 += RIFRQCHGOUTOFRNG_CNT_U08;
            }
            
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E3, NtcStsInfo_Cnt_T_u08, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
        }
        else
        {
            /* NTC 0x0E3 Passd */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E3, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
        }
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
