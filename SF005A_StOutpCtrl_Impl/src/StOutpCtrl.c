/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StOutpCtrl.c
 *     SW-C Type:  StOutpCtrl
 *  Generated at:  Mon Dec  5 15:21:29 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StOutpCtrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: StOutpCtrl.c
* Module Description: Implementation of State Output Control -  FDD SF005A
* Project           : CBD
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/15/15  1        AR        Initial Version																	EA4#525
* 03/29/16  3        BG		   Anamoly: Input Name change implementation										EA4#4408
* 12/05/16	4		 ML		   Updated to fix Anomaly EA4#7767													EA4#8441
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_StOutpCtrl.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "ArchGlbPrm.h"
 
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1] There is no appropriate action to take on the return value */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
 #define   OPER_CNT_U08                  1U
 #define   LOA_CNT_U08                   2U
 #define   STRTSTOP_CNT_U08              3U
 #define   DI_CNT_U08                    4U

 #define   BIGSLEW_ULSPERSEC_F32         500.0F
 
 #define   RATELIMITHI_ULSPERSEC_F32     ((float32)Rate1_UpperLimit)
 #define   RATELIMITLO_ULSPERSEC_F32     ((float32)Rate1_LowerLimit) 

 #define   TARGETSCALEHI_ULS_F32         ((float32)Uls2_UpperLimit)
 #define   TARGETSCALELO_ULS_F32         ((float32)Uls2_LowerLimit)
 
 
 
/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/
static FUNC(float32, StOutpCtrl_CODE) RateLimit( float32 SysOperRampRate_UlspS_T_f32,
	                                             float32 LoaRateLim_UlspS_T_f32,
												 float32 VehStrtStopRampRate_UlspS_T_f32);
												 
static FUNC(float32, StOutpCtrl_CODE) RateSource(float32 SysOperMotTqCmdSca_Uls_T_f32,
	                                             float32 LoaSca_Uls_T_f32,
												 float32 VehStrtStopMotTqCmdSca_Uls_T_f32,
												 uint8   SelectedState_Cnt_T_u08);	
												 




/*********************************************** Function Definitions ************************************************/


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
 *   float32 *Rte_Pim_StOutpCtrlPrevCmdSca(void)
 *   float32 *Rte_Pim_dStOutpCtrlRateLim(void)
 *   float32 *Rte_Pim_dStOutpCtrlTarSca(void)
 *   uint8 *Rte_Pim_StOutpCtrlPrevSrc(void)
 *
 *********************************************************************************************************************/


#define StOutpCtrl_START_SEC_CODE
#include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StOutpCtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, StOutpCtrl_CODE) StOutpCtrlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StOutpCtrlInit1
 *********************************************************************************************************************/
	*(Rte_Pim_StOutpCtrlPrevSrc())    = OPER_CNT_U08; 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StOutpCtrlPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LoaRateLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqTranlDampgCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysDiMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysDiRampRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdRampRateDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysOperMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysOperRampRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehStrtStopMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehStrtStopRampRate_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SysMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqDi_Logl(boolean data)
 *
 *********************************************************************************************************************/

