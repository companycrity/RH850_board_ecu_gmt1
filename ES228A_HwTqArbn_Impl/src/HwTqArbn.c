/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwTqArbn.c
 *     SW-C Type:  HwTqArbn
 *  Generated at:  Mon May 11 14:13:54 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwTqArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwTqArbn.c
* Module Description: Arbitration between multiple Torque sensors and calculation of handwheel torque.
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       jzk9cc %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 05/07/15   1       Rijvi     Initial Version                                                                EA4#431
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
  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_HwTqArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 #include "NxtrMath.h"
 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 


#define  CORRLNSTSMASKSIGA_CNT_U08		0x01u
#define  CORRLNSTSMASKSIGB_CNT_U08		0x02u
#define  CORRLNSTSMASKSIGC_CNT_U08		0x04u
#define  CORRLNSTSMASKSIGD_CNT_U08		0x08u
#define  MAXSTALLCNTR_CNT_U08           (255u)

#define  HWTQMAXLIM_HWNWTMTR_F32		((float32)Tq2_UpperLimit) 
#define  HWTQMINLIM_HWNWTMTR_F32		((float32)Tq2_LowerLimit)
#define  HWTQSCA_CNT_U08				(2u)


STATIC FUNC(boolean, HwTqArbn_CODE) SigAvlChkRev( VAR(uint8,    AUTOMATIC) SigRollgCntr_Cnt_T_u08, 
												  VAR(SigQlfr1, AUTOMATIC) SigQlfr_Cnt_T_enum,
												  VAR(uint8,    AUTOMATIC) kMaxStallCnt_Cnt_T_u08,
												  P2VAR(uint8, AUTOMATIC, AUTOMATIC) LstRollgCntr_Cnt_T_u08,
												  P2VAR(uint8, AUTOMATIC, AUTOMATIC) StallCntr_Cnt_T_u08
												  ); 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_HwTqArbnTqARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqBStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqCRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqCStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqDRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqArbnTqDStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwTqArbnChAAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnChBAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqA_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqB_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqC_Val(void)
 *   uint8 Rte_Prm_HwTqArbnMaxStallTqD_Val(void)
 *
 *********************************************************************************************************************/


