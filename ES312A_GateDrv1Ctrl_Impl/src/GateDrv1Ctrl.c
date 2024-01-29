/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GateDrv1Ctrl.c
 *     SW-C Type:  GateDrv1Ctrl
 *  Generated at:  Wed Jul 13 17:00:31 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GateDrv1Ctrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GateDrv1Ctrl.c
* Module Description: Gate Drive 1 Control function responsible for configuration, deactivation and determination of fault status for Gate Drive 1.
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 07/13/16   1       Rijvi     Initial Version                    											  EA4#6389
* 21/09/16   2       Rijvi     Updated per design rev. 1.5.0. And removed the requirement tags.				  EA4#7438
* 11/22/16   3       AJM       Updated per design rev 1.7.0                                                   EA4#8261                      
* 01/21/17   4       AJM       Updated per design rev 1.8.0                                                   EA4#9359                       
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

  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_GateDrv1Ctrl.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ElecGlbPrm.h" 
#include "Spi.h"
#include "Os.h"
#include "NxtrMath.h"

/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.1]: Inline functions are used to allow throughput optimization */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 



#define  GATEDRV1CFG0READVAL_CNT_U16     	(0U)    
#define  GATEDRV1CFG0WRVAL_CNT_U16     	 	(512U)   
#define  GATEDRV1CFG1WRVAL_CNT_U16     	 	(1791U)  
#define  GATEDRV1CFG5WRVAL_CNT_U16       	(5824U)   
#define  GATEDRV1CFG6WRVAL_CNT_U16       	(6816U)    
#define  GATEDRV1CTRLVAL_CNT_U16         	(32320U)   
#define  GATEDRV1MASK0VAL_CNT_U16        	(26175U)   
#define  GATEDRV1MASK1VAL_CNT_U16        	(27392U)   
#define  GATEDRV1MASK2VAL_CNT_U16        	(28320U)  
#define  GATEDRV1CFG1READVAL_CNT_U16     	(1279U) 
#define  GATEDRV1CFG2READVAL_CNT_U16   		(2320U) 
#define  GATEDRV1CFG3READVAL_CNT_U16   		(3086U) 
#define  GATEDRV1CFG4READVAL_CNT_U16   		(4110U) 
#define  GATEDRV1CFG5READVAL_CNT_U16   		(5312U) 
#define  GATEDRV1CFG6READVAL_CNT_U16   		(6304U) 
#define  GATEDRV1CFG7READVAL_CNT_U16   		(7413U) 
#define  GATEDRV1CTRLREADVAL_CNT_U16   		(31808U) 
#define  GATEDRV1DIAG0READVAL_CNT_U16   	(28672U) 
#define  GATEDRV1DIAG1READVAL_CNT_U16   	(29696U) 
#define  GATEDRV1DIAG2READVAL_CNT_U16   	(30720U) 
#define  GATEDRV1MASK1READVAL_CNT_U16   	(26880U) 
#define  GATEDRV1MASK2READVAL_CNT_U16   	(27776U) 
#define  GATEDRV1VRFYCMD0WRVAL_CNT_U16   	(20992U) 
#define  GATEDRV1VRFYCMD1WRVAL_CNT_U16   	(22016U) 
#define  GATEDRV1VRFYRES0READVAL_CNT_U16   	(23552U)  
#define  GATEDRV1VRFYRES1READVAL_CNT_U16   	(24576U) 
#define  GATEDRV1CHKVALMASK_CNT_U16   		(511U)

#define  GATEDRVOFFSTCHKSIZE_CNT_U08 		(TblSize_m(ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16) - 1U)

/* SPI transmit function */
static INLINE FUNC(void, GateDrv1Ctrl_CODE) SpiAsyncTx( Spi_ChannelType Channel_Cnt_T_u08, 
													    Spi_DataType TxData_Cnt_T_u16,
												        Spi_SequenceType Sequence_Cnt_T_u08 );
														
/*** Off state verification functions ***/
static FUNC(void, GateDrv1Ctrl_CODE) OffStVrfySt( void );
static FUNC(boolean, GateDrv1Ctrl_CODE) OffStVrfyData( void );

/*** Configuration state functions ***/
static FUNC(void, GateDrv1Ctrl_CODE) CfgSt( void ); 
static FUNC(void, GateDrv1Ctrl_CODE) ReadBackRegs( void );

