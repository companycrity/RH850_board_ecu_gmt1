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
 *            Module: Dem
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2017-02-12 16:24:29
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                           /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                       /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_Dem.h"
#else
#endif


/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CallbackDtcStatusChanged
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_DtcStatusChangedFPtrType, DEM_CONST) Dem_Cfg_CallbackDtcStatusChanged[1] = {
  /* Index    CallbackDtcStatusChanged                 */
  /*     0 */Rte_Call_CBStatusDTC_1_DTCStatusChanged 
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  IdNumber                           
  CollectionSize                     
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  MaskedBits                             contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[20] = {
    /* Index    IdNumber  CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  MaskedBits  StorageKind                     Referable Keys */
  { /*     0 */  0x0000U,             0U, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE,      0x00U, DEM_CFG_EREC_TYPE_GLOBAL },  /* [#NoDataCollectionConfigured] */
  { /*     1 */  0x4016U,             2U,                                                                1U,                                                                  0U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid4016, Ffm:DemFreezeFrameClass] */
  { /*     2 */  0x401BU,             1U,                                                                2U,                                                                  1U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid401B, Ffm:DemFreezeFrameClass] */
  { /*     3 */  0x4074U,             2U,                                                                3U,                                                                  2U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid4074, Ffm:DemFreezeFrameClass] */
  { /*     4 */  0x40ACU,             2U,                                                                4U,                                                                  3U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid40AC, Ffm:DemFreezeFrameClass] */
  { /*     5 */  0x40ADU,             1U,                                                                5U,                                                                  4U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid40AD, Ffm:DemFreezeFrameClass] */
  { /*     6 */  0x40BCU,             2U,                                                                6U,                                                                  5U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid40BC, Ffm:DemFreezeFrameClass] */
  { /*     7 */  0x40BDU,             1U,                                                                7U,                                                                  6U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid40BD, Ffm:DemFreezeFrameClass] */
  { /*     8 */  0x41D3U,             2U,                                                                8U,                                                                  7U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid41D3, Ffm:DemFreezeFrameClass] */
  { /*     9 */  0x41D4U,             2U,                                                                9U,                                                                  8U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid41D4, Ffm:DemFreezeFrameClass] */
  { /*    10 */  0x41D5U,             1U,                                                               10U,                                                                  9U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid41D5, Ffm:DemFreezeFrameClass] */
  { /*    11 */  0x41D6U,             1U,                                                               11U,                                                                 10U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid41D6, Ffm:DemFreezeFrameClass] */
  { /*    12 */  0x41D7U,             2U,                                                               12U,                                                                 11U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid41D7, Ffm:DemFreezeFrameClass] */
  { /*    13 */  0x41D9U,             2U,                                                               13U,                                                                 12U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid41D9, Ffm:DemFreezeFrameClass] */
  { /*    14 */  0x43D0U,             1U,                                                               14U,                                                                 13U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid43D0, Ffm:DemFreezeFrameClass] */
  { /*    15 */  0x446FU,             2U,                                                               15U,                                                                 14U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid446F, Ffm:DemFreezeFrameClass] */
  { /*    16 */  0x8002U,             1U,                                                               16U,                                                                 15U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid8002, Ffm:DemFreezeFrameClass] */
  { /*    17 */  0x8078U,             1U,                                                               17U,                                                                 16U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPid8078, Ffm:DemFreezeFrameClass] */
  { /*    18 */  0xC000U,             4U,                                                               18U,                                                                 17U,      0x02U, DEM_CFG_EREC_TYPE_USER   },  /* [#DidPidC000, Ffm:DemFreezeFrameClass] */
  { /*    19 */  0xC050U,             4U,                                                               19U,                                                                 18U,      0x02U, DEM_CFG_EREC_TYPE_USER   }   /* [#DidPidC050, Ffm:DemFreezeFrameClass] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableFfm2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableFfm2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableFfm2CollInd[19] = {
  /* Index    DataCollectionTableFfm2CollInd      Referable Keys */
  /*     0 */                            16U,  /* [Ffm:DemFreezeFrameClass] */
  /*     1 */                            14U,  /* [Ffm:DemFreezeFrameClass] */
  /*     2 */                            17U,  /* [Ffm:DemFreezeFrameClass] */
  /*     3 */                             6U,  /* [Ffm:DemFreezeFrameClass] */
  /*     4 */                             7U,  /* [Ffm:DemFreezeFrameClass] */
  /*     5 */                            18U,  /* [Ffm:DemFreezeFrameClass] */
  /*     6 */                             1U,  /* [Ffm:DemFreezeFrameClass] */
  /*     7 */                            19U,  /* [Ffm:DemFreezeFrameClass] */
  /*     8 */                             2U,  /* [Ffm:DemFreezeFrameClass] */
  /*     9 */                             5U,  /* [Ffm:DemFreezeFrameClass] */
  /*    10 */                             3U,  /* [Ffm:DemFreezeFrameClass] */
  /*    11 */                             4U,  /* [Ffm:DemFreezeFrameClass] */
  /*    12 */                            13U,  /* [Ffm:DemFreezeFrameClass] */
  /*    13 */                             8U,  /* [Ffm:DemFreezeFrameClass] */
  /*    14 */                             9U,  /* [Ffm:DemFreezeFrameClass] */
  /*    15 */                            12U,  /* [Ffm:DemFreezeFrameClass] */
  /*    16 */                            10U,  /* [Ffm:DemFreezeFrameClass] */
  /*    17 */                            15U,  /* [Ffm:DemFreezeFrameClass] */
  /*    18 */                            11U   /* [Ffm:DemFreezeFrameClass] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ElementSize     Size of data element in Byte.
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value 28U or 30U use: Std_ReturnType (*)(uint8* Buffer); With value 29U or 31U use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId);.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[20] = {
    /* Index    ElementKind                   ElementSize  ReadDataFunc                                                                                                        Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID ,          0U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                         },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_IgnCycCntr_ReadData          },  /* [#IgnCycCntr, DidPid4016] */
  { /*     2 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EcuIntT_ReadData             },  /* [#EcuIntT, DidPid401B] */
  { /*     3 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_SteerWhlAg_ReadData          },  /* [#SteerWhlAg, DidPid4074] */
  { /*     4 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_SteerInpTq_ReadData          },  /* [#SteerInpTq, DidPid40AC] */
  { /*     5 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpdMotOvldProtnCntr_ReadData },  /* [#EpdMotOvldProtnCntr, DidPid40AD] */
  { /*     6 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EngSpd_ReadData              },  /* [#EngSpd, DidPid40BC] */
  { /*     7 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_VehSpd_ReadData              },  /* [#VehSpd, DidPid40BD] */
  { /*     8 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpsMotCurr_ReadData          },  /* [#EpsMotCurr, DidPid41D3] */
  { /*     9 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpsMotCurrFb_ReadData        },  /* [#EpsMotCurrFb, DidPid41D4] */
  { /*    10 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpsTqOvrlSts_ReadData        },  /* [#EpsTqOvrlSts, DidPid41D5] */
  { /*    11 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpsAgOvrlSts_ReadData        },  /* [#EpsAgOvrlSts, DidPid41D6] */
  { /*    12 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpsTqOvrlReq_ReadData        },  /* [#EpsTqOvrlReq, DidPid41D7] */
  { /*    13 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_SteerOutpTq_ReadData         },  /* [#SteerOutpTq, DidPid41D9] */
  { /*    14 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpsStopStrtSts_ReadData      },  /* [#EpsStopStrtSts, DidPid43D0] */
  { /*    15 */ DEM_CFG_DATA_FROM_CBK_STORED,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_EpsApaAgOvrlReq_ReadData     },  /* [#EpsApaAgOvrlReq, DidPid446F] */
  { /*    16 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_SysPwrMod_ReadData           },  /* [#SysPwrMod, DidPid8002] */
  { /*    17 */ DEM_CFG_DATA_FROM_CBK_STORED,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_BattVltgEcu_ReadData         },  /* [#BattVltgEcu, DidPid8078] */
  { /*    18 */ DEM_CFG_DATA_FROM_CBK_STORED,          4U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_SplrIntDtcInfo_ReadData      },  /* [#SplrIntDtcInfo, DidPidC000] */
  { /*    19 */ DEM_CFG_DATA_FROM_CBK_STORED,          4U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_TiIgnOn_ReadData             }   /* [#TiIgnOn, DidPidC050] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  DecrementStepSize         (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2] = {
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */                -1,             127,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x06U },  /* [CtrlrComChassisExpBusOff, CtrlrComHiSpdBusOff, DIO_E_REG_WRITE_VERIFY, DevPwrVltgOverMaxThd, DevPwrVltgUnderMinThd, DevPwrVltgUnderThd, EcuHwPrfmc, EcuSwPrfmcCalDataSetNotProgd, ElecSteerMotCirc, ElecSteerMotPosSnsrCir, FLS_E_COMPARE_FAILED, FLS_E_ERASE_FAILED, FLS_E_READ_FAILED, FLS_E_READ_FAILED_DED, FLS_E_WRITE_FAILED, InvldDataRxdFromBodtCtrlMod, InvldDataRxdFromElecBrkCtrlMod, InvldDataRxdFromElecBrkCtrlModChassisExp, InvldDataRxdFromEngCtrlMod, InvldDataRxdFromFrntCameraMod, InvldDataRxdFromParkAssiCtrlMod, InvldDataRxdFromTrsmCtrlMod, LostComWithBodyCtrlMod, LostComWithElecBrkCtrlMod, LostComWithElecBrkCtrlModChassisExp, LostComWithEngCtrlMod, LostComWithFrntCameraCtrlMod, LostComWithParkAssiCtrlMod, LostComWithTrsmCtrlMod, MCU_E_CLM_SELFDIAG_FAILURE, MCU_E_CLOCK_FAILURE, MCU_E_CVM_SELFDIAG_FAILURE, MCU_E_ECM_SELFDIAG_FAILURE, MCU_E_INT_INCONSISTENT, MCU_E_LOCKSTEP_SELFDIAG_FAILURE, MCU_E_REG_WRITE_VERIFY, MCU_E_WRITE_TIMEOUT_FAILURE, NVM_E_INTEGRITY_FAILED, NVM_E_LOSS_OF_REDUNDANCY, NVM_E_QUEUE_OVERFLOW, NVM_E_REQ_FAILED, NVM_E_VERIFY_FAILED, NVM_E_WRITE_PROTECTED, NVM_E_WRONG_BLOCK_ID, PORT_E_REG_WRITE_VERIFY, PORT_E_WRITE_TIMEOUT_FAILURE, SPI_E_DATA_TX_TIMEOUT_FAILURE, SPI_E_HARDWARE_ERROR, SteerFailrMtgtnLvl1LimpHomeMod, SteerFailrMtgtnLvl2LimpOver, SteerFailrMtgtnLvl3FadeOut, SteerWheelAgSnsrCalNorPrfmd, SteerWheelAgSnsrHwFlt, SteerWheelAgSnsrPlausly, SteerWhlTqInpSnsr, SteerWhlTqInpSnsrCalNoLrnd, SysThermErrTHi, WDG_59_DRIVERA_E_INT_INCONSISTENT, WDG_E_DISABLE_REJECTED, WDG_E_MODE_FAILED, WDG_E_READBACK_FAILURE, WDG_E_TRIGGER_TIMEOUT, Wdg_E_REG_WRITE_VERIFY] */
  { /*     1 */                 0,               0,                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00U }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element    Description
  UdsDtc 
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[33] = {
    /* Index    UdsDtc              Referable Keys */
  { /*     0 */ 0x00FFFFFFUL },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x0044604BUL },  /* [SteerWheelAgSnsrCalNorPrfmdClass] */
  { /*     2 */ 0x00417654UL },  /* [SysThermErrTHiClass] */
  { /*     3 */ 0x00C07700UL },  /* [CtrlrComChassisExpBusOffClass] */
  { /*     4 */ 0x00C07300UL },  /* [CtrlrComHiSpdBusOffClass] */
  { /*     5 */ 0x00480011UL },  /* [DevPwrVltgOverMaxThdClass] */
  { /*     6 */ 0x00480003UL },  /* [DevPwrVltgUnderThdClass] */
  { /*     7 */ 0x00456D00UL },  /* [EcuHwPrfmcClass] */
  { /*     8 */ 0x00456E42UL },  /* [EcuSwPrfmcCalDataSetNotProgdClass] */
  { /*     9 */ 0x00447500UL },  /* [ElecSteerMotCircClass] */
  { /*    10 */ 0x00447A00UL },  /* [ElecSteerMotPosSnsrCirClass] */
  { /*    11 */ 0x00C42271UL },  /* [InvldDataRxdFromBodtCtrlModClass] */
  { /*    12 */ 0x00C41571UL },  /* [InvldDataRxdFromElecBrkCtrlModClass] */
  { /*    13 */ 0x00E50271UL },  /* [InvldDataRxdFromElecBrkCtrlModChassisExpClass] */
  { /*    14 */ 0x00C40171UL },  /* [InvldDataRxdFromEngCtrlModClass] */
  { /*    15 */ 0x00C56B71UL },  /* [InvldDataRxdFromFrntCameraModClass] */
  { /*    16 */ 0x00C45A71UL },  /* [InvldDataRxdFromParkAssiCtrlModClass] */
  { /*    17 */ 0x00C40271UL },  /* [InvldDataRxdFromTrsmCtrlModClass] */
  { /*    18 */ 0x00C14000UL },  /* [LostComWithBodyCtrlModClass] */
  { /*    19 */ 0x00C12100UL },  /* [LostComWithElecBrkCtrlModClass] */
  { /*    20 */ 0x00D83300UL },  /* [LostComWithElecBrkCtrlModChassisExpClass] */
  { /*    21 */ 0x00C10000UL },  /* [LostComWithEngCtrlModClass] */
  { /*    22 */ 0x00C26A00UL },  /* [LostComWithFrntCameraCtrlModClass] */
  { /*    23 */ 0x00C15900UL },  /* [LostComWithParkAssiCtrlModClass] */
  { /*    24 */ 0x00C10100UL },  /* [LostComWithTrsmCtrlModClass] */
  { /*    25 */ 0x00559700UL },  /* [SteerFailrMtgtnLvl1LimpHomeModClass] */
  { /*    26 */ 0x00559800UL },  /* [SteerFailrMtgtnLvl2LimpOverClass] */
  { /*    27 */ 0x00559900UL },  /* [SteerFailrMtgtnLvl3FadeOutClass] */
  { /*    28 */ 0x00446058UL },  /* [SteerWheelAgSnsrHwFltClass] */
  { /*    29 */ 0x0044605AUL },  /* [SteerWheelAgSnsrPlauslyClass] */
  { /*    30 */ 0x00454500UL },  /* [SteerWhlTqInpSnsrClass] */
  { /*    31 */ 0x0045454BUL },  /* [SteerWhlTqInpSnsrCalNoLrndClass] */
  { /*    32 */ 0x00480012UL }   /* [DevPwrVltgUnderMinThdClass] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionTable
  \details
  Element                Description
  EnableConditionMask    Bit mask combination for EnableConditionGroup. 0x01 is internally used, individual bits are: [DemEnableConditionK=0x0002, DemEnableConditionA=0x0004, DemEnableConditionB=0x0008, DemEnableConditionC=0x0010, DemEnableConditionD=0x0020, DemEnableConditionE=0x0040, DemEnableConditionF=0x0080, DemEnableConditionG=0x0100, DemEnableConditionH=0x0200, DemEnableConditionI=0x0400, DemEnableConditionJ=0x0800]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionTableType, DEM_CONST) Dem_Cfg_EnableConditionTable[12] = {
    /* Index    EnableConditionMask        Referable Keys */
  { /*     0 */        0x00000451UL },  /* [SteerWhlTqInpSnsrEna] */
  { /*     1 */        0x0000005DUL },  /* [SteerWheelAgSnsrHwFltEna] */
  { /*     2 */        0x00000EEDUL },  /* [LostComWithElecBrkCtrlModChassisExpEna, LostComWithParkAssiCtrlModEna] */
  { /*     3 */        0x00000DEDUL },  /* [InvldDataRxdFromTrsmCtrlModEna, LostComWithBodyCtrlModEna, LostComWithElecBrkCtrlModEna, LostComWithEngCtrlModEna, LostComWithFrntCameraCtrlModEna] */
  { /*     4 */        0x00000CEDUL },  /* [InvldDataRxdFromBodtCtrlModEna, InvldDataRxdFromElecBrkCtrlModChassisExpEna, InvldDataRxdFromElecBrkCtrlModEna, InvldDataRxdFromEngCtrlModEna, InvldDataRxdFromFrntCameraModEna, InvldDataRxdFromParkAssiCtrlModEna, LostComWithTrsmCtrlModEna] */
  { /*     5 */        0x00000059UL },  /* [ElecSteerMotCircEna] */
  { /*     6 */        0x0000045DUL },  /* [EcuSwPrfmcCalDataSetNotProgdEna, SteerWheelAgSnsrCalNorPrfmdEna, SteerWheelAgSnsrPlauslyEna, SteerWhlTqInpSnsrCalNoLrndEna, SysThermErrTHiEna] */
  { /*     7 */        0x00000051UL },  /* [EcuHwPrfmcEna, ElecSteerMotPosSnsrCirEna] */
  { /*     8 */        0x0000040DUL },  /* [DevPwrVltgOverMaxThdEna, DevPwrVltgUnderMinThdEna, DevPwrVltgUnderThdEna] */
  { /*     9 */        0x00000063UL },  /* [CtrlrComHiSpdBusOffEna] */
  { /*    10 */        0x0000006DUL },  /* [CtrlrComChassisExpBusOffEna, SteerFailrMtgtnLvl1LimpHomeModEna, SteerFailrMtgtnLvl2LimpOverEna, SteerFailrMtgtnLvl3FadeOutEna] */
  { /*    11 */        0x00000001UL }   /* [#NoEnableConditionGroupConfigured] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                         Description
  AgingCycleCounterThreshold      DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass, if AgingAllowedOfEventTable==FALSE we use '255' here, too.
  AgingCycleId                    DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef
  DtcTableIdx                     the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EnableConditionTableIdx         the index of the 1:1 relation pointing to Dem_Cfg_EnableConditionTable
  FreezeFrameNumTableEndIdx       the end index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable
  FreezeFrameNumTableStartIdx     the start index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable
  FreezeFrameTableStdFFIdx        the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable
  MaskedBits                      contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable, Dem_Cfg_FreezeFrameNumTableUsedOfEventTable, Dem_Cfg_NormalIndicatorTableUsedOfEventTable
  NormalIndicatorTableEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_NormalIndicatorTable
  NormalIndicatorTableStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_NormalIndicatorTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[64] = {
    /* Index    AgingCycleCounterThreshold  AgingCycleId                          DtcTableIdx  EnableConditionTableIdx  FreezeFrameNumTableEndIdx                         FreezeFrameNumTableStartIdx                         FreezeFrameTableStdFFIdx  MaskedBits  NormalIndicatorTableEndIdx                         NormalIndicatorTableStartIdx                               Referable Keys */
  { /*     0 */                        50U, DemConf_DemOperationCycle_PowerCycle,          1U,                      6U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [#EVENT_INVALID] */
  { /*     1 */                        50U, DemConf_DemOperationCycle_PowerCycle,          1U,                      6U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [SteerWheelAgSnsrCalNorPrfmd] */
  { /*     2 */                        50U, DemConf_DemOperationCycle_PowerCycle,          2U,                      6U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [SysThermErrTHi] */
  { /*     3 */                        50U, DemConf_DemOperationCycle_PowerCycle,          3U,                     10U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [CtrlrComChassisExpBusOff] */
  { /*     4 */                        50U, DemConf_DemOperationCycle_PowerCycle,          4U,                      9U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [CtrlrComHiSpdBusOff] */
  { /*     5 */                        50U, DemConf_DemOperationCycle_PowerCycle,          5U,                      8U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [DevPwrVltgOverMaxThd] */
  { /*     6 */                        50U, DemConf_DemOperationCycle_PowerCycle,          6U,                      8U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [DevPwrVltgUnderThd] */
  { /*     7 */                        50U, DemConf_DemOperationCycle_PowerCycle,          7U,                      7U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [EcuHwPrfmc] */
  { /*     8 */                        50U, DemConf_DemOperationCycle_PowerCycle,          8U,                      6U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [EcuSwPrfmcCalDataSetNotProgd] */
  { /*     9 */                        50U, DemConf_DemOperationCycle_PowerCycle,          9U,                      5U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [ElecSteerMotCirc] */
  { /*    10 */                        50U, DemConf_DemOperationCycle_PowerCycle,         10U,                      7U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [ElecSteerMotPosSnsrCir] */
  { /*    11 */                        50U, DemConf_DemOperationCycle_PowerCycle,         11U,                      4U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [InvldDataRxdFromBodtCtrlMod] */
  { /*    12 */                        50U, DemConf_DemOperationCycle_PowerCycle,         12U,                      4U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [InvldDataRxdFromElecBrkCtrlMod] */
  { /*    13 */                        50U, DemConf_DemOperationCycle_PowerCycle,         13U,                      4U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [InvldDataRxdFromElecBrkCtrlModChassisExp] */
  { /*    14 */                        50U, DemConf_DemOperationCycle_PowerCycle,         14U,                      4U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [InvldDataRxdFromEngCtrlMod] */
  { /*    15 */                        50U, DemConf_DemOperationCycle_PowerCycle,         15U,                      4U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [InvldDataRxdFromFrntCameraMod] */
  { /*    16 */                        50U, DemConf_DemOperationCycle_PowerCycle,         16U,                      4U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [InvldDataRxdFromParkAssiCtrlMod] */
  { /*    17 */                        20U, DemConf_DemOperationCycle_PowerCycle,         17U,                      3U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [InvldDataRxdFromTrsmCtrlMod] */
  { /*    18 */                        50U, DemConf_DemOperationCycle_PowerCycle,         18U,                      3U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [LostComWithBodyCtrlMod] */
  { /*    19 */                        50U, DemConf_DemOperationCycle_PowerCycle,         19U,                      3U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [LostComWithElecBrkCtrlMod] */
  { /*    20 */                        50U, DemConf_DemOperationCycle_PowerCycle,         20U,                      2U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [LostComWithElecBrkCtrlModChassisExp] */
  { /*    21 */                        50U, DemConf_DemOperationCycle_PowerCycle,         21U,                      3U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [LostComWithEngCtrlMod] */
  { /*    22 */                        50U, DemConf_DemOperationCycle_PowerCycle,         22U,                      3U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [LostComWithFrntCameraCtrlMod] */
  { /*    23 */                        50U, DemConf_DemOperationCycle_PowerCycle,         23U,                      2U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [LostComWithParkAssiCtrlMod] */
  { /*    24 */                        50U, DemConf_DemOperationCycle_PowerCycle,         24U,                      4U,                                               1U,                                                 0U,                       1U,      0x0AU, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [LostComWithTrsmCtrlMod] */
  { /*    25 */                        50U, DemConf_DemOperationCycle_PowerCycle,         25U,                     10U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                1U,                                                  0U },  /* [SteerFailrMtgtnLvl1LimpHomeMod] */
  { /*    26 */                        50U, DemConf_DemOperationCycle_PowerCycle,         26U,                     10U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                1U,                                                  0U },  /* [SteerFailrMtgtnLvl2LimpOver] */
  { /*    27 */                        50U, DemConf_DemOperationCycle_PowerCycle,         27U,                     10U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                1U,                                                  0U },  /* [SteerFailrMtgtnLvl3FadeOut] */
  { /*    28 */                        50U, DemConf_DemOperationCycle_PowerCycle,         28U,                      1U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [SteerWheelAgSnsrHwFlt] */
  { /*    29 */                        50U, DemConf_DemOperationCycle_PowerCycle,         29U,                      6U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                2U,                                                  1U },  /* [SteerWheelAgSnsrPlausly] */
  { /*    30 */                        50U, DemConf_DemOperationCycle_PowerCycle,         30U,                      0U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [SteerWhlTqInpSnsr] */
  { /*    31 */                        50U, DemConf_DemOperationCycle_PowerCycle,         31U,                      6U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [SteerWhlTqInpSnsrCalNoLrnd] */
  { /*    32 */                        50U, DemConf_DemOperationCycle_PowerCycle,         32U,                      8U,                                               1U,                                                 0U,                       1U,      0x0BU,                                                3U,                                                  2U },  /* [DevPwrVltgUnderMinThd] */
  { /*    33 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [FLS_E_COMPARE_FAILED] */
  { /*    34 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [FLS_E_ERASE_FAILED] */
  { /*    35 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [FLS_E_READ_FAILED] */
  { /*    36 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [FLS_E_READ_FAILED_DED] */
  { /*    37 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [FLS_E_WRITE_FAILED] */
  { /*    38 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_CLM_SELFDIAG_FAILURE] */
  { /*    39 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_CLOCK_FAILURE] */
  { /*    40 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_CVM_SELFDIAG_FAILURE] */
  { /*    41 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  { /*    42 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [NVM_E_INTEGRITY_FAILED] */
  { /*    43 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  { /*    44 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [NVM_E_QUEUE_OVERFLOW] */
  { /*    45 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [NVM_E_REQ_FAILED] */
  { /*    46 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [NVM_E_VERIFY_FAILED] */
  { /*    47 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [NVM_E_WRITE_PROTECTED] */
  { /*    48 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [NVM_E_WRONG_BLOCK_ID] */
  { /*    49 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PORT_E_WRITE_TIMEOUT_FAILURE] */
    /* Index    AgingCycleCounterThreshold  AgingCycleId                          DtcTableIdx  EnableConditionTableIdx  FreezeFrameNumTableEndIdx                         FreezeFrameNumTableStartIdx                         FreezeFrameTableStdFFIdx  MaskedBits  NormalIndicatorTableEndIdx                         NormalIndicatorTableStartIdx                               Referable Keys */
  { /*    50 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  { /*    51 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [SPI_E_HARDWARE_ERROR] */
  { /*    52 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [WDG_E_DISABLE_REJECTED] */
  { /*    53 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [WDG_E_MODE_FAILED] */
  { /*    54 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [WDG_E_READBACK_FAILURE] */
  { /*    55 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [WDG_E_TRIGGER_TIMEOUT] */
  { /*    56 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_ECM_SELFDIAG_FAILURE] */
  { /*    57 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_LOCKSTEP_SELFDIAG_FAILURE] */
  { /*    58 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [DIO_E_REG_WRITE_VERIFY] */
  { /*    59 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_INT_INCONSISTENT] */
  { /*    60 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [MCU_E_REG_WRITE_VERIFY] */
  { /*    61 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [PORT_E_REG_WRITE_VERIFY] */
  { /*    62 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE },  /* [WDG_59_DRIVERA_E_INT_INCONSISTENT] */
  { /*    63 */                       255U, /*no AgingCycle*/ 1U                ,          0U,                     11U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0U,      0x00U, DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE }   /* [Wdg_E_REG_WRITE_VERIFY] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameTable
  \details
  Element                                   Description
  DataCollectionTableFfm2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  DataCollectionTableFfm2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  RecordSize                                Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements).
  RecordSizeUds                             Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message).
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[2] = {
    /* Index    DataCollectionTableFfm2CollIndEndIdx                               DataCollectionTableFfm2CollIndStartIdx                               RecordSize  RecordSizeUds        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE, DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE,         0U,            0U },  /* [#NoFreezeFrameConfigured, FLS_E_COMPARE_FAILED, FLS_E_ERASE_FAILED, FLS_E_READ_FAILED, FLS_E_READ_FAILED_DED, FLS_E_WRITE_FAILED, MCU_E_CLM_SELFDIAG_FAILURE, MCU_E_CLOCK_FAILURE, MCU_E_CVM_SELFDIAG_FAILURE, MCU_E_WRITE_TIMEOUT_FAILURE, NVM_E_INTEGRITY_FAILED, NVM_E_LOSS_OF_REDUNDANCY, NVM_E_QUEUE_OVERFLOW, NVM_E_REQ_FAILED, NVM_E_VERIFY_FAILED, NVM_E_WRITE_PROTECTED, NVM_E_WRONG_BLOCK_ID, PORT_E_WRITE_TIMEOUT_FAILURE, SPI_E_DATA_TX_TIMEOUT_FAILURE, SPI_E_HARDWARE_ERROR, WDG_E_DISABLE_REJECTED, WDG_E_MODE_FAILED, WDG_E_READBACK_FAILURE, WDG_E_TRIGGER_TIMEOUT, MCU_E_ECM_SELFDIAG_FAILURE, MCU_E_LOCKSTEP_SELFDIAG_FAILURE, DIO_E_REG_WRITE_VERIFY, MCU_E_INT_INCONSISTENT, MCU_E_REG_WRITE_VERIFY, PORT_E_REG_WRITE_VERIFY, WDG_59_DRIVERA_E_INT_INCONSISTENT, Wdg_E_REG_WRITE_VERIFY] */
  { /*     1 */                                                               19U,                                                                  0U,        34U,           74U }   /* [#DemFreezeFrameClass, #EVENT_INVALID, SteerWheelAgSnsrCalNorPrfmd, SysThermErrTHi, CtrlrComChassisExpBusOff, CtrlrComHiSpdBusOff, DevPwrVltgOverMaxThd, DevPwrVltgUnderThd, EcuHwPrfmc, EcuSwPrfmcCalDataSetNotProgd, ElecSteerMotCirc, ElecSteerMotPosSnsrCir, InvldDataRxdFromBodtCtrlMod, InvldDataRxdFromElecBrkCtrlMod, InvldDataRxdFromElecBrkCtrlModChassisExp, InvldDataRxdFromEngCtrlMod, InvldDataRxdFromFrntCameraMod, InvldDataRxdFromParkAssiCtrlMod, InvldDataRxdFromTrsmCtrlMod, LostComWithBodyCtrlMod, LostComWithElecBrkCtrlMod, LostComWithElecBrkCtrlModChassisExp, LostComWithEngCtrlMod, LostComWithFrntCameraCtrlMod, LostComWithParkAssiCtrlMod, LostComWithTrsmCtrlMod, SteerFailrMtgtnLvl1LimpHomeMod, SteerFailrMtgtnLvl2LimpOver, SteerFailrMtgtnLvl3FadeOut, SteerWheelAgSnsrHwFlt, SteerWheelAgSnsrPlausly, SteerWhlTqInpSnsr, SteerWhlTqInpSnsrCalNoLrnd, DevPwrVltgUnderMinThd] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockId
  \brief  The array contains these items: Admin, Status, 40 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[42] = {
  /* Index    MemoryBlockId                                                           Referable Keys */
  /*     0 */NvMConf_NvMBlockDescriptor_DemAdminDataBlock /*NvMBlockId=43*/     ,  /* [Dem_AdminData] */
  /*     1 */NvMConf_NvMBlockDescriptor_DemStatusDataBlock /*NvMBlockId=44*/    ,  /* [Dem_StatusData] */
  /*     2 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock0 /*NvMBlockId=45*/  ,  /* [Dem_PrimaryEntry0] */
  /*     3 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock1 /*NvMBlockId=46*/  ,  /* [Dem_PrimaryEntry1] */
  /*     4 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock2 /*NvMBlockId=47*/  ,  /* [Dem_PrimaryEntry2] */
  /*     5 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock3 /*NvMBlockId=48*/  ,  /* [Dem_PrimaryEntry3] */
  /*     6 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock4 /*NvMBlockId=49*/  ,  /* [Dem_PrimaryEntry4] */
  /*     7 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock5 /*NvMBlockId=50*/  ,  /* [Dem_PrimaryEntry5] */
  /*     8 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock6 /*NvMBlockId=51*/  ,  /* [Dem_PrimaryEntry6] */
  /*     9 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock7 /*NvMBlockId=52*/  ,  /* [Dem_PrimaryEntry7] */
  /*    10 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock8 /*NvMBlockId=11*/  ,  /* [Dem_PrimaryEntry8] */
  /*    11 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock9 /*NvMBlockId=12*/  ,  /* [Dem_PrimaryEntry9] */
  /*    12 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock10 /*NvMBlockId=13*/ ,  /* [Dem_PrimaryEntry10] */
  /*    13 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock11 /*NvMBlockId=14*/ ,  /* [Dem_PrimaryEntry11] */
  /*    14 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock12 /*NvMBlockId=15*/ ,  /* [Dem_PrimaryEntry12] */
  /*    15 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock13 /*NvMBlockId=16*/ ,  /* [Dem_PrimaryEntry13] */
  /*    16 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock14 /*NvMBlockId=17*/ ,  /* [Dem_PrimaryEntry14] */
  /*    17 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock15 /*NvMBlockId=18*/ ,  /* [Dem_PrimaryEntry15] */
  /*    18 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock16 /*NvMBlockId=19*/ ,  /* [Dem_PrimaryEntry16] */
  /*    19 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock17 /*NvMBlockId=20*/ ,  /* [Dem_PrimaryEntry17] */
  /*    20 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock18 /*NvMBlockId=21*/ ,  /* [Dem_PrimaryEntry18] */
  /*    21 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock19 /*NvMBlockId=22*/ ,  /* [Dem_PrimaryEntry19] */
  /*    22 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock20 /*NvMBlockId=23*/ ,  /* [Dem_PrimaryEntry20] */
  /*    23 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock21 /*NvMBlockId=24*/ ,  /* [Dem_PrimaryEntry21] */
  /*    24 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock22 /*NvMBlockId=25*/ ,  /* [Dem_PrimaryEntry22] */
  /*    25 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock23 /*NvMBlockId=26*/ ,  /* [Dem_PrimaryEntry23] */
  /*    26 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock24 /*NvMBlockId=27*/ ,  /* [Dem_PrimaryEntry24] */
  /*    27 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock25 /*NvMBlockId=28*/ ,  /* [Dem_PrimaryEntry25] */
  /*    28 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock26 /*NvMBlockId=29*/ ,  /* [Dem_PrimaryEntry26] */
  /*    29 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock27 /*NvMBlockId=30*/ ,  /* [Dem_PrimaryEntry27] */
  /*    30 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock28 /*NvMBlockId=31*/ ,  /* [Dem_PrimaryEntry28] */
  /*    31 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock29 /*NvMBlockId=32*/ ,  /* [Dem_PrimaryEntry29] */
  /*    32 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock30 /*NvMBlockId=33*/ ,  /* [Dem_PrimaryEntry30] */
  /*    33 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock31 /*NvMBlockId=34*/ ,  /* [Dem_PrimaryEntry31] */
  /*    34 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock32 /*NvMBlockId=35*/ ,  /* [Dem_PrimaryEntry32] */
  /*    35 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock33 /*NvMBlockId=36*/ ,  /* [Dem_PrimaryEntry33] */
  /*    36 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock34 /*NvMBlockId=37*/ ,  /* [Dem_PrimaryEntry34] */
  /*    37 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock35 /*NvMBlockId=38*/ ,  /* [Dem_PrimaryEntry35] */
  /*    38 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock36 /*NvMBlockId=39*/ ,  /* [Dem_PrimaryEntry36] */
  /*    39 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock37 /*NvMBlockId=40*/ ,  /* [Dem_PrimaryEntry37] */
  /*    40 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock38 /*NvMBlockId=41*/ ,  /* [Dem_PrimaryEntry38] */
  /*    41 */NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock39 /*NvMBlockId=42*/    /* [Dem_PrimaryEntry39] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 40 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[42] = {
  /* Index    MemoryDataPtr                                                                                   Referable Keys */
  /*     0 */(Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()         /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_AdminData] */
  /*     1 */(Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_StatusData] */
  /*     2 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry0] */
  /*     3 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry1] */
  /*     4 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry2] */
  /*     5 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry3] */
  /*     6 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry4] */
  /*     7 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry5] */
  /*     8 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry6] */
  /*     9 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry7] */
  /*    10 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_8()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry8] */
  /*    11 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_9()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry9] */
  /*    12 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_10()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry10] */
  /*    13 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_11()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry11] */
  /*    14 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_12()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry12] */
  /*    15 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_13()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry13] */
  /*    16 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_14()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry14] */
  /*    17 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_15()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry15] */
  /*    18 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_16()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry16] */
  /*    19 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_17()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry17] */
  /*    20 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_18()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry18] */
  /*    21 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_19()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry19] */
  /*    22 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_20()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry20] */
  /*    23 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_21()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry21] */
  /*    24 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_22()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry22] */
  /*    25 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_23()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry23] */
  /*    26 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_24()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry24] */
  /*    27 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_25()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry25] */
  /*    28 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_26()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry26] */
  /*    29 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_27()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry27] */
  /*    30 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_28()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry28] */
  /*    31 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_29()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry29] */
  /*    32 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_30()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry30] */
  /*    33 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_31()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry31] */
  /*    34 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_32()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry32] */
  /*    35 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_33()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry33] */
  /*    36 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_34()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry34] */
  /*    37 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_35()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry35] */
  /*    38 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_36()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry36] */
  /*    39 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_37()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry37] */
  /*    40 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_38()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry38] */
  /*    41 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_39()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_PrimaryEntry39] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 40 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[42] = {
  /* Index    MemoryDataSize                                                         Referable Keys */
  /*     0 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())       ,  /* [Dem_AdminData] */
  /*     1 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())      ,  /* [Dem_StatusData] */
  /*     2 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0())  ,  /* [Dem_PrimaryEntry0] */
  /*     3 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1())  ,  /* [Dem_PrimaryEntry1] */
  /*     4 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2())  ,  /* [Dem_PrimaryEntry2] */
  /*     5 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3())  ,  /* [Dem_PrimaryEntry3] */
  /*     6 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_4())  ,  /* [Dem_PrimaryEntry4] */
  /*     7 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_5())  ,  /* [Dem_PrimaryEntry5] */
  /*     8 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_6())  ,  /* [Dem_PrimaryEntry6] */
  /*     9 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_7())  ,  /* [Dem_PrimaryEntry7] */
  /*    10 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_8())  ,  /* [Dem_PrimaryEntry8] */
  /*    11 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_9())  ,  /* [Dem_PrimaryEntry9] */
  /*    12 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_10()) ,  /* [Dem_PrimaryEntry10] */
  /*    13 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_11()) ,  /* [Dem_PrimaryEntry11] */
  /*    14 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_12()) ,  /* [Dem_PrimaryEntry12] */
  /*    15 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_13()) ,  /* [Dem_PrimaryEntry13] */
  /*    16 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_14()) ,  /* [Dem_PrimaryEntry14] */
  /*    17 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_15()) ,  /* [Dem_PrimaryEntry15] */
  /*    18 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_16()) ,  /* [Dem_PrimaryEntry16] */
  /*    19 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_17()) ,  /* [Dem_PrimaryEntry17] */
  /*    20 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_18()) ,  /* [Dem_PrimaryEntry18] */
  /*    21 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_19()) ,  /* [Dem_PrimaryEntry19] */
  /*    22 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_20()) ,  /* [Dem_PrimaryEntry20] */
  /*    23 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_21()) ,  /* [Dem_PrimaryEntry21] */
  /*    24 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_22()) ,  /* [Dem_PrimaryEntry22] */
  /*    25 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_23()) ,  /* [Dem_PrimaryEntry23] */
  /*    26 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_24()) ,  /* [Dem_PrimaryEntry24] */
  /*    27 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_25()) ,  /* [Dem_PrimaryEntry25] */
  /*    28 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_26()) ,  /* [Dem_PrimaryEntry26] */
  /*    29 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_27()) ,  /* [Dem_PrimaryEntry27] */
  /*    30 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_28()) ,  /* [Dem_PrimaryEntry28] */
  /*    31 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_29()) ,  /* [Dem_PrimaryEntry29] */
  /*    32 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_30()) ,  /* [Dem_PrimaryEntry30] */
  /*    33 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_31()) ,  /* [Dem_PrimaryEntry31] */
  /*    34 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_32()) ,  /* [Dem_PrimaryEntry32] */
  /*    35 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_33()) ,  /* [Dem_PrimaryEntry33] */
  /*    36 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_34()) ,  /* [Dem_PrimaryEntry34] */
  /*    37 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_35()) ,  /* [Dem_PrimaryEntry35] */
  /*    38 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_36()) ,  /* [Dem_PrimaryEntry36] */
  /*    39 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_37()) ,  /* [Dem_PrimaryEntry37] */
  /*    40 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_38()) ,  /* [Dem_PrimaryEntry38] */
  /*    41 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_39())    /* [Dem_PrimaryEntry39] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_NormalIndicatorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_NormalIndicatorTable
  \details
  Element    Description
  Id         DemIndicatorID referenced by DemEventClass/DemIndicatorAttribute/DemIndicatorRef
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_NormalIndicatorTableType, DEM_CONST) Dem_Cfg_NormalIndicatorTable[3] = {
    /* Index    Id        Referable Keys */
  { /*     0 */ 3U },  /* [SteerFailrMtgtnLvl1LimpHomeMod, SteerFailrMtgtnLvl2LimpOver, SteerFailrMtgtnLvl3FadeOut] */
  { /*     1 */ 2U },  /* [DevPwrVltgUnderThd, InvldDataRxdFromElecBrkCtrlMod, InvldDataRxdFromEngCtrlMod, LostComWithEngCtrlMod, SteerWheelAgSnsrCalNorPrfmd, SteerWheelAgSnsrHwFlt, SteerWheelAgSnsrPlausly] */
  { /*     2 */ 1U }   /* [CtrlrComChassisExpBusOff, CtrlrComHiSpdBusOff, DevPwrVltgOverMaxThd, DevPwrVltgUnderMinThd, EcuHwPrfmc, EcuSwPrfmcCalDataSetNotProgd, ElecSteerMotCirc, ElecSteerMotPosSnsrCir, SteerWhlTqInpSnsr, SteerWhlTqInpSnsrCalNoLrnd, SysThermErrTHi] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_DEM_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[64];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID] */
  /*     1 */  /* [SteerWheelAgSnsrCalNorPrfmd] */
  /*     2 */  /* [SysThermErrTHi] */
  /*     3 */  /* [CtrlrComChassisExpBusOff] */
  /*     4 */  /* [CtrlrComHiSpdBusOff] */
  /*     5 */  /* [DevPwrVltgOverMaxThd] */
  /*     6 */  /* [DevPwrVltgUnderThd] */
  /*     7 */  /* [EcuHwPrfmc] */
  /*     8 */  /* [EcuSwPrfmcCalDataSetNotProgd] */
  /*     9 */  /* [ElecSteerMotCirc] */
  /*    10 */  /* [ElecSteerMotPosSnsrCir] */
  /*    11 */  /* [InvldDataRxdFromBodtCtrlMod] */
  /*    12 */  /* [InvldDataRxdFromElecBrkCtrlMod] */
  /*    13 */  /* [InvldDataRxdFromElecBrkCtrlModChassisExp] */
  /*    14 */  /* [InvldDataRxdFromEngCtrlMod] */
  /*    15 */  /* [InvldDataRxdFromFrntCameraMod] */
  /*    16 */  /* [InvldDataRxdFromParkAssiCtrlMod] */
  /*    17 */  /* [InvldDataRxdFromTrsmCtrlMod] */
  /*    18 */  /* [LostComWithBodyCtrlMod] */
  /*    19 */  /* [LostComWithElecBrkCtrlMod] */
  /*    20 */  /* [LostComWithElecBrkCtrlModChassisExp] */
  /*    21 */  /* [LostComWithEngCtrlMod] */
  /*    22 */  /* [LostComWithFrntCameraCtrlMod] */
  /*    23 */  /* [LostComWithParkAssiCtrlMod] */
  /*    24 */  /* [LostComWithTrsmCtrlMod] */
  /*    25 */  /* [SteerFailrMtgtnLvl1LimpHomeMod] */
  /*    26 */  /* [SteerFailrMtgtnLvl2LimpOver] */
  /*    27 */  /* [SteerFailrMtgtnLvl3FadeOut] */
  /*    28 */  /* [SteerWheelAgSnsrHwFlt] */
  /*    29 */  /* [SteerWheelAgSnsrPlausly] */
  /*    30 */  /* [SteerWhlTqInpSnsr] */
  /*    31 */  /* [SteerWhlTqInpSnsrCalNoLrnd] */
  /*    32 */  /* [DevPwrVltgUnderMinThd] */
  /*    33 */  /* [FLS_E_COMPARE_FAILED] */
  /*    34 */  /* [FLS_E_ERASE_FAILED] */
  /*    35 */  /* [FLS_E_READ_FAILED] */
  /*    36 */  /* [FLS_E_READ_FAILED_DED] */
  /*    37 */  /* [FLS_E_WRITE_FAILED] */
  /*    38 */  /* [MCU_E_CLM_SELFDIAG_FAILURE] */
  /*    39 */  /* [MCU_E_CLOCK_FAILURE] */
  /*    40 */  /* [MCU_E_CVM_SELFDIAG_FAILURE] */
  /*    41 */  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  /*    42 */  /* [NVM_E_INTEGRITY_FAILED] */
  /*    43 */  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  /*    44 */  /* [NVM_E_QUEUE_OVERFLOW] */
  /*    45 */  /* [NVM_E_REQ_FAILED] */
  /*    46 */  /* [NVM_E_VERIFY_FAILED] */
  /*    47 */  /* [NVM_E_WRITE_PROTECTED] */
  /*    48 */  /* [NVM_E_WRONG_BLOCK_ID] */
  /*    49 */  /* [PORT_E_WRITE_TIMEOUT_FAILURE] */
  /* Index        Referable Keys  */
  /*    50 */  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  /*    51 */  /* [SPI_E_HARDWARE_ERROR] */
  /*    52 */  /* [WDG_E_DISABLE_REJECTED] */
  /*    53 */  /* [WDG_E_MODE_FAILED] */
  /*    54 */  /* [WDG_E_READBACK_FAILURE] */
  /*    55 */  /* [WDG_E_TRIGGER_TIMEOUT] */
  /*    56 */  /* [MCU_E_ECM_SELFDIAG_FAILURE] */
  /*    57 */  /* [MCU_E_LOCKSTEP_SELFDIAG_FAILURE] */
  /*    58 */  /* [DIO_E_REG_WRITE_VERIFY] */
  /*    59 */  /* [MCU_E_INT_INCONSISTENT] */
  /*    60 */  /* [MCU_E_REG_WRITE_VERIFY] */
  /*    61 */  /* [PORT_E_REG_WRITE_VERIFY] */
  /*    62 */  /* [WDG_59_DRIVERA_E_INT_INCONSISTENT] */
  /*    63 */  /* [Wdg_E_REG_WRITE_VERIFY] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventInternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[64];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID] */
  /*     1 */  /* [SteerWheelAgSnsrCalNorPrfmd] */
  /*     2 */  /* [SysThermErrTHi] */
  /*     3 */  /* [CtrlrComChassisExpBusOff] */
  /*     4 */  /* [CtrlrComHiSpdBusOff] */
  /*     5 */  /* [DevPwrVltgOverMaxThd] */
  /*     6 */  /* [DevPwrVltgUnderThd] */
  /*     7 */  /* [EcuHwPrfmc] */
  /*     8 */  /* [EcuSwPrfmcCalDataSetNotProgd] */
  /*     9 */  /* [ElecSteerMotCirc] */
  /*    10 */  /* [ElecSteerMotPosSnsrCir] */
  /*    11 */  /* [InvldDataRxdFromBodtCtrlMod] */
  /*    12 */  /* [InvldDataRxdFromElecBrkCtrlMod] */
  /*    13 */  /* [InvldDataRxdFromElecBrkCtrlModChassisExp] */
  /*    14 */  /* [InvldDataRxdFromEngCtrlMod] */
  /*    15 */  /* [InvldDataRxdFromFrntCameraMod] */
  /*    16 */  /* [InvldDataRxdFromParkAssiCtrlMod] */
  /*    17 */  /* [InvldDataRxdFromTrsmCtrlMod] */
  /*    18 */  /* [LostComWithBodyCtrlMod] */
  /*    19 */  /* [LostComWithElecBrkCtrlMod] */
  /*    20 */  /* [LostComWithElecBrkCtrlModChassisExp] */
  /*    21 */  /* [LostComWithEngCtrlMod] */
  /*    22 */  /* [LostComWithFrntCameraCtrlMod] */
  /*    23 */  /* [LostComWithParkAssiCtrlMod] */
  /*    24 */  /* [LostComWithTrsmCtrlMod] */
  /*    25 */  /* [SteerFailrMtgtnLvl1LimpHomeMod] */
  /*    26 */  /* [SteerFailrMtgtnLvl2LimpOver] */
  /*    27 */  /* [SteerFailrMtgtnLvl3FadeOut] */
  /*    28 */  /* [SteerWheelAgSnsrHwFlt] */
  /*    29 */  /* [SteerWheelAgSnsrPlausly] */
  /*    30 */  /* [SteerWhlTqInpSnsr] */
  /*    31 */  /* [SteerWhlTqInpSnsrCalNoLrnd] */
  /*    32 */  /* [DevPwrVltgUnderMinThd] */
  /*    33 */  /* [FLS_E_COMPARE_FAILED] */
  /*    34 */  /* [FLS_E_ERASE_FAILED] */
  /*    35 */  /* [FLS_E_READ_FAILED] */
  /*    36 */  /* [FLS_E_READ_FAILED_DED] */
  /*    37 */  /* [FLS_E_WRITE_FAILED] */
  /*    38 */  /* [MCU_E_CLM_SELFDIAG_FAILURE] */
  /*    39 */  /* [MCU_E_CLOCK_FAILURE] */
  /*    40 */  /* [MCU_E_CVM_SELFDIAG_FAILURE] */
  /*    41 */  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  /*    42 */  /* [NVM_E_INTEGRITY_FAILED] */
  /*    43 */  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  /*    44 */  /* [NVM_E_QUEUE_OVERFLOW] */
  /*    45 */  /* [NVM_E_REQ_FAILED] */
  /*    46 */  /* [NVM_E_VERIFY_FAILED] */
  /*    47 */  /* [NVM_E_WRITE_PROTECTED] */
  /*    48 */  /* [NVM_E_WRONG_BLOCK_ID] */
  /*    49 */  /* [PORT_E_WRITE_TIMEOUT_FAILURE] */
  /* Index        Referable Keys  */
  /*    50 */  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  /*    51 */  /* [SPI_E_HARDWARE_ERROR] */
  /*    52 */  /* [WDG_E_DISABLE_REJECTED] */
  /*    53 */  /* [WDG_E_MODE_FAILED] */
  /*    54 */  /* [WDG_E_READBACK_FAILURE] */
  /*    55 */  /* [WDG_E_TRIGGER_TIMEOUT] */
  /*    56 */  /* [MCU_E_ECM_SELFDIAG_FAILURE] */
  /*    57 */  /* [MCU_E_LOCKSTEP_SELFDIAG_FAILURE] */
  /*    58 */  /* [DIO_E_REG_WRITE_VERIFY] */
  /*    59 */  /* [MCU_E_INT_INCONSISTENT] */
  /*    60 */  /* [MCU_E_REG_WRITE_VERIFY] */
  /*    61 */  /* [PORT_E_REG_WRITE_VERIFY] */
  /*    62 */  /* [WDG_59_DRIVERA_E_INT_INCONSISTENT] */
  /*    63 */  /* [Wdg_E_REG_WRITE_VERIFY] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventQueueStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventQueueStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventQueueStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventQueueStatus[64];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID] */
  /*     1 */  /* [SteerWheelAgSnsrCalNorPrfmd] */
  /*     2 */  /* [SysThermErrTHi] */
  /*     3 */  /* [CtrlrComChassisExpBusOff] */
  /*     4 */  /* [CtrlrComHiSpdBusOff] */
  /*     5 */  /* [DevPwrVltgOverMaxThd] */
  /*     6 */  /* [DevPwrVltgUnderThd] */
  /*     7 */  /* [EcuHwPrfmc] */
  /*     8 */  /* [EcuSwPrfmcCalDataSetNotProgd] */
  /*     9 */  /* [ElecSteerMotCirc] */
  /*    10 */  /* [ElecSteerMotPosSnsrCir] */
  /*    11 */  /* [InvldDataRxdFromBodtCtrlMod] */
  /*    12 */  /* [InvldDataRxdFromElecBrkCtrlMod] */
  /*    13 */  /* [InvldDataRxdFromElecBrkCtrlModChassisExp] */
  /*    14 */  /* [InvldDataRxdFromEngCtrlMod] */
  /*    15 */  /* [InvldDataRxdFromFrntCameraMod] */
  /*    16 */  /* [InvldDataRxdFromParkAssiCtrlMod] */
  /*    17 */  /* [InvldDataRxdFromTrsmCtrlMod] */
  /*    18 */  /* [LostComWithBodyCtrlMod] */
  /*    19 */  /* [LostComWithElecBrkCtrlMod] */
  /*    20 */  /* [LostComWithElecBrkCtrlModChassisExp] */
  /*    21 */  /* [LostComWithEngCtrlMod] */
  /*    22 */  /* [LostComWithFrntCameraCtrlMod] */
  /*    23 */  /* [LostComWithParkAssiCtrlMod] */
  /*    24 */  /* [LostComWithTrsmCtrlMod] */
  /*    25 */  /* [SteerFailrMtgtnLvl1LimpHomeMod] */
  /*    26 */  /* [SteerFailrMtgtnLvl2LimpOver] */
  /*    27 */  /* [SteerFailrMtgtnLvl3FadeOut] */
  /*    28 */  /* [SteerWheelAgSnsrHwFlt] */
  /*    29 */  /* [SteerWheelAgSnsrPlausly] */
  /*    30 */  /* [SteerWhlTqInpSnsr] */
  /*    31 */  /* [SteerWhlTqInpSnsrCalNoLrnd] */
  /*    32 */  /* [DevPwrVltgUnderMinThd] */
  /*    33 */  /* [FLS_E_COMPARE_FAILED] */
  /*    34 */  /* [FLS_E_ERASE_FAILED] */
  /*    35 */  /* [FLS_E_READ_FAILED] */
  /*    36 */  /* [FLS_E_READ_FAILED_DED] */
  /*    37 */  /* [FLS_E_WRITE_FAILED] */
  /*    38 */  /* [MCU_E_CLM_SELFDIAG_FAILURE] */
  /*    39 */  /* [MCU_E_CLOCK_FAILURE] */
  /*    40 */  /* [MCU_E_CVM_SELFDIAG_FAILURE] */
  /*    41 */  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  /*    42 */  /* [NVM_E_INTEGRITY_FAILED] */
  /*    43 */  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  /*    44 */  /* [NVM_E_QUEUE_OVERFLOW] */
  /*    45 */  /* [NVM_E_REQ_FAILED] */
  /*    46 */  /* [NVM_E_VERIFY_FAILED] */
  /*    47 */  /* [NVM_E_WRITE_PROTECTED] */
  /*    48 */  /* [NVM_E_WRONG_BLOCK_ID] */
  /*    49 */  /* [PORT_E_WRITE_TIMEOUT_FAILURE] */
  /* Index        Referable Keys  */
  /*    50 */  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  /*    51 */  /* [SPI_E_HARDWARE_ERROR] */
  /*    52 */  /* [WDG_E_DISABLE_REJECTED] */
  /*    53 */  /* [WDG_E_MODE_FAILED] */
  /*    54 */  /* [WDG_E_READBACK_FAILURE] */
  /*    55 */  /* [WDG_E_TRIGGER_TIMEOUT] */
  /*    56 */  /* [MCU_E_ECM_SELFDIAG_FAILURE] */
  /*    57 */  /* [MCU_E_LOCKSTEP_SELFDIAG_FAILURE] */
  /*    58 */  /* [DIO_E_REG_WRITE_VERIFY] */
  /*    59 */  /* [MCU_E_INT_INCONSISTENT] */
  /*    60 */  /* [MCU_E_REG_WRITE_VERIFY] */
  /*    61 */  /* [PORT_E_REG_WRITE_VERIFY] */
  /*    62 */  /* [WDG_59_DRIVERA_E_INT_INCONSISTENT] */
  /*    63 */  /* [Wdg_E_REG_WRITE_VERIFY] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterReportedEvents
  \brief  size = ceiling( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[8];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_IndicatorBlinking
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_IndicatorBlinking
  \brief  size = DEM_G_NUMBER_OF_INDICATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_IndicatorBlinkingType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorBlinking[4];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_IndicatorContinuous
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_IndicatorContinuous
  \brief  size = DEM_G_NUMBER_OF_INDICATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_IndicatorContinuousType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorContinuous[4];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 40 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[42];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 40 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[42];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[40];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_10
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_10;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_11
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_11;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_12
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_12;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_13
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_13;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_14
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_14;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_15
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_15;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_16
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_16;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_17
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_17;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_18
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_18;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_19
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_19;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_20
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_20;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_21
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_21;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_22
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_22;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_23
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_23;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_24
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_24;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_25
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_25;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_26
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_26;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_27
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_27;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_28
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_28;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_29
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_29;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_30
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_30;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_31
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_31;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_32
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_32;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_33
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_33;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_34
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_34;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_35
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_35;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_36
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_36;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_37
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_37;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_38
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_38;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_39
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_39;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_8
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_8;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_9
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_9;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer;
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

#define DEM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/************************************************************************************************************
 *  Dem_Cfg_FindGroupMaskFromUdsDtc()
 ***********************************************************************************************************/
/*! \brief         Map GroupOfDtc number to (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     DTC                           dtc number to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The DTC number doen't represent any
 *                                               configured DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The DTC number represents the OBD-II
 *                                               emission related group.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The DTC number represents Powertrain
 *                                               Group: engine and transmission.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The DTC number represents the Chassis
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The DTC number represents the Body
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The DTC number represents the Network
 *                                               Communication Group.
 *  \return        DEM_CFG_GROUPMASK_ALLDTCS     Function successful. The DTC number is the wildcard 'All
 *                                               Groups (all DTCs)'.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 ***********************************************************************************************************/ 
FUNC(uint8, DEM_CODE) Dem_Cfg_FindGroupMaskFromUdsDtc(uint32 groupDtcNumber) 
{ 
  uint8 mask;
  switch (groupDtcNumber)
  {
    case 0x00FFFFFFUL: mask = DEM_CFG_GROUPMASK_ALLDTCS; break;
    default: mask = DEM_CFG_GROUPMASK_NONE; break;
  }
  return mask; 
} 

 
/************************************************************************************************************
 *  Dem_Cfg_EventGroupMask()
 ***********************************************************************************************************/
/*! \brief         Map EventId to groupOfDTC's (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     eventId                       event ID to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The event has no DemUdsDTC number
 *                                               so it is not part of a DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The event is part of the OBD-II
 *                                               emission related DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The event is part of the Powertrain
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The event is part of the Chassis
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The event is part of the Body
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The event is part of the Network
 *                                               Communication DemGroupOfDTC.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 *  \note          Implementation specific: the configured 'DemGroupDTCs' value is the lowest value of each
 *                 group.
 *                 In other words, the configured 'DemGroupDTCs' split the range of DTC numbers
 *                 0x000000..0xFFFFFF into groups and the proxy of each group is the 'DemGroupDTCs' value
 *                 (that never is a DemUdsDTC number in addition).
 ***********************************************************************************************************/ 
FUNC(uint8, DEM_CODE) Dem_Cfg_EventGroupMask(uint16 eventId) 
{ 
  DEM_IGNORE_UNUSED_ARGUMENT(eventId)                                                               /* PRQA S 3112 */ /* MD_DEM_14.2 */
  return DEM_CFG_GROUPMASK_NONE; /* no GroupOfDtc configured */ 
}                                                                                                   /* PRQA S 6080 */ /* MD_MSR_STMIF */ 

 
#define DEM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [Gm (Vector), VARIANT-PRE-COMPILE]
**********************************************************************************************************************/

