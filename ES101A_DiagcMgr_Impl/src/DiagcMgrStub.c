/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DiagcMgrStub.c
 *     SW-C Type:  DiagcMgrStub
 *  Generated at:  Tue Jun 28 11:40:40 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DiagcMgrStub>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgrStub.c
* Module Description: Implementation of Diagnostic Manager FDD ES101A Stub
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:             2 %
* %derived_by:          gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/26/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                                EA4#3421
* 06/20/16  3        SB         ES101A_DiagcMgr_Design version 4 implementation                                EA4#6251
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_DiagcMgrStub.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "DiagcMgr.h"
#include "DiagcMgr_private.h"
#include "NxtrDet.h"
 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */ 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Record Types:
 * =============
 * DiagcDataRec1: Record with elements
 *   DiagcSts of type uint16
 *   ActvRampRate of type float32
 *   ActvMotTqCmdSca of type float32
 *
 *********************************************************************************************************************/


#define DiagcMgrStub_START_SEC_CODE
#include "DiagcMgrStub_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrStubInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgrStub_CODE) DiagcMgrStubInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrStubInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDiagcDataStub_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetDiagcDataStub>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetDiagcDataStub_Oper(DiagcDataRec1 *DiagcData_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgrStub_CODE) GetDiagcDataStub_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) DiagcData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDiagcDataStub_Oper
 *********************************************************************************************************************/
#if (STD_ON == NXTRDET_DIAGCMGR)
    (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFEU, 1U, 0U);
#endif
    DiagcData_Arg->DiagcSts = DIAGCSTSININVAL_CNT_U16;
    DiagcData_Arg->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;
    DiagcData_Arg->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32;    

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcDebCntrStub_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcDebCntrStub>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcDebCntrStub_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgrStub_CODE) GetNtcDebCntrStub_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) DebCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcDebCntrStub_Oper
 *********************************************************************************************************************/
    *DebCntr_Arg = 0;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcInfoStub_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcInfoStub>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcInfoStub_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, DiagcMgrStub_CODE) GetNtcInfoStub_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) NtcInfo_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcInfoStub_Oper
 *********************************************************************************************************************/
#if (STD_ON == NXTRDET_DIAGCMGR)
    (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFEU, 0U, 0U);
#endif
    NtcInfo_Arg->AgiCntr = DFTAGICNTR_CNT_U08;
    NtcInfo_Arg->Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
    NtcInfo_Arg->NtcStInfo = 0U; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DiagcMgrStub_STOP_SEC_CODE
#include "DiagcMgrStub_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
