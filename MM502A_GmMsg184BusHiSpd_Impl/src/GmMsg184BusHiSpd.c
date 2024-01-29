/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg184BusHiSpd.c
 *     SW-C Type:  GmMsg184BusHiSpd
 *  Generated at:  Fri Dec  9 10:10:12 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg184BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   GmMsg184BusHiSpd.c
* Module Description: GM 0x184 High Speed Message Processing
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         5 %
* %derived_by:      nz2654 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 09/22/15  1        JWJ       Initial file creation                                                        EA4#1718
* 04/20/16  2        JWJ       Added limit to output for LKA state as per EA4#3894                          EA4#4583
* 05/12/16  3        JWJ       Corrected order of operations for scaling of output signals                  EA4#6165
* 08/30/16  4        JWJ       EA4#6742: Change HwTqLoaMtgnEna to HwTqIdptSig with cal threshold            EA4#6951
*                              EA4#7001: Updated rolling counter strategy to employ callback approach       EA4#6951
* 12/08/16  5        HM        EA4#8762: Removed LKATrqOverlTrqDStat "Permanently Failed" logic             EA4#8820
                               EA4#6708: Updated Hands On / Off Detection logic                             EA4#8820
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_GmMsg184BusHiSpd.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"


#define GMMSG184BUSHISPDVLD_CNT_U08      0U
#define GMMSG184BUSHISPDINVLD_CNT_U08    1U

#define GMMSG184BUSHISPDDISAD_CNT_U08    0U
#define GMMSG184BUSHISPDENAD_CNT_U08     1U
#define GMMSG184BUSHISPDFAILD_CNT_U08    2U

#define GMMSG184BUSHISPDHANDSOFF_CNT_U08 0U
#define GMMSG184BUSHISPDHANDSON_CNT_U08  1U

#define GMMSG184BUSHISPDTQDLVDSTSMAX_CNT_U08 3U

#define GMMSG184BUSHISPDTQMIN_HWNM_F32       (-10.24f)
#define GMMSG184BUSHISPDTQMAX_HWNM_F32        (10.23f)
#define GMMSG184BUSHISPDTQSCA_CNTPERHWNM_F32 (100.0f)

#define GMMSG184BUSHISPDTQMASK_CNT_U16   2047U

#define GMMSG184BUSHISPDROLLGCNTRMAX_CNT_U08 15U

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
 *   uint8 *Rte_Pim_GmMsg184BusHiSpdRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *   sint8 Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *
 *********************************************************************************************************************/


