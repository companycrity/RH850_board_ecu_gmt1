/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg1Meas_MotCtrl.c
* Module Description: Motor Control Loop runnable(s) for Measurement function of Motor Angle 1.  
*                     This function includes configuration and use of the CSIH3 peripheral.
* Project           : CBD   
* Author            : Rijvi Ahmed
*****************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/10/15	1   	 Rijvi			initial version							                                   EA4#849
* 09/10/15  2        Rijvi       Anomaly EA4#1233 fix. Design rev. 1.2.0        		                       EA4#1543 
* 10/06/15  3        Rijvi       Implement design rev. 2.1.0                    		                       EA4#1752  
* 01/04/16  4        Selva       Implement design rev. 2.4.0     											   EA4#3210
******************************************************************************/

#include "Rte_CDD_MotAg1Meas.h"  
#include "CDD_MotAg1Meas_private.h" 
#include "CDD_MotAg1Meas.h"       
#include "CDD_MotCtrlMgr_Data.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"


/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof" */

#define  MOTAGDELTAPERCORRNPT_CNT_U16		((uint16)512U)  
#define  SNSRAGMASK_CNT_U32 				((uint32)8191U)   
#define  SNSRVLTGFLTMASK_CNT_U32 			((uint32)8192U)  
#define  MOTAGIDXMASK_CNT_U16  				((uint16)65024U) 
#define  MOTAG1OFFS_MOTREV_U0P16            ((uint16)(uint32)(float32)(0.5F * NXTRFIXDPT_FLOATTOP16_ULS_F32))  

#define  ARYIDXRAWERRREG_CNT_U08           	((uint8)0U)           
#define  ARYIDXRAWTURNCNTRREG_CNT_U08      	((uint8)1U)
#define  ARYIDXRAWAGREG_CNT_U08            	((uint8)2U)
#define  SIXTEENBITMAXVAL_CNT_U16           ((uint16)65535U)  
#define  MOTAGRAWRESHILIM_CNT_U32           ((uint32)67108863U)    /* 0x03FFFFFFU */



#define CDD_MotAg1Meas_MotCtrl_START_SEC_CODE
#include "CDD_MotAg1Meas_MotCtrl_MemMap.h" 

/******************************************************************************
  * Name:        MotAg1MeasPer1
  * Description: MotAg1Meas component periodic processing in the motor control loop
  * Inputs:      see component's DataDict.m file     
  * Outputs:     see component's DataDict.m file 
  * Usage Notes: Called at Motor Control loop rate 
  ****************************************************************************/
