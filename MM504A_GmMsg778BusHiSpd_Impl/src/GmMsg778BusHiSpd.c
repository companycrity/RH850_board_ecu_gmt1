/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmMsg778BusHiSpd.c
 *     SW-C Type:  GmMsg778BusHiSpd
 *  Generated at:  Wed May 25 12:51:48 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmMsg778BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   GmMsg778BusHiSpd.c
* Module Description: GM 0x778 High Speed Message Processing
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         4 %
* %derived_by:      nz2654 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 05/24/16  1        JWJ       Initial file creation                                                        EA4#5525
* 09/27/16  2        JWJ       EA4#7065: UTP Coverage issues in serach function leading to endless loop     EA4#7665
*                              EA4#6730: Correct timing for updating signals in message                     EA4#7665
*                              EA4#7089: Removed support for non-compliant "test not complete" status bits  EA4#7665
* 11/22/16  3        HM        Fixed anomaly EA4#8153. Corrected 778 message broadcasting logic             EA4#8481
* 12/15/16  4        HM        EA4#6720: Replaced Dem_Cfg_GlobalEventCount function with 
*                                        DEM_G_NUMBER_OF_EVENTS constant                                    EA4#8709
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

#include "Rte_GmMsg778BusHiSpd.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Dem.h"
#include "Os.h"


#define STININ_CNT_U08          0U
#define STPND_CNT_U08           1U
#define STSENT_CNT_U08          2U
#define STRCVR_CNT_U08          3U
#define INVLDEVEID_CNT_U08      0U
#define DTCSRC_CNT_U08          0x31U
#define TRIGTI_100MICROSEC_U32  15000U
#define STSARYSIZE_CNT_U08      40U


typedef struct {
    boolean Pass;
    uint8   EveId;
} NtEveInfoRec;


static FUNC(void, GmMsg778BusHiSpd_CODE) SortDtcMap(VAR(uint32, AUTOMATIC) DtcAry_Ptr_T_u32[], VAR(uint8, AUTOMATIC) EveAry_Ptr_T_u08[], VAR(uint8, AUTOMATIC) Tot_Cnt_T_u08);
static FUNC(uint8, GmMsg778BusHiSpd_CODE) LookupEveId(VAR(uint32, AUTOMATIC) Dtc_Cnt_T_u32);
static FUNC(uint8, GmMsg778BusHiSpd_CODE) GetPndEve(void);
static FUNC(void, GmMsg778BusHiSpd_CODE) SetFaildEve(void);
static FUNC(uint8, GmMsg778BusHiSpd_CODE) GetBit(VAR(uint8, AUTOMATIC) Sts_Cnt_T_u08, VAR(uint8, AUTOMATIC) Bit_Cnt_T_u08);
static FUNC(void, GmMsg778BusHiSpd_CODE) DtcStsChgd(VAR(uint8, AUTOMATIC) EveId_Cnt_T_u08, VAR(boolean, AUTOMATIC) Pass_Cnt_T_logl);

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
 * Boolean: Boolean
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * UInt8: Integer in interval [0...255]
 *
 * Enumeration Types:
 * ==================
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u32_40: Array with 40 element(s) of type uint32
 * Ary1D_u8_40: Array with 40 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_TrigTmr(void)
 *   uint8 *Rte_Pim_ActvEveId(void)
 *   uint8 *Rte_Pim_EveCnt(void)
 *   boolean *Rte_Pim_TrigActv(void)
 *   uint32 *Rte_Pim_DtcMap(void)
 *   uint8 *Rte_Pim_DtcTrigStsAry(void)
 *   uint8 *Rte_Pim_EveMap(void)
 *
 *********************************************************************************************************************/


