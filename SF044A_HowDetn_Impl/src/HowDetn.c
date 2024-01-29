/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HowDetn.c
 *     SW-C Type:  HowDetn
 *  Generated at:  Wed Nov 30 22:38:43 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HowDetn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HowDetn.c
* Module Description: Implementation of Hands On Wheel Detection FDD SF044A
* Project           : CBD 
* Author            : Basavaraja Ganeshappa
***********************************************************************************************************************
* Version Control:
* %version          : 4 %
* %derived_by       : nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                         SCR #
* -------   -------  --------  ----------------------------------------------------------------------------------------
* 01/26/16  1        BG             Initial Version                                                           EA4#2980    
* 02/15/16  2        BG             Minor non functional corrections                                          EA4#2980   
* 08/25/16  3        NS             Updated for FDD v1.2.0                                                    EA4#6965
* 11/30/16  4        TATA           Updated for FDD v2.0.0                                                    EA4#7984                                                   
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
  s7p8
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

#include "Rte_HowDetn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrFil.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "NxtrMath.h"
#include "ArchGlbPrm.h"


/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type 
								for code readability and to allow use of "sizeof". */
								
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for 
							[Rte_Read, Rte_Write]*/

#define ABSLTHIFRQTQHILIM_HWNWTMTR_F32 255.0F
#define ABSLTHIFRQTQLOLIM_HWNWTMTR_F32 0.0F
#define HOWDETNESTIMNLIM_ULS_F32 0.5F
#define HOWDETNESTIMNTHD_ULS_F32 0.5F
#define HOWDETNESTIMNLOLIM_ULS_F32 0.0F
#define HOWDETNESTIMNHILIM_ULS_F32 1.0F
#define HOWDETNSTLOLIM_CNT_S08 (-3)
#define HOWDETNSTHILIM_CNT_S08 3
#define HUNDREDMICROSECTOMILLISEC_ULS_F32 0.1F
#define MILLISECTOSEC_ULS_F32 0.001F