FUNC (void, CDD_MotAg1Meas_CODE) MotAg1MeasPer1 (void)
{
	
	/* Temporary variables */
	VAR(uint32, AUTOMATIC)  MotAg1Reg_Cnt_T_u32;
	VAR(uint8,  AUTOMATIC)  MotAg1VltgFlt_Cnt_T_u08;
	VAR(uint8,  AUTOMATIC)  MotAg1ParFlt_Cnt_T_u08;
	VAR(u0p16,  AUTOMATIC)  MotAg1RawMecl_Cnt_T_u0p16;
	VAR(u0p16,  AUTOMATIC)  MotAg1Corrd_Cnt_T_u0p16;
	VAR(sint8,  AUTOMATIC)  MotAg1CorrnA_MotRev_T_sm5p12;
	VAR(sint8,  AUTOMATIC)  MotAg1CorrnB_MotRev_T_sm5p12;
	VAR(sint32, AUTOMATIC)  MotAg1CorrnA_MotRev_T_s19p12;
	VAR(sint32, AUTOMATIC)  MotAg1CorrnB_MotRev_T_s19p12;
	VAR(uint16, AUTOMATIC)  MotAg1Gain_Uls_T_u12p4;
	VAR(sint32, AUTOMATIC)  MotAg1CorrnTerm_Cnt_T_s15p16;
	
	
	
	/* Read module i/p */
	MotAg1Reg_Cnt_T_u32 = MOTCTRLMGR_MotCtrlMotAg1RawRes[ARYIDXRAWAGREG_CNT_U08];
	
	/* Update the display variables */
	*(Rte_Pim_dMotAg1MeasMotAg1RawErrReg()) = MOTCTRLMGR_MotCtrlMotAg1RawRes[ARYIDXRAWERRREG_CNT_U08];
	*(Rte_Pim_dMotAg1MeasMotAg1RawTurnCntrReg()) = MOTCTRLMGR_MotCtrlMotAg1RawRes[ARYIDXRAWTURNCNTRREG_CNT_U08];
	*(Rte_Pim_dMotAg1MeasMotAg1RawAgReg()) = MOTCTRLMGR_MotCtrlMotAg1RawRes[ARYIDXRAWAGREG_CNT_U08];
	
	
	/* Limit and Write module o/p */
	MOTCTRLMGR_MotCtrlMotAg1ErrReg = Lim_u32( MOTCTRLMGR_MotCtrlMotAg1RawRes[ARYIDXRAWERRREG_CNT_U08],
											  0U, MOTAGRAWRESHILIM_CNT_U32); 
	
	
	
	/* REQ: CM640A #84 I */
	/* REQ: CM640A #86 I */
	/* REQ: CM640A #93 I */
	/* REQ: CM640A #87 I */
	/* REQ: CM640A #88 I */
	/* REQ: CM640A #107 I */
	/***** -------------------- START: Process MotAg1 Angle --------------------- *****/
	if( (MotAg1Reg_Cnt_T_u32 & SNSRVLTGFLTMASK_CNT_U32) != 0U )
	{
		MotAg1VltgFlt_Cnt_T_u08 = 1U;
		
		*(Rte_Pim_MotAg1VltgFltCntPrev()) = *(Rte_Pim_MotAg1VltgFltCntPrev()) + 1U;
		
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg1VltgFltCnt = *(Rte_Pim_MotAg1VltgFltCntPrev());
	}
	else
	{
		MotAg1VltgFlt_Cnt_T_u08 = 0U;
	}
	
	
	if( (MotAg1Reg_Cnt_T_u32  == 0U) || ((MotAg1Reg_Cnt_T_u32 & SPIPARMASK_CNT_U32) != 0U) )
	{
		MotAg1ParFlt_Cnt_T_u08 = 1U;
		
		*(Rte_Pim_MotAg1ParFltCntPrev()) = *(Rte_Pim_MotAg1ParFltCntPrev()) + 1U;
		
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg1ParFltCnt = *(Rte_Pim_MotAg1ParFltCntPrev());
	}
	else
	{
		MotAg1ParFlt_Cnt_T_u08 = 0U;
	}
	
	
	if( (MotAg1VltgFlt_Cnt_T_u08 + MotAg1ParFlt_Cnt_T_u08) == 0U )
	{	/* No fault is present */
		
		/* Update the MotAg1RawMecl */
		MotAg1RawMecl_Cnt_T_u0p16 = (uint16)((MotAg1Reg_Cnt_T_u32 & SNSRAGMASK_CNT_U32) << 3U);
		*(Rte_Pim_MotAg1RawMeclPrev()) = MotAg1RawMecl_Cnt_T_u0p16;
		
		/* Update MotAg1MeclRollgCntr */
		*(Rte_Pim_MotAg1MeclRollgCntrPrev()) = *(Rte_Pim_MotAg1MeclRollgCntrPrev()) + 1U;
		
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg1MeclRollgCntr = *(Rte_Pim_MotAg1MeclRollgCntrPrev());
	}
	else
	{	/* Fault is present */
		
		/* Do not update the MotAg1RawMecl. Use the previous MotAg1RawMecl */
		MotAg1RawMecl_Cnt_T_u0p16 = *(Rte_Pim_MotAg1RawMeclPrev());
		
		/* Do not update MotAg1MeclRollgCntr */
	}
	/***** -------------------- END  : Process MotAg1 Angle --------------------- *****/
	/* ENDREQ: CM640A #84 */ 
	/* ENDREQ: CM640A #86 */ 
	/* ENDREQ: CM640A #93 */ 
	/* ENDREQ: CM640A #87 */ 
	/* ENDREQ: CM640A #88 */ 
	/* ENDREQ: CM640A #107 */ 
	
	
	
	/* REQ: CM640A #95 I */
	/* REQ: CM640A #89 I */
	/* REQ: CM640A #90 I */
	/* REQ: CM640A #120 I */
	/***** -------------------- START: Compensate MechMtrPos --------------------- *****/
	/* Masking is redundant, but used to match the design */
	MotAg1CorrnA_MotRev_T_sm5p12 = PimMotAg1CorrnTbl[(MotAg1RawMecl_Cnt_T_u0p16 >> 9U) & CORRNTBLSIZEMASK_CNT_U08];
	MotAg1CorrnA_MotRev_T_s19p12 = (sint32) MotAg1CorrnA_MotRev_T_sm5p12;
	MotAg1CorrnB_MotRev_T_sm5p12 = PimMotAg1CorrnTbl[((MotAg1RawMecl_Cnt_T_u0p16 + MOTAGDELTAPERCORRNPT_CNT_U16) >> 9U) & CORRNTBLSIZEMASK_CNT_U08];
	MotAg1CorrnB_MotRev_T_s19p12 = (sint32) MotAg1CorrnB_MotRev_T_sm5p12;
	MotAg1Gain_Uls_T_u12p4 = (MotAg1RawMecl_Cnt_T_u0p16 - (MotAg1RawMecl_Cnt_T_u0p16 & MOTAGIDXMASK_CNT_U16)) >> 5U;
	
	
	MotAg1CorrnTerm_Cnt_T_s15p16 =  ((MotAg1CorrnB_MotRev_T_s19p12 - MotAg1CorrnA_MotRev_T_s19p12) * (sint32) MotAg1Gain_Uls_T_u12p4) + (sint32)(uint32)((uint32)MotAg1CorrnA_MotRev_T_s19p12 << 4U);
	
	
	/* Roll-over and typecasting from sign to unsigned is intentional here to implement part of the 'Normalize MechMtrPos' block */
	MotAg1Corrd_Cnt_T_u0p16 = MotAg1RawMecl_Cnt_T_u0p16 - (uint16)MotAg1CorrnTerm_Cnt_T_s15p16 - MOTAG1OFFS_MOTREV_U0P16; 
	 
	
	
	if( MOTCTRLMGR_MotCtrlMotAgMecl1Polarity < 0 )
	{
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg1Mecl = SIXTEENBITMAXVAL_CNT_U16 - MotAg1Corrd_Cnt_T_u0p16;  
	}
	else
	{
		/* Write module o/p */
		MOTCTRLMGR_MotCtrlMotAg1Mecl = MotAg1Corrd_Cnt_T_u0p16;  
	}
	/***** -------------------- END  : Compensate MechMtrPos --------------------- *****/
	/* ENDREQ: CM640A #95 */ 
	/* ENDREQ: CM640A #89 */ 
	/* ENDREQ: CM640A #90 */
	/* ENDREQ: CM640A #120 */

	
	  

}	
	
#define CDD_MotAg1Meas_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAg1Meas_MotCtrl_MemMap.h"  

