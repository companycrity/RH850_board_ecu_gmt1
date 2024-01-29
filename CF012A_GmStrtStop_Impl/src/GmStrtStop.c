/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmStrtStop.c
 *     SW-C Type:  GmStrtStop
 *  Generated at:  Mon Jun 27 10:51:39 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmStrtStop>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GmStrtStop.c
* Module Description: Implementation of GM Start Stop FDD CF012A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 5 %
* %derived_by       : mzjphh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 09/28/15  1        SV        Initial Version                                                                 EA4#1826   
* 02/04/16  2        NS        Timer logic changed per v1.1.0 of FDD                                           EA4#3690
* 03/30/16  3        NS        Changed initial value of StrtStopSca to 1 per anomaly EA4#3036                  EA4#4996    
* 06/27/16  4        NS        Updated for v1.3.0 of FDD                                                       EA4#6387    
* 07/08/16  5        NS        Fixes for unit test findings                                                    EA4#6514                      
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_GmStrtStop.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define NORMMOD_CNT_U08						    0U
#define MOD1_CNT_U08						    1U
#define STOPMOD_CNT_U08						    2U
#define MOD2_CNT_U08						    3U
#define FLTMOD_CNT_U08						    4U
#define DISMOD_CNT_U08						    5U
#define DISMODRATE_ULSPERSEC_F32			    0.0F
#define STRTSTOPSCALOWRLIM_ULS_F32			    0.0F
#define STRTSTOPSCAHILIM_ULS_F32			    1.0F
#define STRTSTOPRATELOWRLIM_ULSPERSEC_F32	    0.0F
#define STRTSTOPRATEHILIM_ULSPERSEC_F32		    5.0F
#define CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32   (0.1F)
#define FULLASSISCA_ULS_F32                           (1.0F)

static FUNC(float32, GMSTRTSTOP_CODE) DtrmnRateLim(uint8 ActSt_Cnt_T_u08, 
                                                   uint8 VehStrtStopSt_Cnt_T_u08);

static FUNC(void, GMSTRTSTOP_CODE) NormModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
                                                      float32 VehSpd_Kph_T_f32,
													  P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
													  P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32);

static FUNC(void, GMSTRTSTOP_CODE) Inter1ModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
														float32 VehSpd_Kph_T_f32,
														float32 HwVel_HwRadPerSec_T_f32,
														float32 HwTq_HwNwtMtr_T_f32,		
                                                        boolean ToStopModFlg_T_logl,
														P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
														P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32);

static FUNC(void, GMSTRTSTOP_CODE) StopModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
													  float32 VehSpd_Kph_T_f32,
								                      P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
								                      P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32);
													  
static FUNC(void, GMSTRTSTOP_CODE) Inter2ModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
														float32 VehSpd_Kph_T_f32,
														float32 HwVel_HwRadPerSec_T_f32,
														float32 HwTq_HwNwtMtr_T_f32,	
                                                        boolean ToStopModFlg_T_logl,
														P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
														P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32);	

static FUNC(boolean, GMSTRTSTOP_CODE) GetTmrElpsdThd(uint8 StrtStopStChk_Cnt_T_u08,
                                                     P2VAR(uint32, AUTOMATIC, GmStrtStop_VAR) RefTmr_Cnt_T_u32,
                                                     float32 ModTmrThd_MilliSec_T_f32);                                                 

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
 *   uint32 *Rte_Pim_Mod1RefTmr(void)
 *   uint32 *Rte_Pim_Mod2RefTmr(void)
 *   uint8 *Rte_Pim_PrevActSt(void)
 *   uint8 *Rte_Pim_PrevStrtStopSt(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmStrtStopFltRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1EngTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1Sca_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1ToStopRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod2Sca_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormModEngTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormToMod1RateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopAndMod2RateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1Tmr_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2Tmr_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopModSca_Val(void)
 *   boolean Rte_Prm_GmStrtStopEna_Logl(void)
 *
 *********************************************************************************************************************/


#define GmStrtStop_START_SEC_CODE
#include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmStrtStopInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, GmStrtStop_CODE) GmStrtStopInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmStrtStopInit1
 *********************************************************************************************************************/
   
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_Mod1RefTmr());
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_Mod2RefTmr());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmStrtStopPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EngSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_Msg0C9BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg0C9BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehStrtStopMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehStrtStopRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehStrtStopSt_Val(uint8 data)
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

