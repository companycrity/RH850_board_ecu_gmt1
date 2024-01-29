/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotAg1Meas.c
 *     SW-C Type:  CDD_MotAg1Meas
 *  Generated at:  Mon Mar 14 17:09:48 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotAg1Meas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg1Meas.c
* Module Description: Implementation of Motor Angle 1 Measurement component
* Project           : CBD 
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       jzk9cc %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/09/15  1        Rijvi       Initial Version                                                                 EA4#849 
* 09/10/15  2        Rijvi       Implement design rev. 1.2.0                    		                         EA4#1543 
* 10/06/15  3        Rijvi       Implement design rev. 2.1.0                    		                         EA4#1752 
* 12/08/15  4        Rijvi       Updated per design rev. 2.3.0                    		                         EA4#2131
* 03/14/16  5        KK          Updated per design rev. 2.5.0                    		                         EA4#4000       
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

  sm5p12
    sint8 represents integers with a minimum value of -128 and a maximum value of 127.
     The order-relation on sint8 is: x < y if y - x is positive.
     sint8 has a lexical representation consisting of an optional sign followed 
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
     omitted, "+" is assumed. 
     
     For example: -1, 0, 12678, +10000.

  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_CDD_MotAg1Meas.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "csih_regs.h"
#include "ArchGlbPrm.h" 
#include "NxtrMath.h" 
#include "NxtrFixdPt.h"
#include "CDD_MotAg1Meas.h"
#include "CDD_MotAg1Meas_private.h"
#include "CDD_MotAg1Meas_Cfg.h"



/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof" */
/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.2]: Inline functions are used for functions called from Motor Control ISR to allow for throughput optimization */


/********************************************* Embedded Local Constants **********************************************/
#define  COEFFTBLELMSIZE_CNT_U08 			((uint8)2U) 
#define  COEFFTBLSIZE_CNT_U08 				((uint8)13U) 
#define  CORRNTBLAGSTEPSIZE_MATRAD_F32 		(0.04908738521F)  
#define  CORRNTBLSIDXOFFS_CNT_U16 			((uint16)7U) 
#define  CORRNTBLSIZE_CNT_U16  				((uint16)128U)  
#define  MOTAG1PRTCLFLTFAILSTEP_CNT_U16 	((uint16)3276U)   
#define  MOTAG1PRTCLFLTPASSSTEP_CNT_U16 	((uint16)655U)   
#define  SNSRERRMASK_CNT_U32 				((uint32)31U)   
#define  SNSRERRNTCMASK_CNT_U08 			((uint8)22U)   



#define  PimMotAg1CoeffTbl  ( *(Ary1D_f32_26 *) (Rte_Pim_MotAg1CoeffTbl()) )  



