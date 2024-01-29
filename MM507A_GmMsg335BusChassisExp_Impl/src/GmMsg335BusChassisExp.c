/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg335BusChassisExp.c
 *     SW-C Type:  GmMsg335BusChassisExp
 *  Generated at:  Tue Aug 30 12:50:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg335BusChassisExp>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   GmMsg335BusChassisExp.c
* Module Description: GM 0x335 Chassis Expansion Message Processing
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         4 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 09/22/15  1        JWJ       Initial file creation                                                        EA4#1718
* 04/20/16  2        JWJ       Added limit to APA state output value as per EA4#3975                        EA4#4615
* 07/12/16  3        JWJ       Corrected the torque sensor fault logic per EA4#5908                         EA4#6226
* 08/30/16  4        JWJ       EA4#6742: Change HwTqLoaMtgnEna to HwTqIdptSig with cal threshold            EA4#6952
*                              EA4#7001: Updated rolling counter strategy to employ callback approach       EA4#6952
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_GmMsg335BusChassisExp.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"


#define GMMSG335BUSHISPDROLLGCNTRMASK_CNT_U08         3U
#define GMMSG335BUSHISPDVLD_CNT_U08                   0U
#define GMMSG335BUSHISPDINVLD_CNT_U08                 1U
#define GMMSG335BUSCHASSISEXPPROTNVALMASK_CNT_U08     3U
#define GMMSG335BUSCHASSISEXPSTEERAVLSTSMAX_CNT_U08   3U

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
 *   uint8 *Rte_Pim_GmMsg335BusChassisExpRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *
 *********************************************************************************************************************/


#define GmMsg335BusChassisExp_START_SEC_CODE
#include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg335BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_ApaDrvrIntvDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ApaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdProtnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlStsProtnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val(uint8 data)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg335BusChassisExp_CODE) GmMsg335BusChassisExpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg335BusChassisExpPer1
 *********************************************************************************************************************/

	VAR(boolean, AUTOMATIC) ApaDrvIntvDetd_Cnt_T_logl;
	VAR(uint8, AUTOMATIC) ApaSt_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) HwTqIdptSig_Cnt_T_u08;

	VAR(uint8, AUTOMATIC) RollgCntr_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) IntvDetd_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) IntvDetdProtnVal_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) IntvDetdVld_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerAvlSts_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerAvlStsProtnVal_Cnt_T_u08;


	/* Read inputs */
	(void)Rte_Read_ApaDrvrIntvDetd_Logl(&ApaDrvIntvDetd_Cnt_T_logl);
	(void)Rte_Read_ApaSt_Val(&ApaSt_Cnt_T_u08);
	(void)Rte_Read_HwTqIdptSig_Val(&HwTqIdptSig_Cnt_T_u08);


	if (HwTqIdptSig_Cnt_T_u08 <= Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val())
	{
		IntvDetdVld_Cnt_T_u08 = GMMSG335BUSHISPDINVLD_CNT_U08;
	}
	else
	{
		IntvDetdVld_Cnt_T_u08 = GMMSG335BUSHISPDVLD_CNT_U08;
	}

	IntvDetd_Cnt_T_u08 = (uint8)ApaDrvIntvDetd_Cnt_T_logl;
	SteerAvlSts_Cnt_T_u08 = Min_u08(ApaSt_Cnt_T_u08, GMMSG335BUSCHASSISEXPSTEERAVLSTSMAX_CNT_U08);

	/* Update the rolling counters */
	RollgCntr_Cnt_T_u08 = *Rte_Pim_GmMsg335BusChassisExpRollgCntr();

	IntvDetdProtnVal_Cnt_T_u08 = (uint8)(IntvDetd_Cnt_T_u08 << 1);
	IntvDetdProtnVal_Cnt_T_u08 += IntvDetdVld_Cnt_T_u08;
	IntvDetdProtnVal_Cnt_T_u08 += RollgCntr_Cnt_T_u08;
	IntvDetdProtnVal_Cnt_T_u08 = (uint8)~IntvDetdProtnVal_Cnt_T_u08;
	IntvDetdProtnVal_Cnt_T_u08 += 1u;
	IntvDetdProtnVal_Cnt_T_u08 &= GMMSG335BUSCHASSISEXPPROTNVALMASK_CNT_U08;

	SteerAvlStsProtnVal_Cnt_T_u08 = SteerAvlSts_Cnt_T_u08;
	SteerAvlStsProtnVal_Cnt_T_u08 += RollgCntr_Cnt_T_u08;
	SteerAvlStsProtnVal_Cnt_T_u08 = (uint8)~SteerAvlStsProtnVal_Cnt_T_u08;
	SteerAvlStsProtnVal_Cnt_T_u08 += 1u;
	SteerAvlStsProtnVal_Cnt_T_u08 &= GMMSG335BUSCHASSISEXPPROTNVALMASK_CNT_U08;


	/* Write outputs */
	(void)Rte_Write_DrvrSteerIntvDetd_Val(IntvDetd_Cnt_T_u08);
	(void)Rte_Write_DrvrSteerIntvDetdProtnVal_Val(IntvDetdProtnVal_Cnt_T_u08);
	(void)Rte_Write_DrvrSteerIntvDetdRollgCntr_Val(RollgCntr_Cnt_T_u08);
	(void)Rte_Write_DrvrSteerIntvDetdVld_Val(IntvDetdVld_Cnt_T_u08);
	(void)Rte_Write_ElecPowerSteerAvlSts_Val(SteerAvlSts_Cnt_T_u08);
	(void)Rte_Write_ElecPowerSteerAvlStsProtnVal_Val(SteerAvlStsProtnVal_Cnt_T_u08);
	(void)Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val(RollgCntr_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Msg335TxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg335TxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg335TxCallBack_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg335BusChassisExp_CODE) Msg335TxCallBack_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Msg335TxCallBack_Oper
 *********************************************************************************************************************/

	*Rte_Pim_GmMsg335BusChassisExpRollgCntr() += 1U;
	*Rte_Pim_GmMsg335BusChassisExpRollgCntr() &= GMMSG335BUSHISPDROLLGCNTRMASK_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg335BusChassisExp_STOP_SEC_CODE
#include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
