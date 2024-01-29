
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxy_Cfg.c
* Module Description: Implementation of NvM Proxy ES006A
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          31 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/01/15  1        KJS       Initial Version                                                                 EA4#471
* 09/02/15  2        KJS       Set the ApplCallBack back to NULL_PTR at the start of each loop iteration       EA4#1484
* 01/26/16  3        KJS       Updated name of included header, NTC indexes, and file name to EA4 standards    EA4#3443
* 01/29/16  4        KJS       Removed CDD_ prefix from the module reference                                   EA4#6371
**********************************************************************************************************************/

#include "CDD_NvMProxy_Cfg_private.h"
#include "NvM.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************* Module Specific Data Types **********************************************/

/******************************************** Module Specific Variables **********************************************/
#define CDD_NvMProxy_START_SEC_CONST_UNSPECIFIED
#include "CDD_NvMProxy_MemMap.h"

/* Table Contents: <NvM Block Number>, <Fault Response Index (0xFF, disabled)> */
const VAR(NvMProxyCrcFltDescrTblTyp, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) NvMProxy_CrcFltDescrTbl[] = {
    {NULL_PTR, 0x72U, NTCCHKDISAD_CNT_U08}, /* MotPrmNom */
    {NULL_PTR, 0x01U, NTCCHKDISAD_CNT_U08}, /* NvMConfigBlock */
    {NULL_PTR, 0x75U, NTCNR0AIDX_CNT_U08}, /* PolarityCfgSaved */
    {NULL_PTR, 0x61U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet */
    {NULL_PTR, 0x62U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet */
    {NULL_PTR, 0x66U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs */
    {NULL_PTR, 0x67U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs */
    {NULL_PTR, 0x69U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs */
    {NULL_PTR, 0x68U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs */
    {NULL_PTR, 0x74U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl */
    {NULL_PTR, 0x6FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl */
    {NULL_PTR, 0x73U, NTCNR0AIDX_CNT_U08}, /* Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf */
    {NULL_PTR, 0x50U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr */
    {NULL_PTR, 0x52U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_CcaSerlNr */
    {NULL_PTR, 0x4DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_DiRestore */
    {NULL_PTR, 0x4BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr */
    {NULL_PTR, 0x51U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0 */
    {NULL_PTR, 0x4FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1 */
    {NULL_PTR, 0x4EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2 */
    {NULL_PTR, 0x4CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3 */
    {NULL_PTR, 0x4AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4 */
    {&RestoreNtcFltAryDft, 0x64U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry */
    {NULL_PTR, 0x49U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_DutyCycThermProtn_FilStVal */
    {NULL_PTR, 0x63U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_EotLrng_EotNvmData */
    {NULL_PTR, 0x6EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwAg0Meas_HwAg0Offs */
    {NULL_PTR, 0x6CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwAg1Meas_HwAg1Offs */
    {NULL_PTR, 0x6AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt */
    {NULL_PTR, 0x6BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt */
    {NULL_PTR, 0x65U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm */
    {NULL_PTR, 0x6DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_NvMProxy_NvMProxyClsChkBlk */
    {NULL_PTR, 0x59U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrBasMdlPartNr */
    {NULL_PTR, 0x5EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrCalProgdSts */
    {NULL_PTR, 0x55U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg */
    {NULL_PTR, 0x5AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey */
    {NULL_PTR, 0x5FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr */
    {NULL_PTR, 0x5DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId */
    {NULL_PTR, 0x58U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrEndMdlPartNr */
    {NULL_PTR, 0x57U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg */
    {NULL_PTR, 0x5CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrProgmDate */
    {NULL_PTR, 0x60U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey */
    {NULL_PTR, 0x53U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrRepairShopCod */
    {NULL_PTR, 0x56U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrSysCodVersNr */
    {NULL_PTR, 0x54U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrSysName */
    {NULL_PTR, 0x5BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PartNr_PartNrVinData */
    {NULL_PTR, 0x48U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PullCmpActv_PullCmpLongTerm */
    {NULL_PTR, 0x46U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd */
    {NULL_PTR, 0x45U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr */
    {NULL_PTR, 0x43U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm */
    {NULL_PTR, 0x44U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY */
    {NULL_PTR, 0x42U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry */
    {NULL_PTR, 0x3AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData */
    {NULL_PTR, 0x37U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_Bootloader_EcuId */
    {NULL_PTR, 0x35U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_Bootloader_SBAT */
    {NULL_PTR, 0x0AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiagc_GmIgnCntr */
    {NULL_PTR, 0x09U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry */
    {&RestoreSnpshtAryDft, 0x08U, NTCCHKDISAD_CNT_U08}, /* SnpshtDataAry */
    {NULL_PTR, 0x07U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwAgSnsrls_StordLstPrm */
    {NULL_PTR, 0x04U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw */
    {NULL_PTR, 0x03U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_WhlImbRejctn_CmpPeakData */
    {NULL_PTR, 0x39U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_SysFricLrng_FricLrngData */
    {NULL_PTR, 0x38U, NTCCHKDISAD_CNT_U08}  /* Rte_NvmBlock_SysFricLrng_FricNonLrngData */
};

#define CDD_NvMProxy_STOP_SEC_CONST_UNSPECIFIED
#include "CDD_NvMProxy_MemMap.h"

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

/* End of File */