/*** Operate Fault Monitor state functions ***/
static FUNC(void, GateDrv1Ctrl_CODE) OperFltMonrSt( void ); 
static FUNC(boolean, GateDrv1Ctrl_CODE) GateDrvDetermineOnStSngFETFlt( void );
static FUNC(boolean, GateDrv1Ctrl_CODE) GateDrvDetermineVltgFlt( void );
static FUNC(boolean, GateDrv1Ctrl_CODE) GateDrvDetermineGenericFlt(uint16 GateDrvAllSts_Cnt_T_u16 );
static FUNC(void, GateDrv1Ctrl_CODE) GateDrvDetermineVgsUvFlt( void );
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_GateDrv1Diag0Val(void)
 *   uint16 *Rte_Pim_GateDrv1Diag1Val(void)
 *   uint16 *Rte_Pim_GateDrv1Diag2Val(void)
 *   uint16 *Rte_Pim_GateDrv1StsVal(void)
 *   uint16 *Rte_Pim_GateDrv1VrfyRes0Val(void)
 *   uint16 *Rte_Pim_GateDrv1VrfyRes1Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1Diag0Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1Diag1Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1Diag2Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1StsVal(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val(void)
 *   uint8 *Rte_Pim_GateDrv1CfgCnt(void)
 *   uint8 *Rte_Pim_GateDrv1OffStChkIdx(void)
 *   uint8 *Rte_Pim_GateDrv1OffStCnt(void)
 *   uint8 *Rte_Pim_GateDrv1St(void)
 *   uint8 *Rte_Pim_Ivtr1BootstrpSplyFltPrmVal(void)
 *   uint8 *Rte_Pim_Ivtr1GenericFltPrmVal(void)
 *   uint8 *Rte_Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx(void)
 *   boolean *Rte_Pim_GateDrv1CfgSecAtmpt(void)
 *   boolean *Rte_Pim_GateDrv1OffStChkSecAtmpt(void)
 *   boolean *Rte_Pim_Ivtr1OffStChkCmpl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x061FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x065FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val(void)
 *
 *********************************************************************************************************************/


#define GateDrv1Ctrl_START_SEC_CODE
#include "GateDrv1Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv1CtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, GateDrv1Ctrl_CODE) GateDrv1CtrlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv1CtrlInit1
 *********************************************************************************************************************/

	*Rte_Pim_GateDrv1St() = ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv1CtrlPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena(boolean data)
 *   void Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, GateDrv1Ctrl_CODE) GateDrv1CtrlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv1CtrlPer1
 *********************************************************************************************************************/

	VAR(boolean,  AUTOMATIC)  DiagcStsIvtr2Inactv_Cnt_T_logl;
	VAR(uint8,    AUTOMATIC)  StrtUpSt_Cnt_T_u08;
	VAR(SysSt1,   AUTOMATIC)  SysSt_Cnt_T_enum;
	VAR(boolean,  AUTOMATIC)  MotDrvr1Diag_Cnt_T_logl;
	
	
	/* Read module i/p */
	(void) Rte_Read_DiagcStsIvtr2Inactv_Logl( &DiagcStsIvtr2Inactv_Cnt_T_logl );
    (void) Rte_Read_StrtUpSt_Val( &StrtUpSt_Cnt_T_u08 );
    (void) Rte_Read_SysSt_Val( &SysSt_Cnt_T_enum );
	
	
	if( ( (SysSt_Cnt_T_enum == SYSST_ENA) || ((SysSt_Cnt_T_enum == SYSST_WRMININ) && (StrtUpSt_Cnt_T_u08 >= ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08)) )
		&& (DiagcStsIvtr2Inactv_Cnt_T_logl == FALSE) )
	{		
		Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena( TRUE );

		/* Mask 0 Register dummy write command to get/read the status register */
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Mask0Ch, GATEDRV1MASK0VAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Mask0Seq );
		/* Diag 0 Register read command */
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Diag0Ch, GATEDRV1DIAG0READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Diag0Seq );
		/* Diag 1 Register read command */
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Diag1Ch, GATEDRV1DIAG1READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Diag1Seq );
		/* Diag 2 Register read command */
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Diag2Ch, GATEDRV1DIAG2READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Diag2Seq );
		/* Verify Result 0 register read command */
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1VrfyRes0Ch, GATEDRV1VRFYRES0READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1VrfyRes0Seq );
		/* Verify Result 1 register read command */
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1VrfyRes1Ch, GATEDRV1VRFYRES1READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1VrfyRes1Seq );
		
			
		/* Monitor Gate Drv physical fault pin */
		(void) Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper( &MotDrvr1Diag_Cnt_T_logl );
		if( MotDrvr1Diag_Cnt_T_logl == STD_LOW )
		{	/* Physcial Fault Pin Active */
			Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv( TRUE );
		}
		else
		{	/* Physical Fault Pin Inactive */
			Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv( FALSE );
		}
	}
	else
	{
		Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena( FALSE );
	}
 
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv1CtrlPer2
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotDrvr1IninTestCmpl_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_GateDrv1CtrlPer2_GateDrv1Ena(void)
 *   boolean Rte_IrvRead_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, GateDrv1Ctrl_CODE) GateDrv1CtrlPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv1CtrlPer2
 *********************************************************************************************************************/

	VAR(boolean,  AUTOMATIC)  DiagcStsIvtr2Inactv_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  GateDrv1Ena_Cnt_T_logl;
	
	
	/* Read module i/p */
	(void) Rte_Read_DiagcStsIvtr2Inactv_Logl( &DiagcStsIvtr2Inactv_Cnt_T_logl );
	
	/* Read IRVs */
	GateDrv1Ena_Cnt_T_logl = Rte_IrvRead_GateDrv1CtrlPer2_GateDrv1Ena();
	
	
	if( GateDrv1Ena_Cnt_T_logl == TRUE )
	{	/* Gate Drive Enable */
		
		/* Read Status & Diag Registers */
		(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Mask0Ch,  Rte_Pim_GateDrv1StsVal() );
		(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Diag0Ch,  Rte_Pim_GateDrv1Diag0Val() );
		(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Diag1Ch,  Rte_Pim_GateDrv1Diag1Val() );
		(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Diag2Ch,  Rte_Pim_GateDrv1Diag2Val() );
		(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1VrfyRes0Ch,  Rte_Pim_GateDrv1VrfyRes0Val() );
		(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1VrfyRes1Ch,  Rte_Pim_GateDrv1VrfyRes1Val() );
		
		
		/* Gate Drive State */
		switch( *Rte_Pim_GateDrv1St() )
		{
			case ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08:
				OffStVrfySt(); 
			break;
			
			case ELECGLBPRM_GATEDRVCFGST_CNT_U08:
				CfgSt(); 
			break;
			
			case ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08:
			default :
				OperFltMonrSt();
			break;
		}
		
	}
	else
	{	/* Gate Drive Disable */

		(void) Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper( STD_LOW );

		(void) Rte_Write_MotDrvr1IninTestCmpl_Logl( DiagcStsIvtr2Inactv_Cnt_T_logl );  /* Write module o/p */
		
		*Rte_Pim_GateDrv1CfgCnt()       = 0U;
		*Rte_Pim_GateDrv1OffStCnt() 	= 0U;
		*Rte_Pim_GateDrv1CfgSecAtmpt() 	= FALSE;
		*Rte_Pim_GateDrv1OffStChkSecAtmpt() 	= FALSE;  
		
		if( *Rte_Pim_Ivtr1OffStChkCmpl() == FALSE )
		{
			*Rte_Pim_GateDrv1St() = ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08;
		}
		else
		{
			*Rte_Pim_GateDrv1St() = ELECGLBPRM_GATEDRVCFGST_CNT_U08;
		}
		
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GateDrv1Ctrl_STOP_SEC_CODE
#include "GateDrv1Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define GateDrv1Ctrl_START_SEC_CODE
#include "GateDrv1Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
* Name:        SpiAsyncTx
* Description: Trigger any spi transmission
* Inputs:      Channel_Cnt_T_u08, TxData_Cnt_T_u16 and Sequence_Cnt_T_u08
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static INLINE FUNC(void, GateDrv1Ctrl_CODE) SpiAsyncTx( Spi_ChannelType Channel_Cnt_T_u08, 
													    Spi_DataType TxData_Cnt_T_u16,
												        Spi_SequenceType Sequence_Cnt_T_u08 )
{
	
	/* NOTE: Spi_WriteIB() is a Synchronous Reentrant function. So it's okay to use temporary variable's address 
				         as a 2nd parameter of Spi_WriteIB() function. */
						 
	(void) Spi_WriteIB( Channel_Cnt_T_u08, &TxData_Cnt_T_u16 );
	(void) Call_Spi_AsyncTransmit( Sequence_Cnt_T_u08 );  
	
}




/**********************************************************************************************************************
* Name:        OffStVrfySt
* Description: Off state verification
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv1Ctrl_CODE) OffStVrfySt( void )
{
	VAR(boolean,  AUTOMATIC)  Flt_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  AtFltAndRep_Cnt_T_logl = FALSE;
	
	if( *Rte_Pim_GateDrv1OffStCnt() == 0U )
	{
		/* Enable Hardware Pin */
		(void) Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper( STD_HIGH );
		*Rte_Pim_GateDrv1OffStCnt() = *Rte_Pim_GateDrv1OffStCnt() + 1U;
	}
	else if( *Rte_Pim_GateDrv1OffStCnt() == 1U )
	{
		*Rte_Pim_GateDrv1OffStCnt() = *Rte_Pim_GateDrv1OffStCnt() + 1U;
	}
	else
	{	/* OffSt Verification Chk and Transition to Config State */
		if((*Rte_Pim_GateDrv1OffStChkIdx() <= GATEDRVOFFSTCHKSIZE_CNT_U08))
		{
			if( *Rte_Pim_Ivtr1OffStChkCmpl() == FALSE )
			{	/* OffStChk Incomplete */
				/* Offstate Verification */
				/* OffStVrfyData */
				
				Flt_Cnt_T_logl = OffStVrfyData();
				
				if( (Flt_Cnt_T_logl == FALSE) && (*Rte_Pim_GateDrv1OffStChkIdx() == GATEDRVOFFSTCHKSIZE_CNT_U08) )
				{	/* No fault and Complete */
					
					(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X063, 0U, NTCSTS_PASSD, 0U ); 
					*Rte_Pim_Ivtr1OffStChkCmpl()  = TRUE;
				}
				else if( Flt_Cnt_T_logl == FALSE )
				{	/* No fault */				
					*Rte_Pim_GateDrv1OffStChkIdx() = *Rte_Pim_GateDrv1OffStChkIdx() + 1U;
				}
				else
				{	/* At Fault and Retry */
					AtFltAndRep_Cnt_T_logl = TRUE;
				}
			}
			else
			{	/* Transitoin ConfigState */
		
				*Rte_Pim_GateDrv1St() = ELECGLBPRM_GATEDRVCFGST_CNT_U08;
			}
		}
		else
		{
			AtFltAndRep_Cnt_T_logl = TRUE;
		}
		
		if(AtFltAndRep_Cnt_T_logl == TRUE)
		{
			/* At Fault and Retry */
			
			if( *Rte_Pim_GateDrv1OffStChkSecAtmpt() == FALSE )
			{	/* Retry Once */
				*Rte_Pim_GateDrv1OffStCnt() = 0U;
				*Rte_Pim_GateDrv1OffStChkIdx() = 0U;
				*Rte_Pim_GateDrv1OffStChkSecAtmpt() = TRUE;
				
				(void) Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper( STD_LOW );
			}
			else
			{	/* Failed - Move on to Config */
		
				(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X063, *Rte_Pim_GateDrv1OffStChkIdx(), NTCSTS_FAILD, 0U ); 
				*Rte_Pim_Ivtr1OffStChkCmpl() = TRUE;
			}
			
			/* Display variables in case of fault */
			*Rte_Pim_dGateDrv1CtrlGateDrv1StsVal() 				= *Rte_Pim_GateDrv1StsVal();
			*Rte_Pim_dGateDrv1CtrlGateDrv1Diag0Val() 			= *Rte_Pim_GateDrv1Diag0Val();
			*Rte_Pim_dGateDrv1CtrlGateDrv1Diag1Val() 			= *Rte_Pim_GateDrv1Diag1Val();
			*Rte_Pim_dGateDrv1CtrlGateDrv1Diag2Val() 			= *Rte_Pim_GateDrv1Diag2Val();
			*Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val() 		= *Rte_Pim_GateDrv1VrfyRes0Val();
			*Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val() 		= *Rte_Pim_GateDrv1VrfyRes1Val();
			*Rte_Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx() = *Rte_Pim_GateDrv1OffStChkIdx();
		}
	}
	
}




