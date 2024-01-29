/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AssiPahFwl.c
 *     SW-C Type:  AssiPahFwl
 *  Generated at:  Tue Feb  9 14:25:40 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AssiPahFwl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : AssiPahFwl.c
* Module Description: This function sums and bounds motor torque commands from system functions whose primary input is handwheel torque
*				 After summation, output is limited when the signals low-frequency content exceeds calibrated boundaries
*				 If undesired behavior persists, the signal-limiting strategy is replaced with implementation of a simple default 
*				assist table lookup.Switching limiter to default table occurs via a debounce logic.  
*				The function also outputs a scale factor for the application of additional damping.
* Project           : CBD 
* Author            : Sarika Natu (KPIT Technologies)
***********************************************************************************************************************
* Version Control:
* %version          : 1%
* %derived_by       : fz9hxm%
*----------------------------------------------------------------------------------------------------------------------
* Date    	    Rev   Author         Change Description                                                    SCR #
* --------------- -------  --------  --------------------------------------------------------------------   ----------
* 02/03/16       1    SN(KPIT)   Initial implementation  of SF034A        								EA4#3608   
* 02/15/16       2    BG(KPIT)   Added Misra violation 16.10 and used the macro NODEBSTEP_CNT_U16		EA4#3608                                           
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

  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  s4p11
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  u8p8
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u9p7
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_AssiPahFwl.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "NxtrMath.h"
#include "SysGlbPrm.h"
#include "NxtrFil.h"
#include "ArchGlbPrm.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type 
								for code readability and to allow use of "sizeof". */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for [Rte_Read, Rte_Write]*/								
							
/********************************************* Embedded Local Constants **********************************************/
#define ASSIPAHLIMRACTVLOLIM_ULS_F32 	0.0F
#define ASSIPAHLIMRACTVHILIM_ULS_F32	1.0F
#define BASASSIREACHED_CNT_U08			2U
#define HIFRQASSIREACHED_CNT_U08		1U
#define NODEBSTEP_CNT_U16 65535U

#define PrmAssiPahFwlVehSpd_u9p7  (*(const Ary1D_u9p7_12 *) Rte_Prm_AssiPahFwlVehSpd_Ary1D())
#define PrmAssiPahFwlUpprLimX_s4p11  (*(const Ary2D_s4p11_12_11 *) Rte_Prm_AssiPahFwlUpprLimX_Ary2D())
#define PrmAssiPahFwlDftAssiX_u8p8  (*(const Ary1D_u8p8_20 *) Rte_Prm_AssiPahFwlDftAssiX_Ary1D())
#define PrmAssiPahFwlDftAssiY_s4p11  (*(const Ary1D_s4p11_20 *) Rte_Prm_AssiPahFwlDftAssiY_Ary1D()) 

/******************************************** Local Function Prototypes **********************************************/
static FUNC(float32, AssiPahFwl_CODE) Dynamic_Assi_Boundary(uint16 VehSpd_Kph_T_u9p7, float32 HwTq_HwNwtMtr_T_f32,
															float32 LoFrqInp_MotNwtMtr_T_f32,
															P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) LowrBndLpFil_MotNwtMtr_T_f32,
															P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) UpprBndLpFil_MotNwtMtr_T_f32);

static FUNC(float32, AssiPahFwl_CODE) Base_Assi_Boundary(float32 HwTrq_HwNwtMtr_T_f32, uint16 VehSpd_Kph_T_u9p7, float32 AssiCmdBas_MotNwtMtr_T_f32,
														 P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) BasAssiLowrBnd_MotNwtMtr_T_f32,
														 P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) BasAssiUpprBnd_MotNwtMtr_T_f32);

static FUNC(boolean, AssiPahFwl_CODE) Det_Boundary_Lim(float32 AssiCmdBas_MotNwtMtr_T_f32,
													   float32 BasAssiUpprBnd_MotNwtMtr_T_f32, float32 BasAssiLowrBnd_MotNwtMtr_T_f32,
													   float32 LowrBndLpFil_MotNwtMtr_T_f32, float32 UpprBndLpFil_MotNwtMtr_T_f32,
													   float32 LoFrqInp_MotNwtMtr_T_f32, 
													   P2VAR(boolean, AUTOMATIC, AssiPahFwl_VAR)HiFrqOverBnd_MotNwtMtr_T_logl,
													   P2VAR(boolean, AUTOMATIC, AssiPahFwl_VAR)BasAssiOverBnd_MotNwtMtr_T_logl);
											
