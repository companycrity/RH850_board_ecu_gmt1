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
 *            Module: Fee
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fee_Cfg.h
 *   Generation Time: 2017-02-10 15:05:25
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/

    
/**********************************************************************************************************************
 *  PUBLIC SECTION
 *********************************************************************************************************************/
#if !defined (FEE_CFG_H_PUBLIC)
# define FEE_CFG_H_PUBLIC

  /********************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   *******************************************************************************************************************/
  /****************************************************************************
   * VERSION IDENTIFICATION
   ***************************************************************************/
# define FEE_CFG_MAJOR_VERSION                    (8u)
# define FEE_CFG_MINOR_VERSION                    (1u)
# define FEE_CFG_PATCH_VERSION                    (1u)

  /****************************************************************************
   * API CONFIGURATION
   ***************************************************************************/
# define FEE_VERSION_INFO_API                     (STD_OFF)
# define FEE_GET_ERASE_CYCLE_API                  (STD_OFF)
# define FEE_GET_WRITE_CYCLE_API                  (STD_OFF)
# define FEE_FORCE_SECTOR_SWITCH_API              (STD_OFF)
# define FEE_FSS_CONTROL_API              		  (STD_ON)

# define FEE_DATA_CONVERSION_API                  (STD_OFF)

  /****************************************************************************
   * DEVELOPMENT CONFIGURATION
   ***************************************************************************/
# define FEE_DEV_ERROR_DETECT                     (STD_ON)

# define FEE_DEBUG_REPORTING                      (STD_ON)

  /****************************************************************************
   * GENERAL CONFIGURATION PARAMETER
   ***************************************************************************/

#define FeeConf_FeeBlockConfiguration_FeeConfigBlock (234UL) 
#define FeeConf_FeeBlockConfiguration_FeeCurrMeasMotEol_Deprecated (232UL) 
#define FeeConf_FeeBlockConfiguration_FeePolarityCfgSaved (230UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl (228UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf (222UL) 
#define FeeConf_FeeBlockConfiguration_FeeMotPrmNom (226UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr (224UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_IgnCntr (220UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl (216UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAg0Meas_HwAg0Offs (218UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_NvMProxy_ShtdwnClsChk (214UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAg1Meas_HwAg1Offs (212UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt (202UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt (210UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs (208UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs (206UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs (204UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs (200UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_MotAg2Meas_MotAg2EolPrm (198UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry (194UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_EotLrng_EotNvmData (196UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet (188UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet (192UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrRepairShopCod (190UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrSysName (186UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrCcaMfgTrakg (184UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrSysCodVersNr (182UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrNxtrMfgTrakg (180UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrEndMdlPartNr (178UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrBasMdlPartNr (176UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrCtrlPidSeedKey (162UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrVinData (174UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrProgmDate (172UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrDataUniversalNrSysId (170UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrCalProgdSts (168UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrCustMfgEnaCntr (166UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PartNr_PartNrProgmSessionSeedKey (164UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf4 (152UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_EpsSysSerlNr (160UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf3 (158UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_DiRestore (156UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf2 (154UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf1 (144UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_CcaHwPartNr (150UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf0 (148UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_CcaSerlNr (146UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_DutyCycThermProtn_FilStVal (2UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PullCmpActv_PullCmpLongTerm (142UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_MotTqCmdSca_MotTqScaFac (140UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd (138UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr (136UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm (134UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY (132UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_StHlthSigStc_SigStcHistDataAry (130UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated (128UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated (126UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated (124UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated (122UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated (120UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated (118UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated (116UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData (114UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_SysFricLrng_FricNonLrngData (112UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_SysFricLrng_FricLrngData (110UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_Bootloader_EcuId (108UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_Bootloader_NbId (106UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_Bootloader_SBAT (104UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemAdminDataBlock (102UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemStatusDataBlock (100UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock0 (98UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock1 (96UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock2 (94UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock3 (92UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock4 (90UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock5 (88UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock6 (86UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock7 (84UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock8 (20UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock9 (22UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock10 (24UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock11 (26UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock12 (28UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock13 (30UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock14 (32UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock15 (34UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock16 (36UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock17 (38UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock18 (40UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock19 (42UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock20 (44UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock21 (46UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock22 (48UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock23 (50UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock24 (52UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock25 (54UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock26 (56UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock27 (58UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock28 (60UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock29 (62UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock30 (64UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock31 (66UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock32 (68UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock33 (70UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock34 (72UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock35 (74UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock36 (76UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock37 (78UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock38 (80UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock39 (82UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiagc_GmIgnCntr (18UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry (16UL) 
#define FeeConf_FeeBlockConfiguration_FeeSnpshtDataAry (14UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAgSnsrls_StordLstPrm (12UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated (10UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_SeedKey (8UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_EotLrng_MaxHwAgCwAndCcw (6UL) 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_WhlImbRejctn_CmpPeakData (4UL) 


#define FEE0 (0U) 
#define FEE1 (1U) 


#define FEE_NUMBER_OF_PARTITIONS (2)

#endif /* FEE_CFG_H_PUBLIC */

/**********************************************************************************************************************
 *  END OF FILE: Fee_Cfg.h
 *********************************************************************************************************************/
 

