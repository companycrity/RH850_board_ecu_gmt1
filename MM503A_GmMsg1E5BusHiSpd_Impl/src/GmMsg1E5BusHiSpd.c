/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg1E5BusHiSpd.c
 *     SW-C Type:  GmMsg1E5BusHiSpd
 *  Generated at:  Mon Jan  9 22:18:47 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg1E5BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   GmMsg1E5BusHiSpd.c
* Module Description: GM 0x1E5 High Speed Message Processing
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         8 %
* %derived_by:      nz2654 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 08/14/15  1        JWJ       Initial file creation                                                        EA4#1321
* 09/11/15  2        JWJ       Anomaly EA4#1564 fix                                                         EA4#1568
* 12/10/15  3        JWJ       Anomaly EA4#3048 correction                                                  EA4#3051
* 01/08/16  4        JWJ       Anomaly EA4#3233 correction - polarity correction on output signals          EA4#3251
* 04/20/16  5        JWJ       Update HwVelVld to MotAgLoaMtgtnEna per EA4#4480                             EA4#5446
* 04/26/16  6        JWJ       Corrected polarity on MotAgLoaMtgtnEna input signal                          EA4#5518
* 08/30/16  7        JWJ       EA4#7001: Updated rolling counter strategy to employ callback approach       EA4#7285
* 01/10/17  8        HM        EA4#7038: Updated StrWhAngGrdMsk, StrWhAngGrdV values based on 
*                                        HwAgVldToSerlCom information.                                      EA4#9231
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_GmMsg1E5BusHiSpd.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"

#define GMMSG1E5BUSHISPDSTEERWHLAGSCAFCT_DEGPERCNT_F32  0.0625f
#define GMMSG1E5BUSHISPDSTEERWHLAGMIN_DEG_F32           (-2048.0f)
#define GMMSG1E5BUSHISPDSTEERWHLAGMAX_DEG_F32           2047.9375f

#define GMMSG1E5BUSHISPD180OVERPI_ULS_F32               57.295779513082f
#define GMMSG1E5BUSHISPDSTEERWHLAGGRADMIN_DEG_F32       (-2048.0f)
#define GMMSG1E5BUSHISPDSTEERWHLAGGRADMAX_DEG_F32       2047.0f

#define GMMSG1E5BUSHISPDDONOTUSEDATA_CNT_U08   0U
#define GMMSG1E5BUSHISPDUSEDATA_CNT_U08        1U

#define GMMSG1E5BUSHISPDVLD_CNT_U08            0U
#define GMMSG1E5BUSHISPDINVLD_CNT_U08          1U

#define GMMSG1E5BUSHISPDSNSRTYP4_CNT_U08       3U

#define GMMSG1E5BUSHISPDCALSTSUKWN_CNT_U08     0U
#define GMMSG1E5BUSHISPDCALSTSCMPL_CNT_U08     2U

#define GMMSG1E5BUSHISPDROLLGCNTRMASK_CNT_U08  3U

/* Polarity was included as a constant rather than a calibration as per discussions with Doug Schuller regarding removal
 * of unneeded calibrations */
#define GMMSG1E5BUSHISPDPOLARITY_ULS_S08       (-1)

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
 *   uint8 *Rte_Pim_GmMsg1E5BusHiSpdRollgCntr(void)
 *
 *********************************************************************************************************************/


