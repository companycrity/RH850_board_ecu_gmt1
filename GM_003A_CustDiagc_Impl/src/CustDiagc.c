/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CustDiagc.c
 *     SW-C Type:  CustDiagc
 *  Generated at:  Sun Feb 12 13:02:11 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CustDiagc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: CustDiagc.c
* Module Description: Implementation of GM Customer Diagnostics Component
* Project           : CBD 
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          14 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------     --------
* 10/08/15  1        JWJ       Initial component version                                                       EA4#4340
* 02/14/16  2        JWJ       Added access for new DVT access client calls                                    EA4#3918
* 02/16/16  3        JWJ       Added client call for state of health get data function                         EA4#2709
* 02/26/16  4        JWJ       Added HwAgVehCentrTrim update and clear function with NT func calls             EA4#3694
* 02/29/16  5        JWJ       Added new range inputs for SoH services                                         EA4#4026
* 05/16/16  6        JWJ       Added services for SBAT and ECU ID                                              EA4#4660
* 06/30/16  7        JWJ       Added non-trusted function calls for enable/disable DTCs                        EA4#6471
* 07/15/16  8        JWJ       Add support for CPID 05 and clearing of fault array in 778 message              EA4#5827
* 08/12/16  9        JWJ       Added a new PIM to hold a boolean flag indicating when a CPID is active         EA4#6895
* 09/26/16  10       JWJ       EA4#7309: Fix for 10s timer on security access at init                          EA4#7755
*                              EA4#6871: Proper fix for service 0x12 0x02 reponse from periodic function       EA4#7755
* 12/01/16  11       HM        EA4#8030: Fix for service 0x12 0x02 "request out of range" negative response    EA4#8666
* 12/15/16  12       HM        EA4#6720: Replaced Dem_Cfg_GlobalDtcCount function with 
*                                        DEM_CFG_GLOBAL_DTC_COUNT constant                                     EA4#8710
*                              EA4#8105: Added output port MfgOvrlDi                                           EA4#8952
*                              EA4#8204: Added MissMsg0C9 port read access in CustDiagcInit1                   EA4#8952
* 02/09/17  13       HM        EA4#8807: Updated to support CDD version 19.0.4_60                              EA4#9747
* 02/12/17  14       HM        EA4#8807: Added calibration ports to support DID A1                             EA4#9747
**********************************************************************************************************************/



/**********************************************************************************************************************
 * This file includes several callback functions used to interface with the DEM but also serves as the RTE interface  *
 * for customer diagnostic services defined in appdesc.c.  Many of the RTE reads/writes are used over there           *
 * (particularly those defined for use within the init function which is serving as a catch-all for such things).     *
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
  GmFctDiArbnSts1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

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

  StHlthMonSig3
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

#include "Rte_CustDiagc.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Os.h"
#include "Dem_Dcm.h"
#include "desc.h"
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "DiagcMgr.h"

#define CUSTDIAGCINVLDDTC_CNT_U32  0x00000000U

#define PrmDiagcMgrFltResp_u32                  (*(const Ary1D_u32_512 *)(Rte_Prm_DiagcMgrFltResp_Ary1D()))  

/* -----[ Local Function Declarations ]----------------------------------------------------------------------------- */

