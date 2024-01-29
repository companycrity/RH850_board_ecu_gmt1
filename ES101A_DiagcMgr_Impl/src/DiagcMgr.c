/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DiagcMgr.c
 *     SW-C Type:  DiagcMgr
 *  Generated at:  Tue Dec  6 12:14:49 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DiagcMgr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgr.c
* Module Description: Implementation of Diagnostic Manager FDD ES101A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           16 %
* %derived_by:        gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/13/15  1        SB         Initial Version                                                                 EA4#447
* 06/03/15  2        KMC        Temporary change -- PIMs and IRVs changed to module level variables             EA4#677
*                               Also corrected name of PrmDiagcMgrFltResp, added include of DiagcMgr.h,
*                               removed include of Std_Types.h 
* 08/13/15  3        KMC        Temporary/partial implementation of version 2.0.0 design -- add debounce        EA4#1292
*                               counters and fault response outputs for handwheel angle to version 1 
*                               implementation. Will not support multiple MPU design as well as other features.
* 08/08/15  4        SB         Partial Implementation of to ES101A_DiagcMgr_Design version 2                   EA4#1388
* 09/01/15  5        SB         Partial Implementation of to ES101A_DiagcMgr_Design version 2 - Added NvM       EA4#1241
* 09/03/15  6        SB         Corrected the limits on SysDiMotTqCmdSca                                        EA4#1241
* 09/30/15  7        SB         Fix Anomaly EA4#1632                                                            EA4#1771
* 10/20/15  8        SB         Fix Anomaly EA4#1906 - DiagcMgrIninCore_Oper() is updated to properly           EA4#2150
                                determine which application's info array to use when reading data from NVM 
* 02/26/16  9        SB         ES101A_DiagcMgr_Design version 2 implementation                                EA4#3421
* 04/19/16  10       SB         ES101A_DiagcMgr_Design version 3 implementation                                EA4#5110
* 06/20/16  11       SB         ES101A_DiagcMgr_Design version 4 implementation                                EA4#6251
* 08/30/16  12       SB         Updated to fix anomaly EA4#6663                                                EA4#6905
* 09/22/16  13       SB         Updated to fix anomaly EA4#7031, EA4#7495 and removed requirement mapping      EA4#7191, EA4#7594
* 10/04/16  14       SB         Updated to fix anomaly EA4#7857                                                EA4#7865
* 11/29/16  15       SB         Updated to fix anomalies EA4#8118 and EA4#8115                                 EA4#8250, EA34# 8662, EA4#8668
* 12/07/16  16       SB         Updates to SetRamBlock function call                                 		   EA4#8822
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

  NtcNrWithResd1
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

  s5p10
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s8p7
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  u6p10
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

