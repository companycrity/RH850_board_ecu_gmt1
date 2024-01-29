/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  WdgM.c
 *        Config:  EPS.dpa
 *     SW-C Type:  WdgM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <WdgM>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */

/* PRQA S 3109 EOF */
/* PRQA S 3112 EOF */
/* PRQA S 3197 EOF */
/* PRQA S 3198 EOF */
/* PRQA S 3199 EOF */
/* PRQA S 3201 EOF */
/* PRQA S 3203 EOF */
/* PRQA S 3205 EOF */
/* PRQA S 3206 EOF */
/* PRQA S 3218 EOF */
/* PRQA S 3229 EOF */
/* PRQA S 2002 EOF */
/* PRQA S 3334 EOF */
/* PRQA S 3417 EOF */
/* PRQA S 3426 EOF */
/* PRQA S 3453 EOF */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Port Prototypes:
 * ================
 * GlobalPort
 *   P-Port Prototype for Global Mode 
 *
 * SE000_SE_10msBsw_Appl10
 *   P-Port Prototype for Supervised Entity SE_10msBsw_Appl10 with ID 0
 *
 * SE000_SE_10msBsw_Appl10_CP000_ChkPt_10msBsw_Appl10_Strt
 *   P-Port Prototype for Supervised Entity SE_10msBsw_Appl10 with ID 0
 *                    and Checkpoint ChkPt_10msBsw_Appl10_Strt with ID 0.
 *
 * SE000_SE_10msBsw_Appl10_CP001_ChkPt_10msBsw_Appl10_End
 *   P-Port Prototype for Supervised Entity SE_10msBsw_Appl10 with ID 0
 *                    and Checkpoint ChkPt_10msBsw_Appl10_End with ID 1.
 *
 * SE001_SE_2ms_Appl10
 *   P-Port Prototype for Supervised Entity SE_2ms_Appl10 with ID 1
 *
 * SE001_SE_2ms_Appl10_CP000_ChkPt_2ms_Appl10_Strt
 *   P-Port Prototype for Supervised Entity SE_2ms_Appl10 with ID 1
 *                    and Checkpoint ChkPt_2ms_Appl10_Strt with ID 0.
 *
 * SE001_SE_2ms_Appl10_CP001_ChkPt_2ms_Appl10_End
 *   P-Port Prototype for Supervised Entity SE_2ms_Appl10 with ID 1
 *                    and Checkpoint ChkPt_2ms_Appl10_End with ID 1.
 *
 * SE002_SE_2ms_Appl6
 *   P-Port Prototype for Supervised Entity SE_2ms_Appl6 with ID 2
 *
 * SE002_SE_2ms_Appl6_CP000_ChkPt_2ms_Appl6_Strt
 *   P-Port Prototype for Supervised Entity SE_2ms_Appl6 with ID 2
 *                    and Checkpoint ChkPt_2ms_Appl6_Strt with ID 0.
 *
 * SE002_SE_2ms_Appl6_CP001_ChkPt_2ms_Appl6_End
 *   P-Port Prototype for Supervised Entity SE_2ms_Appl6 with ID 2
 *                    and Checkpoint ChkPt_2ms_Appl6_End with ID 1.
 *
 * SE003_SE_100ms_Appl10
 *   P-Port Prototype for Supervised Entity SE_100ms_Appl10 with ID 3
 *
 * SE003_SE_100ms_Appl10_CP000_ChkPt_100ms_Appl10_Strt
 *   P-Port Prototype for Supervised Entity SE_100ms_Appl10 with ID 3
 *                    and Checkpoint ChkPt_100ms_Appl10_Strt with ID 0.
 *
 * SE003_SE_100ms_Appl10_CP001_ChkPt_100ms_Appl10_End
 *   P-Port Prototype for Supervised Entity SE_100ms_Appl10 with ID 3
 *                    and Checkpoint ChkPt_100ms_Appl10_End with ID 1.
 *
 * SE004_SE_10ms_Appl6
 *   P-Port Prototype for Supervised Entity SE_10ms_Appl6 with ID 4
 *
 * SE004_SE_10ms_Appl6_CP000_ChkPt_10ms_Appl6_Strt
 *   P-Port Prototype for Supervised Entity SE_10ms_Appl6 with ID 4
 *                    and Checkpoint ChkPt_10ms_Appl6_Strt with ID 0.
 *
 * SE004_SE_10ms_Appl6_CP001_ChkPt_10ms_Appl6_End
 *   P-Port Prototype for Supervised Entity SE_10ms_Appl6 with ID 4
 *                    and Checkpoint ChkPt_10ms_Appl6_End with ID 1.
 *
 * SE005_SE_4ms_Appl10
 *   P-Port Prototype for Supervised Entity SE_4ms_Appl10 with ID 5
 *
 * SE005_SE_4ms_Appl10_CP000_ChkPt_4ms_Appl10_Strt
 *   P-Port Prototype for Supervised Entity SE_4ms_Appl10 with ID 5
 *                    and Checkpoint ChkPt_4ms_Appl10_Strt with ID 0.
 *
 * SE005_SE_4ms_Appl10_CP001_ChkPt_4ms_Appl10_End
 *   P-Port Prototype for Supervised Entity SE_4ms_Appl10 with ID 5
 *                    and Checkpoint ChkPt_4ms_Appl10_End with ID 1.
 *
 * SE006_SE_10ms_Appl10
 *   P-Port Prototype for Supervised Entity SE_10ms_Appl10 with ID 6
 *
 * SE006_SE_10ms_Appl10_CP000_ChkPt_10ms_Appl10_Strt
 *   P-Port Prototype for Supervised Entity SE_10ms_Appl10 with ID 6
 *                    and Checkpoint ChkPt_10ms_Appl10_Strt with ID 0.
 *
 * SE006_SE_10ms_Appl10_CP001_ChkPt_10ms_Appl10_End
 *   P-Port Prototype for Supervised Entity SE_10ms_Appl10 with ID 6
 *                    and Checkpoint ChkPt_10ms_Appl10_End with ID 1.
 *
 *
 * Operation Prototypes:
 * =====================
 * GetGlobalStatus of Port Interface WdgM_GlobalMode
 *   Returns the global monitoring status of the Watchdog Manager.
 *
 * GetMode of Port Interface WdgM_GlobalMode
 *   Returns the current mode of the Watchdog Manager.
 *
 * PerformReset of Port Interface WdgM_GlobalMode
 *   Instructs the Watchdog Manager to cause a watchdog reset.
 *
 * ActivateSupervisionEntity of Port Interface WdgM_IndividualMode
 *   This function activates the monitoring of the given Supervised Entity
 *
 * DeactivateSupervisionEntity of Port Interface WdgM_IndividualMode
 *   This function deactivates the monitoring of the given Supervised Entity
 *
 * GetLocalStatus of Port Interface WdgM_IndividualMode
 *   Returns the monitoring status of an individual Supervised Entity.
 *
 * CheckpointReached of Port Interface WdgM_AliveSupervision
 *   Indicates to the Watchdog Manager that a Checkpoint within a Supervised Entity has been reached.
 *
 *********************************************************************************************************************/