#define GmMsg778BusHiSpd_START_SEC_CODE
#include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CallBackDtcStsChgd
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DTCStatusChanged> of PortPrototype <CallBackDtcStsChgd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CallbackDTCStatusChange_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, GmMsg778BusHiSpd_CODE) CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CallBackDtcStsChgd (returns application error)
 *********************************************************************************************************************/

	VAR(boolean, AUTOMATIC) Rprt_Cnt_T_logl = TRUE;
	VAR(boolean, AUTOMATIC) Pass_Cnt_T_logl = FALSE;
	VAR(uint8, AUTOMATIC) EveId_Cnt_T_u08;
	VAR(NtEveInfoRec, AUTOMATIC) EveInfo_Cnt_T_str;

	/* Check to see if this is an event we care about before proceeding */
	if (((DTCStatusNew & DEM_UDS_STATUS_TF) == DEM_UDS_STATUS_TF) &&
		((DTCStatusOld & DEM_UDS_STATUS_TF) != DEM_UDS_STATUS_TF))
	{
		/* On transition to fail */
		Pass_Cnt_T_logl = FALSE;
	}
	else if (((DTCStatusNew & DEM_UDS_STATUS_TF) != DEM_UDS_STATUS_TF) &&
			 ((DTCStatusOld & DEM_UDS_STATUS_TF) == DEM_UDS_STATUS_TF))
	{
		/* On transition to pass */
		Pass_Cnt_T_logl = TRUE;
	}
	else
	{
		/* This is a status change that we simply don't care about - ignore it */
		Rprt_Cnt_T_logl = FALSE;
	}

	/* If this is a change worth reporting... */
	if (Rprt_Cnt_T_logl == TRUE)
	{
		EveId_Cnt_T_u08 = LookupEveId(DTC);

		/* And an event ID was successfully found */
		if (EveId_Cnt_T_u08 != INVLDEVEID_CNT_U08)
		{
			/* Determine if a non-trusted function call is needed */
			if (Appl6 == GetApplicationID()) /* TODO: This should be made configurable via Configurator setting */
			{
				/* Call the function from this application */
				DtcStsChgd(EveId_Cnt_T_u08, Pass_Cnt_T_logl);
			}
			else
			{
				/* Request non-trusted function call before continuing */
				EveInfo_Cnt_T_str.EveId = EveId_Cnt_T_u08;
				EveInfo_Cnt_T_str.Pass = Pass_Cnt_T_logl;
				(void)CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_GmMsg778BusHiSpd_DtcStsChgd, &EveInfo_Cnt_T_str);
			}
		}
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrTrigStsAry_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrTrigStsAry>
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
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrTrigStsAry_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg778BusHiSpd_CODE) ClrTrigStsAry_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrTrigStsAry_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	/* Clear the last failed event ID and set the status for each CTC to INITIALIZATION */
	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < STSARYSIZE_CNT_U08; Idx_Cnt_T_u08 += 1U)
	{
		Rte_Pim_DtcTrigStsAry()[Idx_Cnt_T_u08] = STININ_CNT_U08;
	}

	/* Clear the triggered flag in the event that a CTC is currently triggered */
	*Rte_Pim_TrigActv() = FALSE;
	*Rte_Pim_ActvEveId() = INVLDEVEID_CNT_U08;
	SetFaildEve();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg778BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
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
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DtcTrigStsAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg778BusHiSpdInit1
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) EveId_Cnt_T_u08;
	VAR(uint32, AUTOMATIC) DtcNr_Cnt_T_u32;
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	/* Aggregate a list of DTCs and their corresponding event IDs */
	*Rte_Pim_EveCnt() = 0U;
	for (EveId_Cnt_T_u08 = 1U; EveId_Cnt_T_u08 < DEM_G_NUMBER_OF_EVENTS; EveId_Cnt_T_u08 += 1U)
	{
		if (Dem_GetDTCOfEvent((uint16)EveId_Cnt_T_u08, DEM_DTC_FORMAT_UDS, &DtcNr_Cnt_T_u32) == E_OK)
		{
			Rte_Pim_DtcMap()[*Rte_Pim_EveCnt()] = DtcNr_Cnt_T_u32;
			Rte_Pim_EveMap()[*Rte_Pim_EveCnt()] = EveId_Cnt_T_u08;
			*Rte_Pim_EveCnt() += 1U;
		}
	}
	/* Sort the list by DTC number */
	SortDtcMap(Rte_Pim_DtcMap(), Rte_Pim_EveMap(), *Rte_Pim_EveCnt());


	/* Progress the states forward to begin this power cycle */
	for (Idx_Cnt_T_u08 = 1U; Idx_Cnt_T_u08 < STSARYSIZE_CNT_U08; Idx_Cnt_T_u08 += 1U)
	{
		/* Any CTCs currently in the RECOVER state get promoted back to ININ to await re-transmission upon failure */
		if (Rte_Pim_DtcTrigStsAry()[Idx_Cnt_T_u08] == STRCVR_CNT_U08)
		{
			Rte_Pim_DtcTrigStsAry()[Idx_Cnt_T_u08] = STININ_CNT_U08;
		}

		/* Any CTCs currently in the SENT state get promoted to RECOVER to attempt recovery */
		if (Rte_Pim_DtcTrigStsAry()[Idx_Cnt_T_u08] == STSENT_CNT_U08)
		{
			Rte_Pim_DtcTrigStsAry()[Idx_Cnt_T_u08] = STRCVR_CNT_U08;
		}
	}


	/* Send the first frame as an empty frame (all zeros) */
	*Rte_Pim_ActvEveId() = INVLDEVEID_CNT_U08;
	SetFaildEve();
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TrigTmr());


	/* For throughput reasons it was elected to call this function every ignition cycle rather than on state changes */
	(void)Rte_Call_DtcTrigStsAry_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg778BusHiSpdPer1
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
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmMsg778BusHiSpdPer1
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) NextEveId_Cnt_T_u08;
	VAR(uint32, AUTOMATIC) ElpdTi_100MicroSec_T_u32;

	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_TrigTmr(), &ElpdTi_100MicroSec_T_u32);

	if (ElpdTi_100MicroSec_T_u32 > TRIGTI_100MICROSEC_U32)
	{
		if (*Rte_Pim_TrigActv() == TRUE)
		{
			/* Time is up - clear the triggered flag to stop reporting this CTC as triggered */
			*Rte_Pim_TrigActv() = FALSE;

			/* Move the status for the CTC forward to indicate that it was sent */
			Rte_Pim_DtcTrigStsAry()[*Rte_Pim_ActvEveId()] = STSENT_CNT_U08;
		}
	}

	if (*Rte_Pim_TrigActv() == FALSE)
	{
		/* Not currently sending a triggered CTC */
		NextEveId_Cnt_T_u08 = GetPndEve();

		if (NextEveId_Cnt_T_u08 != INVLDEVEID_CNT_U08)
		{
			/* There's a CTC pending transmission - restart the timer, set the event ID and trigger it */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TrigTmr());
			*Rte_Pim_ActvEveId() = NextEveId_Cnt_T_u08;
			*Rte_Pim_TrigActv() = TRUE;
			SetFaildEve();
		}
	}


	(void)Rte_Write_DtcTrig_Val(*Rte_Pim_TrigActv());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmMsg778BusHiSpd_STOP_SEC_CODE
