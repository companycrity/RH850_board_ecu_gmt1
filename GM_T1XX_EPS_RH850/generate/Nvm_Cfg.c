/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: NvM
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: NvM_Cfg.c
 *   Generation Time: 2017-02-10 15:47:10
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


    
/**********************************************************************************************************************
 *  MODULE SWITCH
 *********************************************************************************************************************/
/* this switch enables the header file(s) to hide some parts. */
#define NVM_CONFIGURATION

/* multiple inclusion protection */
#define NVM_H_

/* PRQA S 5087 inclusions *//* MD_MSR_19.1 */

/* Define RTE_MICROSAR_PIM_EXPORT is necessary only when serviceports are used */
#define RTE_MICROSAR_PIM_EXPORT  


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/* This tag will only be replaced, if one or more callbacks via Service Ports had been configured */


/**********************************************************************************************************************
 *  MODULE HEADER INCLUDES
 *********************************************************************************************************************/
/* only includes the public part of config */
#include "NvM_Cfg.h"
#include "NvM_PrivateCfg.h"

#include "NvM_Crc.h"



/**********************************************************************************************************************
 *  VERSION CHECKS
 *********************************************************************************************************************/
#if ((NVM_CFG_MAJOR_VERSION != (5u)) \
        || (NVM_CFG_MINOR_VERSION != (5u)))
# error "Version numbers of NvM_Cfg.c and NvM_Cfg.h are inconsistent!"
#endif

#if ((NVM_PRIV_CFG_MAJOR_VERSION != NVM_CFG_MAJOR_VERSION) \
        || (NVM_PRIV_CFG_MINOR_VERSION != NVM_CFG_MINOR_VERSION))
# error "Version numbers of NvM_Cfg.c and Nvm_PrivateCfg.h.h are inconsistent!"
#endif

#if ((NVM_TYPES_MAJOR_VERSION != NVM_CFG_MAJOR_VERSION) \
        || (NVM_TYPES_MINOR_VERSION != NVM_CFG_MINOR_VERSION))
# error "Version numbers of NvM_Cfg.c and NvM_Types.h are inconsistent!"
#endif

#include "Crc.h" /* always needed, since the config Block has a CRC */

/* include list of the callback definitions */
#include "CDD_CurrMeas.h" 
#include "CDD_NvMProxy_Cbk.h" 
#include "CDD_NvMProxyDftDataGroup.h" 
#include "Dem_Cbk.h" 
#include "DiagcMgr.h" 


/* include configured file declaring or defining resource (un)locking service(s) */
#include "SchM_NvM.h"

#define NVM_SIZE_STANDARD_JOB_QUEUE  (8U) 
#define NVM_SIZE_IMMEDIATE_JOB_QUEUE (0U) 


/* the size of the CRC job queue in 32bitWords. It is a bit-string, one bit for each block */
#define NVM_SIZE_CRC_JOB_QUEUE ((NVM_TOTAL_NUM_OF_NVRAM_BLOCKS + NVM_CRC_QUEUE_BITINDEX_MASK) >> \
                                                                            NVM_CRC_QUEUE_ENTRY_SHIFT)

#define NVM_USE_CRC16 STD_ON 
#define NVM_USE_CRC32 STD_OFF 


/* initial crc value */
#define NVM_INITIAL_CRC_16_VALUE    0xFFFFFFFFuL
#define NVM_INITIAL_CRC_32_VALUE    (0xFFFFFFFFuL ^ NVM_CRC32_XOR_VALUE)

#define NVM_CRC32_XOR_VALUE     0xFFFFFFFFuL

#define NVM_START_SEC_CODE
#include "MemMap.h"

#if (NVM_USE_CRC16 == STD_ON)
/**********************************************************************************************************************
 * NvM_Crc_Crc16_Calculate
 *********************************************************************************************************************/
/*! \brief Calculates Crc 16.
 *  \details Invokes the Crc16 calculation function exactly once.
 *  \param[in] data_pt
 *  \param[in] length
 *  \param[in,out] currCrc
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 16
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc16_Calculate (NvM_ConstRamAddressType, uint16, NvM_CrcValuePtrType);

/**********************************************************************************************************************
 * NvM_Crc_Crc16_Compare
 *********************************************************************************************************************/
/*! \brief Compares given (two) Crc16 values.
 *  \details The given Crc values have to be Crc16 - first two bytes will be compared.
 *  \param[in] crc1
 *  \param[in] crc2
 *  \return given Crc values fits: TRUE, otherwise: FALSE
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 16
 *  \pre -
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc16_Compare (NvM_CrcBufferConstPtrType, NvM_CrcValueRefType);

/**********************************************************************************************************************
 * NvM_Crc_Crc16_CopyToBuffer
 *********************************************************************************************************************/
/*! \brief Copies source Crc16 buffer to the destination Crc16 buffer.
 *  \details The given Crc buffer have to be for Crc16 - that means at least two byte long. The API will copy only
 *           the first two bytes from source to destination
 *  \param[in] dest
 *  \param[in] src
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 16
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc16_CopyToBuffer (NvM_CrcBufferPtrType, NvM_CrcValueRefType);
#endif

#if (NVM_USE_CRC32 == STD_ON)
/**********************************************************************************************************************
 * NvM_Crc_Crc32_Calculate
 *********************************************************************************************************************/
/*! \brief Calculates Crc 32.
 *  \details Invokes the Crc32 calculation function exactly once.
 *  \param[in] data_pt
 *  \param[in] length
 *  \param[in,out] currCrc
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 32
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc32_Calculate(NvM_ConstRamAddressType, uint16, NvM_CrcValuePtrType);

/**********************************************************************************************************************
 * NvM_Crc_Crc32_Compare
 *********************************************************************************************************************/
