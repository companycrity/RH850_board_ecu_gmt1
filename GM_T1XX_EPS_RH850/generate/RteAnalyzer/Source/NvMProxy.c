/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  NvMProxy.c
 *        Config:  EPS.dpa
 *     SW-C Type:  NvMProxy
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <NvMProxy>
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

#include "Rte_NvMProxy.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_NvMProxy.h"
#include "SchM_NvMProxy.h"
#include "TSC_SchM_NvMProxy.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void NvMProxy_TestDefines(void);


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
 * NvM_BlockIdType: Integer in interval [1...32767]
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 *********************************************************************************************************************/


#define NvMProxy_START_SEC_CODE
#include "NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EraseBlock
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_CurrMeasMotEol_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemAdminDataBlock>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_DemStatusDataBlock>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_MotPrmNom>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_PolarityCfgSaved>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_EcuId>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_NbId>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_SBAT>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_DiRestore>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CustDiagc_GmIgnCntr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DutyCycThermProtn_FilStVal>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_NvMProxy_ShtdwnClsChk>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_CmpPeakData>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <EraseBlock> of PortPrototype <PSProxy_SnpshtDataAry>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_EraseNvBlock(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: EraseBlock_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_EraseNvBlock(NvM_BlockIdType parg0) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_EraseNvBlock (returns application error)
 *********************************************************************************************************************/

  NvMProxy_TestDefines();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDataIndex
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * This runnable is never executed by the RTE.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDataIndex_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, NvMProxy_CODE) NvMProxy_GetDataIndex(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_GetDataIndex
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetErrorStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_CurrMeasMotEol_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemAdminDataBlock>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_DemStatusDataBlock>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_MotPrmNom>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_PolarityCfgSaved>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_EcuId>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_NbId>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_SBAT>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_DiRestore>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CustDiagc_GmIgnCntr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_DutyCycThermProtn_FilStVal>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_NvMProxy_ShtdwnClsChk>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_CmpPeakData>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <GetErrorStatus> of PortPrototype <PSProxy_SnpshtDataAry>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetErrorStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_GetErrorStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InvalidateNvBlock
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_CurrMeasMotEol_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemAdminDataBlock>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_DemStatusDataBlock>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_MotPrmNom>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_PolarityCfgSaved>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_EcuId>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_NbId>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_SBAT>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_DiRestore>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CustDiagc_GmIgnCntr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DutyCycThermProtn_FilStVal>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_NvMProxy_ShtdwnClsChk>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_CmpPeakData>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <InvalidateNvBlock> of PortPrototype <PSProxy_SnpshtDataAry>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_InvalidateNvBlock(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: InvalidateNvBlock_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_InvalidateNvBlock(NvM_BlockIdType parg0) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_InvalidateNvBlock (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NvMProxy_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, NvMProxy_CODE) NvMProxy_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_MainFunction
 *********************************************************************************************************************/

  TSC_NvMProxy_SchM_Enter_NvMProxy_NvMProxy_EXCLUSIVE_AREA_0();
  TSC_NvMProxy_SchM_Exit_NvMProxy_NvMProxy_EXCLUSIVE_AREA_0();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadBlock
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_CurrMeasMotEol_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemAdminDataBlock>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_DemStatusDataBlock>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_MotPrmNom>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_PolarityCfgSaved>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_EcuId>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_NbId>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_SBAT>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_DiRestore>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CustDiagc_GmIgnCntr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DutyCycThermProtn_FilStVal>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_NvMProxy_ShtdwnClsChk>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_CmpPeakData>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <ReadBlock> of PortPrototype <PSProxy_SnpshtDataAry>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_ReadBlock(dtRef_VOID DstPtr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadBlock_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_ReadBlock(NvM_BlockIdType parg0, dtRef_VOID DstPtr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_ReadBlock (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RestoreBlockDefaults
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <RestoreBlockDefaults> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_RestoreBlockDefaults(dtRef_VOID DstPtr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RestoreBlockDefaults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_RestoreBlockDefaults(NvM_BlockIdType parg0, dtRef_VOID DstPtr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_RestoreBlockDefaults (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetBlockProtection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_CurrMeasMotEol_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemAdminDataBlock>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_DemStatusDataBlock>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_MotPrmNom>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_PolarityCfgSaved>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_Bootloader_EcuId>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_Bootloader_NbId>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_Bootloader_SBAT>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_DiRestore>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_CustDiagc_GmIgnCntr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_DutyCycThermProtn_FilStVal>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_NvMProxy_ShtdwnClsChk>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_WhlImbRejctn_CmpPeakData>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetBlockProtection> of PortPrototype <PAdminProxy_SnpshtDataAry>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_SetBlockProtection(boolean ProtectionEnabled_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMAdministration_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetBlockProtection_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_SetBlockProtection(NvM_BlockIdType parg0, boolean ProtectionEnabled_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_SetBlockProtection (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetDataIndex
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * This runnable is never executed by the RTE.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetDataIndex_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, NvMProxy_CODE) NvM_SetDataIndex(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvM_SetDataIndex
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetRamBlockStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_CurrMeasMotEol_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemAdminDataBlock>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_DemStatusDataBlock>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_MotPrmNom>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_PolarityCfgSaved>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_EcuId>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_NbId>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_SBAT>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_DiRestore>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_CustDiagc_GmIgnCntr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_DutyCycThermProtn_FilStVal>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_NvMProxy_ShtdwnClsChk>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_CmpPeakData>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <SetRamBlockStatus> of PortPrototype <PSProxy_SnpshtDataAry>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetRamBlockStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_SetRamBlockStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: WriteBlock
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_CurrMeasMotEol_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemAdminDataBlock>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock0>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock1>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock10>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock11>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock12>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock13>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock14>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock15>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock16>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock17>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock18>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock19>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock2>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock20>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock21>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock22>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock23>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock24>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock25>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock26>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock27>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock28>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock29>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock3>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock30>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock31>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock32>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock33>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock34>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock35>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock36>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock37>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock38>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock39>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock4>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock5>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock6>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock7>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock8>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemPrimaryDataBlock9>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_DemStatusDataBlock>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_MotPrmNom>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_PolarityCfgSaved>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_EcuId>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_NbId>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_Bootloader_SBAT>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_DiRestore>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_IgnCntr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CmnMfgSrv_SeedKey>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_CustDiagc_GmIgnCntr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_DutyCycThermProtn_FilStVal>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_EotNvmData>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg0Meas_HwAg0Offs>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAg1Meas_HwAg1Offs>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgSnsrls_StordLstPrm>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_NvMProxy_ShtdwnClsChk>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCalProgdSts>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmDate>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrRepairShopCod>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysCodVersNr>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrSysName>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PartNr_PartNrVinData>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricLrngData>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_SysFricLrng_FricNonLrngData>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_CmpPeakData>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated>
 *   - triggered by server invocation for OperationPrototype <WriteBlock> of PortPrototype <PSProxy_SnpshtDataAry>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NvMProxy_WriteBlock(dtRef_const_VOID SrcPtr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: WriteBlock_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvMProxy_WriteBlock (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define NvMProxy_STOP_SEC_CODE
#include "NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void NvMProxy_TestDefines(void)
{
  /* Enumeration Data Types */

  NvM_RequestResultType Test_NvM_RequestResultType_V_1 = NVM_REQ_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_2 = NVM_REQ_NOT_OK;
  NvM_RequestResultType Test_NvM_RequestResultType_V_3 = NVM_REQ_PENDING;
  NvM_RequestResultType Test_NvM_RequestResultType_V_4 = NVM_REQ_INTEGRITY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_5 = NVM_REQ_BLOCK_SKIPPED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_6 = NVM_REQ_NV_INVALIDATED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_7 = NVM_REQ_CANCELED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_8 = NVM_REQ_REDUNDANCY_FAILED;
  NvM_RequestResultType Test_NvM_RequestResultType_V_9 = NVM_REQ_RESTORED_FROM_ROM;
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
