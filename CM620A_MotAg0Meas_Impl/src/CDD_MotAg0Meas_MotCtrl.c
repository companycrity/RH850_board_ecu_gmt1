/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg0Meas_MotCtrl.c
* Module Description: Motor Control Loop runnable(s) for Measurement function of Motor Angle 0.  
*                     This function includes configuration and use of the CSIH1 peripheral.
* Project           : CBD   
* Author            : Rijvi Ahmed
*****************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/19/15	1   	 Rijvi	     Initial version							                                   EA4#541
* 09/10/15  2        Rijvi       Anomaly EA4#1233 fix. Design rev. 2.3.0       		                           EA4#1404  
* 09/24/15  3        Rijvi       Add fault injections. Design rev. 2.4.0       		                           EA4#1405 
* 10/04/15  4        Rijvi       Implement design rev. 3.0.0     											   EA4#1748  
* 01/04/16  5        Selva       Implement design rev. 3.4.0     											   EA4#3208
* 12/06/16	6		 ML			 Fix for Anomaly EA4#8735. Design Update rev. 3.6.0					  EA4#8785/EA4#8826
******************************************************************************/

#include "Rte_CDD_MotAg0Meas.h"  
#include "CDD_MotAg0Meas_private.h" 
#include "CDD_MotAg0Meas.h"      
#include "CDD_MotCtrlMgr_Data.h"
#include "CDD_NxtrTi.h"  
#include "FltInj.h"
#include "NxtrMath.h"


/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */


 
#define  MOTAGDELTAPERCORRNPT_CNT_U16		((uint16)512U)  
#define  SNSRAGMASK_CNT_U32 				((uint32)8191U)  
#define  SNSRVLTGFLTMASK_CNT_U32 			((uint32)8192U)  
#define  MOTAGIDXMASK_CNT_U16  				((uint16)65024U) 


#define  ARYIDXRAWERRREG_CNT_U08           	((uint8)0U)           
#define  ARYIDXRAWTURNCNTRREG_CNT_U08      	((uint8)1U)
#define  ARYIDXRAWAGREG_CNT_U08            	((uint8)2U)
#define  SIXTEENBITMAXVAL_CNT_U16           ((uint16)65535U)  
#define  MOTAGRAWRESHILIM_CNT_U32           ((uint32)67108863U)    /* 0x03FFFFFFU */




#define CDD_MotAg0Meas_MotCtrl_START_SEC_CODE
#include "CDD_MotAg0Meas_MotCtrl_MemMap.h" 

/******************************************************************************
  * Name:        MotAg0MeasPer1
  * Description: MotAg0Meas component periodic processing in the motor control loop
  * Inputs:      see component's DataDict.m file     
  * Outputs:     see component's DataDict.m file 
  * Usage Notes: Called at Motor Control loop rate 
  ****************************************************************************/