/*! \brief Compares given (two) Crc16 values.
 *  \details The given Crc values have to be Crc32 - first four bytes will be compared.
 *  \param[in] crc1
 *  \param[in] crc2
 *  \return given Crc values fits: TRUE, otherwise: FALSE
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 32
 *  \pre -
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc32_Compare (NvM_CrcBufferConstPtrType, NvM_CrcValueRefType);

/**********************************************************************************************************************
 * NvM_Crc_Crc32_CopyToBuffer
 *********************************************************************************************************************/
/*! \brief Copies source Crc32 buffer to the destination Crc32 buffer.
 *  \details The given Crc buffer have to be for Crc32 - that means at least four byte long. The API will copy only
 *           the first four bytes from source to destination
 *  \param[in] dest
 *  \param[in] src
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 32
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc32_CopyToBuffer (NvM_CrcBufferPtrType, NvM_CrcValueRefType);
#endif

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
 *  PUBLIC CONSTANTS
 *********************************************************************************************************************/

#define NVM_START_SEC_CONST_8
#include "MemMap.h"

/* Number of write attempts: 1 + number of retries */
CONST(uint8, NVM_PRIVATE_CONST) NvM_NoOfWrAttempts_u8 = 3U;

#define NVM_STOP_SEC_CONST_8
#include "MemMap.h"

#define NVM_START_SEC_CONST_16
#include "MemMap.h"

/* maximum number of bytes to be processed in one crc calculation step */
CONST(uint16, NVM_CONFIG_CONST) NvM_NoOfCrcBytes_u16 = 64U;

/* constant holding Crc quueue size value */
CONST(uint16, NVM_PRIVATE_CONST) NvM_CrcQueueSize_u16 = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

#define NVM_STOP_SEC_CONST_16
#include "MemMap.h"

/* close section, to ensure unique section ends */
#define NVM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* constants holding the compiled queue size values */
CONST(NvM_QueueSizesType, NVM_PRIVATE_CONST) NvM_QueueSizes_t =
{
    /* MISRA wants to define a operator precedence with parentheses */
    (NVM_SIZE_STANDARD_JOB_QUEUE + NVM_SIZE_IMMEDIATE_JOB_QUEUE) - 1u,
    NVM_SIZE_STANDARD_JOB_QUEUE
};

#if (NVM_USE_CRC16 == STD_ON)
static CONST(struct NvM_CrcHandlerClass, NVM_PRIVATE_CONST) NvM_Crc_Crc16Handler_t =
{
    NvM_Crc_Crc16_Calculate,
    NvM_Crc_Crc16_Compare,
    NvM_Crc_Crc16_CopyToBuffer,
    NVM_INITIAL_CRC_16_VALUE, /* initial value */
    2  /* crc length */
};
#else
# define NvM_Crc_Crc16Handler_t NvM_Crc_NoCrcHandler_t
#endif

#if (NVM_USE_CRC32 == STD_ON)
static CONST(struct NvM_CrcHandlerClass, NVM_PRIVATE_CONST) NvM_Crc_Crc32Handler_t =
{
    NvM_Crc_Crc32_Calculate,
    NvM_Crc_Crc32_Compare,
    NvM_Crc_Crc32_CopyToBuffer,
    NVM_INITIAL_CRC_32_VALUE, /* initial value */
    4  /* crc length */
};
#else
# define NvM_Crc_Crc32Handler_t NvM_Crc_NoCrcHandler_t
#endif

CONST(NvM_CrcHandlerClassConstPtr, NVM_PRIVATE_CONST) NvM_CrcHandlerTable_at[4] =
{
    &NvM_Crc_NoCrcHandler_t,
    &NvM_Crc_NoCrcHandler_t, /* reserved for CRC8 */
    &NvM_Crc_Crc16Handler_t,
    &NvM_Crc_Crc32Handler_t
};

/* Constants, holding the two DEM error codes, defined by DEM */

CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrReqFailed = DemConf_DemEventParameter_NVM_E_REQ_FAILED; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrIntegrityFailed = DemConf_DemEventParameter_NVM_E_INTEGRITY_FAILED; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrLossOfRedundancy = DemConf_DemEventParameter_NVM_E_LOSS_OF_REDUNDANCY; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrQueueOverflow = DemConf_DemEventParameter_NVM_E_QUEUE_OVERFLOW; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrWriteProtected = DemConf_DemEventParameter_NVM_E_WRITE_PROTECTED; 


/* close section, to ensure unique section ends */
#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* 8Bit Data section containing the CRC buffers, as well as the internal buffer */
#define NVM_START_SEC_VAR_NOINIT_8
#include "MemMap.h"

static VAR(uint8, NVM_PRIVATE_DATA) NvMConfigBlock_RamBlock_au8[4U];

#if ((NVM_CRC_INT_BUFFER == STD_ON) || (NVM_REPAIR_REDUNDANT_BLOCKS_API == STD_ON))
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_WhlImbRejctn_CmpPeakData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_SeedKey_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwAgSnsrls_StordLstPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) SnpshtDataAry_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiagc_GmIgnCntr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_SysFricLrng_FricNonLrngData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_SysFricLrng_FricLrngData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_MotTqCmdSca_MotTqScaFac_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PullCmpActv_PullCmpLongTerm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_DutyCycThermProtn_FilStVal_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_DiRestore_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_CcaSerlNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrRepairShopCod_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrSysName_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrSysCodVersNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrEndMdlPartNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrBasMdlPartNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrVinData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrProgmDate_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrCalProgdSts_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_EotLrng_EotNvmData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwAg1Meas_HwAg1Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_NvMProxy_ShtdwnClsChk_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwAg0Meas_HwAg0Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) MotPrmNom_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) PolarityCfgSaved_Crc_au8[2UL]; 


