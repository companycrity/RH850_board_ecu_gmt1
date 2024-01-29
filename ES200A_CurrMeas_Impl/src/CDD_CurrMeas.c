/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_CurrMeas.c
 *     SW-C Type:  CDD_CurrMeas
 *  Generated at:  Thu Dec  8 14:09:29 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_CurrMeas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_CurrMeas.c
* Module Description: Implementation of Offset and Gain for CurrMeas
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          9 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/10/15  1        Selva       Initial Version                                                                EA4#361
* 05/08/15  2        Selva       Extern "CONST" for NVM default values                                          EA4#361
* 07/14/15  3        Selva       Fixed Anomaly 995 and 1035                                                     EA4#1069 & EA4#1116
* 09/22/15  4        Selva       updated to v3.1.0                                                              EA4#1667
* 10/20/15  5        Selva       Updated for v3.2.0                                                             EA4#2053
* 03/26/16  6        Rijvi       Updated per design rev. 4.2.0    												EA4#3978 
* 08/01/16  7        Rijvi       Updated per design rev. 4.4.0    												EA4#6642 
* 10/04/16  8        Rijvi       Added comment for clear mapping between code & model. Design rev. 4.5.0		EA4#7810
* 11/21/16  9        TATA        Updated per design rev. 4.6.0    												EA4#8299				 
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
  MotCurrEolCalSt2
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

  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_CDD_CurrMeas.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "CDD_CurrMeas.h"
#include "ElecGlbPrm.h"
#include "ArchGlbPrm.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR uires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value.  Applicable to all casts to void for all Rte_Read and Rte_Write and for client calls that don't have return errors. */
/* MISRA-C:2004 Rule 13.7 [NXTRDEV 13.7.1]:AUTOSAR uires deviation from this rule for the result of this logical operation is always 'true'*/
/* MISRA-C:2004 Rule 14.1 [NXTRDEV 14.1.1]:AUTOSAR uires deviation from this rule for This code is unreachable*/
/********************************************* Embedded Local Constants **********************************************/
#define CALPROCNOTSTRTD_CNT_U08   				0U		/* 0 = Not Started */
#define CALPROCSTRTD_CNT_U08    				1U      /* 1 = Started/In Process */
#define CALPROCPASS_CNT_U08     				2U		/* 2 = Successful */
#define CALPROCPHAABCEOLOUTOFRNG_CNT_U08    	4U		/* 4  = Phase A, B, C EOL Calculated Gains are Out Of Range */
#define CALPROCPHADEFEOLOUTOFRNG_CNT_U08    	8U 		/* 8  = Phase D, E, F EOL Calculated Gains are Out Of Range */
#define CALPROCPHAABCDEFEOLOUTOFRNG_CNT_U08 	12U 	/* 12 = Phase A, B, C, D, E, F EOL Calculated Gains are Out Of Range */
#define CALPROCVEHSPDCNDNOTMET_CNT_U08     		16U 	/* 16  = VehSpd, VehSpdVld, condition not met */
#define CALPROCMOTVELMRFCNDNOTMET_CNT_U08     	32U 	/* 32  = MotVelMrf condition not met */
#define CALPROCBOTHIVTRINACTV_CNT_U08     		64U 	/* 64 = DiagcStsIvtr1Inactv and DiagcStsIvtr1Inactv both TRUE */


#define DIFOFFSRNGCHKMAX_VOLT_F32  (1.0F)
#define DIFOFFSRNGCHKMIN_VOLT_F32    (-1.0F) /* -DIFOFFSRNGCHKMAX_VOLT_F32 */

