/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg148BusHiSpd.c
 *     SW-C Type:  GmMsg148BusHiSpd
 *  Generated at:  Wed May 25 12:21:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg148BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   GmMsg148BusHiSpd.c
* Module Description: GM 0x148 High Speed Message Processing
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 05/23/16  1        JWJ       Initial file creation                                                        EA4#5525
* 07/12/16  2        JWJ       Corrected shared usage of Sts variable in the GetIndcrSts function           EA4#6566
***********************************************************************************************************************/
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
  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_GmMsg148BusHiSpd.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Dem.h"


#define GMMSG148BUSHISPDLAMPOFF_CNT_U08  0U
#define GMMSG148BUSHISPDLAMPON_CNT_U08   1U


static FUNC(uint8, GmMsg148BusHiSpd_CODE) GetIndcrSts(VAR(uint8, AUTOMATIC) IndcrNr_Cnt_T_u08);

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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 *********************************************************************************************************************/


#define GmMsg148BusHiSpd_START_SEC_CODE
#include "GmMsg148BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg148BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg148BusHiSpd_CODE) GmMsg148BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg148BusHiSpdInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg148BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrSteerIndcr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerAssiLimd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerAssiLimdLvl2_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerAssiLimdLvl3_Val(uint8 data)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg148BusHiSpd_CODE) GmMsg148BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg148BusHiSpdPer1
 *********************************************************************************************************************/

	VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;

	VAR(uint8, AUTOMATIC) PwrSteerIndcr_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerAssiLimd_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerAssiLimdLvl2_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) SteerAssiLimdLvl3_Cnt_T_u08;

	(void)Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);

	if (SysSt_Cnt_T_enum != SYSST_OFF)
	{
		/* DEM is shutdown in the OFF state, so we cannot query for indicator status any longer */
		PwrSteerIndcr_Cnt_T_u08 = GetIndcrSts(DemConf_DemIndicator_PwrSteerIndcr);
		SteerAssiLimd_Cnt_T_u08 = GetIndcrSts(DemConf_DemIndicator_SteerAssiLimd);
		SteerAssiLimdLvl2_Cnt_T_u08 = GetIndcrSts(DemConf_DemIndicator_SteerAssiLimdLvl2);
		SteerAssiLimdLvl3_Cnt_T_u08 = GetIndcrSts(DemConf_DemIndicator_SteerAssiLimdLvl3);

		/* Outputs intentionally only written when not in OFF state - on transition to off, last values will be held */
		(void)Rte_Write_PwrSteerIndcr_Val(PwrSteerIndcr_Cnt_T_u08);
		(void)Rte_Write_SteerAssiLimd_Val(SteerAssiLimd_Cnt_T_u08);
		(void)Rte_Write_SteerAssiLimdLvl2_Val(SteerAssiLimdLvl2_Cnt_T_u08);
		(void)Rte_Write_SteerAssiLimdLvl3_Val(SteerAssiLimdLvl3_Cnt_T_u08);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg148BusHiSpd_STOP_SEC_CODE
#include "GmMsg148BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static FUNC(uint8, GmMsg148BusHiSpd_CODE) GetIndcrSts(VAR(uint8, AUTOMATIC) IndcrNr_Cnt_T_u08)
{
	VAR(uint8, AUTOMATIC) Sts_Cnt_T_u08 = GMMSG148BUSHISPDLAMPOFF_CNT_U08;
	VAR(uint8, AUTOMATIC) DemSts_Cnt_T_u08;

	if (Dem_GetIndicatorStatus(IndcrNr_Cnt_T_u08, &DemSts_Cnt_T_u08) == E_OK)
	{
		if (DemSts_Cnt_T_u08 != DEM_INDICATOR_OFF)
		{
			Sts_Cnt_T_u08 = GMMSG148BUSHISPDLAMPON_CNT_U08;
		}
	}

	return Sts_Cnt_T_u08;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