/* create the internal buffer of size NVM_INTERNAL_BUFFER_LENGTH */
VAR(uint8, NVM_PRIVATE_DATA) NvM_InternalBuffer_au8[NVM_INTERNAL_BUFFER_LENGTH];
#endif

/* create a test buffer of size 1 byte for testing readability of a block */
VAR(uint8, NVM_PRIVATE_DATA) NvM_TestBuffer_u8;

#define NVM_STOP_SEC_VAR_NOINIT_8
#include "MemMap.h"

#define NVM_START_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

CONST(NvM_BlockIdType, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

/* PRQA S 0759 1 */ /* MD_MSR_18.4 */
CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t = {(uint16)NVM_COMPILED_CONFIG_ID};
 
/* block descriptor table that holds the static configuration parameters of the RAM, ROM and NVBlocks.
* This table has to be adjusted according to the configuration of the NVManager.
*/
     
/* PRQA S 0310 RamRomBlocks *//* MD_NvM_11.4 */
CONST(NvM_BlockDescriptorType, NVM_CONFIG_CONST) NvM_BlockDescriptorTable_at[NVM_TOTAL_NUM_OF_NVRAM_BLOCKS] =
    {
      { /*  MultiBlockRequest  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0001U /*  NV block Base number (defined by FEE/EA)  */ , 
        0 /*  Length of the block in bytes  */ , 
        0U /*  Number of multiple blocks  */ , 
        255U /*  Block Priority  */ , 
        0u /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        0u /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  NvMConfigBlock  */ 
        (NvM_RamAddressType)NvMConfigBlock_RamBlock_au8 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x00EAU /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        2U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_REDUNDANT /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  CurrMeasMotEol_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x00E8U /*  NV block Base number (defined by FEE/EA)  */ , 
        76U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_WhlImbRejctn_CmpPeakData  */ 
        (NvM_RamAddressType)&Rte_WhlImbRejctn_CmpPeakData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_WhlImbRejctn_CmpPeakData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0004U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw  */ 
        (NvM_RamAddressType)&Rte_EotLrng_MaxHwAgCwAndCcw /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0006U /*  NV block Base number (defined by FEE/EA)  */ , 
        12U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_SeedKey  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_SeedKey /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.SeedKeyDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_SeedKey_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0008U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x000AU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAgSnsrls_StordLstPrm  */ 
        (NvM_RamAddressType)&Rte_HwAgSnsrls_StordLstPrm /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP.StordLstPrmDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwAgSnsrls_StordLstPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x000CU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  SnpshtDataAry  */ 
        (NvM_RamAddressType)&SnpshtDataAry_M /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        SnpshtDataAry_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x000EU /*  NV block Base number (defined by FEE/EA)  */ , 
        192U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry  */ 
        (NvM_RamAddressType)&Rte_GmMsg778BusHiSpd_DtcTrigStsAry /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0010U /*  NV block Base number (defined by FEE/EA)  */ , 
        40U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiagc_GmIgnCntr  */ 
        (NvM_RamAddressType)&Rte_CustDiagc_GmIgnCntr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiagc_GmIgnCntr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0012U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock8  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_8 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0014U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock9  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_9 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0016U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock10  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_10 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0018U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock11  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_11 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x001AU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock12  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_12 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x001CU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock13  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_13 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x001EU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock14  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_14 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0020U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock15  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_15 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0022U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock16  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_16 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0024U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock17  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_17 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0026U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock18  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_18 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0028U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock19  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_19 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x002AU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock20  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_20 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x002CU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock21  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_21 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x002EU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock22  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_22 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0030U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock23  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_23 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0032U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock24  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_24 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0034U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock25  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_25 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0036U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock26  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_26 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0038U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock27  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_27 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x003AU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock28  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_28 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x003CU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock29  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_29 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x003EU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock30  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_30 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0040U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock31  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_31 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0042U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock32  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_32 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0044U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock33  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_33 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0046U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock34  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_34 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0048U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock35  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_35 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x004AU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock36  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_36 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x004CU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock37  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_37 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x004EU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock38  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_38 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0050U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock39  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_39 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0052U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemAdminDataBlock  */ 
        (NvM_RamAddressType)&Dem_Cfg_AdminData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        Dem_NvM_InitAdminData /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0066U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemStatusDataBlock  */ 
        (NvM_RamAddressType)&Dem_Cfg_StatusData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        Dem_NvM_InitStatusData /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0064U /*  NV block Base number (defined by FEE/EA)  */ , 
        72U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock0  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_0 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0062U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock1  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_1 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0060U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock2  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_2 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x005EU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock3  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_3 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x005CU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock4  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_4 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x005AU /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock5  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_5 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0058U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock6  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_6 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0056U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock7  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_7 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0054U /*  NV block Base number (defined by FEE/EA)  */ , 
        44U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_Bootloader_SBAT  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrSecuBypAuthn /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0068U /*  NV block Base number (defined by FEE/EA)  */ , 
        822U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_Bootloader_NbId  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x006AU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_Bootloader_EcuId  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrEcuId /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x006CU /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_SysFricLrng_FricNonLrngData  */ 
        (NvM_RamAddressType)&Rte_SysFricLrng_FricNonLrngData /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricNonLrngDataDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_SysFricLrng_FricNonLrngData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0070U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_SysFricLrng_FricLrngData  */ 
        (NvM_RamAddressType)&Rte_SysFricLrng_FricLrngData /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricLrngDataDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_SysFricLrng_FricLrngData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x006EU /*  NV block Base number (defined by FEE/EA)  */ , 
        216U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData  */ 
        (NvM_RamAddressType)&Rte_HwAgVehCentrTrim_HwAgTrimData /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP.HwAgTrimDataDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0072U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x007EU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x007CU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x007AU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0078U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0076U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0074U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0080U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry  */ 
        (NvM_RamAddressType)&Rte_StHlthSigStc_SigStcHistDataAry /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0082U /*  NV block Base number (defined by FEE/EA)  */ , 
        225U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm  */ 
        (NvM_RamAddressType)&Rte_MotRplCoggCfg_MotRplCoggPrm /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0086U /*  NV block Base number (defined by FEE/EA)  */ , 
        18U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY  */ 
        (NvM_RamAddressType)&Rte_CDD_MotRplCoggCmd_MotCoggCmdY /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0084U /*  NV block Base number (defined by FEE/EA)  */ , 
        1024U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr  */ 
        (NvM_RamAddressType)&Rte_GmOvrlStMgr_GmLoaIgnCntr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0088U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd  */ 
        (NvM_RamAddressType)&Rte_SnsrOffsLrng_SnsrOffsLrnd /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x008AU /*  NV block Base number (defined by FEE/EA)  */ , 
        76U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_MotTqCmdSca_MotTqScaFac  */ 
        (NvM_RamAddressType)&Rte_MotTqCmdSca_MotTqScaFac /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_MotTqCmdSca_MotTqScaFac_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x008CU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PullCmpActv_PullCmpLongTerm  */ 
        (NvM_RamAddressType)&Rte_PullCmpActv_PullCmpLongTerm /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PullCmpActv_DEFAULT_RTE_CDATA_GROUP.PullCmpLongTermDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PullCmpActv_PullCmpLongTerm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x008EU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_DutyCycThermProtn_FilStVal  */ 
        (NvM_RamAddressType)&Rte_DutyCycThermProtn_FilStVal /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_DutyCycThermProtn_FilStVal_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0002U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf4 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0098U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_EpsSysSerlNr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A0U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf3 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x009EU /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_DiRestore  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_DiRestore /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_DiRestore_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x009CU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf2 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x009AU /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf1 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0090U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_CcaHwPartNr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0096U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf0 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0094U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_CcaSerlNr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_CcaSerlNr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_CcaSerlNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0092U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrRepairShopCod  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrRepairShopCod /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrRepairShopCodDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrRepairShopCod_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00BEU /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrSysName  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrSysName /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrSysNameDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrSysName_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00BAU /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrCcaMfgTrakg /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCcaMfgTrakgDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B8U /*  NV block Base number (defined by FEE/EA)  */ , 
        9U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrSysCodVersNr  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrSysCodVersNr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrSysCodVersNrDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrSysCodVersNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B6U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrNxtrMfgTrakg /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrNxtrMfgTrakgDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B4U /*  NV block Base number (defined by FEE/EA)  */ , 
        7U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrEndMdlPartNr  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrEndMdlPartNr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrEndMdlPartNrDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrEndMdlPartNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B2U /*  NV block Base number (defined by FEE/EA)  */ , 
        6U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrBasMdlPartNr  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrBasMdlPartNr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrBasMdlPartNrDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrBasMdlPartNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B0U /*  NV block Base number (defined by FEE/EA)  */ , 
        6U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrCtrlPidSeedKey /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCtrlPidSeedKeyDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A2U /*  NV block Base number (defined by FEE/EA)  */ , 
        10U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrVinData  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrVinData /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrVinDataDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrVinData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00AEU /*  NV block Base number (defined by FEE/EA)  */ , 
        17U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrProgmDate  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrProgmDate /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrProgmDateDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrProgmDate_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00ACU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrDataUniversalNrSysId /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrDataUniversalNrSysIdDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00AAU /*  NV block Base number (defined by FEE/EA)  */ , 
        9U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrCalProgdSts  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrCalProgdSts /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCalProgdStsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrCalProgdSts_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A8U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrCustMfgEnaCntr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCustMfgEnaCntrDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A6U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey  */ 
        (NvM_RamAddressType)&Rte_PartNr_PartNrProgmSessionSeedKey /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrProgmSessionSeedKeyDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A4U /*  NV block Base number (defined by FEE/EA)  */ , 
        10U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet  */ 
        (NvM_RamAddressType)&Rte_CDD_CurrMeas_CurrMeasEolGainCalSet /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolGainCalSetDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C0U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet  */ 
        (NvM_RamAddressType)&Rte_CDD_CurrMeas_CurrMeasEolOffsCalSet /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolOffsCalSetDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00BCU /*  NV block Base number (defined by FEE/EA)  */ , 
        52U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_EotLrng_EotNvmData  */ 
        (NvM_RamAddressType)&Rte_EotLrng_EotNvmData /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_EotLrng_DEFAULT_RTE_CDATA_GROUP.EotNvmDataDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_EotLrng_EotNvmData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C4U /*  NV block Base number (defined by FEE/EA)  */ , 
        12U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry  */ 
        (NvM_RamAddressType)&Rte_DiagcMgr_DiagcMgrNtcFltAry /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C2U /*  NV block Base number (defined by FEE/EA)  */ , 
        80U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm  */ 
        (NvM_RamAddressType)&Rte_MotAg2Meas_MotAg2EolPrm /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP.MotAg2EolPrmDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C6U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs  */ 
        (NvM_RamAddressType)&Rte_CDD_HwTq0Meas_HwTq0Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP.HwTq0OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C8U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs  */ 
        (NvM_RamAddressType)&Rte_CDD_HwTq1Meas_HwTq1Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP.HwTq1OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D0U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs  */ 
        (NvM_RamAddressType)&Rte_CDD_HwTq3Meas_HwTq3Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP.HwTq3OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00CEU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs  */ 
        (NvM_RamAddressType)&Rte_CDD_HwTq2Meas_HwTq2Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP.HwTq2OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00CCU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt  */ 
        (NvM_RamAddressType)&Rte_HwTqCorrln_HwTqChACmnModCmpLpFilSt /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP.HwTqChACmnModCmpLpFilStDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00CAU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt  */ 
        (NvM_RamAddressType)&Rte_HwTqCorrln_HwTqChBCmnModCmpLpFilSt /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP.HwTqChBCmnModCmpLpFilStDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D2U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAg1Meas_HwAg1Offs  */ 
        (NvM_RamAddressType)&Rte_HwAg1Meas_HwAg1Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP.HwAg1OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwAg1Meas_HwAg1Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D4U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_NvMProxy_ShtdwnClsChk  */ 
        (NvM_RamAddressType)&Rte_CDD_NvMProxy_ShtdwnClsChk /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        CDD_NvMProxy_ClsChkReadCallBack /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        CDD_NvMProxy_ClsChkWrCallBack /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_NvMProxy_ShtdwnClsChk_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D6U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAg0Meas_HwAg0Offs  */ 
        (NvM_RamAddressType)&Rte_HwAg0Meas_HwAg0Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP.HwAg0OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwAg0Meas_HwAg0Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00DAU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAg1Meas_MotAg1CoeffTbl /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP.MotAg1CoeffTblDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D8U /*  NV block Base number (defined by FEE/EA)  */ , 
        104U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_NxtrMfgEnaCntr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmMfgEnaCntr_DefaultValue /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x00E0U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_IgnCntr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_IgnCntr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmIgnCntr_DefaultValue /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x00DCU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  MotPrmNom  */ 
        (NvM_RamAddressType)&Rte_MotCtrlPrmEstimn_MotPrmNom /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        MotPrmNom_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E2U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAgCmp_MotAgCmpMotAgBackEmf /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP.MotAgCmpMotAgBackEmfDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00DEU /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAg0Meas_MotAg0CoeffTbl /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP.MotAg0CoeffTblDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E4U /*  NV block Base number (defined by FEE/EA)  */ , 
        104U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  PolarityCfgSaved  */ 
        (NvM_RamAddressType)&Rte_PolarityCfg_PolarityCfgSaved /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        PolarityCfgSaved_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E6U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }
    };

/* PRQA L:RamRomBlocks */

/* Permanent RAM and ROM block length checks - compile time (only available for blocks with enabled length check */

/* How does it work:
 * data length = sizeof(ramBlock - CrcLength 
 *     - CRC internal buffer enabled: CRC length == 0, RAM blocks store only data, CRC is handles internally
 *     - CRC internal buffer disabled: CRC length is the number of CRC bytes, for blocks without CRC the length == 0
 *     - for ROM blocks the CRC does not matter
 * Data length has to be > or < or == to configured NvM block length, depending on configuration (see above). 
 * In case the lengths do not match a bitfield with length -1 will be created and shall cause a compiler error.
 * The compiler error shall mark the line with invalid bitfield (bitfield length == -1) - the line includes all required information:
 *     - Block_ + NvM block name
 *     - length error description
 *     - RAM block name, CRC length and configured NvM block length
 */

typedef unsigned int NvM_LengthCheck;
 
/* Block Length Check and Automatic Block Length enabled: error if sizeof RAM block is greater than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockGreaterThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) > (blockLength)) ? -1 : 1)
/* Block Length Check and Strict Length Check enabled: error if the sizeof RAM block does not match the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockDoesNotMatchConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) != (blockLength)) ? -1 : 1)
/* Block Length Check enabled and Strict Length Check disabled: error if the sizeof RAM block is less than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockLessThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) < (blockLength)) ? -1 : 1)

/* RAM block length checks */
struct PermanentRamBlockLengthChecks {
  NvM_LengthCheck Block_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_EotLrng_MaxHwAgCwAndCcw, 0, 12U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_SeedKey : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_SeedKey, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAgSnsrls_StordLstPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwAgSnsrls_StordLstPrm, 0, 8U);
  NvM_LengthCheck Block_SnpshtDataAry : SizeOfRamBlockDoesNotMatchConfiguredLength(SnpshtDataAry_M, 0, 192U);
  NvM_LengthCheck Block_Rte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_GmMsg778BusHiSpd_DtcTrigStsAry, 0, 40U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiagc_GmIgnCntr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiagc_GmIgnCntr, 0, 2U);
  NvM_LengthCheck Block_DemPrimaryDataBlock8 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_8, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock9 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_9, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock10 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_10, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock11 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_11, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock12 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_12, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock13 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_13, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock14 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_14, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock15 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_15, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock16 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_16, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock17 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_17, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock18 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_18, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock19 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_19, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock20 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_20, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock21 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_21, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock22 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_22, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock23 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_23, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock24 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_24, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock25 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_25, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock26 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_26, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock27 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_27, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock28 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_28, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock29 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_29, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock30 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_30, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock31 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_31, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock32 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_32, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock33 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_33, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock34 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_34, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock35 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_35, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock36 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_36, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock37 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_37, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock38 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_38, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock39 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_39, 0, 44U);
  NvM_LengthCheck Block_DemAdminDataBlock : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_AdminData, 0, 8U);
  NvM_LengthCheck Block_DemStatusDataBlock : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_StatusData, 0, 72U);
  NvM_LengthCheck Block_DemPrimaryDataBlock0 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_0, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock1 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_1, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock2 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_2, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock3 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_3, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock4 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_4, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock5 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_5, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock6 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_6, 0, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock7 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_PrimaryEntry_7, 0, 44U);
  NvM_LengthCheck Block_Rte_NvmBlock_Bootloader_SBAT : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrSecuBypAuthn, 0, 822U);
  NvM_LengthCheck Block_Rte_NvmBlock_Bootloader_EcuId : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrEcuId, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricNonLrngData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_SysFricLrng_FricNonLrngData, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricLrngData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_SysFricLrng_FricLrngData, 0, 216U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwAgVehCentrTrim_HwAgTrimData, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_StHlthSigStc_SigStcHistDataAry : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_StHlthSigStc_SigStcHistDataAry, 0, 225U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotRplCoggCfg_MotRplCoggPrm, 0, 18U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotRplCoggCmd_MotCoggCmdY, 0, 1024U);
  NvM_LengthCheck Block_Rte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_GmOvrlStMgr_GmLoaIgnCntr, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_SnsrOffsLrng_SnsrOffsLrnd, 0, 76U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotTqCmdSca_MotTqScaFac, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PullCmpActv_PullCmpLongTerm, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_DutyCycThermProtn_FilStVal : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_DutyCycThermProtn_FilStVal, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf4, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_EpsSysSerlNr, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf3, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_DiRestore : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_DiRestore, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf2, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf1, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_CcaHwPartNr, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf0, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_CcaSerlNr, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrRepairShopCod : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrRepairShopCod, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrSysName : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrSysName, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrCcaMfgTrakg, 0, 9U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrSysCodVersNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrSysCodVersNr, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrNxtrMfgTrakg, 0, 7U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrEndMdlPartNr, 0, 6U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrBasMdlPartNr, 0, 6U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrCtrlPidSeedKey, 0, 10U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrVinData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrVinData, 0, 17U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrProgmDate : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrProgmDate, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrDataUniversalNrSysId, 0, 9U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCalProgdSts : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrCalProgdSts, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrCustMfgEnaCntr, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PartNr_PartNrProgmSessionSeedKey, 0, 10U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_CurrMeas_CurrMeasEolGainCalSet, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_CurrMeas_CurrMeasEolOffsCalSet, 0, 52U);
  NvM_LengthCheck Block_Rte_NvmBlock_EotLrng_EotNvmData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_EotLrng_EotNvmData, 0, 12U);
  NvM_LengthCheck Block_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_DiagcMgr_DiagcMgrNtcFltAry, 0, 80U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotAg2Meas_MotAg2EolPrm, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_HwTq0Meas_HwTq0Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_HwTq1Meas_HwTq1Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_HwTq3Meas_HwTq3Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_HwTq2Meas_HwTq2Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwTqCorrln_HwTqChACmnModCmpLpFilSt, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwTqCorrln_HwTqChBCmnModCmpLpFilSt, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAg1Meas_HwAg1Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwAg1Meas_HwAg1Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_NvMProxy_ShtdwnClsChk : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_NvMProxy_ShtdwnClsChk, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAg0Meas_HwAg0Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwAg0Meas_HwAg0Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAg1Meas_MotAg1CoeffTbl, 0, 104U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_NxtrMfgEnaCntr, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_IgnCntr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_IgnCntr, 0, 4U);
  NvM_LengthCheck Block_MotPrmNom : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotCtrlPrmEstimn_MotPrmNom, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAgCmp_MotAgCmpMotAgBackEmf, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAg0Meas_MotAg0CoeffTbl, 0, 104U);
  NvM_LengthCheck Block_PolarityCfgSaved : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PolarityCfg_PolarityCfgSaved, 0, 4U);
};

