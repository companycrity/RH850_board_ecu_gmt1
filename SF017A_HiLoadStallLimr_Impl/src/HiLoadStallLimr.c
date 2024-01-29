/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HiLoadStallLimr.c
 *     SW-C Type:  HiLoadStallLimr
 *  Generated at:  Fri Aug 21 16:43:17 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HiLoadStallLimr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HiLoadStallLimr.c
* Module Description: Implementation of High load thermal management algorithm (FDD SF017A)
* Project           : CBD 
* Author            : Krishna Kanth Anne
************************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author     Change Description                                                             SCR #
* -------   -------  --------  ---------------------------------------------------------------------------    ---------
* 08/20/15  1        KK        	Initial Version                                                                EA4#664                                                                 
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
  u8p8
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_HiLoadStallLimr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "SysGlbPrm.h"


/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */ 

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmHiLoadStallLimrStallMotTqCmdLimX_u8p8	(*(const Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D())
#define PrmHiLoadStallLimrStallMotTqCmdLimY_u8p8	(*(const Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D())

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
 * u8p8: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_StallMotTqLimPrev(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqCmd(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqLim(void)
 *   FilLpRec1 *Rte_Pim_StallMotTqCmdFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val(void)
 *   float32 Rte_Prm_HiLoadStallLimrMotVelMgnThd_Val(void)
 *   float32 Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Val(void)
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D(void)
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D(void)
 *
 *********************************************************************************************************************/


#define HiLoadStallLimr_START_SEC_CODE
#include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HiLoadStallLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HiLoadStallLimrInit1
 *********************************************************************************************************************/
	FilLpInit( 0.0F, Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_StallMotTqCmdFil() );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HiLoadStallLimrPer1
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
 *   Std_ReturnType Rte_Read_MotTqCmdLimdPreStall_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLimDi_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_StallMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HiLoadStallLimrPer1
 *********************************************************************************************************************/


	VAR(float32, AUTOMATIC)	MotTqCmdLimdPreStall_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	MotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC)	StallMotTqCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	StallMotTqCmdFild_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	StallMotTqLim_MotNwtMtr_T_f32;
	
	VAR(uint16, AUTOMATIC)	StallMotTqCmdFil_MotNwtMtr_T_u8p8;
	
	VAR(boolean, AUTOMATIC)	StallMotTqLimDi_Cnt_T_lgc;
	
	
	/*** Read Intputs from RTE ***/
 	(void)Rte_Read_MotTqCmdLimdPreStall_Val(&MotTqCmdLimdPreStall_MotNwtMtr_T_f32);
	(void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
	(void)Rte_Read_StallMotTqLimDi_Logl(&StallMotTqLimDi_Cnt_T_lgc);
	
	if(TRUE == StallMotTqLimDi_Cnt_T_lgc)
		{
			
			/*** Write Ouptputs to RTE ***/
			(void)Rte_Write_StallMotTqLim_Val(SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
	
		}
	
	else
		{
			/*** Start of Determine Motor Torque ***/
			if( Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32) <= Rte_Prm_HiLoadStallLimrMotVelMgnThd_Val() )
				{
					StallMotTqCmd_MotNwtMtr_T_f32 = Lim_f32( MotTqCmdLimdPreStall_MotNwtMtr_T_f32, 0.0F, FixdToFloat_f32_u16(PrmHiLoadStallLimrStallMotTqCmdLimY_u8p8[0], NXTRFIXDPT_P8TOFLOAT_ULS_F32) );
				}
				
			else
				{
					StallMotTqCmd_MotNwtMtr_T_f32 = 0.0F;
				}
				
			*Rte_Pim_dHiLoadStallLimrStallMotTqCmd() = StallMotTqCmd_MotNwtMtr_T_f32;
			/*** End of Determine Motor Torque ***/
							
			/*** Start of Calculate StallMotTqLim ***/
			
			StallMotTqCmdFild_MotNwtMtr_T_f32 				= FilLpUpdOutp_f32(StallMotTqCmd_MotNwtMtr_T_f32, Rte_Pim_StallMotTqCmdFil() );
			
			*Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild() 	= StallMotTqCmdFild_MotNwtMtr_T_f32;
			
			StallMotTqCmdFil_MotNwtMtr_T_u8p8 				= FloatToFixd_u16_f32(StallMotTqCmdFild_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
			
			HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32	= FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmHiLoadStallLimrStallMotTqCmdLimX_u8p8,
																												 PrmHiLoadStallLimrStallMotTqCmdLimY_u8p8,
																												 (uint16)TblSize_m(PrmHiLoadStallLimrStallMotTqCmdLimX_u8p8),
																												 StallMotTqCmdFil_MotNwtMtr_T_u8p8),
																				  NXTRFIXDPT_P8TOFLOAT_ULS_F32);
			
			*Rte_Pim_dHiLoadStallLimrStallMotTqLim() 		= HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32;
			
			StallMotTqLim_MotNwtMtr_T_f32 					= Lim_f32( HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32, 
																	   ((-Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_StallMotTqLimPrev()), 
																	   (( Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_StallMotTqLimPrev()) );
			
			
			/*** Update respective PIM for using as prev value in next cycle ***/
			*Rte_Pim_StallMotTqLimPrev() 					= StallMotTqLim_MotNwtMtr_T_f32;
			
			/*** Write Ouptputs to RTE ***/
			(void)Rte_Write_StallMotTqLim_Val(StallMotTqLim_MotNwtMtr_T_f32);
			
			/*** End of Calculate StallMotTqLim ***/
		
		}
		
		
	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HiLoadStallLimr_STOP_SEC_CODE
#include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