#include "Rte_WdgM.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_WdgM.h"
#include "SchM_WdgM.h"
#include "TSC_SchM_WdgM.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void WdgM_TestDefines(void);


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
 * WdgM_CheckpointIdType: Integer in interval [0...65535]
 * WdgM_ModeType: Integer in interval [0...255]
 * WdgM_SupervisedEntityIdType: Integer in interval [0...255]
 *
 * Enumeration Types:
 * ==================
 * WdgM_GlobalStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   WDGM_GLOBAL_STATUS_OK (0U)
 *   WDGM_GLOBAL_STATUS_FAILED (1U)
 *   WDGM_GLOBAL_STATUS_EXPIRED (2U)
 *   WDGM_GLOBAL_STATUS_STOPPED (3U)
 *   WDGM_GLOBAL_STATUS_DEACTIVATED (4U)
 * WdgM_LocalStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   WDGM_LOCAL_STATUS_OK (0U)
 *   WDGM_LOCAL_STATUS_FAILED (1U)
 *   WDGM_LOCAL_STATUS_EXPIRED (2U)
 *   WDGM_LOCAL_STATUS_DEACTIVATED (4U)
 *
 *********************************************************************************************************************/


#define WdgM_START_SEC_CODE
#include "WdgM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ActivateSupervisionEntity
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ActivateSupervisionEntity> of PortPrototype <SE000_SE_10msBsw_Appl10>
 *   - triggered by server invocation for OperationPrototype <ActivateSupervisionEntity> of PortPrototype <SE001_SE_2ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <ActivateSupervisionEntity> of PortPrototype <SE002_SE_2ms_Appl6>
 *   - triggered by server invocation for OperationPrototype <ActivateSupervisionEntity> of PortPrototype <SE003_SE_100ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <ActivateSupervisionEntity> of PortPrototype <SE004_SE_10ms_Appl6>
 *   - triggered by server invocation for OperationPrototype <ActivateSupervisionEntity> of PortPrototype <SE005_SE_4ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <ActivateSupervisionEntity> of PortPrototype <SE006_SE_10ms_Appl10>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType WdgM_ActivateSupervisionEntity(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_WdgM_IndividualMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ActivateSupervisionEntity_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, WdgM_CODE) WdgM_ActivateSupervisionEntity(WdgM_SupervisedEntityIdType parg0) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_ActivateSupervisionEntity (returns application error)
 *********************************************************************************************************************/

  WdgM_TestDefines();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CheckpointReached
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE000_SE_10msBsw_Appl10_CP000_ChkPt_10msBsw_Appl10_Strt>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE000_SE_10msBsw_Appl10_CP001_ChkPt_10msBsw_Appl10_End>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE001_SE_2ms_Appl10_CP000_ChkPt_2ms_Appl10_Strt>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE001_SE_2ms_Appl10_CP001_ChkPt_2ms_Appl10_End>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE002_SE_2ms_Appl6_CP000_ChkPt_2ms_Appl6_Strt>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE002_SE_2ms_Appl6_CP001_ChkPt_2ms_Appl6_End>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE003_SE_100ms_Appl10_CP000_ChkPt_100ms_Appl10_Strt>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE003_SE_100ms_Appl10_CP001_ChkPt_100ms_Appl10_End>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE004_SE_10ms_Appl6_CP000_ChkPt_10ms_Appl6_Strt>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE004_SE_10ms_Appl6_CP001_ChkPt_10ms_Appl6_End>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE005_SE_4ms_Appl10_CP000_ChkPt_4ms_Appl10_Strt>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE005_SE_4ms_Appl10_CP001_ChkPt_4ms_Appl10_End>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE006_SE_10ms_Appl10_CP000_ChkPt_10ms_Appl10_Strt>
 *   - triggered by server invocation for OperationPrototype <CheckpointReached> of PortPrototype <SE006_SE_10ms_Appl10_CP001_ChkPt_10ms_Appl10_End>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType WdgM_CheckpointReached(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CheckpointReached_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, WdgM_CODE) WdgM_CheckpointReached(WdgM_SupervisedEntityIdType parg0, WdgM_CheckpointIdType parg1) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_CheckpointReached (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DeactivateSupervisionEntity
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DeactivateSupervisionEntity> of PortPrototype <SE000_SE_10msBsw_Appl10>
 *   - triggered by server invocation for OperationPrototype <DeactivateSupervisionEntity> of PortPrototype <SE001_SE_2ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <DeactivateSupervisionEntity> of PortPrototype <SE002_SE_2ms_Appl6>
 *   - triggered by server invocation for OperationPrototype <DeactivateSupervisionEntity> of PortPrototype <SE003_SE_100ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <DeactivateSupervisionEntity> of PortPrototype <SE004_SE_10ms_Appl6>
 *   - triggered by server invocation for OperationPrototype <DeactivateSupervisionEntity> of PortPrototype <SE005_SE_4ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <DeactivateSupervisionEntity> of PortPrototype <SE006_SE_10ms_Appl10>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType WdgM_DeactivateSupervisionEntity(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_WdgM_IndividualMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DeactivateSupervisionEntity_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, WdgM_CODE) WdgM_DeactivateSupervisionEntity(WdgM_SupervisedEntityIdType parg0) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_DeactivateSupervisionEntity (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetGlobalStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetGlobalStatus> of PortPrototype <GlobalPort>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType WdgM_GetGlobalStatus(WdgM_GlobalStatusType *Status)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_WdgM_GlobalMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetGlobalStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, WdgM_CODE) WdgM_GetGlobalStatus(P2VAR(WdgM_GlobalStatusType, AUTOMATIC, RTE_WDGM_APPL_VAR) Status) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_GetGlobalStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetLocalStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetLocalStatus> of PortPrototype <SE000_SE_10msBsw_Appl10>
 *   - triggered by server invocation for OperationPrototype <GetLocalStatus> of PortPrototype <SE001_SE_2ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <GetLocalStatus> of PortPrototype <SE002_SE_2ms_Appl6>
 *   - triggered by server invocation for OperationPrototype <GetLocalStatus> of PortPrototype <SE003_SE_100ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <GetLocalStatus> of PortPrototype <SE004_SE_10ms_Appl6>
 *   - triggered by server invocation for OperationPrototype <GetLocalStatus> of PortPrototype <SE005_SE_4ms_Appl10>
 *   - triggered by server invocation for OperationPrototype <GetLocalStatus> of PortPrototype <SE006_SE_10ms_Appl10>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType WdgM_GetLocalStatus(WdgM_LocalStatusType *Status)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_WdgM_IndividualMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetLocalStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, WdgM_CODE) WdgM_GetLocalStatus(WdgM_SupervisedEntityIdType parg0, P2VAR(WdgM_LocalStatusType, AUTOMATIC, RTE_WDGM_APPL_VAR) Status) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_GetLocalStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetMode> of PortPrototype <GlobalPort>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType WdgM_GetMode(WdgM_ModeType *Mode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_WdgM_GlobalMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, WdgM_CODE) WdgM_GetMode(P2VAR(WdgM_ModeType, AUTOMATIC, RTE_WDGM_APPL_VAR) Mode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_GetMode (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PerformReset
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <PerformReset> of PortPrototype <GlobalPort>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType WdgM_PerformReset(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_WdgM_GlobalMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PerformReset_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, WdgM_CODE) WdgM_PerformReset(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_PerformReset (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: WdgM_MainFunction
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, WdgM_CODE) WdgM_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: WdgM_MainFunction
 *********************************************************************************************************************/

  TSC_WdgM_SchM_Enter_WdgM_WDGM_EXCLUSIVE_AREA_0();
  TSC_WdgM_SchM_Exit_WdgM_WDGM_EXCLUSIVE_AREA_0();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define WdgM_STOP_SEC_CODE
#include "WdgM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void WdgM_TestDefines(void)
{
  /* Enumeration Data Types */

  WdgM_GlobalStatusType Test_WdgM_GlobalStatusType_V_1 = WDGM_GLOBAL_STATUS_OK;
  WdgM_GlobalStatusType Test_WdgM_GlobalStatusType_V_2 = WDGM_GLOBAL_STATUS_FAILED;
  WdgM_GlobalStatusType Test_WdgM_GlobalStatusType_V_3 = WDGM_GLOBAL_STATUS_EXPIRED;
  WdgM_GlobalStatusType Test_WdgM_GlobalStatusType_V_4 = WDGM_GLOBAL_STATUS_STOPPED;
  WdgM_GlobalStatusType Test_WdgM_GlobalStatusType_V_5 = WDGM_GLOBAL_STATUS_DEACTIVATED;

  WdgM_LocalStatusType Test_WdgM_LocalStatusType_V_1 = WDGM_LOCAL_STATUS_OK;
  WdgM_LocalStatusType Test_WdgM_LocalStatusType_V_2 = WDGM_LOCAL_STATUS_FAILED;
  WdgM_LocalStatusType Test_WdgM_LocalStatusType_V_3 = WDGM_LOCAL_STATUS_EXPIRED;
  WdgM_LocalStatusType Test_WdgM_LocalStatusType_V_4 = WDGM_LOCAL_STATUS_DEACTIVATED;
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

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
