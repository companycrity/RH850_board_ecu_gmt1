/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  WhlImbRejctn.c
 *     SW-C Type:  WhlImbRejctn
 *  Generated at:  Fri Feb  3 08:16:58 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <WhlImbRejctn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : WhlImbRejctn.c
* Module Description: Implementation of Wheel Imbalance Rejection FDD SF015A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 12 %
* %derived_by       : nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 2/17/16  1        SV        Initial Version                                                                  EA4#2723
* 3/21/16  2        SV        Updated for FDD ver 1.2.0                                                        EA4#2723
* 6/21/16  3        SN		  Updated for FDD ver 1.3.0                         							   EA4#6232
* 7/12/16  4        NS        Updated to fix anomaly EA4#6425                                                  EA4#6527
* 7/29/16  5        KK        Code Updates to fix anomalies EA4#6590 and EA4#6425					EA4#6679 & EA4#6682
* 9/15/16  6        ML        Updated for FDD version 1.5.0/1.6.0, Fixed anomaly EA4#6953                      EA4#7353
* 9/28/16  7	    ML        Updated to fix MISRA Violation 10.1											   EA4#7353
* 9/28/16  8        ML        Version number cleanup														   EA4#7353
* 10/11/16 9		ML		  Updated to fix anomaly EA4#7843												   EA4#7981
* 10/14/16 10		KMC       Updated to correct code error with RampNo and RampYes, and read IRVs into        EA4#8029
*                             temporary variables in cases where the same IRV is used more than once in 
*                             a periodic              
* 12/01/16 11       ML		  Updated to fix Anomaly EA4#8205												   EA4#8202
* 01/24/16 12		ML		  Updated for FDD version 1.9.0/1.10.0, Fixed anomaly EA4#8955,			 EA4#8746, EA4#9332, 
*							  Fixed anomaly EA4#9065											     EA4#9477
* 02/13/17 13       ML		  Updated to fix anomaly EA4#9828                                            	   EA4#9847       
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

  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  s8p7
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  u16p0
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u1p15
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u6p10
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u7p9
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_WhlImbRejctn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h" 
#include "ArchGlbPrm.h"
#include "NxtrFil.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"

/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.1]: Inline functions are used to allow for throughput optimization. */ 
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
type for code readability and to allow use of "sizeof". */ 
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their 
array type for code readability and to allow use of "sizeof". */ 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#define ACTIVBANDMAX_ULS_U32            4294967294U
#define ADAPVFILMAX_ULS_F32             2048.0F
#define CALMINSPERCOUNT_ULS_F32         10.0F
#define FILTWHLSPDMAX_MOTRADPERSEC_F32  100.0F
#define MICROSECTOMILLISEC_ULS_F32      0.1F
#define NODEBSTEP_CNT_U16               65535U
#define NROFDLY_CNT_U08                 30U         
#define ONEHALF_ULS_F32                 0.5F
#define ONEHUNDRED_ULS_F32              100.0F
#define ONEOVRTHREE_ULS_F32             0.33F
#define ONEOVRTWENTY_ULS_F32            0.05F
#define ONETHOUSAND_ULS_F32             1000.0F
#define PEAKMAX_ULS_F32		            127.0F
#define PEAKMIN_ULS_F32			        0.0F
#define PHAADJMAX_ULS_F32               65536.0F
#define PITIMESSAMPLETIME_ULS_F32       0.006283185F
#define STOREDMINSPERCOUNT_ULS_F32      0.0001333333F
#define TWOOVRTHREE_ULS_F32             0.66F
#define TWO_ULS_F32                     2.0F
#define NINETY_ULS_F32                  90.0F
#define WIRCMDMAX_MOTNWTMTR_F32         3.0F
#define DURATIONDISABLE_CNT_U16			18500U
#define UGRFILMAX_ULS_F32				256.0F
#define ADJOUTPMAX_ULS_F32				127.0F

#define MAXMGNMASK_CNT_U08              1U
#define QUALMASK_CNT_U08                2U
#define DCTRENDMASK_CNT_U08             4U
#define FREQDIAGCMASK_CNT_U08           8U
#define WHLSPDCORRLNMASK_CNT_U08        16U
#define SLOWSPDDIAGCMASK_CNT_U08        32U
#define MINSTOMILLISEC_ULS_F32			60000.0F

#define PimLeStDlyUpd       (*(Ary1D_f32_30 *) (Rte_Pim_LeStDlyUpd()))
#define PimLeStVariUpd      (*(Ary1D_f32_30 *) (Rte_Pim_LeStVariUpd()))
#define PimRiStDlyUpd       (*(Ary1D_f32_30 *) (Rte_Pim_RiStDlyUpd()))
#define PimRiStVariUpd      (*(Ary1D_f32_30 *) (Rte_Pim_RiStVariUpd()))
#define PimStordValLe       (*(Ary1D_f32_30 *) (Rte_Pim_StordValLe()))
#define PimStordValRi       (*(Ary1D_f32_30 *) (Rte_Pim_StordValRi()))

#define PrmWhlImbRejctnFrqScaTblX       (*(const Ary1D_u6p10_6 *) Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D())
#define PrmWhlImbRejctnFrqScaTblY       (*(const Ary1D_u1p15_6 *) Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D())
#define PrmWhlImbRejctnPhaAdjX          (*(const Ary1D_u7p9_3 *) Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D())
#define PrmWhlImbRejctnPhaAdjY          (*(const Ary1D_s8p7_3 *) Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D())
                                                      
static FUNC(float32, WHLIMBREJCTN_CODE) UGRFilOutp(float32 Y_Hz_T_f32,
                                                   float32 FreqEst_Hz_T_f32,
                                                   float32 PoleMag_Uls_T_f32,
                                                   P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Ugr1_MotRadPerSec_T_f32,
                                                   P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Ugr2_MotRadPerSec_T_f32);

static FUNC(boolean, WHLIMBREJCTN_CODE) DtrmnEnadAmnt(float32 FreqEstAvg_Hz_T_f32,
                                                      float32 WhlSpdLFilt_MotRadPerSec_T_f32,
                                                      float32 WhlSpdRFilt_MotRadPerSec_T_f32,
                                                      float32 VehSpd_Kph_T_f32,
                                                      boolean VehSpdVld_Cnt_T_logl,
                                                      boolean WhlImbRejctnCustEna_Cnt_T_logl,
                                                      boolean WhlImbRejctnDi_Cnt_T_logl,
                                                      SysSt1 SysSt_Cnt_T_enum,
                                                      P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Enable_Uls_T_f32);

static FUNC(float32, WHLIMBREJCTN_CODE) EnaRamp(float32 EnableFac_Uls_T_f32,
                                                SysSt1 SysSt_Cnt_T_enum);                                                  

static FUNC(float32, WHLIMBREJCTN_CODE) DistMag(float32 WhlSpd_MotRadPerSec_T_f32,
                                                float32 Freq_Hz_T_f32,
                                                P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) PeakPrev_Uls_T_f32,
                                                P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) CurrMag_Uls_T_f32,
												P2VAR(FilLpRec1, AUTOMATIC, WhlImbRejctn_VAR) LpFilOut_Cnt_T_FilLpRec1); 
                                                  
static FUNC(float32, WHLIMBREJCTN_CODE) ActvRejctnCmd(float32 HwTq_HwNwtMtr_T_f32,
                                                      float32 Enable_Uls_T_f32,
                                                      float32 FreqEst_Hz_T_f32);

static FUNC(float32, WHLIMBREJCTN_CODE) AdjSigFil(float32 In_MotNwtMtr_T_f32,
                                                  float32 Zm_Uls_T_f32,
                                                  float32 Pk_Uls_T_f32,
                                                  float32 B0_Uls_T_f32,
                                                  float32 MagAtFreq_Uls_T_f32,
                                                  P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Coeff1_Uls_T_f32,
                                                  P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Coeff2_Uls_T_f32);
                                                  
static FUNC(void, WHLIMBREJCTN_CODE) SetNTCBlk(void);
                                               
static FUNC(boolean, WHLIMBREJCTN_CODE) MaxMagDiag(float32 CmdAmp_MotNwtMtr_T_f32);                                            

static FUNC(boolean, WHLIMBREJCTN_CODE) DcTrendDiag(float32 WIRCmd_MtrNwtMtr_T_f32);
                                               
static FUNC(boolean, WHLIMBREJCTN_CODE) FrequencyDiag(float32 WIRCmd_MtrNwtMtr_T_f32,
                                                      float32 FreqEst_Hz_T_f32,
                                                      float32 Enable_Uls_T_f32,
                                                      float32 CmdAmp_MotNwtMtr_T_f32);

static FUNC(boolean, WHLIMBREJCTN_CODE) WhlSpdCorrDiag(float32 WhlRiFrq_Hz_T_f32,
                                                       float32 WhlLeFrq_Hz_T_f32);

static FUNC(float32, WHLIMBREJCTN_CODE) ElpdTi(boolean FltStsTrue_Cnt_T_lgc,
                                               P2VAR(boolean, AUTOMATIC, WhlImbRejctn_VAR) PrevFltStsTrue_Cnt_T_lgc,
                                               P2VAR(uint32, AUTOMATIC, WhlImbRejctn_VAR) RefTi_Sec_T_u32);
                                                  
static FUNC(void, WHLIMBREJCTN_CODE) FltRcvry(float32 ElpdTi_Sec_T_f32,
                                              float32 FltRecDly_Mins_T_f32,
                                              P2VAR(PassFailCntrDiagcRec1, AUTOMATIC, WhlImbRejctn_VAR) FltRec_Uls_T_str,
											  P2VAR(boolean, AUTOMATIC, WhlImbRejctn_VAR) FltRst_Uls_T_lgc); 
											  