/**********************************************************************************************************************
* Name:        OffStVrfyData
* Description: Off state verification Data
* Inputs:      None
* Outputs:     Flt_Cnt_T_logl
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv1Ctrl_CODE) OffStVrfyData( void )
{
	VAR(uint16,    AUTOMATIC)  Tx0_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  Tx1_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  MotDrv1Diag_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  StsChk_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  Diag1Chk_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  Diag2Chk_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  VrfyRes0_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  VrfyRes1_Cnt_T_u16;
	
	VAR(boolean,  AUTOMATIC)  MotDrvr1Diag_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  Flt_Cnt_T_logl = FALSE;
	
	
	Tx0_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08];
	Tx1_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08];
	MotDrv1Diag_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08];
	StsChk_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08];
	Diag1Chk_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08];
	Diag2Chk_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08];
	VrfyRes0_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08];
	VrfyRes1_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv1OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08];
	
	if( Tx0_Cnt_T_u16 != 0U )
	{
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch, Tx0_Cnt_T_u16, SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq );
	}
	
	if( Tx1_Cnt_T_u16 != 0U )
	{
		SpiAsyncTx( SpiConf_SpiChannel_GateDrv1CtrlCh, Tx1_Cnt_T_u16, SpiConf_SpiSequence_GateDrv1CtrlSeq );
	}
	
	if( MotDrv1Diag_Cnt_T_u16 != 0U )
	{
		(void) Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper( &MotDrvr1Diag_Cnt_T_logl );
		if( MotDrvr1Diag_Cnt_T_logl == STD_LOW )
		{	/* Physcial Fault Pin Active */
			Flt_Cnt_T_logl = TRUE;
		}
	}
	
	if( (StsChk_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv1StsVal()) & StsChk_Cnt_T_u16) != StsChk_Cnt_T_u16 ) ) 
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (Diag1Chk_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv1Diag1Val()) & Diag1Chk_Cnt_T_u16) != Diag1Chk_Cnt_T_u16 ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (Diag2Chk_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv1Diag2Val()) & Diag2Chk_Cnt_T_u16) != Diag2Chk_Cnt_T_u16 ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (VrfyRes0_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv1VrfyRes0Val()) & VrfyRes0_Cnt_T_u16) != 0U ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (VrfyRes1_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv1VrfyRes1Val()) & VrfyRes1_Cnt_T_u16) != VrfyRes1_Cnt_T_u16 ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else
	{
		/* Do nothing */
	}
	
	return Flt_Cnt_T_logl;
}