/* Block Length Check and Automatic Block Length enabled: error if sizeof ROM block is less than sizeof RAM block */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockLessThanSizeOfRamBlock(romBlock, ramBlock) ((sizeof(romBlock) < sizeof(ramBlock)) ? -1 : 1)
/* Block Length Check and Strict Length Check enabled: error if the sizeof ROM block does not match the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockDoesNotMatchConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) != (blockLength)) ? -1 : 1)
/* Block Length Check enabled, Strict Length disabled: error if the sizeof ROM block is less than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockLessThanConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) < (blockLength)) ? -1 : 1)

/* ROM block length checks */
struct PermRomBlockLengthCheck {
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_SeedKey : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.SeedKeyDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAgSnsrls_StordLstPrm : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP.StordLstPrmDft, 8U);
  NvM_LengthCheck Block_DemPrimaryDataBlock8 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock9 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock10 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock11 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock12 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock13 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock14 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock15 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock16 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock17 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock18 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock19 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock20 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock21 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock22 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock23 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock24 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock25 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock26 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock27 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock28 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock29 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock30 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock31 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock32 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock33 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock34 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock35 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock36 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock37 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock38 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock39 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock0 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock1 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock2 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock3 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock4 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock5 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock6 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_DemPrimaryDataBlock7 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_Cfg_MemoryEntryInit, 44U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricNonLrngData : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricNonLrngDataDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricLrngData : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricLrngDataDft, 216U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP.HwAgTrimDataDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_PullCmpActv_PullCmpLongTerm : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PullCmpActv_DEFAULT_RTE_CDATA_GROUP.PullCmpLongTermDft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrRepairShopCod : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrRepairShopCodDft, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrSysName : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrSysNameDft, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCcaMfgTrakg : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCcaMfgTrakgDft, 9U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrSysCodVersNr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrSysCodVersNrDft, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrNxtrMfgTrakg : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrNxtrMfgTrakgDft, 7U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrEndMdlPartNr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrEndMdlPartNrDft, 6U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrBasMdlPartNr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrBasMdlPartNrDft, 6U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCtrlPidSeedKey : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCtrlPidSeedKeyDft, 10U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrVinData : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrVinDataDft, 17U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrProgmDate : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrProgmDateDft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrDataUniversalNrSysId : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrDataUniversalNrSysIdDft, 9U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCalProgdSts : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCalProgdStsDft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrCustMfgEnaCntr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrCustMfgEnaCntrDft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_PartNr_PartNrProgmSessionSeedKey : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PartNr_DEFAULT_RTE_CDATA_GROUP.PartNrProgmSessionSeedKeyDft, 10U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolGainCalSetDft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolOffsCalSetDft, 52U);
  NvM_LengthCheck Block_Rte_NvmBlock_EotLrng_EotNvmData : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_EotLrng_DEFAULT_RTE_CDATA_GROUP.EotNvmDataDft, 12U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP.MotAg2EolPrmDft, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP.HwTq0OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP.HwTq1OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP.HwTq3OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP.HwTq2OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP.HwTqChACmnModCmpLpFilStDft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP.HwTqChBCmnModCmpLpFilStDft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAg1Meas_HwAg1Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP.HwAg1OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAg0Meas_HwAg0Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP.HwAg0OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP.MotAg1CoeffTblDft, 104U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmMfgEnaCntr_DefaultValue, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_IgnCntr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmIgnCntr_DefaultValue, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP.MotAgCmpMotAgBackEmfDft, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP.MotAg0CoeffTblDft, 104U);
};