FUNC(void, StOutpCtrl_CODE) StOutpCtrlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StOutpCtrlPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) LoaSca_Uls_T_f32;	
	VAR(float32, AUTOMATIC) SysDiMotTqCmdSca_Uls_T_f32;
	VAR(float32, AUTOMATIC) SysDiRampRate_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) SysOperMotTqCmdSca_Uls_T_f32;	
	VAR(float32, AUTOMATIC) VehStrtStopMotTqCmdSca_Uls_T_f32;	
	VAR(float32, AUTOMATIC) SelectedTqCmdSca_Uls_T_f32; 
	VAR(float32, AUTOMATIC) SelectedRampRate_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) StepLimit_Uls_T_f32;	
	VAR(float32, AUTOMATIC) VehStrtStopRampRate_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) LoaRateLim_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) SysOperRampRate_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) ArbdTarSca_Uls_T_f32;
	VAR(float32, AUTOMATIC) ArbdRate_UlspS_T_f32;
	VAR(float32, AUTOMATIC) TarSca_Uls_T_f32;
	VAR(float32, AUTOMATIC) RateLimit_UlspS_T_f32;
	VAR(float32, AUTOMATIC) Sca_Uls_T_f32 ;
	VAR(float32, AUTOMATIC) OpRampMult_Uls_T_f32;
	VAR(uint8,   AUTOMATIC) SelectedState_Cnt_T_u08;
	VAR(uint8,   AUTOMATIC) ArbdSt_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) SysStFltOutpReqDi_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) SysMotTqCmdRampRateDi_Cnt_T_lgc;	
	VAR(boolean, AUTOMATIC) SysStReqDi_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) RampComp_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC) MotTqTranlDampgCmpl_Cnt_T_lgc;
	
	/*Store Inputs to Module local copy*/
	(void)Rte_Read_SysStFltOutpReqDi_Logl(&SysStFltOutpReqDi_Cnt_T_lgc); 		/* REQ: SF005A #44 I */
	(void)Rte_Read_SysDiMotTqCmdSca_Val(&SysDiMotTqCmdSca_Uls_T_f32);        		/* REQ: SF005A #27 I */
	(void)Rte_Read_SysDiRampRate_Val(&SysDiRampRate_UlsPerSec_T_f32);        		/* REQ: SF005A #36 I */
	(void)Rte_Read_LoaSca_Val(&LoaSca_Uls_T_f32);            		/* REQ: SF005A #37 I */	
	(void)Rte_Read_VehStrtStopMotTqCmdSca_Val(&VehStrtStopMotTqCmdSca_Uls_T_f32);	/* REQ: SF005A #39 I */	
	(void)Rte_Read_SysOperMotTqCmdSca_Val(&SysOperMotTqCmdSca_Uls_T_f32);			/* REQ: SF005A #41 I */	
	(void)Rte_Read_SysMotTqCmdRampRateDi_Logl(&SysMotTqCmdRampRateDi_Cnt_T_lgc);	/* REQ: SF005A #43 I */
	(void)Rte_Read_LoaRateLim_Val(&LoaRateLim_UlsPerSec_T_f32); 					/* REQ: SF005A #38 I */
	(void)Rte_Read_VehStrtStopRampRate_Val(&VehStrtStopRampRate_UlsPerSec_T_f32);	/* REQ: SF005A #40 I */
	(void)Rte_Read_SysOperRampRate_Val(&SysOperRampRate_UlsPerSec_T_f32);			/* REQ: SF005A #42 I */
	(void)Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(&DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_lgc);
	(void)Rte_Read_MotTqTranlDampgCmpl_Logl(&MotTqTranlDampgCmpl_Cnt_T_lgc);

	/*** Start of Target Selection ***/
	/*  
		Use the minimum scale factor as the target. If the new target is lower than the current scale factor,
		use the rate limit of the new target source.  Otherwise use the rate limit of the previous target source.
		The source of the rate limit may be consistent over several executions, but the rate limit itself is dynamic.
	*/
	/* Ramp Value */
	/* REQ: SF005A #52 I */
	if((VehStrtStopMotTqCmdSca_Uls_T_f32 < SysOperMotTqCmdSca_Uls_T_f32) && 
	   (VehStrtStopMotTqCmdSca_Uls_T_f32 < LoaSca_Uls_T_f32))
	{
		SelectedState_Cnt_T_u08 = STRTSTOP_CNT_U08;
		
	}
	else if(LoaSca_Uls_T_f32 < SysOperMotTqCmdSca_Uls_T_f32)
	{
		SelectedState_Cnt_T_u08 = LOA_CNT_U08;
	}
	else
	{
		SelectedState_Cnt_T_u08 = OPER_CNT_U08;
	}
	/* ENDREQ: SF005A #52 I */	
	
	/* Select Rate source */	
	SelectedTqCmdSca_Uls_T_f32 = RateSource(SysOperMotTqCmdSca_Uls_T_f32,
	                                        LoaSca_Uls_T_f32,
										    VehStrtStopMotTqCmdSca_Uls_T_f32,
									 	    SelectedState_Cnt_T_u08);	
	/* Select Ramp Rate */
	SelectedRampRate_UlsPerSec_T_f32 = RateLimit(SysOperRampRate_UlsPerSec_T_f32,
	                                             LoaRateLim_UlsPerSec_T_f32,
						                         VehStrtStopRampRate_UlsPerSec_T_f32);	
	
	/*** End of Target Selection ***/

	/*** Start of Diag Override ***/
	/*
		If system is in a fault condition, the output from these functions is ignored to use scale factor & rate limit from Diag Mgr. 
		If Diag Mgr cancels the faulted condition, then this function will switch back to using the selected values from these functions;
		whatever those may happen to be at the instant the fault is cancelled. 
	*/	
	/* REQ: SF005A #50 I */
	/* REQ: SF005A #51 I */
	if ((SysStFltOutpReqDi_Cnt_T_lgc == TRUE) || (DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_lgc == TRUE))
	{
		ArbdTarSca_Uls_T_f32 = SysDiMotTqCmdSca_Uls_T_f32;
		ArbdRate_UlspS_T_f32 = SysDiRampRate_UlsPerSec_T_f32;
		ArbdSt_Cnt_T_u08     = DI_CNT_U08;
	}
	else
	{
		ArbdTarSca_Uls_T_f32 = SelectedTqCmdSca_Uls_T_f32;
		ArbdRate_UlspS_T_f32 = SelectedRampRate_UlsPerSec_T_f32;
		ArbdSt_Cnt_T_u08     = SelectedState_Cnt_T_u08;		
	}
	/* ENDREQ: SF005A #50 I */
	/* ENDREQ: SF005A #51 I */
	
	/*** End of Diag Override ***/

	/* Limit Ramp scale and Ramp rate */
	/* REQ: SF005A #68 I */	
	TarSca_Uls_T_f32 = Lim_f32(ArbdTarSca_Uls_T_f32,TARGETSCALELO_ULS_F32,TARGETSCALEHI_ULS_F32);
	
	/* Ramp rate over-riden by Ramp defeat */
	if (FALSE != SysMotTqCmdRampRateDi_Cnt_T_lgc)
	{
		/* REQ: SF005A #57 I */
		RateLimit_UlspS_T_f32 = BIGSLEW_ULSPERSEC_F32;
	}
	else
	{
		/* REQ: SF005A #69 I */	
		RateLimit_UlspS_T_f32 = Lim_f32(ArbdRate_UlspS_T_f32,RATELIMITLO_ULSPERSEC_F32,RATELIMITHI_ULSPERSEC_F32);
	}		

	/* Update display variables */
	*Rte_Pim_dStOutpCtrlTarSca()  = TarSca_Uls_T_f32;
	*Rte_Pim_dStOutpCtrlRateLim() = RateLimit_UlspS_T_f32;
	
	/*** Start of Apply Slew ***/

	/* REQ: SF005A #57 I */
	/* REQ: SF005A #58 I */
	StepLimit_Uls_T_f32 = RateLimit_UlspS_T_f32*ARCHGLBPRM_2MILLISEC_SEC_F32;			/* REQ: SF005A #67 I */	
	/* Limiting the output scale */
	Sca_Uls_T_f32 = Lim_f32(TarSca_Uls_T_f32, ((*Rte_Pim_StOutpCtrlPrevCmdSca()) - StepLimit_Uls_T_f32), ((*Rte_Pim_StOutpCtrlPrevCmdSca()) + StepLimit_Uls_T_f32));
	/* Update PIM Variable */
	*Rte_Pim_StOutpCtrlPrevCmdSca()  = Sca_Uls_T_f32;	
	
	OpRampMult_Uls_T_f32 = Sca_Uls_T_f32;
	/* ENDREQ: SF005A #57 I */
	/* ENDREQ: SF005A #58 I */
	/*** End of Apply Slew ***/

	/*** Start of System State Request ***/
	
	/* REQ: SF005A #60 I */	
	if ( Abslt_f32_f32(Sca_Uls_T_f32) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
	{
		RampComp_Cnt_T_lgc = FALSE;
	}
	else
	{
		RampComp_Cnt_T_lgc = TRUE;
	}
	
	if (DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_lgc == TRUE)
	{
		if ((MotTqTranlDampgCmpl_Cnt_T_lgc == TRUE) || (RampComp_Cnt_T_lgc == TRUE))
		{
			SysStReqDi_Cnt_T_lgc = TRUE;
		}
		else
		{
			SysStReqDi_Cnt_T_lgc = FALSE;
		}
	}
	else
	{
		if ((RampComp_Cnt_T_lgc == TRUE) && ((ArbdSt_Cnt_T_u08 == OPER_CNT_U08) || (ArbdSt_Cnt_T_u08 == LOA_CNT_U08) || (ArbdSt_Cnt_T_u08 == DI_CNT_U08)))
		{
			SysStReqDi_Cnt_T_lgc = TRUE;
		}
		else
		{
			SysStReqDi_Cnt_T_lgc = FALSE;
		}
	}
	/* ENDREQ: SF005A #60 I */	
	
	/*** End of System State Request ***/
	
	/* Write local copies to module outputs */
	/* REQ: SF005A #28 I */	
	 (void)Rte_Write_SysMotTqCmdSca_Val(OpRampMult_Uls_T_f32);
	/* REQ: SF005A #45 I */	 
	 (void)Rte_Write_SysStReqDi_Logl(SysStReqDi_Cnt_T_lgc);
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StOutpCtrl_STOP_SEC_CODE
#include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /******************************************************************************
  * Name:        RateSource
  * Description: Implements "Rate Source" model block in FDD -- selects scale factor from 
  *              input scales
  * Inputs:      SysOperMotTqCmdSca_Uls_T_f32 :- "OperSrc" scale
  *              LoaSca_Uls_T_f32 :- "LoaSrc" scale
  *              VehStrtStopMotTqCmdSca_Uls_T_f32 :- "StrtStopSrc" scale
  *              SelectedState_Cnt_T_u08 :- Current active state
  * Outputs:     SelectedTqCmdSca_Uls_T_f32 :- selects scale factor 
  * Usage Notes:  NONE
  ****************************************************************************/
static FUNC(float32, StOutpCtrl_CODE) RateSource(float32 SysOperMotTqCmdSca_Uls_T_f32, 
                                                 float32 LoaSca_Uls_T_f32, 
												 float32 VehStrtStopMotTqCmdSca_Uls_T_f32, 
												 uint8 SelectedState_Cnt_T_u08)
{	
	VAR(float32, AUTOMATIC) SelectedTqCmdSca_Uls_T_f32;											 
 	/* Rate Source */
	/* REQ: SF005A #54 I */
	/* REQ: SF005A #55 I */
	/* REQ: SF005A #61 I */
	switch(SelectedState_Cnt_T_u08)
	{
		case OPER_CNT_U08:
			SelectedTqCmdSca_Uls_T_f32 = SysOperMotTqCmdSca_Uls_T_f32;
			if(SysOperMotTqCmdSca_Uls_T_f32 <= (*Rte_Pim_StOutpCtrlPrevCmdSca()))
			{
				*Rte_Pim_StOutpCtrlPrevSrc() = OPER_CNT_U08;				
			}
		break;
		
		case LOA_CNT_U08:
			SelectedTqCmdSca_Uls_T_f32 = LoaSca_Uls_T_f32;
			if(LoaSca_Uls_T_f32 <= (*Rte_Pim_StOutpCtrlPrevCmdSca()))
			{
				*Rte_Pim_StOutpCtrlPrevSrc() = LOA_CNT_U08;
			}
		break;
		
		/* Default pertains to StrtStop */
		default: /* default clause required by MISRA Rule 15.3 -- placed here because it is not needed by the logic due to range of switch variable */
			SelectedTqCmdSca_Uls_T_f32 = VehStrtStopMotTqCmdSca_Uls_T_f32;
			if(VehStrtStopMotTqCmdSca_Uls_T_f32 <= (*Rte_Pim_StOutpCtrlPrevCmdSca()))
			{
				*Rte_Pim_StOutpCtrlPrevSrc() = STRTSTOP_CNT_U08;
			}
		break;
	}
	/* ENDREQ: SF005A #54 I */
	/* ENDREQ: SF005A #55 I */
	/* ENDREQ: SF005A #61 I */	
	
	return (SelectedTqCmdSca_Uls_T_f32);
}
 
 /******************************************************************************
  * Name:        RateLimit
  * Description: Implements "Rate Limit" model block in FDD -- selects ramp rate from 
  *              input rate limits
  * Inputs:      SysOperRampRate_UlspS_T_f32 :- "OperSrc" rate limit
  *              LoaRateLim_UlspS_T_f32 :- "LoaSrc" rate limit
  *              VehStrtStopRampRate_UlspS_T_f32 :- "StrtStopSrc" rate limit
  * Outputs:     SelRampRate_UlspS_T_f32 :- selected ramp rate 
  * Usage Notes:  NONE
  ****************************************************************************/
static FUNC(float32, StOutpCtrl_CODE) RateLimit( float32 SysOperRampRate_UlspS_T_f32,
	                                             float32 LoaRateLim_UlspS_T_f32,
												 float32 VehStrtStopRampRate_UlspS_T_f32)	
{ 
	VAR(float32, AUTOMATIC) SelRampRate_UlspS_T_f32;
	/* REQ: SF005A #53 I */
	/* Rate Limit */
	switch(*Rte_Pim_StOutpCtrlPrevSrc())
	{
		case OPER_CNT_U08:
			SelRampRate_UlspS_T_f32 = SysOperRampRate_UlspS_T_f32;
		break;
		
		case LOA_CNT_U08:
			SelRampRate_UlspS_T_f32 = LoaRateLim_UlspS_T_f32;
		break;
		/* Default pertains to StrtStop */
		default: /* default clause required by MISRA Rule 15.3 -- placed here because it is not needed by the logic due to range of switch variable */
			SelRampRate_UlspS_T_f32 = VehStrtStopRampRate_UlspS_T_f32;
		break;
	}
	/* ENDREQ: SF005A #53 I */
	
	return(SelRampRate_UlspS_T_f32);
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