static FUNC(float32, AssiPahFwl_CODE) Assist_Recovery_Cond(float32 AssiCmdBas_MotNwtMtr_T_f32, float32 DftAssi_MotNwtMtr_T_f32,
														   boolean AssiFwlFailSts_Cnt_T_logl, P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR)AssiPahLimrActv_Uls_T_f32,
														   float32 SumInp_MotNwtMtr_T_f32, float32 BasAssiLimd_MotNwtMtr_T_f32, float32 HiFrqInp_MotNwtMtr_T_f32,
									                       float32 HiFrqAssiLimd_MotNwtMtr_T_f32, boolean BasAssiOverBnd_MotNwtMtr_T_logl,
									                       boolean HiFrqOverBnd_MotNwtMtr_T_logl);
									
static FUNC(void, AssiPahFwl_CODE) Set_Faults(boolean HiFrqOverBnd_MotNwtMtr_T_logl, boolean BasAssiOverBnd_MotNwtMtr_T_logl);		
									
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
 * s4p11: Integer in interval [-32768...32767]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Enumeration Types:
 * ==================
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
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 * Array Types:
 * ============
 * Ary1D_s4p11_11: Array with 11 element(s) of type s4p11
 * Ary1D_s4p11_20: Array with 20 element(s) of type s4p11
 * Ary1D_u8p8_20: Array with 20 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_s4p11_12_11: Array with 12 element(s) of type Ary1D_s4p11_11
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_CombdAssiPrev(void)
 *   float32 *Rte_Pim_dAssiPahFwlActvRaw(void)
 *   float32 *Rte_Pim_dAssiPahFwlBasAssiLimd(void)
 *   float32 *Rte_Pim_dAssiPahFwlBasAssiLowrLim(void)
 *   float32 *Rte_Pim_dAssiPahFwlBasAssiUpprLim(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqCmdHpPah(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqCmdLpPah(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqLpLimd(void)
 *   float32 *Rte_Pim_dAssiPahFwlSumInp(void)
 *   boolean *Rte_Pim_AssiPrfmncPrev(void)
 *   boolean *Rte_Pim_dAssiPahFwlBasAssiCmdOverLim(void)
 *   boolean *Rte_Pim_dAssiPahFwlHiFrqCmdOverLim(void)
 *   FilLpRec1 *Rte_Pim_FwlActvLpFilStVari(void)
 *   FilLpRec1 *Rte_Pim_HiFrqCmdLpFilStVari(void)
 *   FilLpRec1 *Rte_Pim_LowrLimLpFilStVari(void)
 *   FilLpRec1 *Rte_Pim_UpprLimLpFilStVari(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val(void)
 *   float32 Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val(void)
 *   float32 Rte_Prm_AssiPahFwlHysCmpLim_Val(void)
 *   float32 Rte_Prm_AssiPahFwlRestoreThd_Val(void)
 *   uint16 Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val(void)
 *   uint16 Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val(void)
 *   uint16 Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val(void)
 *   uint16 Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val(void)
 *   boolean Rte_Prm_AssiPahFwlDiRcvr_Logl(void)
 *   u8p8 *Rte_Prm_AssiPahFwlDftAssiX_Ary1D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlDftAssiY_Ary1D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlUpprLimX_Ary2D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlUpprLimY_Ary2D(void)
 *   u9p7 *Rte_Prm_AssiPahFwlVehSpd_Ary1D(void)
 *
 *********************************************************************************************************************/


#define AssiPahFwl_START_SEC_CODE
#include "AssiPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPahFwlInit1
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

FUNC(void, AssiPahFwl_CODE) AssiPahFwlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiPahFwlInit1
 *********************************************************************************************************************/
	/*Ntc initialization*/
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0C9, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D2, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D3, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
	
	/*Low pass Filter initialization*/
	FilLpInit(0.0F,	Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HiFrqCmdLpFilStVari());
	FilLpInit(0.0F,	Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_LowrLimLpFilStVari());
	FilLpInit(0.0F,	Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_UpprLimLpFilStVari());
	FilLpInit(0.0F,	Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_FwlActvLpFilStVari());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPahFwlPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiHiFrqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiLnrGainEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HysCmpCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdSum_Val(float32 data)
 *   Std_ReturnType Rte_Write_AssiPahLimrActv_Val(float32 data)
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

FUNC(void, AssiPahFwl_CODE) AssiPahFwlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiPahFwlPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) AssiCmdBas_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AssiHiFrqCmd_MotNwtMtr_T_f32;
	VAR(boolean, AUTOMATIC) AssiLnrGainEna_Cnt_T_logl;
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HwTqOvrl_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HysCmpCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(MfgEnaSt1, AUTOMATIC) MfgEnaSt_Cnt_T_enum;
	VAR(float32, AUTOMATIC) SumInp_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AssiCmdSum_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AssiPahLimrActv_Uls_T_f32;
	VAR(float32, AUTOMATIC) LoFrqInp_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HiFrqInp_MotNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC) AbsltHwTrq_HwNwtMtr_T_u8p8;
	VAR(sint16, AUTOMATIC) DftAssi_HwNwtMtr_T_s4p11;
	VAR(float32, AUTOMATIC) HwTrq_HwNwtMtr_T_f32;
	VAR(sint8, AUTOMATIC) SignHwTq_HwNwtMtr_T_s08;
	VAR(float32, AUTOMATIC) DftAssi_MotNwtMtr_T_f32;
	VAR(boolean, AUTOMATIC) AssiFwlFailSts_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) BasAssiOverBnd_MotNwtMtr_T_logl;
	VAR(boolean, AUTOMATIC) HiFrqOverBnd_MotNwtMtr_T_logl;
	VAR(float32, AUTOMATIC) HiFrqAssiLimd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) BasAssiLimd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) LowrBndLpFil_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) UpprBndLpFil_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) BasAssiLowrBnd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) BasAssiUpprBnd_MotNwtMtr_T_f32;
	
	/*Reading inputs from RTE*/
	(void)Rte_Read_AssiCmdBas_Val(&AssiCmdBas_MotNwtMtr_T_f32);
	(void)Rte_Read_AssiHiFrqCmd_Val(&AssiHiFrqCmd_MotNwtMtr_T_f32);
	(void)Rte_Read_AssiLnrGainEna_Logl(&AssiLnrGainEna_Cnt_T_logl);
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	(void)Rte_Read_HwTqOvrl_Val(&HwTqOvrl_HwNwtMtr_T_f32);
	(void)Rte_Read_HysCmpCmd_Val(&HysCmpCmd_MotNwtMtr_T_f32);
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
	(void)Rte_Read_MfgEnaSt_Val(&MfgEnaSt_Cnt_T_enum);

	/*Limit, and Sum Incoming Signals*/
	SumInp_MotNwtMtr_T_f32 = Lim_f32(HysCmpCmd_MotNwtMtr_T_f32, -Rte_Prm_AssiPahFwlHysCmpLim_Val(), Rte_Prm_AssiPahFwlHysCmpLim_Val());
	SumInp_MotNwtMtr_T_f32 = SumInp_MotNwtMtr_T_f32 + AssiHiFrqCmd_MotNwtMtr_T_f32;
	*Rte_Pim_dAssiPahFwlSumInp() = SumInp_MotNwtMtr_T_f32;
	
	if((TRUE == AssiLnrGainEna_Cnt_T_logl) && (MFGENAST_PRDNMOD != MfgEnaSt_Cnt_T_enum))
	{
		/*Defeat_Firewall subsystem implementation*/
		AssiCmdSum_MotNwtMtr_T_f32 = SumInp_MotNwtMtr_T_f32 + AssiCmdBas_MotNwtMtr_T_f32;
		AssiPahLimrActv_Uls_T_f32 = 0.0F;
	}
	else
	{
		/*Implementation of the subsystem 'Normal_Firewall_Operation' */
		
		/*Split Assist Command dynamics into LowPass and HighPass Components Low Frequency component must pass thru safety boundary.  
		High Frequency Path is calculated by subtracting the low pass filtered command signal*/
		LoFrqInp_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(SumInp_MotNwtMtr_T_f32, Rte_Pim_HiFrqCmdLpFilStVari());
		*Rte_Pim_dAssiPahFwlHiFrqCmdLpPah() = LoFrqInp_MotNwtMtr_T_f32;
		
		HiFrqInp_MotNwtMtr_T_f32 = SumInp_MotNwtMtr_T_f32 - LoFrqInp_MotNwtMtr_T_f32;
		*Rte_Pim_dAssiPahFwlHiFrqCmdHpPah() = HiFrqInp_MotNwtMtr_T_f32;
		
		/*Apply Boundaries to the Dynamic Assist Commands Low Frequency Content, and Calculate Default Assist*/
		
		VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
		
     	/*Pass Low Freq Assist Command content thru Boundary Limiter (filter dynamics involved so we need to filter to phase match the boundary outputs)*/
		/*implementation of subsystems 'Determine HiFreqAsst Boundaries' and 'Low pass filter boundaries'*/
		HiFrqAssiLimd_MotNwtMtr_T_f32 = Dynamic_Assi_Boundary(VehSpd_Kph_T_u9p7, HwTq_HwNwtMtr_T_f32, LoFrqInp_MotNwtMtr_T_f32, 
															  &LowrBndLpFil_MotNwtMtr_T_f32, &UpprBndLpFil_MotNwtMtr_T_f32);
		
		/*Calculate the Default Assist Command*/
		SignHwTq_HwNwtMtr_T_s08 = Sign_s08_f32(HwTq_HwNwtMtr_T_f32);
		
		AbsltHwTrq_HwNwtMtr_T_u8p8 = FloatToFixd_u16_f32(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32), NXTRFIXDPT_FLOATTOP8_ULS_F32); 
		DftAssi_HwNwtMtr_T_s4p11 = LnrIntrpn_s16_u16VariXs16VariY(Rte_Prm_AssiPahFwlDftAssiX_Ary1D(),			
                                                                  Rte_Prm_AssiPahFwlDftAssiY_Ary1D(),
                                                                  (uint16) TblSize_m(PrmAssiPahFwlDftAssiX_u8p8),
                                                                  AbsltHwTrq_HwNwtMtr_T_u8p8);
	    DftAssi_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(DftAssi_HwNwtMtr_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
		
		DftAssi_MotNwtMtr_T_f32 = (float32)SignHwTq_HwNwtMtr_T_s08 * DftAssi_MotNwtMtr_T_f32;
		
		/*Apply Boundaries to the Base Assist Command*/
		/*Pass Base Assist Command thru Boundary Limiter (no filter dynamics involved so no need to filter to phase match boundary outputs)*/
		HwTrq_HwNwtMtr_T_f32 = HwTqOvrl_HwNwtMtr_T_f32 + HwTq_HwNwtMtr_T_f32;
		
		/*Implementation of the subsystem 'Determine_BaseAsst_Boundaries'*/
		BasAssiLimd_MotNwtMtr_T_f32 = Base_Assi_Boundary(HwTrq_HwNwtMtr_T_f32, VehSpd_Kph_T_u9p7, AssiCmdBas_MotNwtMtr_T_f32,
														&BasAssiLowrBnd_MotNwtMtr_T_f32, &BasAssiUpprBnd_MotNwtMtr_T_f32);
		
		/*Check both command paths for reaching boundary limits, if so begin debounce counters*/
		AssiFwlFailSts_Cnt_T_logl = Det_Boundary_Lim(AssiCmdBas_MotNwtMtr_T_f32, BasAssiUpprBnd_MotNwtMtr_T_f32, 
													 BasAssiLowrBnd_MotNwtMtr_T_f32, LowrBndLpFil_MotNwtMtr_T_f32,
													 UpprBndLpFil_MotNwtMtr_T_f32, LoFrqInp_MotNwtMtr_T_f32, 
													 &HiFrqOverBnd_MotNwtMtr_T_logl, &BasAssiOverBnd_MotNwtMtr_T_logl);
		
		/*Check Input commands vs. Fwl Output command for Assist Recovery Conditions */
		AssiCmdSum_MotNwtMtr_T_f32 = Assist_Recovery_Cond(AssiCmdBas_MotNwtMtr_T_f32, DftAssi_MotNwtMtr_T_f32, 
														  AssiFwlFailSts_Cnt_T_logl, &AssiPahLimrActv_Uls_T_f32, SumInp_MotNwtMtr_T_f32,
														  BasAssiLimd_MotNwtMtr_T_f32, HiFrqInp_MotNwtMtr_T_f32, HiFrqAssiLimd_MotNwtMtr_T_f32, 
														  BasAssiOverBnd_MotNwtMtr_T_logl, HiFrqOverBnd_MotNwtMtr_T_logl);
								
		/*Set_Faults*/
		Set_Faults(HiFrqOverBnd_MotNwtMtr_T_logl, BasAssiOverBnd_MotNwtMtr_T_logl);
	}
	
	/*Limiting the outputs*/
	AssiCmdSum_MotNwtMtr_T_f32 = Lim_f32(AssiCmdSum_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
	AssiPahLimrActv_Uls_T_f32 = Lim_f32(AssiPahLimrActv_Uls_T_f32, ASSIPAHLIMRACTVLOLIM_ULS_F32, ASSIPAHLIMRACTVHILIM_ULS_F32);
	
	/*Writing outputs to RTE*/
	(void)Rte_Write_AssiCmdSum_Val(AssiCmdSum_MotNwtMtr_T_f32);
	(void)Rte_Write_AssiPahLimrActv_Val(AssiPahLimrActv_Uls_T_f32);
	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AssiPahFwl_STOP_SEC_CODE
#include "AssiPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*****************************************************************************************************************
  * Name        	:   Dynamic_Assi_Boundary
  * Description 	:   Determine HiFreqAsst Boundaries subsystem implementation
  * Inputs      	:   VehSpd_Kph_T_u9p7, HwTq_HwNwtMtr_T_f32, LoFrqInp_MotNwtMtr_T_f32 
  * Outputs    		:   LowrBndLpFil_MotNwtMtr_T_f32, UpprBndLpFil_MotNwtMtr_T_f32
  * Returns    		:   HiFrqAssiLimd_MotNwtMtr_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(float32, AssiPahFwl_CODE) Dynamic_Assi_Boundary(uint16 VehSpd_Kph_T_u9p7, float32 HwTq_HwNwtMtr_T_f32,
														   float32 LoFrqInp_MotNwtMtr_T_f32,
														   P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) LowrBndLpFil_MotNwtMtr_T_f32,
														   P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) UpprBndLpFil_MotNwtMtr_T_f32)
{
	VAR(sint16, AUTOMATIC) HwTq_HwNwtMtr_T_s4p11;
	VAR(sint16, AUTOMATIC) LowrBnd_MotNwtMtr_T_s4p11;
	VAR(float32, AUTOMATIC) BasAssiLowrBnd_MotNwtMtr_T_f32;	
	VAR(sint16, AUTOMATIC) UpprBnd_MotNwtMtr_T_s4p11;
	VAR(float32, AUTOMATIC) BasAssiUpprBnd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HiFrqAssiLimd_MotNwtMtr_T_f32;


	/*Determine HiFreqAsst Boundaries subsystem implementation*/
	HwTq_HwNwtMtr_T_s4p11 = FloatToFixd_s16_f32(HwTq_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP11_ULS_F32);
	
	LowrBnd_MotNwtMtr_T_s4p11 = BilnrIntrpnWithRound_s16_s16MplXs16MplY(VehSpd_Kph_T_u9p7,
																		-HwTq_HwNwtMtr_T_s4p11,
																		Rte_Prm_AssiPahFwlVehSpd_Ary1D(),
																		(uint16) TblSize_m(PrmAssiPahFwlVehSpd_u9p7),
																		Rte_Prm_AssiPahFwlUpprLimX_Ary2D(),
																		Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D(),
																		(uint16) TblSize_m(PrmAssiPahFwlUpprLimX_s4p11[0]));
	BasAssiLowrBnd_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(-LowrBnd_MotNwtMtr_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
	
	UpprBnd_MotNwtMtr_T_s4p11 = BilnrIntrpnWithRound_s16_s16MplXs16MplY(VehSpd_Kph_T_u9p7,
																		HwTq_HwNwtMtr_T_s4p11,
																		Rte_Prm_AssiPahFwlVehSpd_Ary1D(),
																		(uint16) TblSize_m(PrmAssiPahFwlVehSpd_u9p7),
																		Rte_Prm_AssiPahFwlUpprLimX_Ary2D(),
																		Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D(),
																		(uint16) TblSize_m(PrmAssiPahFwlUpprLimX_s4p11[0]));
	BasAssiUpprBnd_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(UpprBnd_MotNwtMtr_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
	
	/*Low Pass Filter Boundaries subsystem implementation*/
	*LowrBndLpFil_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(BasAssiLowrBnd_MotNwtMtr_T_f32, Rte_Pim_LowrLimLpFilStVari());
	*UpprBndLpFil_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(BasAssiUpprBnd_MotNwtMtr_T_f32, Rte_Pim_UpprLimLpFilStVari());
	
	*Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild() = *LowrBndLpFil_MotNwtMtr_T_f32;
	*Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild() = *UpprBndLpFil_MotNwtMtr_T_f32;
	
	HiFrqAssiLimd_MotNwtMtr_T_f32 = Lim_f32(LoFrqInp_MotNwtMtr_T_f32, *LowrBndLpFil_MotNwtMtr_T_f32, *UpprBndLpFil_MotNwtMtr_T_f32);
	*Rte_Pim_dAssiPahFwlHiFrqLpLimd() = HiFrqAssiLimd_MotNwtMtr_T_f32;
	
	return HiFrqAssiLimd_MotNwtMtr_T_f32;
}
 /*****************************************************************************************************************
  * Name        	:   Base_Assi_Boundary
  * Description 	:   Determine_BaseAsst_Boundaries subsystem implementation
  * Inputs      	:   HwTrq_HwNwtMtr_T_f32, VehSpd_Kph_T_u9p7, AssiCmdBas_MotNwtMtr_T_f32
  * Outputs    		:   BasAssiLowrBnd_MotNwtMtr_T_f32, BasAssiUpprBnd_MotNwtMtr_T_f32
  * Returns    		:   BasAssiLimd_MotNwtMtr_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(float32, AssiPahFwl_CODE) Base_Assi_Boundary(float32 HwTrq_HwNwtMtr_T_f32, uint16 VehSpd_Kph_T_u9p7, float32 AssiCmdBas_MotNwtMtr_T_f32,
														 P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) BasAssiLowrBnd_MotNwtMtr_T_f32,
														 P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR) BasAssiUpprBnd_MotNwtMtr_T_f32)
{
	VAR(sint16, AUTOMATIC) HwTrq_HwNwtMtr_T_s4p11;
	VAR(sint16, AUTOMATIC) LowrBnd_MotNwtMtr_T_s4p11;
	VAR(sint16, AUTOMATIC) UpprBnd_MotNwtMtr_T_s4p11;
	VAR(float32, AUTOMATIC) BasAssiLimd_MotNwtMtr_T_f32;
	
	/* Determine_BaseAsst_Boundaries subsystem implementation*/
	HwTrq_HwNwtMtr_T_s4p11 = FloatToFixd_s16_f32(HwTrq_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP11_ULS_F32);
	LowrBnd_MotNwtMtr_T_s4p11 = BilnrIntrpnWithRound_s16_s16MplXs16MplY(VehSpd_Kph_T_u9p7,
																		-HwTrq_HwNwtMtr_T_s4p11,
																		Rte_Prm_AssiPahFwlVehSpd_Ary1D(),
																		(uint16) TblSize_m(PrmAssiPahFwlVehSpd_u9p7),
																		Rte_Prm_AssiPahFwlUpprLimX_Ary2D(),
																		Rte_Prm_AssiPahFwlUpprLimY_Ary2D(),
																		(uint16) TblSize_m(PrmAssiPahFwlUpprLimX_s4p11[0]));
	
	
	*BasAssiLowrBnd_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(-LowrBnd_MotNwtMtr_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
	
	UpprBnd_MotNwtMtr_T_s4p11 = BilnrIntrpnWithRound_s16_s16MplXs16MplY(VehSpd_Kph_T_u9p7,
																		HwTrq_HwNwtMtr_T_s4p11,
																		Rte_Prm_AssiPahFwlVehSpd_Ary1D(),
																		(uint16) TblSize_m(PrmAssiPahFwlVehSpd_u9p7),
																		Rte_Prm_AssiPahFwlUpprLimX_Ary2D(),
																		Rte_Prm_AssiPahFwlUpprLimY_Ary2D(),
																		(uint16) TblSize_m(PrmAssiPahFwlUpprLimX_s4p11[0]));
	
	
	*BasAssiUpprBnd_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(UpprBnd_MotNwtMtr_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
	
	*Rte_Pim_dAssiPahFwlBasAssiLowrLim() = *BasAssiLowrBnd_MotNwtMtr_T_f32;
	*Rte_Pim_dAssiPahFwlBasAssiUpprLim() = *BasAssiUpprBnd_MotNwtMtr_T_f32;
	
	BasAssiLimd_MotNwtMtr_T_f32 = Lim_f32(AssiCmdBas_MotNwtMtr_T_f32, *BasAssiLowrBnd_MotNwtMtr_T_f32, *BasAssiUpprBnd_MotNwtMtr_T_f32);
	*Rte_Pim_dAssiPahFwlBasAssiLimd() = BasAssiLimd_MotNwtMtr_T_f32;
	return BasAssiLimd_MotNwtMtr_T_f32;
}

/*****************************************************************************************************************
  * Name        	:   Det_Boundary_Lim
  * Description 	:   Check both command paths for reaching boundary limits, if so begin debounce counters
  * Inputs      	:   AssiCmdBas_MotNwtMtr_T_f32, BasAssiUpprBnd_MotNwtMtr_T_f32, BasAssiLowrBnd_MotNwtMtr_T_f32, 
						LowrBndLpFil_MotNwtMtr_T_f32, UpprBndLpFil_MotNwtMtr_T_f32, LoFrqInp_MotNwtMtr_T_f32  		
  * Outputs    		:   HiFrqOverBnd_MotNwtMtr_T_logl, BasAssiOverBnd_MotNwtMtr_T_logl
  * Returns    		:   AssiFwlFailSts_Cnt_T_logl
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(boolean, AssiPahFwl_CODE) Det_Boundary_Lim(float32 AssiCmdBas_MotNwtMtr_T_f32,
													   float32 BasAssiUpprBnd_MotNwtMtr_T_f32, float32 BasAssiLowrBnd_MotNwtMtr_T_f32,
													   float32 LowrBndLpFil_MotNwtMtr_T_f32, float32 UpprBndLpFil_MotNwtMtr_T_f32,
													   float32 LoFrqInp_MotNwtMtr_T_f32, 
													   P2VAR(boolean, AUTOMATIC, AssiPahFwl_VAR)HiFrqOverBnd_MotNwtMtr_T_logl,
													   P2VAR(boolean, AUTOMATIC, AssiPahFwl_VAR)BasAssiOverBnd_MotNwtMtr_T_logl)
{
	VAR(boolean, AUTOMATIC) BasAssiFwlFailSts_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) HiFrqAssiFwlFailSts_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) AssiFwlFailSts_Cnt_T_logl;
	VAR(SigQlfr1, AUTOMATIC) SigQlfr1_Cnt_T_enum;
	
	/*Check both command paths for reaching boundary limits, if so begin debounce counters*/
	if((AssiCmdBas_MotNwtMtr_T_f32 > BasAssiUpprBnd_MotNwtMtr_T_f32) || (AssiCmdBas_MotNwtMtr_T_f32 < BasAssiLowrBnd_MotNwtMtr_T_f32))
	{
		*BasAssiOverBnd_MotNwtMtr_T_logl = TRUE;
		/*Debounce_BaseAssist_Overboundary - Merged to reduce cyclomatic complexity*/
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D3, 0U, NTCSTS_PREFAILD, Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val());
	}
	else
	{
		*BasAssiOverBnd_MotNwtMtr_T_logl = FALSE;
		/*Debounce_BaseAssist_Overboundary - Merged to reduce cyclomatic complexity*/
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D3, 0U, NTCSTS_PREPASSD, Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val());
	}
	*Rte_Pim_dAssiPahFwlBasAssiCmdOverLim() = *BasAssiOverBnd_MotNwtMtr_T_logl;
	
	(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0D3, &SigQlfr1_Cnt_T_enum);
	
	if(SIGQLFR_FAILD == SigQlfr1_Cnt_T_enum)
	{
		BasAssiFwlFailSts_Cnt_T_logl = TRUE;
	}
	else
	{
		BasAssiFwlFailSts_Cnt_T_logl = FALSE;
	}
	
	/*Debounce_BaseAssist_Overboundary*/
	if((LoFrqInp_MotNwtMtr_T_f32 > UpprBndLpFil_MotNwtMtr_T_f32) || 
						(LoFrqInp_MotNwtMtr_T_f32 < LowrBndLpFil_MotNwtMtr_T_f32))
	{
		*HiFrqOverBnd_MotNwtMtr_T_logl = TRUE;
		/*Debounce_HiFreqAsst_Overboundary - Merged to reduce cyclomatic complexity*/
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D2, 0U, NTCSTS_PREFAILD, Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val());
	}
	else
	{
		*HiFrqOverBnd_MotNwtMtr_T_logl = FALSE;
		/*Debounce_HiFreqAsst_Overboundary - Merged to reduce cyclomatic complexity*/
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D2, 0U, NTCSTS_PREPASSD, Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val());
	}
	*Rte_Pim_dAssiPahFwlHiFrqCmdOverLim() = *HiFrqOverBnd_MotNwtMtr_T_logl;
	
	(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0D2, &SigQlfr1_Cnt_T_enum);
	
	if(SIGQLFR_FAILD == SigQlfr1_Cnt_T_enum)
	{
		HiFrqAssiFwlFailSts_Cnt_T_logl = TRUE;
	}
	else
	{
		HiFrqAssiFwlFailSts_Cnt_T_logl = FALSE;
	}
	
	if((TRUE == BasAssiFwlFailSts_Cnt_T_logl) || (TRUE == HiFrqAssiFwlFailSts_Cnt_T_logl))
	{
		AssiFwlFailSts_Cnt_T_logl = TRUE;
	}
	else
	{
		AssiFwlFailSts_Cnt_T_logl = FALSE;
	}
		
	return AssiFwlFailSts_Cnt_T_logl;
}

