/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_Tauj1CfgAndUse.c
 *     SW-C Type:  CDD_Tauj1CfgAndUse
 *  Generated at:  Tue Aug 11 13:22:48 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_Tauj1CfgAndUse>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015,2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_Tauj1CfgAndUse.c
* Module Description: Implementation of Tauj1 Configuration and Use FDD CM460A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 2 %
* %derived_by       : pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 08/11/15  1        SV        Initial Version                                                                 EA4#1237 
* 03/19/16  2        SV        updated for FDD ver1.2.0                                                        EA4#4643                                                                 
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_Tauj1CfgAndUse.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "tauj_regs.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of RTE_write functions */
 
#define PHAONTIMEASDMAX_NANOSEC_U32 		4294967295U
#define PHAFBDELTACNTMAX_CNT_U32 			320000U
#define PHAFBDELTACNTMIN_CNT_U32 			0U
#define TAUJ1TIPERCNT_NANOSECPERCNT_U15P1	((uint16)(NXTRFIXDPT_FLOATTOP1_ULS_F32 * 12.5F))

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
 *   uint32 *Rte_Pim_PhaOnTiCntrDPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrEPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrFPrev(void)
 *
 *********************************************************************************************************************/


#define CDD_Tauj1CfgAndUse_START_SEC_CODE
#include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Tauj1CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Tauj1CfgAndUseInit1
 *********************************************************************************************************************/

	/* TAUJ1TPS is shared between CM460A and AR102A. So configured only owned CM460 channel.*/
	TAUJ1PRS0 = 0U;		/* TAUJ1.TPS.BIT.PRS0 */
		
	TAUJ1CMUR0 = (uint8)((uint8)3U << 0U);		/* TIS */
	
	TAUJ1CMUR1 = (uint8)((uint8)3U << 0U);		/* TIS */
	
	TAUJ1CMUR2 = (uint8)((uint8)3U << 0U);		/* TIS */
	
	TAUJ1CMOR0 = (uint16)((uint16)0x00U << 14U)	|		/* CKS */
				 (uint16)((uint16)0x00U << 12U) |		/* CCS */
			     (uint16)((uint16)0x00U << 11U) |		/* MAS */
			     (uint16)((uint16)0x02U << 8U)  |		/* STS */
				 (uint16)((uint16)0x01U << 6U)  |		/* COS */
			     (uint16)((uint16)0x1AU << 0U);			/* MD */
	
	TAUJ1CMOR1 = (uint16)((uint16)0x00U << 14U)	|		/* CKS */
				 (uint16)((uint16)0x00U << 12U) |		/* CCS */
				 (uint16)((uint16)0x00U << 11U) |		/* MAS */
				 (uint16)((uint16)0x02U << 8U)  |		/* STS */
				 (uint16)((uint16)0x01U << 6U)  |		/* COS */
				 (uint16)((uint16)0x1AU << 0U);			/* MD */
	
	TAUJ1CMOR2 = (uint16)((uint16)0x00U << 14U)	|		/* CKS */
				 (uint16)((uint16)0x00U << 12U) |		/* CCS */
				 (uint16)((uint16)0x00U << 11U) |		/* MAS */
				 (uint16)((uint16)0x02U << 8U)  |		/* STS */
				 (uint16)((uint16)0x01U << 6U)  |		/* COS */
				 (uint16)((uint16)0x1AU << 0U);			/* MD */
	
	/* TAUJ1TS is shared between CM460A and AR102A. So configured only CM460 owned channels.*/
	TAUJ1TS00 = 1U;		/* TAUJ1.TS.BIT.TS00 */ 
	TAUJ1TS01 = 1U;		/* TAUJ1.TS.BIT.TS01 */
	TAUJ1TS02 = 1U;		/* TAUJ1.TS.BIT.TS02 */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Tauj1CfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdD_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdE_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdF_Val(uint32 data)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUsePer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Tauj1CfgAndUsePer1
 *********************************************************************************************************************/
	VAR(uint32, AUTOMATIC)  Tmr0_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  Tmr1_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  Tmr2_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  PhaOnTiMeasdD_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  PhaOnTiMeasdE_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  PhaOnTiMeasdF_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) DeltaD_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) DeltaE_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) DeltaF_Cnt_T_u32;
		
	Tmr0_Cnt_T_u32 = TAUJ1CNT0;
	Tmr1_Cnt_T_u32 = TAUJ1CNT1;
	Tmr2_Cnt_T_u32 = TAUJ1CNT2;
	
	/* Over flows due to timer counter roll over are intentional and give the intended results. 
       This is applicable to all 3 timers */
	   
	/* Phase D Time Measurement */
	/* REQ: CM460A #87 I */
	if(Tmr0_Cnt_T_u32 >= *Rte_Pim_PhaOnTiCntrDPrev())
	{
		/* Delta >= 0 */
		DeltaD_Cnt_T_u32 = Tmr0_Cnt_T_u32 - *Rte_Pim_PhaOnTiCntrDPrev();
	}
	else
	{
		/* Delta < 0 */
		DeltaD_Cnt_T_u32 = (PHAONTIMEASDMAX_NANOSEC_U32 - *Rte_Pim_PhaOnTiCntrDPrev()) + Tmr0_Cnt_T_u32;
	}
	
	DeltaD_Cnt_T_u32 = Lim_u32(DeltaD_Cnt_T_u32,PHAFBDELTACNTMIN_CNT_U32,PHAFBDELTACNTMAX_CNT_U32);
	
	PhaOnTiMeasdD_Cnt_T_u32 = ((uint32)TAUJ1TIPERCNT_NANOSECPERCNT_U15P1 * DeltaD_Cnt_T_u32);

	PhaOnTiMeasdD_Cnt_T_u32 = (uint32)(PhaOnTiMeasdD_Cnt_T_u32 >> 1u);
	
	*Rte_Pim_PhaOnTiCntrDPrev() = Tmr0_Cnt_T_u32;
	/* ENDREQ: CM460A #87 */
	
	/* Phase E Time Measurement */
	/* REQ: CM460A #95 I */
	if(Tmr1_Cnt_T_u32 >= *Rte_Pim_PhaOnTiCntrEPrev())
	{
		/* Delta >= 0 */
		DeltaE_Cnt_T_u32 = Tmr1_Cnt_T_u32 - *Rte_Pim_PhaOnTiCntrEPrev();
	}
	else
	{
		/* Delta < 0 */
		DeltaE_Cnt_T_u32 = (PHAONTIMEASDMAX_NANOSEC_U32 - *Rte_Pim_PhaOnTiCntrEPrev()) + Tmr1_Cnt_T_u32;
	}
	
	DeltaE_Cnt_T_u32 = Lim_u32(DeltaE_Cnt_T_u32,PHAFBDELTACNTMIN_CNT_U32,PHAFBDELTACNTMAX_CNT_U32);
	
	PhaOnTiMeasdE_Cnt_T_u32 = ((uint32)TAUJ1TIPERCNT_NANOSECPERCNT_U15P1 * DeltaE_Cnt_T_u32);
	
	PhaOnTiMeasdE_Cnt_T_u32 = (uint32)(PhaOnTiMeasdE_Cnt_T_u32 >> 1u);
	
	*Rte_Pim_PhaOnTiCntrEPrev() = Tmr1_Cnt_T_u32;
	/* ENDREQ: CM460A #95 */
	
	/* Phase F Time Measurement */
	/* REQ: CM460A #96 I */
	if(Tmr2_Cnt_T_u32 >= *Rte_Pim_PhaOnTiCntrFPrev())
	{
		/* Delta >= 0 */
		DeltaF_Cnt_T_u32 = Tmr2_Cnt_T_u32 - *Rte_Pim_PhaOnTiCntrFPrev();
	}
	else
	{
		/* Delta < 0 */
		DeltaF_Cnt_T_u32 = (PHAONTIMEASDMAX_NANOSEC_U32 - *Rte_Pim_PhaOnTiCntrFPrev()) + Tmr2_Cnt_T_u32;
	}
	
	DeltaF_Cnt_T_u32 = Lim_u32(DeltaF_Cnt_T_u32,PHAFBDELTACNTMIN_CNT_U32,PHAFBDELTACNTMAX_CNT_U32);
	
	PhaOnTiMeasdF_Cnt_T_u32 = ((uint32)TAUJ1TIPERCNT_NANOSECPERCNT_U15P1 * DeltaF_Cnt_T_u32);

	PhaOnTiMeasdF_Cnt_T_u32 = (uint32)(PhaOnTiMeasdF_Cnt_T_u32 >> 1u);
	
	*Rte_Pim_PhaOnTiCntrFPrev() = Tmr2_Cnt_T_u32;
	/* ENDREQ: CM460A #96 */
	
	(void)Rte_Write_PhaOnTiMeasdD_Val(PhaOnTiMeasdD_Cnt_T_u32);
	(void)Rte_Write_PhaOnTiMeasdE_Val(PhaOnTiMeasdE_Cnt_T_u32);
	(void)Rte_Write_PhaOnTiMeasdF_Val(PhaOnTiMeasdF_Cnt_T_u32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_Tauj1CfgAndUse_STOP_SEC_CODE
#include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