/**********************************************************************************************************************
* Name:        CfgSt
* Description: Configure gate drive
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv1Ctrl_CODE) CfgSt( void )
{
	switch( *Rte_Pim_GateDrv1CfgCnt()  )
	{
		case 0U: /* Enable Hardware Pin */
			(void) Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper( STD_HIGH );
			*Rte_Pim_GateDrv1CfgCnt() = *Rte_Pim_GateDrv1CfgCnt() + 1U;
		break;
		
		case 1U:
			*Rte_Pim_GateDrv1CfgCnt() = *Rte_Pim_GateDrv1CfgCnt() + 1U;
		break;
		
		case 2U: /* Configure Registers */
			/* Config 0 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg0Ch, GATEDRV1CFG0WRVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg0Seq );
			/* Config 1 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg1Ch, GATEDRV1CFG1WRVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg1Seq );
			/* Config 2 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg2Ch, Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val(), SpiConf_SpiSequence_GateDrv1Cfg2Seq );
			/* Config 3 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg3Ch, Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val(), SpiConf_SpiSequence_GateDrv1Cfg3Seq );
			/* Config 4 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg4Ch, Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val(), SpiConf_SpiSequence_GateDrv1Cfg4Seq );
			/* Config 5 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg5Ch, GATEDRV1CFG5WRVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg5Seq );
			/* Config 6 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg6Ch, GATEDRV1CFG6WRVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg6Seq );
			/* Config 7 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg7Ch, Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val(), SpiConf_SpiSequence_GateDrv1Cfg7Seq );
			/* Control Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1CtrlCh, GATEDRV1CTRLVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1CtrlSeq );
			/* Mask 1 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Mask1Ch, GATEDRV1MASK1VAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Mask1Seq );
			/* Mask 2 Register Write */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Mask2Ch, GATEDRV1MASK2VAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Mask2Seq );
			
			*Rte_Pim_GateDrv1CfgCnt() = *Rte_Pim_GateDrv1CfgCnt() + 1U;
		break;
		
		case 3U: /* Set up read back of Registers */
			/* Config 0 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg0Ch, GATEDRV1CFG0READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg0Seq );
			/* Config 1 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg1Ch, GATEDRV1CFG1READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg1Seq );
			/* Config 2 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg2Ch, GATEDRV1CFG2READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg2Seq );
			/* Config 3 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg3Ch, GATEDRV1CFG3READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg3Seq );
			/* Config 4 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg4Ch, GATEDRV1CFG4READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg4Seq );
			/* Config 5 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg5Ch, GATEDRV1CFG5READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg5Seq );
			/* Config 6 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg6Ch, GATEDRV1CFG6READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg6Seq );
			/* Config 7 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Cfg7Ch, GATEDRV1CFG7READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Cfg7Seq );
			/* Control Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1CtrlCh, GATEDRV1CTRLREADVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1CtrlSeq );
			/* Mask 1 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Mask1Ch, GATEDRV1MASK1READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Mask1Seq );
			/* Mask 2 Register read command */
			SpiAsyncTx( SpiConf_SpiChannel_GateDrv1Mask2Ch, GATEDRV1MASK2READVAL_CNT_U16, SpiConf_SpiSequence_GateDrv1Mask2Seq );
			
			*Rte_Pim_GateDrv1CfgCnt() = *Rte_Pim_GateDrv1CfgCnt() + 1U;
		break;
		
		default : /* Read back Registers */
			ReadBackRegs();
		break;
	}
}