/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/
static INLINE FUNC(void, CDD_MotAg1Meas_CODE) CalcCorrnTbl( void ); 



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
 * sm5p12: Integer in interval [-128...127]
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
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 * Array Types:
 * ============
 * Ary1D_f32_26: Array with 26 element(s) of type float32
 * Ary1D_sm5p12_128: Array with 128 element(s) of type sm5p12
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_dMotAg1MeasMotAg1RawAgReg(void)
 *   uint32 *Rte_Pim_dMotAg1MeasMotAg1RawErrReg(void)
 *   uint32 *Rte_Pim_dMotAg1MeasMotAg1RawTurnCntrReg(void)
 *   uint16 *Rte_Pim_MotAg1ErrParFltCntPrev(void)
 *   uint16 *Rte_Pim_MotAg1ErrParFltNtcStInfoCntPrev(void)
 *   uint16 *Rte_Pim_MotAg1ParFltCntPrev(void)
 *   uint16 *Rte_Pim_MotAg1ParFltNtcStInfoCntPrev(void)
 *   u0p16 *Rte_Pim_MotAg1RawMeclPrev(void)
 *   uint16 *Rte_Pim_MotAg1VltgFltCntPrev(void)
 *   uint16 *Rte_Pim_MotAg1VltgFltNtcStInfoCntPrev(void)
 *   uint8 *Rte_Pim_MotAg1ErrPrev(void)
 *   uint8 *Rte_Pim_MotAg1MeclRollgCntrPrev(void)
 *   float32 *Rte_Pim_MotAg1CoeffTbl(void)
 *   sm5p12 *Rte_Pim_MotAg1CorrnTbl(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   float32 *Rte_CData_MotAg1CoeffTblDft(void)
 *
 *********************************************************************************************************************/


#define CDD_MotAg1Meas_START_SEC_CODE
#include "CDD_MotAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg1MeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg1CoeffTbl_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg1MeasInit1
 *********************************************************************************************************************/

 
	VAR(NvM_RequestResultType,  AUTOMATIC)  MotAg1CoeffTblErrSts_Cnt_T_enum;
	
 
	/************************************************************************************************************/
	/*** ------------------------------- START: CSIH3 register configuration -------------------------------- ***/
	/************************************************************************************************************/
	
	/* Configure CSIH3CTL0 register */
	CSIH3CTL0   =  0x00U
				   | (uint8)((uint8)0x00U << 0U)	/* MBS */
				   | (uint8)((uint8)0x00U << 1U)	/* JOBE */
				   | (uint8)((uint8)0x01U << 5U)	/* RXE */
				   | (uint8)((uint8)0x01U << 6U)	/* TXE */ 
				   | (uint8)((uint8)0x00U << 7U);	/* PWR */ 
	
	/* Configure CSIH3STCR0 register */
	CSIH3STCR0  =  0x0000U
				   | (uint16)((uint16)0x01U << 0U)	 /* OVEC */
				   | (uint16)((uint16)0x01U << 1U)	 /* PEC */
				   | (uint16)((uint16)0x01U << 3U)	 /* DCEC */
				   | (uint16)((uint16)0x01U << 8U)	 /* PCT */
				   | (uint16)((uint16)0x01U << 14U)	 /* OFEC */
				   | (uint16)((uint16)0x01U << 15U); /* TMOEC */
	
	/* Configure CSIH3CTL1 register */
	CSIH3CTL1   =  0x00000000U
				   | (uint32)((uint32)0x00U << 0U)	 /* SSE */
				   | (uint32)((uint32)0x00U << 1U)	 /* HSE */
				   | (uint32)((uint32)0x00U << 2U)	 /* SIT */
				   | (uint32)((uint32)0x00U << 3U)	 /* LBM */
				   | (uint32)((uint32)0x01U << 4U)	 /* CSRI */
				   | (uint32)((uint32)0x00U << 5U)	 /* DCS */
				   | (uint32)((uint32)0x00U << 6U)	 /* JE */
				   | (uint32)((uint32)0x00U << 7U)	 /* EDLE */
				   | (uint32)((uint32)0x00U << 8U)	 /* CSL0 */
				   | (uint32)((uint32)0x00U << 9U)	 /* CSL1 */
				   | (uint32)((uint32)0x00U << 10U)	 /* CSL2 */
				   | (uint32)((uint32)0x00U << 11U)	 /* CSL3 */
				   | (uint32)((uint32)0x00U << 12U)	 /* CSL4 */
				   | (uint32)((uint32)0x00U << 13U)	 /* CSL5 */
				   | (uint32)((uint32)0x00U << 14U)	 /* CSL6 */
				   | (uint32)((uint32)0x00U << 15U)	 /* CSL7 */
				   | (uint32)((uint32)0x00U << 16U)	 /* SLIT */
				   | (uint32)((uint32)0x00U << 17U)	 /* CKR */
				   | (uint32)((uint32)0x00U << 18U); /* PHE */
	
	/* Configure CSIH3CTL2 register */
	CSIH3CTL2   =  0x0000U
				   | (uint16)((uint16)0x03U << 13U); /* PRS[2:0] */	
	
	/* Configure CSIH3MCTL0 register */
	CSIH3MCTL0  =  0x0000U
				   | (uint16)((uint16)0x00U << 0U)	 /* TO[4:0] */	
				   | (uint16)((uint16)0x01U << 8U);  /* MMS[1:0] */
	
	/* Configure CSIH3MCTL1 register */
	CSIH3MCTL1  =  0x00000000U
				   | (uint32)((uint32)0x00U << 0U)	 /* FFS[6:0] */
				   | (uint32)((uint32)0x00U << 16U); /* FES[6:0] */	
	
	/* Configure CSIH3CFG4 register */
	CSIH3CFG4   =  0x00000000U
				   | (uint32)((uint32)0x00U << 0U)	 /* SP0[3:0] */
				   | (uint32)((uint32)0x00U << 4U)	 /* IN0[3:0] */
				   | (uint32)((uint32)0x00U << 8U)	 /* HD0[3:0] */
				   | (uint32)((uint32)0x00U << 12U)	 /* ID0[2:0] */
				   | (uint32)((uint32)0x01U << 15U)	 /* IDL0 */
				   | (uint32)((uint32)0x00U << 16U)	 /* DAP0 */
				   | (uint32)((uint32)0x00U << 17U)	 /* CKP0 */
				   | (uint32)((uint32)0x00U << 18U)	 /* DIR0 */
				   | (uint32)((uint32)0x00U << 19U)	 /* RCB0 */
				   | (uint32)((uint32)0x0FU << 24U)	 /* DLS0[3:0] */
				   | (uint32)((uint32)0x02U << 28U)	 /* PS0[1:0] */
				   | (uint32)((uint32)0x00U << 30U); /* BRSS0[1:0] */	
						
	/* Configure CSIH3BRS0 register in bit field level */
	CSIH3BRS	=  1u;	/* k = 1. (alpha = 2, Clock = 80 MHz/(2^alpha*k*2) = 10MHz) */	
	
	/* Configure CSIH3MRWP0 register */
	CSIH3MRWP0   =  0x00000000U
				   | (uint32)((uint32)0x00U << 0U)	 /* TRWA[6:0] */
				   | (uint32)((uint32)0x00U << 16U); /* RRA[6:0] */	
	
	/* Write the TxBuffer */
	CSIH3TX0W	=  (uint32)15663360u;  /* TxBuffer00 : ReadTRN */
	CSIH3TX0W	=  (uint32)15663168u;  /* TxBuffer01 : ReadANG */
	CSIH3TX0W	=  (uint32)15663616u;  /* TxBuffer02 : ReadERR */
	CSIH3TX0W	=  (uint32)16711680u;  /* TxBuffer03 : Invalid Data */
	CSIH3TX0W	=  (uint32)16711680u;  /* TxBuffer04 : Invalid Data */
	CSIH3TX0W	=  (uint32)16711680u;  /* TxBuffer05 : Invalid Data */
	CSIH3TX0W	=  (uint32)16729152u;  /* TxBuffer06 : WriteCtrl00 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer07 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer08 : ReadERR */
	CSIH3TX0W	=  (uint32)16729088u;  /* TxBuffer09 : WriteCtrl01 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer10 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer11 : ReadERR */
	CSIH3TX0W	=  (uint32)16729089u;  /* TxBuffer12 : WriteCtrl02 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer13 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer14 : ReadERR */
	CSIH3TX0W	=  (uint32)16729153u;  /* TxBuffer15 : WriteCtrl03 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer16 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer17 : ReadERR */
	CSIH3TX0W	=  (uint32)16729090u;  /* TxBuffer18 : WriteCtrl04 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer19 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer20 : ReadERR */
	CSIH3TX0W	=  (uint32)16729154u;  /* TxBuffer21 : WriteCtrl05 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer22 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer23 : ReadERR */
	CSIH3TX0W	=  (uint32)16729155u;  /* TxBuffer24 : WriteCtrl06 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer25 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer26 : ReadERR */
	CSIH3TX0W	=  (uint32)16729091u;  /* TxBuffer27 : WriteCtrl07 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer28 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer29 : ReadERR */
	CSIH3TX0W	=  (uint32)16729092u;  /* TxBuffer30 : WriteCtrl08 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer31 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer32 : ReadERR */
	CSIH3TX0W	=  (uint32)16729156u;  /* TxBuffer33 : WriteCtrl09 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer34 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer35 : ReadERR */
	CSIH3TX0W	=  (uint32)16729157u;  /* TxBuffer36 : WriteCtrl10 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer37 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer38 : ReadERR */
	CSIH3TX0W	=  (uint32)16729093u;  /* TxBuffer39 : WriteCtrl11 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer40 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer41 : ReadERR */
	CSIH3TX0W	=  (uint32)16729158u;  /* TxBuffer42 : WriteCtrl12 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer43 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer44 : ReadERR */
	CSIH3TX0W	=  (uint32)16729094u;  /* TxBuffer45 : WriteCtrl13 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer46 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer47 : ReadERR */
	CSIH3TX0W	=  (uint32)16729095u;  /* TxBuffer48 : WriteCtrl14 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer49 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer50 : ReadERR */
	CSIH3TX0W	=  (uint32)16729159u;  /* TxBuffer51 : WriteCtrl15 */
	CSIH3TX0W	=  (uint32)16712704u;  /* TxBuffer52 : ReadCTRL */
	CSIH3TX0W	=  (uint32)16712192u;  /* TxBuffer53 : ReadERR */
	
	/* Configure CSIH3CTL0 register in bit field level */
	CSIH3PWR 	=  1u;	/* Controls the operation clock. 0: Stops operation clock. 1: Provides operation clock. */
	
	/************************************************************************************************************/
	/*** -------------------------------- END: CSIH3 register configuration --------------------------------- ***/
	/************************************************************************************************************/
		

		
	(void) Rte_Call_MotAg1CoeffTbl_GetErrorStatus( &MotAg1CoeffTblErrSts_Cnt_T_enum );
	
	if( MotAg1CoeffTblErrSts_Cnt_T_enum == NVM_REQ_OK )
	{	/* NVM is OK. */

		CalcCorrnTbl();  /* REQ: CM640A #118 I */  /* REQ: CM640A #119 I */ 
	}
	else
	{	/* NVM is not OK. */
		
		/* No action is required. Default value of "MotAg1CorrnTbl" will be used (i.e all zeros). */
		
	}
	


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg1MeasMotAg1CoeffTblRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg1MeasMotAg1CoeffTblRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg1MeasMotAg1CoeffTblRead_Oper(float32 *MotAgCoeffTbl_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_VAR) MotAgCoeffTbl_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_VAR) MotAgCoeffTbl_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg1MeasMotAg1CoeffTblRead_Oper
 *********************************************************************************************************************/

	/* REQ: CM640A #116 I */ 
	
	VAR(uint8,   AUTOMATIC)  TblIdx_Cnt_T_u08;

	 
	for( TblIdx_Cnt_T_u08 = 0U; TblIdx_Cnt_T_u08 < TblSize_m(PimMotAg1CoeffTbl); TblIdx_Cnt_T_u08++ )
	{
		MotAgCoeffTbl_Arg[TblIdx_Cnt_T_u08] = PimMotAg1CoeffTbl[TblIdx_Cnt_T_u08];
	}
	 
	/* ENDREQ: CM640A #116 */ 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg1MeasMotAg1CoeffTblWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg1MeasMotAg1CoeffTblWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg1CoeffTbl_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg1MeasMotAg1CoeffTblWr_Oper(const float32 *MotAgCoeffTbl_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(float32, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_DATA) MotAgCoeffTbl_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_DATA) MotAgCoeffTbl_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg1MeasMotAg1CoeffTblWr_Oper
 *********************************************************************************************************************/

	/* REQ: CM640A #115 I */ 
 
	VAR(uint8,   AUTOMATIC)  TblIdx_Cnt_T_u08;

	 
	for( TblIdx_Cnt_T_u08 = 0U; TblIdx_Cnt_T_u08 < TblSize_m(PimMotAg1CoeffTbl); TblIdx_Cnt_T_u08++ )
	{
		PimMotAg1CoeffTbl[TblIdx_Cnt_T_u08] = MotAgCoeffTbl_Arg[TblIdx_Cnt_T_u08];
	}
	
	(void) Rte_Call_MotAg1CoeffTbl_SetRamBlockStatus( TRUE );
	
	/* ENDREQ: CM640A #115 */ 
	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg1MeasPer2
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
 *   Std_ReturnType Rte_Read_MotAg1ErrReg_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAg1ParFltCnt_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg1VltgFltCnt_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAg1MeclQlfr_Val(SigQlfr1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg1MeasPer2
 *********************************************************************************************************************/

 
	/* Temporary variables for module i/p */
	VAR(uint32,   AUTOMATIC)  MotAg1ErrReg_Cnt_T_u32;
	VAR(uint16,   AUTOMATIC)  MotAg1VltgFltCnt_Cnt_T_u16;
	VAR(uint16,   AUTOMATIC)  MotAg1ParFltCnt_Cnt_T_u16;
	
	/* Temporary variables for module internal */
	VAR(uint16,   AUTOMATIC)  MotAg1ErrParFltCnt_Cnt_T_u16;
	VAR(uint8,    AUTOMATIC)  MotAg1Err_Cnt_T_u08;
	VAR(uint8,    AUTOMATIC)  NtcStInfo_Cnt_T_u08;
	
	/* Temporary variable for module o/p */
	VAR(SigQlfr1, AUTOMATIC)  MotAg1MeclQlfr_Cnt_T_enum;
	
	
	
	/* Read Module inputs */
	(void) Rte_Read_MotAg1ErrReg_Val( &MotAg1ErrReg_Cnt_T_u32 );  
    (void) Rte_Read_MotAg1VltgFltCnt_Val( &MotAg1VltgFltCnt_Cnt_T_u16 );
	(void) Rte_Read_MotAg1ParFltCnt_Val( &MotAg1ParFltCnt_Cnt_T_u16 );
    
    
	
	/* REQ: CM640A #93 I */   
	/*** ----------------------------- START: Process MotAg1RawErr -------------------------------- ***/
	
	if( ((MotAg1ErrReg_Cnt_T_u32 & SPIPARMASK_CNT_U32) != 0u) || (MotAg1ErrReg_Cnt_T_u32 == 0u) )
	{ /* Parity fault or any other fault found with ERROR register read */
		
		/* Update Parity Fault Counter */
		MotAg1ErrParFltCnt_Cnt_T_u16 = *(Rte_Pim_MotAg1ErrParFltCntPrev()) + 1u;
		*(Rte_Pim_MotAg1ErrParFltCntPrev()) = MotAg1ErrParFltCnt_Cnt_T_u16;
		
		/* Update Motor Angle 1 Error value with previous */
		MotAg1Err_Cnt_T_u08 = *(Rte_Pim_MotAg1ErrPrev());
	}
	else
	{	/* No error found with ERROR register read */
		
		/* Update Parity Fault Counter with the previous value*/
		MotAg1ErrParFltCnt_Cnt_T_u16 = *(Rte_Pim_MotAg1ErrParFltCntPrev());
		
		/* Update Motor Angle 1 Error value */
		MotAg1Err_Cnt_T_u08 = (uint8)(MotAg1ErrReg_Cnt_T_u32 & SNSRERRMASK_CNT_U32);
		*(Rte_Pim_MotAg1ErrPrev()) = MotAg1Err_Cnt_T_u08;
	}
	
	/*** ----------------------------- END  : Process MotAg1RawErr -------------------------------- ***/
	/* ENDREQ: CM640A #93 */ 
	
	
	
	
	/* REQ: CM640A #25 I */ 
	/* REQ: CM640A #98 I */ 
	/* REQ: CM640A #99 I */ 
	/* REQ: CM640A #100 I */ 
	/* REQ: CM640A #91 I */ 
	/* REQ: CM640A #31 I */ 
	/* REQ: CM640A #106 I */ 
	/* REQ: CM640A #111 I */ 
	/* REQ: CM640A #102 I */ 
	/* REQ: CM640A #101 I */ 
	/* REQ: CM640A #28 I */ 
	/* REQ: CM640A #22 I */ 
	/*** ------------------------ START: MotAg1 Protocol Fault Operation -------------------------- ***/
	
	NtcStInfo_Cnt_T_u08 = MotAg1Err_Cnt_T_u08 & SNSRERRNTCMASK_CNT_U08;
	
	if( MotAg1ErrParFltCnt_Cnt_T_u16 != *(Rte_Pim_MotAg1ErrParFltNtcStInfoCntPrev()) )
	{
		NtcStInfo_Cnt_T_u08 |= (uint8)(0x01u << 7u);
		
		*(Rte_Pim_MotAg1ErrParFltNtcStInfoCntPrev()) = MotAg1ErrParFltCnt_Cnt_T_u16;
	}
	if( MotAg1ParFltCnt_Cnt_T_u16 != *(Rte_Pim_MotAg1ParFltNtcStInfoCntPrev()) )
	{
		NtcStInfo_Cnt_T_u08 |= (uint8)(0x01u << 6u);
		
		*(Rte_Pim_MotAg1ParFltNtcStInfoCntPrev()) = MotAg1ParFltCnt_Cnt_T_u16;
	}
	if( MotAg1VltgFltCnt_Cnt_T_u16 != *(Rte_Pim_MotAg1VltgFltNtcStInfoCntPrev()) )
	{
		NtcStInfo_Cnt_T_u08 |= (uint8)(0x01u << 5u);
		
		*(Rte_Pim_MotAg1VltgFltNtcStInfoCntPrev()) = MotAg1VltgFltCnt_Cnt_T_u16;
	}
	
	
	if( NtcStInfo_Cnt_T_u08 != 0u )
	{
		(void) Rte_Call_SetNtcSts_Oper( MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM, NtcStInfo_Cnt_T_u08, NTCSTS_PREFAILD, MOTAG1PRTCLFLTFAILSTEP_CNT_U16 );
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper( MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM, NtcStInfo_Cnt_T_u08, NTCSTS_PREPASSD, MOTAG1PRTCLFLTPASSSTEP_CNT_U16 );
	}
	
	(void) Rte_Call_GetNtcQlfrSts_Oper( MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM, &MotAg1MeclQlfr_Cnt_T_enum );
	
	/*** ------------------------ END  : MotAg1 Protocol Fault Operation -------------------------- ***/
	/* ENDREQ: CM640A #25 */ 
	/* ENDREQ: CM640A #98 */ 
	/* ENDREQ: CM640A #99 */ 
	/* ENDREQ: CM640A #100 */ 
	/* ENDREQ: CM640A #91 */ 
	/* ENDREQ: CM640A #31 */ 
	/* ENDREQ: CM640A #106 */ 
	/* ENDREQ: CM640A #111 */ 
	/* ENDREQ: CM640A #102 */ 
	/* ENDREQ: CM640A #101 */ 
	/* ENDREQ: CM640A #28 */ 
	/* ENDREQ: CM640A #22 */

	
	
	
	/* Write module o/p */
	(void) Rte_Write_MotAg1MeclQlfr_Val( MotAg1MeclQlfr_Cnt_T_enum );  
	


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotAg1Meas_STOP_SEC_CODE
#include "CDD_MotAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 
#define CDD_MotAg1Meas_START_SEC_CODE
#include "CDD_MotAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
 
 
/**********************************************************************************************************************
* Name:        CalcCorrnTbl
* Description: Calculate the motor angle 1 correction table from the coefficient table.
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static INLINE FUNC(void, CDD_MotAg1Meas_CODE) CalcCorrnTbl( void )
{
	/* REQ: CM640A #118 I */ /* REQ: CM640A #119 I */ 
	
	VAR(uint8,  	AUTOMATIC)  TblIdx_Cnt_T_u08;
	VAR(uint8,  	AUTOMATIC)  CoeffTblIdx_Cnt_T_u08;
	VAR(float32,  	AUTOMATIC)  SinVal_Uls_T_f32;
	VAR(float32,  	AUTOMATIC)  CosVal_Uls_T_f32;
	VAR(float32,  	AUTOMATIC)  HarmAg_MotRev_T_f32;
	VAR(float32,  	AUTOMATIC)  RecnstrdWaveForm_MotRev_T_f32[CORRNTBLSIZE_CNT_U16];  
	VAR(uint8,  	AUTOMATIC)  LoopIdx_Cnt_T_u08;
	VAR(float32,  	AUTOMATIC)  IdxSca_MotRev_T_f32; 
	VAR(boolean,  	AUTOMATIC)  LoopIdxFound_Cnt_T_logl; 
	VAR(float32,  	AUTOMATIC)  Y1_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  Y2_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  CorrnTermFound_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  CorrnTermNotFound_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  RecnstrdWaveFormX_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  RecnstrdWaveFormX1_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  TempX_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  TempY_MotRev_T_f32; 
	VAR(float32,  	AUTOMATIC)  TempA_MotRev_T_f32; 
	
	
	
	
	/************************************************************************************************************/
	/*** --------------------- START:  Build Wave / Reconstructed Waveform Processing ----------------------- ***/
	/************************************************************************************************************/
	for ( TblIdx_Cnt_T_u08 = 0U; TblIdx_Cnt_T_u08 < CORRNTBLSIZE_CNT_U16; TblIdx_Cnt_T_u08++ )
	{
		HarmAg_MotRev_T_f32 = (float32)TblIdx_Cnt_T_u08 * CORRNTBLAGSTEPSIZE_MATRAD_F32;
		
		/* Formula: for i = 0 to 127, n = 1 to 12 */
		/* RecnstrdWaveForm[i] = SUM{ CoeffTbl[2*n] * cos(AgStep*i*n) + CoeffTbl[2*n + 1] * Sin(AgStep*i*n) } */
		
		/* First term is calculated outside of the for loop to avoid the initialization of all terms to zero. */
		SinCos_f32( HarmAg_MotRev_T_f32, &SinVal_Uls_T_f32, &CosVal_Uls_T_f32 );
		RecnstrdWaveForm_MotRev_T_f32[TblIdx_Cnt_T_u08]  =  ( PimMotAg1CoeffTbl[COEFFTBLELMSIZE_CNT_U08] * CosVal_Uls_T_f32 ) 
												                + ( PimMotAg1CoeffTbl[COEFFTBLELMSIZE_CNT_U08 + 1U] * SinVal_Uls_T_f32 ) ;
		
		for ( CoeffTblIdx_Cnt_T_u08 = 2U; CoeffTblIdx_Cnt_T_u08 < COEFFTBLSIZE_CNT_U08; CoeffTblIdx_Cnt_T_u08++ )
		{
			
			SinCos_f32( HarmAg_MotRev_T_f32 * (float32)CoeffTblIdx_Cnt_T_u08, &SinVal_Uls_T_f32, &CosVal_Uls_T_f32 );
			RecnstrdWaveForm_MotRev_T_f32[TblIdx_Cnt_T_u08]  =  RecnstrdWaveForm_MotRev_T_f32[TblIdx_Cnt_T_u08] 
												                + ( PimMotAg1CoeffTbl[CoeffTblIdx_Cnt_T_u08 * COEFFTBLELMSIZE_CNT_U08] * CosVal_Uls_T_f32 ) 
												                + ( PimMotAg1CoeffTbl[(CoeffTblIdx_Cnt_T_u08 * COEFFTBLELMSIZE_CNT_U08) + 1U] * SinVal_Uls_T_f32 ) ;
		}
	}	
	/************************************************************************************************************/
	/*** ----------------------  END:  Build Wave / Reconstructed Waveform Processing ----------------------- ***/
	/************************************************************************************************************/
	
	
	

	
	/************************************************************************************************************/
	/*** ---------------  START:  Change Correction Coordinate / Waveform Coordinate Change ----------------- ***/
	/************************************************************************************************************/
	for ( TblIdx_Cnt_T_u08 = 0U; TblIdx_Cnt_T_u08 < CORRNTBLSIZE_CNT_U16; TblIdx_Cnt_T_u08++ )
	{
		LoopIdx_Cnt_T_u08 = (TblIdx_Cnt_T_u08 < CORRNTBLSIDXOFFS_CNT_U16) ? ( 0U ) : ( TblIdx_Cnt_T_u08 - (uint8)CORRNTBLSIDXOFFS_CNT_U16 ); 
		
		HarmAg_MotRev_T_f32 = (float32)TblIdx_Cnt_T_u08 * CORRNTBLAGSTEPSIZE_MATRAD_F32;
		
		/* Calculate Index Scale */
		if( (RecnstrdWaveForm_MotRev_T_f32[0U] >= 0.0F) && (RecnstrdWaveForm_MotRev_T_f32[0U] > HarmAg_MotRev_T_f32) )
		{
			IdxSca_MotRev_T_f32 = HarmAg_MotRev_T_f32 + ARCHGLBPRM_2PI_ULS_F32;
		}
		else if( (RecnstrdWaveForm_MotRev_T_f32[0U] + ARCHGLBPRM_2PI_ULS_F32) <= HarmAg_MotRev_T_f32 )
		{
			IdxSca_MotRev_T_f32 = HarmAg_MotRev_T_f32 - ARCHGLBPRM_2PI_ULS_F32;
		}
		else
		{
			IdxSca_MotRev_T_f32 = HarmAg_MotRev_T_f32;
		}
		
		
		/* Determine Non Wrapped Correction Term */
		LoopIdxFound_Cnt_T_logl = FALSE;
		do
		{
			/* Masking is redundant, but used to match the design */
			RecnstrdWaveFormX_MotRev_T_f32   =  RecnstrdWaveForm_MotRev_T_f32[LoopIdx_Cnt_T_u08 & CORRNTBLSIZEMASK_CNT_U08]; 
			RecnstrdWaveFormX1_MotRev_T_f32  =  RecnstrdWaveForm_MotRev_T_f32[(LoopIdx_Cnt_T_u08 + 1U) & CORRNTBLSIZEMASK_CNT_U08];
			
			Y1_MotRev_T_f32 = ((float32)LoopIdx_Cnt_T_u08 * CORRNTBLAGSTEPSIZE_MATRAD_F32) + RecnstrdWaveFormX_MotRev_T_f32;
			Y2_MotRev_T_f32 = ((float32)LoopIdx_Cnt_T_u08 * CORRNTBLAGSTEPSIZE_MATRAD_F32) + CORRNTBLAGSTEPSIZE_MATRAD_F32 + RecnstrdWaveFormX1_MotRev_T_f32;
			
			if( (Y1_MotRev_T_f32 <= IdxSca_MotRev_T_f32) && (Y2_MotRev_T_f32 >= IdxSca_MotRev_T_f32) )
			{
				LoopIdxFound_Cnt_T_logl = TRUE;
				
				/* Calculate Correction Term */
				if( Abslt_f32_f32(Y2_MotRev_T_f32 - Y1_MotRev_T_f32) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32 )
				{	/* Denominator != 0 */
					CorrnTermFound_MotRev_T_f32 =  (  ((IdxSca_MotRev_T_f32 - Y1_MotRev_T_f32) / (Y2_MotRev_T_f32 - Y1_MotRev_T_f32))
													  * (RecnstrdWaveFormX1_MotRev_T_f32 - RecnstrdWaveFormX_MotRev_T_f32) )
											          + RecnstrdWaveFormX_MotRev_T_f32;
				}
				else
				{	/* Denominator == 0 */
					CorrnTermFound_MotRev_T_f32 = 0.0F;
				}
			}
			
			LoopIdx_Cnt_T_u08++; 
		} while( ((LoopIdx_Cnt_T_u08 + 1U) < (uint8)CORRNTBLSIZE_CNT_U16) && (LoopIdxFound_Cnt_T_logl == FALSE) );
		
		
		if( LoopIdxFound_Cnt_T_logl == TRUE )
		{	/* Correction Term Found */
			
			PimMotAg1CorrnTbl[TblIdx_Cnt_T_u08] = (sint8)FloatToFixd_s16_f32( CorrnTermFound_MotRev_T_f32, NXTRFIXDPT_FLOATTOP12_ULS_F32 ); /* Convert to sm5p12 format */
		}
		else
		{	/* Correction Term Not Found */
			
			TempX_MotRev_T_f32 = RecnstrdWaveForm_MotRev_T_f32[0U];
			TempY_MotRev_T_f32 = RecnstrdWaveForm_MotRev_T_f32[CORRNTBLSIZE_CNT_U16 - 1U];
			TempA_MotRev_T_f32 = TempY_MotRev_T_f32 + ( CORRNTBLAGSTEPSIZE_MATRAD_F32 * (float32)(CORRNTBLSIZE_CNT_U16 - 1U) );
			
			if( Abslt_f32_f32(ARCHGLBPRM_2PI_ULS_F32 + (TempX_MotRev_T_f32 - TempA_MotRev_T_f32)) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32 )
			{	/* Denominator != 0 */
				CorrnTermNotFound_MotRev_T_f32 = (((TempX_MotRev_T_f32 - TempY_MotRev_T_f32) * (IdxSca_MotRev_T_f32 - TempA_MotRev_T_f32)) /
											       ((ARCHGLBPRM_2PI_ULS_F32 + (TempX_MotRev_T_f32 - TempA_MotRev_T_f32))))
											      + TempY_MotRev_T_f32;
			}
			else
			{	/* Denominator == 0 */
				CorrnTermNotFound_MotRev_T_f32 = 0.0F;
			}
			
			PimMotAg1CorrnTbl[TblIdx_Cnt_T_u08] = (sint8)FloatToFixd_s16_f32( CorrnTermNotFound_MotRev_T_f32, NXTRFIXDPT_FLOATTOP12_ULS_F32 ); /* Convert to sm5p12 format */
		}
		
	}
	/************************************************************************************************************/
	/*** ----------------   END:  Change Correction Coordinate / Waveform Coordinate Change ----------------- ***/
	/************************************************************************************************************/
	
	/* ENDREQ: CM640A #118 */ /* ENDREQ: CM640A #119 */
}


#define CDD_MotAg1Meas_STOP_SEC_CODE
#include "CDD_MotAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
