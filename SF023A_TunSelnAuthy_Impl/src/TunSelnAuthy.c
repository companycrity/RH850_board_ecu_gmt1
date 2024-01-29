/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TunSelnAuthy.c
 *     SW-C Type:  TunSelnAuthy
 *  Generated at:  Fri Jun 17 16:13:56 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TunSelnAuthy>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: TunSelnAuthy.c
* Module Description: Implementation of TunSelnAuthy FDD SF023A
* Project           : CBD 
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                               SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 10/08/15  1        NS        Initial Version                                                                 EA4#1782
* 06/17/16  2        KK        Updated as per FDD v1.1.0                                                       EA4#6004
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
  u4p12
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u6p10
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

#include "Rte_TunSelnAuthy.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ArchGlbPrm.h"
#include "NxtrMath.h"
#include "TunSelnAuthy.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"

#define PrmTunSelnAuthyVehSpdX_u9p7	(*(const Ary1D_u9p7_6 *) Rte_Prm_TunSelnAuthyVehSpdX_Ary1D())
#define PrmTunSelnAuthyHwTqY_u4p12	(*(const Ary1D_u4p12_6 *) Rte_Prm_TunSelnAuthyHwTqY_Ary1D())
#define PrmTunSelnAuthyHwVelY_u6p10	(*(const Ary1D_u6p10_6 *) Rte_Prm_TunSelnAuthyHwVelY_Ary1D())

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value.  
    Applicable to all casts to void for all Rte_Read and Rte_Write and for client calls that don't have return errors. */

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
 * u4p12: Integer in interval [0...65535]
 * u6p10: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u6p10_6: Array with 6 element(s) of type u6p10
 * Ary1D_u9p7_6: Array with 6 element(s) of type u9p7
 *
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
 *   boolean Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl(void)
 *   u4p12 *Rte_Prm_TunSelnAuthyHwTqY_Ary1D(void)
 *   u6p10 *Rte_Prm_TunSelnAuthyHwVelY_Ary1D(void)
 *   u9p7 *Rte_Prm_TunSelnAuthyVehSpdX_Ary1D(void)
 *
 *********************************************************************************************************************/


#define TunSelnAuthy_START_SEC_CODE
#include "TunSelnAuthy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtCalChgReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RtCalChgReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TunSelnRtDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RtCalChgReq_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RtCalChgReq_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, TunSelnAuthy_CODE) RtCalChgReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RtCalChgReq_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) TunSelnAuthyHwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) TunSelnAuthyHwVel_HwRadPerSec_T_f32;
	
	VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
	
	VAR(boolean, AUTOMATIC) TunSelnRtDi_Cnt_T_logl;

    VAR(Std_ReturnType, AUTOMATIC) ReqSts_Cnt_T_u08;

    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);				/* REQ: SF023A #09 I */
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);				/* REQ: SF023A #33 I */
	(void)Rte_Read_HwVel_Val(&HwVel_HwRadPerSec_T_f32);
	(void)Rte_Read_TunSelnRtDi_Logl(&TunSelnRtDi_Cnt_T_logl);
	
	VehSpd_Kph_T_u9p7 					= FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	
	/* REQ: SF023A #60 I */
	TunSelnAuthyHwTq_HwNwtMtr_T_f32		= FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmTunSelnAuthyVehSpdX_u9p7,
																						 PrmTunSelnAuthyHwTqY_u4p12,
																						 (uint16)TblSize_m(PrmTunSelnAuthyVehSpdX_u9p7),
																						  VehSpd_Kph_T_u9p7),
														  NXTRFIXDPT_P12TOFLOAT_ULS_F32);
														  
    /* REQ: SF023A #59 I */
	TunSelnAuthyHwVel_HwRadPerSec_T_f32	= FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmTunSelnAuthyVehSpdX_u9p7,
																						 PrmTunSelnAuthyHwVelY_u6p10,
																						 (uint16)TblSize_m(PrmTunSelnAuthyVehSpdX_u9p7),
																						  VehSpd_Kph_T_u9p7),
														  NXTRFIXDPT_P10TOFLOAT_ULS_F32);

    if( (Abslt_f32_f32(HwTq_HwNwtMtr_T_f32) <= TunSelnAuthyHwTq_HwNwtMtr_T_f32) &&				/* REQ: SF023A #48 I */
	    (Abslt_f32_f32(HwVel_HwRadPerSec_T_f32) <= TunSelnAuthyHwVel_HwRadPerSec_T_f32) &&		/* REQ: SF023A #61 I */ /* REQ: SF023A #48 I */
		(TunSelnRtDi_Cnt_T_logl == FALSE) &&													/* REQ: SF023A #56 I */
		(Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl() == FALSE) )									/* REQ: SF023A #55 I */ /* REQ: SF023A #56 I */
    {
        ReqSts_Cnt_T_u08 = E_OK;																/* REQ: SF023A #46 I */
    }
    else
    {
        ReqSts_Cnt_T_u08 = E_NOT_OK;															/* REQ: SF023A #46 I */
    }

    return ReqSts_Cnt_T_u08;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TunSelnAuthyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, TunSelnAuthy_CODE) TunSelnAuthyInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TunSelnAuthyInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: XcpCalChgReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <XcpCalChgReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType XcpCalChgReq_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_XcpCalChgReq_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, TunSelnAuthy_CODE) XcpCalChgReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: XcpCalChgReq_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(Std_ReturnType, AUTOMATIC) ReqSts_Cnt_T_u08;

    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);

    /* REQ: SF023A #49 I */
	if(VehSpd_Kph_T_f32 <= (TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32 + ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
    {
        ReqSts_Cnt_T_u08 = E_OK;				/* REQ: SF023A #47 I */
    }
    else
    {
        ReqSts_Cnt_T_u08 = E_NOT_OK;			/* REQ: SF023A #47 I */
    }

    return ReqSts_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TunSelnAuthy_STOP_SEC_CODE
#include "TunSelnAuthy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
