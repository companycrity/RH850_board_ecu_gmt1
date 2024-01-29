/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg1CABusChassisExp.c
 *     SW-C Type:  GmMsg1CABusChassisExp
 *  Generated at:  Tue Aug 30 11:54:22 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg1CABusChassisExp>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   GmMsg1CABusChassisExp.c
* Module Description: GM 0x1CA Chassis Expansion Message Processing
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 09/22/15  1        JWJ       Initial file creation                                                        EA4#1718
* 05/12/16  2        JWJ       Corrected order of operations for scaling of output signals                  EA4#5984
* 08/30/16  3        JWJ       EA4#7001: Updated rolling counter strategy to employ callback approach       EA4#7286
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_GmMsg1CABusChassisExp.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"


#define GMMSG1CABUSCHASSISEXPROLLGCNTRMAX_CNT_U08     15U
#define GMMSG1CABUSCHASSISEXPTQMASK_CNT_U16           2047U

#define GMMSG1CABUSCHASSISEXPTQMIN_HWNM_F32          (-10.24f)
#define GMMSG1CABUSCHASSISEXPTQMAX_HWNM_F32           (10.23f)
#define GMMSG1CABUSCHASSISEXPTQSCA_CNTPERHWNM_F32    (100.0f)

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
 *   uint8 *Rte_Pim_GmMsg1CABusChassisExpRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   sint8 Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val(void)
 *
 *********************************************************************************************************************/


#define GmMsg1CABusChassisExp_START_SEC_CODE
#include "GmMsg1CABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1CABusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_EscSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EscTqDlvd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ElecPwrSteerTotTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDeltaTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDlvdChks_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDlvdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlTqDlvdSts_Val(uint8 data)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg1CABusChassisExp_CODE) GmMsg1CABusChassisExpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg1CABusChassisExpPer1
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) EscSt_Cnt_T_u08;
	VAR(float32, AUTOMATIC) EscTqDlvd_HwNm_T_f32;
	VAR(float32, AUTOMATIC) HwTq_HwNm_T_f32;

	VAR(float32, AUTOMATIC) TotTqDlvd_HwNm_T_f32;
	VAR(float32, AUTOMATIC) DeltaTqDlvd_HwNm_T_f32;
	VAR(sint16, AUTOMATIC) TotTqDlvd_Cnt_T_s16;
	VAR(sint16, AUTOMATIC) DeltaTqDlvd_Cnt_T_s16;

	VAR(uint16, AUTOMATIC) TotTqDlvd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) DeltaTqDlvd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) ProtnVal_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) RollgCntr_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) TqDlvdSts_Cnt_T_u08;


	/* Read inputs */
	(void)Rte_Read_EscSt_Val(&EscSt_Cnt_T_u08);
	(void)Rte_Read_EscTqDlvd_Val(&EscTqDlvd_HwNm_T_f32);
	(void)Rte_Read_HwTq_Val(&HwTq_HwNm_T_f32);


	TqDlvdSts_Cnt_T_u08 = EscSt_Cnt_T_u08 & 3u;

	TotTqDlvd_HwNm_T_f32 = EscTqDlvd_HwNm_T_f32 + HwTq_HwNm_T_f32;
	TotTqDlvd_HwNm_T_f32 = Lim_f32(TotTqDlvd_HwNm_T_f32, GMMSG1CABUSCHASSISEXPTQMIN_HWNM_F32, GMMSG1CABUSCHASSISEXPTQMAX_HWNM_F32);
	TotTqDlvd_Cnt_T_s16 = (sint16)((float32)(TotTqDlvd_HwNm_T_f32 * GMMSG1CABUSCHASSISEXPTQSCA_CNTPERHWNM_F32));
	TotTqDlvd_Cnt_T_s16 *= Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val();
	TotTqDlvd_Cnt_T_u16 = (uint16)TotTqDlvd_Cnt_T_s16 & GMMSG1CABUSCHASSISEXPTQMASK_CNT_U16;

	/* Scale and limit delivered torque before sending it out on the bus.*/
	DeltaTqDlvd_HwNm_T_f32 = Lim_f32(EscTqDlvd_HwNm_T_f32, GMMSG1CABUSCHASSISEXPTQMIN_HWNM_F32, GMMSG1CABUSCHASSISEXPTQMAX_HWNM_F32);
	DeltaTqDlvd_Cnt_T_s16 = (sint16)((float32)(DeltaTqDlvd_HwNm_T_f32 * GMMSG1CABUSCHASSISEXPTQSCA_CNTPERHWNM_F32));
	DeltaTqDlvd_Cnt_T_s16 *= Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val();
	DeltaTqDlvd_Cnt_T_u16 = (uint16)DeltaTqDlvd_Cnt_T_s16 & GMMSG1CABUSCHASSISEXPTQMASK_CNT_U16;

	/* Update the rolling counter */
	RollgCntr_Cnt_T_u08 = *Rte_Pim_GmMsg1CABusChassisExpRollgCntr();


	/* Calculate checksum */
	ProtnVal_Cnt_T_u16 = (uint8)(TqDlvdSts_Cnt_T_u08 << 3U);
	ProtnVal_Cnt_T_u16 += (uint8)(TotTqDlvd_Cnt_T_u16 >> 8U);
	ProtnVal_Cnt_T_u16 += (uint8)TotTqDlvd_Cnt_T_u16;
	ProtnVal_Cnt_T_u16 += (uint8)(RollgCntr_Cnt_T_u08 << 3U);
	ProtnVal_Cnt_T_u16 += (uint8)(DeltaTqDlvd_Cnt_T_u16 >> 8U);
	ProtnVal_Cnt_T_u16 += (uint8)DeltaTqDlvd_Cnt_T_u16;
	ProtnVal_Cnt_T_u16 += (0x1CAU / 8u);


	/* Write outputs */
	(void)Rte_Write_ElecPwrSteerTotTqDlvd_Val(TotTqDlvd_Cnt_T_u16);
	(void)Rte_Write_TqOvrlDeltaTqDlvd_Val(DeltaTqDlvd_Cnt_T_u16);
	(void)Rte_Write_TqOvrlDlvdChks_Val(ProtnVal_Cnt_T_u16);
	(void)Rte_Write_TqOvrlDlvdRollgCntr_Val(RollgCntr_Cnt_T_u08);
	(void)Rte_Write_TqOvrlTqDlvdSts_Val(TqDlvdSts_Cnt_T_u08);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Msg1CATxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg1CATxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg1CATxCallBack_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg1CABusChassisExp_CODE) Msg1CATxCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg1CATxCallBack_Oper
 *********************************************************************************************************************/

	*Rte_Pim_GmMsg1CABusChassisExpRollgCntr() += 1U;
	*Rte_Pim_GmMsg1CABusChassisExpRollgCntr() &= GMMSG1CABUSCHASSISEXPROLLGCNTRMAX_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg1CABusChassisExp_STOP_SEC_CODE
#include "GmMsg1CABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