#include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
  * Name:        SortDtcMap
  * Description: Sort a list of DTC numbers in ascending order as well as the event id array that is 1:1 with the DTC
  *              numbers.  This sort is performed to speed the lookups at runtime to convert DTC numbers to event IDs.
  * Inputs:      DtcAryPtr: Pointer to array of uint32 DTC numbers to be sorted.
  *              EveAryPtr: Pointer to array of uint8 Event IDs corresponding to the DTC numbers to be sorted.
  *              Tot: Total number of events to be sorted.  Shall be greater than 1 and less than 256.
  * Outputs:     NONE
  * Usage Notes: Current implementation is limited to 254 events MAX.  This is aligned with Nexteers DiagcMgr
  *              implementation which only currently supports the same number.
  ********************************************************************************************************************/
static FUNC(void, GmMsg778BusHiSpd_CODE) SortDtcMap(
		VAR(uint32, AUTOMATIC) DtcAry_Ptr_T_u32[],
		VAR(uint8, AUTOMATIC) EveAry_Ptr_T_u08[],
		VAR(uint8, AUTOMATIC) Tot_Cnt_T_u08)
{
	VAR(uint8, AUTOMATIC) Itrn_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Swap_Cnt_T_u08;
	VAR(uint32, AUTOMATIC) Swap_Cnt_T_u32;

	/* Don't run routine if the count of DTCs is less than two */
	if (Tot_Cnt_T_u08 > 1U)
	{
		for (Itrn_Cnt_T_u08 = 0U; Itrn_Cnt_T_u08 < (Tot_Cnt_T_u08 - 1U); Itrn_Cnt_T_u08 += 1U)
		{
			for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < (Tot_Cnt_T_u08 - Itrn_Cnt_T_u08 - 1U); Idx_Cnt_T_u08 += 1U)
			{
				/* Arrays are sorted against the DTC number - if current is larger than the next... */
				if (DtcAry_Ptr_T_u32[Idx_Cnt_T_u08] > DtcAry_Ptr_T_u32[Idx_Cnt_T_u08 + 1U])
				{
					/* Swap the DTC number */
					Swap_Cnt_T_u32 = DtcAry_Ptr_T_u32[Idx_Cnt_T_u08];
					DtcAry_Ptr_T_u32[Idx_Cnt_T_u08] = DtcAry_Ptr_T_u32[Idx_Cnt_T_u08 + 1U];
					DtcAry_Ptr_T_u32[Idx_Cnt_T_u08 + 1U] = Swap_Cnt_T_u32;

					/* Swap it's corresponding Event ID */
					Swap_Cnt_T_u08 = EveAry_Ptr_T_u08[Idx_Cnt_T_u08];
					EveAry_Ptr_T_u08[Idx_Cnt_T_u08] = EveAry_Ptr_T_u08[Idx_Cnt_T_u08 + 1U];
					EveAry_Ptr_T_u08[Idx_Cnt_T_u08 + 1U] = Swap_Cnt_T_u08;
				}
			}
		}
	}
}


