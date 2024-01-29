/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgTrakgServo.c
 *     SW-C Type:  HwAgTrakgServo
 *  Generated at:  Wed Aug 17 16:26:34 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgTrakgServo>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwAgTrakgServo.c
* Module Description: Implementation of Hand Wheel Angle Tracking Servo algorithm (FDD SF020A)
* Project           : CBD 
* Author            : Kannappa Chidambaram & Krishna Anne(Tata Elxsi)
************************************************************************************************************************
* Version Control:
* %version          : 5 %
* %derived_by       : nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date        Rev      Author  		Change Description              	                                      SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  -----------
* 01/19/16     1     KNCD & KK     	Initial Version                                     		             EA4#2726
* 04/21/16     2     KK     		Added condition found during UTP (Fix for EA4#5435)                      EA4#5461
* 08/12/16     3     KK     		Fix for anomaly EA4#6788 (FDD v1.3.0 & v1.4.0)							 EA4#6845
* 09/12/16     4     KK     		Fix for anomaly EA4#7359 (FDD v1.5.0)									 EA4#7463
* 09/14/16     5     KK     		Fix for not updating Rte_Pim_HwAgTarRateLim								 EA4#7601
***********************************************************************************************************************/

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
  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u10p6
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u11p5
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u12p4
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

  u2p14
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u4p12
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

#include "Rte_HwAgTrakgServo.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "NxtrFil.h"
#include "SysGlbPrm.h"  
#include "ArchGlbPrm.h"
  
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their 
array type for code readability and to allow use of "sizeof". */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include 
statements */

#define DFTLTERMMAX_MOTNWTMTR_F32 				(255.0F)
#define DFTLTERMMIN_MOTNWTMTR_F32 				(-255.0F)

#define PrmHwAgTrakgServoDampgTqX				(*(const Ary1D_u11p5_13 *)		Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D())
#define PrmHwAgTrakgServoDampgTqY     			(*(const Ary2D_u4p12_3_13 *)    Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D())
#define PrmHwAgTrakgServoDftlGainY				(*(const Ary1D_u0p16_3 *)		Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D())
#define PrmHwAgTrakgServoDiRateX				(*(const Ary1D_u4p12_6 *)		Rte_Prm_HwAgTrakgServoDiRateX_Ary1D())
#define PrmHwAgTrakgServoDiRateY				(*(const Ary1D_u7p9_6 *)		Rte_Prm_HwAgTrakgServoDiRateY_Ary1D())
#define PrmHwAgTrakgServoHwAgRateLim			(*(const Ary1D_u10p6_3 *)		Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D())
#define PrmHwAgTrakgServoIntglGainY				(*(const Ary1D_u2p14_3 *)		Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D())
#define PrmHwAgTrakgServoIntglTermAntiWdupLimY 	(*(const Ary1D_u10p6_3 *) 		Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D())
#define PrmHwAgTrakgServoMaxCmdX				(*(const Ary1D_u8p8_4 *)		Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D())
#define PrmHwAgTrakgServoMaxCmdY				(*(const Ary1D_u4p12_4 *)		Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D())
#define PrmHwAgTrakgServoPropGainX				(*(const Ary1D_u12p4_7 *)		Rte_Prm_HwAgTrakgServoPropGainX_Ary1D())
#define PrmHwAgTrakgServoPropGainY    			(*(const Ary2D_u10p6_3_7 *)     Rte_Prm_HwAgTrakgServoPropGainY_Ary2D())
#define PrmHwAgTrakgServoSmotngX				(*(const Ary1D_u1p15_10 *)		Rte_Prm_HwAgTrakgServoSmotngX_Ary1D())
#define PrmHwAgTrakgServoSmotngY				(*(const Ary1D_u1p15_10 *)		Rte_Prm_HwAgTrakgServoSmotngY_Ary1D())
#define PrmHwAgTrakgServoVehSpdBasd				(*(const Ary1D_u9p7_3 *)		Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D())

static FUNC(float32, AUTOMATIC)  FilterDesiredAngle(uint16 VehSpd_Kph_T_u9p7, 
													boolean HwAgTrakgServoEna_Uls_T_logl,
													float32 HwAgTrakgServoCmd_HwDeg_T_f32,
													float32 HwAg_HwDeg_T_f32,
													boolean RampComplete_Cnt_T_logl);

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
 * u0p16: Integer in interval [0...65535]
 * u10p6: Integer in interval [0...65535]
 * u11p5: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_3: Array with 3 element(s) of type u0p16
 * Ary1D_u10p6_3: Array with 3 element(s) of type u10p6
 * Ary1D_u10p6_7: Array with 7 element(s) of type u10p6
 * Ary1D_u11p5_13: Array with 13 element(s) of type u11p5
 * Ary1D_u12p4_7: Array with 7 element(s) of type u12p4
 * Ary1D_u1p15_10: Array with 10 element(s) of type u1p15
 * Ary1D_u2p14_3: Array with 3 element(s) of type u2p14
 * Ary1D_u4p12_13: Array with 13 element(s) of type u4p12
 * Ary1D_u4p12_4: Array with 4 element(s) of type u4p12
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u7p9_6: Array with 6 element(s) of type u7p9
 * Ary1D_u8p8_4: Array with 4 element(s) of type u8p8
 * Ary1D_u9p7_3: Array with 3 element(s) of type u9p7
 * Ary2D_u10p6_3_7: Array with 3 element(s) of type Ary1D_u10p6_7
 * Ary2D_u4p12_3_13: Array with 3 element(s) of type Ary1D_u4p12_13
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgTarRateLim(void)
 *   float32 *Rte_Pim_PrevDftlErr(void)
 *   float32 *Rte_Pim_PrevHwAgTar(void)
 *   float32 *Rte_Pim_PrevIntglErr(void)
 *   float32 *Rte_Pim_PrevSmotng(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoDftlTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoHwAgTarFild(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoIntglTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoPidCmd(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoPropTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoRtnScaFac(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoSmotngEna(void)
 *   boolean *Rte_Pim_dHwAgTrakgServoRampCmpl(void)
 *   FilLpRec1 *Rte_Pim_DftlTermLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoEnaRate_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoExecRate_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoMaxRamp_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoMinRamp_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoPidLim_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoRampCmpl_Val(void)
 *   u11p5 *Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(void)
 *   u4p12 *Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(void)
 *   u0p16 *Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D(void)
 *   u4p12 *Rte_Prm_HwAgTrakgServoDiRateX_Ary1D(void)
 *   u7p9 *Rte_Prm_HwAgTrakgServoDiRateY_Ary1D(void)
 *   u10p6 *Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D(void)
 *   u2p14 *Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D(void)
 *   u10p6 *Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(void)
 *   u8p8 *Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D(void)
 *   u4p12 *Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D(void)
 *   u12p4 *Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(void)
 *   u10p6 *Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(void)
 *   u1p15 *Rte_Prm_HwAgTrakgServoSmotngX_Ary1D(void)
 *   u1p15 *Rte_Prm_HwAgTrakgServoSmotngY_Ary1D(void)
 *   u9p7 *Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D(void)
 *
 *********************************************************************************************************************/


#define HwAgTrakgServo_START_SEC_CODE
#include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrakgServoInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrakgServoInit1
 *********************************************************************************************************************/
	/*** Initialization of Low pass filters ***/
	FilLpInit(0.0F, Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqLpFil());
	FilLpInit(0.0F, Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwAgLpFil());
	FilLpInit(0.0F, Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_DftlTermLpFil());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrakgServoPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrakgServoCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrakgServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqServoCmd_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrakgServoPer1
 *********************************************************************************************************************/
	
	VAR(boolean, AUTOMATIC)	HwAgTrakgServoEna_Uls_T_logl;
	VAR(boolean, AUTOMATIC)	RampComplete_Cnt_T_logl;
	VAR(boolean, AUTOMATIC)	Reset_Cnt_T_logl;
	
	VAR(uint16, AUTOMATIC)	AbsltHwTqFild_HwNwtMtr_T_u4p12;
	VAR(uint16, AUTOMATIC)	AbsltHwTqFild_HwNwtMtr_T_u7p9;
	VAR(uint16, AUTOMATIC)	LimStatSmotngEna_Uls_T_u1p15;
	VAR(uint16, AUTOMATIC)	IntplSmotngEna_Uls_T_u1p15;
	VAR(uint16, AUTOMATIC)	VehSpd_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC)	KdHwAg_MotNwtMtrPerHwDegPerSec_T_u0p16;
	VAR(uint16, AUTOMATIC)	KiAWHwAg_MotNwtMtr_T_u10p6;
	VAR(uint16, AUTOMATIC)	KiHwAg_MotNwtMtrPerHwDegSec_T_u2p14;
	VAR(uint16, AUTOMATIC)	AbsltErrHwAg_HwDeg_T_u12p4;
	VAR(uint16, AUTOMATIC)	MaxMotTqServoCmd_MtrNwtMtr_u4p12;
	VAR(uint16, AUTOMATIC)	AbsltMotVelCrf_MotRadPerSec_T_u11p5;
	VAR(uint16, AUTOMATIC)	DampgTq_MotNwtMtr_T_u4p12;
	VAR(uint16, AUTOMATIC)	PCompHwAg_MotNwtMtr_T_u10p6;
	
	VAR(float32, AUTOMATIC)	HwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	HwAgTrakgServoCmd_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	MotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC)	VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC)	MotTqServoCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	SmotngEna_Uls_T_f32;
	VAR(float32, AUTOMATIC)	SmotngEnaFild_Uls_T_f32;
	VAR(float32, AUTOMATIC)	HwTqFild_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	AbsltHwTqFild_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	LimStatSmotngEna_Uls_T_f32;
	VAR(float32, AUTOMATIC)	SmoothEnable_Uls_T_f32;
	VAR(float32, AUTOMATIC)	ReturnScale_Uls_T_f32;
	VAR(float32, AUTOMATIC)	PCompHwAg_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	ICompHwAg_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	DCompHwAg_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	PIDCompHwAg_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	AbsltMotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC)	MaxMotTqServoCmd_MtrNwtMtr_f32;
	VAR(float32, AUTOMATIC)	HWATrgtFilt_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	DCompUnFltHwAg_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	DCompUnLimHwAg_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	ErrHwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	KdHwAg_MotNwtMtrPerHwDegPerSec_T_f32;
	VAR(float32, AUTOMATIC)	ICompErrPrv_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	AWLimit_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	KiAWHwAg_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	KiHwAg_MotNwtMtrPerHwDegSec_T_f32;
	VAR(float32, AUTOMATIC)	AbsltErrHwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	DampgTq_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	PIDCompLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	PrevDftlErr_HwDeg_T_f32;
	
	
	/*** Read RTE Inputs ***/
	(void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
	(void)Rte_Read_HwAgTrakgServoCmd_Val(&HwAgTrakgServoCmd_HwDeg_T_f32);
	(void)Rte_Read_HwAgTrakgServoEna_Logl(&HwAgTrakgServoEna_Uls_T_logl);
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	(void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
	 
	 /*** Start of Transition_Control ***/
	if(TRUE == HwAgTrakgServoEna_Uls_T_logl)
	{
		/*** Enable_Mech ***/
		SmotngEna_Uls_T_f32 = (ARCHGLBPRM_2MILLISEC_SEC_F32 * Rte_Prm_HwAgTrakgServoEnaRate_Val()) + *Rte_Pim_PrevSmotng();
	}
	 
	else
	{
		/*** Disabling_Mech ***/
		AbsltHwTqFild_HwNwtMtr_T_f32 	= Abslt_f32_f32(FilLpUpdOutp_f32(HwTq_HwNwtMtr_T_f32, Rte_Pim_HwTqLpFil()));
		AbsltHwTqFild_HwNwtMtr_T_u4p12 	= FloatToFixd_u16_f32(AbsltHwTqFild_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP12_ULS_F32);
		AbsltHwTqFild_HwNwtMtr_T_u7p9 	= LnrIntrpn_u16_u16VariXu16VariY(PrmHwAgTrakgServoDiRateX,
																		 PrmHwAgTrakgServoDiRateY,
																		 (uint16)TblSize_m(PrmHwAgTrakgServoDiRateX),
																		 AbsltHwTqFild_HwNwtMtr_T_u4p12);
		HwTqFild_HwNwtMtr_T_f32 		= FixdToFloat_f32_u16(AbsltHwTqFild_HwNwtMtr_T_u7p9, NXTRFIXDPT_P9TOFLOAT_ULS_F32);
		SmotngEnaFild_Uls_T_f32			= ARCHGLBPRM_2MILLISEC_SEC_F32 * HwTqFild_HwNwtMtr_T_f32;
		SmotngEna_Uls_T_f32 			= *Rte_Pim_PrevSmotng() - SmotngEnaFild_Uls_T_f32;
	}
	/* REQ: SF20A #70 I */
	LimStatSmotngEna_Uls_T_f32 			= Lim_f32(SmotngEna_Uls_T_f32, Rte_Prm_HwAgTrakgServoMinRamp_Val(), Rte_Prm_HwAgTrakgServoMaxRamp_Val() );
	*Rte_Pim_PrevSmotng()				= LimStatSmotngEna_Uls_T_f32;
	LimStatSmotngEna_Uls_T_u1p15 		= FloatToFixd_u16_f32(LimStatSmotngEna_Uls_T_f32, NXTRFIXDPT_FLOATTOP15_ULS_F32);
	IntplSmotngEna_Uls_T_u1p15			= LnrIntrpn_u16_u16VariXu16VariY(PrmHwAgTrakgServoSmotngX,
																		 PrmHwAgTrakgServoSmotngY,
																		 (uint16)TblSize_m(PrmHwAgTrakgServoSmotngX),
																		 LimStatSmotngEna_Uls_T_u1p15); 
	/* REQ: SF20A #69 I */
	SmoothEnable_Uls_T_f32				= FixdToFloat_f32_u16(IntplSmotngEna_Uls_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);
	/* ENDREQ: SF20A #70 */
	
	/* REQ: SF20A #94 I */ /* REQ: SF20A #95 I */ /* REQ: SF20A #96 I */
	if(SmoothEnable_Uls_T_f32 >= Rte_Prm_HwAgTrakgServoRampCmpl_Val() )
	{
		RampComplete_Cnt_T_logl 		= TRUE;
	}
	else
	{
		RampComplete_Cnt_T_logl 		= FALSE;
	}
	
	ReturnScale_Uls_T_f32				= Rte_Prm_HwAgTrakgServoMaxRamp_Val()	- SmoothEnable_Uls_T_f32;
	/*** End of Transition_Control ***/

	 
	/*** Start of FilterDesiredAngle ***/
	VehSpd_Kph_T_u9p7 					= FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	
	
	HWATrgtFilt_HwDeg_T_f32 			= FilterDesiredAngle(VehSpd_Kph_T_u9p7, 
															 HwAgTrakgServoEna_Uls_T_logl,
															 HwAgTrakgServoCmd_HwDeg_T_f32,
															 HwAg_HwDeg_T_f32,
															 RampComplete_Cnt_T_logl);
	/*** End of FilterDesiredAngle ***/ 
	 
	 
	 /*** Start of PID_Control ***/
	 /* REQ: SF20A #103 I */ /* REQ: SF20A #104 I */
	if ( (HwAgTrakgServoEna_Uls_T_logl == FALSE) && (RampComplete_Cnt_T_logl == TRUE) )
	{
		Reset_Cnt_T_logl 		= TRUE;
		ErrHwAg_HwDeg_T_f32		= 0.0F;
	}
	else
	{
		Reset_Cnt_T_logl 		= FALSE;
		/* REQ: SF20A #102 I */
		ErrHwAg_HwDeg_T_f32		= HWATrgtFilt_HwDeg_T_f32 - HwAg_HwDeg_T_f32;
	}
	/* ENDREQ: SF20A #103 */ /* ENDREQ: SF20A #104 */
		/*** Start of PID ***/
	
	/*** Start of P-Term ***/
	/* REQ: SF20A #112 I */
	AbsltErrHwAg_HwDeg_T_f32 	= Abslt_f32_f32(ErrHwAg_HwDeg_T_f32); 
	AbsltErrHwAg_HwDeg_T_u12p4	= FloatToFixd_u16_f32(AbsltErrHwAg_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
	PCompHwAg_MotNwtMtr_T_u10p6	= BilnrIntrpnWithRound_u16_u16CmnXu16MplY(VehSpd_Kph_T_u9p7,
																		  AbsltErrHwAg_HwDeg_T_u12p4,
																		  PrmHwAgTrakgServoVehSpdBasd,
																		  (uint16)TblSize_m(PrmHwAgTrakgServoVehSpdBasd),
																		  Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(),
																		  Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(),
																		  (uint16)TblSize_m(PrmHwAgTrakgServoPropGainX));
	PCompHwAg_MotNwtMtr_T_f32	= (float32)Sign_s08_f32(ErrHwAg_HwDeg_T_f32) * FixdToFloat_f32_u16(PCompHwAg_MotNwtMtr_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32);
	/* ENDREQ: SF20A #112 */
	/*** End of P-Term ***/
	
	/*** Start of I-Term ***/
	/* REQ: SF20A #117 I */
	KiHwAg_MotNwtMtrPerHwDegSec_T_u2p14	= LnrIntrpn_u16_u16VariXu16VariY(PrmHwAgTrakgServoVehSpdBasd,
																		 PrmHwAgTrakgServoIntglGainY,
																		 (uint16)TblSize_m(PrmHwAgTrakgServoVehSpdBasd),
																		 VehSpd_Kph_T_u9p7);
	KiHwAg_MotNwtMtrPerHwDegSec_T_f32	= FixdToFloat_f32_u16(KiHwAg_MotNwtMtrPerHwDegSec_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	
	KiAWHwAg_MotNwtMtr_T_u10p6			= LnrIntrpn_u16_u16VariXu16VariY(PrmHwAgTrakgServoVehSpdBasd,
																 PrmHwAgTrakgServoIntglTermAntiWdupLimY,
																 (uint16)TblSize_m(PrmHwAgTrakgServoVehSpdBasd),
																 VehSpd_Kph_T_u9p7);
	KiAWHwAg_MotNwtMtr_T_f32			= FixdToFloat_f32_u16(KiAWHwAg_MotNwtMtr_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32);
		/*** I-Anti Windup (state) ***/
	if(KiHwAg_MotNwtMtrPerHwDegSec_T_u2p14 == 0U)					/* Comparision carried out before u2p14 is converted to f32 as against to design because the design is comparing f32 to 0.0 */
	{
		AWLimit_HwDeg_T_f32 = 0.0F;
	}
	else
	{
		AWLimit_HwDeg_T_f32 = (Rte_Prm_HwAgTrakgServoExecRate_Val() * KiAWHwAg_MotNwtMtr_T_f32)/ KiHwAg_MotNwtMtrPerHwDegSec_T_f32;
	}
	ICompErrPrv_HwDeg_T_f32		= Lim_f32( (ErrHwAg_HwDeg_T_f32 + *Rte_Pim_PrevIntglErr()), -AWLimit_HwDeg_T_f32, AWLimit_HwDeg_T_f32 );
	ICompHwAg_MotNwtMtr_T_f32	= ARCHGLBPRM_2MILLISEC_SEC_F32 * KiHwAg_MotNwtMtrPerHwDegSec_T_f32 * ICompErrPrv_HwDeg_T_f32;
	if(Reset_Cnt_T_logl == TRUE)
	{
		*Rte_Pim_PrevIntglErr() = 0.0F;
	}
	else
	{
		*Rte_Pim_PrevIntglErr() = ICompErrPrv_HwDeg_T_f32;
	}
	/* ENDREQ: SF20A #117 */
	/*** End of I-Term ***/
	
	/*** Start of D-Term ***/
	/* REQ: SF20A #121 I */
	KdHwAg_MotNwtMtrPerHwDegPerSec_T_u0p16	= LnrIntrpn_u16_u16VariXu16VariY(PrmHwAgTrakgServoVehSpdBasd,
																			 PrmHwAgTrakgServoDftlGainY,
																			 (uint16)TblSize_m(PrmHwAgTrakgServoVehSpdBasd),
																			 VehSpd_Kph_T_u9p7);
	KdHwAg_MotNwtMtrPerHwDegPerSec_T_f32	= FixdToFloat_f32_u16(KdHwAg_MotNwtMtrPerHwDegPerSec_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);
	if(Reset_Cnt_T_logl == TRUE) 
	{
		PrevDftlErr_HwDeg_T_f32 = 0.0F;
	}
	else
	{
		PrevDftlErr_HwDeg_T_f32 = *Rte_Pim_PrevDftlErr();
	}
	DCompUnLimHwAg_MotNwtMtr_T_f32			= (KdHwAg_MotNwtMtrPerHwDegPerSec_T_f32 * (ErrHwAg_HwDeg_T_f32 - PrevDftlErr_HwDeg_T_f32)) / 
											  (ARCHGLBPRM_2MILLISEC_SEC_F32);
	*Rte_Pim_PrevDftlErr()					= ErrHwAg_HwDeg_T_f32;
	DCompUnFltHwAg_MotNwtMtr_T_f32			= Lim_f32(DCompUnLimHwAg_MotNwtMtr_T_f32, DFTLTERMMIN_MOTNWTMTR_F32, DFTLTERMMAX_MOTNWTMTR_F32);
	DCompHwAg_MotNwtMtr_T_f32				= FilLpUpdOutp_f32(DCompUnFltHwAg_MotNwtMtr_T_f32, Rte_Pim_DftlTermLpFil());
	/* ENDREQ: SF20A #121 */
	/*** End of D-Term ***/
		
	/* REQ: SF20A #123 I */
	PIDCompHwAg_MotNwtMtr_T_f32			= PCompHwAg_MotNwtMtr_T_f32 + ICompHwAg_MotNwtMtr_T_f32 + DCompHwAg_MotNwtMtr_T_f32;
	if(TRUE == Reset_Cnt_T_logl)
	{
		PIDCompLim_MotNwtMtr_T_f32 = 0.0F;
	}
	else
	{
		/* REQ: SF20A #124 I */ /* REQ: SF20A #125 I */
		PIDCompLim_MotNwtMtr_T_f32 = Lim_f32(PIDCompHwAg_MotNwtMtr_T_f32, -Rte_Prm_HwAgTrakgServoPidLim_Val(), Rte_Prm_HwAgTrakgServoPidLim_Val() );
	}
	
	/*** Update of Display variables ***/
	*Rte_Pim_dHwAgTrakgServoPropTerm()	= PCompHwAg_MotNwtMtr_T_f32;
	*Rte_Pim_dHwAgTrakgServoIntglTerm()	= ICompHwAg_MotNwtMtr_T_f32;
	*Rte_Pim_dHwAgTrakgServoDftlTerm()	= DCompHwAg_MotNwtMtr_T_f32;
	/*** End of PID ***/
	/*** Update of Display variables ***/
	*Rte_Pim_dHwAgTrakgServoRtnScaFac()		= ReturnScale_Uls_T_f32;
	*Rte_Pim_dHwAgTrakgServoSmotngEna()		= SmoothEnable_Uls_T_f32;
	*Rte_Pim_dHwAgTrakgServoHwAgTarFild()	= HWATrgtFilt_HwDeg_T_f32;
	*Rte_Pim_dHwAgTrakgServoPidCmd()		= PIDCompLim_MotNwtMtr_T_f32;
	*Rte_Pim_dHwAgTrakgServoRampCmpl()		= RampComplete_Cnt_T_logl;
	/*** End of PID_Control ***/
	 	
	/*** Start of Output_Torque  ***/
	/* REQ: SF20A #127 I */ /* REQ: SF20A #128 I */
	AbsltMotVelCrf_MotRadPerSec_T_f32		= Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32);
	AbsltMotVelCrf_MotRadPerSec_T_u11p5		= FloatToFixd_u16_f32(AbsltMotVelCrf_MotRadPerSec_T_f32, NXTRFIXDPT_FLOATTOP5_ULS_F32);
	DampgTq_MotNwtMtr_T_u4p12				= BilnrIntrpnWithRound_u16_u16CmnXu16MplY(VehSpd_Kph_T_u9p7,
																					  AbsltMotVelCrf_MotRadPerSec_T_u11p5,
																					  PrmHwAgTrakgServoVehSpdBasd,
																					  (uint16)TblSize_m(PrmHwAgTrakgServoVehSpdBasd),
																					  Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(),
																					  Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(),
																					  (uint16)TblSize_m(PrmHwAgTrakgServoDampgTqX));
	DampgTq_MotNwtMtr_T_f32					= ((float32)Sign_s08_f32(MotVelCrf_MotRadPerSec_T_f32)) * FixdToFloat_f32_u16(DampgTq_MotNwtMtr_T_u4p12, NXTRFIXDPT_P12TOFLOAT_ULS_F32);
																				  
	MaxMotTqServoCmd_MtrNwtMtr_u4p12		= LnrIntrpn_u16_u16VariXu16VariY(PrmHwAgTrakgServoMaxCmdX,
																			 PrmHwAgTrakgServoMaxCmdY,
																			 (uint16)TblSize_m(PrmHwAgTrakgServoMaxCmdX),
																			 VehSpd_Kph_T_u9p7);
	MaxMotTqServoCmd_MtrNwtMtr_f32			= FixdToFloat_f32_u16(MaxMotTqServoCmd_MtrNwtMtr_u4p12, NXTRFIXDPT_P12TOFLOAT_ULS_F32);
	
	MotTqServoCmd_MotNwtMtr_T_f32			= Lim_f32( (SmoothEnable_Uls_T_f32 * (PIDCompLim_MotNwtMtr_T_f32 - DampgTq_MotNwtMtr_T_f32)), -MaxMotTqServoCmd_MtrNwtMtr_f32, MaxMotTqServoCmd_MtrNwtMtr_f32);
	/* ENDREQ: SF20A #127 */ /* ENDREQ: SF20A #128 */
	/*** End of Output_Torque  ***/
	
	/*** Range Limit and Write RTE Outputs ***/
	(void)Rte_Write_MotTqServoCmd_Val(Lim_f32(MotTqServoCmd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32));

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgTrakgServo_STOP_SEC_CODE
#include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
* Name        :   FilterDesiredAngle
* Description :   Sub function that calculates Filter Desired Angle and reduce the cyclomatic complexity.
* Inputs      :   VehSpd_Kph_T_u9p7, HwAgTrakgServoEna_Uls_T_logl, HwAgTrakgServoCmd_HwDeg_T_f32,
			  :	  HwAg_HwDeg_T_f32, RampComplete_Cnt_T_logl.
* Outputs     :   HWATrgtFilt_HwDeg_T_f32, *Rte_Pim_PrevHwAgTar().
* Usage Notes :   None.
****************************************************************************************************************/
static FUNC(float32, AUTOMATIC)  FilterDesiredAngle(uint16 VehSpd_Kph_T_u9p7, 
													boolean HwAgTrakgServoEna_Uls_T_logl,
													float32 HwAgTrakgServoCmd_HwDeg_T_f32,
													float32 HwAg_HwDeg_T_f32,
													boolean RampComplete_Cnt_T_logl)
{
	VAR(float32, AUTOMATIC)	HwAgTarRateLim_HwDeg_T_f32;
	VAR(float32, AUTOMATIC)	HWATrgtFilt_HwDeg_T_f32;
	
	VAR(uint16, AUTOMATIC)	HwAgTarRateLim_HwDeg_T_u10p6;
	
	HwAgTarRateLim_HwDeg_T_u10p6		= LnrIntrpn_u16_u16VariXu16VariY(PrmHwAgTrakgServoVehSpdBasd,
																		 PrmHwAgTrakgServoHwAgRateLim,
																		 (uint16)TblSize_m(PrmHwAgTrakgServoVehSpdBasd),
																		 VehSpd_Kph_T_u9p7);
	HwAgTarRateLim_HwDeg_T_f32			= FixdToFloat_f32_u16(HwAgTarRateLim_HwDeg_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32);
																		 
	 /* REQ: SF20A #99 I */
	 if(HwAgTrakgServoEna_Uls_T_logl == TRUE)
	 {
		HwAgTarRateLim_HwDeg_T_f32 		= Lim_f32( HwAgTrakgServoCmd_HwDeg_T_f32, 
												  (*Rte_Pim_HwAgTarRateLim() + (-HwAgTarRateLim_HwDeg_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)),
												  (*Rte_Pim_HwAgTarRateLim() + ( HwAgTarRateLim_HwDeg_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)) );
	 }
	 else
	 {
		HwAgTarRateLim_HwDeg_T_f32 		= Lim_f32( HwAg_HwDeg_T_f32, 
												  (*Rte_Pim_HwAgTarRateLim() + (-HwAgTarRateLim_HwDeg_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)),
												  (*Rte_Pim_HwAgTarRateLim() + ( HwAgTarRateLim_HwDeg_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)) );
	 }
		*Rte_Pim_HwAgTarRateLim() 		= HwAgTarRateLim_HwDeg_T_f32;
	 	HWATrgtFilt_HwDeg_T_f32 		= FilLpUpdOutp_f32(HwAgTarRateLim_HwDeg_T_f32, Rte_Pim_HwAgLpFil());
		
	 /* ENDREQ: SF20A #99 */
	 
	 /* REQ: SF20A #99 I */
	 if( (HwAgTrakgServoEna_Uls_T_logl == FALSE) && (RampComplete_Cnt_T_logl == FALSE) )
	 {
		HWATrgtFilt_HwDeg_T_f32			= *Rte_Pim_PrevHwAgTar();
	 }
	 /* REQ: SF20A #100 I */
	 else if( (HwAgTrakgServoEna_Uls_T_logl == FALSE) && (RampComplete_Cnt_T_logl == TRUE) )
	 {
		HWATrgtFilt_HwDeg_T_f32			= HwAg_HwDeg_T_f32;
	 }
	 /* REQ: SF20A #101 I */
	 else
	 {
		/* HWATrgtFilt_HwDeg_T_f32 would be unaltered */
	 }
	*Rte_Pim_PrevHwAgTar()				= HWATrgtFilt_HwDeg_T_f32;
	
	/* REQ: SF20A #98 I */
	return(HWATrgtFilt_HwDeg_T_f32);
	
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