static FUNC(void, CustDiagc_CODE) ProcReadFailrRecDataResp(void);

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
 * GmFctDiArbnSts1: Enumeration of integer in interval [0...255] with enumerators
 *   GMFCTDIARBNSTS_WAIT (0U)
 *   GMFCTDIARBNSTS_INPROC (1U)
 *   GMFCTDIARBNSTS_PASSD (2U)
 *   GMFCTDIARBNSTS_SWBASDMTGTNFAIL (3U)
 *   GMFCTDIARBNSTS_TIMEOUTFAIL (4U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u32_512: Array with 512 element(s) of type uint32
 * Ary1D_u8_10: Array with 10 element(s) of type uint8
 * Ary1D_u8_12: Array with 12 element(s) of type uint8
 * Ary1D_u8_14: Array with 14 element(s) of type uint8
 * Ary1D_u8_16: Array with 16 element(s) of type uint8
 * Ary1D_u8_17: Array with 17 element(s) of type uint8
 * Ary1D_u8_2: Array with 2 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_4: Array with 4 element(s) of type uint8
 * Ary1D_u8_5: Array with 5 element(s) of type uint8
 * Ary1D_u8_7: Array with 7 element(s) of type uint8
 * Ary1D_u8_822: Array with 822 element(s) of type uint8
 * Ary1D_u8_9: Array with 9 element(s) of type uint8
 * DataArray_Type_1: Array with 1 element(s) of type uint8
 * DataArray_Type_2: Array with 2 element(s) of type uint8
 * DataArray_Type_4: Array with 4 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_CustDiagcCtrlPidSeedKeyTmr(void)
 *   uint32 *Rte_Pim_CustDiagcProgmSessionSeedKeyTmr(void)
 *   uint32 *Rte_Pim_DtcNr(void)
 *   uint32 *Rte_Pim_MsgCntxt(void)
 *   uint16 *Rte_Pim_GmIgnCntr(void)
 *   uint8 *Rte_Pim_CustDiagcCtrlPidKeyAtmptCntr(void)
 *   uint8 *Rte_Pim_CustDiagcProgmSessionKeyAtmptCntr(void)
 *   GmFctDiArbnSts1 *Rte_Pim_PrevGmFctDiArbnSts(void)
 *   uint8 *Rte_Pim_Srv12LoopCntr(void)
 *   uint8 *Rte_Pim_SrvCntxt(void)
 *   boolean *Rte_Pim_CpidActv(void)
 *   boolean *Rte_Pim_CustDiagcCtrlPidSeedReqd(void)
 *   boolean *Rte_Pim_CustDiagcCtrlPidSeedTmrActvd(void)
 *   boolean *Rte_Pim_CustDiagcProgmSessionSeedReqd(void)
 *   boolean *Rte_Pim_CustDiagcProgmSessionSeedTmrActvd(void)
 *   boolean *Rte_Pim_GmDiCtrlPidTstRunng(void)
 *   boolean *Rte_Pim_PrevSysPwrModRun(void)
 *   boolean *Rte_Pim_SysStReqEnaOvrdCust(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EotLrngRackTrvlMin_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmStrtStopEna_Logl(void)
 *   boolean Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl(void)
 *   boolean Rte_Prm_PullCmpActvEna_Logl(void)
 *   boolean Rte_Prm_WhlImbRejctnFctEna_Logl(void)
 *   uint32 *Rte_Prm_DiagcMgrFltResp_Ary1D(void)
 *
 *********************************************************************************************************************/


#define CustDiagc_START_SEC_CODE
#include "CustDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_BattVltgEcu_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_BattVltgEcu>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_BattVltgEcu_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_BattVltgEcu_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_BattVltgEcu_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) BattVltg_Volt_T_f32;
	VAR(float32, AUTOMATIC) BattVltg_Uls_T_f32;
	VAR(uint8, AUTOMATIC) BattVltg_Cnt_T_u08;

	(void)Rte_Read_BattVltg_Val(&BattVltg_Volt_T_f32);

	BattVltg_Volt_T_f32 = Lim_f32(BattVltg_Volt_T_f32, 0.0f, 25.5f);
	BattVltg_Uls_T_f32 = BattVltg_Volt_T_f32 * 10.0f;
	BattVltg_Cnt_T_u08 = (uint8)BattVltg_Uls_T_f32;

	Data[0] = BattVltg_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EcuIntT_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EcuIntT>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EcuIntT_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EcuIntT_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EcuIntT_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) EcuT_DegC_T_f32;
	VAR(uint8, AUTOMATIC) EcuT_DegC_T_u08;

	(void)Rte_Read_EcuTFild_Val(&EcuT_DegC_T_f32);

	/* Limit temperature, and apply 40 degree offset, then truncate decimal by casting to uint8 */
	EcuT_DegC_T_f32 = Lim_f32(EcuT_DegC_T_f32, -40.0f, 215.0f);
	EcuT_DegC_T_f32 += 40.0f;
	EcuT_DegC_T_u08 = (uint8)EcuT_DegC_T_f32;

	Data[0U] = EcuT_DegC_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EngSpd_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EngSpd>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EngSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MissMsg0C9_Logl(boolean *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EngSpd_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EngSpd_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EngSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EngSpd_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EngSpd_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) EngSpd_Rpm_T_f32;
	VAR(uint16, AUTOMATIC) EngSpd_Rpm_T_u14p2;
	VAR(boolean, AUTOMATIC) Msg0C9Miss_Cnt_T_logl;

	(void)Rte_Read_MissMsg0C9_Logl(&Msg0C9Miss_Cnt_T_logl);
	(void)Rte_Read_EngSpd_Val(&EngSpd_Rpm_T_f32);

	if (Msg0C9Miss_Cnt_T_logl == TRUE)
	{
		/* Set the engine RPM to INVALID value if 0C9 message is missing */
		EngSpd_Rpm_T_u14p2 = 0xFFFFU;
	}
	else
	{
		EngSpd_Rpm_T_f32 = Lim_f32(EngSpd_Rpm_T_f32, 0.0f, 16383.75f);
		EngSpd_Rpm_T_u14p2 = FloatToFixdWithRound_u16_f32(EngSpd_Rpm_T_f32, NXTRFIXDPT_FLOATTOP2_ULS_F32);
	}

	Data[0U] = DescGetHiByte(EngSpd_Rpm_T_u14p2);
	Data[1U] = DescGetLoByte(EngSpd_Rpm_T_u14p2);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpdMotOvldProtnCntr_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpdMotOvldProtnCntr>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ThermLimFlgCntr_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpdMotOvldProtnCntr_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpdMotOvldProtnCntr_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpdMotOvldProtnCntr_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Cntr_Cnt_T_u08;

	(void)Rte_Read_ThermLimFlgCntr_Val(&Cntr_Cnt_T_u08);

	Data[0U] = Cntr_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsAgOvrlSts_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsAgOvrlSts>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ApaSt_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsAgOvrlSts_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsAgOvrlSts_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpsAgOvrlSts_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) ApaSt_Cnt_T_u08;

	(void)Rte_Read_ApaSt_Val(&ApaSt_Cnt_T_u08);

	ApaSt_Cnt_T_u08 = Lim_u08(ApaSt_Cnt_T_u08, 0U, 3U);

	Data[0U] = ApaSt_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsApaAgOvrlReq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsApaAgOvrlReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SteerWhlAgReqTarAg_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsApaAgOvrlReq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsApaAgOvrlReq_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpsApaAgOvrlReq_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) ApaAgReq_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) ApaAgReq_Uls_T_f32;
	VAR(sint16, AUTOMATIC) ApaAgReq_Uls_T_s16;

	(void)Rte_Read_SteerWhlAgReqTarAg_Val(&ApaAgReq_HwDeg_T_f32);

	ApaAgReq_HwDeg_T_f32 = Lim_f32(ApaAgReq_HwDeg_T_f32, -960.0f, 959.970703125f);
	ApaAgReq_Uls_T_f32 = ApaAgReq_HwDeg_T_f32 / 0.029296875f;
	ApaAgReq_Uls_T_s16 = (sint16)ApaAgReq_Uls_T_f32;

	Data[0U] = DescGetHiByte((uint16)ApaAgReq_Uls_T_s16);
	Data[1U] = DescGetLoByte((uint16)ApaAgReq_Uls_T_s16);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsMotCurrFb_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsMotCurrFb>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsMotCurrFb_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsMotCurrFb_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpsMotCurrFb_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) EstimdPeakCurr_AmpSqd_T_f32;
	VAR(float32, AUTOMATIC) EstimdPeakCurr_Ampr_T_f32;
	VAR(uint16, AUTOMATIC) EstimdPeakCurr_Ampr_T_u15p1;

	(void)Rte_Read_MotCurrPeakEstimd_Val(&EstimdPeakCurr_AmpSqd_T_f32);

	EstimdPeakCurr_Ampr_T_f32 = Sqrt_f32(EstimdPeakCurr_AmpSqd_T_f32);
	EstimdPeakCurr_Ampr_T_f32 = Lim_f32(EstimdPeakCurr_Ampr_T_f32, 0.0f, 200.0f);
	EstimdPeakCurr_Ampr_T_u15p1 = FloatToFixdWithRound_u16_f32(EstimdPeakCurr_Ampr_T_f32, NXTRFIXDPT_FLOATTOP1_ULS_F32);

	Data[0U] = DescGetHiByte(EstimdPeakCurr_Ampr_T_u15p1);
	Data[1U] = DescGetLoByte(EstimdPeakCurr_Ampr_T_u15p1);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsMotCurr_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsMotCurr>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsMotCurr_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsMotCurr_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpsMotCurr_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) MtrCurrDaxRef_Ampr_T_f32;
	VAR(sint16, AUTOMATIC) MotCurrDaxRef_Ampr_T_s14p1;

	(void)Rte_Read_MotCurrDaxCmd_Val(&MtrCurrDaxRef_Ampr_T_f32);

	MtrCurrDaxRef_Ampr_T_f32 = Lim_f32(MtrCurrDaxRef_Ampr_T_f32, -200.0f, 200.0f);
	MotCurrDaxRef_Ampr_T_s14p1 = FloatToFixdWithRound_s16_f32(MtrCurrDaxRef_Ampr_T_f32, NXTRFIXDPT_FLOATTOP1_ULS_F32);

	Data[0U] = DescGetHiByte(MotCurrDaxRef_Ampr_T_s14p1);
	Data[1U] = DescGetLoByte(MotCurrDaxRef_Ampr_T_s14p1);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsStopStrtSts_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsStopStrtSts>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_StrtStopSt_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsStopStrtSts_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsStopStrtSts_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpsStopStrtSts_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) StrtStopSt_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) TransStartStopSt_Cnt_T_u08;

	(void)Rte_Read_StrtStopSt_Val(&StrtStopSt_Cnt_T_u08);

	switch (StrtStopSt_Cnt_T_u08)
	{
		case 0U:
			/* Normal mode */
			TransStartStopSt_Cnt_T_u08 = 1U;
			break;
		case 1U:
			/* Mode 1 */
			TransStartStopSt_Cnt_T_u08 = 2U;
			break;
		case 2U:
			/* Stop Mode */
			TransStartStopSt_Cnt_T_u08 = 4U;
			break;
		case 3U:
			/* Mode 2 */
			TransStartStopSt_Cnt_T_u08 = 3U;
			break;
		default:
			TransStartStopSt_Cnt_T_u08 = 0U;
			break;
	}

	Data[0U] = TransStartStopSt_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsTqOvrlReq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsTqOvrlReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_LkaCmd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsTqOvrlReq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsTqOvrlReq_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpsTqOvrlReq_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) LkaCmd_HwTq_T_f32;
	VAR(float32, AUTOMATIC) LkaCmd_Uls_T_f32;
	VAR(sint16, AUTOMATIC) LkaCmd_Uls_T_s16;

	(void)Rte_Read_LkaCmd_Val(&LkaCmd_HwTq_T_f32);

	LkaCmd_HwTq_T_f32 = Lim_f32(LkaCmd_HwTq_T_f32, -10.24f, 10.23f);
	LkaCmd_Uls_T_f32 = LkaCmd_HwTq_T_f32 * 100.0f;
	LkaCmd_Uls_T_s16 = (sint16)LkaCmd_Uls_T_f32;

	Data[0U] = DescGetHiByte(LkaCmd_Uls_T_s16);
	Data[1U] = DescGetLoByte(LkaCmd_Uls_T_s16);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsTqOvrlSts_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsTqOvrlSts>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_LkaSt_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsTqOvrlSts_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsTqOvrlSts_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_EpsTqOvrlSts_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) LkaSt_Cnt_T_u08;

	(void)Rte_Read_LkaSt_Val(&LkaSt_Cnt_T_u08);

	LkaSt_Cnt_T_u08 = Lim_u08(LkaSt_Cnt_T_u08, 0U, 3U);

	Data[0U] = LkaSt_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_IgnCycCntr_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_IgnCycCntr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_IgnCycCntr_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_IgnCycCntr_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_IgnCycCntr_ReadData (returns application error)
 *********************************************************************************************************************/

	Data[0U] = DescGetHiByte(*Rte_Pim_GmIgnCntr());
	Data[1U] = DescGetLoByte(*Rte_Pim_GmIgnCntr());

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SplrIntDtcInfo_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SplrIntDtcInfo>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcActv_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcActv_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcSts_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SplrIntDtcInfo_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_SplrIntDtcInfo_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint32, AUTOMATIC) FaildDtc_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) TestDtc_Cnt_T_u32;
	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;
	VAR(uint8, AUTOMATIOV) EveId_Cnt_T_u08;
	VAR(uint8, AUTOMATIOV) DtcId_Cnt_T_u08;
	VAR(uint8, AUTOMATIOV) NtcSts_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) NtcNr_Cnt_T_u16;
	VAR(boolean, AUTOMATIC) NtcFaild_Cnt_T_logl;
	VAR(uint8, AUTOMATIC) NtcStInfo_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) NtcCurr_Cnt_T_u08;
	VAR(Std_ReturnType, AUTOMATION) RtnCod_Cnt_T_u08 = RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK;

	/* Assume failure, and initialize the data array for "No NTC found" */
	Data[0U] = 0U;
	Data[1U] = 0U;
	Data[2U] = 0U;
	Data[3U] = 0U;

	/* Get the most recently failed DTC */
	if (Dem_DcmGetDTCByOccurrenceTime(DEM_MOST_RECENT_FAILED_DTC, &FaildDtc_Cnt_T_u32) == DEM_OCCURR_OK)
	{
		/* Turn the DTC number into an event ID for lookup in fault response table */
		EveId_Cnt_T_u08 = 0U;
		for (Index_Cnt_T_u16 = 1U; Index_Cnt_T_u16 <= DEM_CFG_GLOBAL_DTC_COUNT; Index_Cnt_T_u16 += 1U)
		{
			if (Dem_GetDTCOfEvent(Index_Cnt_T_u16, DEM_DTC_FORMAT_UDS, &TestDtc_Cnt_T_u32) == E_OK)
			{
				if (TestDtc_Cnt_T_u32 == FaildDtc_Cnt_T_u32)
				{
					/* This is the event ID that most recently failed - store it */
					/* Nexteer DiagcMgr only supports up to 255 event IDs, so EveId can safely be a uint8 */
					EveId_Cnt_T_u08 = (uint8)Index_Cnt_T_u16;
				}
			}
		}

		/* Ensure that an event ID was found */
		if (EveId_Cnt_T_u08 != 0U)
		{
			NtcNr_Cnt_T_u16 = 0U;

			/* For each NTC in the Fault Response Table */
			for (Index_Cnt_T_u16 = 1U; ((Index_Cnt_T_u16 < 512U) && (NtcNr_Cnt_T_u16 == 0U)); Index_Cnt_T_u16 += 1U)
			{
				/* The CTC index is in the lowest 8 bits of the fault response table to casting
				 * to a uint8 provides the desired value */
				DtcId_Cnt_T_u08 = (uint8)(PrmDiagcMgrFltResp_u32[Index_Cnt_T_u16] & 0xFFu);

				/* If the NTC could cause the last set DTC - i.e. it's linked via the fault response table... */
				if (EveId_Cnt_T_u08 == DemDtcEveIdMap[DtcId_Cnt_T_u08])
				{
					/* And the NTC is active... */
					(void)Rte_Call_GetNtcSts_Oper((NtcNr1)Index_Cnt_T_u16, &NtcSts_Cnt_T_u08);
					if ((DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08 & NtcSts_Cnt_T_u08) != 0U)
					{
						/* This NTC is the presumed cause of the CTC */
						NtcNr_Cnt_T_u16 = Index_Cnt_T_u16;
					}
				}
			}

			/* Ensure that an NTC was found */
			if (NtcNr_Cnt_T_u16 != 0U)
			{
				/* Determine the output status based upon if the NTC is "Current" */
				(void)Rte_Call_GetNtcActv_Oper((NtcNr1)NtcNr_Cnt_T_u16, &NtcFaild_Cnt_T_logl);
				if (NtcFaild_Cnt_T_logl == TRUE)
				{
					NtcCurr_Cnt_T_u08 = 0xAAU;
				}
				else
				{
					NtcCurr_Cnt_T_u08 = 0x55U;
				}

				/* TODO: Parameter byte information is not currently available from DiagcMgr */
				NtcStInfo_Cnt_T_u08 = 0U;

				/* Populate the data fields with real info about this NTC */
				Data[0U] = DescGetHiByte(NtcNr_Cnt_T_u16);
				Data[1U] = DescGetLoByte(NtcNr_Cnt_T_u16);
				Data[2U] = NtcStInfo_Cnt_T_u08;
				Data[3U] = NtcCurr_Cnt_T_u08;

				/* Success! */
				RtnCod_Cnt_T_u08 = RTE_E_OK;
			}
		}
	}

	return RtnCod_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SteerInpTq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SteerInpTq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SteerInpTq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SteerInpTq_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_SteerInpTq_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) HwTq_HwNm_T_f32;
	VAR(sint16, AUTOMATIC) HwTq_HwNm_T_s7p8;

	(void)Rte_Read_HwTq_Val(&HwTq_HwNm_T_f32);

	HwTq_HwNm_T_f32 = Lim_f32(HwTq_HwNm_T_f32, -10.0f, 10.0f);
	HwTq_HwNm_T_s7p8 = FloatToFixdWithRound_s16_f32(HwTq_HwNm_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);

	Data[0U] = DescGetHiByte((uint16)HwTq_HwNm_T_s7p8);
	Data[1U] = DescGetLoByte((uint16)HwTq_HwNm_T_s7p8);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SteerOutpTq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SteerOutpTq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SteerOutpTq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SteerOutpTq_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_SteerOutpTq_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) MotTqCmd_MotNm_T_f32;
	VAR(sint16, AUTOMATIC) MotTqCmd_MotNm_T_s7p8;

	(void)Rte_Read_MotTqCmd_Val(&MotTqCmd_MotNm_T_f32);

	MotTqCmd_MotNm_T_f32 = Lim_f32(MotTqCmd_MotNm_T_f32, -128.0f, 127.996f);
	MotTqCmd_MotNm_T_s7p8 = FloatToFixdWithRound_s16_f32(MotTqCmd_MotNm_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);

	Data[0U] = DescGetHiByte((uint16)MotTqCmd_MotNm_T_s7p8);
	Data[1U] = DescGetLoByte((uint16)MotTqCmd_MotNm_T_s7p8);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SteerWhlAg_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SteerWhlAg>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SteerWhlAg_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SteerWhlAg_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_SteerWhlAg_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
	VAR(sint16, AUTOMATIC) HwAg_HwDeg_T_s11p4;

	(void)Rte_Read_PinionAg_Val(&HwAg_HwDeg_T_f32);

	/* Apply polarity, limit to maximum range, and convert to fixed point */
	HwAg_HwDeg_T_f32 *= -1.0f;
	HwAg_HwDeg_T_f32 = Lim_f32(HwAg_HwDeg_T_f32, -2048.0f, 2047.94f);
	HwAg_HwDeg_T_s11p4 = FloatToFixdWithRound_s16_f32(HwAg_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);

	Data[0U] = DescGetHiByte((uint16)HwAg_HwDeg_T_s11p4);
	Data[1U] = DescGetLoByte((uint16)HwAg_HwDeg_T_s11p4);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SysPwrMod_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SysPwrMod>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
 *   Std_ReturnType Rte_Read_MissMsg1F1_Logl(boolean *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SysPwrMod_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SysPwrMod_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_SysPwrMod_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(boolean, AUTOMATIC) MissMsg1F1_Cnt_T_logl;
	VAR(GmSysPwrMod1, AUTOMATIC) SysPwrMd_Cnt_T_enum;

	(void)Rte_Read_MissMsg1F1_Logl(&MissMsg1F1_Cnt_T_logl);
	(void)Rte_Read_GmSysPwrMod_Val(&SysPwrMd_Cnt_T_enum);

	if (MissMsg1F1_Cnt_T_logl == TRUE)
	{
		SysPwrMd_Cnt_T_enum = GMSYSPWRMOD_OFF;
	}

	Data[0U] = (uint8)SysPwrMd_Cnt_T_enum;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_TiIgnOn_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_TiIgnOn>
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
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_TiIgnOn_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_TiIgnOn_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_TiIgnOn_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint32, AUTOMATIC) SysTi_100uS_T_u32;
	VAR(uint32, AUTOMATIC) SysTi_mS_T_u32;

	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&SysTi_100uS_T_u32);

	SysTi_mS_T_u32 = SysTi_100uS_T_u32 / 10U;

	Data[0U] = DescGetHiHiByte(SysTi_mS_T_u32);
	Data[1U] = DescGetHiLoByte(SysTi_mS_T_u32);
	Data[2U] = DescGetLoHiByte(SysTi_mS_T_u32);
	Data[3U] = DescGetLoLoByte(SysTi_mS_T_u32);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_VehSpd_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_VehSpd>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_VehSpd_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_VehSpd_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_VehSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_VehSpd_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_VehSpd_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(uint8, AUTOMATIC) VehSpd_Kph_T_u08;

	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);

	VehSpd_Kph_T_f32 = Lim_f32(VehSpd_Kph_T_f32, 0.0f, 255.0f);
	VehSpd_Kph_T_u08 = (uint8)VehSpd_Kph_T_f32;

	Data[0U] = VehSpd_Kph_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagcClrGmIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CustDiagcClrGmIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CustDiagcClrGmIgnCntr_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, CustDiagc_CODE) CustDiagcClrGmIgnCntr_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagcClrGmIgnCntr_Oper
 *********************************************************************************************************************/

	*Rte_Pim_GmIgnCntr() = 0U;
	(void)Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ApaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CtrlrTRng_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CustMfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_DesRtIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngRunActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgCcwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgCwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrimPrfmd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MissMsg0C9_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VltgRng_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MfgOvrlDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SerlComDi_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_ClrAllDiagc_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrHwAgTrimVal_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrTrigStsAry_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, uint32 *BufPtr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GmFctDiReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCalProgdStsRd_Oper(uint8 *CalProgdSts)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCalProgdStsWr_Oper(uint8 CalProgdSts)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCalProgdStsWr1_InvldVal
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCmpdVehPartnProdtStructRd_Oper(uint8 *CmpdVehPartnProdtStruct)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidKeyChk_Oper(const uint8 *CtrlPidKey)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCtrlPidKeyChk1_InvldKey
 *   Std_ReturnType Rte_Call_PartNrCtrlPidKeyWr_Oper(const uint8 *CtrlPidKey)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedRd_Oper(uint8 *CtrlPidSeed)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrGmLanIdRd_Oper(uint8 *GmLanId)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrLstRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrProgmDateWr1_OutOfRange
 *   Std_ReturnType Rte_Call_PartNrProgmSessionKeyChk_Oper(const uint8 *ProgmSessionKey)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrProgmSessionKeyChk1_InvldKey
 *   Std_ReturnType Rte_Call_PartNrProgmSessionSeedRd_Oper(uint8 *ProgmSessionSeed)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdHwAgTrimVal_Oper(uint8 *UpdHwAgTrimValSrvResp_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, CustDiagc_CODE) CustDiagcInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagcInit1
 *********************************************************************************************************************/

	VAR(MfgEnaSt1, AUTOMATIC) CustMfgEnaSt_Cnt_T_enum;

	(void)Rte_Read_CustMfgEnaSt_Val(&CustMfgEnaSt_Cnt_T_enum);

	if (CustMfgEnaSt_Cnt_T_enum != MFGENAST_MFGMOD)
	{
		*Rte_Pim_CustDiagcProgmSessionSeedTmrActvd() = TRUE;
		*Rte_Pim_CustDiagcCtrlPidSeedTmrActvd() = TRUE;
	}

	*Rte_Pim_Srv12LoopCntr() = 0xFFU;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagcPer1
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
 *   Std_ReturnType Rte_Read_GmFctDiSts_Val(GmFctDiArbnSts1 *data)
 *   Std_ReturnType Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
 *   Std_ReturnType Rte_Read_SysStReqEnaOvrdNxtr_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_GmIgnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SysStReqEnaOvrdCombd_Logl(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CustDiagc_CODE) CustDiagcPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagcPer1
 *********************************************************************************************************************/

	VAR(GmSysPwrMod1, AUTOMATIC) SysPwrMod_Cnt_T_enum;
	VAR(boolean, AUTOMATIC) SysStReqEnaOvrdNxtr_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) SysStReqEnaOvrdCombd_Cnt_T_logl;
	VAR(GmFctDiArbnSts1, AUTOMATIC) GmFctDiArbnSts_Cnt_T_enum;

	(void)Rte_Read_GmSysPwrMod_Val(&SysPwrMod_Cnt_T_enum);
	(void)Rte_Read_SysStReqEnaOvrdNxtr_Logl(&SysStReqEnaOvrdNxtr_Cnt_T_logl);
	(void)Rte_Read_GmFctDiSts_Val(&GmFctDiArbnSts_Cnt_T_enum);

	if (SysPwrMod_Cnt_T_enum == GMSYSPWRMOD_RUN)
	{
		/* Increment once, the first time we enter run, having been in the off state */
		if (*Rte_Pim_PrevSysPwrModRun() == FALSE)
		{
			/* Limit ignition counter to it's maximum value as a uint16 */
			if (*Rte_Pim_GmIgnCntr() < 0xFFFFU)
			{
				*Rte_Pim_GmIgnCntr() += 1U;
				(void)Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(TRUE);
			}
			*Rte_Pim_PrevSysPwrModRun() = TRUE;
		}
	}
	else if (SysPwrMod_Cnt_T_enum == GMSYSPWRMOD_OFF)
	{
		/* Clear the increment flag on return to OFF */
		*Rte_Pim_PrevSysPwrModRun() = FALSE;
	}
	else
	{
		/* Don't do anything special in ACSY or CRK */
	}


	if ((SysStReqEnaOvrdNxtr_Cnt_T_logl == TRUE) || (*Rte_Pim_SysStReqEnaOvrdCust() == TRUE))
	{
		SysStReqEnaOvrdCombd_Cnt_T_logl = TRUE;
	}
	else
	{
		SysStReqEnaOvrdCombd_Cnt_T_logl = FALSE;
	}


	/* Handle delayed transmission of CPID 05 status */
	if (*Rte_Pim_GmDiCtrlPidTstRunng() == TRUE)
	{
		if (*Rte_Pim_PrevGmFctDiArbnSts() != GmFctDiArbnSts_Cnt_T_enum)
		{
			switch (GmFctDiArbnSts_Cnt_T_enum)
			{
				case GMFCTDIARBNSTS_SWBASDMTGTNFAIL:
				case GMFCTDIARBNSTS_TIMEOUTFAIL:
					DescSetNegResponse(*Rte_Pim_SrvCntxt(), kDescNrcConditionsNotCorrect);
					/* Intentional fall-though to the next case to wrap up processing */
				case GMFCTDIARBNSTS_PASSD:
					*Rte_Pim_GmDiCtrlPidTstRunng() = FALSE;
					DescProcessingDone(*Rte_Pim_SrvCntxt());
					break;
				case GMFCTDIARBNSTS_WAIT:
				case GMFCTDIARBNSTS_INPROC:
				default:
					/* Do nothing while in the waiting or in-progress states */
					break;
			}
		}
	}
	*Rte_Pim_PrevGmFctDiArbnSts() = GmFctDiArbnSts_Cnt_T_enum;


    /* Process Read Failure Record Data Response */
    ProcReadFailrRecDataResp();

	(void)Rte_Write_GmIgnCntr_Val(*Rte_Pim_GmIgnCntr());
	(void)Rte_Write_SysStReqEnaOvrdCombd_Logl(SysStReqEnaOvrdCombd_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CustDiagc_STOP_SEC_CODE
#include "CustDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Name        :   ProcReadFailrRecDataResp
* Description :   Process Failure Record Data Response
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   None
**********************************************************************************************************************/
static FUNC(void, CustDiagc_CODE) ProcReadFailrRecDataResp(void)
{
	VAR(boolean, AUTOMATIC) DtcSearchSts_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) NegRespOutOfRange_Cnt_T_logl;
	VAR(uint8, AUTOMATIC) DemDataAdjmtFac_Cnt_T_u8;
	VAR(uint16, AUTOMATIC) RespDataBufOffs_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) Len_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
	VAR(uint32, AUTOMATIC) DtcNr_Cnt_T_u32;
	VAR(Dem_ReturnGetFreezeFrameDataByDTCType, AUTOMATIC) RetCod_Cnt_T_enum;

	/* Service 0x12 0x02 handling must be postponed for one loop */
	if (*Rte_Pim_Srv12LoopCntr() != 0xFFU)
	{
		if (*Rte_Pim_Srv12LoopCntr() > 0U)
		{
			/* Wait two periodic loops for the DEM main function to process the disable update request */
			*Rte_Pim_Srv12LoopCntr() -= 1U;
		}
		else
		{

			/* Initialize with Request Out of Range negative response */
			NegRespOutOfRange_Cnt_T_logl = TRUE;

			/* Initialise DTC Search Status to not found */
			DtcSearchSts_Cnt_T_logl = FALSE;
			
			/* Loop through each CTC */
			for (Idx_Cnt_T_u16 = 1U; Idx_Cnt_T_u16 <= DEM_CFG_GLOBAL_DTC_COUNT; Idx_Cnt_T_u16 += 1U)
			{
				(void)Dem_GetDTCOfEvent(Idx_Cnt_T_u16, DEM_DTC_KIND_ALL_DTCS, &DtcNr_Cnt_T_u32);
				
				if (*Rte_Pim_DtcNr() == DtcNr_Cnt_T_u32)
				{
					/* Set DTC Search Status to found */
					DtcSearchSts_Cnt_T_logl = TRUE;
				}
			}

			if (TRUE == DtcSearchSts_Cnt_T_logl)
			{
				/* length as an input provides the maximum length of data - limit to diagnostic buffer size */
				Len_Cnt_T_u16 = 400U;
				RespDataBufOffs_Cnt_T_u16 = ((DescMsgContext*)*Rte_Pim_MsgCntxt())->resDataLen;
				DemDataAdjmtFac_Cnt_T_u8 = 2U;

				RetCod_Cnt_T_enum = Dem_DcmGetFreezeFrameDataByDTC(*Rte_Pim_DtcNr(), DEM_DTC_ORIGIN_PRIMARY_MEMORY, 1U, &((DescMsgContext*)*Rte_Pim_MsgCntxt())->resData[RespDataBufOffs_Cnt_T_u16], &Len_Cnt_T_u16);
				CallNonTrustedFunction(NtWrapS_CustDiagc_EnaDtcRecUpd, NULL_PTR);

				/* If the freeze frame is valid return positive response, otherwise return negative response. */
				if (DEM_GET_FFDATABYDTC_OK == RetCod_Cnt_T_enum)
				{
					/* If an event has freeze frame data, then DEM module will return {RecordNumber, NumOfDIDs, DID[1], data[1], ... , DID[N], data[N]}*/
					/* If an event doest not have freeze frame data, then DEM module will return {RecordNumber, NumOfDIDs}*/
					if (Len_Cnt_T_u16 > DemDataAdjmtFac_Cnt_T_u8)
					{
						/* Event has freeze frame data, so provide positive respone */
						NegRespOutOfRange_Cnt_T_logl = FALSE;

						/* Format the response buffer because Freeze Frame Data received from DEM is having  additional information */
						/* DEM format is: {RecordNumber, NumOfDIDs, DID[1], data[1], ... , DID[N], data[N]} */
						/* RecordNumber, NumOfDIDs information is not needed in positive response */
						for (Idx_Cnt_T_u16 = RespDataBufOffs_Cnt_T_u16; Idx_Cnt_T_u16 < (RespDataBufOffs_Cnt_T_u16 + (Len_Cnt_T_u16 - DemDataAdjmtFac_Cnt_T_u8)); Idx_Cnt_T_u16 += 1U)
						{
							((DescMsgContext*)*Rte_Pim_MsgCntxt())->resData[Idx_Cnt_T_u16] = ((DescMsgContext*)*Rte_Pim_MsgCntxt())->resData[Idx_Cnt_T_u16 + DemDataAdjmtFac_Cnt_T_u8];
						}
	
						((DescMsgContext*)*Rte_Pim_MsgCntxt())->resDataLen += (Len_Cnt_T_u16 - DemDataAdjmtFac_Cnt_T_u8) ;
					}
				}
			}
			
			if (TRUE == NegRespOutOfRange_Cnt_T_logl)
			{
				/* Request Out Of Range negative response is issued in following conditions: */
				/* - DTC search status is not found                                          */
				/* - There is no freeze frame data associated with the DTC                   */
				/* - RetCod_Cnt_T_enum is not equal to DEM_GET_FFDATABYDTC_OK                */
				DescSetNegResponse(((DescMsgContext*)*Rte_Pim_MsgCntxt())->iContext, kDescNrcRequestOutOfRange);
			}

			*Rte_Pim_Srv12LoopCntr() = 0xFFU;
			DescProcessingDone(((DescMsgContext*)*Rte_Pim_MsgCntxt())->iContext);
		}
	}
}