FUNC(void, GmStrtStop_CODE) GmStrtStopPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmStrtStopPer1
 *********************************************************************************************************************/
	
	/* inputs */
	VAR(float32, AUTOMATIC) EngSpd_Rpm_T_f32;
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg0C9BusHiSpdMiss_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Msg0C9BusHiSpdInvld_Cnt_T_logl;
	
	/* outputs */
	VAR(float32, AUTOMATIC) VehStrtStopRampRate_UlsPerSec_T_f32;
	VAR(float32, AUTOMATIC) VehStrtStopMotTqCmdSca_Uls_T_f32 = 1.0F;
	VAR(uint8, AUTOMATIC)   VehStrtStopSt_Cnt_T_u08;	
	
	VAR(boolean, AUTOMATIC) FltModEna_Cnt_T_logl;
	VAR(uint8, AUTOMATIC)   ActSt_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) TranInter1ToStopMod_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) TranInter2ToStopMod_Cnt_T_logl;

	/* read inputs */
	(void)Rte_Read_EngSpd_Val(&EngSpd_Rpm_T_f32);   /* REQ: CF012A #37 I */
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);  /* REQ: CF012A #9 I */
	(void)Rte_Read_HwVel_Val(&HwVel_HwRadPerSec_T_f32); /* REQ: CF012A #32 I */
	(void)Rte_Read_Msg0C9BusHiSpdInvld_Logl(&Msg0C9BusHiSpdInvld_Cnt_T_logl);
	(void)Rte_Read_Msg0C9BusHiSpdMiss_Logl(&Msg0C9BusHiSpdMiss_Cnt_T_logl);
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);   /* REQ: CF012A #36 I */
	(void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);

    /*** Timer logic ***/
    /* StrtStopSt_Inter2ToStopModFlg */
    TranInter2ToStopMod_Cnt_T_logl = GetTmrElpsdThd(MOD2_CNT_U08,
                                                    Rte_Pim_Mod2RefTmr(),
                                                    Rte_Prm_GmStrtStopStopMod2Tmr_Val());
    
    /* StrtStopSt_Inter1ToStopModFlg */
    TranInter1ToStopMod_Cnt_T_logl = GetTmrElpsdThd(MOD1_CNT_U08,
                                                    Rte_Pim_Mod1RefTmr(),
                                                    Rte_Prm_GmStrtStopStopMod1Tmr_Val());
    /*** END timer logic ***/
    
    
    /* Determine fault mode enable before entering state flow */
	if((VehSpdVld_Cnt_T_logl == FALSE) || (Msg0C9BusHiSpdInvld_Cnt_T_logl == TRUE) || 
       (Msg0C9BusHiSpdMiss_Cnt_T_logl == TRUE))
	{
		FltModEna_Cnt_T_logl = TRUE;
	}
	else
	{
		FltModEna_Cnt_T_logl = FALSE;
	}
	
    /*** Start-Stop State Determination ***/
	if(Rte_Prm_GmStrtStopEna_Logl() == FALSE)
	{
		VehStrtStopSt_Cnt_T_u08 = DISMOD_CNT_U08;
		VehStrtStopMotTqCmdSca_Uls_T_f32 = FULLASSISCA_ULS_F32;
	}
	else
	{
		VehStrtStopSt_Cnt_T_u08 = *Rte_Pim_PrevStrtStopSt();
		
		if(FltModEna_Cnt_T_logl == TRUE)
		{
			VehStrtStopSt_Cnt_T_u08 = FLTMOD_CNT_U08;
			VehStrtStopMotTqCmdSca_Uls_T_f32 = FULLASSISCA_ULS_F32;
		}
				
		switch(VehStrtStopSt_Cnt_T_u08)
		{
			case(NORMMOD_CNT_U08):
			{
				NormModExitCdnsChk(EngSpd_Rpm_T_f32, 
				                   VehSpd_Kph_T_f32,
								   &VehStrtStopSt_Cnt_T_u08, 
								   &VehStrtStopMotTqCmdSca_Uls_T_f32);
			}	                   
			break;
			
			case(MOD1_CNT_U08):
			{			
				Inter1ModExitCdnsChk(EngSpd_Rpm_T_f32, 
				                     VehSpd_Kph_T_f32,
									 HwVel_HwRadPerSec_T_f32,
									 HwTq_HwNwtMtr_T_f32,
                                     TranInter1ToStopMod_Cnt_T_logl,
								     &VehStrtStopSt_Cnt_T_u08, 
								     &VehStrtStopMotTqCmdSca_Uls_T_f32);
			}
			break;
			
			case(STOPMOD_CNT_U08):
			{	
				StopModExitCdnsChk(EngSpd_Rpm_T_f32, 
				                   VehSpd_Kph_T_f32,
								   &VehStrtStopSt_Cnt_T_u08, 
								   &VehStrtStopMotTqCmdSca_Uls_T_f32);								   
			}	
			break;
			
			case(MOD2_CNT_U08):
			{		
				Inter2ModExitCdnsChk(EngSpd_Rpm_T_f32, 
				                     VehSpd_Kph_T_f32,
									 HwVel_HwRadPerSec_T_f32,
									 HwTq_HwNwtMtr_T_f32,	
                                     TranInter2ToStopMod_Cnt_T_logl,
								     &VehStrtStopSt_Cnt_T_u08, 
								     &VehStrtStopMotTqCmdSca_Uls_T_f32);			
			}			
			break;
			
			case(FLTMOD_CNT_U08):
            {
				if(FltModEna_Cnt_T_logl == FALSE)
				{
					VehStrtStopSt_Cnt_T_u08 = NORMMOD_CNT_U08;
					VehStrtStopMotTqCmdSca_Uls_T_f32 = FULLASSISCA_ULS_F32;
				}
            }
			break;
			
			default:
			break;	
		}
	}
    /*** END Start-Stop State Determination ***/

	if(VehStrtStopSt_Cnt_T_u08 != *Rte_Pim_PrevStrtStopSt())
	{
		ActSt_Cnt_T_u08 = *Rte_Pim_PrevStrtStopSt();
	}
	else
	{
		ActSt_Cnt_T_u08 = *Rte_Pim_PrevActSt();
	}
	
	*Rte_Pim_PrevActSt() = ActSt_Cnt_T_u08;
	
	*Rte_Pim_PrevStrtStopSt() = VehStrtStopSt_Cnt_T_u08;
	

	
	/* limit outputs */
	if(VehStrtStopSt_Cnt_T_u08 == DISMOD_CNT_U08)
	{
		VehStrtStopRampRate_UlsPerSec_T_f32 = DISMODRATE_ULSPERSEC_F32;
	}
	else
	{
		VehStrtStopRampRate_UlsPerSec_T_f32 = DtrmnRateLim(ActSt_Cnt_T_u08, VehStrtStopSt_Cnt_T_u08);			
	}
	
	VehStrtStopRampRate_UlsPerSec_T_f32 = Lim_f32(VehStrtStopRampRate_UlsPerSec_T_f32,
                                              STRTSTOPRATELOWRLIM_ULSPERSEC_F32,
                                              STRTSTOPRATEHILIM_ULSPERSEC_F32);
	
	VehStrtStopMotTqCmdSca_Uls_T_f32 = Lim_f32(VehStrtStopMotTqCmdSca_Uls_T_f32,
                                    STRTSTOPSCALOWRLIM_ULS_F32,
                                    STRTSTOPSCAHILIM_ULS_F32);
 	
	/* write outputs */
	(void)Rte_Write_VehStrtStopRampRate_Val(VehStrtStopRampRate_UlsPerSec_T_f32);   /* REQ: CF012A #40 I */
	(void)Rte_Write_VehStrtStopMotTqCmdSca_Val(VehStrtStopMotTqCmdSca_Uls_T_f32);   /* REQ: CF012A #11 I */
	(void)Rte_Write_VehStrtStopSt_Val(VehStrtStopSt_Cnt_T_u08);                     /* REQ: CF012A #216 I */
		
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmStrtStop_STOP_SEC_CODE
#include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/****************************************************************************************************
* Name          :   DtrmnRateLim
* Description   :   "Rate Limit Determination" functionality.                 
* Inputs        :   ActSt_Cnt_T_u08, VehStrtStopSt_Cnt_T_u08                 
* Outputs       :   VehStrtStopRampRate_UlsPerSec_T_f32
* Usage Notes   :
****************************************************************************************************/
static FUNC(float32, GMSTRTSTOP_CODE) DtrmnRateLim(uint8 ActSt_Cnt_T_u08, uint8 VehStrtStopSt_Cnt_T_u08)
{
	VAR(float32, AUTOMATIC) VehStrtStopRampRate_UlsPerSec_T_f32 = 0.0F;
	
	if(ActSt_Cnt_T_u08 == NORMMOD_CNT_U08)
	{
		VehStrtStopRampRate_UlsPerSec_T_f32 = (VehStrtStopSt_Cnt_T_u08 == MOD1_CNT_U08) ?
		                                   Rte_Prm_GmStrtStopNormToMod1RateLim_Val() :	/* Transfer from NormalMode to Intermediate1Mode */
										   Rte_Prm_GmStrtStopFltRateLim_Val();			/* Transfer from NormalMode to FaultMode */
	}
	else if(ActSt_Cnt_T_u08 == MOD1_CNT_U08)
	{
		if(VehStrtStopSt_Cnt_T_u08 == NORMMOD_CNT_U08)
		{
			/* Transfer from Intermediate1Mode to NormalMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopNormRateLim_Val();
		}
		else if(VehStrtStopSt_Cnt_T_u08 == STOPMOD_CNT_U08)
		{
			/* Transfer from Intermediate1Mode to StopMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopMod1ToStopRateLim_Val();
		}
		else
		{
			/* Transfer from Intermediate1Mode to FaultMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopFltRateLim_Val();
		}
	}	
	else if(ActSt_Cnt_T_u08 == STOPMOD_CNT_U08)
	{
		if(VehStrtStopSt_Cnt_T_u08 == MOD2_CNT_U08)
		{
			/* Transfer from StopMode to Intermediate2Mode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopStopAndMod2RateLim_Val();
		}
		else if(VehStrtStopSt_Cnt_T_u08 == NORMMOD_CNT_U08)
		{
			/* Transfer from StopMode to NormalMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopNormRateLim_Val();
		}
		else
		{
			/* Transfer from StopMode to FaultMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopFltRateLim_Val();
		}
	}
	else if(ActSt_Cnt_T_u08 == MOD2_CNT_U08)
	{
		if(VehStrtStopSt_Cnt_T_u08 == STOPMOD_CNT_U08)
		{
			/* Transfer from Intermediate2Mode to StopMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopStopAndMod2RateLim_Val();
		}
		else if(VehStrtStopSt_Cnt_T_u08 == NORMMOD_CNT_U08)
		{
			/* Transfer from Intermediate2Mode to NormalMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopNormRateLim_Val();
		}
		else
		{
			/* Transfer from Intermediate2Mode to FaultMode */
			VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopFltRateLim_Val();
		}
	}
	else if(ActSt_Cnt_T_u08 == FLTMOD_CNT_U08)
	{
		/* Transfer from FaultMode to NormalMode */
		VehStrtStopRampRate_UlsPerSec_T_f32 = Rte_Prm_GmStrtStopNormRateLim_Val();
	}
	else
	{			
	}
	
	return VehStrtStopRampRate_UlsPerSec_T_f32;
}
/****************************************************************************************************
* Name          :   NormModExitCdnsChk
* Description   :   This function validates conditions for all state transitions from 'Normal mode'. 
* Inputs        :   EngSpd_Rpm_T_f32, VehSpd_Kph_T_f32                 
* Outputs       :   *VehStrtStopSt_Cnt_T_u08,*VehStrtStopMotTqCmdSca_Uls_T_f32  
* Usage Notes   :
****************************************************************************************************/
static FUNC(void, GMSTRTSTOP_CODE) NormModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
                                                      float32 VehSpd_Kph_T_f32,
													  P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
													  P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32)
{
	if((EngSpd_Rpm_T_f32 <= Rte_Prm_GmStrtStopMod1EngTranThd_Val()) &&
	   (VehSpd_Kph_T_f32 <= Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val()))
	{
		*VehStrtStopSt_Cnt_T_u08 = MOD1_CNT_U08;
		*VehStrtStopMotTqCmdSca_Uls_T_f32 = Rte_Prm_GmStrtStopMod1Sca_Val();							
	}
	else
	{		
        /* Remain in normal mode and keep previous scale */
        *VehStrtStopMotTqCmdSca_Uls_T_f32 = FULLASSISCA_ULS_F32;
	}
}		
/****************************************************************************************************
* Name          :   Inter1ModExitCdnsChk
* Description   :   This function validates conditions for all state transitions from 'intermediate 1 mode'                 
* Inputs        :   EngSpd_Rpm_T_f32, 
*					VehSpd_Kph_T_f32, 
*					HwVel_HwRadPerSec_T_f32, 
*					HwTq_HwNwtMtr_T_f32,	
*                   ToStopModFlg_T_logl
* Outputs       :   *VehStrtStopSt_Cnt_T_u08,
*					*VehStrtStopMotTqCmdSca_Uls_T_f32
* Usage Notes   :
****************************************************************************************************/
static FUNC(void, GMSTRTSTOP_CODE) Inter1ModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
														float32 VehSpd_Kph_T_f32,
														float32 HwVel_HwRadPerSec_T_f32,
														float32 HwTq_HwNwtMtr_T_f32,	
                                                        boolean ToStopModFlg_T_logl,
														P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
														P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32)
{					
	if(EngSpd_Rpm_T_f32 > Rte_Prm_GmStrtStopNormModEngTranThd_Val())
	{
		*VehStrtStopSt_Cnt_T_u08 = NORMMOD_CNT_U08;
		*VehStrtStopMotTqCmdSca_Uls_T_f32 = FULLASSISCA_ULS_F32;
	}
	else if((VehSpd_Kph_T_f32 <= Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val()) &&
			(Abslt_f32_f32(HwVel_HwRadPerSec_T_f32) <= Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val()) &&
			(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32) <= Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val()) &&
            (ToStopModFlg_T_logl != FALSE))
	{
			*VehStrtStopSt_Cnt_T_u08 = STOPMOD_CNT_U08;
			*VehStrtStopMotTqCmdSca_Uls_T_f32 = Rte_Prm_GmStrtStopStopModSca_Val();
	}
	else
	{	
        /* Remain in intermediate 1 mode and keep previous scale */
        *VehStrtStopMotTqCmdSca_Uls_T_f32 = Rte_Prm_GmStrtStopMod1Sca_Val();
	}
}	
/****************************************************************************************************
* Name          :   StopModExitCdnsChk
* Description   :   This function validates conditions for all state transitions from 'Stop mode'              
* Inputs        :   EngSpd_Rpm_T_f32, VehSpd_Kph_T_f32                 
* Outputs       :   *VehStrtStopSt_Cnt_T_u08,
*					*VehStrtStopMotTqCmdSca_Uls_T_f32
* Usage Notes   :
****************************************************************************************************/
static FUNC(void, GMSTRTSTOP_CODE) StopModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
													  float32 VehSpd_Kph_T_f32,
								                      P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
								                      P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32)
{												  						   
	if(EngSpd_Rpm_T_f32 > Rte_Prm_GmStrtStopNormModEngTranThd_Val())
	{
		*VehStrtStopSt_Cnt_T_u08 = NORMMOD_CNT_U08;
		*VehStrtStopMotTqCmdSca_Uls_T_f32 = FULLASSISCA_ULS_F32;
	}
	else if(VehSpd_Kph_T_f32 > Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val())
	{
		*VehStrtStopSt_Cnt_T_u08 = MOD2_CNT_U08;
		*VehStrtStopMotTqCmdSca_Uls_T_f32 = Rte_Prm_GmStrtStopMod2Sca_Val();
	}				
	else
	{				
        /* Remain in stop mode and keep previous scale */
        *VehStrtStopMotTqCmdSca_Uls_T_f32 = Rte_Prm_GmStrtStopStopModSca_Val();
	}				
}
/****************************************************************************************************
* Name          :   Inter2ModExitCdnsChk
* Description   :   This function validates conditions for all state transitions from 'intermediate 2 mode'                 
* Inputs        :   EngSpd_Rpm_T_f32, 
*					VehSpd_Kph_T_f32, 
*					HwVel_HwRadPerSec_T_f32, 
*					HwTq_HwNwtMtr_T_f32,
*                   ToStopModFlg_T_logl		
* Outputs       :   VehStrtStopSt_Cnt_T_u08,
*					VehStrtStopMotTqCmdSca_Uls_T_f32
* Usage Notes   :
****************************************************************************************************/
static FUNC(void, GMSTRTSTOP_CODE) Inter2ModExitCdnsChk(float32 EngSpd_Rpm_T_f32, 
														float32 VehSpd_Kph_T_f32,
														float32 HwVel_HwRadPerSec_T_f32,
														float32 HwTq_HwNwtMtr_T_f32,
                                                        boolean ToStopModFlg_T_logl,
														P2VAR(uint8, AUTOMATIC, GmStrtStop_VAR) VehStrtStopSt_Cnt_T_u08, 
														P2VAR(float32, AUTOMATIC, GmStrtStop_VAR) VehStrtStopMotTqCmdSca_Uls_T_f32)
{									 	
	if((VehSpd_Kph_T_f32 >= Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val()) ||
	   (EngSpd_Rpm_T_f32 > Rte_Prm_GmStrtStopNormModEngTranThd_Val()))
	{
		*VehStrtStopSt_Cnt_T_u08 = NORMMOD_CNT_U08;
		*VehStrtStopMotTqCmdSca_Uls_T_f32 = FULLASSISCA_ULS_F32;
	}
	else if((VehSpd_Kph_T_f32 <= Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val()) &&
			(Abslt_f32_f32(HwVel_HwRadPerSec_T_f32) <= Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val()) &&
			(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32) <= Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val()) &&
            (ToStopModFlg_T_logl != FALSE))
	{				
		*VehStrtStopSt_Cnt_T_u08 = STOPMOD_CNT_U08;
		*VehStrtStopMotTqCmdSca_Uls_T_f32 = Rte_Prm_GmStrtStopStopModSca_Val();
	}				
	else
	{
        /* Remain in intermediate 2 mode and keep previous scale */
        *VehStrtStopMotTqCmdSca_Uls_T_f32 = Rte_Prm_GmStrtStopMod2Sca_Val();
	}
}