/* Permanent RAM and ROM block length checks - END */

#define NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

#define NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#if(NVM_API_CONFIG_CLASS != NVM_API_CONFIG_CLASS_1)
/* Job Queue used for normal and high prio jobs */
VAR(NvM_QueueEntryType, NVM_PRIVATE_DATA) NvM_JobQueue_at[NVM_SIZE_STANDARD_JOB_QUEUE + NVM_SIZE_IMMEDIATE_JOB_QUEUE];
#endif

#if ((NVM_SET_RAM_BLOCK_STATUS_API == STD_ON) && (NVM_CALC_RAM_CRC_USED == STD_ON))
/* Crc job queue. It's just a bit string */
VAR(NvM_CrcQueueEntryType, NVM_CONFIG_DATA) NvM_CrcQueue_at[NVM_SIZE_CRC_JOB_QUEUE];
#endif

#define NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

/* array of RAM Block Management areas, defined to be usable in block descriptor table */
VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_BlockMngmtArea_at[NVM_TOTAL_NUM_OF_NVRAM_BLOCKS];

/* management area for DCM blocks */
VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_DcmBlockMngmt_t;

#define NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

#define NVM_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
*  NvM_EnterCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 enter SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_EnterCriticalSection(void)
{
    /* do what ever was defined to do for locking the resources */
    SchM_Enter_NvM_NVM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

/**********************************************************************************************************************
*  NvM_ExitCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 exit SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_ExitCriticalSection(void)
{
    /* do what ever was defined to do for unlocking the resources */
    SchM_Exit_NvM_NVM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

/* PRQA S 3453 2 */ /* MD_MSR_19.7 */ 
#define NvM_invokeMultiBlockMode(serv, res) 
#define NvM_invokeMultiCbk(serv, res)  

/**********************************************************************************************************************
*  NvM_MultiBlockCbk
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 invoke the BSWM notification if any is configured
 *  - #20 in case the given job result isn't set to pending, invoke the multi block job end notification
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_MultiBlockCbk(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
{
    /* The complete function body is designed to be optimized away by the compiler, if it is not needed    *
     * If the used macro is empty, the compiler may decide to remove code because it would contain         *
     * emtpy execution blocks (it does not matter whether conditions were TRUE or FALSE                    */
    NvM_invokeMultiBlockMode(ServiceId, JobResult);

    if(JobResult != NVM_REQ_PENDING)
    {
        NvM_invokeMultiCbk(ServiceId, JobResult);
    }   
}

 /* PRQA S 3453 2 */ /* MD_MSR_19.7 */ 
