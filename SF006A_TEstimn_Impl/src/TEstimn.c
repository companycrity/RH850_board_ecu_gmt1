/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TEstimn.c
 *     SW-C Type:  TEstimn
 *  Generated at:  Fri Sep 25 11:44:02 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TEstimn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : TEstimn.c
* Module Description: Implementation of Temperature Estimation FDD SF006A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 9/22/15  1        SV        Initial Version                                                                  EA4#646                                                              
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_TEstimn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "ArchGlbPrm.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define TESTIMNASSIMECHTHILIM_DEGCGRD_F32	150.0F
#define TESTIMNASSIMECHTLOLIM_DEGCGRD_F32	(-50.0F)
#define TESTIMNFETTHILIM_DEGCGRD_F32		200.0F
#define TESTIMNFETTLOLIM_DEGCGRD_F32		(-50.0F)
#define TESTIMNMAGTHILIM_DEGCGRD_F32		150.0F
#define TESTIMNMAGTLOLIM_DEGCGRD_F32		(-50.0F)
#define TESTIMNWIDGTHILIM_DEGCGRD_F32		300.0F
#define TESTIMNWIDGTLOLIM_DEGCGRD_F32		(-50.0F)

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AssiMechTEstimnPrev(void)
 *   float32 *Rte_Pim_AssiMechTSlewLimPrev(void)
 *   float32 *Rte_Pim_CuTEstimnPrev(void)
 *   float32 *Rte_Pim_MagTEstimnPrev(void)
 *   float32 *Rte_Pim_SiTEstimnPrev(void)
 *   float32 *Rte_Pim_dTEstimnAmbPwr(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechCorrn(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechDampgSca(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechFil(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechLLFil(void)
 *   float32 *Rte_Pim_dTEstimnCuCorrn(void)
 *   float32 *Rte_Pim_dTEstimnCuLLFil(void)
 *   float32 *Rte_Pim_dTEstimnMagCorrn(void)
 *   float32 *Rte_Pim_dTEstimnMagLLFil(void)
 *   float32 *Rte_Pim_dTEstimnScadAmbT(void)
 *   float32 *Rte_Pim_dTEstimnScadEngT(void)
 *   float32 *Rte_Pim_dTEstimnSiCorrn(void)
 *   float32 *Rte_Pim_dTEstimnSiLLFilv(void)
 *   float32 *Rte_Pim_dTEstimnWghtAvrgT(void)
 *   boolean *Rte_Pim_AmbTVldPrev(void)
 *   boolean *Rte_Pim_AssiMechTInitEna(void)
 *   boolean *Rte_Pim_EngOilTVldPrev(void)
 *   FilLpRec1 *Rte_Pim_AssiMechFilLp(void)
 *   FilLpRec1 *Rte_Pim_CuFilLp(void)
 *   FilLpRec1 *Rte_Pim_MagFilLp(void)
 *   FilLpRec1 *Rte_Pim_SiFilLp(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TEstimnAmbPwrMplr_Val(void)
 *   float32 Rte_Prm_TEstimnAmbTSca_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechCorrLim_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechDampgSca_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechDftT_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechSlew_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTAssiMech_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTCu_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTMag_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTSi_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnCuCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnEngTSca_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnMagCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnSiCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffB1_Val(void)
 *   boolean Rte_Prm_TEstimnWghtAvrgTDi_Logl(void)
 *
 *********************************************************************************************************************/


#define TEstimn_START_SEC_CODE
#include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TEstimnInit1
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
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, TEstimn_CODE) TEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnInit1
 *********************************************************************************************************************/
	
	VAR(float32, AUTOMATIC) AmbT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) AmbTVld_Cnt_T_logl;	
	VAR(float32, AUTOMATIC) EcuTFild_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EngOilT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) EngOilTVld_Cnt_T_logl;	
	
	VAR(float32, AUTOMATIC) AssiMechTEstimn_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) AssiMechT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotFetT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotMagT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotWidgT_DegCgrd_T_f32;
	
 	(void)Rte_Read_AmbT_Val(&AmbT_DegCgrd_T_f32);			/* REQ: SF006A #36 I */
	(void)Rte_Read_AmbTVld_Logl(&AmbTVld_Cnt_T_logl);		/* REQ: SF006A #37 I */
	(void)Rte_Read_EcuTFild_Val(&EcuTFild_DegCgrd_T_f32);	/* REQ: SF006A #169 I */
	(void)Rte_Read_EngOilT_Val(&EngOilT_DegCgrd_T_f32);		/* REQ: SF006A #35 I */
	(void)Rte_Read_EngOilTVld_Logl(&EngOilTVld_Cnt_T_logl);	/* REQ: SF006A #37 I */
	
	/* REQ: SF006A #143 I */
	/* REQ: SF006A #123 I */
	
	FilLpInit(0.0F,Rte_Prm_TEstimnSiAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_SiFilLp());
	FilLpInit(0.0F,Rte_Prm_TEstimnMagAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_MagFilLp());
	FilLpInit(0.0F,Rte_Prm_TEstimnCuAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_CuFilLp());
	FilLpInit(0.0F,Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_AssiMechFilLp());
	
	/* REQ: SF006A #145 I */
	/* REQ: SF006A #147 I */
	/* Motor Silicon Temperature Initialization */
	MotFetT_DegCgrd_T_f32 = Lim_f32(EcuTFild_DegCgrd_T_f32,TESTIMNFETTLOLIM_DEGCGRD_F32,TESTIMNFETTHILIM_DEGCGRD_F32);
	
	/* REQ: SF006A #171 I */
	/* Motor Silicon Temperature LeadLag Filter Initialization */
	*Rte_Pim_SiTEstimnPrev() = (EcuTFild_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffB1_Val())) +					
	                           ((Rte_Prm_TEstimnCorrnTSi_Val()) * (Rte_Prm_TEstimnSiLLFilCoeffB1_Val())) +
							   (EcuTFild_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffA1_Val()));
	
	/* REQ: SF006A #145 I */
	/* REQ: SF006A #147 I */	
	/* Motor Magnet Temperature Initialization */	
	MotMagT_DegCgrd_T_f32 = Lim_f32(EcuTFild_DegCgrd_T_f32,TESTIMNMAGTLOLIM_DEGCGRD_F32,TESTIMNMAGTHILIM_DEGCGRD_F32);
	
	/* REQ: SF006A #171 I */
	/* Motor Magnet Temperature LeadLag Filter Initialization */
	*Rte_Pim_MagTEstimnPrev() = (EcuTFild_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffB1_Val())) +					
	                            ((Rte_Prm_TEstimnCorrnTMag_Val()) * (Rte_Prm_TEstimnMagLLFilCoeffB1_Val())) +
							    (EcuTFild_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffA1_Val()));	
	
	/* REQ: SF006A #145 I */
	/* REQ: SF006A #147 I */
	/* Motor Winding  Temperature Initialization */
	MotWidgT_DegCgrd_T_f32 = Lim_f32(EcuTFild_DegCgrd_T_f32,TESTIMNWIDGTLOLIM_DEGCGRD_F32,TESTIMNWIDGTHILIM_DEGCGRD_F32);
	
	/* REQ: SF006A #171 I */
	/* Motor Winding  Temperature Lead Lag Initialization */
	*Rte_Pim_CuTEstimnPrev() = (EcuTFild_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffB1_Val())) +					
	                           ((Rte_Prm_TEstimnCorrnTCu_Val()) * (Rte_Prm_TEstimnCuLLFilCoeffB1_Val())) +
							   (EcuTFild_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffA1_Val()));	
	
	/* Assist Mechanism Temperature Initialization */
	if(((Rte_Prm_TEstimnWghtAvrgTDi_Logl()) == FALSE) &&
	   (AmbTVld_Cnt_T_logl == TRUE) &&
	   (EngOilTVld_Cnt_T_logl == TRUE))
	{
		/* Assist Mechanism Initialization Enable */
		AssiMechT_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Val())) +
		                          (AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Val()));
	}
	else
	{
		/* Assist Mechanism Initialization Disable */
		AssiMechT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
	}
	
	/* REQ: SF006A #146 I */
	AssiMechT_DegCgrd_T_f32 = Lim_f32(AssiMechT_DegCgrd_T_f32,TESTIMNASSIMECHTLOLIM_DEGCGRD_F32,TESTIMNASSIMECHTHILIM_DEGCGRD_F32);	
	
	/* Assist Mechanism Temperature LeagLag Filter Initialization */
	AssiMechTEstimn_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Val())) +
		                            (AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Val()));
	
	*Rte_Pim_AssiMechTEstimnPrev() = (AssiMechTEstimn_DegCgrd_T_f32 *((Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val()) + (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val()))) +
	                                 (((Rte_Prm_TEstimnCorrnTAssiMech_Val()) * (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val())));
	
	/* ENDREQ: SF006A #143 */
	/* ENDREQ: SF006A #123 */
	
	(void)Rte_Write_AssiMechT_Val(AssiMechT_DegCgrd_T_f32);		/* REQ: SF006A #40 I */        
	(void)Rte_Write_MotFetT_Val(MotFetT_DegCgrd_T_f32);			/* REQ: SF006A #41 I */
	(void)Rte_Write_MotMagT_Val(MotMagT_DegCgrd_T_f32);			/* REQ: SF006A #42 I */
	(void)Rte_Write_MotWidgT_Val(MotWidgT_DegCgrd_T_f32);		/* REQ: SF006A #43 I */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TEstimnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_AssiMechTEstimnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, TEstimn_CODE) TEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) AmbT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) AmbTVld_Cnt_T_logl;	
	VAR(boolean, AUTOMATIC) AssiMechTEstimnDi_Cnt_T_logl;	
	VAR(float32, AUTOMATIC) EcuTFild_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EngOilT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) EngOilTVld_Cnt_T_logl;
	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) MotCurrPeakEstimd_AmprSqd_T_f32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdSiFild_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) SiCorr_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdMagFild_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) MagCorr_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdCuFild_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) CuCorr_DegCgrd_T_f32;
		
	VAR(float32, AUTOMATIC) HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwVelFild_MotNwtMtrPerMotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) AMCorr_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) EcuTFildCorrnTSi_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) SiTempEst_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EcuTFildCorrnTMag_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MagTempEst_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EcuTFildCorrnTCu_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) CuTempEst_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) AssiMechTInter_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) EngOilTSca_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AmbTSca_DegCgrd_T_f32;			  
	VAR(float32, AUTOMATIC) WtAvgTemp_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AssiMechTCalcn_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AssiMechTSlew_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AssiMechTEstim_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AssiMechTEstimn_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) AssiMechT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotFetT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotMagT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotWidgT_DegCgrd_T_f32;

	(void)Rte_Read_AmbT_Val(&AmbT_DegCgrd_T_f32);							/* REQ: SF006A #36 I */
	(void)Rte_Read_AmbTVld_Logl(&AmbTVld_Cnt_T_logl);						/* REQ: SF006A #37 I */
	(void)Rte_Read_AssiMechTEstimnDi_Logl(&AssiMechTEstimnDi_Cnt_T_logl);	/* REQ: SF006A #39 I */
	(void)Rte_Read_EcuTFild_Val(&EcuTFild_DegCgrd_T_f32);					/* REQ: SF006A #169 I */
	(void)Rte_Read_EngOilT_Val(&EngOilT_DegCgrd_T_f32);						/* REQ: SF006A #35 I */
	(void)Rte_Read_EngOilTVld_Logl(&EngOilTVld_Cnt_T_logl);					/* REQ: SF006A #37 I */
	(void)Rte_Read_HwVel_Val(&HwVel_HwRadPerSec_T_f32);						/* REQ: SF006A #33 I */
	(void)Rte_Read_MotCurrPeakEstimd_Val(&MotCurrPeakEstimd_AmprSqd_T_f32);	/* REQ: SF006A #34 I */
	
	/* REQ: SF006A #173 I */
	
	/****** Start of 'Delta Temperature Compensation' ******/
	
	/* REQ: SF006A #128 I */
	/* REQ: SF006A #131 I */
	/* REQ: SF006A #145 I */
	/* REQ: SF006A #122 I */
	
	MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32 = MotCurrPeakEstimd_AmprSqd_T_f32 * (Rte_Prm_TEstimnAmbPwrMplr_Val());
	*Rte_Pim_dTEstimnAmbPwr() = MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32;
	
	/* Silicon */
	MotCurrPeakEstimdSiFild_AmprSqd_T_f32 = FilLpUpdOutp_f32(MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32,Rte_Pim_SiFilLp());
	SiCorr_DegCgrd_T_f32 = Lim_f32((MotCurrPeakEstimdSiFild_AmprSqd_T_f32 * (Rte_Prm_TEstimnSiAmbMplr_Val())),
	                               (-Rte_Prm_TEstimnSiCorrnLim_Val()),
								   (Rte_Prm_TEstimnSiCorrnLim_Val()));
	*Rte_Pim_dTEstimnSiCorrn() = SiCorr_DegCgrd_T_f32;

	/* Magnet */
	MotCurrPeakEstimdMagFild_AmprSqd_T_f32 = FilLpUpdOutp_f32(MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32,Rte_Pim_MagFilLp());
	MagCorr_DegCgrd_T_f32 = Lim_f32((MotCurrPeakEstimdMagFild_AmprSqd_T_f32 * (Rte_Prm_TEstimnMagAmbMplr_Val())),
	                                (-Rte_Prm_TEstimnMagCorrnLim_Val()),
								    (Rte_Prm_TEstimnMagCorrnLim_Val()));
	*Rte_Pim_dTEstimnMagCorrn() = MagCorr_DegCgrd_T_f32;
									
    /* Copper */
	MotCurrPeakEstimdCuFild_AmprSqd_T_f32 = FilLpUpdOutp_f32(MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32,Rte_Pim_CuFilLp());
	CuCorr_DegCgrd_T_f32 = Lim_f32((MotCurrPeakEstimdCuFild_AmprSqd_T_f32 * (Rte_Prm_TEstimnCuAmbMplr_Val())),
	                               (-Rte_Prm_TEstimnCuCorrnLim_Val()),
								   (Rte_Prm_TEstimnCuCorrnLim_Val()));			
    *Rte_Pim_dTEstimnCuCorrn() = CuCorr_DegCgrd_T_f32;										

	/* Assist Mechanism */
	HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32 = HwVel_HwRadPerSec_T_f32 * 					
	                                           HwVel_HwRadPerSec_T_f32 *
								               (Rte_Prm_TEstimnAssiMechDampgSca_Val());
	*Rte_Pim_dTEstimnAssiMechDampgSca() = HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32;
	
	HwVelFild_MotNwtMtrPerMotRadPerSec_T_f32 = FilLpUpdOutp_f32(HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32,Rte_Pim_AssiMechFilLp());
	AMCorr_DegCgrd_T_f32 = Lim_f32((HwVelFild_MotNwtMtrPerMotRadPerSec_T_f32 * (Rte_Prm_TEstimnAssiMechAmbMplr_Val())),
	                               (-Rte_Prm_TEstimnAssiMechCorrLim_Val()),
								   (Rte_Prm_TEstimnAssiMechCorrLim_Val()));			
    *Rte_Pim_dTEstimnAssiMechCorrn() = AMCorr_DegCgrd_T_f32;										
	
	/* ENDREQ: SF006A #128 */
	/* ENDREQ: SF006A #131 */
	/* ENDREQ: SF006A #145 */
	/* ENDREQ: SF006A #122 */
	
	/****** End of 'Delta Temperature Compensation' ******/
	
	/****** Start of 'Lead/Lag Filter Function' ******/
	
	/* REQ: SF006A #130 I */
	/* REQ: SF006A #132 I */
	/* REQ: SF006A #122 I */
	/* REQ: SF006A #170 I */
	
	/* Silicon Lead/Lag Filter */
	
	/* REQ: SF006A #171 I */
	EcuTFildCorrnTSi_DegCgrd_T_f32 = (EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTSi_Val()));
	SiTempEst_DegCgrd_T_f32 = (EcuTFildCorrnTSi_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffB0_Val())) + 
	                          (*Rte_Pim_SiTEstimnPrev());
	*Rte_Pim_SiTEstimnPrev() = (SiTempEst_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffA1_Val())) +
	                           (EcuTFildCorrnTSi_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffB1_Val()));
	/* ENDREQ: SF006A #171 */
	
	MotFetT_DegCgrd_T_f32 = SiTempEst_DegCgrd_T_f32 + SiCorr_DegCgrd_T_f32;
	
	/* REQ: SF006A #145 I */
	/* REQ: SF006A #147 I */
	MotFetT_DegCgrd_T_f32 = Lim_f32(MotFetT_DegCgrd_T_f32,TESTIMNFETTLOLIM_DEGCGRD_F32,TESTIMNFETTHILIM_DEGCGRD_F32); 
	
	/* Magnet Lead/Lag Filter */
	
	/* REQ: SF006A #171 I */
	EcuTFildCorrnTMag_DegCgrd_T_f32 = (EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTMag_Val()));
	MagTempEst_DegCgrd_T_f32 = (EcuTFildCorrnTMag_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffB0_Val())) + 
	                          (*Rte_Pim_MagTEstimnPrev());
	*Rte_Pim_MagTEstimnPrev() = (MagTempEst_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffA1_Val())) +
	                           (EcuTFildCorrnTMag_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffB1_Val()));
	/* ENDREQ: SF006A #171 */
	
	MotMagT_DegCgrd_T_f32 = MagTempEst_DegCgrd_T_f32 + MagCorr_DegCgrd_T_f32;
	
	/* REQ: SF006A #145 I */
	/* REQ: SF006A #147 I */
	MotMagT_DegCgrd_T_f32 = Lim_f32(MotMagT_DegCgrd_T_f32,TESTIMNMAGTLOLIM_DEGCGRD_F32,TESTIMNMAGTHILIM_DEGCGRD_F32); 
	
	/* Copper Lead/Lag Filter */
	
	/* REQ: SF006A #171 I */
	EcuTFildCorrnTCu_DegCgrd_T_f32 = (EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTCu_Val()));
	CuTempEst_DegCgrd_T_f32 = (EcuTFildCorrnTCu_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffB0_Val())) + 
	                          (*Rte_Pim_CuTEstimnPrev());
	*Rte_Pim_CuTEstimnPrev() = (CuTempEst_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffA1_Val())) +
	                           (EcuTFildCorrnTCu_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffB1_Val()));
	/* ENDREQ: SF006A #171 */
	
	MotWidgT_DegCgrd_T_f32 = CuTempEst_DegCgrd_T_f32 + CuCorr_DegCgrd_T_f32;
	
	/* REQ: SF006A #145 I */
	/* REQ: SF006A #147 I */
	MotWidgT_DegCgrd_T_f32 = Lim_f32(MotWidgT_DegCgrd_T_f32,TESTIMNWIDGTLOLIM_DEGCGRD_F32,TESTIMNWIDGTHILIM_DEGCGRD_F32); 
	
	/* Assist Mechanism LeadLag Filter Initialization in Periodic1 */
	if(*Rte_Pim_AssiMechTInitEna() == FALSE)
	{
		if(((Rte_Prm_TEstimnWghtAvrgTDi_Logl()) == FALSE) &&
	       (AmbTVld_Cnt_T_logl == TRUE) &&
	       (EngOilTVld_Cnt_T_logl == TRUE))
		{
			AssiMechTInter_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Val())) +
									       (AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Val()));
		}
		else
		{
			AssiMechTInter_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
		}
		
		*Rte_Pim_AssiMechTEstimnPrev() = (AssiMechTInter_DegCgrd_T_f32 *((Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val()) + (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val()))) +
	                                     (((Rte_Prm_TEstimnCorrnTAssiMech_Val()) * (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val())));
	
		*Rte_Pim_AssiMechTInitEna() = TRUE;
				
	}
	
	/* Assist Mechanism LeadLag Filter Re-Initialization */
	if((AmbTVld_Cnt_T_logl != (*Rte_Pim_AmbTVldPrev())) ||
	   (EngOilTVld_Cnt_T_logl != (*Rte_Pim_EngOilTVldPrev())))
	{
		if ((Rte_Prm_TEstimnWghtAvrgTDi_Logl()) == FALSE)
		{
			if((AmbTVld_Cnt_T_logl == TRUE) &&
			   (EngOilTVld_Cnt_T_logl == TRUE))
			{
				AssiMechTInter_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Val())) +
											   (AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Val()));
			}
			else
			{
				AssiMechTInter_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
			}
			
			*Rte_Pim_AssiMechTEstimnPrev() = (AssiMechTInter_DegCgrd_T_f32 *((Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val()) + (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val()))) +
											 (((Rte_Prm_TEstimnCorrnTAssiMech_Val()) * (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val())));   
		}	   
	}
	
	*Rte_Pim_AmbTVldPrev() = AmbTVld_Cnt_T_logl;
	*Rte_Pim_EngOilTVldPrev() = EngOilTVld_Cnt_T_logl;
	
	
	EngOilTSca_DegCgrd_T_f32 = EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Val());
	*Rte_Pim_dTEstimnScadEngT() = EngOilTSca_DegCgrd_T_f32;
	
	AmbTSca_DegCgrd_T_f32 = AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Val());
	*Rte_Pim_dTEstimnScadAmbT() = AmbTSca_DegCgrd_T_f32;
	
	WtAvgTemp_DegCgrd_T_f32 = EngOilTSca_DegCgrd_T_f32 + AmbTSca_DegCgrd_T_f32;
	*Rte_Pim_dTEstimnWghtAvrgT() = WtAvgTemp_DegCgrd_T_f32;
	
	/* AssistMechanism Lead/Lag Filter */
	
	/* REQ: SF006A #135 I */
	/* REQ: SF006A #172 I */
	if(((Rte_Prm_TEstimnWghtAvrgTDi_Logl()) == FALSE) &&
	   (AmbTVld_Cnt_T_logl == TRUE) &&
	   (EngOilTVld_Cnt_T_logl == TRUE))
	{
		/* AssiMechTCalcnDisabled */
		AssiMechTCalcn_DegCgrd_T_f32 = WtAvgTemp_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTAssiMech_Val());
	}
	else
	{
		/* AssiMechTCalcnEnabled */
		AssiMechTCalcn_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTAssiMech_Val());
	}
	
	/* PreAssiMechTEstimEnabled */
	AssiMechTEstimn_DegCgrd_T_f32 = (AssiMechTCalcn_DegCgrd_T_f32 * (Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val())) +
	                                (*Rte_Pim_AssiMechTEstimnPrev());
	
	*Rte_Pim_AssiMechTEstimnPrev() = (AssiMechTEstimn_DegCgrd_T_f32 * (Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val())) +
	                                 (AssiMechTCalcn_DegCgrd_T_f32  * (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val()));
	/* ENDREQ: SF006A #135 */
	/* ENDREQ: SF006A #172 */
	
	if(AssiMechTEstimnDi_Cnt_T_logl == TRUE)
	{
		/* AssiMechTEstimnEnabled */
		
		/* REQ: SF006A #140 I */
		/* REQ: SF006A #172 I */
		AssiMechTEstim_DegCgrd_T_f32 = Rte_Prm_TEstimnAssiMechDftT_Val();
	}
	else
	{
		/* AssiMechTEstimnDisabled */
		
		/* REQ: SF006A #172 I */
		AssiMechTEstim_DegCgrd_T_f32 = AMCorr_DegCgrd_T_f32 + AssiMechTEstimn_DegCgrd_T_f32;
		*Rte_Pim_dTEstimnAssiMechFil() = AssiMechTEstim_DegCgrd_T_f32;  
	}
	
	/* REQ: SF006A #159 I */
	AssiMechTSlew_DegCgrd_T_f32 = Lim_f32(AssiMechTEstim_DegCgrd_T_f32,
	                                     ((*Rte_Pim_AssiMechTSlewLimPrev())-((Rte_Prm_TEstimnAssiMechSlew_Val()) * ARCHGLBPRM_2MILLISEC_SEC_F32)),
									     ((*Rte_Pim_AssiMechTSlewLimPrev())+((Rte_Prm_TEstimnAssiMechSlew_Val()) * ARCHGLBPRM_2MILLISEC_SEC_F32)));
	
	*Rte_Pim_AssiMechTSlewLimPrev() = AssiMechTSlew_DegCgrd_T_f32;
	
	/* REQ: SF006A #146 I */
	AssiMechT_DegCgrd_T_f32 = Lim_f32(AssiMechTSlew_DegCgrd_T_f32,TESTIMNASSIMECHTLOLIM_DEGCGRD_F32,TESTIMNASSIMECHTHILIM_DEGCGRD_F32);   
	
	/* ENDREQ: SF006A #130 */
	/* ENDREQ: SF006A #132 */
	/* ENDREQ: SF006A #122 */
	/* ENDREQ: SF006A #170 */

	/****** End of 'Lead/Lag Filter Function' ******/

	/* ENDREQ: SF006A #173 */
	
	(void)Rte_Write_AssiMechT_Val(AssiMechT_DegCgrd_T_f32);		/* REQ: SF006A #40 I */	
	(void)Rte_Write_MotFetT_Val(MotFetT_DegCgrd_T_f32);			/* REQ: SF006A #41 I */
	(void)Rte_Write_MotMagT_Val(MotMagT_DegCgrd_T_f32);			/* REQ: SF006A #42 I */
	(void)Rte_Write_MotWidgT_Val(MotWidgT_DegCgrd_T_f32);		/* REQ: SF006A #43 I */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TEstimn_STOP_SEC_CODE
#include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
