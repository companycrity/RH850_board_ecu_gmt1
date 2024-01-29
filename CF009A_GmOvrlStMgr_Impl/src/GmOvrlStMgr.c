/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmOvrlStMgr.c
 *     SW-C Type:  GmOvrlStMgr
 *  Generated at:  Tue Dec 13 11:27:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmOvrlStMgr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GmOvrlStMgr.c
* Module Description: Implementation of GM Overlay State Manager FDD CF009A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 8 %
* %derived_by       : nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 09/11/15  1        SV        Initial Version                                                                 EA4#1682 
* 02/05/16  2        NS        Added HwTq based intervention for LKA, handwheel buzz based on LoA key cycles   EA4#3693  
* 04/15/16  3        NS        Changes to haptic state machine per FDD v3.0.0                                  EA4#5251      
* 06/13/16  4        NS        Fix for anomaly EA4#3741                                                        EA4#6196
* 06/24/16  5        NS        Updated for FDD v3.1.0                                                          EA4#5847
*                                                                                                              EA4#6061
*                                                                                                              EA4#6270
* 08/22/16  6        NS        Updated for FDD v4.0.0                                                          EA4#6830
*                                                                                                              EA4#6874
* 08/22/16  7        TATA      Updated as per FDD v4.1.0                                                       EA4#8307
* 01/27/17  8        JK        Anomaly fix EA4#8726                                                            EA4#9043
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
  LoaSt1
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

  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  u10p6
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u2p14
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_GmOvrlStMgr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "NxtrIntrpn.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */  
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define APASTTMPINHB_CNT_U08	0U
#define APASTCTRLAVL_CNT_U08	1U
#define APASTACTV_CNT_U08		2U
#define APASTPRMNTFAILD_CNT_U08	3U					
#define APASTMFGDI_CNT_U08		4U

#define ESCSTINACTV_CNT_U08		0U
#define ESCSTACTV_CNT_U08		1U
#define ESCSTTMPLIMD_CNT_U08	2U
#define ESCSTPRMNTFAILD_CNT_U08	3U
#define ESCSTMFGDI_CNT_U08		4U

#define HAPTCSTINACTVNOTPLS_CNT_U08	    0U
#define HAPTCSTACTV_CNT_U08		        1U
#define HAPTCSTWAIT_CNT_U08             2U
#define HAPTCSTINACTVRDYTOPLS_CNT_U08   3U
#define HAPTCSTDI_CNT_U08               4U

#define LKASTINACTV_CNT_U08		0U
#define LKASTACTV_CNT_U08		1U
#define LKASTTMPLIMD_CNT_U08	2U
#define LKASTPRMNTFAILD_CNT_U08	3U
#define LKASTMFGDI_CNT_U08		4U

#define HWAGSERVOCMDMAX_HWDEG_F32       (1440.0F)
#define HWAGSERVOCMDMIN_HWDEG_F32       (-1440.0F)
#define HWOSCNFRQMAX_HZ_F32             (50.0F)
#define HWOSCNFRQMIN_HZ_F32             (10.0F)
#define HWOSCNMOTAMPMAX_MOTNWTMTR_F32   (1.2F)
#define HWOSCNMOTAMPMIN_MOTNWTMTR_F32   (0.0F)

#define NODEBSTEP_CNT_U16                   65535U

#define LKAFLTCNTRTHD_CNT_U08               255U

#define LKAFLTTMRTHD_MILLISEC_U32           500U

#define LOASTNORM_CNT_U08		            LOAST_NORM

#define MILLISECTO100MICROSECCNVN_CNT_U32	10U


#define PrmGmOvrlStMgrLoaMtgtnVehSpdX_u10p6     (*(const Ary1D_u10p6_8 *)(Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D()))
#define PrmGmOvrlStMgrLoaMtgtnTqOscnAmpY_u2p14  (*(const Ary1D_u2p14_8 *)(Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D()))


static FUNC(boolean, GMOVRLSTMGR_CODE) VehStandStillTmrElpdChk(float32 VehSpdSecurMax_Kph_T_f32);

static FUNC(boolean, GMOVRLSTMGR_CODE) ShiftLvrRvsTmrElpdChk(boolean ShiftLvrRvs_Cnt_T_logl);

static FUNC(boolean, GMOVRLSTMGR_CODE) ApaIntv(float32 HwTq_HwNwtMtr_T_f32);

static FUNC(boolean, GMOVRLSTMGR_CODE) HaptcEnaDurnElpdChk(boolean HwHaptcEna_Cnt_T_logl);

static FUNC(boolean, GMOVRLSTMGR_CODE) LkaFltActvChk(boolean Msg17DBusHiSpdMiss_Cnt_T_logl,
													 boolean Msg180BusHiSpdMiss_Cnt_T_logl,
													 boolean Msg180BusHiSpdInvld_Cnt_T_logl,
													 boolean Msg1E9BusHiSpdMiss_Cnt_T_logl,
													 boolean Msg214BusHiSpdInvld_Cnt_T_logl,
													 boolean Msg214BusHiSpdMiss_Cnt_T_logl,
													 boolean VehSpdSecurMaxVld_Cnt_T_logl,
													 boolean VehSpdSecurMinVld_Cnt_T_logl);		

static FUNC(boolean, GMOVRLSTMGR_CODE) LkaInhbChk(boolean Msg17DBusHiSpdInvld_Cnt_T_logl,
								                  boolean VehStabyEnhmtActv_Cnt_T_logl,
								                  boolean AbsActvProtd_Cnt_T_logl,
								                  boolean Msg1E9BusHiSpdInvld_Cnt_T_logl);

static FUNC(boolean, GMOVRLSTMGR_CODE) ApaRcvrlFltChk(boolean Msg1F5BusHiSpdInvld_Cnt_T_logl,
	                                                  boolean VehSpdSecurMaxVld_Cnt_T_logl,
										              boolean VehSpdSecurMinVld_Cnt_T_logl);	

static FUNC(void, GMOVRLSTMGR_CODE) ApaTmpInhbExitCdnsChk(boolean ApaNrcvrlFlt_Cnt_T_logl,
														  LoaSt1 LoaSt_Cnt_T_enum,
														  float32 VehSpdSecurMax_Kph_T_f32,
														  boolean ApaEna_Cnt_T_logl,
														  boolean HwHaptcEna_Cnt_T_logl,
														  boolean ApaRcvrlFlt_Cnt_T_logl,
                                                          SysSt1 SysSt_Cnt_T_enum,
														  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) ApaSt_Cnt_T_u08);	

static FUNC(void, GMOVRLSTMGR_CODE) ApaActvExitCdnsChk(boolean ApaNrcvrlFlt_Cnt_T_logl,
													   LoaSt1 LoaSt_Cnt_T_enum,
													   float32 VehSpdSecurMax_Kph_T_f32,
													   boolean ApaEna_Cnt_T_logl,
													   boolean HwHaptcEna_Cnt_T_logl,
													   boolean ApaRcvrlFlt_Cnt_T_logl,
													   boolean ApaIntv_Cnt_T_logl,
                                                       SysSt1 SysSt_Cnt_T_enum,
													   P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) ApaSt_Cnt_T_u08);	

static FUNC(void, GMOVRLSTMGR_CODE) ApaCtrlAvlExitCdnsChk(float32 VehSpdSecurMax_Kph_T_f32,
														  boolean ApaRcvrlFlt_Cnt_T_logl,
														  boolean HwHaptcEnaDurnExcdd_Cnt_T_logl,
														  boolean VehStandStillTiExcdd_Cnt_T_logl,
														  boolean ShiftLvrRvsTiExcdd_Cnt_T_logl,
														  boolean ApaEna_Cnt_T_logl,
														  boolean HwHaptcEna_Cnt_T_logl,	
                                                          boolean HaptcStTranActvToWaitFlg_Cnt_T_logl,
                                                          boolean TranHaptcWaitToApaStActvFlg_Cnt_T_logl,
                                                          SysSt1 SysSt_Cnt_T_enum,
														  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) HaptcSt_Cnt_T_u08,
														  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) ApaSt_Cnt_T_u08);
                                                          
static FUNC(void, GMOVRLSTMGR_CODE) LkaStTran(boolean LkaMfgEna_Cnt_T_logl,
											  boolean LkaPrmntFlt_Cnt_T_logl,
											  LoaSt1 LoaSt_Cnt_T_enum,
											  boolean LkaFlt_Cnt_T_logl,
											  boolean LkaInhb_Cnt_T_logl,
											  uint8 EscSt_Cnt_T_u08,
											  boolean LkaEna_Cnt_T_logl,
											  float32 VehSpdSecurMin_Kph_T_f32,
											  float32 VehSpdSecurMax_Kph_T_f32,
                                              boolean LKAIntv_Cnt_T_logl,
											  boolean MfgOvrlDi_Cnt_T_logl,
                                              SysSt1 SysSt_Cnt_T_enum,
											  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) LkaSt_Cnt_T_u08);		

static FUNC(void, GMOVRLSTMGR_CODE) EscStTran(boolean EscMfgEna_Cnt_T_logl,
											  boolean EscFlt_Cnt_T_logl,
											  LoaSt1 LoaSt_Cnt_T_enum,
											  float32 VehSpdSecurMax_Kph_T_f32,
											  boolean EscEna_Cnt_T_logl,
											  boolean EscLimdActv_Cnt_T_logl,
											  boolean MfgOvrlDi_Cnt_T_logl,
                                              SysSt1 SysSt_Cnt_T_enum,
											  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) EscSt_Cnt_T_u08);											  

static FUNC(boolean, GMOVRLSTMGR_CODE) HwAgServo(boolean HwAgTrajEna_Cnt_T_logl,
											     uint8 ApaSt_Cnt_T_u08,
											     float32 HwAgTraj_HwDeg_T_f32,
											     float32 HwAgTarLimd_HwDeg_T_f32,
											     P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwAgServoCmd_HwDeg_T_f32);

static FUNC(void, GMOVRLSTMGR_CODE) InctIgnCntrOnce(uint16 IgnCntrLcl_Cnt_T_u16);      

static FUNC(boolean, GMOVRLSTMGR_CODE) HwTqFildChk(float32 HwTq_HwNwtMtr_T_f32);    

static FUNC(boolean, GMOVRLSTMGR_CODE) LKAIntv(float32 HwTq_HwNwtMtr_T_f32, float32 LkaTqCmdCdnd_HwNwtMtr_T_f32);    

static FUNC(boolean, GMOVRLSTMGR_CODE) LkaPrmntFlt(boolean LkaFlt_Cnt_T_logl);  

static FUNC(boolean, GMOVRLSTMGR_CODE) HaptcStTranActvToWaitFlg(void);

static FUNC(boolean, GMOVRLSTMGR_CODE) TranHaptcWaitToApaStActvFlg(void);    

