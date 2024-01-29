/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_ChkPtAppl10.c
 *     SW-C Type:  CDD_ChkPtAppl10
 *  Generated at:  Fri Oct  7 09:09:05 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_ChkPtAppl10>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_ChkPtAppl10.c
* Module Description: Implementation of GM Checkpoint Component (RTE)
* Project           : CBD 
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          7 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/08/15  1        LWW       Initial version for 1a release                                                  EA4#578
* 07/15/15  2        LWW       Update for 4ms task                                                             EA4#1115
* 08/17/15  3        JWJ       Updates for 10ms task                                                           EA4#1334
* 02/16/16  4        JWJ       Added client calls for state of health raw signal updates                       EA4#2709
* 02/29/16  5        JWJ       Added Update Statistics function calls for each of the per funcs w/ SoH funcs   EA4#4026
* 05/06/16  6        JWJ       Added new State of Health signals                                               EA4#5669
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
  StHlthMonSig2
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  StHlthMonSig3
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.


 Operation Prototypes:
 =====================
  CheckpointReached of Port Interface WdgM_AliveSupervision
    Indicates to the Watchdog Manager that a Checkpoint within a Supervised Entity has been reached.

 *********************************************************************************************************************/

#include "Rte_CDD_ChkPtAppl10.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "Os.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
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
 * StHlthMonSig2: Enumeration of integer in interval [0...255] with enumerators
 *   STHLTHMONSIG_ECUTFILTD (0U)
 *   STHLTHMONSIG_ASSIDUETOVLTG (1U)
 *   STHLTHMONSIG_DIGTQSNSRA (2U)
 *   STHLTHMONSIG_DIGTQSNSRB (3U)
 *   STHLTHMONSIG_DIGTQIDPTSIG (4U)
 *   STHLTHMONSIG_DUTYCYC (5U)
 *   STHLTHMONSIG_EOTIMPCT (6U)
 *   STHLTHMONSIG_MOTPOS (7U)
 *   STHLTHMONSIG_MOTPOSABDIFF (8U)
 *   STHLTHMONSIG_MOTPOSACDIFF (9U)
 *   STHLTHMONSIG_MOTPOSBCDIFF (10U)
 *   STHLTHMONSIG_CURRMOTSUMABC (11U)
 *   STHLTHMONSIG_CURRMOTSUMDEF (12U)
 *   STHLTHMONSIG_MOTPOSPHASEA (13U)
 *   STHLTHMONSIG_MOTPOSPHASEB (14U)
 *   STHLTHMONSIG_MOTPOSPHASEC (15U)
 *   STHLTHMONSIG_MOTPOSPHASED (16U)
 *   STHLTHMONSIG_MOTPOSPHASEE (17U)
 *   STHLTHMONSIG_MOTPOSPHASEF (18U)
 *   STHLTHMONSIG_BITCORRN (19U)
 * StHlthMonSig3: Enumeration of integer in interval [0...255] with enumerators
 *   STHLTHMONSIG_ECUTFILTD (0U)
 *   STHLTHMONSIG_ASSIDUETOVLTG (1U)
 *   STHLTHMONSIG_DIGTQSNSRA (2U)
 *   STHLTHMONSIG_DIGTQSNSRB (3U)
 *   STHLTHMONSIG_DIGTQIDPTSIG (4U)
 *   STHLTHMONSIG_DUTYCYC (5U)
 *   STHLTHMONSIG_EOTIMPCT (6U)
 *   STHLTHMONSIG_MOTPOS (7U)
 *   STHLTHMONSIG_MOTPOSABDIFF (8U)
 *   STHLTHMONSIG_MOTPOSACDIFF (9U)
 *   STHLTHMONSIG_MOTPOSBCDIFF (10U)
 *   STHLTHMONSIG_CURRMOTSUMABC (11U)
 *   STHLTHMONSIG_CURRMOTSUMDEF (12U)
 *   STHLTHMONSIG_MOTPOSPHASEA (13U)
 *   STHLTHMONSIG_MOTPOSPHASEB (14U)
 *   STHLTHMONSIG_MOTPOSPHASEC (15U)
 *   STHLTHMONSIG_MOTPOSPHASED (16U)
 *   STHLTHMONSIG_MOTPOSPHASEE (17U)
 *   STHLTHMONSIG_MOTPOSPHASEF (18U)
 *   STHLTHMONSIG_BITCORRN (19U)
 *   STHLTHMONSIG_FRICESTIMN (20U)
 *   STHLTHMONSIG_WHLIMBREJCTN (21U)
 *
 *********************************************************************************************************************/


