/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmTqArbn.c
 *     SW-C Type:  GmTqArbn
 *  Generated at:  Fri Feb 10 12:38:28 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmTqArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GmTqArbn.c
* Module Description: Implementation of GM Torque Arbitration FDD CF010A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 6 %
* %derived_by       : mzjphh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 10/05/15  1        SV        Initial Version                                                                  EA4#1688    
* 02/01/16  2/3      NS        Fixed incorrect input names & PIM name per anomaly EA4#2143                      EA4#3692
* 04/05/16  4        NS        Updated for v2.0.0 of FDD                                                        EA4#5108     
* 06/14/16  5        NS        Updated for v2.1.0 of FDD                                                        EA4#5927      
* 08/22/16  6        NS        Updated for v2.2.0 of FDD                                                        EA4#6714/6888
* 02/08/17  7        JK        Updated for v3.1.0 of FDD                                                        EA4#9293
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
  GmTqArbnEscSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  GmTqArbnLkaSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  u1p15
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

#include "Rte_GmTqArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "ArchGlbPrm.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof" */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmGmTqArbnApaDiRateX		(*(const Ary1D_u4p12_6 *) Rte_Prm_GmTqArbnApaDiRateX_Ary1D())
#define PrmGmTqArbnApaDiRateY		(*(const Ary1D_u7p9_6 *) Rte_Prm_GmTqArbnApaDiRateY_Ary1D())
#define PrmGmTqArbnApaSmotngX		(*(const Ary1D_u1p15_10 *) Rte_Prm_GmTqArbnApaSmotngX_Ary1D())
#define PrmGmTqArbnApaSmotngY		(*(const Ary1D_u1p15_10 *) Rte_Prm_GmTqArbnApaSmotngY_Ary1D())
#define PrmGmTqArbnLkaSlewX			(*(const Ary1D_u8p8_6 *) Rte_Prm_GmTqArbnLkaSlewX_Ary1D())
#define PrmGmTqArbnLkaSlewY			(*(const Ary1D_u4p12_6 *) Rte_Prm_GmTqArbnLkaSlewY_Ary1D())
#define PrmGmTqArbnLkaOutpOvrlX		(*(const Ary2D_u4p12_12_20 *) Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D())
#define PrmGmTqArbnLkaOutpOvrlY		(*(const Ary2D_u4p12_12_20 *) Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D())
#define PrmSysGlbPrmVehSpdBilnrSeln			(*(const Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D())

#define POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32	(-0.2F)
#define LKACMDHILIM_HWNWTMTR_F32				3.0F	
#define VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32	(-0.058333F)	
#define FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32		3.0F
#define VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32	13.5F
#define LKASTACTV_CNT_U08						1U
#define MOTTQCMDOVRLLIM_MOTNWTMTR_F32			8.8F
#define HWTQCMDOVRLLIM_HWNWTMTR_F32				3.0F
#define LKATQCMDOVRLLIM_HWNWTMTR_F32			3.0F
#define ESCTQCMDOVRLLIM_HWNWTMTR_F32			3.0F
#define OUTPCMDHILIM_ULS_F32					1.0F
#define OUTPCMDLOWRLIM_ULS_F32					0.0F
#define LKAOUTPOVRLLIM_MOTNWTMTR_F32 0.0F

static FUNC(void, GMTQARBN_CODE) PosnServoSmotRamp(float32 PosSrvoCmd_HwNwtMtr_T_f32,
	                                               boolean PosSrvoSmoothEnable_Cnt_T_logl,
							                       float32 HwTq_HwNwtMtr_T_f32,
							                       P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) APAOvrlCmd_MotNwtMtr_T_f32,
												   P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) ScaleFactor_Uls_T_f32);
												   
static FUNC(float32, GMTQARBN_CODE) RampVal(float32 DesLKATqCmd_HwNwtMtr_T_f32,
	                                        float32 VehSpd_Kph_T_f32,
											P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) OutpTqOvrlCmd_MotNwtMtr_T_f32);