#define HwTqArbn_START_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqArbnPer1
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
 *   Std_ReturnType Rte_Read_HwTqA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqChA_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqChB_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, HwTqArbn_CODE) HwTqArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqArbnPer1
 *********************************************************************************************************************/

	/* Temporary variables for module i/p (for Torque A) */ 	
	VAR(float32,  AUTOMATIC)  HwTqA_HwNwtMtr_T_f32;
	VAR(SigQlfr1, AUTOMATIC)  HwTqAQlfr_Cnt_T_enum;
	VAR(uint8,    AUTOMATIC)  HwTqARollgCntr_Cnt_T_u08;
	
	/* Temporary variables for module i/p (for Torque B) */ 
	VAR(float32,  AUTOMATIC)  HwTqB_HwNwtMtr_T_f32;
	VAR(SigQlfr1, AUTOMATIC)  HwTqBQlfr_Cnt_T_enum;
	VAR(uint8,    AUTOMATIC)  HwTqBRollgCntr_Cnt_T_u08;
	
	/* Temporary variables for module i/p (for Torque C) */ 
	VAR(float32,  AUTOMATIC)  HwTqC_HwNwtMtr_T_f32;
	VAR(SigQlfr1, AUTOMATIC)  HwTqCQlfr_Cnt_T_enum;
	VAR(uint8,    AUTOMATIC)  HwTqCRollgCntr_Cnt_T_u08;
	
	/* Temporary variables for module i/p (for Torque D) */ 
	VAR(float32,  AUTOMATIC)  HwTqD_HwNwtMtr_T_f32;
	VAR(SigQlfr1, AUTOMATIC)  HwTqDQlfr_Cnt_T_enum;
	VAR(uint8,    AUTOMATIC)  HwTqDRollgCntr_Cnt_T_u08;
	
	/* Temporary variable for module i/p (for Torque correlation status) */ 
	VAR(uint8,    AUTOMATIC)  HwTqCorrlnSts_Cnt_T_u08;
	
	/* Temporary variable (module internal) */
	VAR(boolean,  AUTOMATIC)  SigAAvl_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  SigBAvl_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  SigCAvl_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  SigDAvl_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  CorrlnStsSigA_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  CorrlnStsSigB_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  CorrlnStsSigC_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  CorrlnStsSigD_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  ChAAvl_Cnt_T_lgc;
	VAR(boolean,  AUTOMATIC)  ChBAvl_Cnt_T_lgc;
	
	/* Temporary variables for module o/p */
	VAR(float32,  AUTOMATIC)  HwTq_HwNwtMtr_T_f32;
	VAR(float32,  AUTOMATIC)  HwTqChA_HwNwtMtr_T_f32;
	VAR(float32,  AUTOMATIC)  HwTqChB_HwNwtMtr_T_f32;
	
	
	
	/* REQ: ES228A #85 I */
	
	/* Read Module inputs */
	(void) Rte_Read_HwTqA_Val( &HwTqA_HwNwtMtr_T_f32 );
    (void) Rte_Read_HwTqAQlfr_Val( &HwTqAQlfr_Cnt_T_enum );
    (void) Rte_Read_HwTqARollgCntr_Val( &HwTqARollgCntr_Cnt_T_u08 );
	
    (void) Rte_Read_HwTqB_Val( &HwTqB_HwNwtMtr_T_f32 );
    (void) Rte_Read_HwTqBQlfr_Val( &HwTqBQlfr_Cnt_T_enum );
    (void) Rte_Read_HwTqBRollgCntr_Val( &HwTqBRollgCntr_Cnt_T_u08 );
	
    (void) Rte_Read_HwTqC_Val( &HwTqC_HwNwtMtr_T_f32 );
    (void) Rte_Read_HwTqCQlfr_Val( &HwTqCQlfr_Cnt_T_enum );
    (void) Rte_Read_HwTqCRollgCntr_Val( &HwTqCRollgCntr_Cnt_T_u08 );
    
    (void) Rte_Read_HwTqD_Val( &HwTqD_HwNwtMtr_T_f32 );
    (void) Rte_Read_HwTqDQlfr_Val( &HwTqDQlfr_Cnt_T_enum );
	(void) Rte_Read_HwTqDRollgCntr_Val( &HwTqDRollgCntr_Cnt_T_u08 );
	
	(void) Rte_Read_HwTqCorrlnSts_Val( &HwTqCorrlnSts_Cnt_T_u08 );
	
  

  
  
	/*** ------------------- START: Extract Correlation Fault Status Bits --------------------- ***/
	/* REQ: ES228A #129 I */
	CorrlnStsSigA_Cnt_T_lgc = FALSE;
	CorrlnStsSigB_Cnt_T_lgc = FALSE;
	CorrlnStsSigC_Cnt_T_lgc = FALSE;
	CorrlnStsSigD_Cnt_T_lgc = FALSE;
	if( (HwTqCorrlnSts_Cnt_T_u08 & CORRLNSTSMASKSIGA_CNT_U08) != 0u )
	{
		CorrlnStsSigA_Cnt_T_lgc = TRUE;
	}
	if( (HwTqCorrlnSts_Cnt_T_u08 & CORRLNSTSMASKSIGB_CNT_U08) != 0u )
	{
		CorrlnStsSigB_Cnt_T_lgc = TRUE;
	}
	if( (HwTqCorrlnSts_Cnt_T_u08 & CORRLNSTSMASKSIGC_CNT_U08) != 0u )
	{
		CorrlnStsSigC_Cnt_T_lgc = TRUE;
	}
	if( (HwTqCorrlnSts_Cnt_T_u08 & CORRLNSTSMASKSIGD_CNT_U08) != 0u )
	{
		CorrlnStsSigD_Cnt_T_lgc = TRUE;
	}
	/* ENDREQ: ES228A #129 */ 
	/*** ------------------- END: Extract Correlation Fault Status Bits ----------------------- ***/
	

	/*** ----- Signal Availability check for HwTorque signal A ----- ***/
	/* REQ: ES228A #91 I */
	SigAAvl_Cnt_T_lgc = SigAvlChkRev( HwTqARollgCntr_Cnt_T_u08, 
									  HwTqAQlfr_Cnt_T_enum,
									  Rte_Prm_HwTqArbnMaxStallTqA_Val(),
									  Rte_Pim_HwTqArbnTqARollgCntrPrev(),
									  Rte_Pim_HwTqArbnTqAStallCntrPrev() ); 
									  
	/*** ----- Signal Availability check for HwTorque signal B ----- ***/
	/* REQ: ES228A #91 I */
	SigBAvl_Cnt_T_lgc = SigAvlChkRev( HwTqBRollgCntr_Cnt_T_u08, 
									  HwTqBQlfr_Cnt_T_enum,
									  Rte_Prm_HwTqArbnMaxStallTqB_Val(),
									  Rte_Pim_HwTqArbnTqBRollgCntrPrev(),
									  Rte_Pim_HwTqArbnTqBStallCntrPrev() ); 
	
	/*** ----- Signal Availability check for HwTorque signal C ----- ***/
	/* REQ: ES228A #91 I */
	SigCAvl_Cnt_T_lgc = SigAvlChkRev( HwTqCRollgCntr_Cnt_T_u08, 
									  HwTqCQlfr_Cnt_T_enum,
									  Rte_Prm_HwTqArbnMaxStallTqC_Val(),
									  Rte_Pim_HwTqArbnTqCRollgCntrPrev(),
									  Rte_Pim_HwTqArbnTqCStallCntrPrev() ); 
	
	/*** ----- Signal Availability check for HwTorque signal D ----- ***/
	/* REQ: ES228A #91 I */
	SigDAvl_Cnt_T_lgc = SigAvlChkRev( HwTqDRollgCntr_Cnt_T_u08, 
									  HwTqDQlfr_Cnt_T_enum,
									  Rte_Prm_HwTqArbnMaxStallTqD_Val(),
									  Rte_Pim_HwTqArbnTqDRollgCntrPrev(),
									  Rte_Pim_HwTqArbnTqDStallCntrPrev() ); 
    
    
	/*** --------------- START: Channel Availability ---------------- ***/
	/* REQ: ES228A #129 I */  /* REQ: ES228A #91 I */
	ChAAvl_Cnt_T_lgc = FALSE;
	ChBAvl_Cnt_T_lgc = FALSE;
	if( (CorrlnStsSigA_Cnt_T_lgc == TRUE) && (SigAAvl_Cnt_T_lgc == TRUE) && (CorrlnStsSigB_Cnt_T_lgc == TRUE) && (SigBAvl_Cnt_T_lgc == TRUE) )
	{
		ChAAvl_Cnt_T_lgc = TRUE;
	}
	if( (CorrlnStsSigC_Cnt_T_lgc == TRUE) && (SigCAvl_Cnt_T_lgc == TRUE) && (CorrlnStsSigD_Cnt_T_lgc == TRUE) && (SigDAvl_Cnt_T_lgc == TRUE) )
	{
		ChBAvl_Cnt_T_lgc = TRUE;
	}
	/* ENDREQ: ES228A #129 */  /* ENDREQ: ES228A #91 */
	
	*(Rte_Pim_dHwTqArbnChAAvl()) = ChAAvl_Cnt_T_lgc;
    *(Rte_Pim_dHwTqArbnChBAvl()) = ChBAvl_Cnt_T_lgc;
	/*** --------------- END: Channel Availability ------------------ ***/
	
	
	/*** ---------------------- START: Arbitration ----------------------- ***/
	/* REQ: ES228A #128 I */  /* REQ: ES228A #98 I */  /* REQ: ES228A #83 I */
	if( (ChAAvl_Cnt_T_lgc == TRUE) && (ChBAvl_Cnt_T_lgc == TRUE) )
	{
		HwTqChA_HwNwtMtr_T_f32 = (HwTqA_HwNwtMtr_T_f32 + HwTqB_HwNwtMtr_T_f32) / (float32)HWTQSCA_CNT_U08; /* REQ: ES228A #16 I */
		HwTqChB_HwNwtMtr_T_f32 = (HwTqC_HwNwtMtr_T_f32 + HwTqD_HwNwtMtr_T_f32) / (float32)HWTQSCA_CNT_U08; /* REQ: ES228A #82 I */
		HwTq_HwNwtMtr_T_f32    = (HwTqChA_HwNwtMtr_T_f32 + HwTqChB_HwNwtMtr_T_f32)/2.0f;
		
		/* Limit the module o/p */
		HwTq_HwNwtMtr_T_f32    = Lim_f32( HwTq_HwNwtMtr_T_f32,    HWTQMINLIM_HWNWTMTR_F32, HWTQMAXLIM_HWNWTMTR_F32 );
		HwTqChA_HwNwtMtr_T_f32 = Lim_f32( HwTqChA_HwNwtMtr_T_f32, HWTQMINLIM_HWNWTMTR_F32, HWTQMAXLIM_HWNWTMTR_F32 );
		HwTqChB_HwNwtMtr_T_f32 = Lim_f32( HwTqChB_HwNwtMtr_T_f32, HWTQMINLIM_HWNWTMTR_F32, HWTQMAXLIM_HWNWTMTR_F32 );
		
		/* Write Module outputs */
		(void) Rte_Write_HwTq_Val( HwTq_HwNwtMtr_T_f32 );
		(void) Rte_Write_HwTqChA_Val( HwTqChA_HwNwtMtr_T_f32 );
		(void) Rte_Write_HwTqChB_Val( HwTqChB_HwNwtMtr_T_f32 );
	}
	else if( ChAAvl_Cnt_T_lgc == TRUE )
	{
		HwTqChA_HwNwtMtr_T_f32 = (HwTqA_HwNwtMtr_T_f32 + HwTqB_HwNwtMtr_T_f32) / (float32)HWTQSCA_CNT_U08; /* REQ: ES228A #16 I */
		HwTq_HwNwtMtr_T_f32    = HwTqChA_HwNwtMtr_T_f32;
		
		/* Limit the module o/p */
		HwTq_HwNwtMtr_T_f32    = Lim_f32( HwTq_HwNwtMtr_T_f32,    HWTQMINLIM_HWNWTMTR_F32, HWTQMAXLIM_HWNWTMTR_F32 );
		HwTqChA_HwNwtMtr_T_f32 = Lim_f32( HwTqChA_HwNwtMtr_T_f32, HWTQMINLIM_HWNWTMTR_F32, HWTQMAXLIM_HWNWTMTR_F32 );
		
		/* Write Module outputs */
		(void) Rte_Write_HwTq_Val( HwTq_HwNwtMtr_T_f32 );
		(void) Rte_Write_HwTqChA_Val( HwTqChA_HwNwtMtr_T_f32 );
	}
	else if( ChBAvl_Cnt_T_lgc == TRUE)
	{
		HwTqChB_HwNwtMtr_T_f32 = (HwTqC_HwNwtMtr_T_f32 + HwTqD_HwNwtMtr_T_f32) / (float32)HWTQSCA_CNT_U08; /* REQ: ES228A #82 I */
		HwTq_HwNwtMtr_T_f32    = HwTqChB_HwNwtMtr_T_f32;
		
		/* Limit the module o/p */
		HwTq_HwNwtMtr_T_f32    = Lim_f32( HwTq_HwNwtMtr_T_f32,    HWTQMINLIM_HWNWTMTR_F32, HWTQMAXLIM_HWNWTMTR_F32 );
		HwTqChB_HwNwtMtr_T_f32 = Lim_f32( HwTqChB_HwNwtMtr_T_f32, HWTQMINLIM_HWNWTMTR_F32, HWTQMAXLIM_HWNWTMTR_F32 );
		
		/* Write Module outputs */
		(void) Rte_Write_HwTq_Val( HwTq_HwNwtMtr_T_f32 );
		(void) Rte_Write_HwTqChB_Val( HwTqChB_HwNwtMtr_T_f32 );
	}
	else
	{
		/* Do nothing per FDD. */
	}
	/* ENDREQ: ES228A #83 */  /* ENDREQ: ES228A #128 */  /* ENDREQ: ES228A #98 */
	/*** ---------------------- END: Arbitration ------------------------- ***/
	
	/* ENDREQ: ES228A #85 */ 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwTqArbn_STOP_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define HwTqArbn_START_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

 