static FUNC(boolean, WHLIMBREJCTN_CODE) ChkCompPersc(VAR(uint32, WhlImbRejctn_VAR) ActiveBand1Inp_Cnt_T_u32,
													 VAR(uint32, WhlImbRejctn_VAR) ActiveBand2Inp_Cnt_T_u32,
													 VAR(uint32, WhlImbRejctn_VAR) ActiveBand3Inp_Cnt_T_u32);
                                                  
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
 * s8p7: Integer in interval [-32768...32767]
 * u16p0: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u6p10: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_f32_30: Array with 30 element(s) of type float32
 * Ary1D_s8p7_3: Array with 3 element(s) of type s8p7
 * Ary1D_u1p15_6: Array with 6 element(s) of type u1p15
 * Ary1D_u6p10_6: Array with 6 element(s) of type u6p10
 * Ary1D_u7p9_3: Array with 3 element(s) of type u7p9
 *
 * Record Types:
 * =============
 * PassFailCntrDiagcRec1: Record with elements
 *   Cntr of type float32
 *   Thd of type float32
 *   NegStep of type float32
 *   PosStep of type float32
 *   Sts of type SigQlfr1
 * WhlImbRejctnCmpPeakRec1: Record with elements
 *   LePeakPrev of type float32
 *   RiPeakPrev of type float32
 *   MaxCompPerc of type float32
 *   ActvCmpBand1 of type uint32
 *   ActvCmpBand2 of type uint32
 *   ActvCmpBand3 of type uint32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_EnaSlewPerLoop(void)
 *   float32 *Rte_Pim_FrqDiagcUgr1(void)
 *   float32 *Rte_Pim_FrqDiagcUgr2(void)
 *   float32 *Rte_Pim_LeCurrMgnSlewPerLoop(void)
 *   float32 *Rte_Pim_PhaAdjFil1Coeff1(void)
 *   float32 *Rte_Pim_PhaAdjFil1Coeff2(void)
 *   float32 *Rte_Pim_PhaAdjFil2Coeff1(void)
 *   float32 *Rte_Pim_PhaAdjFil2Coeff2(void)
 *   float32 *Rte_Pim_PrevFlt(void)
 *   float32 *Rte_Pim_PrevHwTq(void)
 *   float32 *Rte_Pim_RiCurrMgnSlewPerLoop(void)
 *   float32 *Rte_Pim_ScaLe(void)
 *   float32 *Rte_Pim_ScaRi(void)
 *   float32 *Rte_Pim_UgrLe1(void)
 *   float32 *Rte_Pim_UgrLe2(void)
 *   float32 *Rte_Pim_UgrRi1(void)
 *   float32 *Rte_Pim_UgrRi2(void)
 *   float32 *Rte_Pim_dWhlImbRejctnCnclTqOutp(void)
 *   float32 *Rte_Pim_dWhlImbRejctnCurrMgnLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnCurrMgnRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnFildWhlSpdLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnFildWhlSpdRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnLMSqdOutLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnLMSqdOutRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnScaLe(void)
 *   float32 *Rte_Pim_dWhlImbRejctnScaRi(void)
 *   float32 *Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc(void)
 *   uint32 *Rte_Pim_DcTrendRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_DcTrendRefTiEnaLrngTmr1(void)
 *   uint32 *Rte_Pim_DcTrendRefTiEnaLrngTmr2(void)
 *   uint32 *Rte_Pim_FrqDiagcRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_FrqDiagcRefTiEnaLrngTiOut(void)
 *   uint32 *Rte_Pim_MaxMgnRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr(void)
 *   uint32 *Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr(void)
 *   boolean *Rte_Pim_DcTrendFltFaild(void)
 *   boolean *Rte_Pim_DcTrendFltRst(void)
 *   boolean *Rte_Pim_DcTrendLrngEnaPrev(void)
 *   boolean *Rte_Pim_DcTrendLrngEnaPrevTmr1(void)
 *   boolean *Rte_Pim_DcTrendLrngEnaPrevTmr2(void)
 *   boolean *Rte_Pim_DistbnMagEnadPrev(void)
 *   boolean *Rte_Pim_FrqDiagcFltFaild(void)
 *   boolean *Rte_Pim_FrqDiagcFltRst(void)
 *   boolean *Rte_Pim_FrqDiagcLrngEnaPrev(void)
 *   boolean *Rte_Pim_FrqDiagcLrngEnaPrevTiOut(void)
 *   boolean *Rte_Pim_MaxMgnFltFaild(void)
 *   boolean *Rte_Pim_MaxMgnFltRst(void)
 *   boolean *Rte_Pim_MaxMgnLrngEnaPrev(void)
 *   boolean *Rte_Pim_PrevSts(void)
 *   boolean *Rte_Pim_RampNo(void)
 *   boolean *Rte_Pim_RampYes(void)
 *   boolean *Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr(void)
 *   boolean *Rte_Pim_WhlSpdCorrFltFaild(void)
 *   boolean *Rte_Pim_WhlSpdCorrFltRst(void)
 *   boolean *Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev(void)
 *   boolean *Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr(void)
 *   float32 *Rte_Pim_LeStDlyUpd(void)
 *   float32 *Rte_Pim_LeStVariUpd(void)
 *   float32 *Rte_Pim_RiStDlyUpd(void)
 *   float32 *Rte_Pim_RiStVariUpd(void)
 *   float32 *Rte_Pim_StordValLe(void)
 *   float32 *Rte_Pim_StordValRi(void)
 *   FilLpRec1 *Rte_Pim_BlndCmdMgnLp1Fil(void)
 *   FilLpRec1 *Rte_Pim_BlndCmdMgnLp2Fil(void)
 *   FilLpRec1 *Rte_Pim_CmdMgnLp1Fil(void)
 *   FilLpRec1 *Rte_Pim_CmdMgnLp2Fil(void)
 *   WhlImbRejctnCmpPeakRec1 *Rte_Pim_CmpPeakData(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_DcTrendFltRcvry(void)
 *   FilLpRec1 *Rte_Pim_DcTrendLpFil(void)
 *   FilLpRec1 *Rte_Pim_DistbnMgnLeLpFil(void)
 *   FilLpRec1 *Rte_Pim_DistbnMgnRiLpFil(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_FrqDiagcFltRcvry(void)
 *   FilLpRec1 *Rte_Pim_FrqDiagcLpFil(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_MaxMgnFltRcvry(void)
 *   PassFailCntrDiagcRec1 *Rte_Pim_WhlSpdCorrlnFltRcvry(void)
 *   FilLpRec1 *Rte_Pim_WhlSpdLeLpFil(void)
 *   FilLpRec1 *Rte_Pim_WhlSpdRiLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   float32 Rte_CData_LePeakPrevDft(void)
 *   float32 Rte_CData_MaxCompPercDft(void)
 *   float32 Rte_CData_RiPeakPrevDft(void)
 *   uint32 Rte_CData_ActvCmpBand1Dft(void)
 *   uint32 Rte_CData_ActvCmpBand2Dft(void)
 *   uint32 Rte_CData_ActvCmpBand3Dft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_WhlImbRejctnAdpvFac_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnAutScaTar_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendLpFil_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendThTq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDcTrendTiSec_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgn_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnScaCncl_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnUgrPoleMgn_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnVehSpdEna_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val(void)
 *   float32 Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val(void)
 *   u16p0 Rte_Prm_WhlImbRejctnFrqDiagcTout_Val(void)
 *   uint16 Rte_Prm_WhlImbRejctnMaxDurn_Val(void)
 *   u16p0 Rte_Prm_WhlImbRejctnRampDwnTi_Val(void)
 *   u16p0 Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val(void)
 *   boolean Rte_Prm_WhlImbRejctnAutScaEna_Logl(void)
 *   boolean Rte_Prm_WhlImbRejctnFctEna_Logl(void)
 *   boolean Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl(void)
 *   u6p10 *Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D(void)
 *   u1p15 *Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D(void)
 *   u7p9 *Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D(void)
 *   s8p7 *Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D(void)
 *
 *********************************************************************************************************************/


#define WhlImbRejctn_START_SEC_CODE
#include "WhlImbRejctn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: WhlImbRejctnInit1
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
 *   void Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate(float32 data)
 *   void Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate(float32 data)
 *   void Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CmpPeakData_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_CmpPeakData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WhlImbRejctnInit1
 *********************************************************************************************************************/
    
    VAR(NvM_RequestResultType,AUTOMATIC) NVMStatusReqRes_Cnt_T_enum;
	VAR(boolean, AUTOMATIC) 				IniCmpFltSts_Cnt_T_lgc;
	
	FilLpInit(0.0F,Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_WhlSpdRiLpFil());
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_WhlSpdLeLpFil());
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_DistbnMgnLeLpFil());
	FilLpInit(0.0F,Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_DistbnMgnRiLpFil());
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_CmdMgnLp1Fil());
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_CmdMgnLp2Fil());
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_BlndCmdMgnLp1Fil());
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_BlndCmdMgnLp2Fil());
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnDcTrendLpFil_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_DcTrendLpFil()); 
    FilLpInit(0.0F,Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_FrqDiagcLpFil());
    
    Rte_Pim_MaxMgnFltRcvry()->Thd = Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val(); 
    Rte_Pim_MaxMgnFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val();
    Rte_Pim_MaxMgnFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val();

    Rte_Pim_DcTrendFltRcvry()->Thd = Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val(); 
    Rte_Pim_DcTrendFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val();
    Rte_Pim_DcTrendFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val();
    
    Rte_Pim_FrqDiagcFltRcvry()->Thd = Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val(); 
    Rte_Pim_FrqDiagcFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val();
    Rte_Pim_FrqDiagcFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val();
    
    Rte_Pim_WhlSpdCorrlnFltRcvry()->Thd = Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val(); 
    Rte_Pim_WhlSpdCorrlnFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val();
    Rte_Pim_WhlSpdCorrlnFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val();
    
    Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate(Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val() / ARCHGLBPRM_2MILLISEC_SEC_F32);
    Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate(Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val() / ARCHGLBPRM_2MILLISEC_SEC_F32);
    
    *Rte_Pim_ScaLe() = 1.0F;
    *Rte_Pim_ScaRi() = 1.0F;
    
	/* Check NVM Data */
	(void)Rte_Call_CmpPeakData_GetErrorStatus(&NVMStatusReqRes_Cnt_T_enum);
    
    if(NVMStatusReqRes_Cnt_T_enum !=  NVM_REQ_OK)
    {
        /* NVM not valid */
		Rte_Pim_CmpPeakData()->ActvCmpBand1 = 0U;
		Rte_Pim_CmpPeakData()->ActvCmpBand2 = 0U;
		Rte_Pim_CmpPeakData()->ActvCmpBand3 = 0U;
		Rte_Pim_CmpPeakData()->LePeakPrev = 0.0F;
		Rte_Pim_CmpPeakData()->MaxCompPerc = 0.0F;
		Rte_Pim_CmpPeakData()->RiPeakPrev = 0.0F;
    }
	
	if((Rte_Pim_CmpPeakData()->ActvCmpBand1 == ACTIVBANDMAX_ULS_U32) ||
	   (Rte_Pim_CmpPeakData()->ActvCmpBand2 == ACTIVBANDMAX_ULS_U32) ||
	   (Rte_Pim_CmpPeakData()->ActvCmpBand3 == ACTIVBANDMAX_ULS_U32) ||
	   ((Rte_Pim_CmpPeakData()->MaxCompPerc < 0.0F) || (Rte_Pim_CmpPeakData()->MaxCompPerc > (ONEHALF_ULS_F32 * TWO_ULS_F32))))
    {
		Rte_Pim_CmpPeakData()->ActvCmpBand1 = 0U;
		Rte_Pim_CmpPeakData()->ActvCmpBand2 = 0U;
		Rte_Pim_CmpPeakData()->ActvCmpBand3 = 0U;
		Rte_Pim_CmpPeakData()->MaxCompPerc = 0.0F;
    }
	
	if(((Rte_Pim_CmpPeakData()->LePeakPrev < PEAKMIN_ULS_F32) || (Rte_Pim_CmpPeakData()->LePeakPrev > PEAKMAX_ULS_F32)) ||
	   ((Rte_Pim_CmpPeakData()->RiPeakPrev < PEAKMIN_ULS_F32) || (Rte_Pim_CmpPeakData()->RiPeakPrev > PEAKMAX_ULS_F32)))
    {
		Rte_Pim_CmpPeakData()->LePeakPrev = 0.0F;
		Rte_Pim_CmpPeakData()->RiPeakPrev = 0.0F;
    }
	
	IniCmpFltSts_Cnt_T_lgc = ChkCompPersc(Rte_Pim_CmpPeakData()->ActvCmpBand1,
										  Rte_Pim_CmpPeakData()->ActvCmpBand2,
										  Rte_Pim_CmpPeakData()->ActvCmpBand3);
													 
	Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt(IniCmpFltSts_Cnt_T_lgc);
	
	(void)Rte_Call_CmpPeakData_SetRamBlockStatus(TRUE);
	 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: WhlImbRejctnPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlFrqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnCustEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlLeFrq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlRiFrq_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlImbRejctnActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlImbRejctnAmp_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlImbRejctnCmd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate(void)
 *   float32 Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp(float32 data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt(boolean data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt(boolean data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt(boolean data)
 *   void Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt(boolean data)
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

FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WhlImbRejctnPer1
 *********************************************************************************************************************/
    
    /* inputs */
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlFrqVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlImbRejctnCustEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) WhlImbRejctnDi_Cnt_T_logl;
    VAR(float32, AUTOMATIC) WhlLeFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlRiFrq_Hz_T_f32;
    
    /* 'Whl Spd filter and Freq Estimation' variables */
    VAR(float32, AUTOMATIC) WhlLeFrqQlfdFild_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlRiFrqQlfdFild_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlLeFrqQlfdY_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlRiFrqQlfdY_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlLeFrqQlfdUGRFild_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) WhlRiFrqQlfdUGRFild_MotRadPerSec_T_f32;
    
    VAR(float32, AUTOMATIC) FiltWhlLSpd_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) FiltWhlRSpd_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) FreqEst_Hz_T_f32;
            
    /* 'Determine Enabled Amt' variables */
    VAR(boolean, AUTOMATIC) WhlImbRejctnActv_Cnt_T_logl;
    VAR(float32, AUTOMATIC) Enable_Uls_T_f32;
    
    /* 'WIR Diagnostics' variables */
    VAR(float32, AUTOMATIC) FilAmpTmp_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) CmdAmp_MotNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) MaxMgnFlt_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) DCTrend_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) FrqDiagc_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) WhlSpdCorrln_Cnt_T_lgc;
	VAR(float32, AUTOMATIC) FilAmpTmp2_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) Amp_MotNwtMtr_T_f32;
    
    /* 'Active Rejection Command' variables */
    VAR(float32, AUTOMATIC) WhlImbRejctnCmd_MtrNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) WhlImbRejctnCmdDiag_MtrNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) WhlImbRejctnAmp_MtrNm_T_f32;
	
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
        
    /* read inputs */
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    (void)Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
    (void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);
    (void)Rte_Read_WhlFrqVld_Logl(&WhlFrqVld_Cnt_T_logl);
    (void)Rte_Read_WhlImbRejctnCustEna_Logl(&WhlImbRejctnCustEna_Cnt_T_logl);
    (void)Rte_Read_WhlImbRejctnDi_Logl(&WhlImbRejctnDi_Cnt_T_logl);
    (void)Rte_Read_WhlLeFrq_Val(&WhlLeFrq_Hz_T_f32);
    (void)Rte_Read_WhlRiFrq_Val(&WhlRiFrq_Hz_T_f32);
    
    /*** Start of 'Whl Spd filter and Freq Estimation' ***/
    WhlLeFrqQlfdFild_Hz_T_f32 = FilLpUpdOutp_f32(WhlLeFrq_Hz_T_f32,Rte_Pim_WhlSpdLeLpFil());
    WhlLeFrqQlfdY_Hz_T_f32 = WhlLeFrq_Hz_T_f32 * ARCHGLBPRM_2PI_ULS_F32;
    /* UGR L */
    WhlLeFrqQlfdUGRFild_MotRadPerSec_T_f32 = UGRFilOutp(WhlLeFrqQlfdY_Hz_T_f32,
                                                        WhlLeFrqQlfdFild_Hz_T_f32,
                                                        Rte_Prm_WhlImbRejctnUgrPoleMgn_Val(),
                                                        Rte_Pim_UgrLe1(),
                                                        Rte_Pim_UgrLe2());
    *Rte_Pim_dWhlImbRejctnFildWhlSpdLe() = WhlLeFrqQlfdUGRFild_MotRadPerSec_T_f32;
    FiltWhlLSpd_MotRadPerSec_T_f32 = Lim_f32(WhlLeFrqQlfdUGRFild_MotRadPerSec_T_f32, -FILTWHLSPDMAX_MOTRADPERSEC_F32, FILTWHLSPDMAX_MOTRADPERSEC_F32);

    /* Tapped Delay Implementation1 */
	for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < (NROFDLY_CNT_U08-1U); Idx_Cnt_T_u08++)
	{
		PimStordValLe[Idx_Cnt_T_u08] = PimStordValLe[Idx_Cnt_T_u08+1U];
	}
	
	PimStordValLe[NROFDLY_CNT_U08 - 1U] = WhlLeFrqQlfdUGRFild_MotRadPerSec_T_f32 * (*Rte_Pim_ScaLe());	
    
    WhlRiFrqQlfdFild_Hz_T_f32 = FilLpUpdOutp_f32(WhlRiFrq_Hz_T_f32,Rte_Pim_WhlSpdRiLpFil());
    WhlRiFrqQlfdY_Hz_T_f32 = WhlRiFrq_Hz_T_f32 * ARCHGLBPRM_2PI_ULS_F32;
    /* UGR R */ 
    WhlRiFrqQlfdUGRFild_MotRadPerSec_T_f32 = UGRFilOutp(WhlRiFrqQlfdY_Hz_T_f32,
                                                        WhlRiFrqQlfdFild_Hz_T_f32,
                                                        Rte_Prm_WhlImbRejctnUgrPoleMgn_Val(),
                                                        Rte_Pim_UgrRi1(),
                                                        Rte_Pim_UgrRi2());
    *Rte_Pim_dWhlImbRejctnFildWhlSpdRi() = WhlRiFrqQlfdUGRFild_MotRadPerSec_T_f32;
    FiltWhlRSpd_MotRadPerSec_T_f32 = Lim_f32(WhlRiFrqQlfdUGRFild_MotRadPerSec_T_f32, -FILTWHLSPDMAX_MOTRADPERSEC_F32, FILTWHLSPDMAX_MOTRADPERSEC_F32);

    /* Tapped Delay Implementation2 */
    for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < (NROFDLY_CNT_U08-1U); Idx_Cnt_T_u08++)
	{
		PimStordValRi[Idx_Cnt_T_u08] = PimStordValRi[Idx_Cnt_T_u08+1U];
	}
	
	PimStordValRi[NROFDLY_CNT_U08 - 1U] = WhlRiFrqQlfdUGRFild_MotRadPerSec_T_f32 * (*Rte_Pim_ScaRi());
	 
    FreqEst_Hz_T_f32 = (WhlLeFrqQlfdFild_Hz_T_f32 + WhlRiFrqQlfdFild_Hz_T_f32) * ONEHALF_ULS_F32;
    
    /*** End of 'Whl Spd filter and Freq Estimation' ***/
    
    /*** Start of 'Determine Enabled Amt' ***/  
    WhlImbRejctnActv_Cnt_T_logl = DtrmnEnadAmnt(FreqEst_Hz_T_f32,
                                                FiltWhlLSpd_MotRadPerSec_T_f32,
                                                FiltWhlRSpd_MotRadPerSec_T_f32,
                                                VehSpd_Kph_T_f32,
                                                VehSpdVld_Cnt_T_logl,
                                                WhlImbRejctnCustEna_Cnt_T_logl,
                                                WhlImbRejctnDi_Cnt_T_logl,
                                                SysSt_Cnt_T_enum,
                                                &Enable_Uls_T_f32);
    /*** End of 'Determine Enabled Amt' ***/

    /*** Start of 'Active Rejection Command' ***/   
    WhlImbRejctnCmd_MtrNwtMtr_T_f32 = ActvRejctnCmd(HwTq_HwNwtMtr_T_f32,
                                                    Enable_Uls_T_f32,
                                                    FreqEst_Hz_T_f32);
													
	WhlImbRejctnCmdDiag_MtrNwtMtr_T_f32 = WhlImbRejctnCmd_MtrNwtMtr_T_f32;
													
	WhlImbRejctnCmd_MtrNwtMtr_T_f32 = Lim_f32(WhlImbRejctnCmd_MtrNwtMtr_T_f32, -Rte_Prm_WhlImbRejctnMaxMgn_Val(), Rte_Prm_WhlImbRejctnMaxMgn_Val());
	
    /*** End of 'Active Rejection Command' ***/
 
	
    /*** Start of 'WIR Diagnostics' ***/   
	/* Amplitude Calculation1 */

    FilAmpTmp_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(Abslt_f32_f32(WhlImbRejctnCmdDiag_MtrNwtMtr_T_f32),Rte_Pim_BlndCmdMgnLp1Fil());    
    CmdAmp_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(FilAmpTmp_MotNwtMtr_T_f32 * ARCHGLBPRM_PIOVER2_ULS_F32,Rte_Pim_BlndCmdMgnLp2Fil());
	
    /* MaxMagDiag */
    MaxMgnFlt_Cnt_T_lgc = MaxMagDiag(CmdAmp_MotNwtMtr_T_f32);
        
    /* DcTrendDiag */
    DCTrend_Cnt_T_lgc = DcTrendDiag(WhlImbRejctnCmdDiag_MtrNwtMtr_T_f32);
    
    /* FrequencyDiag */
    FrqDiagc_Cnt_T_lgc = FrequencyDiag(WhlImbRejctnCmdDiag_MtrNwtMtr_T_f32,
                                       FreqEst_Hz_T_f32,
                                       Enable_Uls_T_f32,
                                       CmdAmp_MotNwtMtr_T_f32);
    /* WhlSpdCorrDiag */                                   
    WhlSpdCorrln_Cnt_T_lgc = WhlSpdCorrDiag(WhlRiFrq_Hz_T_f32,
                                            WhlLeFrq_Hz_T_f32); 

    if((Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc() == TRUE) ||
       (MaxMgnFlt_Cnt_T_lgc == TRUE) ||
	   (Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt() == TRUE))
    {
        *Rte_Pim_RampYes() = TRUE;
    }
	else
    {
        *Rte_Pim_RampYes() = FALSE;
    }
	

    if((DCTrend_Cnt_T_lgc == TRUE) ||
       (FrqDiagc_Cnt_T_lgc == TRUE) ||
       (WhlSpdCorrln_Cnt_T_lgc == TRUE) ||
       (WhlFrqVld_Cnt_T_logl == FALSE))
    {
        *Rte_Pim_RampNo() = TRUE;
    }
	else
    {
        *Rte_Pim_RampNo() = FALSE;
    }
	
	
	
    if(((DCTrend_Cnt_T_lgc == TRUE) || (FrqDiagc_Cnt_T_lgc == TRUE) || (WhlSpdCorrln_Cnt_T_lgc == TRUE)) ||
	   (MaxMgnFlt_Cnt_T_lgc == TRUE) ||
	   ((Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc() == TRUE) || (Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt() == TRUE)))
    {   
        /* Set NTC Block */
        SetNTCBlk();
    }
	else
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A5, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
	}	
    /*** End of 'WIR Diagnostics' ***/
	
	WhlImbRejctnCmd_MtrNwtMtr_T_f32 = Lim_f32(WhlImbRejctnCmd_MtrNwtMtr_T_f32, -Rte_Prm_WhlImbRejctnMaxMgn_Val(), Rte_Prm_WhlImbRejctnMaxMgn_Val());
	
	/* Amplitude Calculation */
    FilAmpTmp2_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(Abslt_f32_f32(WhlImbRejctnCmd_MtrNwtMtr_T_f32),Rte_Pim_CmdMgnLp1Fil());
    Amp_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(FilAmpTmp2_MotNwtMtr_T_f32 * ARCHGLBPRM_PIOVER2_ULS_F32,Rte_Pim_CmdMgnLp2Fil());
    
    WhlImbRejctnAmp_MtrNm_T_f32 = Lim_f32(Amp_MotNwtMtr_T_f32, 0.0F, WIRCMDMAX_MOTNWTMTR_F32);
	
	
	/* write IRVs */
	Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp(CmdAmp_MotNwtMtr_T_f32);
    Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt(DCTrend_Cnt_T_lgc);
    Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt(FrqDiagc_Cnt_T_lgc);
    Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt(MaxMgnFlt_Cnt_T_lgc);
    Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt(WhlSpdCorrln_Cnt_T_lgc);
	
    /* write out */
    (void) Rte_Write_WhlImbRejctnActv_Logl(WhlImbRejctnActv_Cnt_T_logl);
    (void) Rte_Write_WhlImbRejctnAmp_Val(WhlImbRejctnAmp_MtrNm_T_f32);
    (void) Rte_Write_WhlImbRejctnCmd_Val(Lim_f32(WhlImbRejctnCmd_MtrNwtMtr_T_f32,
                                              -WIRCMDMAX_MOTNWTMTR_F32,
                                              WIRCMDMAX_MOTNWTMTR_F32));
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: WhlImbRejctnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_WhlImbRejctnPer2_CmdAmp(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt(void)
 *   boolean Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc(boolean data)
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
 *********************************************************************************************************************/

FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WhlImbRejctnPer2
 *********************************************************************************************************************/

    VAR(float32, AUTOMATIC) WhlSpdCorrlnFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) ElpdTiMaxMag_MilliSec_T_f32;
    VAR(float32, AUTOMATIC) ElpdTiDcTrend_MilliSec_T_f32;
    VAR(float32, AUTOMATIC) ElpdTiFrqDiagc_MilliSec_T_f32;
    VAR(float32, AUTOMATIC) ElpdTiWhlSpdCorrln_MilliSec_T_f32;
	VAR(boolean, AUTOMATIC) SlowSpeedDiag_Cnt_T_lgc;
    
    /* WIR Low Speed Diagnostics */
    if(Rte_IrvRead_WhlImbRejctnPer2_CmdAmp() >= Rte_Prm_WhlImbRejctnMaxMgn_Val())
    {
		WhlSpdCorrlnFac_Uls_T_f32 = 1.0F;
    }
	else
	{
		WhlSpdCorrlnFac_Uls_T_f32 = Rte_IrvRead_WhlImbRejctnPer2_CmdAmp() / Rte_Prm_WhlImbRejctnMaxMgn_Val();
    }
	
    if((WhlSpdCorrlnFac_Uls_T_f32 >= TWOOVRTHREE_ULS_F32) && 
	   (Rte_Pim_CmpPeakData()->ActvCmpBand3 < ACTIVBANDMAX_ULS_U32))
    {
        Rte_Pim_CmpPeakData()->ActvCmpBand3 = 1U + Rte_Pim_CmpPeakData()->ActvCmpBand3;
    }
    
    if((WhlSpdCorrlnFac_Uls_T_f32 < TWOOVRTHREE_ULS_F32) &&
       (WhlSpdCorrlnFac_Uls_T_f32 >= ONEOVRTHREE_ULS_F32) &&
	   (Rte_Pim_CmpPeakData()->ActvCmpBand2 < ACTIVBANDMAX_ULS_U32))
    {
        Rte_Pim_CmpPeakData()->ActvCmpBand2 = 1U + Rte_Pim_CmpPeakData()->ActvCmpBand2;
    }
    
    if((WhlSpdCorrlnFac_Uls_T_f32 < ONEOVRTHREE_ULS_F32) &&
       (WhlSpdCorrlnFac_Uls_T_f32 >= ONEOVRTWENTY_ULS_F32) &&
	   (Rte_Pim_CmpPeakData()->ActvCmpBand1 < ACTIVBANDMAX_ULS_U32))
    {
        Rte_Pim_CmpPeakData()->ActvCmpBand1 = 1U + Rte_Pim_CmpPeakData()->ActvCmpBand1;
    }
    
    if(WhlSpdCorrlnFac_Uls_T_f32 >= Rte_Pim_CmpPeakData()->MaxCompPerc)
    {
        Rte_Pim_CmpPeakData()->MaxCompPerc = WhlSpdCorrlnFac_Uls_T_f32;
    }

	/* CheckCompPersistence */
	SlowSpeedDiag_Cnt_T_lgc = ChkCompPersc(Rte_Pim_CmpPeakData()->ActvCmpBand1,
										   Rte_Pim_CmpPeakData()->ActvCmpBand2,
										   Rte_Pim_CmpPeakData()->ActvCmpBand3);
							  
	Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc(SlowSpeedDiag_Cnt_T_lgc);
    
    /* Flt Recovery- Max Mag */
    ElpdTiMaxMag_MilliSec_T_f32 = ElpdTi(Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt(),
                                         Rte_Pim_MaxMgnLrngEnaPrev(),
                                         Rte_Pim_MaxMgnRefTiEnaLrng());
    
    FltRcvry(ElpdTiMaxMag_MilliSec_T_f32,
             Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val(),
             Rte_Pim_MaxMgnFltRcvry(),
			 Rte_Pim_MaxMgnFltRst());
    	
    /* Flt Recovery- Dc Trend */
    ElpdTiDcTrend_MilliSec_T_f32 = ElpdTi(Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt(),
                                          Rte_Pim_DcTrendLrngEnaPrev(),
                                          Rte_Pim_DcTrendRefTiEnaLrng());
             
    FltRcvry(ElpdTiDcTrend_MilliSec_T_f32,
             Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val(),
             Rte_Pim_DcTrendFltRcvry(),
			 Rte_Pim_DcTrendFltRst());
    
    /* Flt Recovery- Frq Diagc */
    ElpdTiFrqDiagc_MilliSec_T_f32 = ElpdTi(Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt(),
                                           Rte_Pim_FrqDiagcLrngEnaPrev(),
                                           Rte_Pim_FrqDiagcRefTiEnaLrng());
             
    FltRcvry(ElpdTiFrqDiagc_MilliSec_T_f32,
             Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val(),
             Rte_Pim_FrqDiagcFltRcvry(),
			 Rte_Pim_FrqDiagcFltRst());
			        
    /* Flt Recovery- WhlSpdCorr Diag */
    ElpdTiWhlSpdCorrln_MilliSec_T_f32 = ElpdTi(Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt(),
                                               Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev(),
                                               Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng());
             
    FltRcvry(ElpdTiWhlSpdCorrln_MilliSec_T_f32,
             Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val(),
             Rte_Pim_WhlSpdCorrlnFltRcvry(),
			 Rte_Pim_WhlSpdCorrFltRst());
             
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define WhlImbRejctn_STOP_SEC_CODE
#include "WhlImbRejctn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   FltRcvry
* Description   :   "Flt Recovery" block implementation.                 
* Inputs        :   ElpdTi_Sec_T_f32, FltRecDly_Mins_T_f32,*FltRec_Uls_T_str,
*					*FltRst_Uls_T_lgc                   
* Outputs       :   YFild_Hz_T_f32
* Usage Notes   :   None
*****************************************************************************/
static FUNC(void, WHLIMBREJCTN_CODE) FltRcvry(float32 ElpdTi_Sec_T_f32,
                                              float32 FltRecDly_Mins_T_f32,
                                              P2VAR(PassFailCntrDiagcRec1, AUTOMATIC, WhlImbRejctn_VAR) FltRec_Uls_T_str,
											  P2VAR(boolean, AUTOMATIC, WhlImbRejctn_VAR) FltRst_Uls_T_lgc) 
{
    if(ElpdTi_Sec_T_f32 >= (FltRecDly_Mins_T_f32 * MINSTOMILLISEC_ULS_F32))
    {
		*FltRst_Uls_T_lgc = TRUE;
        FltRec_Uls_T_str->Cntr = Min_f32((FltRec_Uls_T_str->PosStep + FltRec_Uls_T_str->Cntr),FltRec_Uls_T_str->Thd);
    }
    else
    {
		*FltRst_Uls_T_lgc = FALSE;
        FltRec_Uls_T_str->Cntr = Max_f32((FltRec_Uls_T_str->Cntr - FltRec_Uls_T_str->NegStep),0.0F);
    }
    
    /* Update Fault Status */
    if(FltRec_Uls_T_str->Cntr >= FltRec_Uls_T_str->Thd)
    {
        FltRec_Uls_T_str->Sts = SIGQLFR_FAILD;
    }
    else if(FltRec_Uls_T_str->Cntr <= 0.0F)
    {
        FltRec_Uls_T_str->Sts = SIGQLFR_PASSD;
    }
    else
    {
    }
}       
/*******************************************************************************
* Name          :   UGRFilOutp
* Description   :   UGR filter implementation.                 
* Inputs        :   Y_Hz_T_f32,FreqEst_Hz_T_f32,PoleMag_Uls_T_f32, 
*                   Ugr1_MotRadPerSec_T_f32 - PIM used in 'UnityGainResFilt' sub block,
*                   Ugr2_MotRadPerSec_T_f32 - PIM used in 'UnityGainResFilt' sub block                    
* Outputs       :   YFild_Hz_T_f32
* Usage Notes   :   None
*****************************************************************************/
static FUNC(float32, WHLIMBREJCTN_CODE) UGRFilOutp(float32 Y_Hz_T_f32,
                                                   float32 FreqEst_Hz_T_f32,
                                                   float32 PoleMag_Uls_T_f32,
                                                   P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Ugr1_MotRadPerSec_T_f32,
                                                   P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Ugr2_MotRadPerSec_T_f32)
{
    VAR(float32, AUTOMATIC) WhlImbRejctnFrqScaTblXFirst_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlImbRejctnFrqScaTblXEnd_Hz_T_f32;
    VAR(float32, AUTOMATIC) MinusA1_Uls_T_f32;
    VAR(float32, AUTOMATIC) A2_Uls_T_f32;
    VAR(float32, AUTOMATIC) Yby2_Hz_T_f32;
    VAR(float32, AUTOMATIC) YFild_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) YPreFild_MotRadPerSec_T_f32;
        
    /* Calc_ma1_a2 */
    WhlImbRejctnFrqScaTblXFirst_Hz_T_f32 = FixdToFloat_f32_u16(PrmWhlImbRejctnFrqScaTblX[0],NXTRFIXDPT_P10TOFLOAT_ULS_F32);
    
    /* 'PrmWhlImbRejctnFrqScaTblX[TblSize_m(PrmWhlImbRejctnFrqScaTblX)-1]' is the last element in the 'WhlImbRejctnFrqScaTblX' cal array */
    WhlImbRejctnFrqScaTblXEnd_Hz_T_f32 = FixdToFloat_f32_u16(PrmWhlImbRejctnFrqScaTblX[TblSize_m(PrmWhlImbRejctnFrqScaTblX)-1U],NXTRFIXDPT_P10TOFLOAT_ULS_F32);
    
    MinusA1_Uls_T_f32 = (Cos_f32((Lim_f32(FreqEst_Hz_T_f32, WhlImbRejctnFrqScaTblXFirst_Hz_T_f32,WhlImbRejctnFrqScaTblXEnd_Hz_T_f32)) * 
                                  ARCHGLBPRM_2MILLISEC_SEC_F32 *
                                  ARCHGLBPRM_2PI_ULS_F32)) *
                        TWO_ULS_F32 *
                        PoleMag_Uls_T_f32;
    
    A2_Uls_T_f32 = PoleMag_Uls_T_f32 * PoleMag_Uls_T_f32;
    
    /* UnityGainResFilt */
    Yby2_Hz_T_f32 = Y_Hz_T_f32 * ONEHALF_ULS_F32;
    
    YPreFild_MotRadPerSec_T_f32 = (Yby2_Hz_T_f32 -
                                  (A2_Uls_T_f32 * (Yby2_Hz_T_f32 + *Ugr2_MotRadPerSec_T_f32))) +
                                   (*Ugr1_MotRadPerSec_T_f32 * MinusA1_Uls_T_f32);
    
    YFild_MotRadPerSec_T_f32 = YPreFild_MotRadPerSec_T_f32 - *Ugr2_MotRadPerSec_T_f32;  
    
    *Ugr2_MotRadPerSec_T_f32 = *Ugr1_MotRadPerSec_T_f32;
    
    *Ugr1_MotRadPerSec_T_f32 = YPreFild_MotRadPerSec_T_f32;
	
	YFild_MotRadPerSec_T_f32 = Lim_f32(YFild_MotRadPerSec_T_f32, -UGRFILMAX_ULS_F32, UGRFILMAX_ULS_F32);
    
    return YFild_MotRadPerSec_T_f32;
}
/*******************************************************************************
* Name          :   ElpdTi
* Description   :   "Elapsed Timer" block implementation.                 
* Inputs        :   FltStsTrue_Cnt_T_lgc - Fault condition current status
*                   PrevFltStsTrue_Cnt_T_lgc - Fault condition previous status (PIM)                     
*                   RefTi_Sec_T_u32 - Reference Timer (PIM)
* Outputs       :   ElpdTi_Sec_T_f32 - Elapsed Time 
* Usage Notes   :   None
*****************************************************************************/
static FUNC(float32, WHLIMBREJCTN_CODE) ElpdTi(boolean FltStsTrue_Cnt_T_lgc,
                                               P2VAR(boolean, AUTOMATIC, WhlImbRejctn_VAR) PrevFltStsTrue_Cnt_T_lgc,
                                               P2VAR(uint32, AUTOMATIC, WhlImbRejctn_VAR) RefTi_Sec_T_u32)
{
    VAR(float32, AUTOMATIC) ElpdTi_Sec_T_f32 = 0.0F;
    VAR(uint32, AUTOMATIC) SpanTi_Cnt_T_u32;
    
    if(FltStsTrue_Cnt_T_lgc == FALSE)
    {
    }
    else if(*PrevFltStsTrue_Cnt_T_lgc == FALSE)
    {
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTi_Sec_T_u32);                 
    }
    else
    {
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*RefTi_Sec_T_u32, &SpanTi_Cnt_T_u32); 
        ElpdTi_Sec_T_f32 = (FixdToFloat_f32_u32(SpanTi_Cnt_T_u32,NXTRFIXDPT_P0TOFLOAT_ULS_F32)) * MICROSECTOMILLISEC_ULS_F32;
    }
    *PrevFltStsTrue_Cnt_T_lgc = FltStsTrue_Cnt_T_lgc;
    
    return ElpdTi_Sec_T_f32;
}
/*******************************************************************************
* Name          :   SetNTCBlk
* Description   :   'Set NTC Block' implementation. 
* Inputs        :   None                  
* Outputs       :   None 
* Usage Notes   :   None
*****************************************************************************/
static FUNC(void, WHLIMBREJCTN_CODE) SetNTCBlk(void)
{             
    VAR(uint8, AUTOMATIC) NtcStInfo_Cnt_T_u08 = 0U;
				  
    if(Rte_Pim_MaxMgnFltRcvry()->Sts == SIGQLFR_FAILD)
    {
        NtcStInfo_Cnt_T_u08 = MAXMGNMASK_CNT_U08;
    }
    
    if(Rte_Pim_DcTrendFltRcvry()->Sts == SIGQLFR_FAILD)
    {
        NtcStInfo_Cnt_T_u08 |= (uint8)DCTRENDMASK_CNT_U08;
    }

    if(Rte_Pim_FrqDiagcFltRcvry()->Sts == SIGQLFR_FAILD)
    {
        NtcStInfo_Cnt_T_u08 |= (uint8)FREQDIAGCMASK_CNT_U08;
    }

    if(Rte_Pim_WhlSpdCorrlnFltRcvry()->Sts == SIGQLFR_FAILD)
    {
        NtcStInfo_Cnt_T_u08 |= (uint8)WHLSPDCORRLNMASK_CNT_U08;
    }
    
	if((Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc() == TRUE) || (Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt() == TRUE))
    {
        NtcStInfo_Cnt_T_u08 |= (uint8)SLOWSPDDIAGCMASK_CNT_U08;
    }
	
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A5, NtcStInfo_Cnt_T_u08, NTCSTS_FAILD, NODEBSTEP_CNT_U16);

}   
/*******************************************************************************
* Name          :   WhlSpdCorrDiag
* Description   :   "WhlSpdCorrDiag" block implementation.                 
* Inputs        :   WhlRiFrq_Hz_T_f32,WhlLeFrq_Hz_T_f32
* Outputs       :   FltStat_Cnt_T_lgc 
* Usage Notes   :   None
*****************************************************************************/
static FUNC(boolean, WHLIMBREJCTN_CODE) WhlSpdCorrDiag(float32 WhlRiFrq_Hz_T_f32,
                                                       float32 WhlLeFrq_Hz_T_f32)   
{
    VAR(boolean, AUTOMATIC) WhlRiFrqQlfdInRng_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) WhlLeFrqQlfdInRng_Cnt_T_lgc = FALSE;
    VAR(float32, AUTOMATIC) WhlImbRejctnWhlSpdCorrPerc_Uls_T_f32;
    VAR(float32, AUTOMATIC) ElpdTi_Sec_T_f32;
    VAR(boolean, AUTOMATIC) FltStsTrue_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) FltSts_Cnt_T_lgc;
    VAR(float32, AUTOMATIC) WhlImbRejctnFrqScaTblXFirst_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlImbRejctnFrqScaTblXEnd_Hz_T_f32;
	VAR(boolean, AUTOMATIC) FltFaild_Cnt_T_lgc;
    
    
    WhlImbRejctnFrqScaTblXFirst_Hz_T_f32 = FixdToFloat_f32_u16(PrmWhlImbRejctnFrqScaTblX[0],NXTRFIXDPT_P10TOFLOAT_ULS_F32);
    
    /* 'PrmWhlImbRejctnFrqScaTblX[TblSize_m(PrmWhlImbRejctnFrqScaTblX)-1]' is the last element in the 'WhlImbRejctnFrqScaTblX' cal array */
    WhlImbRejctnFrqScaTblXEnd_Hz_T_f32 = FixdToFloat_f32_u16(PrmWhlImbRejctnFrqScaTblX[TblSize_m(PrmWhlImbRejctnFrqScaTblX)-1U],NXTRFIXDPT_P10TOFLOAT_ULS_F32);
    
    if((WhlRiFrq_Hz_T_f32 >= WhlImbRejctnFrqScaTblXFirst_Hz_T_f32) &&
       (WhlRiFrq_Hz_T_f32 <= WhlImbRejctnFrqScaTblXEnd_Hz_T_f32))
    {
        WhlRiFrqQlfdInRng_Cnt_T_lgc = TRUE;
    }
    
    if((WhlLeFrq_Hz_T_f32 >= WhlImbRejctnFrqScaTblXFirst_Hz_T_f32) &&
       (WhlLeFrq_Hz_T_f32 <= WhlImbRejctnFrqScaTblXEnd_Hz_T_f32))
    {
        WhlLeFrqQlfdInRng_Cnt_T_lgc = TRUE;
    }
    
    if((WhlRiFrq_Hz_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) ||
       (WhlLeFrq_Hz_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
    {
        WhlImbRejctnWhlSpdCorrPerc_Uls_T_f32 = ONEHUNDRED_ULS_F32;
    }   
    else
    {
        if(WhlRiFrq_Hz_T_f32 >= WhlLeFrq_Hz_T_f32)
        {
            WhlImbRejctnWhlSpdCorrPerc_Uls_T_f32 = (WhlLeFrq_Hz_T_f32 / WhlRiFrq_Hz_T_f32) * ONEHUNDRED_ULS_F32; 
        }
        else
		{
            WhlImbRejctnWhlSpdCorrPerc_Uls_T_f32 = (WhlRiFrq_Hz_T_f32 / WhlLeFrq_Hz_T_f32) * ONEHUNDRED_ULS_F32; 
        }
    }
    
    *Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc() = WhlImbRejctnWhlSpdCorrPerc_Uls_T_f32;
    
    if((WhlImbRejctnWhlSpdCorrPerc_Uls_T_f32 < Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val()) &&
       ((WhlRiFrqQlfdInRng_Cnt_T_lgc == TRUE) || (WhlLeFrqQlfdInRng_Cnt_T_lgc == TRUE)))
    {
        FltStsTrue_Cnt_T_lgc = TRUE;
    }
    
    ElpdTi_Sec_T_f32 = ElpdTi(FltStsTrue_Cnt_T_lgc,
                              Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr(),
                              Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr());
    
    if(ElpdTi_Sec_T_f32 >= FixdToFloat_f32_u16(Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val(),NXTRFIXDPT_P0TOFLOAT_ULS_F32))
    {
        FltSts_Cnt_T_lgc = TRUE;
    }
    else
    {
        FltSts_Cnt_T_lgc = FALSE;
    }
	
	if(FltSts_Cnt_T_lgc == TRUE)
	{
		if(*Rte_Pim_WhlSpdCorrFltRst() == TRUE)
		{
			FltFaild_Cnt_T_lgc = FALSE;
			*Rte_Pim_WhlSpdCorrFltRst() = FALSE;
		}
		else
		{
			FltFaild_Cnt_T_lgc = TRUE;
		}
	}
	else
	{
		FltFaild_Cnt_T_lgc = *Rte_Pim_WhlSpdCorrFltFaild();
	}
	
	*Rte_Pim_WhlSpdCorrFltFaild() = FltFaild_Cnt_T_lgc;
	
	if((Rte_Pim_WhlSpdCorrlnFltRcvry()->Sts == SIGQLFR_FAILD) || (FltFaild_Cnt_T_lgc == TRUE))
	{
		FltSts_Cnt_T_lgc = TRUE;
	}
    
    return FltSts_Cnt_T_lgc;
}                                                      
/*******************************************************************************
* Name          :   FrequencyDiag
* Description   :   "FrequencyDiag" block implementation.                 
* Inputs        :   WIRCmd_MtrNwtMtr_T_f32,FreqEst_Hz_T_f32,Enable_Uls_T_f32,
*                   CmdAmp_MotNwtMtr_T_f32
* Outputs       :   FltStat_Cnt_T_lgc 
* Usage Notes   :   None
*****************************************************************************/
static FUNC(boolean, WHLIMBREJCTN_CODE) FrequencyDiag(float32 WIRCmd_MtrNwtMtr_T_f32,
                                                      float32 FreqEst_Hz_T_f32,
                                                      float32 Enable_Uls_T_f32,
                                                      float32 CmdAmp_MotNwtMtr_T_f32)
{
    VAR(boolean, AUTOMATIC) FltStat_Cnt_T_lgc = FALSE;
    VAR(float32, AUTOMATIC) WIRCmdFil_MtrNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) CmdAmpExcdd_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) WIRCmdDlta_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) EnablePos_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) FltStsTrue_Cnt_T_lgc = FALSE;
    VAR(float32, AUTOMATIC) ElpdTi_Sec_T_f32;
	VAR(boolean, AUTOMATIC) FltFaild_Cnt_T_lgc;
    
    if(Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl() == TRUE)
    {
        /* EnableDiag - Notch Comparison*/
        WIRCmdFil_MtrNwtMtr_T_f32 = UGRFilOutp(WIRCmd_MtrNwtMtr_T_f32,
                                               FreqEst_Hz_T_f32,
                                               Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val(),
                                               Rte_Pim_FrqDiagcUgr1(),
                                               Rte_Pim_FrqDiagcUgr2());
        
        if(FilLpUpdOutp_f32(Abslt_f32_f32(WIRCmd_MtrNwtMtr_T_f32 - WIRCmdFil_MtrNwtMtr_T_f32),Rte_Pim_FrqDiagcLpFil()) >=
           Rte_Prm_WhlImbRejctnFrqDiagcThd_Val())
        {
            WIRCmdDlta_Cnt_T_lgc = TRUE;            
        }
            
        if(CmdAmp_MotNwtMtr_T_f32 >= Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val())
        {
            CmdAmpExcdd_Cnt_T_lgc = TRUE;
        }

        if(Enable_Uls_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
        {
            EnablePos_Cnt_T_lgc = TRUE;
        }
    
        if((WIRCmdDlta_Cnt_T_lgc == TRUE) &&
           (CmdAmpExcdd_Cnt_T_lgc == TRUE) && 
           (EnablePos_Cnt_T_lgc == TRUE))
        {
            FltStsTrue_Cnt_T_lgc = TRUE;            
        }
        
        if((CmdAmpExcdd_Cnt_T_lgc == TRUE) && 
           (EnablePos_Cnt_T_lgc == TRUE))
        {
            ElpdTi_Sec_T_f32 = ElpdTi(FltStsTrue_Cnt_T_lgc,
                                           Rte_Pim_FrqDiagcLrngEnaPrevTiOut(),
                                           Rte_Pim_FrqDiagcRefTiEnaLrngTiOut());   
                                           
            if(ElpdTi_Sec_T_f32 >= FixdToFloat_f32_u16(Rte_Prm_WhlImbRejctnFrqDiagcTout_Val(),NXTRFIXDPT_P0TOFLOAT_ULS_F32))        
            {
                FltStat_Cnt_T_lgc = TRUE;
            }
        }
    }
	
	if(FltStat_Cnt_T_lgc == TRUE)
	{
		if(*Rte_Pim_FrqDiagcFltRst() == TRUE)
		{
			FltFaild_Cnt_T_lgc = FALSE;
			*Rte_Pim_FrqDiagcFltRst() = FALSE;
		}
		else
		{
			FltFaild_Cnt_T_lgc = TRUE;
		}
	}
	else
	{
		FltFaild_Cnt_T_lgc = *Rte_Pim_FrqDiagcFltFaild();
	}
	
	*Rte_Pim_FrqDiagcFltFaild() = FltFaild_Cnt_T_lgc;
	
	if((Rte_Pim_FrqDiagcFltRcvry()->Sts == SIGQLFR_FAILD) || (FltFaild_Cnt_T_lgc == TRUE))
	{
		FltStat_Cnt_T_lgc = TRUE;
	}
	
    return FltStat_Cnt_T_lgc;
}
/*******************************************************************************
* Name          :   DcTrendDiag
* Description   :   "DcTrendDiag" block implementation.                 
* Inputs        :   WIRCmd_MtrNwtMtr_T_f32                    
* Outputs       :   FltStat_Cnt_T_lgc
* Usage Notes   :   None
*****************************************************************************/
static FUNC(boolean, WHLIMBREJCTN_CODE) DcTrendDiag(float32 WIRCmd_MtrNwtMtr_T_f32)
{
    VAR(float32, AUTOMATIC) CmdAmpFil_MotNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) FltStsTrue1_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) FltStsTrue2_Cnt_T_lgc = FALSE;
    VAR(float32, AUTOMATIC) ElpdTi1_Sec_T_f32;
    VAR(float32, AUTOMATIC) ElpdTi2_Sec_T_f32;
    VAR(boolean, AUTOMATIC) FltStat_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) FltFaild_Cnt_T_lgc;
    
    CmdAmpFil_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(Abslt_f32_f32(WIRCmd_MtrNwtMtr_T_f32),Rte_Pim_DcTrendLpFil()); 

    if(CmdAmpFil_MotNwtMtr_T_f32 >= Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val())
    {
        FltStsTrue2_Cnt_T_lgc = TRUE;
    }
    
    ElpdTi2_Sec_T_f32 = ElpdTi(FltStsTrue2_Cnt_T_lgc,
                                    Rte_Pim_DcTrendLrngEnaPrevTmr2(),
                                    Rte_Pim_DcTrendRefTiEnaLrngTmr2());
                            
    if(CmdAmpFil_MotNwtMtr_T_f32 >= Rte_Prm_WhlImbRejctnDcTrendThTq_Val())
    {
        FltStsTrue1_Cnt_T_lgc = TRUE;
    }
    
    ElpdTi1_Sec_T_f32 = ElpdTi(FltStsTrue1_Cnt_T_lgc,
                                    Rte_Pim_DcTrendLrngEnaPrevTmr1(),
                                    Rte_Pim_DcTrendRefTiEnaLrngTmr1());
                                    
    if((ElpdTi2_Sec_T_f32 >= (ONETHOUSAND_ULS_F32 * Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val()))||
       (ElpdTi1_Sec_T_f32 >= (ONETHOUSAND_ULS_F32 * Rte_Prm_WhlImbRejctnDcTrendTiSec_Val())))
    {
        FltStat_Cnt_T_lgc = TRUE;
    }
    else
    {
        FltStat_Cnt_T_lgc = FALSE;
    }
    
	if(FltStat_Cnt_T_lgc == TRUE)
	{
		if(*Rte_Pim_DcTrendFltRst() == TRUE)
		{
			FltFaild_Cnt_T_lgc = FALSE;
			*Rte_Pim_DcTrendFltRst() = FALSE; 
		}
		else
		{
			FltFaild_Cnt_T_lgc = TRUE;
		}
	}
	else
	{
		FltFaild_Cnt_T_lgc = *Rte_Pim_DcTrendFltFaild();
	}
	
	*Rte_Pim_DcTrendFltFaild() = FltFaild_Cnt_T_lgc;
	
	if((Rte_Pim_DcTrendFltRcvry()->Sts == SIGQLFR_FAILD) || (FltFaild_Cnt_T_lgc == TRUE))
	{
		FltStat_Cnt_T_lgc = TRUE;
	}
	
    return FltStat_Cnt_T_lgc;
}
/*******************************************************************************
* Name          :   MaxMagDiag
* Description   :   "MaxMagDiag" block implementation.                 
* Inputs        :   CmdAmp_MotNwtMtr_T_f32                    
* Outputs       :   FltStat_Cnt_T_lgc
* Usage Notes   :   None
*****************************************************************************/
static FUNC(boolean, WHLIMBREJCTN_CODE) MaxMagDiag(float32 CmdAmp_MotNwtMtr_T_f32)
{
    VAR(float32, AUTOMATIC) New_Uls_T_f32;
    VAR(boolean, AUTOMATIC) FltStat_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) FltFaild_Cnt_T_lgc;
    
    /* Magnitude Comparison */
    if(CmdAmp_MotNwtMtr_T_f32 >= Rte_Prm_WhlImbRejctnMaxMgn_Val())
    {
        /* DiagPStep */
        New_Uls_T_f32 = Min_f32(*Rte_Pim_PrevFlt() + Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val(), 
                                Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val());        
    }
    else
    {
        /* DiagNStep */
        New_Uls_T_f32 = Max_f32(*Rte_Pim_PrevFlt() - Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val(),0.0F);
    }
    
    *Rte_Pim_PrevFlt() = New_Uls_T_f32;

    if(New_Uls_T_f32 >= Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val())
    {
        FltStat_Cnt_T_lgc = TRUE;
    }
    else if(New_Uls_T_f32 > 0.0F)
    {
        FltStat_Cnt_T_lgc = *Rte_Pim_PrevSts();
    }
    else
    {
        FltStat_Cnt_T_lgc = FALSE;
    }
    
    *Rte_Pim_PrevSts() = FltStat_Cnt_T_lgc;
	
	if(FltStat_Cnt_T_lgc == TRUE)
	{
		if(*Rte_Pim_MaxMgnFltRst() == TRUE)
		{
			FltFaild_Cnt_T_lgc = FALSE;
			*Rte_Pim_MaxMgnFltRst() = FALSE;
		}	
		else
		{
			FltFaild_Cnt_T_lgc = TRUE;
		}
	}
	else
	{
		FltFaild_Cnt_T_lgc = *Rte_Pim_MaxMgnFltFaild();
	}
	
	*Rte_Pim_MaxMgnFltFaild() = FltFaild_Cnt_T_lgc;
	
	if((Rte_Pim_MaxMgnFltRcvry()->Sts == SIGQLFR_FAILD) || (FltFaild_Cnt_T_lgc == TRUE))
	{
		FltStat_Cnt_T_lgc = TRUE;
	}
    
    return FltStat_Cnt_T_lgc;
}
/*******************************************************************************
* Name          :   AdjSigFil
* Description   :   "Filter1 / Filter2 " block implementation.                 
* Inputs        :   In_MotNwtMtr_T_f32,Zm_Uls_T_f32,Pk_Uls_T_f32,B0_Uls_T_f32, 
*                   MagAtFreq_Uls_T_f32,*Coeff1_Uls_T_f32,*Coeff2_Uls_T_f32                    
* Outputs       :   Out_MotNwtMtr_T_f32
* Usage Notes   :   None
*****************************************************************************/
static FUNC(float32, WHLIMBREJCTN_CODE) AdjSigFil(float32 In_MotNwtMtr_T_f32,
                                                  float32 Zm_Uls_T_f32,
                                                  float32 Pk_Uls_T_f32,
                                                  float32 B0_Uls_T_f32,
                                                  float32 MagAtFreq_Uls_T_f32,
                                                  P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Coeff1_Uls_T_f32,
                                                  P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Coeff2_Uls_T_f32)
{
	VAR(float32, AUTOMATIC) Coeff1Tmp_Uls_T_f32;
	VAR(float32, AUTOMATIC) Coeff2Tmp_Uls_T_f32;
    VAR(float32, AUTOMATIC) Out_MotNwtMtr_T_f32;
	
	Coeff1Tmp_Uls_T_f32 = Lim_f32((In_MotNwtMtr_T_f32 * B0_Uls_T_f32), -PHAADJMAX_ULS_F32, PHAADJMAX_ULS_F32);
	
    
    Coeff2Tmp_Uls_T_f32 = ((Coeff1Tmp_Uls_T_f32 - (*Coeff1_Uls_T_f32 * Zm_Uls_T_f32)) +
                          (*Coeff2_Uls_T_f32 * Pk_Uls_T_f32));
						  
	Coeff2Tmp_Uls_T_f32 = Lim_f32(Coeff2Tmp_Uls_T_f32, -PHAADJMAX_ULS_F32, PHAADJMAX_ULS_F32);
   
    *Coeff1_Uls_T_f32 = Coeff1Tmp_Uls_T_f32;
    *Coeff2_Uls_T_f32 = Coeff2Tmp_Uls_T_f32;
	
	Out_MotNwtMtr_T_f32 = Lim_f32((*Coeff2_Uls_T_f32 * MagAtFreq_Uls_T_f32), -ADJOUTPMAX_ULS_F32, ADJOUTPMAX_ULS_F32);
    
    return Out_MotNwtMtr_T_f32;
}                                                
/*******************************************************************************
* Name          :   ActvRejctnCmd
* Description   :   "Active Rejection Command " block implementation.                 
* Inputs        :   HwTq_HwNwtMtr_T_f32,Enable_Uls_T_f32,FreqEst_Hz_T_f32                   
* Outputs       :   WhlImbRejctnCmd_MotNwtMtr_T_f32
* Usage Notes   :   Inputs 'WhlSpdLFilt_RadpS_T_f32' and 'WhlSpdRFilt_RadpS_T_f32' are PIMs
*****************************************************************************/
static FUNC(float32, WHLIMBREJCTN_CODE) ActvRejctnCmd(float32 HwTq_HwNwtMtr_T_f32,
                                                      float32 Enable_Uls_T_f32,
                                                      float32 FreqEst_Hz_T_f32)
{
    VAR(float32, AUTOMATIC) Mplr_Uls_T_f32;
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    VAR(float32, AUTOMATIC) LeOutp_Uls_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC) LeStVariUpd_Uls_T_f32[NROFDLY_CNT_U08];
    VAR(float32, AUTOMATIC) RiOutp_Uls_T_f32 = 0.0F;
    VAR(float32, AUTOMATIC) RiStVariUpd_Uls_T_f32[NROFDLY_CNT_U08];
    VAR(sint16, AUTOMATIC) PhaAdjY_HwDeg_T_s8p7;
    VAR(float32, AUTOMATIC) PhaAdjY_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) Phase_Uls_T_f32;
    VAR(float32, AUTOMATIC) FinalPhaInp_Uls_T_f32;
    VAR(float32, AUTOMATIC) PhaseSin_Uls_T_f32;
    VAR(float32, AUTOMATIC) Alpha_Uls_T_f32;
    VAR(float32, AUTOMATIC) FreqEstTmp_Hz_T_f32;
    VAR(float32, AUTOMATIC) AlphaSqrt_Uls_T_f32;
    VAR(float32, AUTOMATIC) Zero_Uls_T_f32;
    VAR(float32, AUTOMATIC) Pole_Uls_T_f32;
    VAR(float32, AUTOMATIC) MagAtFreq_Uls_T_f32;
    VAR(float32, AUTOMATIC) CompGain_Uls_T_f32;
    VAR(float32, AUTOMATIC) Zm_Uls_T_f32;
    VAR(float32, AUTOMATIC) Pk_Uls_T_f32;
    VAR(float32, AUTOMATIC) B0_Uls_T_f32;
    VAR(float32, AUTOMATIC) AdjSigTmp_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) AdjSig_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) WhlImbRejctnCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) CnclTqOutp_MotNwtMtr_T_f32; 
    VAR(float32, AUTOMATIC) AbsltPhaAdjY_HwDeg_T_f32;
    
    /*** Start of 'Adaptive Filters' ***/

    Mplr_Uls_T_f32 = TWO_ULS_F32 * 
                     Rte_Prm_WhlImbRejctnAdpvFac_Val() * 
                     (*Rte_Pim_PrevHwTq()) *
                     Enable_Uls_T_f32;
     
    for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < NROFDLY_CNT_U08; Idx_Cnt_T_u08++)
    {
        /* FloatingL */
        LeStVariUpd_Uls_T_f32[Idx_Cnt_T_u08] = Lim_f32((Mplr_Uls_T_f32 * PimLeStDlyUpd[Idx_Cnt_T_u08]) + PimLeStVariUpd[Idx_Cnt_T_u08],-ADAPVFILMAX_ULS_F32, ADAPVFILMAX_ULS_F32);
        
        LeOutp_Uls_T_f32 = LeOutp_Uls_T_f32 + (LeStVariUpd_Uls_T_f32[Idx_Cnt_T_u08] *
                                              (PimStordValLe[Idx_Cnt_T_u08]));
        
        PimLeStDlyUpd[Idx_Cnt_T_u08] = PimStordValLe[Idx_Cnt_T_u08];
        
        PimLeStVariUpd[Idx_Cnt_T_u08] = LeStVariUpd_Uls_T_f32[Idx_Cnt_T_u08];
        
        /* FloatingR */
        RiStVariUpd_Uls_T_f32[Idx_Cnt_T_u08] = Lim_f32((Mplr_Uls_T_f32 * PimRiStDlyUpd[Idx_Cnt_T_u08]) + PimRiStVariUpd[Idx_Cnt_T_u08], -ADAPVFILMAX_ULS_F32, ADAPVFILMAX_ULS_F32);
        
        RiOutp_Uls_T_f32 = RiOutp_Uls_T_f32 + (RiStVariUpd_Uls_T_f32[Idx_Cnt_T_u08] *
                                              (PimStordValRi[Idx_Cnt_T_u08]));
                                                
        PimRiStDlyUpd[Idx_Cnt_T_u08] = PimStordValRi[Idx_Cnt_T_u08];
        
        PimRiStVariUpd[Idx_Cnt_T_u08] = RiStVariUpd_Uls_T_f32[Idx_Cnt_T_u08];
    }   
    
	LeOutp_Uls_T_f32 = LeOutp_Uls_T_f32 * Enable_Uls_T_f32;
	*Rte_Pim_dWhlImbRejctnLMSqdOutLe() = LeOutp_Uls_T_f32;
	
	RiOutp_Uls_T_f32 = RiOutp_Uls_T_f32 * Enable_Uls_T_f32;
	*Rte_Pim_dWhlImbRejctnLMSqdOutRi() = RiOutp_Uls_T_f32;
                         
    /*** End of 'Adaptive Filters' ***/   
    
    /*** Start of 'Phase Adjust - Floating Point' ***/
	
	FinalPhaInp_Uls_T_f32 = Lim_f32((LeOutp_Uls_T_f32 + RiOutp_Uls_T_f32), -ADJOUTPMAX_ULS_F32, ADJOUTPMAX_ULS_F32);
	
    PhaAdjY_HwDeg_T_s8p7 = LnrIntrpn_s16_u16VariXs16VariY(PrmWhlImbRejctnPhaAdjX,
                                                          PrmWhlImbRejctnPhaAdjY,
                                                          (uint16)TblSize_m(PrmWhlImbRejctnPhaAdjX),
                                                          FloatToFixd_u16_f32(FreqEst_Hz_T_f32,NXTRFIXDPT_FLOATTOP9_ULS_F32));
    
    PhaAdjY_HwDeg_T_f32 = FixdToFloat_f32_s16(PhaAdjY_HwDeg_T_s8p7,NXTRFIXDPT_P7TOFLOAT_ULS_F32);
    
    AbsltPhaAdjY_HwDeg_T_f32 = Abslt_f32_f32(PhaAdjY_HwDeg_T_f32);
    
    if(AbsltPhaAdjY_HwDeg_T_f32 > NINETY_ULS_F32)
    {
        Phase_Uls_T_f32 = -(float32)Sign_s08_f32(PhaAdjY_HwDeg_T_f32) *
                          ((ARCHGLBPRM_PI_ULS_F32 * ARCHGLBPRM_180OVERPI_ULS_F32) - AbsltPhaAdjY_HwDeg_T_f32) ;
        
        FinalPhaInp_Uls_T_f32 = -(FinalPhaInp_Uls_T_f32);
    }
    else
    {
        Phase_Uls_T_f32 = PhaAdjY_HwDeg_T_f32;
        
        FinalPhaInp_Uls_T_f32 = FinalPhaInp_Uls_T_f32;
    }
    
    Phase_Uls_T_f32 = Phase_Uls_T_f32 * ONEHALF_ULS_F32;
    
    /* Calc Filter Coefficients */
    /* CalcZeroPole */
	
	/* 'Phase_Uls_T_f32' can never be '-90' or '90' at this level. So no possibility of 
	'Alpha_Uls_T_f32' becoming '0' and 'divided by zero' */
    PhaseSin_Uls_T_f32 = Sin_f32(Phase_Uls_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32); 	
    Alpha_Uls_T_f32 = (1.0F - PhaseSin_Uls_T_f32) / (1.0F + PhaseSin_Uls_T_f32);     

    FreqEstTmp_Hz_T_f32 = FreqEst_Hz_T_f32 * PITIMESSAMPLETIME_ULS_F32;
    AlphaSqrt_Uls_T_f32 = Sqrt_f32(Alpha_Uls_T_f32);
    
    Zero_Uls_T_f32 = AlphaSqrt_Uls_T_f32 * FreqEstTmp_Hz_T_f32;
    
    Pole_Uls_T_f32 = FreqEstTmp_Hz_T_f32 / AlphaSqrt_Uls_T_f32;       
    
    MagAtFreq_Uls_T_f32 = Sqrt_f32(Zero_Uls_T_f32 / Pole_Uls_T_f32);  
    
    CompGain_Uls_T_f32 = 1.0F / Alpha_Uls_T_f32;
    
    /* CalcCoeff */ 
    Zm_Uls_T_f32 = (1.0F - Zero_Uls_T_f32) / (1.0F + Zero_Uls_T_f32);  
      
    Pk_Uls_T_f32 = (1.0F - Pole_Uls_T_f32) / (1.0F + Pole_Uls_T_f32);
    
    B0_Uls_T_f32 = ((1.0F - Pk_Uls_T_f32) * (-Zero_Uls_T_f32) * CompGain_Uls_T_f32) /
                   ((1.0F - Zm_Uls_T_f32) * (-Pole_Uls_T_f32));   
    
    /* Filter 1 */
    AdjSigTmp_MotNwtMtr_T_f32 = AdjSigFil(FinalPhaInp_Uls_T_f32,
                                          Zm_Uls_T_f32,
                                          Pk_Uls_T_f32,
                                          B0_Uls_T_f32,
                                          MagAtFreq_Uls_T_f32,
                                          Rte_Pim_PhaAdjFil1Coeff1(),
                                          Rte_Pim_PhaAdjFil1Coeff2());  
    
    /* Filter 2 */
    AdjSig_MotNwtMtr_T_f32 = AdjSigFil(AdjSigTmp_MotNwtMtr_T_f32,
                                       Zm_Uls_T_f32,
                                       Pk_Uls_T_f32,
                                       B0_Uls_T_f32,
                                       MagAtFreq_Uls_T_f32,
                                       Rte_Pim_PhaAdjFil2Coeff1(),
                                       Rte_Pim_PhaAdjFil2Coeff2()); 
    /*** End of 'Phase Adjust - Floating Point' ***/
    
    CnclTqOutp_MotNwtMtr_T_f32 = -AdjSig_MotNwtMtr_T_f32 * Rte_Prm_WhlImbRejctnScaCncl_Val();
    
    *Rte_Pim_dWhlImbRejctnCnclTqOutp() = CnclTqOutp_MotNwtMtr_T_f32;
    
    WhlImbRejctnCmd_MotNwtMtr_T_f32 = Lim_f32(CnclTqOutp_MotNwtMtr_T_f32,
                                              -WIRCMDMAX_MOTNWTMTR_F32,
                                              WIRCMDMAX_MOTNWTMTR_F32);
      
    *Rte_Pim_PrevHwTq() = HwTq_HwNwtMtr_T_f32;
    
    return WhlImbRejctnCmd_MotNwtMtr_T_f32;
}
                                            