static FUNC(boolean, GMTQARBN_CODE) ESCLogic(float32 EscCmd_HwNwtMtr_T_f32,
	                                      GmTqArbnEscSt1 EscSt_Cnt_T_enum,
	                                      P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) ESCTqCmd_HwNwtMtr_T_f32,
	                                      P2VAR(boolean, AUTOMATIC, GMTQARBN_APPL_VAR) EscLimdActv_Cnt_T_logl);											
												   
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
 * u1p15: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Enumeration Types:
 * ==================
 * GmTqArbnEscSt1: Enumeration of integer in interval [0...255] with enumerators
 *   GMTQARBNESCST_INACTV (0U)
 *   GMTQARBNESCST_ACTV (1U)
 *   GMTQARBNESCST_TMPLIMD (2U)
 *   GMTQARBNESCST_PRMNTFAILD (3U)
 *   GMTQARBNESCST_MFGDI (4U)
 * GmTqArbnLkaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   GMTQARBNLKAST_INACTV (0U)
 *   GMTQARBNLKAST_ACTV (1U)
 *   GMTQARBNLKAST_TMPLIMD (2U)
 *   GMTQARBNLKAST_PRMNTFAILD (3U)
 *   GMTQARBNLKAST_MFGDI (4U)
 *
 * Array Types:
 * ============
 * Ary1D_u1p15_10: Array with 10 element(s) of type u1p15
 * Ary1D_u4p12_20: Array with 20 element(s) of type u4p12
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u7p9_6: Array with 6 element(s) of type u7p9
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_u4p12_12_20: Array with 12 element(s) of type Ary1D_u4p12_20
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_ActPosnServoCmd(void)
 *   float32 *Rte_Pim_DesLkaTqCmdRateLim(void)
 *   float32 *Rte_Pim_PosnServoSmotngEnaRateLim(void)
 *   float32 *Rte_Pim_dGmTqArbnDesLkaTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnEscTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnLkaOutpTqReq(void)
 *   float32 *Rte_Pim_dGmTqArbnLkaTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim(void)
 *   FilLpRec1 *Rte_Pim_APASmotngHwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmTqArbnApaEnaRate_Val(void)
 *   float32 Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_GmTqArbnEscMaxTq_Val(void)
 *   float32 Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val(void)
 *   boolean Rte_Prm_GmTqArbnApaAssiScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnApaDampgScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnApaRtnScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnLkaSlewEna_Logl(void)
 *   u4p12 *Rte_Prm_GmTqArbnApaDiRateX_Ary1D(void)
 *   u7p9 *Rte_Prm_GmTqArbnApaDiRateY_Ary1D(void)
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngX_Ary1D(void)
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngY_Ary1D(void)
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(void)
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(void)
 *   u8p8 *Rte_Prm_GmTqArbnLkaSlewX_Ary1D(void)
 *   u4p12 *Rte_Prm_GmTqArbnLkaSlewY_Ary1D(void)
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