#define NvM_invokeCbk(descr, serv, res) 
#define NvM_invokeCurrentBlockMode(id, res) 

/**********************************************************************************************************************
*  NvM_BlockNotification
**********************************************************************************************************************/
/*!
 * \internal
 *  - #100 only for normal blocks (no DCM blocks)
 *      - #110 only when
 *        single block callback configured and
 *        the job is done (result != NVM_REQ_PENDING) and
 *        current job is not WriteAll (do not invoke any callbacks during WriteAll) and
 *        for ReadAll as current job the callback invoking is enabled
 *      - #111 invoke the single block callback
 *  - #120 block has enabled BswM callback
 *      - #121 invoke BswM callback
 * \endinternal
 */
void NvM_BlockNotification(NvM_BlockIdType BlockId, NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
{
    /* The complete function body is designed to be optimized away by the compiler, if it is not needed    *
     * If the used macros are empty, the compiler may decide to remove code because it would contain       *
     * empty execution blocks (it does not matter whether conditions were TRUE or FALSE                    */
    const NvM_BlockIdType orgBlockId = NVM_BLOCK_FROM_DCM_ID(BlockId);
    const NvM_BlockDescrPtrType blockDescriptorPtr = &NvM_BlockDescriptorTable_at[orgBlockId];
    /* #100 only for normal blocks (no DCM blocks) */
    if (orgBlockId == BlockId)
    {
    	/* #110 only when
    	 * single block callback configured and
    	 * the job is done (result != NVM_REQ_PENDING) and
    	 * current job is not WriteAll (do not invoke any callbacks during WriteAll) and
    	 * for ReadAll as current job the callback invoking is enabled */
    	if((blockDescriptorPtr->CallbackFunc_pt != NULL_PTR) && (JobResult != NVM_REQ_PENDING) &&
    	    (ServiceId != NVM_WRITE_ALL) &&
			(!((ServiceId == NVM_READ_ALL) && ((blockDescriptorPtr->Flags_u8 & NVM_CBK_DURING_READALL_ON) != NVM_CBK_DURING_READALL_ON))))
    	{
    	    /* #111 invoke the single block callback */
            NvM_invokeCbk(blockDescriptorPtr, ServiceId, JobResult); /* SBSW_NvM_FuncPtrCall_UserCallbacks */
    	}
    	/* #120 block has enabled BswM callback */
        /* PRQA S 3760 1 */ /* MD_NvM_10.1 */
    	if(blockDescriptorPtr->NotifyBswM == TRUE)
        {
    	    /* #121 invoke BswM callback */
            NvM_invokeCurrentBlockMode(BlockId, JobResult);
        }
    }      
}

#if (NVM_USE_CRC16 == STD_ON)
/**********************************************************************************************************************
*  NvM_Crc_Crc16_Calculate
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 invoke Crc API to calculate Crc16
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE)  NvM_Crc_Crc16_Calculate(NvM_ConstRamAddressType data_pt, uint16 length, NvM_CrcValuePtrType currCrc)
{
    /* Pointer cast is necessary for efficiency reasons.
     * We cast to a "smaller" type with less alignment requirements; it is harmless */
    typedef P2VAR(uint16, AUTOMATIC, NVM_CRC_BUFFER_PTR_CLASS) NvM_Crc16PtrType;
    
    /* PRQA S 0310 1 *//* MD_NvM_11.4 */ 
    *(NvM_Crc16PtrType)currCrc = Crc_CalculateCRC16(data_pt, length, *(NvM_Crc16PtrType)currCrc, FALSE); /* SBSW_NvM_FuncCall_CrcModule */ /* SBSW_NvM_AccessPtr_CrcValue */
}