/****************************************************************************************************
* Name          :   GetTmrElpsdThd
* Description   :   This function determines whether exit conditions for states Mod1 and Mod2
*                   have been valid for a long enough period of time.                 
* Inputs        :   StrtStopStChk_Cnt_T_u08, 
*					*RefTmr_Cnt_T_u32,
*                   ModTmrThd_MilliSec_T_f32		
* Outputs       :   TmrElpsdThd_Cnt_T_logl
* Usage Notes   :
****************************************************************************************************/
static FUNC(boolean, GMSTRTSTOP_CODE) GetTmrElpsdThd(uint8 StrtStopStChk_Cnt_T_u08,
                                                     P2VAR(uint32, AUTOMATIC, GmStrtStop_VAR) RefTmr_Cnt_T_u32,
                                                     float32 ModTmrThd_MilliSec_T_f32)
{
    VAR(boolean, AUTOMATIC) TmrElpsdThd_Cnt_T_logl = FALSE;
    VAR(uint32, AUTOMATIC)  ModTiSpan_Cnt_T_u32;
    VAR(float32, AUTOMATIC) ModTiSpan_MilliSec_T_f32;
    
    if(*Rte_Pim_PrevStrtStopSt() == StrtStopStChk_Cnt_T_u08)
    {
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*RefTmr_Cnt_T_u32, &ModTiSpan_Cnt_T_u32);
        
        ModTiSpan_MilliSec_T_f32 = FixdToFloat_f32_u32(ModTiSpan_Cnt_T_u32,
                                                       NXTRFIXDPT_P0TOFLOAT_ULS_F32) * CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32;
        
        if(ModTiSpan_MilliSec_T_f32 >= ModTmrThd_MilliSec_T_f32)
        {
            TmrElpsdThd_Cnt_T_logl = TRUE;
        }
        else
        {
            TmrElpsdThd_Cnt_T_logl = FALSE;
        }
    }
    else
    {
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr_Cnt_T_u32);
    }
    
    return TmrElpsdThd_Cnt_T_logl;
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