#define CDD_ChkPtAppl10_START_SEC_CODE
#include "CDD_ChkPtAppl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_100msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_UpdRawSig_Oper(StHlthMonSig3 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdStHlthStcData_Oper(StHlthMonSig2 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_100ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_100msAppl10End(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_100msAppl10End
 *********************************************************************************************************************/

 	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_ECUTFILTD);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_DUTYCYC);
	(void)Rte_Call_UpdStHlthStcData_Oper(Task_100ms_Appl10);
	(void)Rte_Call_ChkPt_100ms_Appl10_End_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_100msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_100ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_100msAppl10Strt(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_100msAppl10Strt
 *********************************************************************************************************************/

	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)Rte_Call_ChkPt_100ms_Appl10_Strt_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_10msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_UpdRawSig_Oper(StHlthMonSig3 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdStHlthStcData_Oper(StHlthMonSig2 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_10ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_10msAppl10End(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_10msAppl10End
 *********************************************************************************************************************/

	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_FRICESTIMN);
	(void)Rte_Call_UpdStHlthStcData_Oper(Task_10ms_Appl10);
	(void)Rte_Call_ChkPt_10ms_Appl10_End_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_10msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_10ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_10msAppl10Strt(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_10msAppl10Strt
 *********************************************************************************************************************/

	(void)Rte_Call_ChkPt_10ms_Appl10_Strt_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_2msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_UpdRawSig_Oper(StHlthMonSig3 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdStHlthStcData_Oper(StHlthMonSig2 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_2ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_2msAppl10End(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_2msAppl10End
 *********************************************************************************************************************/

	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_ASSIDUETOVLTG);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_CURRMOTSUMABC);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_CURRMOTSUMDEF);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSPHASEA);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSPHASEB);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSPHASEC);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSPHASED);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSPHASEE);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSPHASEF);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_EOTIMPCT);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_BITCORRN);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOS);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSABDIFF);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSACDIFF);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_MOTPOSBCDIFF);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_WHLIMBREJCTN);
	(void)Rte_Call_UpdStHlthStcData_Oper(Task_2ms_Appl10);
	(void)Rte_Call_ChkPt_2ms_Appl10_End_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_2msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_2ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_2msAppl10Strt(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_2msAppl10Strt
 *********************************************************************************************************************/
 
	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)Rte_Call_ChkPt_2ms_Appl10_Strt_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_4msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_UpdRawSig_Oper(StHlthMonSig3 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdStHlthStcData_Oper(StHlthMonSig2 SigId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_4ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_4msAppl10End(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_4msAppl10End
 *********************************************************************************************************************/

	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_DIGTQSNSRA);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_DIGTQSNSRB);
	(void)Rte_Call_UpdRawSig_Oper(STHLTHMONSIG_DIGTQIDPTSIG);
	(void)Rte_Call_UpdStHlthStcData_Oper(Task_4ms_Appl10);
	(void)Rte_Call_ChkPt_4ms_Appl10_End_CheckpointReached();
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_4msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_4ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_4msAppl10Strt(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkPt_4msAppl10Strt
 *********************************************************************************************************************/

	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)Rte_Call_ChkPt_4ms_Appl10_Strt_CheckpointReached();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_ChkPtAppl10_STOP_SEC_CODE
#include "CDD_ChkPtAppl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