/*******************************************************************************
* Name          :   DistMag
* Description   :   "DistMagL/DistMagR" block implementation.                 
* Inputs        :   WhlSpd_MotRadPerSec_T_f32,Freq_Hz_T_f32,*PeakPrev_Uls_T_f32, 
*                   *CurrMag_Uls_T_f32,*LpFilOut_Cnt_T_FilLpRec1.
* Outputs       :   DistMag_Uls_T_f32
* Usage Notes   :   None
*****************************************************************************/
static FUNC(float32, WHLIMBREJCTN_CODE) DistMag(float32 WhlSpd_MotRadPerSec_T_f32,
                                                float32 Freq_Hz_T_f32,
                                                P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) PeakPrev_Uls_T_f32,
                                                P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) CurrMag_Uls_T_f32,
												P2VAR(FilLpRec1, AUTOMATIC, WhlImbRejctn_VAR) LpFilOut_Cnt_T_FilLpRec1)
{
    VAR(float32, AUTOMATIC) CurrMagEstimnDelta_Uls_T_f32;
    VAR(float32, AUTOMATIC) DistMag_Uls_T_f32;
    
    *CurrMag_Uls_T_f32 = FilLpUpdOutp_f32(Abslt_f32_f32(WhlSpd_MotRadPerSec_T_f32),LpFilOut_Cnt_T_FilLpRec1) *
                        ARCHGLBPRM_PIOVER2_ULS_F32;
    
    if((Freq_Hz_T_f32 > (Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val() - Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val())) &&
       (Freq_Hz_T_f32 < (Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val() + Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val())))
    {
        CurrMagEstimnDelta_Uls_T_f32 = *CurrMag_Uls_T_f32 - *PeakPrev_Uls_T_f32;
         
        if(CurrMagEstimnDelta_Uls_T_f32 > 0.0F)
        {
            DistMag_Uls_T_f32 = *PeakPrev_Uls_T_f32 + (CurrMagEstimnDelta_Uls_T_f32 * Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val());
        }
        else
        {
            DistMag_Uls_T_f32 = *PeakPrev_Uls_T_f32 * Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val();
        }
    }
    else
    {
        DistMag_Uls_T_f32 = *PeakPrev_Uls_T_f32;
    }
    
    *PeakPrev_Uls_T_f32 = DistMag_Uls_T_f32;
    
    return DistMag_Uls_T_f32;
}
/*******************************************************************************
* Name          :   EnaRamp
* Description   :   "Enable Ramp" block implementation.                 
* Inputs        :   EnableFac_Uls_T_f32,SysSt_Cnt_T_enum                 
* Outputs       :   RampEna_Uls_T_f32
* Usage Notes   :   None
*****************************************************************************/                                              
static FUNC(float32, WHLIMBREJCTN_CODE) EnaRamp(float32 EnableFac_Uls_T_f32,
                                                SysSt1 SysSt_Cnt_T_enum)                                 
{
    VAR(float32, AUTOMATIC) RampYElapsdTi_MilliSec_T_f32;
    VAR(float32, AUTOMATIC) RampDwnScaFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) RampEna_Uls_T_f32;
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    VAR(float32, AUTOMATIC) RampDwnTi_MilliSec_T_f32;   
        
    RampYElapsdTi_MilliSec_T_f32 = ElpdTi(*Rte_Pim_RampYes(),
                                          Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr(),
                                          Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr());
                                    
    if(*Rte_Pim_RampYes() == TRUE)
    {
        RampDwnTi_MilliSec_T_f32 = FixdToFloat_f32_u16(Rte_Prm_WhlImbRejctnRampDwnTi_Val(),NXTRFIXDPT_P0TOFLOAT_ULS_F32);
        
        /* SlowSpeedDiagcCalc */
        RampDwnScaFac_Uls_T_f32 = Lim_f32(((RampDwnTi_MilliSec_T_f32 - RampYElapsdTi_MilliSec_T_f32)/RampDwnTi_MilliSec_T_f32), 0.0F, 1.0F) *
                                  EnableFac_Uls_T_f32;
    }
    else
    {
        /* NoFaultOper */
        RampDwnScaFac_Uls_T_f32 = EnableFac_Uls_T_f32;
    }
    
    if((((RampDwnScaFac_Uls_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (*Rte_Pim_RampYes() == TRUE)) ||
        (*Rte_Pim_RampNo() == TRUE)) &&
       (SysSt_Cnt_T_enum == SYSST_ENA))
    {
        /* Reset WIR */     
        *Rte_Pim_PrevHwTq() = 0.0F;
        *Rte_Pim_PhaAdjFil1Coeff1() = 0.0F;
        *Rte_Pim_PhaAdjFil1Coeff2() = 0.0F;
        *Rte_Pim_PhaAdjFil2Coeff1() = 0.0F;
        *Rte_Pim_PhaAdjFil2Coeff2() = 0.0F;
		*Rte_Pim_EnaSlewPerLoop() = 0.0F;
		*Rte_Pim_LeCurrMgnSlewPerLoop() = 0.0F;
		*Rte_Pim_RiCurrMgnSlewPerLoop() = 0.0F;
		Rte_Pim_CmdMgnLp1Fil()->FilSt = 0.0F;
		Rte_Pim_CmdMgnLp2Fil()->FilSt = 0.0F;
		Rte_Pim_DistbnMgnLeLpFil()->FilSt = 0.0F;
		Rte_Pim_DistbnMgnRiLpFil()->FilSt = 0.0F;
		Rte_Pim_DcTrendLpFil()->FilSt = 0.0F;
		
        
        *Rte_Pim_DistbnMagEnadPrev() = FALSE;
        
        for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < NROFDLY_CNT_U08; Idx_Cnt_T_u08++)
        {
            PimLeStDlyUpd[Idx_Cnt_T_u08] = 0.0F;
            PimLeStVariUpd[Idx_Cnt_T_u08] = 0.0F;
            PimRiStDlyUpd[Idx_Cnt_T_u08] = 0.0F;
            PimRiStVariUpd[Idx_Cnt_T_u08] = 0.0F;
			PimStordValLe[Idx_Cnt_T_u08] = 0.0F;
			PimStordValRi[Idx_Cnt_T_u08] = 0.0F;
        }

        Rte_Pim_MaxMgnFltRcvry()->Thd = Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val(); 
        Rte_Pim_MaxMgnFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val();
        Rte_Pim_MaxMgnFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val();
        
        Rte_Pim_DcTrendFltRcvry()->Thd = Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val(); 
        Rte_Pim_DcTrendFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val();
        Rte_Pim_DcTrendFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val();
        
        Rte_Pim_FrqDiagcFltRcvry()->Thd = Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val(); 
        Rte_Pim_FrqDiagcFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val();
        Rte_Pim_FrqDiagcFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val();
        
        Rte_Pim_WhlSpdCorrlnFltRcvry()->Thd = Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val(); 
        Rte_Pim_WhlSpdCorrlnFltRcvry()->NegStep = Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val();
        Rte_Pim_WhlSpdCorrlnFltRcvry()->PosStep = Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val();    
    }   
    
    if(*Rte_Pim_RampNo() == TRUE)
    {
        RampEna_Uls_T_f32 = 0.0F;
    }
    else
    {
        RampEna_Uls_T_f32 = RampDwnScaFac_Uls_T_f32;
    }
    
    return RampEna_Uls_T_f32;   
}                                               
/*******************************************************************************
* Name          :   DtrmnEnadAmnt
* Description   :   "Determine Enabled Amt" block implementation.                 
* Inputs        :   FreqEstAvg_Hz_T_f32,WhlSpdLFilt_MotRadPerSec_T_f32,WhlSpdRFilt_MotRadPerSec_T_f32, 
*                   VehSpd_Kph_T_f32, VehSpdVld_Cnt_T_logl, WhlImbRejctnCustEna_Cnt_T_logl,
*                   CurrMgnSlewRate_UlsPerSec_T_f32,EnaSlewRate_UlsPerSec_T_f32,WhlImbRejctnDi_Cnt_T_logl,
*                   SysSt_Cnt_T_enum, *Enable_Uls_T_f32                  
* Outputs       :   WhlImbRejctnActv_Cnt_T_logl
* Usage Notes   :   None
*****************************************************************************/
static FUNC(boolean, WHLIMBREJCTN_CODE) DtrmnEnadAmnt(float32 FreqEstAvg_Hz_T_f32,
                                                      float32 WhlSpdLFilt_MotRadPerSec_T_f32,
                                                      float32 WhlSpdRFilt_MotRadPerSec_T_f32,
                                                      float32 VehSpd_Kph_T_f32,
                                                      boolean VehSpdVld_Cnt_T_logl,
                                                      boolean WhlImbRejctnCustEna_Cnt_T_logl,
                                                      boolean WhlImbRejctnDi_Cnt_T_logl,
                                                      SysSt1 SysSt_Cnt_T_enum,
                                                      P2VAR(float32, AUTOMATIC, WhlImbRejctn_VAR) Enable_Uls_T_f32)
{
    VAR(float32, AUTOMATIC) PreEnable_Uls_T_f32;
    VAR(uint16, AUTOMATIC) FreqEstAvg_Hz_T_u6p10;
    VAR(uint16, AUTOMATIC) PreEnable_Uls_T_u1p15;   
    VAR(float32, AUTOMATIC) EnableFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) DistMagL_Uls_T_f32;
    VAR(float32, AUTOMATIC) DistMagR_Uls_T_f32;
    VAR(float32, AUTOMATIC) CurrMagL_Uls_T_f32;
    VAR(float32, AUTOMATIC) CurrMagR_Uls_T_f32;
    VAR(float32, AUTOMATIC) TmpScaleL_Uls_T_f32;
    VAR(float32, AUTOMATIC) TmpScaleR_Uls_T_f32;
    VAR(boolean, AUTOMATIC) WhlImbRejctnActv_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) EnaSlewRate_UlsPerSec_T_f32;
    VAR(float32, AUTOMATIC) CurrMgnSlewRate_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) PeakPrev_Uls_T_f32;
	
	EnaSlewRate_UlsPerSec_T_f32 = Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate();
	CurrMgnSlewRate_UlsPerSec_T_f32 = Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate();
    
    /*** Calculate Enable1 ***/
    if((Rte_Prm_WhlImbRejctnFctEna_Logl() == TRUE) &&
       (WhlImbRejctnDi_Cnt_T_logl == FALSE) &&
       (WhlImbRejctnCustEna_Cnt_T_logl == TRUE) &&
       (VehSpdVld_Cnt_T_logl == TRUE) &&
       (VehSpd_Kph_T_f32 >= Rte_Prm_WhlImbRejctnVehSpdEna_Val()))
    {
        WhlImbRejctnActv_Cnt_T_logl = TRUE;
        
        FreqEstAvg_Hz_T_u6p10 = FloatToFixd_u16_f32(FreqEstAvg_Hz_T_f32,NXTRFIXDPT_FLOATTOP10_ULS_F32);
        
        PreEnable_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmWhlImbRejctnFrqScaTblX,
                                                               PrmWhlImbRejctnFrqScaTblY,
                                                               (uint16)TblSize_m(PrmWhlImbRejctnFrqScaTblX),
                                                               FreqEstAvg_Hz_T_u6p10);
        
        PreEnable_Uls_T_f32 = FixdToFloat_f32_u16(PreEnable_Uls_T_u1p15,NXTRFIXDPT_P15TOFLOAT_ULS_F32);         
    }
    else
    {
        PreEnable_Uls_T_f32 = 0.0F;
    }
    
    if(*Rte_Pim_DistbnMagEnadPrev() != TRUE)
    {        
		PreEnable_Uls_T_f32 = 0.0F;
    }

	
	EnableFac_Uls_T_f32 = Lim_f32(PreEnable_Uls_T_f32,
							 (*Rte_Pim_EnaSlewPerLoop() - (EnaSlewRate_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)),
							 (*Rte_Pim_EnaSlewPerLoop() + (EnaSlewRate_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    
    *Rte_Pim_EnaSlewPerLoop() = EnableFac_Uls_T_f32;
    
	PeakPrev_Uls_T_f32 = Rte_Pim_CmpPeakData()->LePeakPrev;
	
    /* DistMagL */
    DistMagL_Uls_T_f32 = DistMag(WhlSpdLFilt_MotRadPerSec_T_f32,
                                 FreqEstAvg_Hz_T_f32,
                                 &PeakPrev_Uls_T_f32,
                                 &CurrMagL_Uls_T_f32,
								 Rte_Pim_DistbnMgnLeLpFil());
								 
    Rte_Pim_CmpPeakData()->LePeakPrev = PeakPrev_Uls_T_f32;
    *Rte_Pim_dWhlImbRejctnCurrMgnLe() = CurrMagL_Uls_T_f32; 

	PeakPrev_Uls_T_f32 = Rte_Pim_CmpPeakData()->RiPeakPrev;
    /* DistMagR */
    DistMagR_Uls_T_f32 = DistMag(WhlSpdRFilt_MotRadPerSec_T_f32,
                                 FreqEstAvg_Hz_T_f32,
                                 &PeakPrev_Uls_T_f32,
                                 &CurrMagR_Uls_T_f32,
								 Rte_Pim_DistbnMgnRiLpFil());
								 
    Rte_Pim_CmpPeakData()->RiPeakPrev = PeakPrev_Uls_T_f32;
    *Rte_Pim_dWhlImbRejctnCurrMgnRi() = CurrMagR_Uls_T_f32; 
    
	/* Check_EnableDisableRange */
	if((DistMagL_Uls_T_f32 < Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val()) &&
		(DistMagR_Uls_T_f32 < Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val()))
		{
			*Rte_Pim_DistbnMagEnadPrev() = FALSE;
		}
	else if ((DistMagL_Uls_T_f32 > Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val()) ||
			(DistMagR_Uls_T_f32 > Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val()) ||
			(*Rte_Pim_DistbnMagEnadPrev() == TRUE))
			{
					*Rte_Pim_DistbnMagEnadPrev() = TRUE;
			}
	else
		{
					*Rte_Pim_DistbnMagEnadPrev() = FALSE;
		}
    
    TmpScaleL_Uls_T_f32 = Lim_f32(CurrMagL_Uls_T_f32,
                                 (*Rte_Pim_LeCurrMgnSlewPerLoop() - (CurrMgnSlewRate_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                 (*Rte_Pim_LeCurrMgnSlewPerLoop() + (CurrMgnSlewRate_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    
    *Rte_Pim_LeCurrMgnSlewPerLoop() = TmpScaleL_Uls_T_f32;

    TmpScaleR_Uls_T_f32 = Lim_f32(CurrMagR_Uls_T_f32,
                                 (*Rte_Pim_RiCurrMgnSlewPerLoop() - (CurrMgnSlewRate_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                 (*Rte_Pim_RiCurrMgnSlewPerLoop() + (CurrMgnSlewRate_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    
    *Rte_Pim_RiCurrMgnSlewPerLoop() = TmpScaleR_Uls_T_f32;
    
    if((Rte_Prm_WhlImbRejctnAutScaEna_Logl() == TRUE) && (EnableFac_Uls_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
    {
        *Rte_Pim_ScaLe() = Rte_Prm_WhlImbRejctnAutScaTar_Val() / 
                           Max_f32(Rte_Prm_WhlImbRejctnAutScaTar_Val(),TmpScaleL_Uls_T_f32);
        
        *Rte_Pim_ScaRi() = Rte_Prm_WhlImbRejctnAutScaTar_Val() / 
                           Max_f32(Rte_Prm_WhlImbRejctnAutScaTar_Val(),TmpScaleR_Uls_T_f32);

    }
    else
    {
        *Rte_Pim_ScaLe() = 1.0F;
        *Rte_Pim_ScaRi() = 1.0F;
    }
    
    *Rte_Pim_dWhlImbRejctnScaLe() = *Rte_Pim_ScaLe();
    
    *Rte_Pim_dWhlImbRejctnScaRi() = *Rte_Pim_ScaRi();
        
    /*** Enable Ramp ***/
    *Enable_Uls_T_f32 = EnaRamp(EnableFac_Uls_T_f32,SysSt_Cnt_T_enum);
        
    return WhlImbRejctnActv_Cnt_T_logl;
}  

/*******************************************************************************
* Name          :   ChkCompPersc
* Description   :   "CheckCompPersistence" block implementation.                 
* Inputs        :   ActiveBand1Inp_Cnt_T_u32, ActiveBand2Inp_Cnt_T_u32, ActiveBand3Inp_Cnt_T_u32
* Outputs       :   Flt_Cnt_T_lgc
* Usage Notes   :   None
*****************************************************************************/
static FUNC(boolean, WHLIMBREJCTN_CODE) ChkCompPersc(VAR(uint32, WhlImbRejctn_VAR) ActiveBand1Inp_Cnt_T_u32,
													 VAR(uint32, WhlImbRejctn_VAR) ActiveBand2Inp_Cnt_T_u32,
													 VAR(uint32, WhlImbRejctn_VAR) ActiveBand3Inp_Cnt_T_u32)
{
	    VAR(boolean, AUTOMATIC) Flt_Cnt_T_lgc;	
		
	if (Rte_Prm_WhlImbRejctnMaxDurn_Val() <= DURATIONDISABLE_CNT_U16)
	{
		if(((FixdToFloat_f32_u32(ActiveBand1Inp_Cnt_T_u32,NXTRFIXDPT_P0TOFLOAT_ULS_F32) + 
			(FixdToFloat_f32_u32(ActiveBand2Inp_Cnt_T_u32,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * TWOOVRTHREE_ULS_F32) + 
			(FixdToFloat_f32_u32(ActiveBand3Inp_Cnt_T_u32,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * ONEOVRTHREE_ULS_F32)) * STOREDMINSPERCOUNT_ULS_F32) >
			(FixdToFloat_f32_u16(Rte_Prm_WhlImbRejctnMaxDurn_Val(),NXTRFIXDPT_P0TOFLOAT_ULS_F32) * CALMINSPERCOUNT_ULS_F32))       
		{
			Flt_Cnt_T_lgc = TRUE;
		}
		else
		{
			Flt_Cnt_T_lgc = FALSE;
		}
	}
	else
	{
		Flt_Cnt_T_lgc = FALSE;
	}
	
	return Flt_Cnt_T_lgc;
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