/**********************************************************************************************************************
* Name:        ReadBackRegs
* Description: Read back the gate drive registers and retry
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv1Ctrl_CODE) ReadBackRegs( void )
{
	VAR(uint16,  AUTOMATIC)  Cfg0RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg1RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg2RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg3RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg4RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg5RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg6RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg7RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  CtrlRxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Mask1RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Mask2RxBuf_Cnt_T_u16;
	
	VAR(uint8,   AUTOMATIC)  PrmByte_Cnt_T_u08;
	
	
	
	/* Read Gate Drive registers */
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg0Ch,  &Cfg0RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg1Ch,  &Cfg1RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg2Ch,  &Cfg2RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg3Ch,  &Cfg3RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg4Ch,  &Cfg4RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg5Ch,  &Cfg5RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg6Ch,  &Cfg6RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Cfg7Ch,  &Cfg7RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1CtrlCh,  &CtrlRxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Mask1Ch, &Mask1RxBuf_Cnt_T_u16 );
	(void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv1Mask2Ch, &Mask2RxBuf_Cnt_T_u16 );
	
	
	
	/* Verify Gate Drive registers */
	if( (Cfg0RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (GATEDRV1CFG0WRVAL_CNT_U16 & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 1U;
	}
	else if( (Cfg1RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (GATEDRV1CFG1WRVAL_CNT_U16 & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 2U;
	}
	else if( (Cfg2RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val() & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 3U;
	}
	else if( (Cfg3RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val() & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 4U;
	}
	else if( (Cfg4RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val() & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 5U;
	}
	else if( (Cfg5RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (GATEDRV1CFG5WRVAL_CNT_U16 & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 6U;
	}
	else if( (Cfg6RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (GATEDRV1CFG6WRVAL_CNT_U16 & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 7U;
	}
	else if( (Cfg7RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val() & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 8U;
	}
	else if( (CtrlRxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (GATEDRV1CTRLVAL_CNT_U16 & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 9U;
	}
	else if( (Mask1RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (GATEDRV1MASK1VAL_CNT_U16 & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 10U;
	}
	else if( (Mask2RxBuf_Cnt_T_u16 & GATEDRV1CHKVALMASK_CNT_U16) != (GATEDRV1MASK2VAL_CNT_U16 & GATEDRV1CHKVALMASK_CNT_U16) )
	{
		PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + 11U;
	}
	else
	{
		PrmByte_Cnt_T_u08 = 0U;
	}
	
	
	if( PrmByte_Cnt_T_u08 != 0U )
	{
		if( *Rte_Pim_GateDrv1CfgSecAtmpt() == FALSE )
		{ /* Retry once */
			*Rte_Pim_GateDrv1CfgCnt() = 0U;
			*Rte_Pim_GateDrv1CfgSecAtmpt() = TRUE;
			
			/* Reset GateDrive. Or disable Hardware Pin */
			(void) Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper( STD_LOW );
		}
		else
		{	/* Failed - Move on to Operate */
			*Rte_Pim_GateDrv1St() = ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;
			(void) Rte_Write_MotDrvr1IninTestCmpl_Logl( TRUE );  /* Write module o/p */
			(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X063, PrmByte_Cnt_T_u08, NTCSTS_FAILD, 0U ); 
		}
	}
	else
	{	/* Passed - Move on to Operate */
		*Rte_Pim_GateDrv1St() = ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;
		(void) Rte_Write_MotDrvr1IninTestCmpl_Logl( TRUE );  /* Write module o/p */
	}
		
}




/**********************************************************************************************************************
* Name:        OperFltMonrSt
* Description: Runtime diagnostics for the gate drive
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv1Ctrl_CODE) OperFltMonrSt( void )
{
	
	VAR(boolean,  AUTOMATIC)  GenGateDrvFlt1_Cnt_T_logl = FALSE;
	VAR(boolean,  AUTOMATIC)  GenGateDrvFlt2_Cnt_T_logl = FALSE;
	VAR(boolean,  AUTOMATIC)  GenGateDrvFlt3_Cnt_T_logl = FALSE;
	VAR(boolean,  AUTOMATIC)  Ivtr1PhyFltInpActv_Cnt_T_logl;
	VAR(uint16,  AUTOMATIC)  GateDrvAllSts_Cnt_T_u16;
	
	
	/* Read IRV */
	Ivtr1PhyFltInpActv_Cnt_T_logl = Rte_IrvRead_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv();
	
	
	/***********************************************************************************/
	/*** --------------------- START: Determine Gate Drive fault ------------------- ***/
	/***********************************************************************************/
	GateDrvAllSts_Cnt_T_u16 = 	(*Rte_Pim_GateDrv1Diag0Val() |
								*Rte_Pim_GateDrv1Diag1Val() |
								*Rte_Pim_GateDrv1Diag2Val() |
								*Rte_Pim_GateDrv1StsVal() |
								*Rte_Pim_GateDrv1VrfyRes0Val() |
								*Rte_Pim_GateDrv1VrfyRes1Val());
	if((GateDrvAllSts_Cnt_T_u16 & 0x2000U) != 0U)
	{
		/* Rerun Confg */
		*Rte_Pim_GateDrv1CfgSecAtmpt() 	= FALSE;
		*Rte_Pim_GateDrv1CfgCnt()       = 0U;
		*Rte_Pim_GateDrv1St() = ELECGLBPRM_GATEDRVCFGST_CNT_U08;
		*Rte_Pim_Ivtr1GenericFltPrmVal() |= 2U;
		GenGateDrvFlt1_Cnt_T_logl = TRUE;
	}
	else if((GateDrvAllSts_Cnt_T_u16 & 0x5E00U) != 0U)
	{
		/* Determine OnState Single FET Fault */
		GenGateDrvFlt1_Cnt_T_logl = GateDrvDetermineOnStSngFETFlt(); 
		
		/* Determine VREG/Bootstrap Voltage Fault */
		GenGateDrvFlt2_Cnt_T_logl = GateDrvDetermineVltgFlt();
		
		/* Determine Generic Gate Drive Fault */
		GenGateDrvFlt3_Cnt_T_logl = GateDrvDetermineGenericFlt(GateDrvAllSts_Cnt_T_u16); 
	}
	else if( Ivtr1PhyFltInpActv_Cnt_T_logl == TRUE ) 	
	{	/* Only Physical Fault Pin Active */
		
		*Rte_Pim_Ivtr1GenericFltPrmVal() = 2U;
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X060, *Rte_Pim_Ivtr1GenericFltPrmVal(), 
										NTCSTS_PREFAILD, Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val() );							 
	}
	else
	{	/* No Faults */
		
		*Rte_Pim_Ivtr1GenericFltPrmVal() 		= 0U; 
		*Rte_Pim_Ivtr1BootstrpSplyFltPrmVal() 	= 0U;
		
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X060, 0U,   
										NTCSTS_PREPASSD, Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val() );
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X061, 0U, 
										NTCSTS_PREPASSD, Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val() );
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X065, 0U,   
										NTCSTS_PREPASSD, Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val() );	
										 
	}
		
	if( (GenGateDrvFlt1_Cnt_T_logl == TRUE) || (GenGateDrvFlt2_Cnt_T_logl == TRUE) || (GenGateDrvFlt3_Cnt_T_logl == TRUE) )
	{
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X060, *Rte_Pim_Ivtr1GenericFltPrmVal(), 
										NTCSTS_PREFAILD, Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val() );
	}
	else
	{
		*Rte_Pim_Ivtr1GenericFltPrmVal() = 0U;
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X060, 0U,
										NTCSTS_PREPASSD, Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val() );
	}
	/***********************************************************************************/
	/*** ---------------------   END: Determine Gate Drive fault ------------------- ***/
	/***********************************************************************************/
	

}




/**********************************************************************************************************************
* Name:        GateDrvDetermineOnStSngFETFlt
* Description: Gate drive determine ON state single FET fault. Returns TRUE if general fault present, else return FALSE.
* Inputs:      None
* Outputs:     GenGateDrvFlt_Cnt_T_logl
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv1Ctrl_CODE) GateDrvDetermineOnStSngFETFlt( void )
{
	
	VAR(uint8,    AUTOMATIC)  Ntc0x61StInfo_Cnt_T_u08;
	VAR(boolean,  AUTOMATIC)  GenGateDrvFlt_Cnt_T_logl;
	
	GenGateDrvFlt_Cnt_T_logl = FALSE;
	
	if( ((*Rte_Pim_GateDrv1StsVal()) & 0x0001U) != 0U )
	{	/* On-State Single FET Flt Active */
		
		Ntc0x61StInfo_Cnt_T_u08 = (uint8)(*Rte_Pim_GateDrv1Diag1Val() & 0x003FU);
		
		if( Ntc0x61StInfo_Cnt_T_u08 > 0U )
		{
			(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X061, Ntc0x61StInfo_Cnt_T_u08, 
										    NTCSTS_PREFAILD, Rte_Prm_GateDrv1CtrlNtcNr0x061FailStep_Val() );
		}
		else
		{
			GenGateDrvFlt_Cnt_T_logl = TRUE;
			*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | 2U; 
		}
		
	}
	else
	{	/* On-State Single FET Flt not Active */
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X061, 0U, 
										NTCSTS_PREPASSD, Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val() );
	}
	
	return GenGateDrvFlt_Cnt_T_logl;
	
}



/**********************************************************************************************************************
* Name:        GateDrvDetermineVltgFlt
* Description: Gate drive determine VREG/Bootstrap voltage fault. Returns TRUE if general fault present, else return FALSE.
* Inputs:      None
* Outputs:     GenGateDrvFlt_Cnt_T_logl
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv1Ctrl_CODE) GateDrvDetermineVltgFlt( void )
{
	
	VAR(boolean,  AUTOMATIC)  GenGateDrvFlt_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  BSUvFltActv_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  VRUvFlt_Cnt_T_logl;
	
	GenGateDrvFlt_Cnt_T_logl = FALSE;
	BSUvFltActv_Cnt_T_logl = FALSE;
	VRUvFlt_Cnt_T_logl = FALSE;
	
	if( ((*Rte_Pim_GateDrv1StsVal()) & 0x0004U) != 0U )
	{	/* BSU Flt Active */
		
		*Rte_Pim_Ivtr1BootstrpSplyFltPrmVal() = (uint8)(((*Rte_Pim_GateDrv1Diag2Val()) & 0x01C0U) >> 5U); 
		
		if( *Rte_Pim_Ivtr1BootstrpSplyFltPrmVal() > 0U )
		{	/* Set Fault bit */
			BSUvFltActv_Cnt_T_logl = TRUE;
		}
		else
		{
			GenGateDrvFlt_Cnt_T_logl = TRUE;
			*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | 2U; 
		}
	}
	
	
	if( ((*Rte_Pim_GateDrv1StsVal()) & 0x0020U) != 0U )
	{	/* VR Flt Active */
		
		if( ((*Rte_Pim_GateDrv1Diag1Val()) & 0x0080U) != 0U )
		{	/* Set Fault bit */
			VRUvFlt_Cnt_T_logl = TRUE;
			
			*Rte_Pim_Ivtr1BootstrpSplyFltPrmVal() = *Rte_Pim_Ivtr1BootstrpSplyFltPrmVal() | 1U;
		}
		else
		{
			GenGateDrvFlt_Cnt_T_logl = TRUE;
			*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | 2U; 
		}
	}
	
	
	
	if( (BSUvFltActv_Cnt_T_logl == TRUE) || (VRUvFlt_Cnt_T_logl == TRUE) )
	{
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X065, *Rte_Pim_Ivtr1BootstrpSplyFltPrmVal(), 
										NTCSTS_PREFAILD, Rte_Prm_GateDrv1CtrlNtcNr0x065FailStep_Val() );
	}
	else
	{
		*Rte_Pim_Ivtr1BootstrpSplyFltPrmVal() = 0U;
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X065, *Rte_Pim_Ivtr1BootstrpSplyFltPrmVal(), 
										NTCSTS_PREPASSD, Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val() );
	}
	
	
	return GenGateDrvFlt_Cnt_T_logl;
	
}


/**********************************************************************************************************************
* Name:        GateDrvDetermineGenericFlt
* Description: Gate drive determine generic fault. Returns TRUE if fault present, else return FALSE.
* Inputs:      None
* Outputs:     GenGateDrvFlt_Cnt_T_logl
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv1Ctrl_CODE) GateDrvDetermineGenericFlt( uint16 GateDrvAllSts_Cnt_T_u16)
{
	
	VAR(boolean,  AUTOMATIC)  GenGateDrvFlt_Cnt_T_logl;
	
	GenGateDrvFlt_Cnt_T_logl   = FALSE;

	
	/*** --------------------------------------------------------------------------- ***/
	/*** ---------------- START: Determine General Gate Drive Fault ---------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	if( (GateDrvAllSts_Cnt_T_u16 & 0x0800U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | (uint8)(2U); 
	}
	/*** --------------------------------------------------------------------------- ***/
	/*** ----------------   END: Determine General Gate Drive Fault ---------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	
	
	
	/*** --------------------------------------------------------------------------- ***/
	/*** ------------------- START: Determine Serial Comm Fault -------------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	if( (GateDrvAllSts_Cnt_T_u16 & 0x1000U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | (uint8)(8U); 
	}
	/*** --------------------------------------------------------------------------- ***/
	/*** -------------------   END: Determine Serial Comm Fault -------------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	
	
	
	/*** --------------------------------------------------------------------------- ***/
	/*** ------------------- START: Determine Temperature Fault -------------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	if( (GateDrvAllSts_Cnt_T_u16 & 0x0400U) != 0U )  
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | 1U; 
	}
	/*** --------------------------------------------------------------------------- ***/
	/*** -------------------   END: Determine Temperature Fault -------------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	
	
	
	/*** --------------------------------------------------------------------------- ***/
	/*** ------------- START: Determine Gate Drv VBB Pwr Supply Fault -------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	if( ((*Rte_Pim_GateDrv1StsVal()) & 0x0100U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | (uint8)(4U); 
	}
	/*** --------------------------------------------------------------------------- ***/
	/*** -------------   END: Determine Gate Drv VBB Pwr Supply Fault -------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	
	
	
	/*** --------------------------------------------------------------------------- ***/
	/*** ------------- START: Determine OverCurrent & Open Load Fault -------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	if( ((*Rte_Pim_GateDrv1StsVal()) & 0x0008U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | (uint8)(16U); 
	}
	/*** --------------------------------------------------------------------------- ***/
	/*** -------------   END: Determine OverCurrent & Open Load Fault -------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	
	
	
	/*** --------------------------------------------------------------------------- ***/
	/*** ---------------- START: Determine VGS Under Voltage Fault ----------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	if( ((*Rte_Pim_GateDrv1StsVal()) & 0x0002U) != 0U )  
	{	/* GSU Flt Active */
		
		GenGateDrvFlt_Cnt_T_logl = TRUE;
		GateDrvDetermineVgsUvFlt();
	}
	/*** --------------------------------------------------------------------------- ***/
	/*** ----------------   END: Determine VGS Under Voltage Fault ----------------- ***/
	/*** --------------------------------------------------------------------------- ***/
	
	return GenGateDrvFlt_Cnt_T_logl;
	
}