/**********************************************************************************************************************
  * Name:        LookupEveId
  * Description: Perform a lookup of the event ID for the specified DTC number using the mapping PIM established
  *              during the init function.
  * Inputs:      EveId: ID of the event for which the outputs shall be set to.
  *              Trig: Triggered flag value.  Changes based upon time.
  * Outputs:     EventId
  * Usage Notes: The DTC and Event ID arras MUST be sorted in ascending order by DTC number by calling SortDtcMap
  *              before using this function.
  ********************************************************************************************************************/
static FUNC(uint8, GmMsg778BusHiSpd_CODE) LookupEveId(VAR(uint32, AUTOMATIC) Dtc_Cnt_T_u32)
{
	VAR(uint8, AUTOMATIC) First_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Lst_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Centr_Cnt_T_u08;

	VAR(uint8, AUTOMATIC) EveId_Cnt_T_u08 = INVLDEVEID_CNT_U08;

	First_Cnt_T_u08 = 0U;
	Lst_Cnt_T_u08 = (*Rte_Pim_EveCnt() - 1U);
	Centr_Cnt_T_u08 = Lst_Cnt_T_u08 / 2U;

	while ((First_Cnt_T_u08 <= Lst_Cnt_T_u08) && (EveId_Cnt_T_u08 == INVLDEVEID_CNT_U08) && (Centr_Cnt_T_u08 > 0U))
	{
		if (Rte_Pim_DtcMap()[Centr_Cnt_T_u08] < Dtc_Cnt_T_u32)
		{
			/* Not in the lower half */
			First_Cnt_T_u08 = Centr_Cnt_T_u08 + 1U;
		}
		else if (Rte_Pim_DtcMap()[Centr_Cnt_T_u08] == Dtc_Cnt_T_u32)
		{
			/* Found a match, get the corresponding event ID */
			EveId_Cnt_T_u08 = Rte_Pim_EveMap()[Centr_Cnt_T_u08];
		}
		else
		{
			/* Not in the upper half */
			Lst_Cnt_T_u08 = Centr_Cnt_T_u08 - 1U;
		}

		Centr_Cnt_T_u08 = (First_Cnt_T_u08 + Lst_Cnt_T_u08) / 2U;
	}

	return EveId_Cnt_T_u08;
}


/**********************************************************************************************************************
  * Name:        GetPndEve
  * Description: Get the lowest number pending CTC event to be transmitted next.
  * Inputs:      NONE
  * Outputs:     Eve: The ID of the next event to be transmitted as failed or INVLDEVEID_CNT_U08 if no events are
  *                   currently pending reporting.
  * Usage Notes: NONE
  ********************************************************************************************************************/
static FUNC(uint8, GmMsg778BusHiSpd_CODE) GetPndEve(void)
{
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	VAR(uint8, AUTOMATIC) EveId_Cnt_T_u08 = INVLDEVEID_CNT_U08;

	for (Idx_Cnt_T_u08 = 1U;
		((Idx_Cnt_T_u08 < STSARYSIZE_CNT_U08) && (EveId_Cnt_T_u08 == INVLDEVEID_CNT_U08));
		Idx_Cnt_T_u08 += 1U)
	{
		if (Rte_Pim_DtcTrigStsAry()[Idx_Cnt_T_u08] == STPND_CNT_U08)
		{
			EveId_Cnt_T_u08 = Idx_Cnt_T_u08;
		}
	}

	return EveId_Cnt_T_u08;
}