static FUNC(void, GMOVRLSTMGR_CODE) EnHaptcFb(P2VAR(boolean, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnEna_Cnt_T_logl,
                                              P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnMotAmp_MotNwtMtr_T_f32,
                                              P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnFrq_Hz_T_f32);  

static FUNC(void, GMOVRLSTMGR_CODE) HaptcFbPostStrtUp(uint8 ApaSt_Cnt_T_u08, 
                                                      uint8 HaptcSt_Cnt_T_u08, 
                                                      boolean HwTqFildWithinIntl_Cnt_T_logl, 
                                                      float32 VehSpd_Kph_T_f32,
                                                      uint16 IgnCntrLcl_Cnt_T_u16, 
                                                      boolean LoaStLimdOrSwBasdMtgtn_Cnt_T_logl,
                                                      P2VAR(boolean, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnEna_Cnt_T_logl, 
                                                      P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnMotAmp_MotNwtMtr_T_f32,
                                                      P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnFrq_Hz_T_f32); 

static FUNC(boolean, GMOVRLSTMGR_CODE) ApaNrcvrlFlt(boolean Msg337BusChassisExpInvld_Cnt_T_logl, 
                                                    boolean Msg337BusChassisExpMiss_Cnt_T_logl); 

static FUNC(boolean, GMOVRLSTMGR_CODE) EscFlt(boolean Msg180BusChassisExpInvld_Cnt_T_logl, 
                                              boolean Msg180BusChassisExpMiss_Cnt_T_logl); 
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
 * u10p6: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 *
 * Enumeration Types:
 * ==================
 * LoaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   LOAST_NORM (0U)
 *   LOAST_LIMD (1U)
 *   LOAST_SWBASDMTGTN (2U)
 *   LOAST_FADEOUT (3U)
 *   LOAST_CTRLDSHTDWNREQD (4U)
 *   LOAST_IMDTSHTDWNREQD (5U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u10p6_8: Array with 8 element(s) of type u10p6
 * Ary1D_u2p14_8: Array with 8 element(s) of type u2p14
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_HaptcStTranActvToWaitRefTi(void)
 *   uint32 *Rte_Pim_HapticActvRefTmr(void)
 *   uint32 *Rte_Pim_HapticWaitRefTmr(void)
 *   uint32 *Rte_Pim_LkaFltRefTmr(void)
 *   uint32 *Rte_Pim_LkaIntvRefTi1(void)
 *   uint32 *Rte_Pim_LkaIntvRefTi2(void)
 *   uint32 *Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi(void)
 *   uint32 *Rte_Pim_PrevApaIntvRefTi(void)
 *   uint32 *Rte_Pim_PrevHaptcReqRefTi(void)
 *   uint32 *Rte_Pim_PrevShiftLvrRvsRefTi(void)
 *   uint32 *Rte_Pim_PrevVehStandStillRefTi(void)
 *   uint32 *Rte_Pim_TqOscCycRefTi(void)
 *   uint32 *Rte_Pim_TranHaptcWaitToApaStActvRefTi(void)
 *   uint16 *Rte_Pim_GmLoaIgnCntr(void)
 *   uint8 *Rte_Pim_LkaFltCntr(void)
 *   uint8 *Rte_Pim_PrevApaSt(void)
 *   uint8 *Rte_Pim_PrevEscSt(void)
 *   uint8 *Rte_Pim_PrevHaptcSt(void)
 *   uint8 *Rte_Pim_PrevLkaSt(void)
 *   boolean *Rte_Pim_IgnCntrUpd(void)
 *   boolean *Rte_Pim_LkaFltPrev(void)
 *   boolean *Rte_Pim_LkaIntvPrev(void)
 *   boolean *Rte_Pim_LoaStChk(void)
 *   boolean *Rte_Pim_PrevApaIntvEna(void)
 *   boolean *Rte_Pim_PrevHaptcReqEna(void)
 *   boolean *Rte_Pim_PrevLkaFlt(void)
 *   boolean *Rte_Pim_PrevShiftLvrRvsEna(void)
 *   boolean *Rte_Pim_PrevVehStandStillEna(void)
 *   boolean *Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs(void)
 *   boolean *Rte_Pim_dGmOvrlStMgrApaStandStill(void)
 *   FilLpRec1 *Rte_Pim_HwTqLkaLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqOscnLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrApaHwTqThd_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHaptcAmp_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHaptcFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrStandStillThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcDurn_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(void)
 *   uint16 Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *   u2p14 *Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(void)
 *   u10p6 *Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(void)
 *
 *********************************************************************************************************************/


#define GmOvrlStMgr_START_SEC_CODE
#include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetGmLoaIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetGmLoaIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetGmLoaIgnCntr_Oper(uint16 *GmLoaIgnCntr_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) GetGmLoaIgnCntr_Oper(P2VAR(uint16, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) GmLoaIgnCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetGmLoaIgnCntr_Oper
 *********************************************************************************************************************/
    *GmLoaIgnCntr_Arg = *Rte_Pim_GmLoaIgnCntr();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmOvrlStMgrInit1
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
 *   void Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmOvrlStMgrInit1
 *********************************************************************************************************************/
    VAR(NvM_RequestResultType, AUTOMATIC)   GmLoaIgnCntrErrSts_Cnt_T_enum;
    VAR(uint16, AUTOMATIC)                  IgnCntr_Cnt_T_u16;
    
    /* Filter initializations */
	FilLpInit(0.0F, Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqLpFil());
    FilLpInit(0.0F, Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqOscnLpFil());
    FilLpInit(0.0F, Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqLkaLpFil());
    
    /* Timer initializations */
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TqOscCycRefTi());
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi1());
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi2());
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaFltRefTmr());
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HaptcStTranActvToWaitRefTi());
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TranHaptcWaitToApaStActvRefTi());
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi());
    
    *Rte_Pim_IgnCntrUpd() = FALSE;
    *Rte_Pim_LoaStChk()   = FALSE;
    
    /* Check NVM error status */
    (void)Rte_Call_GmLoaIgnCntr_GetErrorStatus(&GmLoaIgnCntrErrSts_Cnt_T_enum);
    
    if(GmLoaIgnCntrErrSts_Cnt_T_enum != NVM_REQ_OK)
    {
        *Rte_Pim_GmLoaIgnCntr() = 0U;
    }

    IgnCntr_Cnt_T_u16 = *Rte_Pim_GmLoaIgnCntr();
    Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(IgnCntr_Cnt_T_u16);
    
    /* Check if ignition counter has reached the threshold, set the appropriate NTC */
    if(IgnCntr_Cnt_T_u16 >= Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val())
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E2, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E2, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    }
    
    if(IgnCntr_Cnt_T_u16 > 0U)
    {
        *Rte_Pim_GmLoaIgnCntr() -= 1U;
        (void)Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(TRUE);
    }
    else
    {
        *Rte_Pim_GmLoaIgnCntr() = 0U;
    }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmOvrlStMgrPer1
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
 *   Std_ReturnType Rte_Read_AbsActvProtd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ApaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscLimdActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTar_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTraj_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrajEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwHaptcEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LkaTqCmdCdnd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_MfgOvrlDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg17DBusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg17DBusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusChassisExpInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusChassisExpMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1E9BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1E9BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1F5BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg214BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg214BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg337BusChassisExpInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg337BusChassisExpMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ShiftLvrRvs_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMaxVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMinVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtActv_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApaDrvrIntvDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_ApaSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EscSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwAgServoCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgServoEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwOscnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwOscnFrq_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwOscnMotAmp_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqOscSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaSt_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl(void)
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
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmOvrlStMgrPer1
 *********************************************************************************************************************/
	VAR(boolean, AUTOMATIC) AbsActvProtd_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ApaEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) EscEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) EscLimdActv_Cnt_T_logl;
	VAR(float32, AUTOMATIC) HwAgEotCcw_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwAgEotCw_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwAgTar_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwAgTraj_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) HwAgTrajEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) HwHaptcEna_Cnt_T_logl;
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(uint16, AUTOMATIC)  IgnCntrLcl_Cnt_T_u16;
	VAR(boolean, AUTOMATIC) LkaEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) LkaTqCmdCdnd_HwNwtMtr_T_f32;
	VAR(LoaSt1, AUTOMATIC)  LoaSt_Cnt_T_enum;
	VAR(boolean, AUTOMATIC) Msg17DBusHiSpdInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg17DBusHiSpdMiss_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg180BusChassisExpInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg180BusChassisExpMiss_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg180BusHiSpdInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg180BusHiSpdMiss_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg1E9BusHiSpdInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg1E9BusHiSpdMiss_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg1F5BusHiSpdInvld_Cnt_T_logl;	
	VAR(boolean, AUTOMATIC) Msg214BusHiSpdInvld_Cnt_T_logl;	
	VAR(boolean, AUTOMATIC) Msg214BusHiSpdMiss_Cnt_T_logl;	
	VAR(boolean, AUTOMATIC) Msg337BusChassisExpInvld_Cnt_T_logl;		
	VAR(boolean, AUTOMATIC) Msg337BusChassisExpMiss_Cnt_T_logl;	
	VAR(boolean, AUTOMATIC) ShiftLvrRvs_Cnt_T_logl;		
    VAR(SysSt1, AUTOMATIC)  SysSt_Cnt_T_enum;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) VehSpdSecurMax_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdSecurMaxVld_Cnt_T_logl;
	VAR(float32, AUTOMATIC) VehSpdSecurMin_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdSecurMinVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehStabyEnhmtActv_Cnt_T_logl;	
	
	VAR(boolean, AUTOMATIC) VehStandStillTiExcdd_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ShiftLvrRvsTiExcdd_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ApaIntv_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LkaFlt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LkaInhb_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LkaPrmntFlt_Cnt_T_logl;        
	VAR(boolean, AUTOMATIC) ApaRcvrlFlt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ApaNrcvrlFlt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) EscFlt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) HwHaptcEnaDurnExcdd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwTqFildWithinIntl_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) LKAIntv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HaptcStTranActvToWaitFlg_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) TranHaptcWaitToApaStActvFlg_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) LoaStLimdOrSwBasdMtgtn_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MfgOvrlDi_Cnt_T_logl;

	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(uint8, AUTOMATIC)   HaptcSt_Cnt_T_u08 = HAPTCSTINACTVNOTPLS_CNT_U08;
	VAR(float32, AUTOMATIC) HwAgTarLimd_HwDeg_T_f32;
	
	/* outputs */
	VAR(uint8, AUTOMATIC)   ApaSt_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   EscSt_Cnt_T_u08;
	VAR(float32, AUTOMATIC) HwAgServoCmd_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) HwAgServoEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) HwOscnEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwOscnFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) HwOscnMotAmp_MotNwtMtr_T_f32;
	VAR(uint8, AUTOMATIC)   LkaSt_Cnt_T_u08;
	
	/* read inputs */
	(void)Rte_Read_AbsActvProtd_Logl(&AbsActvProtd_Cnt_T_logl);
	(void)Rte_Read_ApaEna_Logl(&ApaEna_Cnt_T_logl);
	(void)Rte_Read_EscEna_Logl(&EscEna_Cnt_T_logl);
	(void)Rte_Read_EscLimdActv_Logl(&EscLimdActv_Cnt_T_logl);
	(void)Rte_Read_HwAgEotCcw_Val(&HwAgEotCcw_HwDeg_T_f32);
	(void)Rte_Read_HwAgEotCw_Val(&HwAgEotCw_HwDeg_T_f32);
	(void)Rte_Read_HwAgTar_Val(&HwAgTar_HwDeg_T_f32);
	(void)Rte_Read_HwAgTraj_Val(&HwAgTraj_HwDeg_T_f32);
	(void)Rte_Read_HwAgTrajEna_Logl(&HwAgTrajEna_Cnt_T_logl);
	(void)Rte_Read_HwHaptcEna_Logl(&HwHaptcEna_Cnt_T_logl);
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    IgnCntrLcl_Cnt_T_u16 = Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl();
	(void)Rte_Read_LkaEna_Logl(&LkaEna_Cnt_T_logl);
    (void)Rte_Read_LkaTqCmdCdnd_Val(&LkaTqCmdCdnd_HwNwtMtr_T_f32);
	(void)Rte_Read_LoaSt_Val(&LoaSt_Cnt_T_enum);
	(void)Rte_Read_Msg17DBusHiSpdInvld_Logl(&Msg17DBusHiSpdInvld_Cnt_T_logl);      
	(void)Rte_Read_Msg17DBusHiSpdMiss_Logl(&Msg17DBusHiSpdMiss_Cnt_T_logl);
	(void)Rte_Read_Msg180BusChassisExpInvld_Logl(&Msg180BusChassisExpInvld_Cnt_T_logl);
	(void)Rte_Read_Msg180BusChassisExpMiss_Logl(&Msg180BusChassisExpMiss_Cnt_T_logl);
	(void)Rte_Read_Msg180BusHiSpdInvld_Logl(&Msg180BusHiSpdInvld_Cnt_T_logl);
	(void)Rte_Read_Msg180BusHiSpdMiss_Logl(&Msg180BusHiSpdMiss_Cnt_T_logl);
	(void)Rte_Read_Msg1E9BusHiSpdInvld_Logl(&Msg1E9BusHiSpdInvld_Cnt_T_logl);    
	(void)Rte_Read_Msg1E9BusHiSpdMiss_Logl(&Msg1E9BusHiSpdMiss_Cnt_T_logl);
	(void)Rte_Read_Msg1F5BusHiSpdInvld_Logl(&Msg1F5BusHiSpdInvld_Cnt_T_logl);
	(void)Rte_Read_Msg214BusHiSpdInvld_Logl(&Msg214BusHiSpdInvld_Cnt_T_logl);
	(void)Rte_Read_Msg214BusHiSpdMiss_Logl(&Msg214BusHiSpdMiss_Cnt_T_logl);
	(void)Rte_Read_Msg337BusChassisExpInvld_Logl(&Msg337BusChassisExpInvld_Cnt_T_logl);
	(void)Rte_Read_Msg337BusChassisExpMiss_Logl(&Msg337BusChassisExpMiss_Cnt_T_logl);
	(void)Rte_Read_ShiftLvrRvs_Logl(&ShiftLvrRvs_Cnt_T_logl);
    (void)Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
	(void)Rte_Read_VehSpdSecurMax_Val(&VehSpdSecurMax_Kph_T_f32);
    (void)Rte_Read_VehSpdSecurMaxVld_Logl(&VehSpdSecurMaxVld_Cnt_T_logl);
	(void)Rte_Read_VehSpdSecurMin_Val(&VehSpdSecurMin_Kph_T_f32);
    (void)Rte_Read_VehSpdSecurMinVld_Logl(&VehSpdSecurMinVld_Cnt_T_logl);
	(void)Rte_Read_VehStabyEnhmtActv_Logl(&VehStabyEnhmtActv_Cnt_T_logl);
	(void)Rte_Read_MfgOvrlDi_Logl(&MfgOvrlDi_Cnt_T_logl);
	
	/* Vehicle Stand Still Timer */
	VehStandStillTiExcdd_Cnt_T_logl = VehStandStillTmrElpdChk(VehSpdSecurMax_Kph_T_f32);

	*Rte_Pim_dGmOvrlStMgrApaStandStill() = VehStandStillTiExcdd_Cnt_T_logl;

	/* Shift Lever Reverse */
	ShiftLvrRvsTiExcdd_Cnt_T_logl = ShiftLvrRvsTmrElpdChk(ShiftLvrRvs_Cnt_T_logl);											   
	
	*Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs() = ShiftLvrRvsTiExcdd_Cnt_T_logl;

	/* APA Intervention */
	ApaIntv_Cnt_T_logl = ApaIntv(HwTq_HwNwtMtr_T_f32);

	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LkaFltRefTmr(), &TiSpan_Cnt_T_u32);

	if(TiSpan_Cnt_T_u32 >= (LKAFLTTMRTHD_MILLISEC_U32 * MILLISECTO100MICROSECCNVN_CNT_U32))
	{
		/* LKA Fault */
		LkaFlt_Cnt_T_logl = LkaFltActvChk(Msg17DBusHiSpdMiss_Cnt_T_logl,
										  Msg180BusHiSpdMiss_Cnt_T_logl,
										  Msg180BusHiSpdInvld_Cnt_T_logl,
										  Msg1E9BusHiSpdMiss_Cnt_T_logl,
										  Msg214BusHiSpdInvld_Cnt_T_logl,
										  Msg214BusHiSpdMiss_Cnt_T_logl,
										  VehSpdSecurMaxVld_Cnt_T_logl,
										  VehSpdSecurMinVld_Cnt_T_logl);
		/* LKA Inhibit */
		LkaInhb_Cnt_T_logl = LkaInhbChk(Msg17DBusHiSpdInvld_Cnt_T_logl,
										VehStabyEnhmtActv_Cnt_T_logl,
										AbsActvProtd_Cnt_T_logl,
										Msg1E9BusHiSpdInvld_Cnt_T_logl);
		/* LKA Permanent Fault */  
		LkaPrmntFlt_Cnt_T_logl = LkaPrmntFlt(LkaFlt_Cnt_T_logl);
		*Rte_Pim_PrevLkaFlt() = LkaFlt_Cnt_T_logl;
	}
	else
	{
		/* Delay has not yet passed so set passed values to false */
		LkaFlt_Cnt_T_logl = FALSE;
		LkaInhb_Cnt_T_logl = FALSE;
		LkaPrmntFlt_Cnt_T_logl = FALSE;
	}

	/* ApaRcvrlFlt */
	ApaRcvrlFlt_Cnt_T_logl = ApaRcvrlFltChk(Msg1F5BusHiSpdInvld_Cnt_T_logl,
	                                        VehSpdSecurMaxVld_Cnt_T_logl,
										    VehSpdSecurMinVld_Cnt_T_logl);
	
	/* ApaNrcvrlFlt */
    ApaNrcvrlFlt_Cnt_T_logl = ApaNrcvrlFlt(Msg337BusChassisExpInvld_Cnt_T_logl, Msg337BusChassisExpMiss_Cnt_T_logl);
	
	/* EscFlt */
    EscFlt_Cnt_T_logl = EscFlt(Msg180BusChassisExpInvld_Cnt_T_logl, Msg180BusChassisExpMiss_Cnt_T_logl);

	/* Haptic Duration exceeded ?*/
	HwHaptcEnaDurnExcdd_Cnt_T_logl = HaptcEnaDurnElpdChk(HwHaptcEna_Cnt_T_logl);
    
    /* LoaStLimdOrSwBasdMtgtn */
    if((LoaSt_Cnt_T_enum == LOAST_LIMD) || (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN))
    {
        LoaStLimdOrSwBasdMtgtn_Cnt_T_logl = TRUE;
    }
    else
    {
        LoaStLimdOrSwBasdMtgtn_Cnt_T_logl = FALSE;
    }
    
    /* Increment ign cntr once */
    if(LoaStLimdOrSwBasdMtgtn_Cnt_T_logl != FALSE)
    {
        InctIgnCntrOnce(IgnCntrLcl_Cnt_T_u16);
    }
    
    /* HwTqFildWithinIntl */
    HwTqFildWithinIntl_Cnt_T_logl = HwTqFildChk(HwTq_HwNwtMtr_T_f32);
    
    /* LKAIntv */
    LKAIntv_Cnt_T_logl = LKAIntv(HwTq_HwNwtMtr_T_f32, LkaTqCmdCdnd_HwNwtMtr_T_f32);
    
    /* HaptcStTransActvToWaitFlg */
    HaptcStTranActvToWaitFlg_Cnt_T_logl = HaptcStTranActvToWaitFlg();
    
    /* TransHaptcWaitToAPAStActvFlg */
    TranHaptcWaitToApaStActvFlg_Cnt_T_logl = TranHaptcWaitToApaStActvFlg();
	
	/****** Start of 'APA State' ******/
	if (Rte_Prm_GmOvrlStMgrApaMfgEna_Logl() == FALSE)
	{
		ApaSt_Cnt_T_u08 = APASTMFGDI_CNT_U08;
	}
	else
	{
		ApaSt_Cnt_T_u08 = *Rte_Pim_PrevApaSt();   
		
        if((MfgOvrlDi_Cnt_T_logl == TRUE) || (ApaNrcvrlFlt_Cnt_T_logl == TRUE) || (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN))
		{
			ApaSt_Cnt_T_u08 = APASTPRMNTFAILD_CNT_U08;
		}	

		switch (ApaSt_Cnt_T_u08)
		{			
			case(APASTTMPINHB_CNT_U08):
			{
				ApaTmpInhbExitCdnsChk(ApaNrcvrlFlt_Cnt_T_logl,
									  LoaSt_Cnt_T_enum,
									  VehSpdSecurMax_Kph_T_f32,
									  ApaEna_Cnt_T_logl,
									  HwHaptcEna_Cnt_T_logl,
									  ApaRcvrlFlt_Cnt_T_logl,
                                      SysSt_Cnt_T_enum,
									  &ApaSt_Cnt_T_u08);		
			}
			break;
			
			case(APASTCTRLAVL_CNT_U08):
			{
				ApaCtrlAvlExitCdnsChk(VehSpdSecurMax_Kph_T_f32,
									  ApaRcvrlFlt_Cnt_T_logl,
									  HwHaptcEnaDurnExcdd_Cnt_T_logl,
									  VehStandStillTiExcdd_Cnt_T_logl,
									  ShiftLvrRvsTiExcdd_Cnt_T_logl,
									  ApaEna_Cnt_T_logl,
									  HwHaptcEna_Cnt_T_logl,	
                                      HaptcStTranActvToWaitFlg_Cnt_T_logl,
                                      TranHaptcWaitToApaStActvFlg_Cnt_T_logl,
                                      SysSt_Cnt_T_enum,
									  &HaptcSt_Cnt_T_u08,
									  &ApaSt_Cnt_T_u08);
			}
			break;
			
			case(APASTACTV_CNT_U08):
			{
				ApaActvExitCdnsChk(ApaNrcvrlFlt_Cnt_T_logl,
								   LoaSt_Cnt_T_enum,
								   VehSpdSecurMax_Kph_T_f32,
								   ApaEna_Cnt_T_logl,
								   HwHaptcEna_Cnt_T_logl,
								   ApaRcvrlFlt_Cnt_T_logl,
								   ApaIntv_Cnt_T_logl,
                                   SysSt_Cnt_T_enum,
								   &ApaSt_Cnt_T_u08);
			}
			break;
			
			default:
			break;
		}
	}
	*Rte_Pim_PrevApaSt() = ApaSt_Cnt_T_u08;
	/****** End of 'APA State' ******/
	
	/****** Start of 'ESC State' ******/	
	EscStTran(Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(),
			  EscFlt_Cnt_T_logl,
			  LoaSt_Cnt_T_enum,
			  VehSpdSecurMax_Kph_T_f32,
			  EscEna_Cnt_T_logl,
			  EscLimdActv_Cnt_T_logl,
			  MfgOvrlDi_Cnt_T_logl,
              SysSt_Cnt_T_enum,
			  &EscSt_Cnt_T_u08);	  
	/****** End of 'ESC State' ******/
	
	/****** Start of 'LKA State' ******/	
	LkaStTran(Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(),
	          LkaPrmntFlt_Cnt_T_logl,
			  LoaSt_Cnt_T_enum,
			  LkaFlt_Cnt_T_logl,
			  LkaInhb_Cnt_T_logl,
			  EscSt_Cnt_T_u08,
			  LkaEna_Cnt_T_logl,
			  VehSpdSecurMin_Kph_T_f32,
			  VehSpdSecurMax_Kph_T_f32,
              LKAIntv_Cnt_T_logl,
			  MfgOvrlDi_Cnt_T_logl,
              SysSt_Cnt_T_enum,
			  &LkaSt_Cnt_T_u08);	
	/****** End of 'LKA State' ******/
    
    if(SysSt_Cnt_T_enum == SYSST_ENA)
    {
        /* SysStOperate */
        if(*Rte_Pim_LoaStChk() == FALSE)
        {
            /* At start-up check*/
            if((IgnCntrLcl_Cnt_T_u16 < Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val()) &&
               (LoaStLimdOrSwBasdMtgtn_Cnt_T_logl != FALSE))
            {
                /* Enable haptic feedback */
                EnHaptcFb(&HwOscnEna_Cnt_T_logl, &HwOscnMotAmp_MotNwtMtr_T_f32, &HwOscnFrq_Hz_T_f32);
            }
            else
            {
                /* Disable haptic feedback */
                (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi());
                *Rte_Pim_LoaStChk() = TRUE;
                HwOscnEna_Cnt_T_logl = FALSE;
                HwOscnMotAmp_MotNwtMtr_T_f32 = 0.0F;
                HwOscnFrq_Hz_T_f32 = HWOSCNFRQMIN_HZ_F32;
            }
        }
        else
        {
            /* After start-up check */
            HaptcFbPostStrtUp(ApaSt_Cnt_T_u08, HaptcSt_Cnt_T_u08, HwTqFildWithinIntl_Cnt_T_logl, VehSpd_Kph_T_f32,
                              IgnCntrLcl_Cnt_T_u16, LoaStLimdOrSwBasdMtgtn_Cnt_T_logl, &HwOscnEna_Cnt_T_logl, &HwOscnMotAmp_MotNwtMtr_T_f32,
                              &HwOscnFrq_Hz_T_f32);
        }
    }
    else
    {
        /* SysStNotOperate */
        HwOscnEna_Cnt_T_logl = FALSE;
        HwOscnMotAmp_MotNwtMtr_T_f32 = 0.0F;
        HwOscnFrq_Hz_T_f32 = HWOSCNFRQMIN_HZ_F32;
    }
		
	/* HwAgTarLimiter */
	HwAgTarLimd_HwDeg_T_f32 = Lim_f32(HwAgTar_HwDeg_T_f32,
	                                  (HwAgEotCcw_HwDeg_T_f32 + Rte_Prm_GmOvrlStMgrHaptcAmp_Val()),
									  (HwAgEotCw_HwDeg_T_f32 - Rte_Prm_GmOvrlStMgrHaptcAmp_Val()));
	
	/* HwAgServo */
	HwAgServoEna_Cnt_T_logl = HwAgServo(HwAgTrajEna_Cnt_T_logl,                     
									    ApaSt_Cnt_T_u08,
									    HwAgTraj_HwDeg_T_f32,
									    HwAgTarLimd_HwDeg_T_f32,
									    &HwAgServoCmd_HwDeg_T_f32);
                                        
    /* Limit HwAgServoCmd */
    HwAgServoCmd_HwDeg_T_f32 = Lim_f32(HwAgServoCmd_HwDeg_T_f32,
                                       HWAGSERVOCMDMIN_HWDEG_F32,
                                       HWAGSERVOCMDMAX_HWDEG_F32);
                                       
    /* Limit HwOscnMotAmp */
    HwOscnMotAmp_MotNwtMtr_T_f32 = Lim_f32(HwOscnMotAmp_MotNwtMtr_T_f32,
                                           HWOSCNMOTAMPMIN_MOTNWTMTR_F32, 
                                           HWOSCNMOTAMPMAX_MOTNWTMTR_F32);
    
    /* Limit HwOscnFrq */
    HwOscnFrq_Hz_T_f32 = Lim_f32(HwOscnFrq_Hz_T_f32,
                                 HWOSCNFRQMIN_HZ_F32,
                                 HWOSCNFRQMAX_HZ_F32);
										
	(void)Rte_Write_ApaDrvrIntvDetd_Logl(ApaIntv_Cnt_T_logl);
	(void)Rte_Write_ApaSt_Val(ApaSt_Cnt_T_u08);
	(void)Rte_Write_EscSt_Val(EscSt_Cnt_T_u08);
	(void)Rte_Write_HwAgServoCmd_Val(HwAgServoCmd_HwDeg_T_f32);
	(void)Rte_Write_HwAgServoEna_Logl(HwAgServoEna_Cnt_T_logl);
	(void)Rte_Write_HwOscnMotAmp_Val(HwOscnMotAmp_MotNwtMtr_T_f32);
	(void)Rte_Write_HwOscnEna_Logl(HwOscnEna_Cnt_T_logl);
    (void)Rte_Write_HwOscnFrq_Val(HwOscnFrq_Hz_T_f32);
	(void)Rte_Write_HwTqOscSt_Val(HaptcSt_Cnt_T_u08);
	(void)Rte_Write_LkaSt_Val(LkaSt_Cnt_T_u08);
		
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetGmLoaIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetGmLoaIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, GmOvrlStMgr_CODE) SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetGmLoaIgnCntr_Oper
 *********************************************************************************************************************/
    *Rte_Pim_GmLoaIgnCntr() = GmLoaIgnCntr_Arg;
    (void)Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmOvrlStMgr_STOP_SEC_CODE