#define GmMsg1E5BusHiSpd_START_SEC_CODE
#include "GmMsg1E5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1E5BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrimPrfmd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgVldToSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SteerWhlAgAlvRollgCntBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtMaskBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtVldBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgMaskBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrCalStsBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrChksBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrTypBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgVldBusHiSpd_Val(uint8 data)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg1E5BusHiSpd_CODE) GmMsg1E5BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg1E5BusHiSpdPer1
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) HwAgVld_Cnt_T_logl;
	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(boolean, AUTOMATIC) HwAgTrimPrfmd_Cnt_T_logl;

	VAR(float32, AUTOMATIC) HwVel_HwDegPerSec_T_f32;

	VAR(sint16, AUTOMATIC) SteerWhlAg_Deg_T_s16;
	VAR(uint8, AUTOMATIC) SteerWhlAgRollCnt_Cnt_T_u08;
	VAR(sint16, AUTOMATIC) SteerWhlAgGrdt_DegPerSec_T_s16;
	VAR(uint8, AUTOMATIC) SteerWhlAgGrdtMask_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerWhlAgGrdtVld_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerWhlAgMask_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerWhlAgSnsrCalSts_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) SteerWhlAgSnsrChks_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) SteerWhlAgSnsrTyp_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerWhlAgVld_Cnt_T_u08;


	/* Read inputs */
	(void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
	(void)Rte_Read_HwAgVldToSerlCom_Logl(&HwAgVld_Cnt_T_logl);
	(void)Rte_Read_HwAgTrimPrfmd_Logl(&HwAgTrimPrfmd_Cnt_T_logl);
	(void)Rte_Read_HwVel_Val(&HwVel_HwRadPerSec_T_f32);


	/* Concert handwheel angle to fixed point */
	HwAg_HwDeg_T_f32 = Lim_f32(HwAg_HwDeg_T_f32, GMMSG1E5BUSHISPDSTEERWHLAGMIN_DEG_F32, GMMSG1E5BUSHISPDSTEERWHLAGMAX_DEG_F32);
	SteerWhlAg_Deg_T_s16 = (sint16)((float32)(HwAg_HwDeg_T_f32 / GMMSG1E5BUSHISPDSTEERWHLAGSCAFCT_DEGPERCNT_F32));
	SteerWhlAg_Deg_T_s16 *= GMMSG1E5BUSHISPDPOLARITY_ULS_S08;

	/* Convert handwheel velocity to degrees/sec then into fixed point */
	HwVel_HwDegPerSec_T_f32 = GMMSG1E5BUSHISPD180OVERPI_ULS_F32 * HwVel_HwRadPerSec_T_f32;
	SteerWhlAgGrdt_DegPerSec_T_s16 = (sint16)Lim_f32(HwVel_HwDegPerSec_T_f32, GMMSG1E5BUSHISPDSTEERWHLAGGRADMIN_DEG_F32, GMMSG1E5BUSHISPDSTEERWHLAGGRADMAX_DEG_F32);
	SteerWhlAgGrdt_DegPerSec_T_s16 *= GMMSG1E5BUSHISPDPOLARITY_ULS_S08;

	/* Handle handwheel angle validity */
	if (HwAgVld_Cnt_T_logl == TRUE)
	{
		SteerWhlAgMask_Cnt_T_u08 = GMMSG1E5BUSHISPDUSEDATA_CNT_U08;
		SteerWhlAgVld_Cnt_T_u08 = GMMSG1E5BUSHISPDVLD_CNT_U08;

		SteerWhlAgGrdtMask_Cnt_T_u08 = GMMSG1E5BUSHISPDUSEDATA_CNT_U08;
		SteerWhlAgGrdtVld_Cnt_T_u08 = GMMSG1E5BUSHISPDVLD_CNT_U08;
	}
	else
	{
		SteerWhlAgMask_Cnt_T_u08 = GMMSG1E5BUSHISPDDONOTUSEDATA_CNT_U08;
		SteerWhlAgVld_Cnt_T_u08 = GMMSG1E5BUSHISPDINVLD_CNT_U08;

		SteerWhlAgGrdtMask_Cnt_T_u08 = GMMSG1E5BUSHISPDDONOTUSEDATA_CNT_U08;
		SteerWhlAgGrdtVld_Cnt_T_u08 = GMMSG1E5BUSHISPDINVLD_CNT_U08;
	}


	/* Handle handwheel angle sensor calibration status */
	if (HwAgTrimPrfmd_Cnt_T_logl == TRUE)
	{
		SteerWhlAgSnsrCalSts_Cnt_T_u08 = GMMSG1E5BUSHISPDCALSTSCMPL_CNT_U08;
	}
	else
	{
		SteerWhlAgSnsrCalSts_Cnt_T_u08 = GMMSG1E5BUSHISPDCALSTSUKWN_CNT_U08;
	}

	/* Update the rolling counter */
	SteerWhlAgRollCnt_Cnt_T_u08 = *Rte_Pim_GmMsg1E5BusHiSpdRollgCntr();

	/* Sensor type is fixed */
	SteerWhlAgSnsrTyp_Cnt_T_u08 = GMMSG1E5BUSHISPDSNSRTYP4_CNT_U08;

	/* Compute the checksum value */
	SteerWhlAgSnsrChks_Cnt_T_u16  = (uint8)(SteerWhlAgVld_Cnt_T_u08 << 7U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAgSnsrCalSts_Cnt_T_u08 << 5U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAgSnsrTyp_Cnt_T_u08 << 3U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAgMask_Cnt_T_u08 << 2U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)((uint16)SteerWhlAg_Deg_T_s16 >> 8U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAg_Deg_T_s16);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAgGrdtVld_Cnt_T_u08 << 7U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAgRollCnt_Cnt_T_u08 << 5U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAgGrdtMask_Cnt_T_u08 << 4U);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(((uint16)SteerWhlAgGrdt_DegPerSec_T_s16 >> 8U) & 0x0FU);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(SteerWhlAgGrdt_DegPerSec_T_s16);
	SteerWhlAgSnsrChks_Cnt_T_u16 += (uint8)(0x1E5U / 8U);
	SteerWhlAgSnsrChks_Cnt_T_u16 &= 0x07FFU;


	/* No limiting necessary for outputs - all outputs are either limited as inputs, masked, or are constant values */

	/* Write outputs */
	(void)Rte_Write_SteerWhlAgBusHiSpd_Val((uint16)SteerWhlAg_Deg_T_s16);
	(void)Rte_Write_SteerWhlAgVldBusHiSpd_Val(SteerWhlAgVld_Cnt_T_u08);
	(void)Rte_Write_SteerWhlAgMaskBusHiSpd_Val(SteerWhlAgMask_Cnt_T_u08);
	(void)Rte_Write_SteerWhlAgSnsrTypBusHiSpd_Val(SteerWhlAgSnsrTyp_Cnt_T_u08);
	(void)Rte_Write_SteerWhlAgSnsrCalStsBusHiSpd_Val(SteerWhlAgSnsrCalSts_Cnt_T_u08);
	(void)Rte_Write_SteerWhlAgGrdtBusHiSpd_Val((uint16)SteerWhlAgGrdt_DegPerSec_T_s16);
	(void)Rte_Write_SteerWhlAgGrdtVldBusHiSpd_Val(SteerWhlAgGrdtVld_Cnt_T_u08);
	(void)Rte_Write_SteerWhlAgGrdtMaskBusHiSpd_Val(SteerWhlAgGrdtMask_Cnt_T_u08);
	(void)Rte_Write_SteerWhlAgAlvRollgCntBusHiSpd_Val(SteerWhlAgRollCnt_Cnt_T_u08);
	(void)Rte_Write_SteerWhlAgSnsrChksBusHiSpd_Val(SteerWhlAgSnsrChks_Cnt_T_u16);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Msg1E5HiSpdCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg1E5HiSpdCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg1E5HiSpdCallBack_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg1E5BusHiSpd_CODE) Msg1E5HiSpdCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg1E5HiSpdCallBack_Oper
 *********************************************************************************************************************/

	*Rte_Pim_GmMsg1E5BusHiSpdRollgCntr() += 1U;
	*Rte_Pim_GmMsg1E5BusHiSpdRollgCntr() &= GMMSG1E5BUSHISPDROLLGCNTRMASK_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg1E5BusHiSpd_STOP_SEC_CODE
#include "GmMsg1E5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