/**********************************************************************************************************************
  * Name:        SetFaildEve
  * Description: Set the outputs for the message according to the specified event ID.  Current status will be gathered
  *              from the DEM regarding the DTC.
  * Inputs:      NONE - PIM is used to make decisions.
  * Outputs:     RTE outputs written directly (see usage note below).
  * Usage Notes: For simplicity, the RTE outputs are written directly from this function.  It is expected that the
  *              calling function has permissions to write to these outputs.
  ********************************************************************************************************************/
static FUNC(void, GmMsg778BusHiSpd_CODE) SetFaildEve(void)
{
	VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;

	VAR(uint32, AUTOMATIC) Dtc_Cnt_T_u32;
	VAR(uint8, AUTOMATIC) DtcSts_Cnt_T_u08;

	VAR(uint16, AUTOMATIC) DtcNr_Cnt_T_u16 = 0U;
	VAR(uint8, AUTOMATIC) DtcFailrTyp_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) WarnIndcrReqdSts_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) TstFaildPwrUpSts_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) TstNotPassdPwrUpSts_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) HistSts_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) TstFaildCodClrdSts_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) TstNotPassdCodClrdSts_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) CurrSts_Cnt_T_u08 = 0U;
	VAR(uint8, AUTOMATIC) CodSupported_Cnt_T_u08 = 0U;

	(void)Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);

	if ((*Rte_Pim_ActvEveId() != INVLDEVEID_CNT_U08) && (SysSt_Cnt_T_enum != SYSST_OFF))
	{
		/* Some event is actively triggered and we are not in OFF - DEM is shutdown in OFF state and cannot be polled */
		if (Dem_GetDTCOfEvent((uint16)*Rte_Pim_ActvEveId(), DEM_DTC_FORMAT_UDS, &Dtc_Cnt_T_u32) == E_OK)
		{
			/* Convert 24 bits returned from GetDTCOfEvent into to counterparts for transmission */
			DtcNr_Cnt_T_u16 = (uint16)((Dtc_Cnt_T_u32 >> 8U) & 0xFFFFU);
			DtcFailrTyp_Cnt_T_u08 = (uint8)(Dtc_Cnt_T_u32 & 0xFFU);
		}
		else
		{
			/* Failed to get DTC info for the requested event ID, this should never happen */
		}

		if (Dem_GetEventStatus((uint16)*Rte_Pim_ActvEveId(), &DtcSts_Cnt_T_u08) == E_OK)
		{
			/* Convert the UDS status bits to GM status bits for the various output signals */
			CurrSts_Cnt_T_u08               = GetBit(DtcSts_Cnt_T_u08, 0U);  /* UDS Bit 0 / GM Bit 1 - TestFailed */
			TstFaildPwrUpSts_Cnt_T_u08      = GetBit(DtcSts_Cnt_T_u08, 1U);  /* UDS Bit 1 / GM Bit 6 - Test Failed This Operation Cycle */
			HistSts_Cnt_T_u08               = GetBit(DtcSts_Cnt_T_u08, 2U);  /* UDS Bit 2 / GM Bit 4 - PendingDTC */
			/* UDS Bit 4 / GM Bit 2 - Test not Completed Since Last Clear is unsupported */
			TstFaildCodClrdSts_Cnt_T_u08    = GetBit(DtcSts_Cnt_T_u08, 5U);  /* UDS Bit 5 / GM Bit 3 - Test Failed Since Last Clear */
			/* UDS Bit 6 / GM Bit 5 - Test not Completed This Operation Cycle is unsupported */
			WarnIndcrReqdSts_Cnt_T_u08      = GetBit(DtcSts_Cnt_T_u08, 7U);  /* UDS Bit 7 / GM Bit 7 - Warning Indicator Requested */
			CodSupported_Cnt_T_u08          = 1U;                            /* GM Bit 0 - Bit not supported by DEM - always "supported" */
		}
		else
		{
			/* Some kind of error occurred while fetching this DTCs status information */
		}
	}
	else
	{
		/* This is an invalid event ID or we are in OFF, we would like to send a message with all zeros in this case */
	}

	(void)Rte_Write_DtcSrc_Val(DTCSRC_CNT_U08);
	(void)Rte_Write_DtcNr_Val(DtcNr_Cnt_T_u16);
	(void)Rte_Write_DtcFailrTyp_Val(DtcFailrTyp_Cnt_T_u08);
	(void)Rte_Write_WarnIndcrReqdSts_Val(WarnIndcrReqdSts_Cnt_T_u08);
	(void)Rte_Write_TstFaildPwrUpSts_Val(TstFaildPwrUpSts_Cnt_T_u08);
	(void)Rte_Write_TstNotPassdPwrUpSts_Val(TstNotPassdPwrUpSts_Cnt_T_u08);
	(void)Rte_Write_HistSts_Val(HistSts_Cnt_T_u08);
	(void)Rte_Write_TstFaildCodClrdSts_Val(TstFaildCodClrdSts_Cnt_T_u08);
	(void)Rte_Write_TstNotPassdCodClrdSts_Val(TstNotPassdCodClrdSts_Cnt_T_u08);
	(void)Rte_Write_CurrSts_Val(CurrSts_Cnt_T_u08);
	(void)Rte_Write_CodSupported_Val(CodSupported_Cnt_T_u08);
	(void)Rte_Write_DtcFltTyp_Val(0U);  /* SCIR states that this signal shall always be zero */
}