#include "Rte_DiagcMgr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Dem.h"
#include "DiagcMgr.h"
#include "DiagcMgr_private.h"
#include "ElecGlbPrm.h"
#include "FltInj.h"
#include "NxtrDet.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
                                            type for code readability and to allow use of "sizeof" */                                           
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their 
                                            array type for code readability and to allow use of "sizeof" */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 13.7.1]: Boolean operations with invariant results are allowed when checking configurable
                                            array sizes in code conditionally compiled when DET is enabled. */                                          
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of Functions - 
                                                Dem_ClearDTC(), Det_ReportError() */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

    #define SIZEOFREADFLTARY_CNT_U08                20U 
    #define PimDiagcMgrNtcFltAry_NtcFltInfoRec2     (*(Ary1D_NtcFltInfoRec2_20 *)(Rte_Pim_DiagcMgrNtcFltAry()))
    #define PrmDiagcMgrFltResp_u32                  (*(const Ary1D_u32_512 *)(Rte_Prm_DiagcMgrFltResp_Ary1D()))  
    #define PimDtcIdxPrevSts_u08                    (*(Ary1D_u08_DiagcMgr1 *)(Rte_Pim_DtcIdxPrevSts())) 
    
     /* define SnpshtData PIM array to _M array */
    #define PimSnpshtDataAry_SnpshtDataRec1     (SnpshtDataAry_M)

    /* Move SnpshtData Nvm array to Global shared memory */
    #define GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED
    #include "MemMap.h"

    VAR(SnpshtDataRec1, DiagcMgr_CODE) SnpshtDataAry_M[8];

    #define GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #include "MemMap.h"


    static FUNC(void, DiagcMgr_CODE) ProcRampResp(uint16 NtcNr_Cnt_T_u16,
                                                  CONSTP2VAR(DiagcDataRec1, AUTOMATIC, DiagcMgr_CODE) DiagcData_T_rec,
                                                  CONSTP2VAR(DiagcDataRec1, AUTOMATIC, DiagcMgr_CODE) ProxySetNtcData_T_rec);
                                                  
    static FUNC(void, DiagcMgr_CODE) UpdSnpshtData( uint32 RegInBRAMDAT1_Cnt_T_u32, 
                                                    sint16 HwTq_Cnt_T_s5p10,
                                                    sint16 MotTqCmdMrfScad_Cnt_T_s5p10, 
                                                    uint32 IgnCntr_Cnt_T_u32, 
                                                    uint16 BrdgVltg_Cnt_T_u6p10, 
                                                    sint16 EcuTFild_Cnt_T_s8p7, 
                                                    NtcNr1 NtcNr_Cnt_T_u16, 
                                                    uint8  NtcStInfo_Cnt_T_u08, 
                                                    SysSt1 SysSt_Cnt_T_enum, 
                                                    uint16 VehSpd_Cnt_T_u9p7);                                            

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
 * s5p10: Integer in interval [-32768...32767]
 * s8p7: Integer in interval [-32768...32767]
 * u6p10: Integer in interval [0...65535]
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
 * NtcNrWithResd1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_RESD (0U)
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
 * Array Types:
 * ============
 * Ary1D_NtcFltInfoRec2_20: Array with 20 element(s) of type NtcFltInfoRec2
 * Ary1D_ReadFltInfoRec1_20: Array with 20 element(s) of type ReadFltInfoRec1
 * Ary1D_SnpshtDataRec1_8: Array with 8 element(s) of type SnpshtDataRec1
 * Ary1D_u32_512: Array with 512 element(s) of type uint32
 *
 * Record Types:
 * =============
 * DiagcDataRec1: Record with elements
 *   DiagcSts of type uint16
 *   ActvRampRate of type float32
 *   ActvMotTqCmdSca of type float32
 * NtcFltInfoRec2: Record with elements
 *   NtcNr of type NtcNrWithResd1
 *   AgiCntr of type uint8
 *   Sts of type uint8
 * ReadFltInfoRec1: Record with elements
 *   NtcNr of type NtcNrWithResd1
 *   AgiCntr of type uint8
 *   Sts of type uint8
 *   NtcStInfo of type uint8
 * SnpshtDataRec1: Record with elements
 *   MicroDiagcData of type uint32
 *   HwTq of type s5p10
 *   MotTq of type s5p10
 *   IgnCntr of type uint32
 *   BrdgVltg of type u6p10
 *   EcuT of type s8p7
 *   NtcNr of type uint16
 *   NtcStInfo of type uint8
 *   SysSt of type SysSt1
 *   VehSpd of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_DtcEnaSts(void)
 *   uint8 *Rte_Pim_ClrDiagcFlg(void)
 *   uint8 *Rte_Pim_PrevClrDtcFlg(void)
 *   NtcFltInfoRec2 *Rte_Pim_DiagcMgrNtcFltAry(void)
 *   uint8 *Rte_Pim_DtcIdxPrevSts(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 *Rte_Prm_DiagcMgrFltResp_Ary1D(void)
 *
 *********************************************************************************************************************/


#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrAllDiagc_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrAllDiagc>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ClrDiagcFlgProxy_Val(uint8 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrAllDiagc_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ClrAllDiagc_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrAllDiagc_Oper
 *********************************************************************************************************************/

    VAR(uint8, AUTOMATIC) ClrDiagcFlg_Cnt_T_u08;

    if(*Rte_Pim_ClrDiagcFlg() == 1U)
    {
        ClrDiagcFlg_Cnt_T_u08 = 0U;
    }
    else
    {
        ClrDiagcFlg_Cnt_T_u08 = 1U;
    }
    *Rte_Pim_ClrDiagcFlg() = ClrDiagcFlg_Cnt_T_u08;
     
    /* Write Output */
    (void) Rte_Write_ClrDiagcFlgProxy_Val(ClrDiagcFlg_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrSnpshtData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrSnpshtData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnpshtDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrSnpshtData_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ClrSnpshtData_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrSnpshtData_Oper
 *********************************************************************************************************************/

    VAR(uint8,  AUTOMATIC) SnpshtAryIdx_Cnt_T_u08;

    for (SnpshtAryIdx_Cnt_T_u08 = 0U; SnpshtAryIdx_Cnt_T_u08 < (uint8)TblSize_m(PimSnpshtDataAry_SnpshtDataRec1);( SnpshtAryIdx_Cnt_T_u08++)) 
    {
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].MicroDiagcData = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].HwTq = 0;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].MotTq = 0;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].IgnCntr = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].BrdgVltg = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].EcuT = 0;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].NtcNr = NTCNR_RESD;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].NtcStInfo = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].SysSt = SYSST_WRMININ;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].VehSpd = 0U;
    }
    
    /* Write to NvM */
    (void) Rte_Call_SnpshtDataAry_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrIninCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DiagcMgrIninCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, DiagcMgr_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(Ary1D_NtcInfoRec4_DiagcMgr, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrIninCore_Oper
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) NtcFltAryIdx_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) NtcInfoIdx_Cnt_T_u08;     
    VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16;  
    VAR(uint8, AUTOMATIC) InfoIdx_Cnt_T_u08;                
     
    #if ((STD_ON == NXTRDET_DIAGCMGR) && (STD_ON == DIAGCMGR_DEMCHK))
        if (DEMTOTNROFDTC_CNT_U08 != (TOTNROFDTC_CNT_U08 + 1U))
        {
            /* Dem Configuration and DiagcMgr Configuration not consistent */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 0U, 1U);
        }           
    #endif
    for (NtcFltAryIdx_Cnt_T_u16 = 0U; NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_NtcFltInfoRec2); NtcFltAryIdx_Cnt_T_u16++)
    {   
        NtcMapIdx_Cnt_T_u16 = (uint16)PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].NtcNr;                              
        if((NtcMapIdx_Cnt_T_u16 > NTCNR_RESD) && (NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DiagcMgrNtcMap_Cnt_rec)))
        {
            /* Update NtcInfoAry Update Aging Counter And Confirmed Bit */
            if(ApplIdx_Arg == (DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].ApplIdx))
            {                
                /* 0 < AgingCntr <= 64 */
                if((PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].AgiCntr > 0U) &&
                   (PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].AgiCntr <= 64U))                                        
                {
                    InfoIdx_Cnt_T_u08 = DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx; /*NTCInfoIdx*/
                    NtcInfoAry_Arg[InfoIdx_Cnt_T_u08].Sts = PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].Sts;           
                    NtcInfoAry_Arg[InfoIdx_Cnt_T_u08].AgiCntr = PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].AgiCntr;   
                }
                else
                {
                     /* AgingCntr > 64 - Do not copy data into NtcInfoAry*/
                }   
            }           
        }
        else
        {
            #if (STD_ON == NXTRDET_DIAGCMGR)
                if(NtcMapIdx_Cnt_T_u16 != NTCNR_RESD)
                {
                    /* NtcNr in Nvm is greater then 511 */                                  
                    (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 0U, 0U);                
                }
            #endif
        }     
    }       
    /* Initialize the NtcInfo Array */ 
    /* Update the ISO bits of each NTC */
    for (NtcInfoIdx_Cnt_T_u08 = 0U; NtcInfoIdx_Cnt_T_u08 < NtcInfoArySize_Arg; NtcInfoIdx_Cnt_T_u08++) 
    {
        if((NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].AgiCntr == 0U) || (NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].AgiCntr > 64U))
        {  
            NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].AgiCntr = DFTAGICNTR_CNT_U08;            
        }
        else
        {             
            DiagcMgrClrBits_u08(&NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].Sts, DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08);
        }               
        DiagcMgrSetBits_u08(&NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].Sts, DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
    }
    /* Update DiagcSts */ /* Exclusive area not needed because it is an Init function */
    DiagcData_Arg->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32; 
    DiagcData_Arg->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
    ProxySetNtcData_Arg->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;   
    ProxySetNtcData_Arg->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
    if(ELECGLBPRM_IVTRCNT_CNT_U08 == 1U)
    {
        /* Single Inverter */
         DiagcData_Arg->DiagcSts = DIAGCSTSIVTR2INACTV_CNT_U16;
         ProxySetNtcData_Arg->DiagcSts = DIAGCSTSIVTR2INACTV_CNT_U16;
     }
     else
     {
         /* Dual Inverter */
         DiagcData_Arg->DiagcSts = DIAGCSTSININVAL_CNT_U16;
         ProxySetNtcData_Arg->DiagcSts = DIAGCSTSININVAL_CNT_U16;        
     }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsDftHwAg_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsDftHwAgSerlComExprtVal_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsDftVehSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsIvtr1Inactv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsIvtr2Inactv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsLimdTPrfmnc_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsWhlImbRejctnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysDiMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysDiRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStFltOutpReqDi_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_logl_Oper(boolean *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl0_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl1_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl10_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl2_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl3_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl4_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl5_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl6_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl7_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl8_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl9_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) DiagcMgrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrPer1
 *********************************************************************************************************************/
    VAR(DiagcDataRec1, AUTOMATIC) OutpDiagcData_Cnt_T_rec; 
    VAR(DiagcDataRec1, AUTOMATIC) TempDiagcData_Cnt_T_rec;
    VAR(uint16, AUTOMATIC)  StsIvtr2Inactv_Cnt_T_u16 = 0U;
    VAR(float32, AUTOMATIC) SysDiRampRate_UlsPerSec_T_f32;
    VAR(float32, AUTOMATIC) SysDiMotTqCmdSca_Uls_T_f32;
    VAR(boolean, AUTOMATIC) SysStFltOutpReqDi_Cnt_T_logl;   
    VAR(boolean, AUTOMATIC) DiagcStsLimdTPrfmnc_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr2Inactv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsDftHwAg_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsDftVehSpd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsDftHwAgSerlComExprtVal_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsWhlImbRejctnDi_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl;
    
    if(ELECGLBPRM_IVTRCNT_CNT_U08 == 1U)
    {
        StsIvtr2Inactv_Cnt_T_u16 = DIAGCSTSIVTR2INACTV_CNT_U16;
    }   
    OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;
    OutpDiagcData_Cnt_T_rec.ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
    OutpDiagcData_Cnt_T_rec.DiagcSts = DIAGCSTSININVAL_CNT_U16 | StsIvtr2Inactv_Cnt_T_u16;   

    #ifdef NTCCNTAPPL0_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl0_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL1_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl1_Oper(&TempDiagcData_Cnt_T_rec);    
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL2_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl2_Oper(&TempDiagcData_Cnt_T_rec);   
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca); 
    #endif    

    #ifdef NTCCNTAPPL3_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl3_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL4_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl4_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL5_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl5_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL6_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl6_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL7_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl7_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL8_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl8_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL9_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl9_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL10_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl10_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;    
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    /* Update Outputs */
    SysDiRampRate_UlsPerSec_T_f32   = Lim_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, MINRAMPRATE_ULSPERSEC_F32, MAXRAMPRATE_ULSPERSEC_F32);
    SysDiMotTqCmdSca_Uls_T_f32      = Lim_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, SCAMOTTQCMDTOZERO_ULS_F32, SCAMOTTQCMDTOONE_ULS_F32);
    SysStFltOutpReqDi_Cnt_T_logl    = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16);      
    DiagcStsLimdTPrfmnc_Cnt_T_logl  = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSLIMDTPRFMNC_CNT_U16);
    DiagcStsIvtr1Inactv_Cnt_T_logl  = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSIVTR1INACTV_CNT_U16);  
    DiagcStsIvtr2Inactv_Cnt_T_logl  = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSIVTR2INACTV_CNT_U16);
    DiagcStsDftHwAg_Cnt_T_logl      = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSDFTHWAG_CNT_U16);
    DiagcStsDftVehSpd_Cnt_T_logl    = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSDFTVEHSPD_CNT_U16);
    DiagcStsDftHwAgSerlComExprtVal_Cnt_T_logl   = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16);
    DiagcStsWhlImbRejctnDi_Cnt_T_logl           = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSWHLIMBREJCTNDI_CNT_U16);
    DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl      = DiagcMgrReadBit_u16(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16);
    
    /*Fault injecting conditions*/
    #if (STD_ON == FLTINJENA)    
        (void)Rte_Call_FltInj_logl_Oper(&DiagcStsIvtr1Inactv_Cnt_T_logl,FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV);
    #endif
    
    #if (STD_ON == FLTINJENA)    
        (void)Rte_Call_FltInj_logl_Oper(&DiagcStsIvtr2Inactv_Cnt_T_logl,FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV);
    #endif    
    
    /* Write Outputs */
    (void) Rte_Write_SysDiRampRate_Val(SysDiRampRate_UlsPerSec_T_f32);
    (void) Rte_Write_SysDiMotTqCmdSca_Val(SysDiMotTqCmdSca_Uls_T_f32);
    (void) Rte_Write_SysStFltOutpReqDi_Logl(SysStFltOutpReqDi_Cnt_T_logl);
    (void) Rte_Write_DiagcStsLimdTPrfmnc_Logl(DiagcStsLimdTPrfmnc_Cnt_T_logl);
    (void) Rte_Write_DiagcStsIvtr1Inactv_Logl(DiagcStsIvtr1Inactv_Cnt_T_logl);
    (void) Rte_Write_DiagcStsIvtr2Inactv_Logl(DiagcStsIvtr2Inactv_Cnt_T_logl);
    (void) Rte_Write_DiagcStsDftHwAg_Logl(DiagcStsDftHwAg_Cnt_T_logl);
    (void) Rte_Write_DiagcStsDftVehSpd_Logl(DiagcStsDftVehSpd_Cnt_T_logl);
    (void) Rte_Write_DiagcStsDftHwAgSerlComExprtVal_Logl(DiagcStsDftHwAgSerlComExprtVal_Cnt_T_logl);
    (void) Rte_Write_DiagcStsWhlImbRejctnDi_Logl(DiagcStsWhlImbRejctnDi_Cnt_T_logl);
    (void) Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl(DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl);
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) DiagcMgrPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrPer2
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) DtcIdx_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) DtctempIdx_Cnt_T_u08;
    VAR(Dem_ReturnClearDTCType, AUTOMATIC) DemClrDTCRtnVal_Cnt_T_u08; 
    VAR(Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_u08; 
    VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16 = 0U;
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
    VAR(uint8, AUTOMATIC) DtcIdxCurrSts_Cnt_T_u08[TOTNROFDTC_CNT_U08 + 1U]; 
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum;

    if(*Rte_Pim_ClrDiagcFlg() != *Rte_Pim_PrevClrDtcFlg())
    {
        /* Call DEM & Update DtcIdxPrevSts */
        DemClrDTCRtnVal_Cnt_T_u08 = Dem_ClearDTC(DEM_DTC_GROUP_ALL_DTCS, DEM_DTC_FORMAT_UDS, DEM_DTC_ORIGIN_PRIMARY_MEMORY);
        if(DemClrDTCRtnVal_Cnt_T_u08 != DEM_CLEAR_PENDING)
        {
            /* Update DtcIdxPrevSts and PrevClrDtcFlg */
            *Rte_Pim_PrevClrDtcFlg() = *Rte_Pim_ClrDiagcFlg();
            /* Clear All DTCs */
            for (DtcIdx_Cnt_T_u16 = 1U; DtcIdx_Cnt_T_u16 <= TOTNROFDTC_CNT_U08; DtcIdx_Cnt_T_u16++)
            {
                PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = DTCIDXSTSNORES_CNT_U08;
            }
        }
    }
    else
    {
        /** Normal Periodic Processing **/
        /* Initialize DtcIdxCurrSts */
        for(DtcIdx_Cnt_T_u16 = 0U; DtcIdx_Cnt_T_u16 <= TOTNROFDTC_CNT_U08; DtcIdx_Cnt_T_u16++)
        {
            DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16] = DTCIDXSTSNONTC_CNT_U08; 
        }
        /** For All NTCs **/
        while(NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DiagcMgrNtcMap_Cnt_rec))
        {          
            switch(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].ApplIdx)
            {
                #ifdef NTCCNTAPPL0_CNT_U16
                    case 0x00U: 
                    {
                        (void) Rte_Call_GetNtcInfoAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);                      
                    }
                    break;
                #endif
                              
                #ifdef NTCCNTAPPL1_CNT_U16
                    case 0x01U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif
                          
                #ifdef NTCCNTAPPL2_CNT_U16
                    case 0x02U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif           
                
                #ifdef NTCCNTAPPL3_CNT_U16
                    case 0x03U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif          
                    
                #ifdef NTCCNTAPPL4_CNT_U16
                    case 0x04U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif          
                   
                #ifdef NTCCNTAPPL5_CNT_U16
                    case 0x05U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif          
                
                #ifdef NTCCNTAPPL6_CNT_U16
                    case 0x06U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif          
                
                #ifdef NTCCNTAPPL7_CNT_U16
                    case 0x07U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif          
                  
                #ifdef NTCCNTAPPL8_CNT_U16
                    case 0x08U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif          
                
                #ifdef NTCCNTAPPL9_CNT_U16
                    case 0x09U:
                    {
                        (void) Rte_Call_GetNtcInfoAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif          
                
                #ifdef NTCCNTAPPL10_CNT_U16
                    case 0x0AU:
                    {
                        (void) Rte_Call_GetNtcInfoAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                    }
                    break;
                #endif  
                
                case 0xFFU:            
                default:
                {      
                    NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
                }
                break;                  
            } 

            /** Update DTC Status **/
            /* NTC Enabled */ 
            DtctempIdx_Cnt_T_u08 = (uint8)(PrmDiagcMgrFltResp_u32[NtcMapIdx_Cnt_T_u16] & FLTRESPDTCIDX_CNT_U32);
            if(((PrmDiagcMgrFltResp_u32[NtcMapIdx_Cnt_T_u16] & FLTRESPNTCENAD_CNT_U32) != 0U) && 
                (DtctempIdx_Cnt_T_u08 != 0U) && 
                (DtctempIdx_Cnt_T_u08 <= TOTNROFDTC_CNT_U08))
            {
                /* SIGQLFR_NORES */
                if((NtcInfo_Cnt_T_rec.Sts & DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08) != 0U)
                {
                    NtcQlfr_Cnt_T_enum = SIGQLFR_NORES;
                }
                /* SIGQLFR_PASSD */
                else if((NtcInfo_Cnt_T_rec.Sts & DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08) == 0U)
                {
                    NtcQlfr_Cnt_T_enum = SIGQLFR_PASSD;
                }
                /* SIGQLFR_FAILD */
                else
                {
                    NtcQlfr_Cnt_T_enum = SIGQLFR_FAILD;
                }
                /* DTC Fail */
                if((DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] == DTCIDXSTSFAIL_CNT_U08) ||
                    (NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD))
                {
                    DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] = DTCIDXSTSFAIL_CNT_U08;
                }
                /* DTC NoRes */
                else if(NtcQlfr_Cnt_T_enum == SIGQLFR_NORES)
                {
                    DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] = DTCIDXSTSNORES_CNT_U08;
                }
                /* DTC Pass */
                else if((DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] == DTCIDXSTSNONTC_CNT_U08) || 
                        (DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] ==  DTCIDXSTSPASS_CNT_U08))
                {
                    DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] = DTCIDXSTSPASS_CNT_U08;
                }
                else
                {
                    /* Do Nothing */
                }
            }
            /* NTC Not Enabled */
            else
            {
                /* Do Nothing */
            }
            NtcMapIdx_Cnt_T_u16++;
        }
        
        /** For All DTCs **/ 
        for(DtcIdx_Cnt_T_u16 = 0U; DtcIdx_Cnt_T_u16 <= TOTNROFDTC_CNT_U08; DtcIdx_Cnt_T_u16++)
        {
            /* Check If DTC Status has Changed */
            /* DTC Status Changed OR DTC Update NOT Confirmed */     /* Use masks */
            if(((DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16]) != (PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] & DTCIDXSTSNONTC_CNT_U08)) ||
                ((PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] & DTCIDXSTSUPDCFMD_CNT_U08) == 0U))
            {
                /* Update DTC Index Previous Status with DTC Index Current Status */
                PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16];     
                /** Update DTC Status **/   
                /* Dtc Status is Passed */      
                if(DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16] == DTCIDXSTSPASS_CNT_U08)
                {
                    /* Dem_SetEventStatus */
                    RtnVal_Cnt_T_u08 = Dem_SetEventStatus(DemDtcEveIdMap[DtcIdx_Cnt_T_u16], DEM_EVENT_STATUS_PASSED);
                    /* Update 'DTC Index Update Confirmed' Bit */
                    if(RtnVal_Cnt_T_u08 == E_OK)
                    {
                        /* Set Bit 7 (DTC Update Confirmed) */
                        PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] | DTCIDXSTSUPDCFMD_CNT_U08;
                    }
                }   
                /* Dtc Status is Failed */
                else if(DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16] == DTCIDXSTSFAIL_CNT_U08)
                {
                    /* Dem_SetEventStatus */
                    RtnVal_Cnt_T_u08 = Dem_SetEventStatus(DemDtcEveIdMap[DtcIdx_Cnt_T_u16], DEM_EVENT_STATUS_FAILED);
                    /* Update 'DTC Index Update Confirmed' Bit */
                    if(RtnVal_Cnt_T_u08 == E_OK)
                    {
                        /* Set Bit 7 (DTC Update Confirmed) */
                        PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = (PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] | DTCIDXSTSUPDCFMD_CNT_U08);
                    }               
                }   
                else
                {
                    /* Set Bit 7 (DTC Update Confirmed) */
                    PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = (PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] | DTCIDXSTSUPDCFMD_CNT_U08);               
                }
            }           
        } 
    }
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcActvCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcActvCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcActv_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcActvCore_Oper
 *********************************************************************************************************************/
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
          
    switch(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].ApplIdx)
    {
        #ifdef NTCCNTAPPL0_CNT_U16
            case 0x00U: 
            {
                (void) Rte_Call_GetNtcInfoAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);                      
            }
            break;
        #endif
                      
        #ifdef NTCCNTAPPL1_CNT_U16
            case 0x01U:
            {
                (void) Rte_Call_GetNtcInfoAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif
                  
        #ifdef NTCCNTAPPL2_CNT_U16
            case 0x02U:
            {
                (void) Rte_Call_GetNtcInfoAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif           
        
        #ifdef NTCCNTAPPL3_CNT_U16
            case 0x03U:
            {
                (void) Rte_Call_GetNtcInfoAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
            
        #ifdef NTCCNTAPPL4_CNT_U16
            case 0x04U:
            {
                (void) Rte_Call_GetNtcInfoAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
           
        #ifdef NTCCNTAPPL5_CNT_U16
            case 0x05U:
            {
                (void) Rte_Call_GetNtcInfoAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL6_CNT_U16
            case 0x06U:
            {
                (void) Rte_Call_GetNtcInfoAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL7_CNT_U16
            case 0x07U:
            {
                (void) Rte_Call_GetNtcInfoAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
          
        #ifdef NTCCNTAPPL8_CNT_U16
            case 0x08U:
            {
                (void) Rte_Call_GetNtcInfoAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL9_CNT_U16
            case 0x09U:
            {
                (void) Rte_Call_GetNtcInfoAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL10_CNT_U16
            case 0x0AU:
            {
                (void) Rte_Call_GetNtcInfoAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif  
        
        case 0xFFU:            
        default:
        {           
            NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
        }
        break;                  
    } 
        
    if((((NtcInfo_Cnt_T_rec.Sts) & DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08) != 0U)&&  
       (((NtcInfo_Cnt_T_rec.Sts) & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) != 0U))
    {
        *NtcActv_Arg = TRUE;
    }
    else
    {
        *NtcActv_Arg = FALSE;
    }    

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcQlfrStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcQlfrStsCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcQlfr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcQlfrStsCore_Oper
 *********************************************************************************************************************/
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
          
    switch(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].ApplIdx)
    {
        #ifdef NTCCNTAPPL0_CNT_U16
            case 0x00U: 
            {
                (void) Rte_Call_GetNtcInfoAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);                      
            }
            break;
        #endif
                      
        #ifdef NTCCNTAPPL1_CNT_U16
            case 0x01U:
            {
                (void) Rte_Call_GetNtcInfoAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif
                  
        #ifdef NTCCNTAPPL2_CNT_U16
            case 0x02U:
            {
                (void) Rte_Call_GetNtcInfoAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif           
        
        #ifdef NTCCNTAPPL3_CNT_U16
            case 0x03U:
            {
                (void) Rte_Call_GetNtcInfoAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
            
        #ifdef NTCCNTAPPL4_CNT_U16
            case 0x04U:
            {
                (void) Rte_Call_GetNtcInfoAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
           
        #ifdef NTCCNTAPPL5_CNT_U16
            case 0x05U:
            {
                (void) Rte_Call_GetNtcInfoAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL6_CNT_U16
            case 0x06U:
            {
                (void) Rte_Call_GetNtcInfoAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL7_CNT_U16
            case 0x07U:
            {
                (void) Rte_Call_GetNtcInfoAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
          
        #ifdef NTCCNTAPPL8_CNT_U16
            case 0x08U:
            {
                (void) Rte_Call_GetNtcInfoAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL9_CNT_U16
            case 0x09U:
            {
                (void) Rte_Call_GetNtcInfoAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL10_CNT_U16
            case 0x0AU:
            {
                (void) Rte_Call_GetNtcInfoAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif  
        
        case 0xFFU:            
        default:
        {      
            NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
        }
        break;                  
    } 
    if(DiagcMgrReadBit_u08((NtcInfo_Cnt_T_rec.Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08) == TRUE) 
    {
        *NtcQlfr_Arg = SIGQLFR_NORES;
    }
    else if(DiagcMgrReadBit_u08((NtcInfo_Cnt_T_rec.Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08) == FALSE)
    {
        *NtcQlfr_Arg = SIGQLFR_PASSD;
    }   
    else 
    {
        *NtcQlfr_Arg = SIGQLFR_FAILD;
    }
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcStsCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoSts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcStsCore_Oper
 *********************************************************************************************************************/
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
          
    switch(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].ApplIdx)
    {
        #ifdef NTCCNTAPPL0_CNT_U16
            case 0x00U: 
            {
                (void) Rte_Call_GetNtcInfoAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);                      
            }
            break;
        #endif
                      
        #ifdef NTCCNTAPPL1_CNT_U16
            case 0x01U:
            {
                (void) Rte_Call_GetNtcInfoAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif
                  
        #ifdef NTCCNTAPPL2_CNT_U16
            case 0x02U:
            {
                (void) Rte_Call_GetNtcInfoAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif           
        
        #ifdef NTCCNTAPPL3_CNT_U16
            case 0x03U:
            {
                (void) Rte_Call_GetNtcInfoAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
            
        #ifdef NTCCNTAPPL4_CNT_U16
            case 0x04U:
            {
                (void) Rte_Call_GetNtcInfoAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
           
        #ifdef NTCCNTAPPL5_CNT_U16
            case 0x05U:
            {
                (void) Rte_Call_GetNtcInfoAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL6_CNT_U16
            case 0x06U:
            {
                (void) Rte_Call_GetNtcInfoAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL7_CNT_U16
            case 0x07U:
            {
                (void) Rte_Call_GetNtcInfoAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif
          
        #ifdef NTCCNTAPPL8_CNT_U16
            case 0x08U:
            {
                (void) Rte_Call_GetNtcInfoAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif
        
        #ifdef NTCCNTAPPL9_CNT_U16
            case 0x09U:
            {
                (void) Rte_Call_GetNtcInfoAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL10_CNT_U16
            case 0x0AU:
            {
                (void) Rte_Call_GetNtcInfoAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
            }
            break;
        #endif  
        
        case 0xFFU:            
        default:
        {           
            NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
        }
        break;                  
    } 
    
    *NtcInfoSts_Arg = NtcInfo_Cnt_T_rec.Sts;
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadNtcFltAry_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadNtcFltAry>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadNtcFltAry_Oper(ReadFltInfoRec1 *DiagcMgrReadFltInfo_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) ReadNtcFltAry_Oper(P2VAR(ReadFltInfoRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, DiagcMgr_CODE) ReadNtcFltAry_Oper(P2VAR(Ary1D_ReadFltInfoRec1_20, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadNtcFltAry_Oper
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) ReadFltInfoIdx_Cnt_T_u08 = 0U;            /* Clear Read Flt Array Idx ReadFltInfoIdx_Cnt_T_u08 */
    VAR(uint16, AUTOMATIC) HistReadFltAryIdx_Cnt_T_u16 = 0U;        /* Clear Hist Flt Array Idx HistReadFltAryIdx_Cnt_T_u16 */
    VAR(ReadFltInfoRec1, AUTOMATIC) HistReadFltAry_T_rec[20];
    VAR(uint16, AUTOMATIC) HistReadFltAryTempIdx_Cnt_T_u16 = 0U;    /* Initialize the HistReadFltAryTempIdx_Cnt_T_u16 */
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;

    NtcMapIdx_Cnt_T_u16 = 1U;
    
    while((NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DiagcMgrNtcMap_Cnt_rec)) && ((ReadFltInfoIdx_Cnt_T_u08 < SIZEOFREADFLTARY_CNT_U08))) 
    {
        switch(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].ApplIdx)
        {
            #ifdef NTCCNTAPPL0_CNT_U16
                case 0x00U: 
                {
                    (void) Rte_Call_GetNtcInfoAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);                      
                }
                break;
            #endif
                          
            #ifdef NTCCNTAPPL1_CNT_U16
                case 0x01U:
                {
                    (void) Rte_Call_GetNtcInfoAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif
                      
            #ifdef NTCCNTAPPL2_CNT_U16
                case 0x02U:
                {
                    (void) Rte_Call_GetNtcInfoAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif           
            
            #ifdef NTCCNTAPPL3_CNT_U16
                case 0x03U:
                {
                    (void) Rte_Call_GetNtcInfoAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
                
            #ifdef NTCCNTAPPL4_CNT_U16
                case 0x04U:
                {
                    (void) Rte_Call_GetNtcInfoAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
               
            #ifdef NTCCNTAPPL5_CNT_U16
                case 0x05U:
                {
                    (void) Rte_Call_GetNtcInfoAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL6_CNT_U16
                case 0x06U:
                {
                    (void) Rte_Call_GetNtcInfoAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL7_CNT_U16
                case 0x07U:
                {
                    (void) Rte_Call_GetNtcInfoAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
              
            #ifdef NTCCNTAPPL8_CNT_U16
                case 0x08U:
                {
                    (void) Rte_Call_GetNtcInfoAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL9_CNT_U16
                case 0x09U:
                {
                    (void) Rte_Call_GetNtcInfoAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL10_CNT_U16
                case 0x0AU:
                {
                    (void) Rte_Call_GetNtcInfoAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif  
            
            case 0xFFU:            
            default:
            {           
                NtcInfo_Cnt_T_rec.AgiCntr = DFTAGICNTR_CNT_U08;
                NtcInfo_Cnt_T_rec.Sts = 0U;
                NtcInfo_Cnt_T_rec.NtcStInfo = 0U;             
            }
            break;                  
        } 
         
        /* Update DiagcMgrReadFltInfo_Arg and HistReadFltAry_T_rec */ 
        if(NtcInfo_Cnt_T_rec.AgiCntr == 0U)
        {           
            /* Update ReadFltInfo */
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcNr = NtcMapIdx_Cnt_T_u16;
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].AgiCntr = 0U;
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].Sts = NtcInfo_Cnt_T_rec.Sts;                                      
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcStInfo = NtcInfo_Cnt_T_rec.NtcStInfo;                                      

            ReadFltInfoIdx_Cnt_T_u08++;
        }
        else if(NtcInfo_Cnt_T_rec.AgiCntr  < 64U)
        {
            if(HistReadFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(HistReadFltAry_T_rec))
            {
                /* Update History Fault Array */
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].NtcNr = NtcMapIdx_Cnt_T_u16;
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].AgiCntr = NtcInfo_Cnt_T_rec.AgiCntr;
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].Sts = NtcInfo_Cnt_T_rec.Sts;                                       
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].NtcStInfo = NtcInfo_Cnt_T_rec.NtcStInfo;                                       

                HistReadFltAryIdx_Cnt_T_u16++;
            }
        }
        else /* For DFTAGICNTR_CNT_U08 */
        {
         /* Do Nothing */
        }   
        NtcMapIdx_Cnt_T_u16++;
    }
     /* While(HistFltIdx < Length[HistFltAry]) */     
    while((ReadFltInfoIdx_Cnt_T_u08 < SIZEOFREADFLTARY_CNT_U08) &&
          (HistReadFltAryTempIdx_Cnt_T_u16 < HistReadFltAryIdx_Cnt_T_u16))
    {      
         /* Update DiagcMgrReadFltInfo_Arg with History Fault Array values */
         DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08] = HistReadFltAry_T_rec[HistReadFltAryTempIdx_Cnt_T_u16];   
                
         /* Increment Indices */
         ReadFltInfoIdx_Cnt_T_u08++;
         HistReadFltAryTempIdx_Cnt_T_u16++;      
    }   
    while(ReadFltInfoIdx_Cnt_T_u08 < SIZEOFREADFLTARY_CNT_U08)
    {
        /* Update DiagcMgrReadFltInfo_Arg */
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcNr = NTCNR_RESD;
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].AgiCntr = DFTAGICNTR_CNT_U08;
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].Sts = 0U;
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcStInfo = 0U;
         
        ReadFltInfoIdx_Cnt_T_u08++;
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadNtcInfoAndDebCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadNtcInfoAndDebCntr>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl1_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl10_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl2_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl3_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl4_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl6_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl7_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl8_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl9_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *DebCntr_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadNtcInfoAndDebCntr_Oper
 *********************************************************************************************************************/

    switch(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].ApplIdx)
    {
        #ifdef NTCCNTAPPL0_CNT_U16
            case 0x00U: 
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);                      
            }
            break;
        #endif
                      
        #ifdef NTCCNTAPPL1_CNT_U16
            case 0x01U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif
                  
        #ifdef NTCCNTAPPL2_CNT_U16
            case 0x02U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif           
        
        #ifdef NTCCNTAPPL3_CNT_U16
            case 0x03U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
            
        #ifdef NTCCNTAPPL4_CNT_U16
            case 0x04U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
           
        #ifdef NTCCNTAPPL5_CNT_U16
            case 0x05U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL6_CNT_U16
            case 0x06U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL7_CNT_U16
            case 0x07U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
          
        #ifdef NTCCNTAPPL8_CNT_U16
            case 0x08U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL9_CNT_U16
            case 0x09U:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL10_CNT_U16
            case 0x0AU:
            {
                if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif  
        
        case 0xFFU:            
        default:
        {  
            /* Do Nothing */        
        }
        break;                  
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadSnpshtData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadSnpshtData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadSnpshtData_Oper(SnpshtDataRec1 *ReadSnpshtDataAry_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) ReadSnpshtData_Oper(P2VAR(SnpshtDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, DiagcMgr_CODE) ReadSnpshtData_Oper(P2VAR(Ary1D_SnpshtDataRec1_8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadSnpshtData_Oper
 *********************************************************************************************************************/
    
    VAR(uint8, AUTOMATIC) ReadSnpshtDataAryIdx_Cnt_T_u08;
    for(ReadSnpshtDataAryIdx_Cnt_T_u08 = 0U; (ReadSnpshtDataAryIdx_Cnt_T_u08 < (uint8)TblSize_m(PimSnpshtDataAry_SnpshtDataRec1)); ReadSnpshtDataAryIdx_Cnt_T_u08++)
    {   
        ReadSnpshtDataAry_Arg[ReadSnpshtDataAryIdx_Cnt_T_u08] = PimSnpshtDataAry_SnpshtDataRec1[ReadSnpshtDataAryIdx_Cnt_T_u08];
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetNtcStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetNtcStsCore>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IgnCntr_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MfgDiagcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RegInBRAMDAT1_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnpshtDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_DiagcMgrExclusiveArea(void)
 *   void Rte_Exit_DiagcMgrExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetNtcStsCore_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagcMgr_CODE) SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoDebCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetNtcStsCore_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) Return_Cnt_T_u08 = E_OK;      
    VAR(boolean, AUTOMATIC) MfgDiagcInhb_Cnt_T_logl;        
    VAR(MfgEnaSt1, AUTOMATIC) MfgEnaSt_Cnt_T_enum;  
    VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;   
    VAR(uint8, AUTOMATIC) DtctempIdx_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) RegInBRAMDAT1_Cnt_T_u32;
    VAR(float32, AUTOMATIC) HwTq_Cnt_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdMrfScad_Cnt_T_f32;
    VAR(uint32, AUTOMATIC) IgnCntr_Cnt_T_u32;
    VAR(float32, AUTOMATIC) BrdgVltg_Cnt_T_f32;
    VAR(float32, AUTOMATIC) EcuTFild_Cnt_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Cnt_T_f32;

    VAR(sint16, AUTOMATIC) HwTq_Cnt_T_s5p10;
    VAR(sint16, AUTOMATIC) MotTqCmdMrfScad_Cnt_T_s5p10;
    VAR(uint16, AUTOMATIC) BrdgVltg_Cnt_T_u6p10;
    VAR(sint16, AUTOMATIC) EcuTFild_Cnt_T_s8p7;
    VAR(uint16, AUTOMATIC) VehSpd_Cnt_T_u9p7;
    
    /* Read Inputs */
    
    (void) Rte_Read_BrdgVltg_Val(&BrdgVltg_Cnt_T_f32);  
    (void) Rte_Read_EcuTFild_Val(&EcuTFild_Cnt_T_f32);
    (void) Rte_Read_HwTq_Val(&HwTq_Cnt_T_f32); 
    (void) Rte_Read_IgnCntr_Val(&IgnCntr_Cnt_T_u32); 
    (void) Rte_Read_MfgDiagcInhb_Logl(&MfgDiagcInhb_Cnt_T_logl);
    (void) Rte_Read_MfgEnaSt_Val(&MfgEnaSt_Cnt_T_enum); 
    (void) Rte_Read_MotTqCmdMrfScad_Val(&MotTqCmdMrfScad_Cnt_T_f32); 
    (void) Rte_Read_RegInBRAMDAT1_Val(&RegInBRAMDAT1_Cnt_T_u32); 
    (void) Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum); 
    (void) Rte_Read_VehSpd_Val(&VehSpd_Cnt_T_f32); 
    
    /* Create SnapshotDataBus */ 
    HwTq_Cnt_T_s5p10        = FloatToFixd_s16_f32(HwTq_Cnt_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
    MotTqCmdMrfScad_Cnt_T_s5p10 = FloatToFixd_s16_f32(MotTqCmdMrfScad_Cnt_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
    BrdgVltg_Cnt_T_u6p10    = FloatToFixd_u16_f32(BrdgVltg_Cnt_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
    EcuTFild_Cnt_T_s8p7     = FloatToFixd_s16_f32(EcuTFild_Cnt_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
    VehSpd_Cnt_T_u9p7       = FloatToFixd_u16_f32(VehSpd_Cnt_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
    
    if(((NtcNr_Arg) >= NTCNR_0X001 ) && ((NtcNr_Arg) <= NTCNR_0X1FF))
    {
        /* NtcNr is Valid */ 

        /* Ntc Freeze Condition */  

        /*      
        (((u1 == 1) & (u4 == 1) & (u5 == 1)) | 
        ((u2 == 1) & (u4 == 1) & (u3 ~= 2))) | 
        ((u6 ~= u7) & (u8 >= 176) & (u8 <= 463)) 
        
        u1 - (PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPMFGINHBINENAST_CNT_U32)
        u2 - (PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPMFGINHBNOTINENAST_CNT_U32)
        u3 - SysSt_Cnt_T_enum
        u4 - MfgEnaSt_Cnt_T_enum
        u5 - MfgDiagcInhb_Cnt_T_logl
        u6 - DtcEnaMask[(PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPDTCIDX_CNT_U32)]
        u7 - DtcEnaMask[(PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPDTCIDX_CNT_U32)] & DtcEnaSts
        u8 - NtcNrRange     
        */
        DtctempIdx_Cnt_T_u08 = (uint8)(PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPDTCIDX_CNT_U32);
        if((((((PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPMFGINHBINENAST_CNT_U32) != 0U) && (MfgDiagcInhb_Cnt_T_logl == TRUE)) ||
        
             (((PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPMFGINHBNOTINENAST_CNT_U32) != 0U) && (SysSt_Cnt_T_enum != SYSST_ENA))) && 
             
             (MfgEnaSt_Cnt_T_enum == MFGENAST_MFGMOD )) ||
             
             ((DtcEnaMask[DtctempIdx_Cnt_T_u08] != (DtcEnaMask[DtctempIdx_Cnt_T_u08] & *Rte_Pim_DtcEnaSts())) && 
             ((NtcNr_Arg >= NTCNR_0X0B0) && (NtcNr_Arg <= NTCNR_0X1CF))))
        {
            /* Diagnostics Inhibited */
        }    
        else
        {
            /* Diagnostics Not Inhibited */
            if(DiagcMgrReadBit_u32((PrmDiagcMgrFltResp_u32[NtcNr_Arg]), FLTRESPNTCENAD_CNT_U32) == TRUE)
            {
                /** Ntc Enabled **/ 
                /* NTCSTS_PASSD */
                if(NtcSts_Arg == NTCSTS_PASSD) 
                {

                    if(((PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPRCVRLFLT_CNT_U32) != 0U)  || 
                       ((NtcInfo_Arg->Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) == 0U))
                    {
                        /** Update NTC Info's Status Byte **/
                        /* Clear DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08 and DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */
                        DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08); 
                        DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
                     
                        *NtcInfoDebCntr_Arg = MINDEBCNTRVAL_CNT_S16;
                    }
                }
                /* NTCSTS_FAILD */
                else if(NtcSts_Arg == NTCSTS_FAILD)
                {                    
                    /*** Update logic of Called NTC ***/
                    /** Update ISO Bits, Parameter Byte and Ageing Counter of Called NTC **/

                    /* Update ISO Bits */
                    /* Set Bits: DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08, DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08, 
                                    DIAGCMGR_NTCINFOCFMDNTC_CNT_U08 */
                    DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08); 
                    DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08); 
                    DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOCFMDNTC_CNT_U08);                                                                      
                    /* Clear Bits: DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */
                    DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08); 
                     
                    /* Update Parameter Byte and Ageing Counter of Called NTC */
                    NtcInfo_Arg->NtcStInfo = NtcInfo_Arg->NtcStInfo | NtcStInfo_Arg;    
                    NtcInfo_Arg->AgiCntr = 0U;                   
                    *NtcInfoDebCntr_Arg = MAXDEBCNTRVAL_CNT_S16;
                    
                    /** ProcessRampResponse and DiagcSts **/
                    /* ProcessRampResponse */
                    ProcRampResp(NtcNr_Arg, DiagcData_Arg, ProxySetNtcData_Arg); 
                    
                    /** UpdSnpshtData **/
                    UpdSnpshtData(  RegInBRAMDAT1_Cnt_T_u32, 
                                    HwTq_Cnt_T_s5p10, 
                                    MotTqCmdMrfScad_Cnt_T_s5p10, 
                                    IgnCntr_Cnt_T_u32,
                                    BrdgVltg_Cnt_T_u6p10, 
                                    EcuTFild_Cnt_T_s8p7, 
                                    NtcNr_Arg,
                                    NtcStInfo_Arg,                      
                                    SysSt_Cnt_T_enum, 
                                    VehSpd_Cnt_T_u9p7);
                    
                }
                /* NTCSTS_PREPASSD */                
                else if(NtcSts_Arg == NTCSTS_PREPASSD)
                {   
                    #if (STD_ON == NXTRDET_DIAGCMGR)
                        if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                        {                           
                            /* Non Debounced NTC using debounce values */
                            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 1U, 2U);
                        } 
                    #endif

                    if((((PrmDiagcMgrFltResp_u32[NtcNr_Arg] & FLTRESPRCVRLFLT_CNT_U32) != 0U)) || 
                       (((NtcInfo_Arg->Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) == 0U)))
                    {   
                        /** Update NTC Info's Status Byte and Update the NTC Fault Array **/
                        /* Decrement Counter */
                        if(((sint32)*NtcInfoDebCntr_Arg) <= ((sint32)MINDEBCNTRVAL_CNT_S16 + (sint32)(uint32)DebStep_Arg))
                        {
                            /* DebCntr = MINDEBCNTRVAL_CNT_S16 */
                            *NtcInfoDebCntr_Arg = MINDEBCNTRVAL_CNT_S16;
                            /** Update Status Byte **/                  
                            /* Clear DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08, DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */
                            DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08);
                            DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
                        }
                        else
                        {
                            /* Deb Counter > MINDEBCNTRVAL_CNT_S16 */
                            /* for a debstep value greater than 32767 the cast to sint16 overflows, but the subtraction will not overflow 
                            overflow case is already checked in the condition above */
                            *NtcInfoDebCntr_Arg = *NtcInfoDebCntr_Arg - (sint16)DebStep_Arg;
                        }
                    }                     
                }   
                /*NTCSTS_PREFAILD */            
                else if(NtcSts_Arg == NTCSTS_PREFAILD)
                {                    
                     #if (STD_ON == NXTRDET_DIAGCMGR)
                        if(DiagcMgrNtcMap_Cnt_rec[NtcNr_Arg].DebCntrIdx == 0U)
                        {                           
                            /* Non Debounced NTC using debounce values */
                            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 1U, 3U);
                        } 
                    #endif

                    /** Update NtcInfoSts, DebCntr and Process RampRate **/ 
                    if((((sint32)*NtcInfoDebCntr_Arg) >= (((sint32)MAXDEBCNTRVAL_CNT_S16) - (sint32)(uint32)DebStep_Arg)) || 
                        (DebStep_Arg >= (uint16)MAXDEBCNTRVAL_CNT_S16))
                    /* Increment Counter */
                    {
                        /* Deb Counter >= MAXDEBCNTRVAL_CNT_S16 */
                        *NtcInfoDebCntr_Arg = MAXDEBCNTRVAL_CNT_S16;
                        /** Update the NTC and DiagcSts Word **/
                        /* Set DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08, DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08, DIAGCMGR_NTCINFOCFMDNTC_CNT_U08 */
                        DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08); 
                        DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08); 
                        DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOCFMDNTC_CNT_U08);  
                        
                        /* Clear DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */ 
                        DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
                        /* Update NtcStInfo, DebCntr, AgiCntr */
                        NtcInfo_Arg->NtcStInfo = NtcInfo_Arg->NtcStInfo | NtcStInfo_Arg;                        
                        NtcInfo_Arg->AgiCntr  = 0U;

                        /** ProcessRampResponse and DiagcSts **/
                        ProcRampResp(NtcNr_Arg, DiagcData_Arg, ProxySetNtcData_Arg);                    
                        /** UpdSnpshtData **/
                        UpdSnpshtData(  RegInBRAMDAT1_Cnt_T_u32, 
                                        HwTq_Cnt_T_s5p10, 
                                        MotTqCmdMrfScad_Cnt_T_s5p10, 
                                        IgnCntr_Cnt_T_u32,
                                        BrdgVltg_Cnt_T_u6p10, 
                                        EcuTFild_Cnt_T_s8p7, 
                                        NtcNr_Arg,
                                        NtcStInfo_Arg,                      
                                        SysSt_Cnt_T_enum, 
                                        VehSpd_Cnt_T_u9p7);
                    }
                    else
                    {
                        /* Deb Counter < MAXDEBCNTRVAL_CNT_S16 */
                        if(*NtcInfoDebCntr_Arg < 0)
                        {
                            *NtcInfoDebCntr_Arg = (sint16)((sint32)(uint32)DebStep_Arg);
                        }
                        else
                        {
                            *NtcInfoDebCntr_Arg = *NtcInfoDebCntr_Arg + (sint16)(sint32)(uint32)DebStep_Arg;
                        }
                    }               
                }
                else
                {
                    Return_Cnt_T_u08 = E_NOT_OK;
                }
            }            
        }
    }
    else
    {
        /* NtcNr is invalid */
        Return_Cnt_T_u08 = E_NOT_OK;
    }  
  return Return_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 * Function:    ProcRampResp
 * Description: This function will update Ramp Rate, Scale and Ramp Related DiagStatus bits based on passed fault response
 *              currently active
 * Inputs:      NtcNr_Cnt_T_u16, DiagcData_T_rec, ProxySetNtcData_T_rec
 * Outputs:     None
 **********************************************************************************************************************/
 static FUNC(void, DiagcMgr_CODE) ProcRampResp(uint16 NtcNr_Cnt_T_u16,
                                               CONSTP2VAR(DiagcDataRec1, AUTOMATIC, DiagcMgr_CODE) DiagcData_T_rec,
                                               CONSTP2VAR(DiagcDataRec1, AUTOMATIC, DiagcMgr_CODE) ProxySetNtcData_T_rec)
{   
    VAR(uint16, AUTOMATIC) TempDiagcSts_Cnt_T_u16 = 0U;
    VAR(uint32, AUTOMATIC) RampRespBits_Cnt_T_u32;
    
    RampRespBits_Cnt_T_u32 = (uint32)(((PrmDiagcMgrFltResp_u32[NtcNr_Cnt_T_u16]) & FLTRESPRAMPBITS_CNT_U32) >> 8U);
    ProcDiagSts((PrmDiagcMgrFltResp_u32[NtcNr_Cnt_T_u16]), &(TempDiagcSts_Cnt_T_u16));
    switch(RampRespBits_Cnt_T_u32)
    {
        /* RapidShutdown Fault*/ 
        case IMDTSHTDWNFLT_CNT_U32:
        {   
            /* ProcessDiagcSts */
            TempDiagcSts_Cnt_T_u16 |= DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16; 

            /* Atomic Section */
            Rte_Enter_DiagcMgrExclusiveArea();

            /* Update DiagcSts */
            DiagcData_T_rec->DiagcSts = DiagcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;
            ProxySetNtcData_T_rec->DiagcSts = ProxySetNtcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;

            /* Update Ramp Rate */  
            if(MAXRAMPRATE_ULSPERSEC_F32 > DiagcData_T_rec->ActvRampRate)
            {                               
                DiagcData_T_rec->ActvRampRate = MAXRAMPRATE_ULSPERSEC_F32;
            }            
            if(MAXRAMPRATE_ULSPERSEC_F32 > ProxySetNtcData_T_rec->ActvRampRate)
            {                               
                ProxySetNtcData_T_rec->ActvRampRate = MAXRAMPRATE_ULSPERSEC_F32;
            }            
            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < DiagcData_T_rec->ActvMotTqCmdSca)
            {                               
                DiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }            
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxySetNtcData_T_rec->ActvMotTqCmdSca)
            {                               
                ProxySetNtcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }               
            Rte_Exit_DiagcMgrExclusiveArea();  
        }   
        break;

        /* ControlledShutdown Fault */ 
        case CTRLDSHTDWNFLT_CNT_U32:
        {
            /* ProcessDiagcSts */                       
            TempDiagcSts_Cnt_T_u16 |= DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16 | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16;

            /* Atomic Section */
            Rte_Enter_DiagcMgrExclusiveArea();

            /* Update DiagcSts */
            DiagcData_T_rec->DiagcSts = DiagcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;
            ProxySetNtcData_T_rec->DiagcSts = ProxySetNtcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;                                  

            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < DiagcData_T_rec->ActvMotTqCmdSca)
            {                               
                DiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }            
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxySetNtcData_T_rec->ActvMotTqCmdSca)
            {                               
                ProxySetNtcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }             
            Rte_Exit_DiagcMgrExclusiveArea();
        }   
        break;                                                                    

        /* Information Only Fault */
        case INFOONLYFLT_CNT_U32:     
        {
            Rte_Enter_DiagcMgrExclusiveArea();

            /* Update DiagcSts */
            DiagcData_T_rec->DiagcSts = DiagcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;
            ProxySetNtcData_T_rec->DiagcSts = ProxySetNtcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;                                

            Rte_Exit_DiagcMgrExclusiveArea(); 
        }
        break;

        /* TimedShutdown Fault */
        default: 
        {            
            /* ProcessDiagcSts */                       
            TempDiagcSts_Cnt_T_u16 |= DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16;

            /* Atomic Section */
            Rte_Enter_DiagcMgrExclusiveArea();

            /* Update DiagcSts */
            DiagcData_T_rec->DiagcSts = DiagcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;
            ProxySetNtcData_T_rec->DiagcSts = ProxySetNtcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u16;                                      

            /* Update Ramp Rate */ 
            if((FltRespRampTbl_Uls_f32[RampRespBits_Cnt_T_u32]) > DiagcData_T_rec->ActvRampRate)
            {                               
                DiagcData_T_rec->ActvRampRate = FltRespRampTbl_Uls_f32[RampRespBits_Cnt_T_u32];
            }            
            if((FltRespRampTbl_Uls_f32[RampRespBits_Cnt_T_u32]) > ProxySetNtcData_T_rec->ActvRampRate)
            {                               
                ProxySetNtcData_T_rec->ActvRampRate = FltRespRampTbl_Uls_f32[RampRespBits_Cnt_T_u32];
            }            
            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < DiagcData_T_rec->ActvMotTqCmdSca)
            {                               
                DiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }            
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxySetNtcData_T_rec->ActvMotTqCmdSca)
            {                               
                ProxySetNtcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }             
            Rte_Exit_DiagcMgrExclusiveArea();
        }   
        break;                           
    }
}

/**********************************************************************************************************************
 * Function:    UpdSnpshtData
 * Description: This function will update Snapshot Data based on passed fault response bit currently active
 * Inputs:      RegInBRAMDAT1_Cnt_T_u32, HwTq_Cnt_T_s5p10, MotTqCmdMrfScad_Cnt_T_s5p10, IgnCntr_Cnt_T_u32, 
                BrdgVltg_Cnt_T_u6p10, EcuTFild_Cnt_T_s8p7, NtcNr_Cnt_T_u16, NtcStInfo_Cnt_T_u08, 
                SysSt_Cnt_T_enum, VehSpd_Cnt_T_u9p7
 * Outputs:     None
 **********************************************************************************************************************/
 static FUNC(void, DiagcMgr_CODE) UpdSnpshtData(uint32 RegInBRAMDAT1_Cnt_T_u32, 
                                                sint16 HwTq_Cnt_T_s5p10,
                                                sint16 MotTqCmdMrfScad_Cnt_T_s5p10, 
                                                uint32 IgnCntr_Cnt_T_u32, 
                                                uint16 BrdgVltg_Cnt_T_u6p10, 
                                                sint16 EcuTFild_Cnt_T_s8p7, 
                                                NtcNr1 NtcNr_Cnt_T_u16, 
                                                uint8  NtcStInfo_Cnt_T_u08, 
                                                SysSt1 SysSt_Cnt_T_enum, 
                                                uint16 VehSpd_Cnt_T_u9p7)
{   
    VAR(boolean, AUTOMATIC) SnpshtDataAryIdxInvld_Cnt_T_logl;
    VAR(uint8, AUTOMATIC) SnpshtDataAryIdx_Cnt_T_u08;

    if(((PrmDiagcMgrFltResp_u32[NtcNr_Cnt_T_u16]) & FLTRESPSNPSHTDATAENAD_CNT_U32) != 0U)
    {
        /* Initialize */
        SnpshtDataAryIdxInvld_Cnt_T_logl = TRUE;
        SnpshtDataAryIdx_Cnt_T_u08 = 0U;
        
        while((SnpshtDataAryIdxInvld_Cnt_T_logl == TRUE) && (SnpshtDataAryIdx_Cnt_T_u08 < TblSize_m(PimSnpshtDataAry_SnpshtDataRec1)))
        {
            
            if((PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].NtcNr == 0U) ||
              (PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].NtcNr == NtcNr_Cnt_T_u16))
            {
                if(PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].IgnCntr < IgnCntr_Cnt_T_u32)
                {
                    /* Update Snapshot Data */
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].MicroDiagcData = RegInBRAMDAT1_Cnt_T_u32;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].HwTq        = HwTq_Cnt_T_s5p10;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].MotTq       = MotTqCmdMrfScad_Cnt_T_s5p10;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].IgnCntr     = IgnCntr_Cnt_T_u32;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].BrdgVltg    = BrdgVltg_Cnt_T_u6p10;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].EcuT        = EcuTFild_Cnt_T_s8p7;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].NtcNr       = (NtcNrWithResd1)NtcNr_Cnt_T_u16;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].NtcStInfo   = NtcStInfo_Cnt_T_u08;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].SysSt       = SysSt_Cnt_T_enum;
                    PimSnpshtDataAry_SnpshtDataRec1[SnpshtDataAryIdx_Cnt_T_u08].VehSpd      = VehSpd_Cnt_T_u9p7;
                    
                    /* Write to NvM */
                    (void) Rte_Call_SnpshtDataAry_SetRamBlockStatus(TRUE);
                }
                /* Update Snapshot Data and exit loop */
                SnpshtDataAryIdxInvld_Cnt_T_logl = FALSE;
            }
            else
            {
                /* Increment Snapshot Data Array Index */
                SnpshtDataAryIdx_Cnt_T_u08++;
            }
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