/**********local function**********/
static FUNC(void, CDD_CurrMeas_APPL_CODE) SigMaxMinOffs( void );
static FUNC(void, CDD_CurrMeas_APPL_CODE) SigMaxMinGain( void );
static FUNC(void, CDD_CurrMeas_APPL_CODE) PerformGainCalibration(void); 
static FUNC(void, CDD_CurrMeas_APPL_CODE) McecsOffsCmdStrtandHi(void);
static FUNC(void, CDD_CurrMeas_APPL_CODE) McecsOffsCmdEndandAd(void);

																																		
static FUNC(boolean, CDD_CurrMeas_APPL_CODE) ProtocolChkWI(float32 MotCtrlMotCurrAdcVly1_Volt_T_f32, 
															     float32 MotCtrlMotCurrAdcVly2_Volt_T_f32,
															     float32 MotCtrlMotCurrAdcVly3_Volt_T_f32);		
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
 * MotCurrEolCalSt2: Enumeration of integer in interval [0...255] with enumerators
 *   MCECS_OFFSCMDSTRT (0U)
 *   MCECS_OFFSCMDHI (1U)
 *   MCECS_OFFSCMDLO (2U)
 *   MCECS_OFFSCMDZERO (3U)
 *   MCECS_OFFSCMDEND (4U)
 *   MCECS_GAINCMDAD (5U)
 *   MCECS_GAINCMDBE (6U)
 *   MCECS_GAINCMDCF (7U)
 *   MCECS_CMDSAFEST (8U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Record Types:
 * =============
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
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BrdgVltgSumPrev(void)
 *   float32 *Rte_Pim_EolOffsHiBrdgVltg(void)
 *   float32 *Rte_Pim_MotCurrEolGainA(void)
 *   float32 *Rte_Pim_MotCurrEolGainB(void)
 *   float32 *Rte_Pim_MotCurrEolGainC(void)
 *   float32 *Rte_Pim_MotCurrEolGainD(void)
 *   float32 *Rte_Pim_MotCurrEolGainE(void)
 *   float32 *Rte_Pim_MotCurrEolGainF(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaA(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaB(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaC(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaD(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaE(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaF(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgD(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgE(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgF(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgD(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgE(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgF(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgD(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgE(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgF(void)
 *   float32 *Rte_Pim_MotCurrSumAPrev(void)
 *   float32 *Rte_Pim_MotCurrSumBPrev(void)
 *   float32 *Rte_Pim_MotCurrSumCPrev(void)
 *   float32 *Rte_Pim_MotCurrSumDPrev(void)
 *   float32 *Rte_Pim_MotCurrSumEPrev(void)
 *   float32 *Rte_Pim_MotCurrSumFPrev(void)
 *   float32 *Rte_Pim_TempMotCurrAdcVlySum1Prev(void)
 *   float32 *Rte_Pim_TempMotCurrAdcVlySum2Prev(void)
 *   uint16 *Rte_Pim_GainEolAvrgCntrPrev(void)
 *   uint16 *Rte_Pim_MotCtrlNtc5DErrCntPrev(void)
 *   uint16 *Rte_Pim_MotCtrlNtc6DErrCntPrev(void)
 *   uint16 *Rte_Pim_Ntc5DErrCnt2MilliSecPrev(void)
 *   uint16 *Rte_Pim_Ntc6DErrCnt2MilliSecPrev(void)
 *   uint16 *Rte_Pim_OffsEolAvrgCntrPrev(void)
 *   uint16 *Rte_Pim_PhaOnTiErrCntPrev(void)
 *   uint8 *Rte_Pim_EolGainSts(void)
 *   uint8 *Rte_Pim_EolOffsSts(void)
 *   uint8 *Rte_Pim_EolTranCntrPrev(void)
 *   MotCurrEolCalSt2 *Rte_Pim_MotCurrEolCalStPrev(void)
 *   uint8 *Rte_Pim_MotCurrRollgCnt1Prev(void)
 *   uint8 *Rte_Pim_MotCurrRollgCnt2Prev(void)
 *   boolean *Rte_Pim_MotCurrEolOffsProcFlg(void)
 *   boolean *Rte_Pim_WrmIninTestCmplPrev(void)
 *   CurrMeasEolGainCalRec1 *Rte_Pim_CurrMeasEolGainCalSet(void)
 *   CurrMeasEolOffsCalRec1 *Rte_Pim_CurrMeasEolOffsCalSet(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   CurrMeasEolGainCalRec1 *Rte_CData_CurrMeasEolGainCalSetDft(void)
 *   CurrMeasEolOffsCalRec1 *Rte_CData_CurrMeasEolOffsCalSetDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_CurrMeasEolGainMax_Val(void)
 *   float32 Rte_Prm_CurrMeasEolGainMin_Val(void)
 *   float32 Rte_Prm_CurrMeasEolGainNumer_Val(void)
 *   float32 Rte_Prm_CurrMeasEolMaxMotVel_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsMax_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsMin_Val(void)
 *   float32 Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val(void)
 *   float32 Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolFixdPwmPerd_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val(void)
 *   uint32 Rte_Prm_CurrMeasMotAgCompuDly_Val(void)
 *   uint16 Rte_Prm_CurrMeasEolGainNrOfSample_Val(void)
 *   uint16 Rte_Prm_CurrMeasEolOffsNrOfSample_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x05DFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x05DPassStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x06DFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x06DPassStep_Val(void)
 *   uint8 Rte_Prm_CurrMeasEolTranCntrThd_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_CurrMeas_START_SEC_CODE
#include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolGainReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolGainReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolGainReq_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolGainReq_Oper
 *********************************************************************************************************************/
  *Rte_Pim_EolGainSts() = CALPROCSTRTD_CNT_U08;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolGainStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolGainStsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolGainStsReq_Oper(uint8 *CurrMeasEolGainSt_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolGainSt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolGainStsReq_Oper
 *********************************************************************************************************************/
  *CurrMeasEolGainSt_Arg = *Rte_Pim_EolGainSts(); 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolOffsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolOffsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolOffsReq_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolOffsReq_Oper
 *********************************************************************************************************************/
  *Rte_Pim_EolOffsSts() = CALPROCSTRTD_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolOffsStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolOffsStsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolOffsStsReq_Oper(uint8 *CurrMeasEolOffsSt_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsSt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolOffsStsReq_Oper
 *********************************************************************************************************************/
  *CurrMeasEolOffsSt_Arg=*Rte_Pim_EolOffsSts(); 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasGainReadReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasGainReadReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasGainReadReq_Oper(float32 *CurrMeasMotCurrGainA_Arg, float32 *CurrMeasMotCurrGainB_Arg, float32 *CurrMeasMotCurrGainC_Arg, float32 *CurrMeasMotCurrGainD_Arg, float32 *CurrMeasMotCurrGainE_Arg, float32 *CurrMeasMotCurrGainF_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainF_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasGainReadReq_Oper
 *********************************************************************************************************************/

  *CurrMeasMotCurrGainA_Arg  = Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainA;
  *CurrMeasMotCurrGainB_Arg =  Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainB;
  *CurrMeasMotCurrGainC_Arg =  Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainC;
  *CurrMeasMotCurrGainD_Arg =  Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainD;
  *CurrMeasMotCurrGainE_Arg =  Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainE;
  *CurrMeasMotCurrGainF_Arg =  Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainF;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasGainWrReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasGainWrReq>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, uint8 *CurrMeasGainWrReqSts_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasGainWrReqSts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasGainWrReq_Oper
 *********************************************************************************************************************/
    if ( (CurrMeasMotCurrGainA_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
					  (CurrMeasMotCurrGainB_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
					  (CurrMeasMotCurrGainC_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
					  (CurrMeasMotCurrGainD_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
					  (CurrMeasMotCurrGainE_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
					  (CurrMeasMotCurrGainF_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
					  (CurrMeasMotCurrGainA_Arg<= Rte_Prm_CurrMeasEolGainMax_Val()) &&
					  (CurrMeasMotCurrGainB_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
					  (CurrMeasMotCurrGainC_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
					  (CurrMeasMotCurrGainD_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
					  (CurrMeasMotCurrGainE_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
					  (CurrMeasMotCurrGainF_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()))
	{
		Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainA = CurrMeasMotCurrGainA_Arg;
		Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainB = CurrMeasMotCurrGainB_Arg;
		Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainC = CurrMeasMotCurrGainC_Arg;
		Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainD = CurrMeasMotCurrGainD_Arg;
		Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainE = CurrMeasMotCurrGainE_Arg;
		Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainF = CurrMeasMotCurrGainF_Arg;
		(void)Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(TRUE);
		
		*CurrMeasGainWrReqSts_Arg = 0U; /* Positive Response */
	}
	else
	{
		*CurrMeasGainWrReqSts_Arg = 1U; /* Negative Response */
	}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasInit1
 *********************************************************************************************************************/

  if (Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasEolOffsHiBrdgVltg > (float32)Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val())
  {
    *Rte_Pim_MotCurrOffsDeltaA() =  (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifA) / (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasEolOffsHiBrdgVltg);
    *Rte_Pim_MotCurrOffsDeltaB() =  (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifB) / (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasEolOffsHiBrdgVltg);
    *Rte_Pim_MotCurrOffsDeltaC() =  (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifC) / (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasEolOffsHiBrdgVltg);
    *Rte_Pim_MotCurrOffsDeltaD() =  (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifD) / (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasEolOffsHiBrdgVltg);
    *Rte_Pim_MotCurrOffsDeltaE() =  (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifE) / (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasEolOffsHiBrdgVltg);
    *Rte_Pim_MotCurrOffsDeltaF() =  (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifF) / (Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasEolOffsHiBrdgVltg); 
  }
  else
  {
    *Rte_Pim_MotCurrOffsDeltaA() =  0.0F;
    *Rte_Pim_MotCurrOffsDeltaB() =  0.0F;
    *Rte_Pim_MotCurrOffsDeltaC() =  0.0F;
    *Rte_Pim_MotCurrOffsDeltaD() =  0.0F;
    *Rte_Pim_MotCurrOffsDeltaE() =  0.0F;
    *Rte_Pim_MotCurrOffsDeltaF() =  0.0F;
  
  }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasOffsReadReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasOffsReadReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasOffsReadReq_Oper(float32 *CurrMeasEolOffsHiBrdgVltg_Arg, float32 *CurrMeasMotCurrOffsDifA_Arg, float32 *CurrMeasMotCurrOffsDifB_Arg, float32 *CurrMeasMotCurrOffsDifC_Arg, float32 *CurrMeasMotCurrOffsDifD_Arg, float32 *CurrMeasMotCurrOffsDifE_Arg, float32 *CurrMeasMotCurrOffsDifF_Arg, float32 *CurrMeasMotCurrOffsLoAvrgA_Arg, float32 *CurrMeasMotCurrOffsLoAvrgB_Arg, float32 *CurrMeasMotCurrOffsLoAvrgC_Arg, float32 *CurrMeasMotCurrOffsLoAvrgD_Arg, float32 *CurrMeasMotCurrOffsLoAvrgE_Arg, float32 *CurrMeasMotCurrOffsLoAvrgF_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsHiBrdgVltg_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifF_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgF_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasOffsReadReq_Oper
 *********************************************************************************************************************/

	*CurrMeasEolOffsHiBrdgVltg_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasEolOffsHiBrdgVltg;
	*CurrMeasMotCurrOffsDifA_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasMotCurrEolOffsDifA;
	*CurrMeasMotCurrOffsDifB_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasMotCurrEolOffsDifB;
	*CurrMeasMotCurrOffsDifC_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasMotCurrEolOffsDifC;
	*CurrMeasMotCurrOffsDifD_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasMotCurrEolOffsDifD;
	*CurrMeasMotCurrOffsDifE_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasMotCurrEolOffsDifE;
	*CurrMeasMotCurrOffsDifF_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasMotCurrEolOffsDifF;
	*CurrMeasMotCurrOffsLoAvrgA_Arg = Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasMotCurrOffsLoAvrgA;
	*CurrMeasMotCurrOffsLoAvrgB_Arg = Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgB;
	*CurrMeasMotCurrOffsLoAvrgC_Arg = Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgC;
	*CurrMeasMotCurrOffsLoAvrgD_Arg = Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgD;
	*CurrMeasMotCurrOffsLoAvrgE_Arg = Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgE;
	*CurrMeasMotCurrOffsLoAvrgF_Arg = Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgF;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasOffsWrReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasOffsWrReq>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, uint8 *CurrMeasOffsWrReqSts_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasOffsWrReqSts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasOffsWrReq_Oper
 *********************************************************************************************************************/
     if (((CurrMeasEolOffsHiBrdgVltg_Arg >=  Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val()))&&
	                ((CurrMeasEolOffsHiBrdgVltg_Arg <= (2.0F * Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val())))&&
					((CurrMeasMotCurrOffsDifA_Arg) >=   (DIFOFFSRNGCHKMIN_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifB_Arg) >=   (DIFOFFSRNGCHKMIN_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifC_Arg) >=   (DIFOFFSRNGCHKMIN_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifD_Arg) >=   (DIFOFFSRNGCHKMIN_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifE_Arg) >=   (DIFOFFSRNGCHKMIN_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifF_Arg) >=   (DIFOFFSRNGCHKMIN_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifA_Arg)  <=  (DIFOFFSRNGCHKMAX_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifB_Arg)  <=  (DIFOFFSRNGCHKMAX_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifC_Arg)  <=  (DIFOFFSRNGCHKMAX_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifD_Arg)  <=  (DIFOFFSRNGCHKMAX_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifE_Arg)  <=  (DIFOFFSRNGCHKMAX_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsDifF_Arg)  <=  (DIFOFFSRNGCHKMAX_VOLT_F32)) &&
                    ((CurrMeasMotCurrOffsLoAvrgA_Arg) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgB_Arg) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgC_Arg) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgD_Arg) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgE_Arg) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgF_Arg) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgA_Arg)  <=  Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgB_Arg)  <=  Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgC_Arg)  <=  Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgD_Arg)  <=  Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgE_Arg)  <=  Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                    ((CurrMeasMotCurrOffsLoAvrgF_Arg)  <=  Rte_Prm_CurrMeasEolOffsMax_Val()))
	{
		 Rte_Pim_CurrMeasEolOffsCalSet()-> CurrMeasEolOffsHiBrdgVltg = CurrMeasEolOffsHiBrdgVltg_Arg ;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifA = CurrMeasMotCurrOffsDifA_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifB = CurrMeasMotCurrOffsDifB_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifC = CurrMeasMotCurrOffsDifC_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifD = CurrMeasMotCurrOffsDifD_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifE = CurrMeasMotCurrOffsDifE_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifF = CurrMeasMotCurrOffsDifF_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgA= CurrMeasMotCurrOffsLoAvrgA_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgB= CurrMeasMotCurrOffsLoAvrgB_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgC= CurrMeasMotCurrOffsLoAvrgC_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgD= CurrMeasMotCurrOffsLoAvrgD_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgE= CurrMeasMotCurrOffsLoAvrgE_Arg;
		 Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgF= CurrMeasMotCurrOffsLoAvrgF_Arg;
		 (void)Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(TRUE);
		 
		 *CurrMeasOffsWrReqSts_Arg = 0U; /* Positive Response */
	}
	else
	{
		*CurrMeasOffsWrReqSts_Arg = 1U; /* Negative Response */
	}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyE_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrEolCalSt_Val(MotCurrEolCalSt2 data)
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
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasPer1
 *********************************************************************************************************************/

VAR(float32, AUTOMATIC)  MotCurrAdcVlyA_Volt_T_f32;
VAR(float32, AUTOMATIC)  MotCurrAdcVlyB_Volt_T_f32;
VAR(float32, AUTOMATIC)  MotCurrAdcVlyC_Volt_T_f32;
VAR(float32, AUTOMATIC)  MotCurrAdcVlyD_Volt_T_f32;
VAR(float32, AUTOMATIC)  MotCurrAdcVlyE_Volt_T_f32;
VAR(float32, AUTOMATIC)  MotCurrAdcVlyF_Volt_T_f32;
VAR(float32, AUTOMATIC)  MotVelMrf_MtrRadpS_T_f32;
VAR(float32, AUTOMATIC)  VehSpd_Kph_T_f32;
VAR(boolean, AUTOMATIC)  VehSpdVld_Cnt_T_logl;
VAR(boolean, AUTOMATIC)  DiagcStsIvtr1Inactv_Cnt_T_logl;
VAR(boolean, AUTOMATIC)  DiagcStsIvtr2Inactv_Cnt_T_logl;


(void)Rte_Read_MotCurrAdcVlyA_Val(&MotCurrAdcVlyA_Volt_T_f32);     
(void)Rte_Read_MotCurrAdcVlyB_Val(&MotCurrAdcVlyB_Volt_T_f32);     
(void)Rte_Read_MotCurrAdcVlyC_Val(&MotCurrAdcVlyC_Volt_T_f32);     
(void)Rte_Read_MotCurrAdcVlyD_Val(&MotCurrAdcVlyD_Volt_T_f32);     
(void)Rte_Read_MotCurrAdcVlyE_Val(&MotCurrAdcVlyE_Volt_T_f32);     
(void)Rte_Read_MotCurrAdcVlyF_Val(&MotCurrAdcVlyF_Volt_T_f32);     
(void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MtrRadpS_T_f32);           
(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);                      
(void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);              
(void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_logl);
(void)Rte_Read_DiagcStsIvtr2Inactv_Logl(&DiagcStsIvtr2Inactv_Cnt_T_logl);


/**************** Start: Offset Calibrations ***************/

if(*Rte_Pim_EolOffsSts() == CALPROCSTRTD_CNT_U08)  
{
    if( (VehSpd_Kph_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32 ) && (VehSpdVld_Cnt_T_logl == TRUE) )
    {
		if( Rte_Prm_CurrMeasEolMaxMotVel_Val() >= Abslt_f32_f32(MotVelMrf_MtrRadpS_T_f32) )  
		{
			switch(*Rte_Pim_MotCurrEolCalStPrev())
			{
				case MCECS_OFFSCMDSTRT:		    
				case MCECS_OFFSCMDHI:	
				(void)McecsOffsCmdStrtandHi();	
				break;
		
				case MCECS_OFFSCMDLO:
					
					if(Rte_Prm_CurrMeasEolTranCntrThd_Val() == *Rte_Pim_EolTranCntrPrev())
					{ 
					   *Rte_Pim_MotCurrSumAPrev() = *Rte_Pim_MotCurrSumAPrev() +  MotCurrAdcVlyA_Volt_T_f32;
					   *Rte_Pim_MotCurrSumBPrev() = *Rte_Pim_MotCurrSumBPrev() +  MotCurrAdcVlyB_Volt_T_f32;
					   *Rte_Pim_MotCurrSumCPrev() = *Rte_Pim_MotCurrSumCPrev() +  MotCurrAdcVlyC_Volt_T_f32;
					   *Rte_Pim_MotCurrSumDPrev() = *Rte_Pim_MotCurrSumDPrev() +  MotCurrAdcVlyD_Volt_T_f32;
					   *Rte_Pim_MotCurrSumEPrev() = *Rte_Pim_MotCurrSumEPrev() +  MotCurrAdcVlyE_Volt_T_f32;
					   *Rte_Pim_MotCurrSumFPrev() = *Rte_Pim_MotCurrSumFPrev() +  MotCurrAdcVlyF_Volt_T_f32;
					   *Rte_Pim_OffsEolAvrgCntrPrev() = *Rte_Pim_OffsEolAvrgCntrPrev()+ 1U;
					   
					   if ( *Rte_Pim_OffsEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolOffsNrOfSample_Val() )   
					   {
						  *Rte_Pim_MotCurrOffsLoAvrgA() = *Rte_Pim_MotCurrSumAPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsLoAvrgB() = *Rte_Pim_MotCurrSumBPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsLoAvrgC() = *Rte_Pim_MotCurrSumCPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsLoAvrgD() = *Rte_Pim_MotCurrSumDPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsLoAvrgE() = *Rte_Pim_MotCurrSumEPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsLoAvrgF() = *Rte_Pim_MotCurrSumFPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrSumAPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumBPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumCPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumDPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumEPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumFPrev()  =0.0F;
						  *Rte_Pim_EolTranCntrPrev()  = 0U;
						  *Rte_Pim_OffsEolAvrgCntrPrev()  = 0U;
						  *Rte_Pim_MotCurrEolCalStPrev() =  MCECS_OFFSCMDZERO;
					   }
					}
					else
					{
						*Rte_Pim_EolTranCntrPrev() = *Rte_Pim_EolTranCntrPrev() + 1U;
					}
				break;
		
				case MCECS_OFFSCMDZERO:
					
					if(Rte_Prm_CurrMeasEolTranCntrThd_Val() == *Rte_Pim_EolTranCntrPrev())
					{ 
					   *Rte_Pim_MotCurrSumAPrev() = *Rte_Pim_MotCurrSumAPrev() +  MotCurrAdcVlyA_Volt_T_f32;
					   *Rte_Pim_MotCurrSumBPrev() = *Rte_Pim_MotCurrSumBPrev() +  MotCurrAdcVlyB_Volt_T_f32;
					   *Rte_Pim_MotCurrSumCPrev() = *Rte_Pim_MotCurrSumCPrev() +  MotCurrAdcVlyC_Volt_T_f32;
					   *Rte_Pim_MotCurrSumDPrev() = *Rte_Pim_MotCurrSumDPrev() +  MotCurrAdcVlyD_Volt_T_f32;
					   *Rte_Pim_MotCurrSumEPrev() = *Rte_Pim_MotCurrSumEPrev() +  MotCurrAdcVlyE_Volt_T_f32;
					   *Rte_Pim_MotCurrSumFPrev() = *Rte_Pim_MotCurrSumFPrev() +  MotCurrAdcVlyF_Volt_T_f32;
					   *Rte_Pim_OffsEolAvrgCntrPrev() = *Rte_Pim_OffsEolAvrgCntrPrev()+ 1U;
					   
					   if (*Rte_Pim_OffsEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolOffsNrOfSample_Val())   
					   {
						  *Rte_Pim_MotCurrOffsZeroAvrgA() = *Rte_Pim_MotCurrSumAPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsZeroAvrgB() = *Rte_Pim_MotCurrSumBPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsZeroAvrgC() = *Rte_Pim_MotCurrSumCPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsZeroAvrgD() = *Rte_Pim_MotCurrSumDPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsZeroAvrgE() = *Rte_Pim_MotCurrSumEPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrOffsZeroAvrgF() = *Rte_Pim_MotCurrSumFPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
						  *Rte_Pim_MotCurrSumAPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumBPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumCPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumDPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumEPrev()  =0.0F;
						  *Rte_Pim_MotCurrSumFPrev()  =0.0F;
						  *Rte_Pim_EolTranCntrPrev()  = 0U;
						  *Rte_Pim_OffsEolAvrgCntrPrev()  = 0U;
						  *Rte_Pim_MotCurrEolCalStPrev() =  MCECS_OFFSCMDEND;
					   }
					}
					else
					{
						*Rte_Pim_EolTranCntrPrev() = *Rte_Pim_EolTranCntrPrev() + 1U;
					}
				break;
		
				case MCECS_OFFSCMDEND:
					if(*Rte_Pim_MotCurrEolOffsProcFlg() == FALSE)
					{
						SigMaxMinOffs();
					}
				break;
		
				default:
				break;      
			}
		}
		else
		{
			*Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;  
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, 8U, NTCSTS_FAILD, 0U);
			*Rte_Pim_EolOffsSts() = CALPROCMOTVELMRFCNDNOTMET_CNT_U08;
		}
		
    }
    else
    {
      *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;   
	  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, 4U, NTCSTS_FAILD, 0U); 
      *Rte_Pim_EolOffsSts() = CALPROCVEHSPDCNDNOTMET_CNT_U08;
    }

}

/**************** End: Offset Calibrations ***************/



/**************** Start: Gain Calibrations ***************/
if( (*Rte_Pim_EolGainSts() == CALPROCSTRTD_CNT_U08) && (*Rte_Pim_MotCurrEolOffsProcFlg() == TRUE) )
{
  (void)PerformGainCalibration();
}
/**************** End: Gain Calibrations ***************/


(void) Rte_Write_MotCurrEolCalSt_Val(*Rte_Pim_MotCurrEolCalStPrev()); 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasPer3
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyE_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_Ntc5DErrCnt_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_Ntc6DErrCnt_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CurrMeasWrmIninTestCmpl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrQlfr1_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_MotCurrQlfr2_Val(SigQlfr1 data)
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
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasPer3
 *********************************************************************************************************************/
    VAR(SysSt1, AUTOMATIC)  SysSt_T_enum ;	
	VAR(uint8, AUTOMATIC) StrtUpSt_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr2Inactv_Cnt_T_logl;
    VAR(SigQlfr1, AUTOMATIC)  MotCurrQlfr1_T_enum;
    VAR(SigQlfr1, AUTOMATIC)  MotCurrQlfr2_T_enum;
    VAR(uint16, AUTOMATIC) 	Ntc5DErrCnt_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) 	Ntc6DErrCnt_Cnt_T_u16;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyA_Volt_T_f32;  
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyB_Volt_T_f32;  
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyC_Volt_T_f32; 
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyD_Volt_T_f32; 
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyE_Volt_T_f32; 
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyF_Volt_T_f32;  
	VAR(boolean, AUTOMATIC) RangeCheckWIABC_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) RangeCheckWIDEF_Cnt_T_logl;
	
   (void)Rte_Read_SysSt_Val(&SysSt_T_enum);
   (void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_logl);
   (void)Rte_Read_DiagcStsIvtr2Inactv_Logl(&DiagcStsIvtr2Inactv_Cnt_T_logl);
   (void)Rte_Read_Ntc5DErrCnt_Val(&Ntc5DErrCnt_Cnt_T_u16); 
   (void)Rte_Read_Ntc6DErrCnt_Val(&Ntc6DErrCnt_Cnt_T_u16); 
   (void)Rte_Read_MotCurrAdcVlyA_Val(&MotCurrAdcVlyA_Volt_T_f32); 
   (void)Rte_Read_MotCurrAdcVlyB_Val(&MotCurrAdcVlyB_Volt_T_f32); 
   (void)Rte_Read_MotCurrAdcVlyC_Val(&MotCurrAdcVlyC_Volt_T_f32); 
   (void)Rte_Read_MotCurrAdcVlyD_Val(&MotCurrAdcVlyD_Volt_T_f32); 
   (void)Rte_Read_MotCurrAdcVlyE_Val(&MotCurrAdcVlyE_Volt_T_f32); 
   (void)Rte_Read_MotCurrAdcVlyF_Val(&MotCurrAdcVlyF_Volt_T_f32); 
   (void)Rte_Read_StrtUpSt_Val(&StrtUpSt_Cnt_T_u08);  
   
	if (((SysSt_T_enum == SYSST_ENA) || (SysSt_T_enum == SYSST_WRMININ)) && (*Rte_Pim_WrmIninTestCmplPrev() == TRUE))
	 {
		 if(Ntc5DErrCnt_Cnt_T_u16 == *Rte_Pim_Ntc5DErrCnt2MilliSecPrev())
		 {
			 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, 0U, NTCSTS_PREPASSD, Rte_Prm_CurrMeasNtc0x05DPassStep_Val()); 
			  
		 }
		 else
		 {
			  if(SysSt_T_enum == SYSST_ENA)
			  {
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, 2U, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x05DFailStep_Val()); 
			  }
			  else
			  {
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, 3U, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x05DFailStep_Val());
			  }
		}
		 
		  
		 if(Ntc6DErrCnt_Cnt_T_u16 == *Rte_Pim_Ntc6DErrCnt2MilliSecPrev())
		 {
			 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X06D, 0U, NTCSTS_PREPASSD, Rte_Prm_CurrMeasNtc0x06DPassStep_Val()); 
			  
		 }
		 else
		 {
			if(SysSt_T_enum == SYSST_ENA)
			{ 
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X06D, 2U, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x06DFailStep_Val()); 
			}
			else
			{
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X06D, 3U, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x06DFailStep_Val()); 
			}
		}
		 
		(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X05D, &MotCurrQlfr1_T_enum);
		(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X06D, &MotCurrQlfr2_T_enum);
		 
        *Rte_Pim_Ntc5DErrCnt2MilliSecPrev() =  Ntc5DErrCnt_Cnt_T_u16;		
		*Rte_Pim_Ntc6DErrCnt2MilliSecPrev() =  Ntc6DErrCnt_Cnt_T_u16;
		 
	}
    else if ((SysSt_T_enum == SYSST_WRMININ) && (StrtUpSt_Cnt_T_u08 == ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08)) 
	{   
        
		if(DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE)
		{    
			 RangeCheckWIABC_Cnt_T_logl = ProtocolChkWI(MotCurrAdcVlyA_Volt_T_f32, MotCurrAdcVlyB_Volt_T_f32, MotCurrAdcVlyC_Volt_T_f32);
			 if( RangeCheckWIABC_Cnt_T_logl == TRUE) 
				
			 {
			   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, 0U, NTCSTS_PREPASSD, Rte_Prm_CurrMeasNtc0x05DPassStep_Val());
			 }
			 
			 else
				
			 {
			   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, 1U, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x05DFailStep_Val());
			 }	
			 	 
		}
		
		
		if ((ELECGLBPRM_IVTRCNT_CNT_U08 ==2U) && (DiagcStsIvtr2Inactv_Cnt_T_logl == FALSE))
		{
			 RangeCheckWIDEF_Cnt_T_logl = ProtocolChkWI(MotCurrAdcVlyD_Volt_T_f32, MotCurrAdcVlyE_Volt_T_f32, MotCurrAdcVlyF_Volt_T_f32);
			 if( RangeCheckWIDEF_Cnt_T_logl == TRUE) 
			 {
			   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X06D, 0U, NTCSTS_PREPASSD, Rte_Prm_CurrMeasNtc0x06DPassStep_Val());
			 } 
			 else 
			
			 {
			  
			    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X06D, 1U, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x06DFailStep_Val());
			  
			 
			 } 
			
		}
		
	   (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X05D, &MotCurrQlfr1_T_enum);
	   (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X06D, &MotCurrQlfr2_T_enum);
	   if ((DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE) && (ELECGLBPRM_IVTRCNT_CNT_U08 ==2U) && (DiagcStsIvtr2Inactv_Cnt_T_logl == FALSE))   
	   {   
		 
			 if ((MotCurrQlfr1_T_enum >SIGQLFR_NORES) &&  (MotCurrQlfr2_T_enum >SIGQLFR_NORES))
			 {
				*Rte_Pim_WrmIninTestCmplPrev() = TRUE; 
			 }	
		
	   }
	   else 
	   {
		   if ((MotCurrQlfr1_T_enum >SIGQLFR_NORES) ||  (MotCurrQlfr2_T_enum >SIGQLFR_NORES))
		   {
				*Rte_Pim_WrmIninTestCmplPrev() = TRUE; 
		   }	
		   
	   }
        		 
	}
	else
	{
	   (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X05D, &MotCurrQlfr1_T_enum);
	   (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X06D, &MotCurrQlfr2_T_enum);	
	   *Rte_Pim_WrmIninTestCmplPrev() = FALSE;
	}
	(void) Rte_Write_CurrMeasWrmIninTestCmpl_Logl( *Rte_Pim_WrmIninTestCmplPrev());
	(void) Rte_Write_MotCurrQlfr1_Val(MotCurrQlfr1_T_enum);
	(void) Rte_Write_MotCurrQlfr2_Val(MotCurrQlfr2_T_enum);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_CurrMeas_STOP_SEC_CODE
#include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


 /*****************************************************************************
  * Name:        SigMaxMinOffs
  * Description: Created for checking Signal range  and  update offset value in NVM
  * Inputs:      None
  *              
  * Inputs/Output:            None
  * Inputs/Output:            None
  * Outputs:                  None
  *
*****************************************************************************/ 
static FUNC(void, CDD_CurrMeas_APPL_CODE) SigMaxMinOffs( void )
{ 

    VAR(boolean, AUTOMATIC) OffsABCflag_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) OffsDEFflag_Cnt_T_logl;
	
    VAR(boolean, AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr2Inactv_Cnt_T_logl;
	VAR(uint8, AUTOMATIC)   NtcParam_Cnt_T_u08 = 0U;
	
    (void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_logl);
    (void)Rte_Read_DiagcStsIvtr2Inactv_Logl(&DiagcStsIvtr2Inactv_Cnt_T_logl);
	
	OffsABCflag_Cnt_T_logl  = FALSE;
	OffsDEFflag_Cnt_T_logl  = FALSE;
	
	
	if( DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE )
	{
		if( ((*Rte_Pim_MotCurrOffsHiAvrgA()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsHiAvrgB()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsHiAvrgC()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&                 
			((*Rte_Pim_MotCurrOffsHiAvrgA()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsHiAvrgB()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsHiAvrgC()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&               
			((*Rte_Pim_MotCurrOffsLoAvrgA()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsLoAvrgB()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsLoAvrgC()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&                  
			((*Rte_Pim_MotCurrOffsLoAvrgA()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsLoAvrgB()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsLoAvrgC()) <=  Rte_Prm_CurrMeasEolOffsMax_Val()) 
		   )
		{
			OffsABCflag_Cnt_T_logl = TRUE;
		}
		else
		{
			NtcParam_Cnt_T_u08 = 1U;
		}
	
	}
	else
	{
		OffsABCflag_Cnt_T_logl = FALSE;
	}

	if( (ELECGLBPRM_IVTRCNT_CNT_U08 == 2U) && (DiagcStsIvtr2Inactv_Cnt_T_logl == FALSE) ) 
	{
		if( ((*Rte_Pim_MotCurrOffsHiAvrgD()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsHiAvrgE()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsHiAvrgF()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsHiAvrgD()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsHiAvrgE()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsHiAvrgF()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsLoAvrgD()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsLoAvrgE()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsLoAvrgF()) >=   Rte_Prm_CurrMeasEolOffsMin_Val()) &&
			((*Rte_Pim_MotCurrOffsLoAvrgD()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsLoAvrgE()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())  &&
			((*Rte_Pim_MotCurrOffsLoAvrgF()) <=  Rte_Prm_CurrMeasEolOffsMax_Val())
		  )
		{
				OffsDEFflag_Cnt_T_logl  = TRUE;
		}
		else
		{
			NtcParam_Cnt_T_u08 = NtcParam_Cnt_T_u08 + 2U;
		}
        
	}
	else
	{
		OffsDEFflag_Cnt_T_logl  = FALSE;
	}
	
	if ( (OffsDEFflag_Cnt_T_logl  == TRUE)  && (OffsABCflag_Cnt_T_logl == TRUE))
	{    
        *Rte_Pim_EolTranCntrPrev()  = 0U;
		*Rte_Pim_OffsEolAvrgCntrPrev()  = 0U;
		*Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDEND; 
		
        if( (DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE) || (DiagcStsIvtr2Inactv_Cnt_T_logl == FALSE) )
	    {  
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasEolOffsHiBrdgVltg  = *Rte_Pim_EolOffsHiBrdgVltg(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifA = *Rte_Pim_MotCurrOffsHiAvrgA() - *Rte_Pim_MotCurrOffsLoAvrgA(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifB = *Rte_Pim_MotCurrOffsHiAvrgB() - *Rte_Pim_MotCurrOffsLoAvrgB(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifC = *Rte_Pim_MotCurrOffsHiAvrgC() - *Rte_Pim_MotCurrOffsLoAvrgC(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifD = *Rte_Pim_MotCurrOffsHiAvrgD() - *Rte_Pim_MotCurrOffsLoAvrgD(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifE = *Rte_Pim_MotCurrOffsHiAvrgE() - *Rte_Pim_MotCurrOffsLoAvrgE(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrEolOffsDifF = *Rte_Pim_MotCurrOffsHiAvrgF() - *Rte_Pim_MotCurrOffsLoAvrgF(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgA = *Rte_Pim_MotCurrOffsLoAvrgA(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgB = *Rte_Pim_MotCurrOffsLoAvrgB(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgC = *Rte_Pim_MotCurrOffsLoAvrgC(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgD = *Rte_Pim_MotCurrOffsLoAvrgD(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgE = *Rte_Pim_MotCurrOffsLoAvrgE(); 
		   Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgF = *Rte_Pim_MotCurrOffsLoAvrgF(); 
		   (void)Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(TRUE);  
		   
		   *Rte_Pim_MotCurrEolOffsProcFlg() = TRUE;
		   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, 0U, NTCSTS_PASSD, 0U); 
		   *Rte_Pim_EolOffsSts() = CALPROCPASS_CNT_U08;   
		}
		else
		{
		  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, 16U, NTCSTS_FAILD, 0U); 
		  *Rte_Pim_EolOffsSts() = CALPROCBOTHIVTRINACTV_CNT_U08; 
		  *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
		}
	} 
	else
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, NtcParam_Cnt_T_u08, NTCSTS_FAILD, 0U); 
		*Rte_Pim_EolOffsSts() = NtcParam_Cnt_T_u08 * 4U;
		*Rte_Pim_MotCurrEolCalStPrev() =  MCECS_CMDSAFEST;   
		*Rte_Pim_EolTranCntrPrev()  = 0U;
		*Rte_Pim_OffsEolAvrgCntrPrev()  = 0U;
	}

 
}


 /*****************************************************************************
  * Name:        SigMaxMinGain
  * Description: Created for checking Signal range and update Gain value in NVM
  * Inputs:      None
  *              
  * Inputs/Output:            None
  * Inputs/Output:            None
  * Outputs:                  True or False based on Signal Range Validation
  *
*****************************************************************************/ 
static FUNC(void, CDD_CurrMeas_APPL_CODE) SigMaxMinGain( void )
{ 
    
    VAR(boolean, AUTOMATIC) GainABCflag_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) GainDEFflag_Cnt_T_logl = FALSE;
	
    VAR(boolean, AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr2Inactv_Cnt_T_logl;
	VAR(uint8, AUTOMATIC)   NtcParam_Cnt_T_u08 = 0U;	
	
    (void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_logl);
    (void)Rte_Read_DiagcStsIvtr2Inactv_Logl(&DiagcStsIvtr2Inactv_Cnt_T_logl);
	
	if( DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE )
	{ 
		if( (*Rte_Pim_MotCurrEolGainA() >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
			(*Rte_Pim_MotCurrEolGainB() >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
			(*Rte_Pim_MotCurrEolGainC() >= Rte_Prm_CurrMeasEolGainMin_Val()) &&	  
			(*Rte_Pim_MotCurrEolGainA() <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
			(*Rte_Pim_MotCurrEolGainB() <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
			(*Rte_Pim_MotCurrEolGainC() <= Rte_Prm_CurrMeasEolGainMax_Val()) )
		{
			GainABCflag_Cnt_T_logl = TRUE;  
		}
		else
		{
			NtcParam_Cnt_T_u08 = 1U;
		}
		
	}
	else
	{
        GainABCflag_Cnt_T_logl = FALSE;  		
	}
	
	if( (DiagcStsIvtr2Inactv_Cnt_T_logl == FALSE) && (ELECGLBPRM_IVTRCNT_CNT_U08 == 2U) )
	{
		
		if( (*Rte_Pim_MotCurrEolGainD() >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
			(*Rte_Pim_MotCurrEolGainE() >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
			(*Rte_Pim_MotCurrEolGainF() >= Rte_Prm_CurrMeasEolGainMin_Val()) &&
			(*Rte_Pim_MotCurrEolGainD() <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
			(*Rte_Pim_MotCurrEolGainE() <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
			(*Rte_Pim_MotCurrEolGainF() <= Rte_Prm_CurrMeasEolGainMax_Val()) )
		{
			GainDEFflag_Cnt_T_logl = TRUE;  
		}
		else
		{
			NtcParam_Cnt_T_u08 = NtcParam_Cnt_T_u08 + 2U;
		}
		
	}
	else
	{
        GainDEFflag_Cnt_T_logl = FALSE;  		
	}
	
	if( (GainABCflag_Cnt_T_logl == TRUE) && (GainDEFflag_Cnt_T_logl == TRUE) )
	{
	   *Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDSTRT;
	   *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
	   *Rte_Pim_EolTranCntrPrev() = 0U;  
	   
	   if( (DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE) || (DiagcStsIvtr2Inactv_Cnt_T_logl == FALSE) )
	   {
		   Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainA = *Rte_Pim_MotCurrEolGainA(); 
		   Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainB = *Rte_Pim_MotCurrEolGainB(); 
		   Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainC = *Rte_Pim_MotCurrEolGainC(); 
		   Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainD = *Rte_Pim_MotCurrEolGainD(); 
		   Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainE = *Rte_Pim_MotCurrEolGainE(); 
		   Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainF = *Rte_Pim_MotCurrEolGainF(); 
		   (void)Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(TRUE);  
		   
		   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, 0U, NTCSTS_PASSD, 0U); 
		   *Rte_Pim_EolGainSts() = CALPROCPASS_CNT_U08;
	   }  
	   else
	   {
		    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, 16U, NTCSTS_FAILD, 0U);  
			*Rte_Pim_EolGainSts() = CALPROCBOTHIVTRINACTV_CNT_U08;
			*Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;    
	   }
	  
	} 
	else
	{
	  *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;   
	  *Rte_Pim_EolGainSts() = NtcParam_Cnt_T_u08 * 4U;       
	  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, NtcParam_Cnt_T_u08, NTCSTS_FAILD, 0U);  
	  *Rte_Pim_EolTranCntrPrev()  = 0U;
	  *Rte_Pim_GainEolAvrgCntrPrev()  = 0U;
	}
    
}


 /*****************************************************************************
  * Name:        PerformGainCalibration
  * Description: Created for checking Signal range 
  * Inputs:      None
  *              
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:                 None
  *
*****************************************************************************/ 
static FUNC(void, CDD_CurrMeas_APPL_CODE) PerformGainCalibration(void)
{
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyB_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyC_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyE_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyF_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotVelMrf_MtrRadpS_T_f32;
	VAR(float32, AUTOMATIC)  VehSpd_Kph_T_f32;
	VAR(boolean, AUTOMATIC)  VehSpdVld_Cnt_T_logl;
	VAR(float32, AUTOMATIC)  AbsZeroAvrgBDiff_Volt_T_f32;
	VAR(float32, AUTOMATIC)  AbsZeroAvrgCDiff_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAvrgC_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAvrgB_Volt_T_f32;
	VAR(float32, AUTOMATIC)  AbsZeroAvrgEDiff_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAvrgE_Volt_T_f32;
	VAR(float32, AUTOMATIC)  AbsZeroAvrgFDiff_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAvrgF_Volt_T_f32;
      
	
	
	(void)Rte_Read_MotCurrAdcVlyB_Val(&MotCurrAdcVlyB_Volt_T_f32);
	(void)Rte_Read_MotCurrAdcVlyC_Val(&MotCurrAdcVlyC_Volt_T_f32);
	(void)Rte_Read_MotCurrAdcVlyE_Val(&MotCurrAdcVlyE_Volt_T_f32);
	(void)Rte_Read_MotCurrAdcVlyF_Val(&MotCurrAdcVlyF_Volt_T_f32);
	(void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MtrRadpS_T_f32);
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
	(void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);
	
    
	if( (VehSpd_Kph_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (VehSpdVld_Cnt_T_logl == TRUE) )  
	{
		if( Abslt_f32_f32(MotVelMrf_MtrRadpS_T_f32) <= Rte_Prm_CurrMeasEolMaxMotVel_Val() ) 
		{
			switch(*Rte_Pim_MotCurrEolCalStPrev())
			{
				case MCECS_OFFSCMDEND:				
				case MCECS_GAINCMDAD:
				(void)McecsOffsCmdEndandAd();
				break;
				
				case MCECS_GAINCMDBE:
					
					if(Rte_Prm_CurrMeasEolTranCntrThd_Val() == *Rte_Pim_EolTranCntrPrev())
					{   
					   *Rte_Pim_TempMotCurrAdcVlySum1Prev() = *Rte_Pim_TempMotCurrAdcVlySum1Prev() + MotCurrAdcVlyB_Volt_T_f32;
					   *Rte_Pim_TempMotCurrAdcVlySum2Prev() = *Rte_Pim_TempMotCurrAdcVlySum2Prev() + MotCurrAdcVlyE_Volt_T_f32;
					   *Rte_Pim_GainEolAvrgCntrPrev()=  *Rte_Pim_GainEolAvrgCntrPrev() + 1U;
					   
					   if(*Rte_Pim_GainEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolGainNrOfSample_Val())
					   {
							MotCurrAvrgB_Volt_T_f32 = *Rte_Pim_TempMotCurrAdcVlySum1Prev() / (float32)*Rte_Pim_GainEolAvrgCntrPrev();
							MotCurrAvrgE_Volt_T_f32 = *Rte_Pim_TempMotCurrAdcVlySum2Prev() / (float32)*Rte_Pim_GainEolAvrgCntrPrev();
							AbsZeroAvrgBDiff_Volt_T_f32 =  Abslt_f32_f32(MotCurrAvrgB_Volt_T_f32 - *Rte_Pim_MotCurrOffsZeroAvrgB());
							AbsZeroAvrgEDiff_Volt_T_f32 =  Abslt_f32_f32(MotCurrAvrgE_Volt_T_f32 - *Rte_Pim_MotCurrOffsZeroAvrgE());
					  
							if( (AbsZeroAvrgBDiff_Volt_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32 ) && 
								(AbsZeroAvrgEDiff_Volt_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32 ) )
							{
								*Rte_Pim_MotCurrEolGainB() = Rte_Prm_CurrMeasEolGainNumer_Val()/AbsZeroAvrgBDiff_Volt_T_f32;
								*Rte_Pim_MotCurrEolGainE() = Rte_Prm_CurrMeasEolGainNumer_Val()/AbsZeroAvrgEDiff_Volt_T_f32;
								*Rte_Pim_MotCurrEolCalStPrev() = MCECS_GAINCMDCF;
								*Rte_Pim_GainEolAvrgCntrPrev() = 0U;
								*Rte_Pim_EolTranCntrPrev() = 0U;
								*Rte_Pim_TempMotCurrAdcVlySum1Prev() = 0.0F;
								*Rte_Pim_TempMotCurrAdcVlySum2Prev() = 0.0F;
							}
							else
							{
								*Rte_Pim_GainEolAvrgCntrPrev() = 0U;  
								*Rte_Pim_TempMotCurrAdcVlySum1Prev() = 0.0F;
								*Rte_Pim_TempMotCurrAdcVlySum2Prev() = 0.0F;
							}
					   }

					}
					else
					{
						*Rte_Pim_EolTranCntrPrev() = *Rte_Pim_EolTranCntrPrev()+ 1U;
					}
				break;
				
				case MCECS_GAINCMDCF:
					
					if(Rte_Prm_CurrMeasEolTranCntrThd_Val() == *Rte_Pim_EolTranCntrPrev())
					{   
					   *Rte_Pim_TempMotCurrAdcVlySum1Prev() = *Rte_Pim_TempMotCurrAdcVlySum1Prev() + MotCurrAdcVlyC_Volt_T_f32;
					   *Rte_Pim_TempMotCurrAdcVlySum2Prev() = *Rte_Pim_TempMotCurrAdcVlySum2Prev() + MotCurrAdcVlyF_Volt_T_f32;
					   *Rte_Pim_GainEolAvrgCntrPrev() = *Rte_Pim_GainEolAvrgCntrPrev() + 1U;
					   
					   if(*Rte_Pim_GainEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolGainNrOfSample_Val())
					   {
						  MotCurrAvrgC_Volt_T_f32 = *Rte_Pim_TempMotCurrAdcVlySum1Prev() / (float32)*Rte_Pim_GainEolAvrgCntrPrev();
						  MotCurrAvrgF_Volt_T_f32 = *Rte_Pim_TempMotCurrAdcVlySum2Prev() / (float32)*Rte_Pim_GainEolAvrgCntrPrev();
						  AbsZeroAvrgCDiff_Volt_T_f32 =  Abslt_f32_f32(MotCurrAvrgC_Volt_T_f32 - *Rte_Pim_MotCurrOffsZeroAvrgC());
						  AbsZeroAvrgFDiff_Volt_T_f32 =  Abslt_f32_f32(MotCurrAvrgF_Volt_T_f32 - *Rte_Pim_MotCurrOffsZeroAvrgF());
						  
						  if( (AbsZeroAvrgCDiff_Volt_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32 ) && 
							  (AbsZeroAvrgFDiff_Volt_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32) )
						  {
							  *Rte_Pim_MotCurrEolGainC() = Rte_Prm_CurrMeasEolGainNumer_Val()/AbsZeroAvrgCDiff_Volt_T_f32;
							  *Rte_Pim_MotCurrEolGainF() = Rte_Prm_CurrMeasEolGainNumer_Val()/AbsZeroAvrgFDiff_Volt_T_f32;
							  *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
							  *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
							  *Rte_Pim_EolTranCntrPrev() = 0U;
							  *Rte_Pim_TempMotCurrAdcVlySum1Prev() = 0.0F;
							  *Rte_Pim_TempMotCurrAdcVlySum2Prev() = 0.0F;
						  }
						  else
						  {
							  *Rte_Pim_GainEolAvrgCntrPrev() = 0U;  
							  *Rte_Pim_TempMotCurrAdcVlySum1Prev() = 0.0F;
							  *Rte_Pim_TempMotCurrAdcVlySum2Prev() = 0.0F;
						  }
					   }
					}
					else
					{
						*Rte_Pim_EolTranCntrPrev() = *Rte_Pim_EolTranCntrPrev() + 1U;
					}
				break;
				
				case MCECS_CMDSAFEST:
					SigMaxMinGain(); 
				break;
				
				default:
				break;	
			}
		}
		else
		{
			*Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST; 
			*Rte_Pim_EolGainSts() = CALPROCMOTVELMRFCNDNOTMET_CNT_U08;  
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, 4U, NTCSTS_FAILD, 0U); 
		}
		
	}
	else
	{
		*Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST; 
		*Rte_Pim_EolGainSts() = CALPROCVEHSPDCNDNOTMET_CNT_U08;  
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, 4U, NTCSTS_FAILD, 0U);
	}
    
}

/***************************************************************************************************************
  * Name:        ProtocolChkWI
  * Description: Created for checking Signal range 
  * Inputs:      MotCtrlMotCurrAdcVly1
  *              MotCtrlMotCurrAdcVly2
  *		         MotCtrlMotCurrAdcVly3
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:                 True or False based on Signal Range Validation
  *
***************************************************************************************************************/ 
static FUNC(boolean, CDD_CurrMeas_APPL_CODE) ProtocolChkWI(float32 MotCtrlMotCurrAdcVly1_Volt_T_f32, 
															     float32 MotCtrlMotCurrAdcVly2_Volt_T_f32,
															     float32 MotCtrlMotCurrAdcVly3_Volt_T_f32)
{
 
 VAR(boolean, AUTOMATIC) ProtocolChk_Cnt_T_logl ;
 
 if ((MotCtrlMotCurrAdcVly1_Volt_T_f32 > Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val())
		&&(MotCtrlMotCurrAdcVly2_Volt_T_f32 > Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val())
		 &&(MotCtrlMotCurrAdcVly3_Volt_T_f32 > Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val())
		 &&(MotCtrlMotCurrAdcVly1_Volt_T_f32 < Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val())
		 &&(MotCtrlMotCurrAdcVly2_Volt_T_f32 < Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val())
		 &&(MotCtrlMotCurrAdcVly3_Volt_T_f32 < Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val()))
 {
  ProtocolChk_Cnt_T_logl = TRUE;
 }
 else
 {
  ProtocolChk_Cnt_T_logl = FALSE;
 }
 
 return(ProtocolChk_Cnt_T_logl);
}



/***************************************************************************************************************
  * Name		: McecsOffsCmdStrtandHi
  * Description	: Created for reducing the cyclomatic complexity
  * Inputs		: NA      
  * Outputs		: NA
  * Notes		: This function corresponds to MCECS_OFFSCMDSTRT and MCECS_OFFSCMDHI cases in Per1
***************************************************************************************************************/ 
static FUNC(void, CDD_CurrMeas_APPL_CODE) McecsOffsCmdStrtandHi(void)
{
	VAR(float32, AUTOMATIC)  BrdgVltg_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyA_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyB_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyC_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyD_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyE_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyF_Volt_T_f32;
	VAR(float32, AUTOMATIC)  BrdgVltgAvrg_Volt_T_f32;
	
	(void)Rte_Read_BrdgVltg_Val(&BrdgVltg_Volt_T_f32);                 
	(void)Rte_Read_MotCurrAdcVlyA_Val(&MotCurrAdcVlyA_Volt_T_f32);     
	(void)Rte_Read_MotCurrAdcVlyB_Val(&MotCurrAdcVlyB_Volt_T_f32);     
	(void)Rte_Read_MotCurrAdcVlyC_Val(&MotCurrAdcVlyC_Volt_T_f32);     
	(void)Rte_Read_MotCurrAdcVlyD_Val(&MotCurrAdcVlyD_Volt_T_f32);     
	(void)Rte_Read_MotCurrAdcVlyE_Val(&MotCurrAdcVlyE_Volt_T_f32);     
	(void)Rte_Read_MotCurrAdcVlyF_Val(&MotCurrAdcVlyF_Volt_T_f32); 

	*Rte_Pim_MotCurrEolCalStPrev() =  MCECS_OFFSCMDHI;
	
	if(Rte_Prm_CurrMeasEolTranCntrThd_Val() == *Rte_Pim_EolTranCntrPrev())
	{ 
		*Rte_Pim_MotCurrSumAPrev() = *Rte_Pim_MotCurrSumAPrev() +  MotCurrAdcVlyA_Volt_T_f32;
		*Rte_Pim_MotCurrSumBPrev() = *Rte_Pim_MotCurrSumBPrev() +  MotCurrAdcVlyB_Volt_T_f32;
		*Rte_Pim_MotCurrSumCPrev() = *Rte_Pim_MotCurrSumCPrev() +  MotCurrAdcVlyC_Volt_T_f32;
		*Rte_Pim_MotCurrSumDPrev() = *Rte_Pim_MotCurrSumDPrev() +  MotCurrAdcVlyD_Volt_T_f32;
		*Rte_Pim_MotCurrSumEPrev() = *Rte_Pim_MotCurrSumEPrev() +  MotCurrAdcVlyE_Volt_T_f32;
		*Rte_Pim_MotCurrSumFPrev() = *Rte_Pim_MotCurrSumFPrev() +  MotCurrAdcVlyF_Volt_T_f32;
		*Rte_Pim_BrdgVltgSumPrev() = *Rte_Pim_BrdgVltgSumPrev() +  BrdgVltg_Volt_T_f32;
		*Rte_Pim_OffsEolAvrgCntrPrev() = *Rte_Pim_OffsEolAvrgCntrPrev() + 1U;

		if( (*Rte_Pim_OffsEolAvrgCntrPrev()) == Rte_Prm_CurrMeasEolOffsNrOfSample_Val() )    
		{
			*Rte_Pim_MotCurrOffsHiAvrgA() = *Rte_Pim_MotCurrSumAPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
			*Rte_Pim_MotCurrOffsHiAvrgB() = *Rte_Pim_MotCurrSumBPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
			*Rte_Pim_MotCurrOffsHiAvrgC() = *Rte_Pim_MotCurrSumCPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
			*Rte_Pim_MotCurrOffsHiAvrgD() = *Rte_Pim_MotCurrSumDPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
			*Rte_Pim_MotCurrOffsHiAvrgE() = *Rte_Pim_MotCurrSumEPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
			*Rte_Pim_MotCurrOffsHiAvrgF() = *Rte_Pim_MotCurrSumFPrev()/(float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
			BrdgVltgAvrg_Volt_T_f32       =  *Rte_Pim_BrdgVltgSumPrev()/ (float32)Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
			*Rte_Pim_EolOffsHiBrdgVltg() =  BrdgVltgAvrg_Volt_T_f32 * (float32)(uint32)(Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val() - Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val());
			
			*Rte_Pim_MotCurrSumAPrev()  =0.0F;
			*Rte_Pim_MotCurrSumBPrev()  =0.0F;
			*Rte_Pim_MotCurrSumCPrev()  =0.0F;
			*Rte_Pim_MotCurrSumDPrev()  =0.0F;
			*Rte_Pim_MotCurrSumEPrev()  =0.0F;
			*Rte_Pim_MotCurrSumFPrev()  =0.0F;
			*Rte_Pim_EolTranCntrPrev()  = 0U;
			*Rte_Pim_OffsEolAvrgCntrPrev()  = 0U;
			*Rte_Pim_MotCurrEolCalStPrev() =  MCECS_OFFSCMDLO; 
		}
	}
	else
	{
		*Rte_Pim_EolTranCntrPrev() = *Rte_Pim_EolTranCntrPrev() + 1U;
	}


}

/*********************************************************************************************************************************
  * Name		: McecsOffsCmdEndandAd
  * Description	: Created for reducing the cyclomatic complexity
  * Inputs		: NA      
  * Outputs		: NA
  * Notes		: This function corresponds to MCECS_OFFSCMDEND and MCECS_GAINCMDAD cases in PerformGainCalibration()
*********************************************************************************************************************************/ 
static FUNC(void, CDD_CurrMeas_APPL_CODE) McecsOffsCmdEndandAd(void)
{
	VAR(float32, AUTOMATIC)  MotCurrAvrgA_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAvrgD_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyA_Volt_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrAdcVlyD_Volt_T_f32;
	VAR(float32, AUTOMATIC)  AbsZeroAvrgADiff_Volt_T_f32;
	VAR(float32, AUTOMATIC)  AbsZeroAvrgDDiff_Volt_T_f32;
	
	
	(void)Rte_Read_MotCurrAdcVlyA_Val(&MotCurrAdcVlyA_Volt_T_f32);
	(void)Rte_Read_MotCurrAdcVlyD_Val(&MotCurrAdcVlyD_Volt_T_f32);
	
	
	*Rte_Pim_MotCurrEolCalStPrev() =  MCECS_GAINCMDAD;
	
	if(Rte_Prm_CurrMeasEolTranCntrThd_Val() == *Rte_Pim_EolTranCntrPrev())
	{   
	   *Rte_Pim_TempMotCurrAdcVlySum1Prev() = *Rte_Pim_TempMotCurrAdcVlySum1Prev() + MotCurrAdcVlyA_Volt_T_f32;
	   *Rte_Pim_TempMotCurrAdcVlySum2Prev() = *Rte_Pim_TempMotCurrAdcVlySum2Prev() + MotCurrAdcVlyD_Volt_T_f32;
	   *Rte_Pim_GainEolAvrgCntrPrev()=  *Rte_Pim_GainEolAvrgCntrPrev() + 1U;
	   
	   if(*Rte_Pim_GainEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolGainNrOfSample_Val())
	   {
		  MotCurrAvrgA_Volt_T_f32 = *Rte_Pim_TempMotCurrAdcVlySum1Prev() / (float32)*Rte_Pim_GainEolAvrgCntrPrev();
		  MotCurrAvrgD_Volt_T_f32 = *Rte_Pim_TempMotCurrAdcVlySum2Prev() / (float32)*Rte_Pim_GainEolAvrgCntrPrev();
		  AbsZeroAvrgADiff_Volt_T_f32 =  Abslt_f32_f32(MotCurrAvrgA_Volt_T_f32 - *Rte_Pim_MotCurrOffsZeroAvrgA());
		  AbsZeroAvrgDDiff_Volt_T_f32 =  Abslt_f32_f32(MotCurrAvrgD_Volt_T_f32 - *Rte_Pim_MotCurrOffsZeroAvrgD());
		  
		  if( (AbsZeroAvrgADiff_Volt_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32 ) && 
			  (AbsZeroAvrgDDiff_Volt_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32 ) )
		  {
			  *Rte_Pim_MotCurrEolGainA() = Rte_Prm_CurrMeasEolGainNumer_Val()/AbsZeroAvrgADiff_Volt_T_f32 ;
			  *Rte_Pim_MotCurrEolGainD() = Rte_Prm_CurrMeasEolGainNumer_Val()/AbsZeroAvrgDDiff_Volt_T_f32 ;
			  *Rte_Pim_MotCurrEolCalStPrev() = MCECS_GAINCMDBE; 
			  *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
			  *Rte_Pim_EolTranCntrPrev() = 0U;
			  *Rte_Pim_TempMotCurrAdcVlySum1Prev() = 0.0F;
			  *Rte_Pim_TempMotCurrAdcVlySum2Prev() = 0.0F;
		  }
		  else
		  {
			  *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
			  *Rte_Pim_TempMotCurrAdcVlySum1Prev() = 0.0F;
			  *Rte_Pim_TempMotCurrAdcVlySum2Prev() = 0.0F;
		  }
	   }

	}
	else
	{
		*Rte_Pim_EolTranCntrPrev() = *Rte_Pim_EolTranCntrPrev() + 1U;
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