/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CmnMfgSrv_UpdHwAgTrimVal
* Description:  Non-trusted function call for setting vehicle center offset trim via CPID 03.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_UpdHwAgTrimVal(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Rte_Call_UpdHwAgTrimVal_Oper((uint8*)FunctionParams);
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CmnMfgSrv_ClrHwAgTrimVal
* Description:  Non-trusted function call for clearing vehicle center offset trim via CPID 03.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_ClrHwAgTrimVal(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Rte_Call_ClrHwAgTrimVal_Oper();
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CustDiagc_ClrAllDiagc
* Description:  Non-trusted function call for clearing NTCs and CTCs via DiagcMgr.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_ClrAllDiagc(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Rte_Call_ClrAllDiagc_Oper();
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CustDiagc_DemDcmDisableDTCSetting
* Description:  Non-trusted function call for disabling CTCs via DDEM.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_DemDcmDisableDTCSetting(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Dem_DcmDisableDTCSetting(DEM_DTC_GROUP_ALL_DTCS, DEM_DTC_KIND_ALL_DTCS);
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CustDiagc_DemDcmEnableDTCSetting
* Description:  Non-trusted function call for enabling CTCs via DDEM.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_DemDcmEnableDTCSetting(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Dem_DcmEnableDTCSetting(DEM_DTC_GROUP_ALL_DTCS, DEM_DTC_KIND_ALL_DTCS);
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CustDiagc_GmFctDiReq
* Description:  Non-trusted function call for disabling function from CPID 05.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_GmFctDiReq(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Rte_Call_GmFctDiReq_Oper();
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CustDiagc_EnaDtcRecUpd
* Description:  Non-trusted function call for disabling function from CPID 05.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_EnaDtcRecUpd(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Dem_DcmEnableDTCRecordUpdate();
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CustDiagc_DiDtcRecUpd
* Description:  Non-trusted function call for disabling function from CPID 05.
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_DiDtcRecUpd(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Dem_DcmDisableDTCRecordUpdate(*((uint32*)FunctionParams), DEM_DTC_ORIGIN_PRIMARY_MEMORY);
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