#define GmMsg184BusHiSpd_START_SEC_CODE
#include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg184BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_HowDetnFlg_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaTqDlvd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnMod_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnStVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaDrvrAppldTq_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaDrvrAppldTqVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaElecPwrSteerTotTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlDeltaTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlDlvdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlStsChks_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlTqDlvdSts_Val(uint8 data)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg184BusHiSpd_CODE) GmMsg184BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg184BusHiSpdPer1
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) HwTq_HwNm_T_f32;
	VAR(uint8, AUTOMATIC) LkaSt_Cnt_T_u08;
	VAR(float32, AUTOMATIC) LkaTqDlvd_HwNm_T_f32;
	VAR(uint8, AUTOMATIC) HwTqIdptSig_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) HowDetnFlg_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;

	VAR(float32, AUTOMATIC) DrvrAppldTq_HwNm_T_f32;
	VAR(sint16, AUTOMATIC) DrvrAppldTq_HwNm_T_s16;
	VAR(sint16, AUTOMATIC) LkaTqDlvd_HwNm_T_s16;
	VAR(float32, AUTOMATIC) TotTq_HwNm_T_f32;
	VAR(sint16, AUTOMATIC) TotTq_HwNm_T_s16;

	VAR(uint8, AUTOMATIC) HandsOffSteerWhlDetnMod_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) HandsOffSteerWhlDetnSt_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) HandsOffSteerWhlDetnStVld_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) LkaDrvrAppldTq_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) LkaDrvrAppldTqVld_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) LkaElecPwrSteerTotTqDlvd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) LkaTqOvrlDeltaTqDlvd_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) LkaTqOvrlDlvdRollgCntr_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) LkaTqOvrlStsChks_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) LkaTqOvrlTqDlvdSts_Cnt_T_u08;


	/* Read inputs */
	(void)Rte_Read_HowDetnFlg_Logl(&HowDetnFlg_Cnt_T_logl);
	(void)Rte_Read_HwTq_Val(&HwTq_HwNm_T_f32);
	(void)Rte_Read_LkaSt_Val(&LkaSt_Cnt_T_u08);
	(void)Rte_Read_LkaTqDlvd_Val(&LkaTqDlvd_HwNm_T_f32);
	(void)Rte_Read_HwTqIdptSig_Val(&HwTqIdptSig_Cnt_T_u08);
	(void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);


	/* Scale and limit Driver Applied Torque for transmission on the bus. */
	/* Note: this re-uses DriverAppliedTorque signal read for ESC */
	DrvrAppldTq_HwNm_T_f32 = Lim_f32(HwTq_HwNm_T_f32, GMMSG184BUSHISPDTQMIN_HWNM_F32, GMMSG184BUSHISPDTQMAX_HWNM_F32);
	DrvrAppldTq_HwNm_T_s16 = (sint16)((float32)(DrvrAppldTq_HwNm_T_f32 * GMMSG184BUSHISPDTQSCA_CNTPERHWNM_F32));
	DrvrAppldTq_HwNm_T_s16 *= Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val();
	LkaDrvrAppldTq_Cnt_T_u16 = (uint16)DrvrAppldTq_HwNm_T_s16 & GMMSG184BUSHISPDTQMASK_CNT_U16;

	/* Scale and limit LKA Torque Delivered for transmission on the bus. */
	LkaTqDlvd_HwNm_T_f32 = Lim_f32(LkaTqDlvd_HwNm_T_f32, GMMSG184BUSHISPDTQMIN_HWNM_F32, GMMSG184BUSHISPDTQMAX_HWNM_F32);
	LkaTqDlvd_HwNm_T_s16 = (sint16)((float32)(LkaTqDlvd_HwNm_T_f32 * GMMSG184BUSHISPDTQSCA_CNTPERHWNM_F32));
	LkaTqDlvd_HwNm_T_s16 *= Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val();
	LkaTqOvrlDeltaTqDlvd_Cnt_T_u16 = (uint16)LkaTqDlvd_HwNm_T_s16 & GMMSG184BUSHISPDTQMASK_CNT_U16;

	/* Scale and limit Total Torque for transmission on the bus. */
	TotTq_HwNm_T_f32 = DrvrAppldTq_HwNm_T_f32 + LkaTqDlvd_HwNm_T_f32;
	TotTq_HwNm_T_f32 = Lim_f32(TotTq_HwNm_T_f32, GMMSG184BUSHISPDTQMIN_HWNM_F32, GMMSG184BUSHISPDTQMAX_HWNM_F32);
	TotTq_HwNm_T_s16 = (sint16)((float32)(TotTq_HwNm_T_f32 * GMMSG184BUSHISPDTQSCA_CNTPERHWNM_F32));
	TotTq_HwNm_T_s16 *= Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val();
	LkaElecPwrSteerTotTqDlvd_Cnt_T_u16 = (uint16)TotTq_HwNm_T_s16 & GMMSG184BUSHISPDTQMASK_CNT_U16;

	if (HwTqIdptSig_Cnt_T_u08 <= Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val())
	{
		LkaDrvrAppldTqVld_Cnt_T_u08 = GMMSG184BUSHISPDINVLD_CNT_U08;
	}
	else
	{
		LkaDrvrAppldTqVld_Cnt_T_u08 = GMMSG184BUSHISPDVLD_CNT_U08;
	}

	if ((HwTqIdptSig_Cnt_T_u08 <= Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val()) || (FALSE == VehSpdVld_Cnt_T_logl))
	{
		HandsOffSteerWhlDetnStVld_Cnt_T_u08 = GMMSG184BUSHISPDINVLD_CNT_U08;
	}
	else
	{
		HandsOffSteerWhlDetnStVld_Cnt_T_u08 = GMMSG184BUSHISPDVLD_CNT_U08;
	}

	if (HandsOffSteerWhlDetnStVld_Cnt_T_u08 != GMMSG184BUSHISPDVLD_CNT_U08)
	{
		HandsOffSteerWhlDetnMod_Cnt_T_u08 = GMMSG184BUSHISPDFAILD_CNT_U08;
	}
	else if (Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl() == TRUE)
	{
		HandsOffSteerWhlDetnMod_Cnt_T_u08 = GMMSG184BUSHISPDENAD_CNT_U08;
	}
	else
	{
		/* This is technically unreachable but was included to be explicit */
		/* We do not transmit this message when LKA is disabled, ergo we will never transmit Hands Off as disabled */
		HandsOffSteerWhlDetnMod_Cnt_T_u08 = GMMSG184BUSHISPDDISAD_CNT_U08;
	}

	if (TRUE == HowDetnFlg_Cnt_T_logl)
	{
		HandsOffSteerWhlDetnSt_Cnt_T_u08 = GMMSG184BUSHISPDHANDSON_CNT_U08;
	}
	else
	{
		HandsOffSteerWhlDetnSt_Cnt_T_u08 = GMMSG184BUSHISPDHANDSOFF_CNT_U08;
	}

	LkaTqOvrlTqDlvdSts_Cnt_T_u08 = Min_u08(LkaSt_Cnt_T_u08, GMMSG184BUSHISPDTQDLVDSTSMAX_CNT_U08);


	LkaTqOvrlDlvdRollgCntr_Cnt_T_u08 = *Rte_Pim_GmMsg184BusHiSpdRollgCntr();


	/* Compute checksum */
	LkaTqOvrlStsChks_Cnt_T_u16 = (uint8)(LkaTqOvrlTqDlvdSts_Cnt_T_u08 << 3U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)(LkaElecPwrSteerTotTqDlvd_Cnt_T_u16 >> 8U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)LkaElecPwrSteerTotTqDlvd_Cnt_T_u16;
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)(HandsOffSteerWhlDetnStVld_Cnt_T_u08 << 6U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)(HandsOffSteerWhlDetnSt_Cnt_T_u08 << 5U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)(HandsOffSteerWhlDetnMod_Cnt_T_u08 << 3U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)(LkaTqOvrlDeltaTqDlvd_Cnt_T_u16 >> 8U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)LkaTqOvrlDeltaTqDlvd_Cnt_T_u16;
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)LkaTqOvrlDlvdRollgCntr_Cnt_T_u08;
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)(LkaDrvrAppldTqVld_Cnt_T_u08 << 3U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)(LkaDrvrAppldTq_Cnt_T_u16 >> 8U);
	LkaTqOvrlStsChks_Cnt_T_u16 += (uint8)LkaDrvrAppldTq_Cnt_T_u16;
	LkaTqOvrlStsChks_Cnt_T_u16 += (0x184U / 8U);


	/* Write outputs */
	(void)Rte_Write_HandsOffSteerWhlDetnMod_Val(HandsOffSteerWhlDetnMod_Cnt_T_u08);
	(void)Rte_Write_HandsOffSteerWhlDetnSt_Val(HandsOffSteerWhlDetnSt_Cnt_T_u08);
	(void)Rte_Write_HandsOffSteerWhlDetnStVld_Val(HandsOffSteerWhlDetnStVld_Cnt_T_u08);
	(void)Rte_Write_LkaDrvrAppldTq_Val(LkaDrvrAppldTq_Cnt_T_u16);
	(void)Rte_Write_LkaDrvrAppldTqVld_Val(LkaDrvrAppldTqVld_Cnt_T_u08);
	(void)Rte_Write_LkaElecPwrSteerTotTqDlvd_Val(LkaElecPwrSteerTotTqDlvd_Cnt_T_u16);
	(void)Rte_Write_LkaTqOvrlDeltaTqDlvd_Val(LkaTqOvrlDeltaTqDlvd_Cnt_T_u16);
	(void)Rte_Write_LkaTqOvrlDlvdRollgCntr_Val(LkaTqOvrlDlvdRollgCntr_Cnt_T_u08);
	(void)Rte_Write_LkaTqOvrlStsChks_Val(LkaTqOvrlStsChks_Cnt_T_u16);
	(void)Rte_Write_LkaTqOvrlTqDlvdSts_Val(LkaTqOvrlTqDlvdSts_Cnt_T_u08);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MsgTxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MsgTxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MsgTxCallBack_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg184BusHiSpd_CODE) MsgTxCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MsgTxCallBack_Oper
 *********************************************************************************************************************/

	*Rte_Pim_GmMsg184BusHiSpdRollgCntr() += 1U;
	*Rte_Pim_GmMsg184BusHiSpdRollgCntr() &= GMMSG184BUSHISPDROLLGCNTRMAX_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg184BusHiSpd_STOP_SEC_CODE
#include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