#define PrmHowDetnHiFrqRateX_u8p8  (*(const Ary2D_u8p8_9_6 *) Rte_Prm_HowDetnHiFrqRateX_Ary2D())
#define PrmHowDetnHiFrqRateY_s7p8  (*(const Ary2D_s7p8_9_6 *) Rte_Prm_HowDetnHiFrqRateY_Ary2D())
#define PrmHowDetnLoFrqRateX_u8p8  (*(const Ary2D_u8p8_9_5 *) Rte_Prm_HowDetnLoFrqRateX_Ary2D())
#define PrmHowDetnLoFrqRateY_s7p8 (*(const Ary2D_s7p8_9_5 *) Rte_Prm_HowDetnLoFrqRateY_Ary2D())
#define PrmHowDetnStThdX_u8p8  (*(const Ary1D_u8p8_7 *) Rte_Prm_HowDetnStThdX_Ary1D())
#define PrmHowDetnVehSpd_u9p7  (*(const Ary1D_u9p7_9 *) Rte_Prm_HowDetnVehSpd_Ary1D())
#define PrmHowDetnHiFrqGainY_u9p7 (*(const Ary1D_u9p7_9 *) Rte_Prm_HowDetnHiFrqGainY_Ary1D())

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
 * s7p8: Integer in interval [-32768...32767]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_s7p8_5: Array with 5 element(s) of type s7p8
 * Ary1D_s7p8_6: Array with 6 element(s) of type s7p8
 * Ary1D_u8p8_5: Array with 5 element(s) of type u8p8
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u8p8_7: Array with 7 element(s) of type u8p8
 * Ary1D_u9p7_9: Array with 9 element(s) of type u9p7
 * Ary2D_s7p8_9_5: Array with 9 element(s) of type Ary1D_s7p8_5
 * Ary2D_s7p8_9_6: Array with 9 element(s) of type Ary1D_s7p8_6
 * Ary2D_u8p8_9_5: Array with 9 element(s) of type Ary1D_u8p8_5
 * Ary2D_u8p8_9_6: Array with 9 element(s) of type Ary1D_u8p8_6
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevCalcdHowEstim(void)
 *   float32 *Rte_Pim_PrevHowEstim(void)
 *   float32 *Rte_Pim_dHowDetnAbsHiFrqTq(void)
 *   float32 *Rte_Pim_dHowDetnAbsLoFrqTq(void)
 *   uint32 *Rte_Pim_RefTiHowOff(void)
 *   boolean *Rte_Pim_HowOffPrev(void)
 *   FilLpRec1 *Rte_Pim_EstimLpFil(void)
 *   FilLpRec1 *Rte_Pim_FinalLpFil(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil1(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil2(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil3(void)
 *   FilLpRec1 *Rte_Pim_StLpFil(void)
 *   FilHpRec1 *Rte_Pim_TqHpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HowDetnEstimLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnMinVehSpd_Val(void)
 *   float32 Rte_Prm_HowDetnOffThd_Val(void)
 *   float32 Rte_Prm_HowDetnOffTi_Val(void)
 *   float32 Rte_Prm_HowDetnPercOfPrevHowEstim_Val(void)
 *   float32 Rte_Prm_HowDetnSlewRate_Val(void)
 *   float32 Rte_Prm_HowDetnStLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqFinalLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqHpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqInitLpFilFrq_Val(void)
 *   u9p7 *Rte_Prm_HowDetnHiFrqGainY_Ary1D(void)
 *   u8p8 *Rte_Prm_HowDetnHiFrqRateX_Ary2D(void)
 *   s7p8 *Rte_Prm_HowDetnHiFrqRateY_Ary2D(void)
 *   u8p8 *Rte_Prm_HowDetnLoFrqRateX_Ary2D(void)
 *   s7p8 *Rte_Prm_HowDetnLoFrqRateY_Ary2D(void)
 *   u8p8 *Rte_Prm_HowDetnStThdX_Ary1D(void)
 *   u9p7 *Rte_Prm_HowDetnVehSpd_Ary1D(void)
 *
 *********************************************************************************************************************/


#define HowDetn_START_SEC_CODE
#include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HowDetnInit1
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
 *   Std_ReturnType Rte_Write_HowDetnEstimn_Val(float32 data)
 *   Std_ReturnType Rte_Write_HowDetnFlg_Logl(boolean data)
 *
 *********************************************************************************************************************/

FUNC(void, HowDetn_CODE) HowDetnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HowDetnInit1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) HowDetnEstimn_Uls_T_f32;
    VAR(boolean, AUTOMATIC) HowDetnFlg_Cnt_T_logl;
	
	FilLpInit(0.0F, Rte_Prm_HowDetnTqInitLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_IniLpFil1());
	FilLpInit(0.0F, Rte_Prm_HowDetnTqInitLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_IniLpFil2());
	FilLpInit(0.0F, Rte_Prm_HowDetnTqInitLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_IniLpFil3());
  
	FilLpInit(0.0F, Rte_Prm_HowDetnTqFinalLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_FinalLpFil());
	FilLpInit(0.0F, Rte_Prm_HowDetnEstimLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_EstimLpFil());
	FilLpInit(0.0F, Rte_Prm_HowDetnStLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_StLpFil());
  
	FilHpInit(0.0F, Rte_Prm_HowDetnTqHpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_TqHpFil());
	
	*Rte_Pim_HowOffPrev() = TRUE;
	*Rte_Pim_RefTiHowOff() = 0U;
	HowDetnEstimn_Uls_T_f32 = HOWDETNESTIMNTHD_ULS_F32;
	HowDetnFlg_Cnt_T_logl = TRUE;
	
	(void)Rte_Write_HowDetnEstimn_Val(HowDetnEstimn_Uls_T_f32);
    (void)Rte_Write_HowDetnFlg_Logl(HowDetnFlg_Cnt_T_logl);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HowDetnPer1
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
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HowDetnEstimn_Val(float32 data)
 *   Std_ReturnType Rte_Write_HowDetnFlg_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HowDetnSt_Val(sint8 data)
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

FUNC(void, HowDetn_CODE) HowDetnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HowDetnPer1
 *********************************************************************************************************************/

    CONST(sint16, AUTOMATIC) HOWSTY_CNT_S15P0[] = {-3, -2, -1, 0, 1, 2, 3};
	
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(uint16, AUTOMATIC)  VehSpd_Kph_T_u9p7;	
	VAR(float32, AUTOMATIC) FilLpUpdOutp1_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) FilLpUpdOutp2_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) FilLpUpdOutp3_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AbsLoFreqTq_HwNwtMtr_T_f32;	
	VAR(float32, AUTOMATIC) FilHpUpdOutp_HwNwtMtr_T_f32;	
	VAR(uint16,  AUTOMATIC) IntrpltdVehSpd_Uls_T_u9p7;
	VAR(float32, AUTOMATIC) IntrpltdVehSpd_Uls_T_f32;	
	VAR(float32, AUTOMATIC) AbsHiFreqTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AbsHwTqVehSpd_HwNwtMtr_T_f32;	
	VAR(float32, AUTOMATIC) AbsHiFrqTqLim_HwNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC)  AbsHiFrqTqLim_HwNwtMtr_T_u8p8; 
	VAR(sint16, AUTOMATIC)  HiFrqRateY_UlsPerSec_T_s7p8;
    VAR(float32, AUTOMATIC) HiFrqRateY_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) FrqRateY_Uls_T_f32;	
	VAR(uint16, AUTOMATIC)  AbsLoFreqTq_HwNwtMtr_T_u8p8;
	VAR(float32, AUTOMATIC) CalcPrevHowEstim_Uls_T_f32;
	VAR(float32, AUTOMATIC) LmtPrevHowEstimLoHiFreqRate_Uls_T_f32;
	VAR(float32, AUTOMATIC) HowDetnEstimn_Uls_T_f32;
	VAR(float32, AUTOMATIC) HowEstimFil_Uls_T_f32;
	VAR(uint16, AUTOMATIC)  HowEstimFil_Uls_T_u8p8;
	VAR(sint16, AUTOMATIC)  HowEstimFil_Uls_T_s15p0;
	VAR(sint8, AUTOMATIC)   HowEstimFil_Cnt_T_s08;
	VAR(sint16, AUTOMATIC)  LoFrqRateY_UlsPerSec_T_s7p8;
	VAR(float32, AUTOMATIC) LoFrqRateY_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) ElapsedTime_Cnt_T_f32;
	VAR(uint32,  AUTOMATIC) TiSpan_Cnt_T_u32;
	VAR(boolean, AUTOMATIC) HowDetnFlg_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) HwTqTh_Cnt_T_logl;
	
	/* Read Input Signals through Rte Read */
	(void)Rte_Read_HowDetn_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	(void)Rte_Read_HowDetn_VehSpd_Val(&VehSpd_Kph_T_f32);
		
		
	/* Implementation of subsystem "Filter HwTq"  */	
	FilLpUpdOutp1_HwNwtMtr_T_f32  = FilLpUpdOutp_f32(HwTq_HwNwtMtr_T_f32, Rte_Pim_IniLpFil1());
	FilLpUpdOutp2_HwNwtMtr_T_f32  = FilLpUpdOutp_f32(FilLpUpdOutp1_HwNwtMtr_T_f32, Rte_Pim_IniLpFil2());
	FilLpUpdOutp3_HwNwtMtr_T_f32  = FilLpUpdOutp_f32(FilLpUpdOutp2_HwNwtMtr_T_f32, Rte_Pim_IniLpFil3());
	
		
	AbsLoFreqTq_HwNwtMtr_T_f32 = Abslt_f32_f32(FilLpUpdOutp3_HwNwtMtr_T_f32);
	*Rte_Pim_dHowDetnAbsLoFrqTq() =  AbsLoFreqTq_HwNwtMtr_T_f32;	
	
	FilHpUpdOutp_HwNwtMtr_T_f32 = FilHpUpdOutp_f32(FilLpUpdOutp3_HwNwtMtr_T_f32, Rte_Pim_TqHpFil());
		
	VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP7_ULS_F32);
	
	IntrpltdVehSpd_Uls_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(Rte_Prm_HowDetnVehSpd_Ary1D(), 
															   Rte_Prm_HowDetnHiFrqGainY_Ary1D(),
															   (uint16)TblSize_m(PrmHowDetnVehSpd_u9p7), 
															   VehSpd_Kph_T_u9p7);
	
	IntrpltdVehSpd_Uls_T_f32 = FixdToFloat_f32_u16(IntrpltdVehSpd_Uls_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);	
		
	AbsHwTqVehSpd_HwNwtMtr_T_f32 = Abslt_f32_f32(FilHpUpdOutp_HwNwtMtr_T_f32 * IntrpltdVehSpd_Uls_T_f32);
	
	AbsHiFreqTq_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(AbsHwTqVehSpd_HwNwtMtr_T_f32, Rte_Pim_FinalLpFil());
	*Rte_Pim_dHowDetnAbsHiFrqTq() = AbsHiFreqTq_HwNwtMtr_T_f32;
	
    /* Implementation of subsystem "Calculate HOW Estimate"  */	
		
	AbsHiFrqTqLim_HwNwtMtr_T_f32 = Lim_f32(AbsHiFreqTq_HwNwtMtr_T_f32, 
											ABSLTHIFRQTQLOLIM_HWNWTMTR_F32, 
											ABSLTHIFRQTQHILIM_HWNWTMTR_F32);
																					
	AbsHiFrqTqLim_HwNwtMtr_T_u8p8 = FloatToFixd_u16_f32(AbsHiFrqTqLim_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
		
		
	HiFrqRateY_UlsPerSec_T_s7p8 = BilnrIntrpnWithRound_s16_u16MplXs16MplY(VehSpd_Kph_T_u9p7, 
																	AbsHiFrqTqLim_HwNwtMtr_T_u8p8,
																	Rte_Prm_HowDetnVehSpd_Ary1D(), 
																	(uint16)TblSize_m(PrmHowDetnVehSpd_u9p7),
																	Rte_Prm_HowDetnHiFrqRateX_Ary2D(),
																	Rte_Prm_HowDetnHiFrqRateY_Ary2D(),
																	(uint16)TblSize_m(PrmHowDetnHiFrqRateX_u8p8[0]));
																				
	HiFrqRateY_UlsPerSec_T_f32 = FixdToFloat_f32_s16(HiFrqRateY_UlsPerSec_T_s7p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);																				
																				   

	AbsLoFreqTq_HwNwtMtr_T_u8p8 = FloatToFixd_u16_f32(AbsLoFreqTq_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
		
		
	LoFrqRateY_UlsPerSec_T_s7p8 = BilnrIntrpnWithRound_s16_u16MplXs16MplY(VehSpd_Kph_T_u9p7, 
																	AbsLoFreqTq_HwNwtMtr_T_u8p8,
																	Rte_Prm_HowDetnVehSpd_Ary1D(), 
																	(uint16)TblSize_m(PrmHowDetnVehSpd_u9p7),
																	Rte_Prm_HowDetnLoFrqRateX_Ary2D(),
																	Rte_Prm_HowDetnLoFrqRateY_Ary2D(),
																	(uint16)TblSize_m(PrmHowDetnLoFrqRateX_u8p8[0]));
		
	LoFrqRateY_UlsPerSec_T_f32 = FixdToFloat_f32_s16(LoFrqRateY_UlsPerSec_T_s7p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
		
	FrqRateY_Uls_T_f32 = (LoFrqRateY_UlsPerSec_T_f32 + HiFrqRateY_UlsPerSec_T_f32) * ARCHGLBPRM_2MILLISEC_SEC_F32;
		
	CalcPrevHowEstim_Uls_T_f32 = (*Rte_Pim_PrevHowEstim() * Rte_Prm_HowDetnPercOfPrevHowEstim_Val());
																				
	LmtPrevHowEstimLoHiFreqRate_Uls_T_f32 = Lim_f32((CalcPrevHowEstim_Uls_T_f32 + FrqRateY_Uls_T_f32), 
											           ((-Rte_Prm_HowDetnSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)
													   + *Rte_Pim_PrevCalcdHowEstim()), 
											           (( Rte_Prm_HowDetnSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)
													   + *Rte_Pim_PrevCalcdHowEstim()));	
	
	*Rte_Pim_PrevCalcdHowEstim() = LmtPrevHowEstimLoHiFreqRate_Uls_T_f32;										
		
	*Rte_Pim_PrevHowEstim() = Lim_f32(LmtPrevHowEstimLoHiFreqRate_Uls_T_f32,
									  -HOWDETNESTIMNLIM_ULS_F32,
									  HOWDETNESTIMNLIM_ULS_F32);
		
	HowDetnEstimn_Uls_T_f32 = (FilLpUpdOutp_f32(*Rte_Pim_PrevHowEstim(), Rte_Pim_EstimLpFil()) + HOWDETNESTIMNTHD_ULS_F32);	
	
	
	if(VehSpd_Kph_T_f32 <= Rte_Prm_HowDetnMinVehSpd_Val())
	{
		HowDetnEstimn_Uls_T_f32 = HOWDETNESTIMNTHD_ULS_F32;
	}	
    /* Implementation of "Determine HOW Flag" subsystem */
	
	if(HowDetnEstimn_Uls_T_f32 < Rte_Prm_HowDetnOffThd_Val())
	{
	    HwTqTh_Cnt_T_logl = TRUE;
	}
	else
	{
	    HwTqTh_Cnt_T_logl = FALSE;
	}
	
	if(FALSE == HwTqTh_Cnt_T_logl)
    {
		ElapsedTime_Cnt_T_f32 = 0.0F;
	}
	else if(FALSE == *Rte_Pim_HowOffPrev())
	{
	    ElapsedTime_Cnt_T_f32 = 0.0F;
	    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RefTiHowOff());
		
	}
	else
	{
	    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_RefTiHowOff(),&TiSpan_Cnt_T_u32);
	     ElapsedTime_Cnt_T_f32 =(FixdToFloat_f32_u32(TiSpan_Cnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32))* HUNDREDMICROSECTOMILLISEC_ULS_F32;
	}
	*Rte_Pim_HowOffPrev() = HwTqTh_Cnt_T_logl;
	
	if((ElapsedTime_Cnt_T_f32 * MILLISECTOSEC_ULS_F32) > Rte_Prm_HowDetnOffTi_Val() )
	{
	    HowDetnFlg_Cnt_T_logl = FALSE;
	}
	else
	{
	    HowDetnFlg_Cnt_T_logl = TRUE;
	}

    /* Implementation of "Determination of HOW State" subsystem */	

	HowEstimFil_Uls_T_f32 = FilLpUpdOutp_f32(HowDetnEstimn_Uls_T_f32, Rte_Pim_StLpFil());
	HowEstimFil_Uls_T_u8p8 = FloatToFixd_u16_f32(HowEstimFil_Uls_T_f32,NXTRFIXDPT_FLOATTOP8_ULS_F32);
	
    /* HOW State Look up Table */
	HowEstimFil_Uls_T_s15p0 = LnrIntrpn_s16_u16VariXs16VariY(Rte_Prm_HowDetnStThdX_Ary1D(), 
														   HOWSTY_CNT_S15P0, 
														   (uint16)TblSize_m(PrmHowDetnStThdX_u8p8),
														   HowEstimFil_Uls_T_u8p8);		
	
	HowEstimFil_Cnt_T_s08 = (sint8)(HowEstimFil_Uls_T_s15p0);	

	
	if(VehSpd_Kph_T_f32 <= Rte_Prm_HowDetnMinVehSpd_Val())
	{
		HowEstimFil_Cnt_T_s08 = 0;
	}
			
	HowEstimFil_Cnt_T_s08 = Lim_s08(HowEstimFil_Cnt_T_s08, HOWDETNSTLOLIM_CNT_S08, HOWDETNSTHILIM_CNT_S08);	
	HowDetnEstimn_Uls_T_f32 = Lim_f32(HowDetnEstimn_Uls_T_f32, HOWDETNESTIMNLOLIM_ULS_F32, HOWDETNESTIMNHILIM_ULS_F32);
	
	(void)Rte_Write_HowDetnSt_Val(HowEstimFil_Cnt_T_s08);
	(void)Rte_Write_HowDetnEstimn_Val(HowDetnEstimn_Uls_T_f32);
	(void)Rte_Write_HowDetnFlg_Logl(HowDetnFlg_Cnt_T_logl);
		
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HowDetn_STOP_SEC_CODE
#include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