/**********************************************************************************************************************
*  NvM_Crc_Crc16_Compare
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 compare two Crc bytes to each other
 * \endinternal
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc16_Compare(NvM_CrcBufferConstPtrType crc1, NvM_CrcValueRefType crc2)
{
    return (boolean)((crc1[0] == crc2[0]) && (crc1[1] == crc2[1]));
}

/**********************************************************************************************************************
*  NvM_Crc_Crc16_CopyToBuffer
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 copy two Crc bytes from source to destination
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc16_CopyToBuffer (NvM_CrcBufferPtrType dest, NvM_CrcValueRefType src)
{
    dest[0] = src[0]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[1] = src[1]; /* SBSW_NvM_AccessArray_CrcBuffers */
}
#endif /* (NVM_USE_CRC16 == STD_ON) */

#if (NVM_USE_CRC32 == STD_ON)
/**********************************************************************************************************************
*  NvM_Crc_Crc32_Calculate
**********************************************************************************************************************/
/*!
 * \internal
*   - #10 invoke Crc API to calculate Crc32
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE)  NvM_Crc_Crc32_Calculate(NvM_ConstRamAddressType data_pt, uint16 length, NvM_CrcValuePtrType currCrc)
{
    *currCrc = Crc_CalculateCRC32(data_pt, length, (*currCrc) ^ NVM_CRC32_XOR_VALUE, FALSE); /* SBSW_NvM_FuncCall_CrcModule */ /* SBSW_NvM_AccessPtr_CrcValue */
}

/**********************************************************************************************************************
*  NvM_Crc_Crc32_Compare
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 compare four Crc bytes to each other
 * \endinternal
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc32_Compare(NvM_CrcBufferConstPtrType crc1, NvM_CrcValueRefType crc2)
{
    return (boolean)((crc1[0] == crc2[0]) && (crc1[1] == crc2[1]) && (crc1[2] == crc2[2]) && (crc1[3] == crc2[3]));
}

/**********************************************************************************************************************
*  NvM_Crc_Crc32_CopyToBuffer
**********************************************************************************************************************/
/*!
 * \internal
*   - #10 copy four Crc bytes from source to destination
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc32_CopyToBuffer (NvM_CrcBufferPtrType dest, NvM_CrcValueRefType src)
{
    dest[0] = src[0]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[1] = src[1]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[2] = src[2]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[3] = src[3]; /* SBSW_NvM_AccessArray_CrcBuffers */
}
#endif /* (NVM_USE_CRC32 == STD_ON) */

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

/* PRQA L:inclusions */

/* ---- End of File ------------------------------------------------------- */