FUNC (void, CDD_MotAg0Meas_CODE) MotAg0MeasPer1 (void)
{
	
	/* Temporary variables */
	VAR(uint32, AUTOMATIC)  MotAg0Reg_Cnt_T_u32;
	VAR(uint8,  AUTOMATIC)  MotAg0VltgFlt_Cnt_T_u08;
	VAR(uint8,  AUTOMATIC)  MotAg0ParFlt_Cnt_T_u08;
	VAR(u0p16, AUTOMATIC)   MotAg0RawMecl_Cnt_T_u0p16;
	VAR(uint16, AUTOMATIC)  MotAg0Corrd_Cnt_T_u0p16;
	VAR(uint16, AUTOMATIC)  MotCtrlMotAg0Mecl_MotRev_T_u0p16;
	VAR(sint8,  AUTOMATIC)  MotAg0CorrnA_MotRev_T_sm5p12;
	VAR(sint8,  AUTOMATIC)  MotAg0CorrnB_MotRev_T_sm5p12;
	VAR(sint32, AUTOMATIC)  MotAg0CorrnA_MotRev_T_s19p12;
	VAR(sint32, AUTOMATIC)  MotAg0CorrnB_MotRev_T_s19p12;
	VAR(uint16, AUTOMATIC)  MotAg0Gain_Uls_T_u12p4;
	VAR(sint32, AUTOMATIC)  MotAg0CorrnTerm_Cnt_T_s15p16;
	
	
	/* Write module o/p */
	GetRefTmr1MicroSec32bit_Oper( &MOTCTRLMGR_MotCtrlMotAgMeasTi ); /* REQ: CM620A #67 I */
	
	/* REQ: CM620A #48 I */
	/* Read module i/p */
	MotAg0Reg_Cnt_T_u32 = MOTCTRLMGR_MotCtrlMotAg0RawRes[ARYIDXRAWAGREG_CNT_U08];
	
	/* Update the display variables */
	*(Rte_Pim_dMotAg0MeasMotAg0RawErrReg()) = MOTCTRLMGR_MotCtrlMotAg0RawRes[ARYIDXRAWERRREG_CNT_U08];
	*(Rte_Pim_dMotAg0MeasMotAg0RawTurnCntrReg()) = MOTCTRLMGR_MotCtrlMotAg0RawRes[ARYIDXRAWTURNCNTRREG_CNT_U08];
	*(Rte_Pim_dMotAg0MeasMotAg0RawAgReg()) = MOTCTRLMGR_MotCtrlMotAg0RawRes[ARYIDXRAWAGREG_CNT_U08];
	/* ENDREQ: CM620A #48 */
	
	/* Limit and Write module o/p */
	MOTCTRLMGR_MotCtrlMotAg0ErrReg = Lim_u32( MOTCTRLMGR_MotCtrlMotAg0RawRes[ARYIDXRAWERRREG_CNT_U08],
											  0U, MOTAGRAWRESHILIM_CNT_U32); 
	
	
	
	/* REQ: CM620A #84 I */
	/* REQ: CM620A #86 I */
	/* REQ: CM620A #93 I */
	/* REQ: CM620A #95 I */
	/* REQ: CM620A #87 I */
	/* REQ: CM620A #88 I */
	/* REQ: CM620A #107 I */
	/***** -------------------- START: Process MotAg0 Angle --------------------- *****/
	if( (MotAg0Reg_Cnt_T_u32 & SNSRVLTGFLTMASK_CNT_U32) != 0u )
	{
		MotAg0VltgFlt_Cnt_T_u08 = 1u;
		
		*(Rte_Pim_MotAg0VltgFltCntPrev()) = *(Rte_Pim_MotAg0VltgFltCntPrev()) + 1U;
		
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg0VltgFltCnt = *(Rte_Pim_MotAg0VltgFltCntPrev());
	}
	else
	{
		MotAg0VltgFlt_Cnt_T_u08 = 0u;
	}
	
	if( (MotAg0Reg_Cnt_T_u32  == 0u) || ((MotAg0Reg_Cnt_T_u32 & SPIPARMASK_CNT_U32) != 0u) )
	{
		MotAg0ParFlt_Cnt_T_u08 = 1u;
		
	}
	else
	{
		MotAg0ParFlt_Cnt_T_u08 = 0u;
	}
	
	#if (FLTINJENA == STD_ON)	 
		(void) FltInj_u08_Oper( &MotAg0ParFlt_Cnt_T_u08, FLTINJ_MOTAG0MEAS_TESTOK ); /* REQ: CM620A #111 I */
	#endif
	
	if (MotAg0ParFlt_Cnt_T_u08 != 0u)
	{
		*(Rte_Pim_MotAg0ParFltCntPrev()) = *(Rte_Pim_MotAg0ParFltCntPrev()) + 1U;	
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg0ParFltCnt = *(Rte_Pim_MotAg0ParFltCntPrev());
	}
	
	
	if( (MotAg0VltgFlt_Cnt_T_u08 + MotAg0ParFlt_Cnt_T_u08) == 0u )
	{	/* No fault is present */
		
		/* Update the MotAg0RawMecl */
		MotAg0RawMecl_Cnt_T_u0p16 = (uint16)((MotAg0Reg_Cnt_T_u32 & SNSRAGMASK_CNT_U32) << 3u);
		*(Rte_Pim_MotAg0RawMeclPrev()) = MotAg0RawMecl_Cnt_T_u0p16;
		
		/* Update MotAg0MeclRollgCntr */
		*(Rte_Pim_MotAg0MeclRollgCntrPrev()) = *(Rte_Pim_MotAg0MeclRollgCntrPrev()) + 1u;
		
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg0MeclRollgCntr = *(Rte_Pim_MotAg0MeclRollgCntrPrev());
	}
	else
	{	/* Fault is present */
		
		/* Do not update the MotAg0RawMecl. Use the previous MotAg0RawMecl */
		MotAg0RawMecl_Cnt_T_u0p16 = *(Rte_Pim_MotAg0RawMeclPrev());
		
		/* Do not update MotAg0MeclRollgCntr */
	}
	/***** -------------------- END  : Process MotAg0 Angle --------------------- *****/
	/* ENDREQ: CM620A #84 */ 
	/* ENDREQ: CM620A #86 */ 
	/* ENDREQ: CM620A #93 */ 
	/* ENDREQ: CM620A #95 */ 
	/* ENDREQ: CM620A #87 */ 
	/* ENDREQ: CM620A #88 */ 
	/* ENDREQ: CM620A #107 */ 
	
	
	
	/* REQ: CM620A #89 I */
	/* REQ: CM620A #90 I */
	/* REQ: CM620A #118 I */
	/***** -------------------- START: Compensate MechMtrPos --------------------- *****/
	/* Masking is redundant, but used to match the design */
	MotAg0CorrnA_MotRev_T_sm5p12 = PimMotAg0CorrnTbl[(MotAg0RawMecl_Cnt_T_u0p16 >> 9U) & CORRNTBLSIZEMASK_CNT_U08];
	MotAg0CorrnA_MotRev_T_s19p12 = (sint32) MotAg0CorrnA_MotRev_T_sm5p12;
	MotAg0CorrnB_MotRev_T_sm5p12 = PimMotAg0CorrnTbl[((MotAg0RawMecl_Cnt_T_u0p16 + MOTAGDELTAPERCORRNPT_CNT_U16) >> 9U) & CORRNTBLSIZEMASK_CNT_U08];
	MotAg0CorrnB_MotRev_T_s19p12 = (sint32) MotAg0CorrnB_MotRev_T_sm5p12;
	MotAg0Gain_Uls_T_u12p4 = (MotAg0RawMecl_Cnt_T_u0p16 - (MotAg0RawMecl_Cnt_T_u0p16 & MOTAGIDXMASK_CNT_U16)) >> 5U;
	
	
	MotAg0CorrnTerm_Cnt_T_s15p16 =  ((MotAg0CorrnB_MotRev_T_s19p12 - MotAg0CorrnA_MotRev_T_s19p12) * (sint32) MotAg0Gain_Uls_T_u12p4) + (sint32)(uint32)((uint32)MotAg0CorrnA_MotRev_T_s19p12 << 4U);
	
	
	/* Roll-over and typecasting from sign to unsigned is intentional here to implement part of the 'Normalize MechMtrPos' block */
	MotAg0Corrd_Cnt_T_u0p16 = MotAg0RawMecl_Cnt_T_u0p16 - (uint16)MotAg0CorrnTerm_Cnt_T_s15p16; 
	
		
	/* REQ: CM620A #49 I */
	if( MOTCTRLMGR_MotCtrlMotAgMecl0Polarity < 0 )
	{
		MotCtrlMotAg0Mecl_MotRev_T_u0p16 = SIXTEENBITMAXVAL_CNT_U16 - MotAg0Corrd_Cnt_T_u0p16;  
	}
	else
	{
		MotCtrlMotAg0Mecl_MotRev_T_u0p16 = MotAg0Corrd_Cnt_T_u0p16;
	}
	/***** -------------------- END  : Compensate MechMtrPos --------------------- *****/
	/* ENDREQ: CM620A #89 */ 
	/* ENDREQ: CM620A #90 */
	/* ENDREQ: CM620A #118 */
	
	
	#if (FLTINJENA == STD_ON)	 
		(void) FltInj_u0p16_Oper( &MotCtrlMotAg0Mecl_MotRev_T_u0p16, FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL );  /* REQ: CM620A #112 I */
	#endif
	
	
	/* Write module o/p */
	MOTCTRLMGR_MotCtrlMotAg0Mecl = MotCtrlMotAg0Mecl_MotRev_T_u0p16; /* REQ: CM620A #66 I */

	
	

}	
	
#define CDD_MotAg0Meas_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAg0Meas_MotCtrl_MemMap.h"  