#include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   VehStandStillTmrElpdChk
* Description   :   "Timer for VehStandStill" block implementation.                 
* Inputs        :   VehSpdSecurMax_Kph_T_f32                    
* Outputs       :   VehStandStillTiExcdd_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) VehStandStillTmrElpdChk(float32 VehSpdSecurMax_Kph_T_f32)
{
	VAR(boolean, AUTOMATIC) VehStandStillEna_Cnt_T_logl;
	VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32 = 0U;
	VAR(boolean, AUTOMATIC) VehStandStillTiExcdd_Cnt_T_logl = FALSE;
	
	if(VehSpdSecurMax_Kph_T_f32 <= Rte_Prm_GmOvrlStMgrStandStillThd_Val())
	{
		VehStandStillEna_Cnt_T_logl = TRUE;
	}
	else
	{
		VehStandStillEna_Cnt_T_logl = FALSE;
	}
									 
	if((VehStandStillEna_Cnt_T_logl == TRUE) && (*Rte_Pim_PrevVehStandStillEna() == FALSE))
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrevVehStandStillRefTi()); 
	}
	else if(VehStandStillEna_Cnt_T_logl == TRUE)
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrevVehStandStillRefTi(), &Span_Cnt_T_u32);
	}
	else
	{		
	}
		
	if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrStandStillTiThd_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
	{
		VehStandStillTiExcdd_Cnt_T_logl = TRUE;
	}
	
	*Rte_Pim_PrevVehStandStillEna() = VehStandStillEna_Cnt_T_logl;		

	return VehStandStillTiExcdd_Cnt_T_logl;	
}	
/*******************************************************************************
* Name          :   ShiftLvrRvsTmrElpdChk
* Description   :   "Timer for ShiftLvrRvs" block implementation.                 
* Inputs        :   ShiftLvrRvs_Cnt_T_logl                    
* Outputs       :   ShiftLvrRvsTiExcdd_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) ShiftLvrRvsTmrElpdChk(boolean ShiftLvrRvs_Cnt_T_logl)
{						   
	VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32 = 0U;
	VAR(boolean, AUTOMATIC) ShiftLvrRvsTiExcdd_Cnt_T_logl = FALSE;
	
	if((ShiftLvrRvs_Cnt_T_logl == TRUE) && (*Rte_Pim_PrevShiftLvrRvsEna() == FALSE))
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrevShiftLvrRvsRefTi()); 
	}
	else if((ShiftLvrRvs_Cnt_T_logl == TRUE))
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrevShiftLvrRvsRefTi(), &Span_Cnt_T_u32);
	}
	else
	{		
	}
		
	if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
	{
		ShiftLvrRvsTiExcdd_Cnt_T_logl = TRUE;
	}
	
	*Rte_Pim_PrevShiftLvrRvsEna() = ShiftLvrRvs_Cnt_T_logl;
	
	return ShiftLvrRvsTiExcdd_Cnt_T_logl;											   								 
}
/*******************************************************************************
* Name          :   ApaIntv
* Description   :   "ApaIntv" block implementation.                 
* Inputs        :   HwTq_HwNwtMtr_T_f32                    
* Outputs       :   ApaIntv_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) ApaIntv(float32 HwTq_HwNwtMtr_T_f32)
{
	VAR(boolean, AUTOMATIC) ApaIntv_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) ApaIntvEna_Cnt_T_logl;
	VAR(float32, AUTOMATIC) HwTqFild_HwNwtMtr_T_f32;
	VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32 = 0U;
	
	HwTqFild_HwNwtMtr_T_f32 = Abslt_f32_f32(FilLpUpdOutp_f32(HwTq_HwNwtMtr_T_f32,
                                                             Rte_Pim_HwTqLpFil()));
	
	if( (*Rte_Pim_PrevHaptcSt() == HAPTCSTACTV_CNT_U08) || (*Rte_Pim_PrevHaptcSt() == HAPTCSTWAIT_CNT_U08) )
	{
		HwTqFild_HwNwtMtr_T_f32 = 0.0F;
	}
	
	if(HwTqFild_HwNwtMtr_T_f32 >= Rte_Prm_GmOvrlStMgrApaHwTqThd_Val())
	{
		ApaIntvEna_Cnt_T_logl = TRUE;
	}
	else
	{
		ApaIntvEna_Cnt_T_logl = FALSE;
	}
	
	if((ApaIntvEna_Cnt_T_logl == TRUE) && (*Rte_Pim_PrevApaIntvEna() == FALSE))
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrevApaIntvRefTi()); 
	}
	else if(ApaIntvEna_Cnt_T_logl == TRUE)
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrevApaIntvRefTi(), &Span_Cnt_T_u32);
	}
	else
	{		
	}
		
	if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
	{
		ApaIntv_Cnt_T_logl = TRUE;
	}
	
	*Rte_Pim_PrevApaIntvEna() = ApaIntvEna_Cnt_T_logl;
	
	return ApaIntv_Cnt_T_logl;										
								   
}	
/*******************************************************************************
* Name          :   HaptcEnaDurnElpdChk
* Description   :   "Timer for HwHaptcEna" block implementation.                 
* Inputs        :   HwHaptcEna_Cnt_T_logl
* Outputs       :   HwHaptcEnaDurnExcdd_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) HaptcEnaDurnElpdChk(boolean HwHaptcEna_Cnt_T_logl)
{											  
	VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32 = 0U;
	VAR(boolean, AUTOMATIC) HwHaptcEnaDurnExcdd_Cnt_T_logl = FALSE;
	
	if((HwHaptcEna_Cnt_T_logl == TRUE) && (*Rte_Pim_PrevHaptcReqEna() == FALSE))
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrevHaptcReqRefTi()); 
	}
	else if(HwHaptcEna_Cnt_T_logl == TRUE)
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrevHaptcReqRefTi(), &Span_Cnt_T_u32);
	}
	else
	{		
	}
		
	if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
	{
		HwHaptcEnaDurnExcdd_Cnt_T_logl = TRUE;
	}
	
	*Rte_Pim_PrevHaptcReqEna() = HwHaptcEna_Cnt_T_logl;
	
	return HwHaptcEnaDurnExcdd_Cnt_T_logl;	
}
/*******************************************************************************
* Name          :   LkaFltActvChk
* Description   :   Determination of 'LkaFlt'.                 
* Inputs        :   Msg17DBusHiSpdMiss_Cnt_T_logl,Msg180BusHiSpdMiss_Cnt_T_logl,
*					Msg180BusHiSpdInvld_Cnt_T_logl,Msg1E9BusHiSpdMiss_Cnt_T_logl,
*                   Msg214BusHiSpdInvld_Cnt_T_logl,Msg214BusHiSpdMiss_Cnt_T_logl,
*					VehSpdSecurMax_Kph_T_f32,VehSpdSecurMin_Kph_T_f32
* Outputs       :   LkaFlt_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) LkaFltActvChk(boolean Msg17DBusHiSpdMiss_Cnt_T_logl,
													 boolean Msg180BusHiSpdMiss_Cnt_T_logl,
													 boolean Msg180BusHiSpdInvld_Cnt_T_logl,
													 boolean Msg1E9BusHiSpdMiss_Cnt_T_logl,
													 boolean Msg214BusHiSpdInvld_Cnt_T_logl,
													 boolean Msg214BusHiSpdMiss_Cnt_T_logl,
													 boolean VehSpdSecurMaxVld_Cnt_T_logl,
													 boolean VehSpdSecurMinVld_Cnt_T_logl)
{														 												 
	VAR(boolean, AUTOMATIC) LkaFlt_Cnt_T_logl;
	
	if((Msg17DBusHiSpdMiss_Cnt_T_logl == TRUE)  ||
	   (Msg180BusHiSpdMiss_Cnt_T_logl == TRUE)  ||
	   (Msg180BusHiSpdInvld_Cnt_T_logl == TRUE) ||
	   (Msg1E9BusHiSpdMiss_Cnt_T_logl == TRUE)  ||
	   (Msg214BusHiSpdInvld_Cnt_T_logl == TRUE) ||
	   (Msg214BusHiSpdMiss_Cnt_T_logl == TRUE)  ||
	   (VehSpdSecurMaxVld_Cnt_T_logl == FALSE) ||
	   (VehSpdSecurMinVld_Cnt_T_logl == FALSE))
	{
		LkaFlt_Cnt_T_logl = TRUE;
	}
	else
	{
		LkaFlt_Cnt_T_logl = FALSE;
	}
	
	return LkaFlt_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   LkaInhbChk
* Description   :   Determination of 'LkaInhb'.                 
* Inputs        :   Msg17DBusHiSpdInvld_Cnt_T_logl,VehStabyEnhmtActv_Cnt_T_logl                    
*                   AbsActvProtd_Cnt_T_logl,Msg1E9BusHiSpdInvld_Cnt_T_logl   
* Outputs       :   LkaInhb_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) LkaInhbChk(boolean Msg17DBusHiSpdInvld_Cnt_T_logl,
								                  boolean VehStabyEnhmtActv_Cnt_T_logl,
								                  boolean AbsActvProtd_Cnt_T_logl,
								                  boolean Msg1E9BusHiSpdInvld_Cnt_T_logl)
{
	VAR(boolean, AUTOMATIC) LkaInhb_Cnt_T_logl;
	
	if((Msg17DBusHiSpdInvld_Cnt_T_logl == TRUE) ||
	   (VehStabyEnhmtActv_Cnt_T_logl == TRUE)   ||
	   (AbsActvProtd_Cnt_T_logl == TRUE)        ||
	   (Msg1E9BusHiSpdInvld_Cnt_T_logl == TRUE))
	{
		LkaInhb_Cnt_T_logl = TRUE;
	}
	else
	{
		LkaInhb_Cnt_T_logl = FALSE;
	}
	
	return LkaInhb_Cnt_T_logl;
}	   
/*******************************************************************************
* Name          :   ApaRcvrlFltChk
* Description   :   Determination of 'ApaRcvrlFlt'.                 
* Inputs        :   Msg1F5BusHiSpdInvld_Cnt_T_logl, VehSpdSecurMax_Kph_T_f32,                   
*                   VehSpdSecurMin_Kph_T_f32   
* Outputs       :   ApaRcvrlFlt_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) ApaRcvrlFltChk(boolean Msg1F5BusHiSpdInvld_Cnt_T_logl,
	                                                  boolean VehSpdSecurMaxVld_Cnt_T_logl,
										              boolean VehSpdSecurMinVld_Cnt_T_logl)
{	
	VAR(boolean, AUTOMATIC) ApaRcvrlFlt_Cnt_T_logl;
	
	if((Msg1F5BusHiSpdInvld_Cnt_T_logl == TRUE) ||
	   (VehSpdSecurMaxVld_Cnt_T_logl == FALSE) ||
	   (VehSpdSecurMinVld_Cnt_T_logl == FALSE))
	{
		ApaRcvrlFlt_Cnt_T_logl = TRUE;
	}
	else
	{
		ApaRcvrlFlt_Cnt_T_logl = FALSE;
	}
	
	return ApaRcvrlFlt_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   ApaTmpInhbExitCdnsChk
* Description   :   This function validates conditions for all state transitions 
*					from 'APA Temporarily Inhibited' state.                 
* Inputs        :   ApaNrcvrlFlt_Cnt_T_logl,LoaSt_Cnt_T_enum,                    
*                   VehSpdSecurMax_Kph_T_f32,ApaEna_Cnt_T_logl,
*					HwHaptcEna_Cnt_T_logl,ApaRcvrlFlt_Cnt_T_logl,    
*                   SysSt_Cnt_T_enum, *ApaSt_Cnt_T_u08
* Outputs       :   None
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) ApaTmpInhbExitCdnsChk(boolean ApaNrcvrlFlt_Cnt_T_logl,
														  LoaSt1 LoaSt_Cnt_T_enum,
														  float32 VehSpdSecurMax_Kph_T_f32,
														  boolean ApaEna_Cnt_T_logl,
														  boolean HwHaptcEna_Cnt_T_logl,
														  boolean ApaRcvrlFlt_Cnt_T_logl,
                                                          SysSt1 SysSt_Cnt_T_enum,
														  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) ApaSt_Cnt_T_u08)
{			
	if((VehSpdSecurMax_Kph_T_f32 <= Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val()) &&
	   (ApaEna_Cnt_T_logl == FALSE)     &&
	   (HwHaptcEna_Cnt_T_logl == FALSE) &&
	   (ApaRcvrlFlt_Cnt_T_logl == FALSE) &&
       (SysSt_Cnt_T_enum == SYSST_ENA))
	{
		*ApaSt_Cnt_T_u08 = APASTCTRLAVL_CNT_U08;
	}
	else
	{
	}	
}
/*******************************************************************************
* Name          :   ApaActvExitCdnsChk
* Description   :   This function validates conditions for all state transitions 
*					from 'APA Active' state.                 
* Inputs        :   ApaNrcvrlFlt_Cnt_T_logl,LoaSt_Cnt_T_enum,                    
*                   VehSpdSecurMax_Kph_T_f32,ApaEna_Cnt_T_logl,
*					HwHaptcEna_Cnt_T_logl,ApaRcvrlFlt_Cnt_T_logl,    
*                   ApaIntv_Cnt_T_logl, SysSt_Cnt_T_enum, *ApaSt_Cnt_T_u08
* Outputs       :   None
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) ApaActvExitCdnsChk(boolean ApaNrcvrlFlt_Cnt_T_logl,
													   LoaSt1 LoaSt_Cnt_T_enum,
													   float32 VehSpdSecurMax_Kph_T_f32,
													   boolean ApaEna_Cnt_T_logl,
													   boolean HwHaptcEna_Cnt_T_logl,
													   boolean ApaRcvrlFlt_Cnt_T_logl,
													   boolean ApaIntv_Cnt_T_logl,
                                                       SysSt1 SysSt_Cnt_T_enum,
													   P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) ApaSt_Cnt_T_u08)
{					  
	if((SysSt_Cnt_T_enum == SYSST_DI) ||
       (VehSpdSecurMax_Kph_T_f32 > Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val()) ||
	   (ApaRcvrlFlt_Cnt_T_logl == TRUE) ||
	   (HwHaptcEna_Cnt_T_logl == TRUE)  ||
	   (ApaIntv_Cnt_T_logl == TRUE))
	{
		*ApaSt_Cnt_T_u08 = APASTTMPINHB_CNT_U08;
	}
	else if(ApaEna_Cnt_T_logl == FALSE)
	{
		*ApaSt_Cnt_T_u08 = APASTCTRLAVL_CNT_U08;
	}
	else
	{
	}
}
/*******************************************************************************
* Name          :   ApaActvExitCdnsChk
* Description   :   This function validates conditions for all state transitions 
*					from and within 'APA Availability for Control' state.                 
* Inputs        :   VehSpdSecurMax_Kph_T_f32,ApaRcvrlFlt_Cnt_T_logl,                    
*                   HwHaptcEnaDurnExcdd_Cnt_T_logl,VehStandStillTiExcdd_Cnt_T_logl,
*					ShiftLvrRvsTiExcdd_Cnt_T_logl,ApaEna_Cnt_T_logl,HwHaptcEna_Cnt_T_logl,  
*                   HaptcStTranActvToWaitFlg_Cnt_T_logl, TranHaptcWaitToApaStActvFlg_Cnt_T_logl,  
*                   SysSt_Cnt_T_enum, *HaptcSt_Cnt_T_u08,*ApaSt_Cnt_T_u08
* Outputs       :   None
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) ApaCtrlAvlExitCdnsChk(float32 VehSpdSecurMax_Kph_T_f32,
														  boolean ApaRcvrlFlt_Cnt_T_logl,
														  boolean HwHaptcEnaDurnExcdd_Cnt_T_logl,
														  boolean VehStandStillTiExcdd_Cnt_T_logl,
														  boolean ShiftLvrRvsTiExcdd_Cnt_T_logl,
														  boolean ApaEna_Cnt_T_logl,
														  boolean HwHaptcEna_Cnt_T_logl,	
                                                          boolean HaptcStTranActvToWaitFlg_Cnt_T_logl,
                                                          boolean TranHaptcWaitToApaStActvFlg_Cnt_T_logl,
                                                          SysSt1 SysSt_Cnt_T_enum,
														  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) HaptcSt_Cnt_T_u08,
														  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) ApaSt_Cnt_T_u08)
{			
	if((SysSt_Cnt_T_enum == SYSST_DI) ||
       (VehSpdSecurMax_Kph_T_f32 > Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val()) ||
       (ApaRcvrlFlt_Cnt_T_logl == TRUE) ||
       ((HwHaptcEna_Cnt_T_logl == TRUE) && 
	    (HwHaptcEnaDurnExcdd_Cnt_T_logl == TRUE)))
	{
		*ApaSt_Cnt_T_u08 = APASTTMPINHB_CNT_U08;
        *HaptcSt_Cnt_T_u08 = HAPTCSTINACTVNOTPLS_CNT_U08;
	}
	else if((Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl()) == FALSE)
	{
		*HaptcSt_Cnt_T_u08 = HAPTCSTDI_CNT_U08;
		
		if((VehStandStillTiExcdd_Cnt_T_logl == TRUE) &&
		   (ShiftLvrRvsTiExcdd_Cnt_T_logl == TRUE)   &&
		   (ApaEna_Cnt_T_logl == TRUE))
		{
			*ApaSt_Cnt_T_u08 = APASTACTV_CNT_U08;
            *HaptcSt_Cnt_T_u08 = HAPTCSTINACTVNOTPLS_CNT_U08;
		}
	}
	else
	{
		*HaptcSt_Cnt_T_u08 = *Rte_Pim_PrevHaptcSt(); 
		
		switch (*HaptcSt_Cnt_T_u08)
		{
			case(HAPTCSTINACTVNOTPLS_CNT_U08):
			{
				if(HwHaptcEna_Cnt_T_logl == FALSE)      
				{
					*HaptcSt_Cnt_T_u08 = HAPTCSTINACTVRDYTOPLS_CNT_U08;
				}
				else
				{							
				}							  
			}
			break;

            case(HAPTCSTINACTVRDYTOPLS_CNT_U08):
            {
                if((VehStandStillTiExcdd_Cnt_T_logl == TRUE) &&
                   (ShiftLvrRvsTiExcdd_Cnt_T_logl == TRUE)   &&
                   (ApaEna_Cnt_T_logl == TRUE) &&
                   (HwHaptcEna_Cnt_T_logl == TRUE))
                {
                    *HaptcSt_Cnt_T_u08 = HAPTCSTACTV_CNT_U08;       
                }
                else if(HwHaptcEna_Cnt_T_logl == TRUE)
                {
                    *HaptcSt_Cnt_T_u08 = HAPTCSTINACTVNOTPLS_CNT_U08;
                }
                else
                {                               
                }                         
        	}
            break;
			
			case(HAPTCSTACTV_CNT_U08):
			{
				if((VehStandStillTiExcdd_Cnt_T_logl == FALSE) ||
				   (ShiftLvrRvsTiExcdd_Cnt_T_logl == FALSE)   ||
				   (ApaEna_Cnt_T_logl == FALSE))
				{
					*HaptcSt_Cnt_T_u08 = HAPTCSTINACTVNOTPLS_CNT_U08;
				}
				else if(HaptcStTranActvToWaitFlg_Cnt_T_logl != FALSE)	
				{
					*HaptcSt_Cnt_T_u08 = HAPTCSTWAIT_CNT_U08;	
				}
				else
				{							
				}		
			}
			break;
			
			case(HAPTCSTWAIT_CNT_U08):
			{			
				if((VehStandStillTiExcdd_Cnt_T_logl == FALSE) ||
				   (ShiftLvrRvsTiExcdd_Cnt_T_logl == FALSE)   ||
				   (ApaEna_Cnt_T_logl == FALSE))
				{
					*HaptcSt_Cnt_T_u08 = HAPTCSTINACTVNOTPLS_CNT_U08;
				}
				else if(TranHaptcWaitToApaStActvFlg_Cnt_T_logl != FALSE)	
				{
					*ApaSt_Cnt_T_u08 = APASTACTV_CNT_U08;	
					*HaptcSt_Cnt_T_u08 = HAPTCSTINACTVNOTPLS_CNT_U08;
				}
				else
				{
				}
									 
			}
			break;
			
			default:
			break;
			
		}
	}
    
	*Rte_Pim_PrevHaptcSt() = *HaptcSt_Cnt_T_u08; 
}			
/*******************************************************************************
* Name          :   LkaStTran
* Description   :   Implementation of all LKA state transitions 
* Inputs        :   LkaMfgEna_Cnt_T_logl,LkaPrmntFlt_Cnt_T_logl,LoaSt_Cnt_T_enum,                    
*                   LkaFlt_Cnt_T_logl,LkaInhb_Cnt_T_logl,EscSt_Cnt_T_u08,
*					LkaEna_Cnt_T_logl,VehSpdSecurMin_Kph_T_f32,VehSpdSecurMax_Kph_T_f32,    
*                   MfgOvrlDi_Cnt_T_logl, SysSt_Cnt_T_enum, *LkaSt_Cnt_T_u08
* Outputs       :   None
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) LkaStTran(boolean LkaMfgEna_Cnt_T_logl,
											  boolean LkaPrmntFlt_Cnt_T_logl,
											  LoaSt1 LoaSt_Cnt_T_enum,
											  boolean LkaFlt_Cnt_T_logl,
											  boolean LkaInhb_Cnt_T_logl,
											  uint8 EscSt_Cnt_T_u08,
											  boolean LkaEna_Cnt_T_logl,
											  float32 VehSpdSecurMin_Kph_T_f32,
											  float32 VehSpdSecurMax_Kph_T_f32,
                                              boolean LKAIntv_Cnt_T_logl,
											  boolean MfgOvrlDi_Cnt_T_logl,
                                              SysSt1 SysSt_Cnt_T_enum,
											  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) LkaSt_Cnt_T_u08)
{
	if(LkaMfgEna_Cnt_T_logl == FALSE)
	{
		*LkaSt_Cnt_T_u08 = LKASTMFGDI_CNT_U08;
	}
	else
	{
		*LkaSt_Cnt_T_u08 = *Rte_Pim_PrevLkaSt();   
		
		if((MfgOvrlDi_Cnt_T_logl == TRUE) || (LkaPrmntFlt_Cnt_T_logl == TRUE) || (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN))
		{
			*LkaSt_Cnt_T_u08 = LKASTPRMNTFAILD_CNT_U08;
		}

		switch (*LkaSt_Cnt_T_u08)
		{
			case (LKASTINACTV_CNT_U08):
			{
				if((SysSt_Cnt_T_enum == SYSST_DI) || 
                   ((LkaEna_Cnt_T_logl == TRUE) &&
				    ((LkaFlt_Cnt_T_logl == TRUE)  ||
				    (LkaInhb_Cnt_T_logl == TRUE) ||
					(EscSt_Cnt_T_u08 == ESCSTACTV_CNT_U08) ||
					(EscSt_Cnt_T_u08 == ESCSTTMPLIMD_CNT_U08))))
				{
					*LkaSt_Cnt_T_u08 = LKASTTMPLIMD_CNT_U08;
				}
				else if((LkaEna_Cnt_T_logl == TRUE) &&
                        (VehSpdSecurMin_Kph_T_f32 > Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val()) &&
                        (VehSpdSecurMax_Kph_T_f32 < Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val()))
				{	
					*LkaSt_Cnt_T_u08 = LKASTACTV_CNT_U08;
				}
				else
				{
				}				
			}			
			break;
			
			case (LKASTACTV_CNT_U08):
			{
				if((VehSpdSecurMin_Kph_T_f32 < Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val()) ||
				   (VehSpdSecurMax_Kph_T_f32 > Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val()) ||
				   (LkaEna_Cnt_T_logl == FALSE))
				{	
					*LkaSt_Cnt_T_u08 = LKASTINACTV_CNT_U08;
				}
				else if((SysSt_Cnt_T_enum == SYSST_DI) ||
                        (LkaFlt_Cnt_T_logl == TRUE)  ||
				        (LkaInhb_Cnt_T_logl == TRUE) ||
					    (EscSt_Cnt_T_u08 == ESCSTACTV_CNT_U08) ||
						(EscSt_Cnt_T_u08 == ESCSTTMPLIMD_CNT_U08) ||
                        (LKAIntv_Cnt_T_logl == TRUE))
				{
					*LkaSt_Cnt_T_u08 = LKASTTMPLIMD_CNT_U08;
				}
				else
				{
				}
			}
			break;
			
			case (LKASTTMPLIMD_CNT_U08):
			{
				if((LkaEna_Cnt_T_logl == FALSE) && (SysSt_Cnt_T_enum == SYSST_ENA))
				{	
					*LkaSt_Cnt_T_u08 = LKASTINACTV_CNT_U08;
				}
				else
				{					
				}
			}
			break;
			
			default:
			break;
		}
	}
	
	*Rte_Pim_PrevLkaSt() = *LkaSt_Cnt_T_u08;
}
/*******************************************************************************
* Name          :   EscStTran
* Description   :   Implementation of all ESC state transitions 
* Inputs        :   EscMfgEna_Cnt_T_logl,EscFlt_Cnt_T_logl,LoaSt_Cnt_T_enum,                    
*                   VehSpdSecurMax_Kph_T_f32,EscEna_Cnt_T_logl,EscLimdActv_Cnt_T_logl, 
*                   MfgOvrlDi_Cnt_T_logl, SysSt_Cnt_T_enum, *EscSt_Cnt_T_u08
* Outputs       :   None
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) EscStTran(boolean EscMfgEna_Cnt_T_logl,
											  boolean EscFlt_Cnt_T_logl,
											  LoaSt1 LoaSt_Cnt_T_enum,
											  float32 VehSpdSecurMax_Kph_T_f32,
											  boolean EscEna_Cnt_T_logl,
											  boolean EscLimdActv_Cnt_T_logl,
											  boolean MfgOvrlDi_Cnt_T_logl,
                                              SysSt1 SysSt_Cnt_T_enum,
											  P2VAR(uint8, AUTOMATIC, GmOvrlStMgr_VAR) EscSt_Cnt_T_u08)
{												  								  
	if(EscMfgEna_Cnt_T_logl == FALSE)
	{
		*EscSt_Cnt_T_u08 = ESCSTMFGDI_CNT_U08;
	}
	else
	{
		*EscSt_Cnt_T_u08 = *Rte_Pim_PrevEscSt();   
		
		switch (*EscSt_Cnt_T_u08)
		{
			case (ESCSTINACTV_CNT_U08):
			{
				if((MfgOvrlDi_Cnt_T_logl == TRUE) ||(EscFlt_Cnt_T_logl == TRUE) || (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN))
				{
					*EscSt_Cnt_T_u08 = ESCSTPRMNTFAILD_CNT_U08;
				}
				else if((VehSpdSecurMax_Kph_T_f32 <= Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val()) &&
					    (EscEna_Cnt_T_logl == TRUE))
				{
					*EscSt_Cnt_T_u08 = ESCSTACTV_CNT_U08;
				}
				else
				{					
				}
				
			}
			break;
			
			case (ESCSTACTV_CNT_U08):
			{
				if((MfgOvrlDi_Cnt_T_logl == TRUE) ||(EscFlt_Cnt_T_logl == TRUE) || (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN))
				{
					*EscSt_Cnt_T_u08 = ESCSTPRMNTFAILD_CNT_U08;
				}
				else if((VehSpdSecurMax_Kph_T_f32 > Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val()) ||
					    (EscEna_Cnt_T_logl == FALSE))
				{
					*EscSt_Cnt_T_u08 = ESCSTINACTV_CNT_U08;
				}
				else if((SysSt_Cnt_T_enum == SYSST_DI) || (EscLimdActv_Cnt_T_logl == TRUE))
				{
					*EscSt_Cnt_T_u08 = ESCSTTMPLIMD_CNT_U08;
				}
				else
				{
				}
			}
			break;
			
			case (ESCSTTMPLIMD_CNT_U08):
			{
                if((MfgOvrlDi_Cnt_T_logl == TRUE) ||(EscFlt_Cnt_T_logl == TRUE) ||  (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN))
				{
					*EscSt_Cnt_T_u08 = ESCSTPRMNTFAILD_CNT_U08;
				}
				else if((EscEna_Cnt_T_logl == FALSE) && (SysSt_Cnt_T_enum == SYSST_ENA))
				{
					*EscSt_Cnt_T_u08 = ESCSTINACTV_CNT_U08;
				}
				else if((EscLimdActv_Cnt_T_logl == FALSE) && (SysSt_Cnt_T_enum == SYSST_ENA))
				{
					*EscSt_Cnt_T_u08 = ESCSTACTV_CNT_U08;
				}
				else
				{
				}
			}
			break;
			
			case (ESCSTPRMNTFAILD_CNT_U08):
			{
				if((MfgOvrlDi_Cnt_T_logl == FALSE) &&
				   (EscEna_Cnt_T_logl == FALSE) &&
				   (EscFlt_Cnt_T_logl == FALSE) &&
				   (LoaSt_Cnt_T_enum == LOASTNORM_CNT_U08))
				{
					*EscSt_Cnt_T_u08 = ESCSTINACTV_CNT_U08;
				}
			}
			break;
			
			default:
			break;
			
		}
	}
	
	*Rte_Pim_PrevEscSt() = *EscSt_Cnt_T_u08;
}
/*******************************************************************************
* Name          :   HwAgServo
* Description   :   "HwAgServo" block implementation.                 
* Inputs        :   HwAgTrajEna_Cnt_T_logl, ApaSt_Cnt_T_u08                   
*                   HwAgTraj_HwDeg_T_f32,HwAgTarLimd_HwDeg_T_f32,*HwAgServoCmd_HwDeg_T_f32    
* Outputs       :   HwAgServoEna_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) HwAgServo(boolean HwAgTrajEna_Cnt_T_logl,
									             uint8 ApaSt_Cnt_T_u08,
											     float32 HwAgTraj_HwDeg_T_f32,
											     float32 HwAgTarLimd_HwDeg_T_f32,
											     P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwAgServoCmd_HwDeg_T_f32)
{
	VAR(boolean, AUTOMATIC) HwAgServoEna_Cnt_T_logl;
	
	if(HwAgTrajEna_Cnt_T_logl == TRUE)
	{
		if(ApaSt_Cnt_T_u08 == APASTACTV_CNT_U08)
		{
			HwAgServoEna_Cnt_T_logl = FALSE;
			*HwAgServoCmd_HwDeg_T_f32 = 0.0F;
		}
		else
		{
			HwAgServoEna_Cnt_T_logl = TRUE;
			*HwAgServoCmd_HwDeg_T_f32 = HwAgTraj_HwDeg_T_f32;
		}
	}
	else
	{
		if(ApaSt_Cnt_T_u08 == APASTACTV_CNT_U08)
		{
			HwAgServoEna_Cnt_T_logl = TRUE;
			*HwAgServoCmd_HwDeg_T_f32 = HwAgTarLimd_HwDeg_T_f32;	
		}
		else
		{
			HwAgServoEna_Cnt_T_logl = FALSE;
			*HwAgServoCmd_HwDeg_T_f32 = 0.0F;
		}
	}
	
	return HwAgServoEna_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   InctIgnCntrOnce
* Description   :   "Inct Ign Cntr Once" block implementation.                 
* Inputs        :   IgnCntrLcl_Cnt_T_u16    
* Outputs       :   
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) InctIgnCntrOnce(uint16 IgnCntrLcl_Cnt_T_u16)
{
    if(*Rte_Pim_IgnCntrUpd() == FALSE)
    {
        *Rte_Pim_GmLoaIgnCntr() = IgnCntrLcl_Cnt_T_u16 + 1U;
        (void)Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(TRUE);
        *Rte_Pim_IgnCntrUpd() = TRUE;
    }
}
/*******************************************************************************
* Name          :   HwTqFildChk
* Description   :   "HwTqFildIntlChk" block implementation.                 
* Inputs        :   HwTq_HwNwtMtr_T_f32    
* Outputs       :   HwTqFildWithinIntl_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) HwTqFildChk(float32 HwTq_HwNwtMtr_T_f32)
{
    VAR(boolean, AUTOMATIC) HwTqFildWithinIntl_Cnt_T_logl;
    VAR(float32, AUTOMATIC) AbsltFildHwTq_HwNwtMtr_T_f32;
    
    AbsltFildHwTq_HwNwtMtr_T_f32 = Abslt_f32_f32(FilLpUpdOutp_f32(HwTq_HwNwtMtr_T_f32, Rte_Pim_HwTqOscnLpFil()));
    
    if((AbsltFildHwTq_HwNwtMtr_T_f32 >= Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val()) &&
       (AbsltFildHwTq_HwNwtMtr_T_f32 <= Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val()))
    {
        HwTqFildWithinIntl_Cnt_T_logl = TRUE;
    }
    else
    {
        HwTqFildWithinIntl_Cnt_T_logl = FALSE;
    }
    
    return HwTqFildWithinIntl_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   LkaPrmntFlt
* Description   :   "Inct LkaFltCntr By One" block implementation + immediately
*                   proceeding logic                 
* Inputs        :   LkaFlt_Cnt_T_logl    
* Outputs       :   LkaPrmntFlt_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) LkaPrmntFlt(boolean LkaFlt_Cnt_T_logl)
{
    VAR(boolean, AUTOMATIC) LkaPrmntFlt_Cnt_T_logl = FALSE;
    
    if((LkaFlt_Cnt_T_logl == TRUE) && (*Rte_Pim_LkaFltPrev() == FALSE))
    {
	   if(*Rte_Pim_LkaFltCntr() < LKAFLTCNTRTHD_CNT_U08)
       {
           *Rte_Pim_LkaFltCntr() += 1U;
       }       
       else
       {
           *Rte_Pim_LkaFltCntr() = LKAFLTCNTRTHD_CNT_U08;
       }
    }
    
    if(*Rte_Pim_LkaFltCntr() >= LKASTPRMNTFAILD_CNT_U08)
    {
        LkaPrmntFlt_Cnt_T_logl = TRUE;
    }
    
    *Rte_Pim_LkaFltPrev() = LkaFlt_Cnt_T_logl;
    
    return LkaPrmntFlt_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   LKAIntv
* Description   :   "LKAIntv" block implementation.                 
* Inputs        :   HwTq_HwNwtMtr_T_f32, LkaTqCmdCdnd_HwNwtMtr_T_f32
* Outputs       :   LKAIntv_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) LKAIntv(float32 HwTq_HwNwtMtr_T_f32, float32 LkaTqCmdCdnd_HwNwtMtr_T_f32)
{
    VAR(float32, AUTOMATIC) AbsltFildHwTq_HwNwtMtr_T_f32;
    VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32;
    VAR(boolean, AUTOMATIC) LKAIntv_Cnt_T_logl;
    
    AbsltFildHwTq_HwNwtMtr_T_f32 = Abslt_f32_f32(FilLpUpdOutp_f32(HwTq_HwNwtMtr_T_f32, Rte_Pim_HwTqLkaLpFil()));
    
    if(Sign_s08_f32(HwTq_HwNwtMtr_T_f32) == Sign_s08_f32(LkaTqCmdCdnd_HwNwtMtr_T_f32))
    {
        LKAIntv_Cnt_T_logl = FALSE;
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi1());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi2());
    }
    else
    {
        if((AbsltFildHwTq_HwNwtMtr_T_f32 >= Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val()) &&
           (AbsltFildHwTq_HwNwtMtr_T_f32 < Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val()))
        {
           (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LkaIntvRefTi1(), &Span_Cnt_T_u32);
           
           if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
           {
               LKAIntv_Cnt_T_logl = TRUE;
           }
           else
           {
               LKAIntv_Cnt_T_logl = *Rte_Pim_LkaIntvPrev();
           }
           
           (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi2());
        }
        else if(AbsltFildHwTq_HwNwtMtr_T_f32 >= Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val())
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LkaIntvRefTi2(), &Span_Cnt_T_u32);
           
            if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
            {
               LKAIntv_Cnt_T_logl = TRUE;
            }
            else
            {
               LKAIntv_Cnt_T_logl = *Rte_Pim_LkaIntvPrev();
            }

            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi1());
        }
        else
        {
            LKAIntv_Cnt_T_logl = FALSE;
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi1());
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LkaIntvRefTi2());
        }
    }
    
    *Rte_Pim_LkaIntvPrev() = LKAIntv_Cnt_T_logl;
    
    return LKAIntv_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   HaptcStTranActvToWaitFlg
* Description   :   "HaptcStTranActvToWaitFlg" block implementation.                 
* Inputs        :       
* Outputs       :   HaptcStTranActvToWaitFlg_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) HaptcStTranActvToWaitFlg(void)
{
    VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32;
    VAR(boolean, AUTOMATIC) HaptcStTranActvToWaitFlg_Cnt_T_logl = FALSE;
    
    if((*Rte_Pim_PrevHaptcSt() == HAPTCSTACTV_CNT_U08) && (*Rte_Pim_PrevApaSt() == APASTCTRLAVL_CNT_U08))
    {
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_HaptcStTranActvToWaitRefTi(), &Span_Cnt_T_u32);
        
        if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrHaptcDurn_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
        {
            HaptcStTranActvToWaitFlg_Cnt_T_logl = TRUE;
        }
    }
    else
    {
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HaptcStTranActvToWaitRefTi());
    }
    
    return HaptcStTranActvToWaitFlg_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   TranHaptcWaitToApaStActvFlg
* Description   :   "TranHaptcWaitToApaStActvFlg" block implementation.                 
* Inputs        :       
* Outputs       :   TranHaptcWaitToApaStActvFlg_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) TranHaptcWaitToApaStActvFlg(void)
{
    VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32;
    VAR(boolean, AUTOMATIC) TranHaptcWaitToApaStActvFlg_Cnt_T_logl = FALSE;
    
    if((*Rte_Pim_PrevHaptcSt() == HAPTCSTWAIT_CNT_U08) && (*Rte_Pim_PrevApaSt() == APASTCTRLAVL_CNT_U08))
    {
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_TranHaptcWaitToApaStActvRefTi(), &Span_Cnt_T_u32);
        
        if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
        {
            TranHaptcWaitToApaStActvFlg_Cnt_T_logl = TRUE;
        }
    }
    else
    {
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TranHaptcWaitToApaStActvRefTi());
    }
    
    return TranHaptcWaitToApaStActvFlg_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   EnHaptcFb
* Description   :   "EnHaptcFb" block implementation.                 
* Inputs        :       
* Outputs       :   HwOscnEna_Cnt_T_logl, HwOscnMotAmp_MotNwtMtr_T_f32, HwOscnFrq_Hz_T_f32
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) EnHaptcFb(P2VAR(boolean, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnEna_Cnt_T_logl,
                                                 P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnMotAmp_MotNwtMtr_T_f32,
                                                 P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnFrq_Hz_T_f32)
{
    VAR(uint32, AUTOMATIC) Span_Cnt_T_u32;
    
    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi(), &Span_Cnt_T_u32);
    
    if(Span_Cnt_T_u32 >= (Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val() * MILLISECTO100MICROSECCNVN_CNT_U32))
    {
        *Rte_Pim_LoaStChk() = TRUE;
    }
    
    *HwOscnEna_Cnt_T_logl = TRUE;
    *HwOscnMotAmp_MotNwtMtr_T_f32 = Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val();
    *HwOscnFrq_Hz_T_f32 = Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val();
}
/*******************************************************************************
* Name          :   HaptcFbPostStrtUp
* Description   :   "En Or Di HaptcFb After Checking At Start Up" block implementation.                 
* Inputs        :   ApaSt_Cnt_T_u08, HaptcSt_Cnt_T_u08, HwTqFildWithinIntl_Cnt_T_logl,
*                   VehSpd_Kph_T_f32, IgnCntrLcl_Cnt_T_u16, LoaStLimdOrSwBasdMtgtn_Cnt_T_logl
* Outputs       :   HwOscnEna_Cnt_T_logl, HwOscnMotAmp_MotNwtMtr_T_f32, HwOscnFrq_Hz_T_f32
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMOVRLSTMGR_CODE) HaptcFbPostStrtUp(uint8 ApaSt_Cnt_T_u08, 
                                                      uint8 HaptcSt_Cnt_T_u08, 
                                                      boolean HwTqFildWithinIntl_Cnt_T_logl, 
                                                      float32 VehSpd_Kph_T_f32,
                                                      uint16 IgnCntrLcl_Cnt_T_u16,
                                                      boolean LoaStLimdOrSwBasdMtgtn_Cnt_T_logl,
                                                      P2VAR(boolean, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnEna_Cnt_T_logl, 
                                                      P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnMotAmp_MotNwtMtr_T_f32,
                                                      P2VAR(float32, AUTOMATIC, GmOvrlStMgr_VAR) HwOscnFrq_Hz_T_f32)
{
    VAR(boolean, AUTOMATIC) VehSpdWithinIntl_Cnt_T_logl = FALSE;
    VAR(uint32, AUTOMATIC) Span_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u10p6;
    VAR(uint16, AUTOMATIC) TqOscnAmp_MotNwtMtr_T_u2p14;
    VAR(uint32, AUTOMATIC) LoaMtgtnHaptcFbOnTi_Cnt_T_u32 = Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val() * MILLISECTO100MICROSECCNVN_CNT_U32;
    VAR(uint32, AUTOMATIC) LoaMtgtnHaptcFbOffTi_Cnt_T_u32 = Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val() * MILLISECTO100MICROSECCNVN_CNT_U32;
    
    if((ApaSt_Cnt_T_u08 == APASTCTRLAVL_CNT_U08) && (HaptcSt_Cnt_T_u08 == HAPTCSTACTV_CNT_U08))
    {
        /* APASt Avl and HaptcSt Actv */
        *HwOscnEna_Cnt_T_logl = TRUE;
        *HwOscnMotAmp_MotNwtMtr_T_f32 = Rte_Prm_GmOvrlStMgrHaptcAmp_Val();
        *HwOscnFrq_Hz_T_f32 = Rte_Prm_GmOvrlStMgrHaptcFrq_Val();
    }
    else if(ApaSt_Cnt_T_u08 != APASTCTRLAVL_CNT_U08)
    {
        /* APASt Not Avl */
        if((VehSpd_Kph_T_f32 >= Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val()) && 
           (VehSpd_Kph_T_f32 <= Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val()))
        {
            VehSpdWithinIntl_Cnt_T_logl = TRUE;
        }
        
        if((IgnCntrLcl_Cnt_T_u16 < Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val()) &&
           (HwTqFildWithinIntl_Cnt_T_logl != FALSE) && (VehSpdWithinIntl_Cnt_T_logl != FALSE) &&
           (LoaStLimdOrSwBasdMtgtn_Cnt_T_logl != FALSE))
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_TqOscCycRefTi(), &Span_Cnt_T_u32);
            
            if((LoaMtgtnHaptcFbOnTi_Cnt_T_u32 + LoaMtgtnHaptcFbOffTi_Cnt_T_u32) <= Span_Cnt_T_u32)
            {
                (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TqOscCycRefTi());
            }
            
            if(Span_Cnt_T_u32 >= LoaMtgtnHaptcFbOnTi_Cnt_T_u32)
            {
                *HwOscnEna_Cnt_T_logl = FALSE;
            }
            else
            {
                *HwOscnEna_Cnt_T_logl = TRUE;
            }
        }
        else
        {
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TqOscCycRefTi());
            *HwOscnEna_Cnt_T_logl = FALSE;
        }
        
        if(*HwOscnEna_Cnt_T_logl != FALSE)
        {
            VehSpd_Kph_T_u10p6 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP6_ULS_F32);
            TqOscnAmp_MotNwtMtr_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmGmOvrlStMgrLoaMtgtnVehSpdX_u10p6,
                                                                         PrmGmOvrlStMgrLoaMtgtnTqOscnAmpY_u2p14,
                                                                         (uint16)TblSize_m(PrmGmOvrlStMgrLoaMtgtnVehSpdX_u10p6),
                                                                         VehSpd_Kph_T_u10p6);
            *HwOscnMotAmp_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(TqOscnAmp_MotNwtMtr_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
            *HwOscnFrq_Hz_T_f32 = Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val();
        }
        else
        {
            *HwOscnMotAmp_MotNwtMtr_T_f32 = 0.0F;
            *HwOscnFrq_Hz_T_f32 = HWOSCNFRQMIN_HZ_F32;
        }
    }
    else
    {
        *HwOscnEna_Cnt_T_logl = FALSE;
        *HwOscnMotAmp_MotNwtMtr_T_f32 = 0.0F;
        *HwOscnFrq_Hz_T_f32 = HWOSCNFRQMIN_HZ_F32;
    }
}