/**********************************************************************************************************************
* Name:        		SigAvlChkRev
* Description: 		Check availability of the signal based on 'RollingCounter', 'StallCounter' and 'SignalQualifier'.
* Inputs:      		SigRollgCntr_Cnt_T_u08       - Signal rolling counter
*              		SigQlfr_Cnt_T_enum		     - Signal qualifier	
*              		kMaxStallCnt_Cnt_T_u08	     - Max stall counter for the signal
* Inputs/Outputs:	*LstRollgCntr_Cnt_T_u08	     - Last rolling counter
*    				*StallCntr_Cnt_T_u08		 - Stall counter
* Outputs:          SigAvl_Cnt_T_lgc   			 - Returns 'TRUE' when signal is available and 'FALSE' when not available.
* Usage Notes: 		None
**********************************************************************************************************************/
STATIC FUNC(boolean, HwTqArbn_CODE) SigAvlChkRev( VAR(uint8,    AUTOMATIC) SigRollgCntr_Cnt_T_u08, 
												  VAR(SigQlfr1, AUTOMATIC) SigQlfr_Cnt_T_enum,
												  VAR(uint8,    AUTOMATIC) kMaxStallCnt_Cnt_T_u08,
												  P2VAR(uint8, AUTOMATIC, AUTOMATIC) LstRollgCntr_Cnt_T_u08,
												  P2VAR(uint8, AUTOMATIC, AUTOMATIC) StallCntr_Cnt_T_u08
												  )
{

	/* Temporary variable */
	VAR(boolean,  AUTOMATIC)  SigAvl_Cnt_T_lgc;
	
	/* REQ: ES228A #91 I */
	
	if( SigRollgCntr_Cnt_T_u08 == (*LstRollgCntr_Cnt_T_u08) )
	{
		if( (*StallCntr_Cnt_T_u08) < MAXSTALLCNTR_CNT_U08 )
		{
			(*StallCntr_Cnt_T_u08) = (*StallCntr_Cnt_T_u08) + 1u;
		}
	}
	else
	{
		(*StallCntr_Cnt_T_u08) = 0u;
	}
	
	(*LstRollgCntr_Cnt_T_u08) = SigRollgCntr_Cnt_T_u08;
	
	
	if( (*StallCntr_Cnt_T_u08) >= kMaxStallCnt_Cnt_T_u08 )
	{
		SigAvl_Cnt_T_lgc = FALSE;
	}
	else
	{
		if( SigQlfr_Cnt_T_enum < SIGQLFR_FAILD )
		{
			SigAvl_Cnt_T_lgc = TRUE;
		}
		else
		{
			SigAvl_Cnt_T_lgc = FALSE;
		}
	}
	
	
	return SigAvl_Cnt_T_lgc;
	
	/* ENDREQ: ES228A #91 */
												  
}

 
 
#define HwTqArbn_STOP_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