/*****************************************************************************************************************
  * Name        	:   Assist_Recovery_Cond
  * Description 	:   Check Input commands vs. Fwl Output command for Assist Recovery Conditions 
  * Inputs      	:   AssiCmdBas_MotNwtMtr_T_f32, DftAssi_MotNwtMtr_T_f32, AssiFwlFailSts_Cnt_T_logl		
  * Outputs    		:   AssiPahLimrActv_Uls_T_f32
  * Returns    		:   CombdAssiDft_MotNwtMtr_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
 static FUNC(float32, AssiPahFwl_CODE) Assist_Recovery_Cond(float32 AssiCmdBas_MotNwtMtr_T_f32, float32 DftAssi_MotNwtMtr_T_f32,
															boolean AssiFwlFailSts_Cnt_T_logl, 
															P2VAR(float32, AUTOMATIC, AssiPahFwl_VAR)AssiPahLimrActv_Uls_T_f32,
															float32 SumInp_MotNwtMtr_T_f32, float32 BasAssiLimd_MotNwtMtr_T_f32, 
															float32 HiFrqInp_MotNwtMtr_T_f32,
															float32 HiFrqAssiLimd_MotNwtMtr_T_f32, boolean BasAssiOverBnd_MotNwtMtr_T_logl,
															boolean HiFrqOverBnd_MotNwtMtr_T_logl)
{
	VAR(boolean, AUTOMATIC) RestoreAssiFwlFailSts_Cnt_T_logl;
	VAR(float32, AUTOMATIC) CombdAssiPrst_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) CombdAssiDft_MotNwtMtr_T_f32;
	
	/*Check Input commands vs. Fwl Output command for Assist Recovery Conditions */
	CombdAssiPrst_MotNwtMtr_T_f32 = SumInp_MotNwtMtr_T_f32 + AssiCmdBas_MotNwtMtr_T_f32;
	CombdAssiPrst_MotNwtMtr_T_f32 = CombdAssiPrst_MotNwtMtr_T_f32 - (*Rte_Pim_CombdAssiPrev());
	CombdAssiPrst_MotNwtMtr_T_f32 = Abslt_f32_f32(CombdAssiPrst_MotNwtMtr_T_f32);
	
	if(((CombdAssiPrst_MotNwtMtr_T_f32 > (Rte_Prm_AssiPahFwlRestoreThd_Val())) || (TRUE == (Rte_Prm_AssiPahFwlDiRcvr_Logl()))) 
																			   && (TRUE == (*Rte_Pim_AssiPrfmncPrev())))
	{
		RestoreAssiFwlFailSts_Cnt_T_logl = TRUE;
	}
	else
	{
		RestoreAssiFwlFailSts_Cnt_T_logl = FALSE;
	}
	
	/*Bound Low-Freq Signal.  If Persistent, Switch to Default AssistDefeat_Firewall*/
	if((TRUE == AssiFwlFailSts_Cnt_T_logl) || (TRUE == RestoreAssiFwlFailSts_Cnt_T_logl))
	{
		/*Default_AssistDefeat_Firewall*/
		CombdAssiDft_MotNwtMtr_T_f32 = DftAssi_MotNwtMtr_T_f32;
		*AssiPahLimrActv_Uls_T_f32 = 0.0F;
		*Rte_Pim_AssiPrfmncPrev() = TRUE;
	}
	else
	{
		CombdAssiDft_MotNwtMtr_T_f32 = HiFrqInp_MotNwtMtr_T_f32 + HiFrqAssiLimd_MotNwtMtr_T_f32 + BasAssiLimd_MotNwtMtr_T_f32;
		if((TRUE == HiFrqOverBnd_MotNwtMtr_T_logl) || (TRUE == BasAssiOverBnd_MotNwtMtr_T_logl))
		{
			*AssiPahLimrActv_Uls_T_f32 = 1.0F;
		}
		else
		{
			*AssiPahLimrActv_Uls_T_f32 = 0.0F;
		}
		*Rte_Pim_AssiPrfmncPrev() = FALSE;
	}
	
	*Rte_Pim_CombdAssiPrev() = CombdAssiDft_MotNwtMtr_T_f32;
	*Rte_Pim_dAssiPahFwlActvRaw() = *AssiPahLimrActv_Uls_T_f32;
	*AssiPahLimrActv_Uls_T_f32 = FilLpUpdOutp_f32(*AssiPahLimrActv_Uls_T_f32, Rte_Pim_FwlActvLpFilStVari());
		
	return CombdAssiDft_MotNwtMtr_T_f32;
}
/*****************************************************************************************************************
  * Name        	:   Set_Faults
  * Description 	:   Set NTC to Failed based on input conditions 
  * Inputs      	:   HiFrqOverBnd_MotNwtMtr_T_logl, BasAssiOverBnd_MotNwtMtr_T_logl 		
  * Outputs    		:   None
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, AssiPahFwl_CODE) Set_Faults(boolean HiFrqOverBnd_MotNwtMtr_T_logl, boolean BasAssiOverBnd_MotNwtMtr_T_logl)
{
	VAR(uint8, AUTOMATIC) Bit0Sts_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Bit1Sts_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) NtcInfo_Cnt_T_u08;
	
	/*Set faults*/
	if((TRUE == HiFrqOverBnd_MotNwtMtr_T_logl) || (TRUE == BasAssiOverBnd_MotNwtMtr_T_logl))
	{
		if(TRUE == HiFrqOverBnd_MotNwtMtr_T_logl)
		{
			Bit0Sts_Cnt_T_u08 = HIFRQASSIREACHED_CNT_U08 * 1U;
		}
		else
		{
			Bit0Sts_Cnt_T_u08 = HIFRQASSIREACHED_CNT_U08 * 0U;
		}
		
		if(TRUE == BasAssiOverBnd_MotNwtMtr_T_logl)
		{
			Bit1Sts_Cnt_T_u08 = BASASSIREACHED_CNT_U08 * 1U;
		}
		else
		{
			Bit1Sts_Cnt_T_u08 = BASASSIREACHED_CNT_U08 * 0U;
		}
		
		NtcInfo_Cnt_T_u08 = Bit0Sts_Cnt_T_u08 + Bit1Sts_Cnt_T_u08;
		
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0C9, NtcInfo_Cnt_T_u08, NTCSTS_FAILD, 0U);
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
