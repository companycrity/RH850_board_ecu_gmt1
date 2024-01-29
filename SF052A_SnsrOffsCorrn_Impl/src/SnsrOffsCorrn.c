/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SnsrOffsCorrn.c
 *     SW-C Type:  SnsrOffsCorrn
 *  Generated at:  Mon Jan 25 08:48:58 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SnsrOffsCorrn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : SnsrOffsCorrn.c
* Module Description: Implements the SF052A_SnsrOffsCorrn_Design_1.0.0 FDD. 
					  SnsrOffsCorrn corrects the Yaw rate, Hand wheel Position and Hand wheel Torque signals using 
					  their corresponding offset learnt values.  Each offset value is learnt by the SF051A Sensor Offset
					  Learning.
* Project           : CBD 
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version          : 1%
* %derived_by       : fz9hxm%
*----------------------------------------------------------------------------------------------------------------------
* Date    	     Rev   	  Author         Change Description                                                    SCR #
* -------------- -------  --------  --------------------------------------------------------------------   ----------
* 01/27/16    	 1        AJM   	Initial implementation  of SF052A                              		   EA4#3129                                                           
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_SnsrOffsCorrn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "ElecGlbPrm.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value 
Rte_Read() Rte_Write()*/ 

#define HWAGHILIM_HWDEG_F32								 1440.0F
#define HWAGLOLIM_HWDEG_F32								(-1440.0F)
#define VEHYAWRATEHILIM_VEHDEGPERSEC_F32				  120.0F
#define VEHYAWRATELOLIM_VEHDEGPERSEC_F32				 (-120.0F)
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val(void)
 *   boolean Rte_Prm_SnsrOffsCorrnOffsEna_Logl(void)
 *
 *********************************************************************************************************************/


#define SnsrOffsCorrn_START_SEC_CODE
#include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsCorrnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsCorrnInit1
 *********************************************************************************************************************/
/* Empty function to meet initialization guidelines */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsCorrnPer1
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
 *   Std_ReturnType Rte_Read_HwAgOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRateOffs_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehYawRateCorrd_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SnsrOffsCorrnPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwAgOffs_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HwTqOffs_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) VehYawRate_VehDegPerSec_T_f32;
	VAR(float32, AUTOMATIC) VehYawRateOffs_VehDegPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwAgCorrd_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwTqCorrd_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) VehYawRateCorrd_VehDegPerSec_T_f32;

	/* Read Inputs from RTE */
	(void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);								/* REQ: SF052A #11 I */
	(void)Rte_Read_HwAgOffs_Val(&HwAgOffs_HwDeg_T_f32);						/* REQ: SF052A #14 I */
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);							/* REQ: SF052A #10 I */
	(void)Rte_Read_HwTqOffs_Val(&HwTqOffs_HwNwtMtr_T_f32);					/* REQ: SF052A #13 I */
	(void)Rte_Read_VehYawRate_Val(&VehYawRate_VehDegPerSec_T_f32);			/* REQ: SF052A #12 I */
	(void)Rte_Read_VehYawRateOffs_Val(&VehYawRateOffs_VehDegPerSec_T_f32);	/* REQ: SF052A #15 I */
	
	if(TRUE == Rte_Prm_SnsrOffsCorrnOffsEna_Logl())		/* REQ: SF052A #59 I */
	{
		/* Apply Offset */
		HwTqOffs_HwNwtMtr_T_f32 = Lim_f32(HwTqOffs_HwNwtMtr_T_f32,-Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val(),Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val()); 	/* REQ: SF052A #28 I */ /*REQ: SF052A #59 I */
		HwAgOffs_HwDeg_T_f32 = Lim_f32(HwAgOffs_HwDeg_T_f32,-Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val(),Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val());		/* REQ: SF052A #29 I */ /* REQ: SF052A #59 I */
		VehYawRateOffs_VehDegPerSec_T_f32 = Lim_f32(VehYawRateOffs_VehDegPerSec_T_f32,-Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val(),Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val());	/* REQ: SF052A #30 I */ /* REQ: SF052A #59 I */
		
		HwAgCorrd_HwDeg_T_f32 = HwAg_HwDeg_T_f32 -	HwAgOffs_HwDeg_T_f32;	/* REQ: SF052A #31 I */
		HwTqCorrd_HwNwtMtr_T_f32 = HwTq_HwNwtMtr_T_f32 - HwTqOffs_HwNwtMtr_T_f32;	/* REQ: SF052A #32 I */
		VehYawRateCorrd_VehDegPerSec_T_f32 = VehYawRate_VehDegPerSec_T_f32 - VehYawRateOffs_VehDegPerSec_T_f32;	/* REQ: SF052A #33 I */
	}
	else
	{
		/* No Offset */
		HwAgCorrd_HwDeg_T_f32 = HwAg_HwDeg_T_f32;
		HwTqCorrd_HwNwtMtr_T_f32 = HwTq_HwNwtMtr_T_f32;
		VehYawRateCorrd_VehDegPerSec_T_f32 = VehYawRate_VehDegPerSec_T_f32;
	}
	
	HwAgCorrd_HwDeg_T_f32 = Lim_f32(HwAgCorrd_HwDeg_T_f32,HWAGLOLIM_HWDEG_F32,HWAGHILIM_HWDEG_F32);
	HwTqCorrd_HwNwtMtr_T_f32 = Lim_f32(HwTqCorrd_HwNwtMtr_T_f32,ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32,ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32);
	VehYawRateCorrd_VehDegPerSec_T_f32 = Lim_f32(VehYawRateCorrd_VehDegPerSec_T_f32,VEHYAWRATELOLIM_VEHDEGPERSEC_F32,VEHYAWRATEHILIM_VEHDEGPERSEC_F32);
	
	/*Write Outputs to RTE */
	(void)Rte_Write_HwAgCorrd_Val(HwAgCorrd_HwDeg_T_f32);						/* REQ: SF052A #18 I */
	(void)Rte_Write_HwTqCorrd_Val(HwTqCorrd_HwNwtMtr_T_f32);					/* REQ: SF052A #17 I */
	(void)Rte_Write_VehYawRateCorrd_Val(VehYawRateCorrd_VehDegPerSec_T_f32);	/* REQ: SF052A #19 I */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define SnsrOffsCorrn_STOP_SEC_CODE
#include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