/*******************************************************************************
* Name          :   ApaNrcvrlFlt
* Description   :   Determine ApaNrcvrlFlt status                 
* Inputs        :   Msg337BusChassisExpInvld_Cnt_T_logl, Msg337BusChassisExpMiss_Cnt_T_logl
* Outputs       :   ApaNrcvrlFlt_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) ApaNrcvrlFlt(boolean Msg337BusChassisExpInvld_Cnt_T_logl, 
                                                    boolean Msg337BusChassisExpMiss_Cnt_T_logl)
{
    VAR(boolean, AUTOMATIC) ApaNrcvrlFlt_Cnt_T_logl = FALSE;
    
    if((Msg337BusChassisExpInvld_Cnt_T_logl == TRUE) || (Msg337BusChassisExpMiss_Cnt_T_logl == TRUE))
	{
		ApaNrcvrlFlt_Cnt_T_logl = TRUE;
	}
	
    return ApaNrcvrlFlt_Cnt_T_logl;
}

/*******************************************************************************
* Name          :   EscFlt
* Description   :   Determine EscFlt status                 
* Inputs        :   Msg180BusChassisExpInvld_Cnt_T_logl, Msg180BusChassisExpMiss_Cnt_T_logl
* Outputs       :   EscFlt_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMOVRLSTMGR_CODE) EscFlt(boolean Msg180BusChassisExpInvld_Cnt_T_logl, 
                                              boolean Msg180BusChassisExpMiss_Cnt_T_logl)
{
    VAR(boolean, AUTOMATIC) EscFlt_Cnt_T_logl = FALSE;
    
    if((Msg180BusChassisExpInvld_Cnt_T_logl == TRUE) || (Msg180BusChassisExpMiss_Cnt_T_logl == TRUE))
	{
		EscFlt_Cnt_T_logl = TRUE;
	}
	
    return EscFlt_Cnt_T_logl;
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