/**********************************************************************************************************************
  * Name:        GetBit
  * Description: Fetch a single bit from the provided byte.
  * Inputs:      Sts: Byte input from which the bit shall be extracted.
  *              Bit: The bit number [0, 7] that shall be extracted from Sts.
  * Outputs:     Specified bit value in range [0, 1].
  * Usage Notes: NONE
  ********************************************************************************************************************/
static FUNC(uint8, GmMsg778BusHiSpd_CODE) GetBit(
		VAR(uint8, AUTOMATIC) Sts_Cnt_T_u08,
		VAR(uint8, AUTOMATIC) Bit_Cnt_T_u08)
{
	return (uint8)(Sts_Cnt_T_u08 >> Bit_Cnt_T_u08) & 0x01U;
}


/**********************************************************************************************************************
  * Name:        DtcStsChgd
  * Description: Update the DTC status for a pass/fail event from the DTC status change callback function above.
  * Inputs:      EveId: Event ID that is being reported as pass/fail.
  *              Pass: Boolean flag indicating pass event when TRUE or fail event when FALSE.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
static FUNC(void, GmMsg778BusHiSpd_CODE) DtcStsChgd(
		VAR(uint8, AUTOMATIC) EveId_Cnt_T_u08,
		VAR(boolean, AUTOMATIC) Pass_Cnt_T_logl)
{
	if (Pass_Cnt_T_logl == FALSE)
	{
		/* On transition to fail */
		if (Rte_Pim_DtcTrigStsAry()[EveId_Cnt_T_u08] == STININ_CNT_U08)
		{
			/* Promote CTC from INITIALIZATION to PENDING to be transmitted by periodic */
			Rte_Pim_DtcTrigStsAry()[EveId_Cnt_T_u08] = STPND_CNT_U08;
		}
		else if (Rte_Pim_DtcTrigStsAry()[EveId_Cnt_T_u08] == STRCVR_CNT_U08)
		{
			/* A failure in the RECOVER state sends the state back to SENT */
			Rte_Pim_DtcTrigStsAry()[EveId_Cnt_T_u08] = STSENT_CNT_U08;
		}
		else
		{
			/* CTC is not in a state that leads to a change on this fail event */
		}
	}
}


/**********************************************************************************************************************
  * Name:        NONTRUSTED_NtWrapS_GmMsg778BusHiSpd_DtcStsChgd
  * Description: Non-trusted function callback used when an application context switch is required before calling
  *              DtcStsChgd.  DtcStsChgd modifies this application's RAM when updating the status PIM.
  * Inputs:      FunctionIndex: Non-trusted function index.
  *              FunctionParams: Pointer to non-trusted function parameter data.
  * Outputs:     NONE
  * Usage Notes: To be called in a global context from OS non-trusted function (NtWrapS).
  ********************************************************************************************************************/
FUNC(void, GmMsg778BusHiSpd_CODE) NONTRUSTED_NtWrapS_GmMsg778BusHiSpd_DtcStsChgd(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	DtcStsChgd(((NtEveInfoRec*)FunctionParams)->EveId, ((NtEveInfoRec*)FunctionParams)->Pass);
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