#define GmTqArbn_START_SEC_CODE
#include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmTqArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, GmTqArbn_CODE) GmTqArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmTqArbnInit1
 *********************************************************************************************************************/
	
	FilLpInit(0.0F, Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(),
              ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_APASmotngHwTqLpFil());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmTqArbnPer1
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
 *   Std_ReturnType Rte_Read_EscCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EscSt_Val(GmTqArbnEscSt1 *data)
 *   Std_ReturnType Rte_Read_HwAgServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwOscnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOscCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaSt_Val(GmTqArbnLkaSt1 *data)
 *   Std_ReturnType Rte_Read_LkaTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqServoCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMaxSecur_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdBasSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_DampgCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_EscCmdArbd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EscLimdActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwTqOvrl_Val(float32 data)
 *   Std_ReturnType Rte_Write_LkaTqCmdCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdOvrl_Val(float32 data)
 *   Std_ReturnType Rte_Write_PullCmpCustLrngDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RtnCmdSca_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, GmTqArbn_CODE) GmTqArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmTqArbnPer1
 *********************************************************************************************************************/
	/* inputs */
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HwTqOscCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqServoCmd_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) HwOscnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) HwAgServoEna_Cnt_T_logl;
	VAR(float32, AUTOMATIC) EscCmd_HwNwtMtr_T_f32;
	VAR(GmTqArbnEscSt1, AUTOMATIC)   EscSt_Cnt_T_enum;
	VAR(float32, AUTOMATIC) LkaTqCmd_HwNwtMtr_T_f32;
	VAR(GmTqArbnLkaSt1, AUTOMATIC)   LkaSt_Cnt_T_enum;
	VAR(float32, AUTOMATIC) VehSpdMaxSecur_Kph_T_f32;
	
	/* outputs */
	VAR(float32, AUTOMATIC) AssiCmdBasSca_Uls_T_f32;
	VAR(float32, AUTOMATIC) DampgCmdSca_Uls_T_f32;
	VAR(boolean, AUTOMATIC) EscLimdActv_Cnt_T_logl;
	VAR(float32, AUTOMATIC) EscCmdArbd_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HwTqOvrl_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) LkaTqCmdCdnd_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqCmdOvrl_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) RtnCmdSca_Uls_T_f32;
	VAR(boolean, AUTOMATIC) PullCmpCustLrngDi_Cnt_T_logl;
	
	VAR(float32, AUTOMATIC) DesLKATqCmd_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) ESCTqCmd_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) APAOvrlCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) LKAInterTqCmd_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) ScaleFactor_Uls_T_f32;
	VAR(float32, AUTOMATIC) OutpTqOvrlCmd_MotNwtMtr_T_f32;
	VAR(boolean, AUTOMATIC) ESCActv_Cnt_T_logl ;

	/* read inputs */
	(void)Rte_Read_EscCmd_Val(&EscCmd_HwNwtMtr_T_f32);
    (void)Rte_Read_EscSt_Val(&EscSt_Cnt_T_enum);
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    (void)Rte_Read_HwOscnEna_Logl(&HwOscnEna_Cnt_T_logl);
    (void)Rte_Read_HwTqOscCmd_Val(&HwTqOscCmd_MotNwtMtr_T_f32);
    (void)Rte_Read_LkaSt_Val(&LkaSt_Cnt_T_enum);
    (void)Rte_Read_LkaTqCmd_Val(&LkaTqCmd_HwNwtMtr_T_f32);
    (void)Rte_Read_MotTqServoCmd_Val(&MotTqServoCmd_HwNwtMtr_T_f32);
    (void)Rte_Read_HwAgServoEna_Logl(&HwAgServoEna_Cnt_T_logl);
    (void)Rte_Read_VehSpdMaxSecur_Val(&VehSpdMaxSecur_Kph_T_f32);
	
	/****** PosnServo_Smoothed_Ramp ******/	
	PosnServoSmotRamp(MotTqServoCmd_HwNwtMtr_T_f32,
	                  HwAgServoEna_Cnt_T_logl,
					  HwTq_HwNwtMtr_T_f32,
					  &APAOvrlCmd_MotNwtMtr_T_f32,
				      &ScaleFactor_Uls_T_f32);
	
	if(HwOscnEna_Cnt_T_logl != FALSE)
	{
		MotTqCmdOvrl_MotNwtMtr_T_f32 = APAOvrlCmd_MotNwtMtr_T_f32 + HwTqOscCmd_MotNwtMtr_T_f32;
	}
	else
	{
		MotTqCmdOvrl_MotNwtMtr_T_f32 = APAOvrlCmd_MotNwtMtr_T_f32;
	}
	
	/****** AssiCmdBasSca ******/
	if(Rte_Prm_GmTqArbnApaAssiScaEna_Logl() == TRUE)
	{
		AssiCmdBasSca_Uls_T_f32 = ScaleFactor_Uls_T_f32;
	}
	else
	{
		AssiCmdBasSca_Uls_T_f32 = 1.0F;
	}
	
	/****** RtnCmdSca ******/
	if(Rte_Prm_GmTqArbnApaRtnScaEna_Logl() == TRUE)
	{
		RtnCmdSca_Uls_T_f32 = ScaleFactor_Uls_T_f32;
	}
	else
	{
		RtnCmdSca_Uls_T_f32 = 1.0F;
	}
	
	/****** DampgCmdSca ******/
	if(Rte_Prm_GmTqArbnApaDampgScaEna_Logl() == TRUE)
	{
		DampgCmdSca_Uls_T_f32 = ScaleFactor_Uls_T_f32;
	}
	else
	{
		DampgCmdSca_Uls_T_f32 = 1.0F;
	}
	
	/****** Determine Desired Value ******/
	if(((LkaSt_Cnt_T_enum != GMTQARBNLKAST_ACTV) &&
		(LkaSt_Cnt_T_enum != GMTQARBNLKAST_TMPLIMD)) ||
		(HwAgServoEna_Cnt_T_logl == TRUE))
	{
		DesLKATqCmd_HwNwtMtr_T_f32 = 0.0F;
	}
	else
	{
		DesLKATqCmd_HwNwtMtr_T_f32 = Lim_f32(LkaTqCmd_HwNwtMtr_T_f32,-LKACMDHILIM_HWNWTMTR_F32,LKACMDHILIM_HWNWTMTR_F32);
	}
	
	*Rte_Pim_dGmTqArbnDesLkaTqCmd() = DesLKATqCmd_HwNwtMtr_T_f32;   
	
	/****** Ramp to Value ******/
	LKAInterTqCmd_HwNwtMtr_T_f32 = RampVal(DesLKATqCmd_HwNwtMtr_T_f32, VehSpdMaxSecur_Kph_T_f32,&OutpTqOvrlCmd_MotNwtMtr_T_f32);

	MotTqCmdOvrl_MotNwtMtr_T_f32 += OutpTqOvrlCmd_MotNwtMtr_T_f32;

	*Rte_Pim_dGmTqArbnLkaTqCmd() = LKAInterTqCmd_HwNwtMtr_T_f32;
	
	/****** ESC logic ******/
	ESCActv_Cnt_T_logl = ESCLogic(EscCmd_HwNwtMtr_T_f32,
									EscSt_Cnt_T_enum,
									&ESCTqCmd_HwNwtMtr_T_f32,
									&EscLimdActv_Cnt_T_logl);
	
	*Rte_Pim_dGmTqArbnEscTqCmd() = ESCTqCmd_HwNwtMtr_T_f32; 
	
	/****** Start of 'CAN Conditioning' ******/
	if((EscSt_Cnt_T_enum == GMTQARBNESCST_ACTV) || (EscSt_Cnt_T_enum == GMTQARBNESCST_TMPLIMD))
	{
		LkaTqCmdCdnd_HwNwtMtr_T_f32 = 0.0F;
		EscCmdArbd_HwNwtMtr_T_f32 = ESCTqCmd_HwNwtMtr_T_f32;
	}
	else
	{
		LkaTqCmdCdnd_HwNwtMtr_T_f32 = LKAInterTqCmd_HwNwtMtr_T_f32;
		EscCmdArbd_HwNwtMtr_T_f32 = 0.0F;
	}
	HwTqOvrl_HwNwtMtr_T_f32 = LkaTqCmdCdnd_HwNwtMtr_T_f32 + EscCmdArbd_HwNwtMtr_T_f32;
	
	/****** End of 'CAN Conditioning' ******/

	/*** Pull Compensation Learning Trigger ***/
	if((ESCActv_Cnt_T_logl == TRUE)||
		(LkaSt_Cnt_T_enum == GMTQARBNLKAST_ACTV) ||
		(LkaSt_Cnt_T_enum == GMTQARBNLKAST_TMPLIMD))
	{
		PullCmpCustLrngDi_Cnt_T_logl = TRUE;
	}
	else
	{
		PullCmpCustLrngDi_Cnt_T_logl = FALSE;
	}

	AssiCmdBasSca_Uls_T_f32 = Lim_f32(AssiCmdBasSca_Uls_T_f32,OUTPCMDLOWRLIM_ULS_F32,OUTPCMDHILIM_ULS_F32);
	
	DampgCmdSca_Uls_T_f32 = Lim_f32(DampgCmdSca_Uls_T_f32,OUTPCMDLOWRLIM_ULS_F32,OUTPCMDHILIM_ULS_F32);
	
	EscCmdArbd_HwNwtMtr_T_f32 = Lim_f32(EscCmdArbd_HwNwtMtr_T_f32,-ESCTQCMDOVRLLIM_HWNWTMTR_F32,ESCTQCMDOVRLLIM_HWNWTMTR_F32);
	
	HwTqOvrl_HwNwtMtr_T_f32 = Lim_f32(HwTqOvrl_HwNwtMtr_T_f32,-HWTQCMDOVRLLIM_HWNWTMTR_F32,HWTQCMDOVRLLIM_HWNWTMTR_F32);
	
	LkaTqCmdCdnd_HwNwtMtr_T_f32 = Lim_f32(LkaTqCmdCdnd_HwNwtMtr_T_f32,-LKATQCMDOVRLLIM_HWNWTMTR_F32,LKATQCMDOVRLLIM_HWNWTMTR_F32);
	
	MotTqCmdOvrl_MotNwtMtr_T_f32 = Lim_f32(MotTqCmdOvrl_MotNwtMtr_T_f32,-MOTTQCMDOVRLLIM_MOTNWTMTR_F32,MOTTQCMDOVRLLIM_MOTNWTMTR_F32);
	
	RtnCmdSca_Uls_T_f32 = Lim_f32(RtnCmdSca_Uls_T_f32,OUTPCMDLOWRLIM_ULS_F32,OUTPCMDHILIM_ULS_F32);
		
	/******************************************************************/
	/* write outputs */
	(void)Rte_Write_AssiCmdBasSca_Val(AssiCmdBasSca_Uls_T_f32);
	(void)Rte_Write_DampgCmdSca_Val(DampgCmdSca_Uls_T_f32);
	(void)Rte_Write_EscCmdArbd_Val(EscCmdArbd_HwNwtMtr_T_f32);
	(void)Rte_Write_EscLimdActv_Logl(EscLimdActv_Cnt_T_logl);
	(void)Rte_Write_HwTqOvrl_Val(HwTqOvrl_HwNwtMtr_T_f32);
	(void)Rte_Write_LkaTqCmdCdnd_Val(LkaTqCmdCdnd_HwNwtMtr_T_f32);
	(void)Rte_Write_MotTqCmdOvrl_Val(MotTqCmdOvrl_MotNwtMtr_T_f32);
	(void)Rte_Write_RtnCmdSca_Val(RtnCmdSca_Uls_T_f32);
	(void)Rte_Write_PullCmpCustLrngDi_Logl(PullCmpCustLrngDi_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmTqArbn_STOP_SEC_CODE
#include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   PosnServoSmotRamp
* Description   :   'PosnServo_Smoothed_Ramp' functional block implementation.                 
* Inputs        :   PosSrvoCmd_HwNwtMtr_T_f32, PosSrvoSmoothEnable_Cnt_T_logl, HwTq_HwNwtMtr_T_f32                   
* Outputs       :   *APAOvrlCmd_MotNwtMtr_T_f32, *ScaleFactor_Uls_T_f32
* Usage Notes   :
*****************************************************************************/
static FUNC(void, GMTQARBN_CODE) PosnServoSmotRamp(float32 PosSrvoCmd_HwNwtMtr_T_f32,
	                                               boolean PosSrvoSmoothEnable_Cnt_T_logl,
							                       float32 HwTq_HwNwtMtr_T_f32,
							                       P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) APAOvrlCmd_MotNwtMtr_T_f32,
												   P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) ScaleFactor_Uls_T_f32)
{
	VAR(float32, AUTOMATIC) HwTqFild_HwNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC) HwTqFild_HwNwtMtr_T_u4p12;
	VAR(uint16, AUTOMATIC) LwrLim_UlsPerSec_T_u7p9;
	VAR(float32, AUTOMATIC) LwrLim_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) APAOvrlInterCmd_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) PosnServoSmotngEnaRate_Uls_T_f32;
	VAR(float32, AUTOMATIC) ScaleFactorInter_Uls_T_f32;	
	VAR(float32, AUTOMATIC) ScaleFactorSlew_Uls_T_f32;
	VAR(uint16, AUTOMATIC) ScaleFactorSlew_Uls_T_u1p15;
	VAR(uint16, AUTOMATIC) ScaleFactorInter_Uls_T_u1p15;
	
	HwTqFild_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(HwTq_HwNwtMtr_T_f32,Rte_Pim_APASmotngHwTqLpFil());
	HwTqFild_HwNwtMtr_T_u4p12 = FloatToFixd_u16_f32(Abslt_f32_f32(HwTqFild_HwNwtMtr_T_f32),NXTRFIXDPT_FLOATTOP12_ULS_F32);
																													
	LwrLim_UlsPerSec_T_u7p9 = LnrIntrpn_u16_u16VariXu16VariY(PrmGmTqArbnApaDiRateX,
													         PrmGmTqArbnApaDiRateY,
													         (uint16)TblSize_m(PrmGmTqArbnApaDiRateX),
													          HwTqFild_HwNwtMtr_T_u4p12);

	LwrLim_UlsPerSec_T_f32 = -(FixdToFloat_f32_u16(LwrLim_UlsPerSec_T_u7p9,NXTRFIXDPT_P9TOFLOAT_ULS_F32));
	
	if(LwrLim_UlsPerSec_T_f32 >= POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32)
	{
		LwrLim_UlsPerSec_T_f32 = POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32;
	}
	
	*Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim() = LwrLim_UlsPerSec_T_f32;
	
	if(PosSrvoSmoothEnable_Cnt_T_logl == TRUE)
	{
		APAOvrlInterCmd_HwNwtMtr_T_f32 = PosSrvoCmd_HwNwtMtr_T_f32;
		PosnServoSmotngEnaRate_Uls_T_f32 = 1.0F;
	}
	else
	{
		APAOvrlInterCmd_HwNwtMtr_T_f32 = *Rte_Pim_ActPosnServoCmd();
		PosnServoSmotngEnaRate_Uls_T_f32 = 0.0F;
	}
	
	*Rte_Pim_ActPosnServoCmd() = APAOvrlInterCmd_HwNwtMtr_T_f32;
	
	ScaleFactorSlew_Uls_T_f32  = Lim_f32(PosnServoSmotngEnaRate_Uls_T_f32, 
	                                           (*Rte_Pim_PosnServoSmotngEnaRateLim() + (LwrLim_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32 )), 
                                               (*Rte_Pim_PosnServoSmotngEnaRateLim() + (Rte_Prm_GmTqArbnApaEnaRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32 )));
										
	*Rte_Pim_PosnServoSmotngEnaRateLim() = ScaleFactorSlew_Uls_T_f32;
	
	ScaleFactorSlew_Uls_T_u1p15 = FloatToFixd_u16_f32(ScaleFactorSlew_Uls_T_f32,NXTRFIXDPT_FLOATTOP15_ULS_F32);
	
	ScaleFactorInter_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmGmTqArbnApaSmotngX,
													              PrmGmTqArbnApaSmotngY,
													              (uint16)TblSize_m(PrmGmTqArbnApaSmotngX),
													              ScaleFactorSlew_Uls_T_u1p15);
	
	ScaleFactorInter_Uls_T_f32 = FixdToFloat_f32_u16(ScaleFactorInter_Uls_T_u1p15,NXTRFIXDPT_P15TOFLOAT_ULS_F32);
	
	*ScaleFactor_Uls_T_f32 = ScaleFactorSlew_Uls_T_f32 * ScaleFactorInter_Uls_T_f32;
	
	*APAOvrlCmd_MotNwtMtr_T_f32 = APAOvrlInterCmd_HwNwtMtr_T_f32 * (*ScaleFactor_Uls_T_f32);
	
	*ScaleFactor_Uls_T_f32 = 1.0F - (*ScaleFactor_Uls_T_f32);
}
/*******************************************************************************
* Name          :   RampVal
* Description   :   'Ramp to Value' functional block implementation.                 
* Inputs        :   DesLKATqCmd_HwNwtMtr_T_f32, VehSpd_Kph_T_f32,OutpTqOvrlCmd_MotNwtMtr_T_f32                   
* Outputs       :   LKAInterTqCmd_HwNwtMtr_T_f32,OutpTqOvrlCmd_MotNwtMtr_T_f32
* Usage Notes   :
*****************************************************************************/
static FUNC(float32, GMTQARBN_CODE) RampVal(float32 DesLKATqCmd_HwNwtMtr_T_f32,
	                                        float32 VehSpd_Kph_T_f32,
											P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) OutpTqOvrlCmd_MotNwtMtr_T_f32)
{
	VAR(uint16, AUTOMATIC) CalSlew_HwNwtMtrPerSec_T_u4p12;
	VAR(float32, AUTOMATIC) FinalSlew_HwNwtMtrPerSec_T_f32;
	VAR(float32, AUTOMATIC) LKAInterTqCmd_HwNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u8p8;
	VAR(uint16, AUTOMATIC) AbsltLKAInterTqCmd_HwNwtMtr_T_u4p12;
	VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC) LkaOutpOvrl_MotNwtMtr_T_u4p12;
	VAR(float32, AUTOMATIC) LkaOutpOvrl_MotNwtMtr_T_f32;

	if(Rte_Prm_GmTqArbnLkaSlewEna_Logl() == TRUE)
	{
		VehSpd_Kph_T_u8p8 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP8_ULS_F32);
	
		CalSlew_HwNwtMtrPerSec_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmGmTqArbnLkaSlewX,
                                                                    PrmGmTqArbnLkaSlewY,
                                                                    (uint16)TblSize_m(PrmGmTqArbnLkaSlewX),
                                                                    VehSpd_Kph_T_u8p8);
	
		FinalSlew_HwNwtMtrPerSec_T_f32 = FixdToFloat_f32_u16(CalSlew_HwNwtMtrPerSec_T_u4p12,NXTRFIXDPT_P12TOFLOAT_ULS_F32);

	}
	else
	{
		FinalSlew_HwNwtMtrPerSec_T_f32 = (VehSpd_Kph_T_f32 * VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32) + VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32;
	}
	
	if(FinalSlew_HwNwtMtrPerSec_T_f32 <= FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32)
	{
		FinalSlew_HwNwtMtrPerSec_T_f32 = FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32;
	}
	
	LKAInterTqCmd_HwNwtMtr_T_f32  = Lim_f32(DesLKATqCmd_HwNwtMtr_T_f32, 
										   (*Rte_Pim_DesLkaTqCmdRateLim() - (FinalSlew_HwNwtMtrPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32 )), 
										   (*Rte_Pim_DesLkaTqCmdRateLim() + (FinalSlew_HwNwtMtrPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32 )));

	*Rte_Pim_DesLkaTqCmdRateLim() = LKAInterTqCmd_HwNwtMtr_T_f32;
	AbsltLKAInterTqCmd_HwNwtMtr_T_u4p12 = FloatToFixd_u16_f32(Abslt_f32_f32(LKAInterTqCmd_HwNwtMtr_T_f32),NXTRFIXDPT_FLOATTOP12_ULS_F32);
	VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP7_ULS_F32);

	LkaOutpOvrl_MotNwtMtr_T_u4p12 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
																					AbsltLKAInterTqCmd_HwNwtMtr_T_u4p12,
																					PrmSysGlbPrmVehSpdBilnrSeln,
																					(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
																					(P2CONST(uint16,AUTOMATIC,GmTqArbn_CONST))PrmGmTqArbnLkaOutpOvrlX,
																					(P2CONST(uint16,AUTOMATIC,GmTqArbn_CONST))PrmGmTqArbnLkaOutpOvrlY,
																					(uint16)TblSize_m(PrmGmTqArbnLkaOutpOvrlX[0]));
	LkaOutpOvrl_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(LkaOutpOvrl_MotNwtMtr_T_u4p12, NXTRFIXDPT_P12TOFLOAT_ULS_F32);
	LkaOutpOvrl_MotNwtMtr_T_f32 = LkaOutpOvrl_MotNwtMtr_T_f32 * (float32)Sign_s08_f32(LKAInterTqCmd_HwNwtMtr_T_f32);

	*OutpTqOvrlCmd_MotNwtMtr_T_f32 = Lim_f32(LkaOutpOvrl_MotNwtMtr_T_f32,LKAOUTPOVRLLIM_MOTNWTMTR_F32,Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val());
	*Rte_Pim_dGmTqArbnLkaOutpTqReq() = *OutpTqOvrlCmd_MotNwtMtr_T_f32;

	return(LKAInterTqCmd_HwNwtMtr_T_f32);
}
/*******************************************************************************
* Name          :   ESCLogic
* Description   :   'ESC Logic' functional block implementation.                 
* Inputs        :   EscCmd_HwNwtMtr_T_f32, EscSt_Cnt_T_enum                   
* Outputs       :   *ESCTqCmd_HwNwtMtr_T_f32, *EscLimdActv_Cnt_T_logl,ESCActv_Cnt_T_logl
* Usage Notes   :
*****************************************************************************/
static FUNC(boolean, GMTQARBN_CODE) ESCLogic(float32 EscCmd_HwNwtMtr_T_f32,
	                                      GmTqArbnEscSt1 EscSt_Cnt_T_enum,
	                                      P2VAR(float32, AUTOMATIC, GMTQARBN_APPL_VAR) ESCTqCmd_HwNwtMtr_T_f32,
	                                      P2VAR(boolean, AUTOMATIC, GMTQARBN_APPL_VAR) EscLimdActv_Cnt_T_logl)
{
	VAR(boolean, AUTOMATIC) ESCActv_Cnt_T_logl;

	if((EscSt_Cnt_T_enum == GMTQARBNESCST_ACTV) || (EscSt_Cnt_T_enum == GMTQARBNESCST_TMPLIMD))
	{
		*ESCTqCmd_HwNwtMtr_T_f32 = EscCmd_HwNwtMtr_T_f32;
		ESCActv_Cnt_T_logl = TRUE;
	}
	else
	{
		*ESCTqCmd_HwNwtMtr_T_f32 = 0.0F;
		ESCActv_Cnt_T_logl = FALSE;
	}
	
	*ESCTqCmd_HwNwtMtr_T_f32 = Lim_f32(*ESCTqCmd_HwNwtMtr_T_f32,-Rte_Prm_GmTqArbnEscMaxTq_Val(),Rte_Prm_GmTqArbnEscMaxTq_Val());
	
	if((FloatToFixd_u16_f32(Abslt_f32_f32(*ESCTqCmd_HwNwtMtr_T_f32),NXTRFIXDPT_FLOATTOP13_ULS_F32)) ==
	   (FloatToFixd_u16_f32(Rte_Prm_GmTqArbnEscMaxTq_Val(),NXTRFIXDPT_FLOATTOP13_ULS_F32)))
	{
		*EscLimdActv_Cnt_T_logl = TRUE;
	}
	else
	{
		*EscLimdActv_Cnt_T_logl = FALSE;
	}

	return ESCActv_Cnt_T_logl;
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