/**********************************************************************************************************************
* Name:        GateDrvDetermineVgsUvFlt
* Description: Gate drive determine VGS Undervolatge fault. Returns TRUE if fault present, else return FALSE.
* Inputs:      None
* Outputs:     GenGateDrvFlt_Cnt_T_logl
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv0Ctrl_CODE) GateDrvDetermineVgsUvFlt( void )
{
	VAR(boolean,  AUTOMATIC)  UpperPhaseUVFlt_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  LowerPhaseUVFlt_Cnt_T_logl;
	
	UpperPhaseUVFlt_Cnt_T_logl = FALSE;
	LowerPhaseUVFlt_Cnt_T_logl = FALSE;	
		
	if( ((*Rte_Pim_GateDrv1Diag0Val()) & 0x002AU) != 0U )
	{
		UpperPhaseUVFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | (uint8)(32U); 
	}
	
	if( ((*Rte_Pim_GateDrv1Diag0Val()) & 0x0015U) != 0U )
	{
		LowerPhaseUVFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | (uint8)(64U); 
	}
	
	if( (UpperPhaseUVFlt_Cnt_T_logl == FALSE) && (LowerPhaseUVFlt_Cnt_T_logl == FALSE) )
	{	/* Trap Gate Drv Flt - No Diag Bits set */
		*Rte_Pim_Ivtr1GenericFltPrmVal() = *Rte_Pim_Ivtr1GenericFltPrmVal() | (uint8)(2U); 
	}

}

#define GateDrv1Ctrl_STOP_SEC_CODE
#include "GateDrv1Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
