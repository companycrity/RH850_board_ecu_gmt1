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
 *              File: Dem_Lcfg.h
 *   Generation Time: 2017-02-09 17:52:41
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


/* configuration, interrupt handling and callback headers use different names
 * for the multiple inclusion protection define, shown in this example. The
 * appropriate names for these files can be taken from this list:
 *
 * Dem_Cfg.h:     DEM_CFG_H
 * Dem_Lcfg.h:    DEM_LCFG_H
 * Dem_PBcfg.h:   DEM_PBFG_H
 */
#if !defined (DEM_LCFG_H)
# define DEM_LCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0777 EOF */ /* MD_DEM_5.1 */                                          /* External identifier does not differ in 32 significant characters */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCDataSwitches  Dem_Cfg Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_CFG_ADMINDATA                                             STD_ON
#define DEM_CFG_CALLBACKCLEAREVENTALLOWED                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackClearEventAllowed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKDTCSTATUSCHANGED                              STD_ON
#define DEM_CFG_CALLBACKGETFDC                                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackGetFdc' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_CFG_CALLBACKJ1939DTCSTATUSCHANGED                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackJ1939DtcStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_COMMITBUFFER                                          STD_ON
#define DEM_CFG_CONFIGURATIONID                                       STD_ON
#define DEM_CFG_CYCLEIDTABLE                                          STD_ON
#define DEM_CFG_ENDSONINITOFCYCLEIDTABLE                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_CycleIdTable.EndsOnInit' Reason: 'no DemOperationCycle/DemOperationCycleAutomaticEnd defined or all defined parameters are 'false'' */
#define DEM_CFG_OPCYCLETYPEOFCYCLEIDTABLE                             STD_ON
#define DEM_CFG_USEDFORAGINGOFCYCLEIDTABLE                            STD_ON
#define DEM_CFG_DATACOLLECTIONTABLE                                   STD_ON
#define DEM_CFG_COLLECTIONSIZEOFDATACOLLECTIONTABLE                   STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE  STD_ON
#define DEM_CFG_DIDOFFSETFASTOFDATACOLLECTIONTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTable.DidOffsetFast' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST == STD_OFF)' */
#define DEM_CFG_DIDOFFSETNORMALOFDATACOLLECTIONTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTable.DidOffsetNormal' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL == STD_OFF)' */
#define DEM_CFG_IDNUMBEROFDATACOLLECTIONTABLE                         STD_ON
#define DEM_CFG_MASKEDBITSOFDATACOLLECTIONTABLE                       STD_ON
#define DEM_CFG_STORAGEKINDOFDATACOLLECTIONTABLE                      STD_ON
#define DEM_CFG_UPDATEOFDATACOLLECTIONTABLE                           STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLIND                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTableEdr2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLIND                        STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLIND                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTableJ19392CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLIND                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTablePid2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATAELEMENTTABLE                                      STD_ON
#define DEM_CFG_ELEMENTKINDOFDATAELEMENTTABLE                         STD_ON
#define DEM_CFG_ELEMENTSIZEOFDATAELEMENTTABLE                         STD_ON
#define DEM_CFG_READDATAFUNCOFDATAELEMENTTABLE                        STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTIND                           STD_ON
#define DEM_CFG_DEBOUNCEDATA                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceData' Reason: 'DEM_CFG_SUPPORT_DEBOUNCE_NV==STD_OFF' */
#define DEM_CFG_DEBOUNCEHIRESTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceHiResTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DEBOUNCELORESTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceLoResTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DEBOUNCETABLE                                         STD_ON
#define DEM_CFG_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                     STD_ON
#define DEM_CFG_DECREMENTSTEPSIZEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE                 STD_ON
#define DEM_CFG_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE                  STD_ON
#define DEM_CFG_FAILTIMERCYCLESOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_FAILEDTHRESHOLDOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_INCREMENTSTEPSIZEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_JUMPDOWNOFDEBOUNCETABLE                               STD_ON
#define DEM_CFG_JUMPDOWNVALUEOFDEBOUNCETABLE                          STD_ON
#define DEM_CFG_JUMPUPOFDEBOUNCETABLE                                 STD_ON
#define DEM_CFG_JUMPUPVALUEOFDEBOUNCETABLE                            STD_ON
#define DEM_CFG_MASKEDBITSOFDEBOUNCETABLE                             STD_ON
#define DEM_CFG_PASSTIMERCYCLESOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_PASSEDTHRESHOLDOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_PRECONFIRMEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.PreconfirmedThreshold' Reason: 'DemDebounceCounterPreconfirmedThreshold is not required' */
#define DEM_CFG_STORAGEOFDEBOUNCETABLE                                STD_ON
#define DEM_CFG_STORAGETHRESHOLDOFDEBOUNCETABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.StorageThreshold' Reason: 'DemEventDebounceCounterStorageThreshold is not required. (due Parameter DemGeneral/DemTypeOfFreezeFrameRecordNumeration != DEM_FF_RECNUM_CONFIGURED)' */
#define DEM_CFG_STORAGETIMERCYCLESOFDEBOUNCETABLE                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.StorageTimerCycles' Reason: 'DemDebounceTimeStorageThreshold is not required.  (due Parameter DemGeneral/DemTypeOfFreezeFrameRecordNumeration != DEM_FF_RECNUM_CONFIGURED)' */
#define DEM_CFG_DTCTABLE                                              STD_ON
#define DEM_CFG_DTCSEVERITYOFDTCTABLE                                 STD_ON
#define DEM_CFG_FUNCTIONALUNITOFDTCTABLE                              STD_ON
#define DEM_CFG_IMMEDIATENVSTORAGEOFDTCTABLE                          STD_ON
#define DEM_CFG_J1939DTCOFDTCTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939Dtc' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDENDIDXOFDTCTABLE                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndEndIdx' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDSTARTIDXOFDTCTABLE                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndStartIdx' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDUSEDOFDTCTABLE                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndUsed' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_OBDDTCOFDTCTABLE                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.ObdDtc' Reason: '(DEM_CFG_SUPPORT_OBDII == STD_OFF)' */
#define DEM_CFG_UDSDTCOFDTCTABLE                                      STD_ON
#define DEM_CFG_ENABLECONDITIONTABLE                                  STD_ON
#define DEM_CFG_ENABLECONDITIONMASKOFENABLECONDITIONTABLE             STD_ON
#define DEM_CFG_EVENTAVAILABLEDATA                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventAvailableData' Reason: 'DEM_CFG_SUPPORT_EVENTAVAILABLE_NV==STD_OFF' */
#define DEM_CFG_EVENTAVAILABLEDEFAULT                                 STD_ON
#define DEM_CFG_EVENTAVAILABLEINVARIANT                               STD_ON
#define DEM_CFG_EVENTCYCLESTATUS                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventCycleStatus' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_PROCESS_CDTC_STOREDONLY==STD_OFF)' */
#define DEM_CFG_EVENTDATACHANGED                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventDataChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTDEBOUNCEVALUE                                    STD_ON
#define DEM_CFG_EVENTINTERNALSTATUS                                   STD_ON
#define DEM_CFG_EVENTMAXDEBOUNCEVALUES                                STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventMaxDebounceValues' Reason: '(Unconfigured DataElement type DEM_MAX_FDC_SINCE_LAST_CLEAR) && (Unconfigured DataElement type DEM_MAX_FDC_DURING_CURRENT_CYCLE)' */
#define DEM_CFG_EVENTQUEUE                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventQueue' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTQUEUESTATUS                                      STD_ON
#define DEM_CFG_EVENTSTATUSCHANGED                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTTABLE                                            STD_ON
#define DEM_CFG_AGINGALLOWEDOFEVENTTABLE                              STD_ON
#define DEM_CFG_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE                STD_ON
#define DEM_CFG_AGINGCYCLEIDOFEVENTTABLE                              STD_ON
#define DEM_CFG_CALLBACKCLEAREVENTALLOWEDIDXOFEVENTTABLE              STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackClearEventAllowedIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKCLEAREVENTALLOWEDUSEDOFEVENTTABLE             STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackClearEventAllowedUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKGETFDCIDXOFEVENTTABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackGetFdcIdx' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_CFG_DEBOUNCETABLEIDXOFEVENTTABLE                          STD_ON
#define DEM_CFG_DTCTABLEIDXOFEVENTTABLE                               STD_ON
#define DEM_CFG_ENABLECONDITIONTABLEIDXOFEVENTTABLE                   STD_ON
#define DEM_CFG_EVENTDATACHANGEDIDXOFEVENTTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventDataChangedIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTDESTINATIONOFEVENTTABLE                          STD_ON
#define DEM_CFG_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE         STD_ON
#define DEM_CFG_EVENTFAILURECYCLEIDOFEVENTTABLE                       STD_ON
#define DEM_CFG_EVENTKINDOFEVENTTABLE                                 STD_ON
#define DEM_CFG_EVENTLATCHTFOFEVENTTABLE                              STD_ON
#define DEM_CFG_EVENTPRIORITYOFEVENTTABLE                             STD_ON
#define DEM_CFG_EVENTSIGNIFICANCEOFEVENTTABLE                         STD_ON
#define DEM_CFG_EVENTSTATUSCHANGEDENDIDXOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTSTATUSCHANGEDSTARTIDXOFEVENTTABLE                STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTSTATUSCHANGEDUSEDOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EXTENDEDDATATABLEIDXOFEVENTTABLE                      STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE                 STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE               STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE                   STD_ON
#define DEM_CFG_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE                  STD_ON
#define DEM_CFG_HEALINGTARGETOFEVENTTABLE                             STD_ON
#define DEM_CFG_INITMONLISTFORFUNCIDXOFEVENTTABLE                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonListForFuncIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORFOREVENTIDXOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonitorForEventIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORFOREVENTUSEDOFEVENTTABLE                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonitorForEventUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_MASKEDBITSOFEVENTTABLE                                STD_ON
#define DEM_CFG_NORMALINDICATORTABLEENDIDXOFEVENTTABLE                STD_ON
#define DEM_CFG_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE              STD_ON
#define DEM_CFG_NORMALINDICATORTABLEUSEDOFEVENTTABLE                  STD_ON
#define DEM_CFG_OPERATIONCYCLEIDOFEVENTTABLE                          STD_ON
#define DEM_CFG_STORAGECONDITIONTABLEIDXOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.StorageConditionTableIdx' Reason: '(DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_EXTENDEDDATATABLE                                     STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_ExtendedDataTable.DataCollectionTableEdr2CollIndEndIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableEdr2CollIndUsedOfExtendedDataTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_ExtendedDataTable.DataCollectionTableEdr2CollIndStartIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableEdr2CollIndUsedOfExtendedDataTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_ExtendedDataTable.DataCollectionTableEdr2CollIndUsed' Reason: 'the optional indirection is deactivated because DataCollectionTableEdr2CollIndUsedOfExtendedDataTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_MAXRECORDSIZEOFEXTENDEDDATATABLE                      STD_ON
#define DEM_CFG_FILTERREPORTEDEVENTS                                  STD_ON
#define DEM_CFG_FINALMAGICNUMBER                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_FREEZEFRAMEDATA                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameData' Reason: '(DEM_CFG_SUPPORT_OBDII == STD_OFF)' */
#define DEM_CFG_FREEZEFRAMENUMTABLE                                   STD_ON
#define DEM_CFG_FFNUMBEROFFREEZEFRAMENUMTABLE                         STD_ON
#define DEM_CFG_FFTRIGGEROFFREEZEFRAMENUMTABLE                        STD_ON
#define DEM_CFG_FFUPDATEOFFREEZEFRAMENUMTABLE                         STD_ON
#define DEM_CFG_FREEZEFRAMETABLE                                      STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE  STD_ON
#define DEM_CFG_RECORDSIZEOFFREEZEFRAMETABLE                          STD_ON
#define DEM_CFG_RECORDSIZEUDSOFFREEZEFRAMETABLE                       STD_ON
#define DEM_CFG_GENERALJ1939TABLE                                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDENDIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndEndIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDSTARTIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndStartIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDUSEDOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndUsed' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_RECORDSIZEOFGENERALJ1939TABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.RecordSize' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_GENERALOBDINPUT                                       STD_ON
#define DEM_CFG_DATAELEMENTTABLEIDXOFGENERALOBDINPUT                  STD_ON
#define DEM_CFG_GENERALOBDTABLE                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralObdTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_GLOBALOBDREQUIREMENTS                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_GlobalObdRequirements' Reason: '((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))' */
#define DEM_CFG_GLOBALSEVERITYMASK                                    STD_ON
#define DEM_CFG_GLOBALSPECIALINDICATORSTATES                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_GlobalSpecialIndicatorStates' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INDICATORBLINKING                                     STD_ON
#define DEM_CFG_INDICATORCONTINUOUS                                   STD_ON
#define DEM_CFG_INDICATORFASTFLASH                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorFastFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_INDICATORSLOWFLASH                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorSlowFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_INITDATAHASHCODE                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_INITMONLISTFORFUNC                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORSFORFUNCENDIDXOFINITMONLISTFORFUNC         STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORSFORFUNCSTARTIDXOFINITMONLISTFORFUNC       STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORSFORFUNCUSEDOFINITMONLISTFORFUNC           STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORFOREVENT                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonitorForEvent' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORSFORFUNC                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonitorsForFunc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_J1939NODEID                                           STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeId' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDIND                                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeIdInd' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEINDICATOR                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeIndicator' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_MEMORYBLOCKID                                         STD_ON
#define DEM_CFG_MEMORYCOMMITNUMBER                                    STD_ON
#define DEM_CFG_MEMORYDATAPTR                                         STD_ON
#define DEM_CFG_MEMORYDATASIZE                                        STD_ON
#define DEM_CFG_MEMORYENTRYINIT                                       STD_ON
#define DEM_CFG_MEMORYSTATUS                                          STD_ON
#define DEM_CFG_MIRRORDATA                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_MirrorData' Reason: 'DEM_CFG_SUPPORT_MIRROR==STD_OFF' */
#define DEM_CFG_NORMALINDICATORTABLE                                  STD_ON
#define DEM_CFG_BEHAVIOROFNORMALINDICATORTABLE                        STD_ON
#define DEM_CFG_IDOFNORMALINDICATORTABLE                              STD_ON
#define DEM_CFG_OBDIUMPRDATA                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_ObdIumprData' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_SUPPORT_IUMPR==STD_OFF)' */
#define DEM_CFG_OBDIUMPRUPDATEPENDING                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_ObdIumprUpdatePending' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_SUPPORT_IUMPR==STD_OFF)' */
#define DEM_CFG_PERMANENTDATA                                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_PermanentData' Reason: '(DEM_CFG_SUPPORT_PERMANENT==STD_OFF) || ((DEM_CFG_SUPPORT_OBDII == STD_OFF))' */
#define DEM_CFG_PIDTABLE                                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDENDIDXOFPIDTABLE        STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDSTARTIDXOFPIDTABLE      STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDUSEDOFPIDTABLE          STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_PRESTORAGE                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_Prestorage' Reason: 'DEM_CFG_SUPPORT_PRESTORED_FF==STD_OFF' */
#define DEM_CFG_PRESTORAGEINDEX                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_PrestorageIndex' Reason: 'DEM_CFG_SUPPORT_PRESTORED_FF==STD_OFF' */
#define DEM_CFG_PRIMARYCHRONOLOGY                                     STD_ON
#define DEM_CFG_PRIMARYENTRY_0                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_1                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_10                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_11                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_12                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_13                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_14                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_15                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_16                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_17                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_18                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_19                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_2                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_20                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_21                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_22                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_23                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_24                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_25                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_26                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_27                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_28                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_29                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_3                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_30                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_31                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_32                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_33                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_34                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_35                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_36                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_37                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_38                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_39                                       STD_ON
#define DEM_CFG_PRIMARYENTRY_4                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_5                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_6                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_7                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_8                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_9                                        STD_ON
#define DEM_CFG_RATIOIDTABLE                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_RatioIdTable' Reason: 'no OBD support or no DemRatioId container configured' */
#define DEM_CFG_READOUTBUFFER                                         STD_ON
#define DEM_CFG_SECONDARYCHRONOLOGY                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_SecondaryChronology' Reason: 'DEM_CFG_SUPPORT_SECONDARY==STD_OFF' */
#define DEM_CFG_SIZEOFCALLBACKDTCSTATUSCHANGED                        STD_ON
#define DEM_CFG_SIZEOFDATAELEMENTTABLE                                STD_ON
#define DEM_CFG_SIZEOFEVENTDEBOUNCEVALUE                              STD_ON
#define DEM_CFG_SIZEOFEVENTINTERNALSTATUS                             STD_ON
#define DEM_CFG_SIZEOFEVENTQUEUESTATUS                                STD_ON
#define DEM_CFG_SIZEOFEVENTTABLE                                      STD_ON
#define DEM_CFG_SIZEOFFILTERREPORTEDEVENTS                            STD_ON
#define DEM_CFG_SIZEOFINDICATORBLINKING                               STD_ON
#define DEM_CFG_SIZEOFINDICATORCONTINUOUS                             STD_ON
#define DEM_CFG_SIZEOFMEMORYCOMMITNUMBER                              STD_ON
#define DEM_CFG_SIZEOFMEMORYSTATUS                                    STD_ON
#define DEM_CFG_SIZEOFPRIMARYCHRONOLOGY                               STD_ON
#define DEM_CFG_SPECIALINDICATORTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable' Reason: 'no special indicator is configured' */
#define DEM_CFG_BEHAVIOROFSPECIALINDICATORTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable.Behavior' Reason: 'no special indicator is configured' */
#define DEM_CFG_IDOFSPECIALINDICATORTABLE                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable.Id' Reason: 'no special indicator is configured' */
#define DEM_CFG_STATUSDATA                                            STD_ON
#define DEM_CFG_STORAGECONDITIONTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionTable' Reason: '(DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_TIMESERIESCHRONOLOGY                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_TimeSeriesChronology' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST==STD_OFF) || (DEM_CFG_SUPPORT_PRIMARY==STD_OFF)' */
#define DEM_CFG_TIMESERIESENTRYINIT                                   STD_ON
#define DEM_CFG_TIMESERIESREADOUTBUFFER                               STD_OFF  /**< Deactivateable: 'Dem_Cfg_TimeSeriesReadoutBuffer' Reason: 'DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST==STD_OFF' */
#define DEM_CFG_UDSDTCGROUP                                           STD_OFF  /**< Deactivateable: 'Dem_Cfg_UdsDtcGroup' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_PCCONFIG                                                  STD_ON
#define DEM_CFG_ADMINDATAOFPCCONFIG                                   STD_ON
#define DEM_CFG_CALLBACKDTCSTATUSCHANGEDOFPCCONFIG                    STD_ON
#define DEM_CFG_COMMITBUFFEROFPCCONFIG                                STD_ON
#define DEM_CFG_CONFIGURATIONIDOFPCCONFIG                             STD_ON
#define DEM_CFG_CYCLEIDTABLEOFPCCONFIG                                STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDOFPCCONFIG              STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDOFPCCONFIG                 STD_ON
#define DEM_CFG_DATAELEMENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_DEBOUNCETABLEOFPCCONFIG                               STD_ON
#define DEM_CFG_DTCTABLEOFPCCONFIG                                    STD_ON
#define DEM_CFG_ENABLECONDITIONTABLEOFPCCONFIG                        STD_ON
#define DEM_CFG_EVENTAVAILABLEDEFAULTOFPCCONFIG                       STD_ON
#define DEM_CFG_EVENTAVAILABLEINVARIANTOFPCCONFIG                     STD_ON
#define DEM_CFG_EVENTDEBOUNCEVALUEOFPCCONFIG                          STD_ON
#define DEM_CFG_EVENTINTERNALSTATUSOFPCCONFIG                         STD_ON
#define DEM_CFG_EVENTQUEUESTATUSOFPCCONFIG                            STD_ON
#define DEM_CFG_EVENTTABLEOFPCCONFIG                                  STD_ON
#define DEM_CFG_EXTENDEDDATATABLEOFPCCONFIG                           STD_ON
#define DEM_CFG_FILTERREPORTEDEVENTSOFPCCONFIG                        STD_ON
#define DEM_CFG_FINALMAGICNUMBEROFPCCONFIG                            STD_OFF  /**< Deactivateable: 'Dem_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_FREEZEFRAMENUMTABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_FREEZEFRAMETABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_GENERALOBDINPUTOFPCCONFIG                             STD_ON
#define DEM_CFG_GLOBALOBDREQUIREMENTSOFPCCONFIG                       STD_OFF  /**< Deactivateable: 'Dem_PCConfig.GlobalObdRequirements' Reason: '((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))' */
#define DEM_CFG_GLOBALSEVERITYMASKOFPCCONFIG                          STD_ON
#define DEM_CFG_INDICATORBLINKINGOFPCCONFIG                           STD_ON
#define DEM_CFG_INDICATORCONTINUOUSOFPCCONFIG                         STD_ON
#define DEM_CFG_INITDATAHASHCODEOFPCCONFIG                            STD_OFF  /**< Deactivateable: 'Dem_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_MEMORYBLOCKIDOFPCCONFIG                               STD_ON
#define DEM_CFG_MEMORYCOMMITNUMBEROFPCCONFIG                          STD_ON
#define DEM_CFG_MEMORYDATAPTROFPCCONFIG                               STD_ON
#define DEM_CFG_MEMORYDATASIZEOFPCCONFIG                              STD_ON
#define DEM_CFG_MEMORYENTRYINITOFPCCONFIG                             STD_ON
#define DEM_CFG_MEMORYSTATUSOFPCCONFIG                                STD_ON
#define DEM_CFG_NORMALINDICATORTABLEOFPCCONFIG                        STD_ON
#define DEM_CFG_PRIMARYCHRONOLOGYOFPCCONFIG                           STD_ON
#define DEM_CFG_PRIMARYENTRY_0OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_10OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_11OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_12OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_13OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_14OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_15OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_16OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_17OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_18OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_19OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_1OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_20OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_21OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_22OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_23OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_24OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_25OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_26OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_27OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_28OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_29OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_2OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_30OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_31OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_32OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_33OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_34OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_35OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_36OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_37OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_38OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_39OFPCCONFIG                             STD_ON
#define DEM_CFG_PRIMARYENTRY_3OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_4OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_5OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_6OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_7OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_8OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_9OFPCCONFIG                              STD_ON
#define DEM_CFG_READOUTBUFFEROFPCCONFIG                               STD_ON
#define DEM_CFG_SIZEOFCALLBACKDTCSTATUSCHANGEDOFPCCONFIG              STD_ON
#define DEM_CFG_SIZEOFDATAELEMENTTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_SIZEOFEVENTDEBOUNCEVALUEOFPCCONFIG                    STD_ON
#define DEM_CFG_SIZEOFEVENTINTERNALSTATUSOFPCCONFIG                   STD_ON
#define DEM_CFG_SIZEOFEVENTQUEUESTATUSOFPCCONFIG                      STD_ON
#define DEM_CFG_SIZEOFEVENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_SIZEOFFILTERREPORTEDEVENTSOFPCCONFIG                  STD_ON
#define DEM_CFG_SIZEOFINDICATORBLINKINGOFPCCONFIG                     STD_ON
#define DEM_CFG_SIZEOFINDICATORCONTINUOUSOFPCCONFIG                   STD_ON
#define DEM_CFG_SIZEOFMEMORYCOMMITNUMBEROFPCCONFIG                    STD_ON
#define DEM_CFG_SIZEOFMEMORYSTATUSOFPCCONFIG                          STD_ON
#define DEM_CFG_SIZEOFPRIMARYCHRONOLOGYOFPCCONFIG                     STD_ON
#define DEM_CFG_STATUSDATAOFPCCONFIG                                  STD_ON
#define DEM_CFG_TIMESERIESENTRYINITOFPCCONFIG                         STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMinNumericValueDefines  Dem_Cfg Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MIN_EVENTDEBOUNCEVALUE                                -32768
#define DEM_CFG_MIN_EVENTQUEUESTATUS                                  0U
#define DEM_CFG_MIN_FILTERREPORTEDEVENTS                              0U
#define DEM_CFG_MIN_MEMORYCOMMITNUMBER                                0U
#define DEM_CFG_MIN_MEMORYSTATUS                                      0U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMaxNumericValueDefines  Dem_Cfg Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MAX_EVENTDEBOUNCEVALUE                                32767
#define DEM_CFG_MAX_EVENTQUEUESTATUS                                  255U
#define DEM_CFG_MAX_FILTERREPORTEDEVENTS                              255U
#define DEM_CFG_MAX_MEMORYCOMMITNUMBER                                255U
#define DEM_CFG_MAX_MEMORYSTATUS                                      255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCNoReferenceDefines  Dem_Cfg No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE 255U
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE 255U
#define DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLIND                     255U
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTIND                        255U
#define DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE              255U
#define DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE            255U
#define DEM_CFG_NO_NORMALINDICATORTABLEENDIDXOFEVENTTABLE             255U
#define DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE           255U
#define DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE 255U
#define DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE 255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCEnumExistsDefines  Dem_Cfg Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_TIMER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_OFF
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_EXTERNAL_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_OFF
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE       STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE       STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_SIGNIFICANCE_OCCURRENCE_EVENTSIGNIFICANCEOFEVENTTABLE STD_OFF
#define DEM_CFG_EXISTS_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCEnumDefines  Dem_Cfg Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x00U
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x03U
#define DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE              0x00U
#define DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE              0x01U
#define DEM_CFG_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE 0x01U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMaskedBitDefines  Dem_Cfg Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE_MASK 0x02U
#define DEM_CFG_UPDATEOFDATACOLLECTIONTABLE_MASK                      0x01U
#define DEM_CFG_DEBOUNCECONTINUOUSOFDEBOUNCETABLE_MASK                0x10U
#define DEM_CFG_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE_MASK             0x08U
#define DEM_CFG_JUMPDOWNOFDEBOUNCETABLE_MASK                          0x04U
#define DEM_CFG_JUMPUPOFDEBOUNCETABLE_MASK                            0x02U
#define DEM_CFG_STORAGEOFDEBOUNCETABLE_MASK                           0x01U
#define DEM_CFG_AGINGALLOWEDOFEVENTTABLE_MASK                         0x08U
#define DEM_CFG_EVENTLATCHTFOFEVENTTABLE_MASK                         0x04U
#define DEM_CFG_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE_MASK              0x02U
#define DEM_CFG_NORMALINDICATORTABLEUSEDOFEVENTTABLE_MASK             0x01U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIsReducedToDefineDefines  Dem_Cfg Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define DEM_CFG_ISDEF_CALLBACKDTCSTATUSCHANGED                        STD_OFF
#define DEM_CFG_ISDEF_OPCYCLETYPEOFCYCLEIDTABLE                       STD_ON
#define DEM_CFG_ISDEF_USEDFORAGINGOFCYCLEIDTABLE                      STD_ON
#define DEM_CFG_ISDEF_COLLECTIONSIZEOFDATACOLLECTIONTABLE             STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_IDNUMBEROFDATACOLLECTIONTABLE                   STD_OFF
#define DEM_CFG_ISDEF_MASKEDBITSOFDATACOLLECTIONTABLE                 STD_OFF
#define DEM_CFG_ISDEF_STORAGEKINDOFDATACOLLECTIONTABLE                STD_OFF
#define DEM_CFG_ISDEF_UPDATEOFDATACOLLECTIONTABLE                     STD_ON
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLIND                  STD_OFF
#define DEM_CFG_ISDEF_ELEMENTKINDOFDATAELEMENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_ELEMENTSIZEOFDATAELEMENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_READDATAFUNCOFDATAELEMENTTABLE                  STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTIND                     STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCECONTINUOUSOFDEBOUNCETABLE               STD_ON
#define DEM_CFG_ISDEF_DECREMENTSTEPSIZEOFDEBOUNCETABLE                STD_OFF
#define DEM_CFG_ISDEF_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE           STD_OFF
#define DEM_CFG_ISDEF_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE            STD_ON
#define DEM_CFG_ISDEF_FAILTIMERCYCLESOFDEBOUNCETABLE                  STD_ON
#define DEM_CFG_ISDEF_FAILEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_INCREMENTSTEPSIZEOFDEBOUNCETABLE                STD_OFF
#define DEM_CFG_ISDEF_JUMPDOWNOFDEBOUNCETABLE                         STD_OFF
#define DEM_CFG_ISDEF_JUMPDOWNVALUEOFDEBOUNCETABLE                    STD_ON
#define DEM_CFG_ISDEF_JUMPUPOFDEBOUNCETABLE                           STD_OFF
#define DEM_CFG_ISDEF_JUMPUPVALUEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_ISDEF_MASKEDBITSOFDEBOUNCETABLE                       STD_OFF
#define DEM_CFG_ISDEF_PASSTIMERCYCLESOFDEBOUNCETABLE                  STD_ON
#define DEM_CFG_ISDEF_PASSEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_STORAGEOFDEBOUNCETABLE                          STD_ON
#define DEM_CFG_ISDEF_DTCSEVERITYOFDTCTABLE                           STD_ON
#define DEM_CFG_ISDEF_FUNCTIONALUNITOFDTCTABLE                        STD_ON
#define DEM_CFG_ISDEF_IMMEDIATENVSTORAGEOFDTCTABLE                    STD_ON
#define DEM_CFG_ISDEF_UDSDTCOFDTCTABLE                                STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONMASKOFENABLECONDITIONTABLE       STD_OFF
#define DEM_CFG_ISDEF_EVENTAVAILABLEDEFAULT                           STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEINVARIANT                         STD_ON
#define DEM_CFG_ISDEF_AGINGALLOWEDOFEVENTTABLE                        STD_OFF
#define DEM_CFG_ISDEF_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE          STD_OFF
#define DEM_CFG_ISDEF_AGINGCYCLEIDOFEVENTTABLE                        STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCETABLEIDXOFEVENTTABLE                    STD_ON
#define DEM_CFG_ISDEF_DTCTABLEIDXOFEVENTTABLE                         STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONTABLEIDXOFEVENTTABLE             STD_OFF
#define DEM_CFG_ISDEF_EVENTDESTINATIONOFEVENTTABLE                    STD_ON
#define DEM_CFG_ISDEF_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE   STD_ON
#define DEM_CFG_ISDEF_EVENTFAILURECYCLEIDOFEVENTTABLE                 STD_ON
#define DEM_CFG_ISDEF_EVENTKINDOFEVENTTABLE                           STD_OFF
#define DEM_CFG_ISDEF_EVENTLATCHTFOFEVENTTABLE                        STD_ON
#define DEM_CFG_ISDEF_EVENTPRIORITYOFEVENTTABLE                       STD_ON
#define DEM_CFG_ISDEF_EVENTSIGNIFICANCEOFEVENTTABLE                   STD_ON
#define DEM_CFG_ISDEF_EXTENDEDDATATABLEIDXOFEVENTTABLE                STD_ON
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE           STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE         STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE             STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE            STD_OFF
#define DEM_CFG_ISDEF_HEALINGTARGETOFEVENTTABLE                       STD_ON
#define DEM_CFG_ISDEF_MASKEDBITSOFEVENTTABLE                          STD_OFF
#define DEM_CFG_ISDEF_NORMALINDICATORTABLEENDIDXOFEVENTTABLE          STD_OFF
#define DEM_CFG_ISDEF_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE        STD_OFF
#define DEM_CFG_ISDEF_NORMALINDICATORTABLEUSEDOFEVENTTABLE            STD_OFF
#define DEM_CFG_ISDEF_OPERATIONCYCLEIDOFEVENTTABLE                    STD_ON
#define DEM_CFG_ISDEF_MAXRECORDSIZEOFEXTENDEDDATATABLE                STD_ON
#define DEM_CFG_ISDEF_FFNUMBEROFFREEZEFRAMENUMTABLE                   STD_ON
#define DEM_CFG_ISDEF_FFTRIGGEROFFREEZEFRAMENUMTABLE                  STD_ON
#define DEM_CFG_ISDEF_FFUPDATEOFFREEZEFRAMENUMTABLE                   STD_ON
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE STD_OFF
#define DEM_CFG_ISDEF_RECORDSIZEOFFREEZEFRAMETABLE                    STD_OFF
#define DEM_CFG_ISDEF_RECORDSIZEUDSOFFREEZEFRAMETABLE                 STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLEIDXOFGENERALOBDINPUT            STD_ON
#define DEM_CFG_ISDEF_MEMORYBLOCKID                                   STD_OFF
#define DEM_CFG_ISDEF_MEMORYDATAPTR                                   STD_OFF
#define DEM_CFG_ISDEF_MEMORYDATASIZE                                  STD_OFF
#define DEM_CFG_ISDEF_BEHAVIOROFNORMALINDICATORTABLE                  STD_ON
#define DEM_CFG_ISDEF_IDOFNORMALINDICATORTABLE                        STD_OFF
#define DEM_CFG_ISDEF_ADMINDATAOFPCCONFIG                             STD_ON
#define DEM_CFG_ISDEF_CALLBACKDTCSTATUSCHANGEDOFPCCONFIG              STD_ON
#define DEM_CFG_ISDEF_COMMITBUFFEROFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_CYCLEIDTABLEOFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDOFPCCONFIG        STD_ON
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDOFPCCONFIG           STD_ON
#define DEM_CFG_ISDEF_DATAELEMENTTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_DEBOUNCETABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_DTCTABLEOFPCCONFIG                              STD_ON
#define DEM_CFG_ISDEF_ENABLECONDITIONTABLEOFPCCONFIG                  STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEDEFAULTOFPCCONFIG                 STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEINVARIANTOFPCCONFIG               STD_ON
#define DEM_CFG_ISDEF_EVENTDEBOUNCEVALUEOFPCCONFIG                    STD_ON
#define DEM_CFG_ISDEF_EVENTINTERNALSTATUSOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_EVENTQUEUESTATUSOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_EVENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_ISDEF_EXTENDEDDATATABLEOFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_FILTERREPORTEDEVENTSOFPCCONFIG                  STD_ON
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLEOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_FREEZEFRAMETABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_GENERALOBDINPUTOFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_INDICATORBLINKINGOFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_INDICATORCONTINUOUSOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_MEMORYBLOCKIDOFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_MEMORYCOMMITNUMBEROFPCCONFIG                    STD_ON
#define DEM_CFG_ISDEF_MEMORYDATAPTROFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_MEMORYDATASIZEOFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_MEMORYENTRYINITOFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_MEMORYSTATUSOFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_NORMALINDICATORTABLEOFPCCONFIG                  STD_ON
#define DEM_CFG_ISDEF_PRIMARYCHRONOLOGYOFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_0OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_10OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_11OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_12OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_13OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_14OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_15OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_16OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_17OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_18OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_19OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_1OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_20OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_21OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_22OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_23OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_24OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_25OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_26OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_27OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_28OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_29OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_2OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_30OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_31OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_32OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_33OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_34OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_35OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_36OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_37OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_38OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_39OFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_3OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_4OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_5OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_6OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_7OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_8OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_9OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_READOUTBUFFEROFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_STATUSDATAOFPCCONFIG                            STD_ON
#define DEM_CFG_ISDEF_TIMESERIESENTRYINITOFPCCONFIG                   STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCEqualsAlwaysToDefines  Dem_Cfg Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define DEM_CFG_EQ2_CALLBACKDTCSTATUSCHANGED                          
#define DEM_CFG_EQ2_OPCYCLETYPEOFCYCLEIDTABLE                         DEM_CFG_OPCYC_OTHER
#define DEM_CFG_EQ2_USEDFORAGINGOFCYCLEIDTABLE                        TRUE
#define DEM_CFG_EQ2_COLLECTIONSIZEOFDATACOLLECTIONTABLE               
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_IDNUMBEROFDATACOLLECTIONTABLE                     
#define DEM_CFG_EQ2_MASKEDBITSOFDATACOLLECTIONTABLE                   
#define DEM_CFG_EQ2_STORAGEKINDOFDATACOLLECTIONTABLE                  
#define DEM_CFG_EQ2_UPDATEOFDATACOLLECTIONTABLE                       FALSE
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLIND                    
#define DEM_CFG_EQ2_ELEMENTKINDOFDATAELEMENTTABLE                     
#define DEM_CFG_EQ2_ELEMENTSIZEOFDATAELEMENTTABLE                     
#define DEM_CFG_EQ2_READDATAFUNCOFDATAELEMENTTABLE                    
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTIND                       
#define DEM_CFG_EQ2_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                 FALSE
#define DEM_CFG_EQ2_DECREMENTSTEPSIZEOFDEBOUNCETABLE                  
#define DEM_CFG_EQ2_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE             
#define DEM_CFG_EQ2_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE              FALSE
#define DEM_CFG_EQ2_FAILTIMERCYCLESOFDEBOUNCETABLE                    0
#define DEM_CFG_EQ2_FAILEDTHRESHOLDOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_INCREMENTSTEPSIZEOFDEBOUNCETABLE                  
#define DEM_CFG_EQ2_JUMPDOWNOFDEBOUNCETABLE                           
#define DEM_CFG_EQ2_JUMPDOWNVALUEOFDEBOUNCETABLE                      0
#define DEM_CFG_EQ2_JUMPUPOFDEBOUNCETABLE                             
#define DEM_CFG_EQ2_JUMPUPVALUEOFDEBOUNCETABLE                        0
#define DEM_CFG_EQ2_MASKEDBITSOFDEBOUNCETABLE                         
#define DEM_CFG_EQ2_PASSTIMERCYCLESOFDEBOUNCETABLE                    0
#define DEM_CFG_EQ2_PASSEDTHRESHOLDOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_STORAGEOFDEBOUNCETABLE                            FALSE
#define DEM_CFG_EQ2_DTCSEVERITYOFDTCTABLE                             0U
#define DEM_CFG_EQ2_FUNCTIONALUNITOFDTCTABLE                          255U
#define DEM_CFG_EQ2_IMMEDIATENVSTORAGEOFDTCTABLE                      FALSE
#define DEM_CFG_EQ2_UDSDTCOFDTCTABLE                                  
#define DEM_CFG_EQ2_ENABLECONDITIONMASKOFENABLECONDITIONTABLE         
#define DEM_CFG_EQ2_EVENTAVAILABLEDEFAULT                             TRUE
#define DEM_CFG_EQ2_EVENTAVAILABLEINVARIANT                           TRUE
#define DEM_CFG_EQ2_AGINGALLOWEDOFEVENTTABLE                          
#define DEM_CFG_EQ2_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE            
#define DEM_CFG_EQ2_AGINGCYCLEIDOFEVENTTABLE                          
#define DEM_CFG_EQ2_DEBOUNCETABLEIDXOFEVENTTABLE                      0U
#define DEM_CFG_EQ2_DTCTABLEIDXOFEVENTTABLE                           
#define DEM_CFG_EQ2_ENABLECONDITIONTABLEIDXOFEVENTTABLE               
#define DEM_CFG_EQ2_EVENTDESTINATIONOFEVENTTABLE                      DEM_CFG_MEMORYID_PRIMARY
#define DEM_CFG_EQ2_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE     0U
#define DEM_CFG_EQ2_EVENTFAILURECYCLEIDOFEVENTTABLE                   /*no EventFailureCycle*/ 1U
#define DEM_CFG_EQ2_EVENTKINDOFEVENTTABLE                             
#define DEM_CFG_EQ2_EVENTLATCHTFOFEVENTTABLE                          FALSE
#define DEM_CFG_EQ2_EVENTPRIORITYOFEVENTTABLE                         2U
#define DEM_CFG_EQ2_EVENTSIGNIFICANCEOFEVENTTABLE                     DEM_CFG_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE
#define DEM_CFG_EQ2_EXTENDEDDATATABLEIDXOFEVENTTABLE                  0U
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE             
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE           
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE               
#define DEM_CFG_EQ2_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE              
#define DEM_CFG_EQ2_HEALINGTARGETOFEVENTTABLE                         0U
#define DEM_CFG_EQ2_MASKEDBITSOFEVENTTABLE                            
#define DEM_CFG_EQ2_NORMALINDICATORTABLEENDIDXOFEVENTTABLE            
#define DEM_CFG_EQ2_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE          
#define DEM_CFG_EQ2_NORMALINDICATORTABLEUSEDOFEVENTTABLE              
#define DEM_CFG_EQ2_OPERATIONCYCLEIDOFEVENTTABLE                      DemConf_DemOperationCycle_PowerCycle
#define DEM_CFG_EQ2_MAXRECORDSIZEOFEXTENDEDDATATABLE                  0U
#define DEM_CFG_EQ2_FFNUMBEROFFREEZEFRAMENUMTABLE                     1U
#define DEM_CFG_EQ2_FFTRIGGEROFFREEZEFRAMENUMTABLE                    DEM_CFG_TRIGGER_TESTFAILED
#define DEM_CFG_EQ2_FFUPDATEOFFREEZEFRAMENUMTABLE                     FALSE
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE 
#define DEM_CFG_EQ2_RECORDSIZEOFFREEZEFRAMETABLE                      
#define DEM_CFG_EQ2_RECORDSIZEUDSOFFREEZEFRAMETABLE                   
#define DEM_CFG_EQ2_DATAELEMENTTABLEIDXOFGENERALOBDINPUT              0U
#define DEM_CFG_EQ2_MEMORYBLOCKID                                     
#define DEM_CFG_EQ2_MEMORYDATAPTR                                     
#define DEM_CFG_EQ2_MEMORYDATASIZE                                    
#define DEM_CFG_EQ2_BEHAVIOROFNORMALINDICATORTABLE                    DEM_INDICATOR_CONTINUOUS
#define DEM_CFG_EQ2_IDOFNORMALINDICATORTABLE                          
#define DEM_CFG_EQ2_ADMINDATAOFPCCONFIG                               Dem_Cfg_AdminData
#define DEM_CFG_EQ2_CALLBACKDTCSTATUSCHANGEDOFPCCONFIG                Dem_Cfg_CallbackDtcStatusChanged
#define DEM_CFG_EQ2_COMMITBUFFEROFPCCONFIG                            Dem_Cfg_CommitBuffer
#define DEM_CFG_EQ2_CYCLEIDTABLEOFPCCONFIG                            Dem_Cfg_CycleIdTable
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDOFPCCONFIG          Dem_Cfg_DataCollectionTableFfm2CollInd
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEOFPCCONFIG                     Dem_Cfg_DataCollectionTable
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDOFPCCONFIG             Dem_Cfg_DataElementTableCol2ElmtInd
#define DEM_CFG_EQ2_DATAELEMENTTABLEOFPCCONFIG                        Dem_Cfg_DataElementTable
#define DEM_CFG_EQ2_DEBOUNCETABLEOFPCCONFIG                           Dem_Cfg_DebounceTable
#define DEM_CFG_EQ2_DTCTABLEOFPCCONFIG                                Dem_Cfg_DtcTable
#define DEM_CFG_EQ2_ENABLECONDITIONTABLEOFPCCONFIG                    Dem_Cfg_EnableConditionTable
#define DEM_CFG_EQ2_EVENTAVAILABLEDEFAULTOFPCCONFIG                   Dem_Cfg_EventAvailableDefault
#define DEM_CFG_EQ2_EVENTAVAILABLEINVARIANTOFPCCONFIG                 Dem_Cfg_EventAvailableInVariant
#define DEM_CFG_EQ2_EVENTDEBOUNCEVALUEOFPCCONFIG                      Dem_Cfg_EventDebounceValue
#define DEM_CFG_EQ2_EVENTINTERNALSTATUSOFPCCONFIG                     Dem_Cfg_EventInternalStatus
#define DEM_CFG_EQ2_EVENTQUEUESTATUSOFPCCONFIG                        Dem_Cfg_EventQueueStatus
#define DEM_CFG_EQ2_EVENTTABLEOFPCCONFIG                              Dem_Cfg_EventTable
#define DEM_CFG_EQ2_EXTENDEDDATATABLEOFPCCONFIG                       Dem_Cfg_ExtendedDataTable
#define DEM_CFG_EQ2_FILTERREPORTEDEVENTSOFPCCONFIG                    Dem_Cfg_FilterReportedEvents
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLEOFPCCONFIG                     Dem_Cfg_FreezeFrameNumTable
#define DEM_CFG_EQ2_FREEZEFRAMETABLEOFPCCONFIG                        Dem_Cfg_FreezeFrameTable
#define DEM_CFG_EQ2_GENERALOBDINPUTOFPCCONFIG                         Dem_Cfg_GeneralObdInput
#define DEM_CFG_EQ2_INDICATORBLINKINGOFPCCONFIG                       Dem_Cfg_IndicatorBlinking
#define DEM_CFG_EQ2_INDICATORCONTINUOUSOFPCCONFIG                     Dem_Cfg_IndicatorContinuous
#define DEM_CFG_EQ2_MEMORYBLOCKIDOFPCCONFIG                           Dem_Cfg_MemoryBlockId
#define DEM_CFG_EQ2_MEMORYCOMMITNUMBEROFPCCONFIG                      Dem_Cfg_MemoryCommitNumber
#define DEM_CFG_EQ2_MEMORYDATAPTROFPCCONFIG                           Dem_Cfg_MemoryDataPtr
#define DEM_CFG_EQ2_MEMORYDATASIZEOFPCCONFIG                          Dem_Cfg_MemoryDataSize
#define DEM_CFG_EQ2_MEMORYENTRYINITOFPCCONFIG                         Dem_Cfg_MemoryEntryInit
#define DEM_CFG_EQ2_MEMORYSTATUSOFPCCONFIG                            Dem_Cfg_MemoryStatus
#define DEM_CFG_EQ2_NORMALINDICATORTABLEOFPCCONFIG                    Dem_Cfg_NormalIndicatorTable
#define DEM_CFG_EQ2_PRIMARYCHRONOLOGYOFPCCONFIG                       Dem_Cfg_PrimaryChronology
#define DEM_CFG_EQ2_PRIMARYENTRY_0OFPCCONFIG                          Dem_Cfg_PrimaryEntry_0
#define DEM_CFG_EQ2_PRIMARYENTRY_10OFPCCONFIG                         Dem_Cfg_PrimaryEntry_10
#define DEM_CFG_EQ2_PRIMARYENTRY_11OFPCCONFIG                         Dem_Cfg_PrimaryEntry_11
#define DEM_CFG_EQ2_PRIMARYENTRY_12OFPCCONFIG                         Dem_Cfg_PrimaryEntry_12
#define DEM_CFG_EQ2_PRIMARYENTRY_13OFPCCONFIG                         Dem_Cfg_PrimaryEntry_13
#define DEM_CFG_EQ2_PRIMARYENTRY_14OFPCCONFIG                         Dem_Cfg_PrimaryEntry_14
#define DEM_CFG_EQ2_PRIMARYENTRY_15OFPCCONFIG                         Dem_Cfg_PrimaryEntry_15
#define DEM_CFG_EQ2_PRIMARYENTRY_16OFPCCONFIG                         Dem_Cfg_PrimaryEntry_16
#define DEM_CFG_EQ2_PRIMARYENTRY_17OFPCCONFIG                         Dem_Cfg_PrimaryEntry_17
#define DEM_CFG_EQ2_PRIMARYENTRY_18OFPCCONFIG                         Dem_Cfg_PrimaryEntry_18
#define DEM_CFG_EQ2_PRIMARYENTRY_19OFPCCONFIG                         Dem_Cfg_PrimaryEntry_19
#define DEM_CFG_EQ2_PRIMARYENTRY_1OFPCCONFIG                          Dem_Cfg_PrimaryEntry_1
#define DEM_CFG_EQ2_PRIMARYENTRY_20OFPCCONFIG                         Dem_Cfg_PrimaryEntry_20
#define DEM_CFG_EQ2_PRIMARYENTRY_21OFPCCONFIG                         Dem_Cfg_PrimaryEntry_21
#define DEM_CFG_EQ2_PRIMARYENTRY_22OFPCCONFIG                         Dem_Cfg_PrimaryEntry_22
#define DEM_CFG_EQ2_PRIMARYENTRY_23OFPCCONFIG                         Dem_Cfg_PrimaryEntry_23
#define DEM_CFG_EQ2_PRIMARYENTRY_24OFPCCONFIG                         Dem_Cfg_PrimaryEntry_24
#define DEM_CFG_EQ2_PRIMARYENTRY_25OFPCCONFIG                         Dem_Cfg_PrimaryEntry_25
#define DEM_CFG_EQ2_PRIMARYENTRY_26OFPCCONFIG                         Dem_Cfg_PrimaryEntry_26
#define DEM_CFG_EQ2_PRIMARYENTRY_27OFPCCONFIG                         Dem_Cfg_PrimaryEntry_27
#define DEM_CFG_EQ2_PRIMARYENTRY_28OFPCCONFIG                         Dem_Cfg_PrimaryEntry_28
#define DEM_CFG_EQ2_PRIMARYENTRY_29OFPCCONFIG                         Dem_Cfg_PrimaryEntry_29
#define DEM_CFG_EQ2_PRIMARYENTRY_2OFPCCONFIG                          Dem_Cfg_PrimaryEntry_2
#define DEM_CFG_EQ2_PRIMARYENTRY_30OFPCCONFIG                         Dem_Cfg_PrimaryEntry_30
#define DEM_CFG_EQ2_PRIMARYENTRY_31OFPCCONFIG                         Dem_Cfg_PrimaryEntry_31
#define DEM_CFG_EQ2_PRIMARYENTRY_32OFPCCONFIG                         Dem_Cfg_PrimaryEntry_32
#define DEM_CFG_EQ2_PRIMARYENTRY_33OFPCCONFIG                         Dem_Cfg_PrimaryEntry_33
#define DEM_CFG_EQ2_PRIMARYENTRY_34OFPCCONFIG                         Dem_Cfg_PrimaryEntry_34
#define DEM_CFG_EQ2_PRIMARYENTRY_35OFPCCONFIG                         Dem_Cfg_PrimaryEntry_35
#define DEM_CFG_EQ2_PRIMARYENTRY_36OFPCCONFIG                         Dem_Cfg_PrimaryEntry_36
#define DEM_CFG_EQ2_PRIMARYENTRY_37OFPCCONFIG                         Dem_Cfg_PrimaryEntry_37
#define DEM_CFG_EQ2_PRIMARYENTRY_38OFPCCONFIG                         Dem_Cfg_PrimaryEntry_38
#define DEM_CFG_EQ2_PRIMARYENTRY_39OFPCCONFIG                         Dem_Cfg_PrimaryEntry_39
#define DEM_CFG_EQ2_PRIMARYENTRY_3OFPCCONFIG                          Dem_Cfg_PrimaryEntry_3
#define DEM_CFG_EQ2_PRIMARYENTRY_4OFPCCONFIG                          Dem_Cfg_PrimaryEntry_4
#define DEM_CFG_EQ2_PRIMARYENTRY_5OFPCCONFIG                          Dem_Cfg_PrimaryEntry_5
#define DEM_CFG_EQ2_PRIMARYENTRY_6OFPCCONFIG                          Dem_Cfg_PrimaryEntry_6
#define DEM_CFG_EQ2_PRIMARYENTRY_7OFPCCONFIG                          Dem_Cfg_PrimaryEntry_7
#define DEM_CFG_EQ2_PRIMARYENTRY_8OFPCCONFIG                          Dem_Cfg_PrimaryEntry_8
#define DEM_CFG_EQ2_PRIMARYENTRY_9OFPCCONFIG                          Dem_Cfg_PrimaryEntry_9
#define DEM_CFG_EQ2_READOUTBUFFEROFPCCONFIG                           Dem_Cfg_ReadoutBuffer
#define DEM_CFG_EQ2_STATUSDATAOFPCCONFIG                              Dem_Cfg_StatusData
#define DEM_CFG_EQ2_TIMESERIESENTRYINITOFPCCONFIG                     Dem_Cfg_TimeSeriesEntryInit
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCSymbolicInitializationPointers  Dem_Cfg Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Dem_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Dem' */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCInitializationSymbols  Dem_Cfg Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Dem_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Dem */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGeneral  Dem_Cfg General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define DEM_CFG_CHECK_INIT_POINTER                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define DEM_CFG_FINAL_MAGIC_NUMBER                                    0x361EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Dem */
#define DEM_CFG_INDIVIDUAL_POSTBUILD                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Dem' is not configured to be postbuild capable. */
#define DEM_CFG_INIT_DATA                                             DEM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define DEM_CFG_INIT_DATA_HASH_CODE                                   -1434282830L  /**< the precompile constant to validate the initialization structure at initialization time of Dem with a hashcode. The seed value is '0x361EU' */
#define DEM_CFG_USE_ECUM_BSW_ERROR_HOOK                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define DEM_CFG_USE_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer Dem shall be used. */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgLTDataSwitches  Dem_Cfg Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Dem_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/*********************************************************************************************************************/

 /*  Indicator IDs [symbolic name value]  */ 
#define DemConf_DemIndicator_SteerAssiLimdLvl3                        0U 
#define DemConf_DemIndicator_PwrSteerIndcr                            1U 
#define DemConf_DemIndicator_SteerAssiLimd                            2U 
#define DemConf_DemIndicator_SteerAssiLimdLvl2                        3U 

 /*  Invalid Indicator IDs  */ 
#define DEM_CFG_INDICATOR_INVALID                                     4U           /* Lowest, unused IndicatorID */ 
#define DEM_CFG_SPECIAL_INDICATOR_NONE                                255U         /* Always different from DEM_CFG_INDICATOR_INVALID */ 

 /*  Indicator global definitions  */ 
#define DEM_CFG_GLOBAL_INDICATOR_COUNT                                4U           /* Total number of configured Indicators */ 


 /*  Aging- and OperationCycle IDs [symbolic name value]  */ 
#define DemConf_DemOperationCycle_PowerCycle                          0U 

 /*  Global, cycle related values  */ 
#define DEM_CFG_GLOBAL_CYCLE_COUNT                                    1U                                                                /* Total number of configured (operation and aging) cycles. */ 
#define DEM_CFG_GLOBAL_OBD_DRIVING_CYCLE_ID                           /* No DemOperationCycleType 'DEM_OPCYC_OBD_DCY' configured. */    /* Cycle ID of the DemOperationCycleType 'DEM_OPCYC_OBD_DCY'. */ 
#define DEM_CFG_GLOBAL_WARMUP_CYCLE_ID                                /* No DemOperationCycleType 'DEM_OPCYC_WARMUP' configured. */     /* Cycle ID of the DemOperationCycleType 'DEM_OPCYC_WARMUP'. */ 



 /*  Support for optimized routines of Vector DCM - FreezeFrame records  */ 
#define DEM_DCM_NUM_FRZFRAME_RECID                                    1U 
#define DEM_DCM_LST_FRZFRAME_RECID                                    0x01U 

 /*  Event IDs [symbolic name value] - sorted by name.
     See Dem_Cfg_EventTable[] for this list sorted by Ids.  */ 
#define DemConf_DemEventParameter_CtrlrComChassisExpBusOff                  3U 
#define DemConf_DemEventParameter_CtrlrComHiSpdBusOff                       4U 
#define DemConf_DemEventParameter_DIO_E_REG_WRITE_VERIFY                    58U 
#define DemConf_DemEventParameter_DevPwrVltgOverMaxThd                      5U 
#define DemConf_DemEventParameter_DevPwrVltgUnderMinThd                     32U 
#define DemConf_DemEventParameter_DevPwrVltgUnderThd                        6U 
#define DemConf_DemEventParameter_EcuHwPrfmc                                7U 
#define DemConf_DemEventParameter_EcuSwPrfmcCalDataSetNotProgd              8U 
#define DemConf_DemEventParameter_ElecSteerMotCirc                          9U 
#define DemConf_DemEventParameter_ElecSteerMotPosSnsrCir                    10U 
#define DemConf_DemEventParameter_FLS_E_COMPARE_FAILED                      33U 
#define DemConf_DemEventParameter_FLS_E_ERASE_FAILED                        34U 
#define DemConf_DemEventParameter_FLS_E_READ_FAILED                         35U 
#define DemConf_DemEventParameter_FLS_E_READ_FAILED_DED                     36U 
#define DemConf_DemEventParameter_FLS_E_WRITE_FAILED                        37U 
#define DemConf_DemEventParameter_InvldDataRxdFromBodtCtrlMod               11U 
#define DemConf_DemEventParameter_InvldDataRxdFromElecBrkCtrlMod            12U 
#define DemConf_DemEventParameter_InvldDataRxdFromElecBrkCtrlModChassisExp  13U 
#define DemConf_DemEventParameter_InvldDataRxdFromEngCtrlMod                14U 
#define DemConf_DemEventParameter_InvldDataRxdFromFrntCameraMod             15U 
#define DemConf_DemEventParameter_InvldDataRxdFromParkAssiCtrlMod           16U 
#define DemConf_DemEventParameter_InvldDataRxdFromTrsmCtrlMod               17U 
#define DemConf_DemEventParameter_LostComWithBodyCtrlMod                    18U 
#define DemConf_DemEventParameter_LostComWithElecBrkCtrlMod                 19U 
#define DemConf_DemEventParameter_LostComWithElecBrkCtrlModChassisExp       20U 
#define DemConf_DemEventParameter_LostComWithEngCtrlMod                     21U 
#define DemConf_DemEventParameter_LostComWithFrntCameraCtrlMod              22U 
#define DemConf_DemEventParameter_LostComWithParkAssiCtrlMod                23U 
#define DemConf_DemEventParameter_LostComWithTrsmCtrlMod                    24U 
#define DemConf_DemEventParameter_MCU_E_CLM_SELFDIAG_FAILURE                38U 
#define DemConf_DemEventParameter_MCU_E_CLOCK_FAILURE                       39U 
#define DemConf_DemEventParameter_MCU_E_CVM_SELFDIAG_FAILURE                40U 
#define DemConf_DemEventParameter_MCU_E_ECM_SELFDIAG_FAILURE                56U 
#define DemConf_DemEventParameter_MCU_E_INT_INCONSISTENT                    59U 
#define DemConf_DemEventParameter_MCU_E_LOCKSTEP_SELFDIAG_FAILURE           57U 
#define DemConf_DemEventParameter_MCU_E_REG_WRITE_VERIFY                    60U 
#define DemConf_DemEventParameter_MCU_E_WRITE_TIMEOUT_FAILURE               41U 
#define DemConf_DemEventParameter_NVM_E_INTEGRITY_FAILED                    42U 
#define DemConf_DemEventParameter_NVM_E_LOSS_OF_REDUNDANCY                  43U 
#define DemConf_DemEventParameter_NVM_E_QUEUE_OVERFLOW                      44U 
#define DemConf_DemEventParameter_NVM_E_REQ_FAILED                          45U 
#define DemConf_DemEventParameter_NVM_E_VERIFY_FAILED                       46U 
#define DemConf_DemEventParameter_NVM_E_WRITE_PROTECTED                     47U 
#define DemConf_DemEventParameter_NVM_E_WRONG_BLOCK_ID                      48U 
#define DemConf_DemEventParameter_PORT_E_REG_WRITE_VERIFY                   61U 
#define DemConf_DemEventParameter_PORT_E_WRITE_TIMEOUT_FAILURE              49U 
#define DemConf_DemEventParameter_SPI_E_DATA_TX_TIMEOUT_FAILURE             50U 
#define DemConf_DemEventParameter_SPI_E_HARDWARE_ERROR                      51U 
#define DemConf_DemEventParameter_SteerFailrMtgtnLvl1LimpHomeMod            25U 
#define DemConf_DemEventParameter_SteerFailrMtgtnLvl2LimpOver               26U 
#define DemConf_DemEventParameter_SteerFailrMtgtnLvl3FadeOut                27U 
#define DemConf_DemEventParameter_SteerWheelAgSnsrCalNorPrfmd               1U 
#define DemConf_DemEventParameter_SteerWheelAgSnsrHwFlt                     28U 
#define DemConf_DemEventParameter_SteerWheelAgSnsrPlausly                   29U 
#define DemConf_DemEventParameter_SteerWhlTqInpSnsr                         30U 
#define DemConf_DemEventParameter_SteerWhlTqInpSnsrCalNoLrnd                31U 
#define DemConf_DemEventParameter_SysThermErrTHi                            2U 
#define DemConf_DemEventParameter_WDG_59_DRIVERA_E_INT_INCONSISTENT         62U 
#define DemConf_DemEventParameter_WDG_E_DISABLE_REJECTED                    52U 
#define DemConf_DemEventParameter_WDG_E_MODE_FAILED                         53U 
#define DemConf_DemEventParameter_WDG_E_READBACK_FAILURE                    54U 
#define DemConf_DemEventParameter_WDG_E_TRIGGER_TIMEOUT                     55U 
#define DemConf_DemEventParameter_Wdg_E_REG_WRITE_VERIFY                    63U 




 /*  Existance of iterator interfaces  */ 
#define DEM_CFG_HAVEITER_COMBINEDGROUP                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_TYPE1_COMBINATION==STD_OFF */ 
#define DEM_CFG_HAVEITER_DEBOUNCEHIRES                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_DEBOUNCE_TIME_HR==STD_OFF */ 
#define DEM_CFG_HAVEITER_DEBOUNCELORES                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_DEBOUNCE_TIME_LR==STD_OFF */ 
#define DEM_CFG_HAVEITER_DIDDATA                                      STD_ON 
#define DEM_CFG_HAVEITER_EVENTCBKINITFUNC                             STD_OFF      /* Deactivated due DEM_CFG_INITMONLISTFORFUNC==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTCBKSTATUS                               STD_OFF      /* Deactivated due DEM_CFG_EVENTSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTDID                                     STD_ON 
#define DEM_CFG_HAVEITER_EVENTEREC                                    STD_ON 
#define DEM_CFG_HAVEITER_EVENTINDICATOR                               STD_ON 
#define DEM_CFG_HAVEITER_EVENTJ1939NODE                               STD_OFF      /* Deactivated due (DEM_CFG_HAS_J1939_NODE == STD_OFF) */ 
#define DEM_CFG_HAVEITER_EVENTOBDDID                                  STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_WWHOBD==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTSPN                                     STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_J1939==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTSREC                                    STD_ON 
#define DEM_CFG_HAVEITER_GLOBALCBKDTC                                 STD_ON 
#define DEM_CFG_HAVEITER_GLOBALCBKJ1939DTC                            STD_OFF      /* Deactivated due DEM_CFG_CALLBACKJ1939DTCSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_GLOBALPID                                    STD_ON 
#define DEM_CFG_HAVEITER_OBDFIMFID                                    STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_IUMPR==STD_OFF */ 
#define DEM_CFG_HAVEITER_OBDRATIOID                                   STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_IUMPR==STD_OFF */ 
#define DEM_CFG_HAVEITER_TIMESERIESDIDFAST                            STD_OFF      /* Deactivated due (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST || DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST) == STD_OFF */ 
#define DEM_CFG_HAVEITER_TIMESERIESDIDNORMAL                          STD_OFF      /* Deactivated due (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST || DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST) == STD_OFF */ 

 /*  Event global definitions  */ 
#define DEM_CFG_GLOBAL_DTC_COUNT                                      33U 
#define DEM_CFG_GLOBAL_MIRROR_FIRST                                   0U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_MIRROR_LAST                                    0U           /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PERMANENT_FIRST                                0U           /* Lowest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PERMANENT_LAST                                 0U           /* Highest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PRIMARY_FIRST                                  1U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PRIMARY_LAST                                   63U          /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_SECONDARY_FIRST                                0U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_SECONDARY_LAST                                 0U           /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 


 /*  StorageCondition global definitions  */ 
#define DEM_CFG_GLOBAL_STORAGE_COND_COUNT                             0U              /* (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF) */ 
#define DEM_CFG_GLOBAL_STORAGE_COND_INIT                              0x00000000UL    /* (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF) */ 

 /*  PID global definitions  */ 
#define DEM_CFG_GLOBAL_OBD_IIFFRAW_SIZE                               0U           /* Pure data size of OBD-II record. */ 
#define DEM_CFG_GLOBAL_OBD_IIFFUDS_SIZE                               2U           /* Data size of OBD-II record incl PID numbers (each 2B) plus RecordNumber (1B) plus RecordCount (1B). */ 

 /*  Defines for supporting A2L  */ 
#define DEM_A2L_MAX_NUMBER_PRIMEM_SNAPSHOTS                           1UL 
#define DEM_A2L_MAX_SIZE_PRIMEM_SNAPSHOTS                             34UL 
#define DEM_A2L_NUMBER_OF_EVENTS                                      64UL         /* incl. event #0 */ 
#define DEM_A2L_NUMBER_OF_MIL_GROUPS                                  0UL          /* number of DemMILGroup containers + 1 */ 
#define DEM_A2L_MAX_SIZE_STDENV_RECORD                                0UL          /* largest, configured StdEnvData */ 

 /*  NvRamBlock size configured in the NvM module  */ 
#define DEM_CFG_ADMIN_DATABLOCK_SIZE                                  8U           /* Size of the NvM block (NvM/NvMBlockDescriptor/NvMNvBlockLength) that's referenced via DemNvRamBlockId/DemNvRamBlockIdRef and has DemNvRamBlockId/DemNvRamBlockIdType=DEM_NVBLOCK_ADMIN */ 
#define DEM_CFG_STATUS_DATABLOCK_SIZE                                 72U          /* Size of the NvM block (NvM/NvMBlockDescriptor/NvMNvBlockLength) that's referenced via DemNvRamBlockId/DemNvRamBlockIdRef and has DemNvRamBlockId/DemNvRamBlockIdType=DEM_NVBLOCK_STATUS */ 
#define DEM_CFG_PRIMARY_DATABLOCK_SIZE                                44U          /* Size of the NvM block (NvM/NvMBlockDescriptor/NvMNvBlockLength) that's referenced via DemNvRamBlockId/DemNvRamBlockIdRef and has DemNvRamBlockId/DemNvRamBlockIdType=DEM_NVBLOCK_PRIMARY */ 




 /*  NV block global definitions  */ 
#define DEM_CFG_GLOBAL_NV_BLOCK_COUNT                                 42U          /* Number of NV blocks. */ 
#define DEM_CFG_MAX_J1939_EXP_FF_SIZE                                 0U           /* Data size of the largest configured J1939 FreezeFrame record. */ 
#define DEM_CFG_MAX_J1939_FF_SIZE                                     0U           /* Data size of the largest configured J1939 FreezeFrame record. */ 
#define DEM_CFG_MAX_NUM_EXT_RECORDS                                   1U           /* Largest count of EDR records per event to be stored in ExtendedData[DEM_CFG_MAX_NUM_EXT_RECORDS][DEM_CFG_MAX_SIZE_EXT_RECORD] - ignore records with pure ROM data and/or data having own_variable. '1' if there are 0 records. */ 
#define DEM_CFG_MAX_NUM_SNAPSHOTS                                     1U           /* Largest count of FreezeFrame records per event to be stored in SnapshotData[DEM_CFG_MAX_NUM_SNAPSHOTS][DEM_CFG_MAX_SIZE_SNAPSHOT]. '1' if there are 0 records. */ 
#define DEM_CFG_MAX_SIZE_EXT_RECORD                                   1U           /* Data size of the largest EDR record to be stored in ExtendedData[DEM_CFG_MAX_NUM_EXT_RECORDS][DEM_CFG_MAX_SIZE_EXT_RECORD] or '1' if size is 0. */ 
#define DEM_CFG_MAX_SIZE_OBDFREEZEFRAME                               0U           /* Data size of largest configured FreezeFrame 0 (OBD II) record. */ 
#define DEM_CFG_MAX_SIZE_SNAPSHOT                                     34U          /* Data size of the largest FreezeFrame record to be stored in SnapshotData[DEM_CFG_MAX_NUM_SNAPSHOTS][DEM_CFG_MAX_SIZE_SNAPSHOT] or '1' if size is 0. */ 
#define DEM_CFG_MEMORY_ADMIN_INDEX                                    0U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. */ 
#define DEM_CFG_MEMORY_PRIMARY_INDEX                                  2U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. Buffer count: Dem_Cfg_GlobalPrimarySize() = 40 */ 
#define DEM_CFG_MEMORY_STATUS_INDEX                                   1U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. */ 



 /*  Dem general defines  */ 
#define DEM_CFG_BSW_ERROR_BUFFER_SIZE                                 0U                                /* DemBswErrorBufferSize */ 
#define DEM_CFG_GLOBALCBKCONTROLDTCSETTING_FUNC                       NULL_PTR                          /* DEM_CFG_NOTIFY_CONTROL_DTC_SETTING==STD_OFF */ 
#define DEM_CFG_GLOBALCBKDATA_FUNC                                    NULL_PTR                          /* No ClientServerInterface GeneralCallbackEventDataChanged, DEM_CFG_NOTIFY_GENERAL_DATA==STD_OFF */ 
#define DEM_CFG_GLOBALCBKSTATUS_FUNC                                  NULL_PTR                          /* No ClientServerInterface GeneralCallbackEventStatusChanged, DEM_CFG_NOTIFY_GENERAL_STATUS==STD_OFF */ 
#define DEM_CFG_GLOBAL_CLEAR_DTC_RUNTIME_LIMIT                        64U                               /* not configured, here substituted by number of events (incl. event #0) */ 
#define DEM_CFG_GLOBAL_DEBOUNCE_STORAGE_EVENT_COUNT                   0U                                /* Number of events with .../DemEventClass/DemDebounceAlgorithClass/DemDebounceCounterBased/DemDebounceCounterStorage == TRUE */ 
#define DEM_CFG_GLOBAL_DTC_FORMAT                                     DEM_DTC_TRANSLATION_ISO14229_1    /* Dem_DTCTranslationFormatType */ 
#define DEM_CFG_GLOBAL_FREEZEFRAME_SIZE                               0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryOBDFreezeFrame */ 
#define DEM_CFG_GLOBAL_MIRROR_SIZE                                    0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryMirror */ 
#define DEM_CFG_GLOBAL_NV_STORAGE_LIMIT                               0U                                /* DemGeneral/DemImmediateNvStorageLimit, 0: no limit configured */ 
#define DEM_CFG_GLOBAL_PERMANENT_SIZE                                 0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryPermanent */ 
#define DEM_CFG_GLOBAL_PRESTORED_FF_SIZE                              0U                                /* /Dem/DemGeneral/DemMaxNumberPrestoredFF, see Dem_Cfg_GlobalPrestorageSize() */ 
#define DEM_CFG_GLOBAL_PRIMARY_SIZE                                   40U                               /* /Dem/DemGeneral/DemMaxNumberEventEntryPrimary */ 
#define DEM_CFG_GLOBAL_RESTART_CYCLE_ID                               0U                                /* using DemOperationCycle: 'PowerCycle' */ 
#define DEM_CFG_GLOBAL_SECONDARY_SIZE                                 0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntrySecondary */ 
#define DEM_CFG_GLOBAL_STATUS_MASK                                    0xDBU                             /* /Dem/DemGeneral/DemDtcStatusAvailabilityMask */ 
#define DEM_CFG_GLOBAL_TASK_MS                                        10U                               /* DemGeneral/DemTaskTime in [ms]. See also macro DEM_CFG_TASK_TIME for exact float value */ 
#define DEM_CFG_GLOBAL_TIMESERIES_SNAPSHOTS_SIZE                      0U                                /* /Dem/DemGeneral/DemMaxNumberTimeSeriesSnapshots */ 
#define DEM_CFG_J1939_NODE_INVALID                                    0U                                /* Invalid NmNode index (Dem internal) */ 
#define DEM_CFG_OEMCBKGETCURRENTODOMETER_FUNC                         NULL_PTR                          /* unused */ 
#define DEM_CFG_OEMCBKGETEXTERNALTESTERSTATUS_FUNC                    NULL_PTR                          /* unused */ 
#define DEM_CFG_RATIOINDEX_INVALID                                    255U                              /* Internal use: no OBD RatioId configured */ 
#define DEM_CFG_SIZEOF_MAX_DATA_VALUE_TYPE                            4U                                /* sizeof(Dem_MaxDataValueType) - typedef is generated by the RTE into Rte_Type.h */ 
#define DEM_CFG_TASK_TIME                                             10.0                              /* DemGeneral/DemTaskTime in [ms]. See also macro DEM_CFG_GLOBAL_TASK_MS for integer value. */ 
#define DEM_G_GLOBAL_PRESTORED_EVENT_COUNT                            0U                                /* Number of events with DemEventClass/DemFFPrestorageSupported == TRUE, see Dem_Cfg_GlobalPrestorageEventCount() */ 
#define DEM_G_MAX_NUMBER_J1939_NODES                                  0U                                /* Number of different J1939Nm node targets (=J1939NmNode) referenced via /Dem/DemConfigSet/DemJ1939NodeAddress/DemJ1939NmNodeRef */ 
#define DEM_G_NUMBER_OF_EVENTS                                        64U                               /* Total number of DemEventParameter, incl. event #0 */ 
#define DEM_G_NUMBER_OF_INDICATORS                                    4U                                /* Total number of indicators (i.e. incl. MIL, AWL, PL, RSL) */ 
#define DEM_G_NUMBER_OF_RATIO_IDS                                     0U                                /* Number of OBD RatioIds (incl. ID 0, internally used for global values) */ 
#define DEM_G_NUMBER_SPECIAL_INDICATORS                               0U                                /* Number of special indicators (i.e. only MIL, AWL, PL, RSL) */ 

 /*  OBD global definitions  */ 
#define DEM_CFG_OBDACCELERATORPEDALINFORMATION_INDEX                  0U           /* not defined */ 
#define DEM_CFG_OBDAMBIENTPRESSURE_INDEX                              0U           /* not defined */ 
#define DEM_CFG_OBDAMBIENTTEMPERATURE_INDEX                           0U           /* not defined */ 
#define DEM_CFG_OBDDISTANCEINFORMATION_INDEX                          0U           /* not defined */ 
#define DEM_CFG_OBDENGINERUNTIME_INDEX                                0U           /* not defined */ 
#define DEM_CFG_OBDENGINESPEED_INDEX                                  0U           /* not defined */ 
#define DEM_CFG_OBDENGINETEMPERATURE_INDEX                            0U           /* not defined */ 
#define DEM_CFG_OBDPROGRAMMINGEVENT_INDEX                             0U           /* not defined */ 
#define DEM_CFG_OBDVEHICLESPEED_INDEX                                 0U           /* not defined */ 

 /*  EnableCondition IDs [symbolic name value]  */ 
#define DemConf_DemEnableCondition_DemEnableConditionK                1U 
#define DemConf_DemEnableCondition_DemEnableConditionA                2U 
#define DemConf_DemEnableCondition_DemEnableConditionB                3U 
#define DemConf_DemEnableCondition_DemEnableConditionC                4U 
#define DemConf_DemEnableCondition_DemEnableConditionD                5U 
#define DemConf_DemEnableCondition_DemEnableConditionE                6U 
#define DemConf_DemEnableCondition_DemEnableConditionF                7U 
#define DemConf_DemEnableCondition_DemEnableConditionG                8U 
#define DemConf_DemEnableCondition_DemEnableConditionH                9U 
#define DemConf_DemEnableCondition_DemEnableConditionI                10U 
#define DemConf_DemEnableCondition_DemEnableConditionJ                11U 

 /*  EnableCondition global definitions  */ 
#define DEM_CFG_GLOBAL_ENABLE_COND_COUNT                              11U             /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) */ 
#define DEM_CFG_GLOBAL_ENABLE_COND_INIT                               0x00000FFFUL    /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) */ 


 /*  Timebased debouncing - timing constants  */ 
#define DEM_CFG_DEBOUNCE_LO_RES_TIMER_VALUE                           15U          /* Ticks of the low resolution timer, based on Dem_MainFunction() call cycle [10.0ms]. Tick count here equals 150.0ms. */ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCGetConstantDuplicatedRootDataMacros  Dem_Cfg Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Dem_Cfg_GetAdminDataOfPCConfig()                              Dem_Cfg_AdminData  /**< the pointer to Dem_Cfg_AdminData */
#define Dem_Cfg_GetCallbackDtcStatusChangedOfPCConfig()               Dem_Cfg_CallbackDtcStatusChanged  /**< the pointer to Dem_Cfg_CallbackDtcStatusChanged */
#define Dem_Cfg_GetCommitBufferOfPCConfig()                           Dem_Cfg_CommitBuffer  /**< the pointer to Dem_Cfg_CommitBuffer */
#define Dem_Cfg_GetConfigurationIdOfPCConfig()                        0x2DAAU  /**< Magic constant derived from the configuration parameters DemGeneral/DemCompiledConfigId and DemGeneral/DemCompiledPostbuildCrc. Each value change is evidence to incompatible NV stored data and triggers a re-initialization of the NV data. */
#define Dem_Cfg_GetCycleIdTableOfPCConfig()                           Dem_Cfg_CycleIdTable  /**< the pointer to Dem_Cfg_CycleIdTable */
#define Dem_Cfg_GetDataCollectionTableFfm2CollIndOfPCConfig()         Dem_Cfg_DataCollectionTableFfm2CollInd  /**< the pointer to Dem_Cfg_DataCollectionTableFfm2CollInd */
#define Dem_Cfg_GetDataCollectionTableOfPCConfig()                    Dem_Cfg_DataCollectionTable  /**< the pointer to Dem_Cfg_DataCollectionTable */
#define Dem_Cfg_GetDataElementTableCol2ElmtIndOfPCConfig()            Dem_Cfg_DataElementTableCol2ElmtInd  /**< the pointer to Dem_Cfg_DataElementTableCol2ElmtInd */
#define Dem_Cfg_GetDataElementTableOfPCConfig()                       Dem_Cfg_DataElementTable  /**< the pointer to Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetDebounceTableOfPCConfig()                          Dem_Cfg_DebounceTable  /**< the pointer to Dem_Cfg_DebounceTable */
#define Dem_Cfg_GetDtcTableOfPCConfig()                               Dem_Cfg_DtcTable  /**< the pointer to Dem_Cfg_DtcTable */
#define Dem_Cfg_GetEnableConditionTableOfPCConfig()                   Dem_Cfg_EnableConditionTable  /**< the pointer to Dem_Cfg_EnableConditionTable */
#define Dem_Cfg_GetEventAvailableDefaultOfPCConfig()                  Dem_Cfg_EventAvailableDefault  /**< the pointer to Dem_Cfg_EventAvailableDefault */
#define Dem_Cfg_GetEventAvailableInVariantOfPCConfig()                Dem_Cfg_EventAvailableInVariant  /**< the pointer to Dem_Cfg_EventAvailableInVariant */
#define Dem_Cfg_GetEventDebounceValueOfPCConfig()                     Dem_Cfg_EventDebounceValue  /**< the pointer to Dem_Cfg_EventDebounceValue */
#define Dem_Cfg_GetEventInternalStatusOfPCConfig()                    Dem_Cfg_EventInternalStatus  /**< the pointer to Dem_Cfg_EventInternalStatus */
#define Dem_Cfg_GetEventQueueStatusOfPCConfig()                       Dem_Cfg_EventQueueStatus  /**< the pointer to Dem_Cfg_EventQueueStatus */
#define Dem_Cfg_GetEventTableOfPCConfig()                             Dem_Cfg_EventTable  /**< the pointer to Dem_Cfg_EventTable */
#define Dem_Cfg_GetExtendedDataTableOfPCConfig()                      Dem_Cfg_ExtendedDataTable  /**< the pointer to Dem_Cfg_ExtendedDataTable */
#define Dem_Cfg_GetFilterReportedEventsOfPCConfig()                   Dem_Cfg_FilterReportedEvents  /**< the pointer to Dem_Cfg_FilterReportedEvents */
#define Dem_Cfg_GetFreezeFrameNumTableOfPCConfig()                    Dem_Cfg_FreezeFrameNumTable  /**< the pointer to Dem_Cfg_FreezeFrameNumTable */
#define Dem_Cfg_GetFreezeFrameTableOfPCConfig()                       Dem_Cfg_FreezeFrameTable  /**< the pointer to Dem_Cfg_FreezeFrameTable */
#define Dem_Cfg_GetGeneralObdInputOfPCConfig()                        Dem_Cfg_GeneralObdInput  /**< the pointer to Dem_Cfg_GeneralObdInput */
#define Dem_Cfg_GetGlobalSeverityMaskOfPCConfig()                     0x00U  /**< Variant specific mask from OR'ed /Dem/DemConfigSet/DemDTCClass/DemDTCSeverity bits. */
#define Dem_Cfg_GetIndicatorBlinkingOfPCConfig()                      Dem_Cfg_IndicatorBlinking  /**< the pointer to Dem_Cfg_IndicatorBlinking */
#define Dem_Cfg_GetIndicatorContinuousOfPCConfig()                    Dem_Cfg_IndicatorContinuous  /**< the pointer to Dem_Cfg_IndicatorContinuous */
#define Dem_Cfg_GetMemoryBlockIdOfPCConfig()                          Dem_Cfg_MemoryBlockId  /**< the pointer to Dem_Cfg_MemoryBlockId */
#define Dem_Cfg_GetMemoryCommitNumberOfPCConfig()                     Dem_Cfg_MemoryCommitNumber  /**< the pointer to Dem_Cfg_MemoryCommitNumber */
#define Dem_Cfg_GetMemoryDataPtrOfPCConfig()                          Dem_Cfg_MemoryDataPtr  /**< the pointer to Dem_Cfg_MemoryDataPtr */
#define Dem_Cfg_GetMemoryDataSizeOfPCConfig()                         Dem_Cfg_MemoryDataSize  /**< the pointer to Dem_Cfg_MemoryDataSize */
#define Dem_Cfg_GetMemoryEntryInitOfPCConfig()                        Dem_Cfg_MemoryEntryInit  /**< the pointer to Dem_Cfg_MemoryEntryInit */
#define Dem_Cfg_GetMemoryStatusOfPCConfig()                           Dem_Cfg_MemoryStatus  /**< the pointer to Dem_Cfg_MemoryStatus */
#define Dem_Cfg_GetNormalIndicatorTableOfPCConfig()                   Dem_Cfg_NormalIndicatorTable  /**< the pointer to Dem_Cfg_NormalIndicatorTable */
#define Dem_Cfg_GetPrimaryChronologyOfPCConfig()                      Dem_Cfg_PrimaryChronology  /**< the pointer to Dem_Cfg_PrimaryChronology */
#define Dem_Cfg_GetPrimaryEntry_0OfPCConfig()                         Dem_Cfg_PrimaryEntry_0  /**< the pointer to Dem_Cfg_PrimaryEntry_0 */
#define Dem_Cfg_GetPrimaryEntry_10OfPCConfig()                        Dem_Cfg_PrimaryEntry_10  /**< the pointer to Dem_Cfg_PrimaryEntry_10 */
#define Dem_Cfg_GetPrimaryEntry_11OfPCConfig()                        Dem_Cfg_PrimaryEntry_11  /**< the pointer to Dem_Cfg_PrimaryEntry_11 */
#define Dem_Cfg_GetPrimaryEntry_12OfPCConfig()                        Dem_Cfg_PrimaryEntry_12  /**< the pointer to Dem_Cfg_PrimaryEntry_12 */
#define Dem_Cfg_GetPrimaryEntry_13OfPCConfig()                        Dem_Cfg_PrimaryEntry_13  /**< the pointer to Dem_Cfg_PrimaryEntry_13 */
#define Dem_Cfg_GetPrimaryEntry_14OfPCConfig()                        Dem_Cfg_PrimaryEntry_14  /**< the pointer to Dem_Cfg_PrimaryEntry_14 */
#define Dem_Cfg_GetPrimaryEntry_15OfPCConfig()                        Dem_Cfg_PrimaryEntry_15  /**< the pointer to Dem_Cfg_PrimaryEntry_15 */
#define Dem_Cfg_GetPrimaryEntry_16OfPCConfig()                        Dem_Cfg_PrimaryEntry_16  /**< the pointer to Dem_Cfg_PrimaryEntry_16 */
#define Dem_Cfg_GetPrimaryEntry_17OfPCConfig()                        Dem_Cfg_PrimaryEntry_17  /**< the pointer to Dem_Cfg_PrimaryEntry_17 */
#define Dem_Cfg_GetPrimaryEntry_18OfPCConfig()                        Dem_Cfg_PrimaryEntry_18  /**< the pointer to Dem_Cfg_PrimaryEntry_18 */
#define Dem_Cfg_GetPrimaryEntry_19OfPCConfig()                        Dem_Cfg_PrimaryEntry_19  /**< the pointer to Dem_Cfg_PrimaryEntry_19 */
#define Dem_Cfg_GetPrimaryEntry_1OfPCConfig()                         Dem_Cfg_PrimaryEntry_1  /**< the pointer to Dem_Cfg_PrimaryEntry_1 */
#define Dem_Cfg_GetPrimaryEntry_20OfPCConfig()                        Dem_Cfg_PrimaryEntry_20  /**< the pointer to Dem_Cfg_PrimaryEntry_20 */
#define Dem_Cfg_GetPrimaryEntry_21OfPCConfig()                        Dem_Cfg_PrimaryEntry_21  /**< the pointer to Dem_Cfg_PrimaryEntry_21 */
#define Dem_Cfg_GetPrimaryEntry_22OfPCConfig()                        Dem_Cfg_PrimaryEntry_22  /**< the pointer to Dem_Cfg_PrimaryEntry_22 */
#define Dem_Cfg_GetPrimaryEntry_23OfPCConfig()                        Dem_Cfg_PrimaryEntry_23  /**< the pointer to Dem_Cfg_PrimaryEntry_23 */
#define Dem_Cfg_GetPrimaryEntry_24OfPCConfig()                        Dem_Cfg_PrimaryEntry_24  /**< the pointer to Dem_Cfg_PrimaryEntry_24 */
#define Dem_Cfg_GetPrimaryEntry_25OfPCConfig()                        Dem_Cfg_PrimaryEntry_25  /**< the pointer to Dem_Cfg_PrimaryEntry_25 */
#define Dem_Cfg_GetPrimaryEntry_26OfPCConfig()                        Dem_Cfg_PrimaryEntry_26  /**< the pointer to Dem_Cfg_PrimaryEntry_26 */
#define Dem_Cfg_GetPrimaryEntry_27OfPCConfig()                        Dem_Cfg_PrimaryEntry_27  /**< the pointer to Dem_Cfg_PrimaryEntry_27 */
#define Dem_Cfg_GetPrimaryEntry_28OfPCConfig()                        Dem_Cfg_PrimaryEntry_28  /**< the pointer to Dem_Cfg_PrimaryEntry_28 */
#define Dem_Cfg_GetPrimaryEntry_29OfPCConfig()                        Dem_Cfg_PrimaryEntry_29  /**< the pointer to Dem_Cfg_PrimaryEntry_29 */
#define Dem_Cfg_GetPrimaryEntry_2OfPCConfig()                         Dem_Cfg_PrimaryEntry_2  /**< the pointer to Dem_Cfg_PrimaryEntry_2 */
#define Dem_Cfg_GetPrimaryEntry_30OfPCConfig()                        Dem_Cfg_PrimaryEntry_30  /**< the pointer to Dem_Cfg_PrimaryEntry_30 */
#define Dem_Cfg_GetPrimaryEntry_31OfPCConfig()                        Dem_Cfg_PrimaryEntry_31  /**< the pointer to Dem_Cfg_PrimaryEntry_31 */
#define Dem_Cfg_GetPrimaryEntry_32OfPCConfig()                        Dem_Cfg_PrimaryEntry_32  /**< the pointer to Dem_Cfg_PrimaryEntry_32 */
#define Dem_Cfg_GetPrimaryEntry_33OfPCConfig()                        Dem_Cfg_PrimaryEntry_33  /**< the pointer to Dem_Cfg_PrimaryEntry_33 */
#define Dem_Cfg_GetPrimaryEntry_34OfPCConfig()                        Dem_Cfg_PrimaryEntry_34  /**< the pointer to Dem_Cfg_PrimaryEntry_34 */
#define Dem_Cfg_GetPrimaryEntry_35OfPCConfig()                        Dem_Cfg_PrimaryEntry_35  /**< the pointer to Dem_Cfg_PrimaryEntry_35 */
#define Dem_Cfg_GetPrimaryEntry_36OfPCConfig()                        Dem_Cfg_PrimaryEntry_36  /**< the pointer to Dem_Cfg_PrimaryEntry_36 */
#define Dem_Cfg_GetPrimaryEntry_37OfPCConfig()                        Dem_Cfg_PrimaryEntry_37  /**< the pointer to Dem_Cfg_PrimaryEntry_37 */
#define Dem_Cfg_GetPrimaryEntry_38OfPCConfig()                        Dem_Cfg_PrimaryEntry_38  /**< the pointer to Dem_Cfg_PrimaryEntry_38 */
#define Dem_Cfg_GetPrimaryEntry_39OfPCConfig()                        Dem_Cfg_PrimaryEntry_39  /**< the pointer to Dem_Cfg_PrimaryEntry_39 */
#define Dem_Cfg_GetPrimaryEntry_3OfPCConfig()                         Dem_Cfg_PrimaryEntry_3  /**< the pointer to Dem_Cfg_PrimaryEntry_3 */
#define Dem_Cfg_GetPrimaryEntry_4OfPCConfig()                         Dem_Cfg_PrimaryEntry_4  /**< the pointer to Dem_Cfg_PrimaryEntry_4 */
#define Dem_Cfg_GetPrimaryEntry_5OfPCConfig()                         Dem_Cfg_PrimaryEntry_5  /**< the pointer to Dem_Cfg_PrimaryEntry_5 */
#define Dem_Cfg_GetPrimaryEntry_6OfPCConfig()                         Dem_Cfg_PrimaryEntry_6  /**< the pointer to Dem_Cfg_PrimaryEntry_6 */
#define Dem_Cfg_GetPrimaryEntry_7OfPCConfig()                         Dem_Cfg_PrimaryEntry_7  /**< the pointer to Dem_Cfg_PrimaryEntry_7 */
#define Dem_Cfg_GetPrimaryEntry_8OfPCConfig()                         Dem_Cfg_PrimaryEntry_8  /**< the pointer to Dem_Cfg_PrimaryEntry_8 */
#define Dem_Cfg_GetPrimaryEntry_9OfPCConfig()                         Dem_Cfg_PrimaryEntry_9  /**< the pointer to Dem_Cfg_PrimaryEntry_9 */
#define Dem_Cfg_GetReadoutBufferOfPCConfig()                          Dem_Cfg_ReadoutBuffer  /**< the pointer to Dem_Cfg_ReadoutBuffer */
#define Dem_Cfg_GetSizeOfCallbackDtcStatusChangedOfPCConfig()         1U  /**< the number of accomplishable value elements in Dem_Cfg_CallbackDtcStatusChanged */
#define Dem_Cfg_GetSizeOfDataElementTableOfPCConfig()                 20U  /**< the number of accomplishable value elements in Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetSizeOfEventTableOfPCConfig()                       64U  /**< the number of accomplishable value elements in Dem_Cfg_EventTable */
#define Dem_Cfg_GetSizeOfFilterReportedEventsOfPCConfig()             8U  /**< the number of accomplishable value elements in Dem_Cfg_FilterReportedEvents */
#define Dem_Cfg_GetSizeOfIndicatorBlinkingOfPCConfig()                4U  /**< the number of accomplishable value elements in Dem_Cfg_IndicatorBlinking */
#define Dem_Cfg_GetSizeOfIndicatorContinuousOfPCConfig()              4U  /**< the number of accomplishable value elements in Dem_Cfg_IndicatorContinuous */
#define Dem_Cfg_GetSizeOfMemoryCommitNumberOfPCConfig()               42U  /**< the number of accomplishable value elements in Dem_Cfg_MemoryCommitNumber */
#define Dem_Cfg_GetSizeOfMemoryStatusOfPCConfig()                     42U  /**< the number of accomplishable value elements in Dem_Cfg_MemoryStatus */
#define Dem_Cfg_GetSizeOfPrimaryChronologyOfPCConfig()                40U  /**< the number of accomplishable value elements in Dem_Cfg_PrimaryChronology */
#define Dem_Cfg_GetStatusDataOfPCConfig()                             Dem_Cfg_StatusData  /**< the pointer to Dem_Cfg_StatusData */
#define Dem_Cfg_GetTimeSeriesEntryInitOfPCConfig()                    Dem_Cfg_TimeSeriesEntryInit  /**< the pointer to Dem_Cfg_TimeSeriesEntryInit */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDuplicatedRootDataMacros  Dem_Cfg Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Dem_Cfg_GetSizeOfEventDebounceValueOfPCConfig()               Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventDebounceValue */
#define Dem_Cfg_GetSizeOfEventInternalStatusOfPCConfig()              Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventInternalStatus */
#define Dem_Cfg_GetSizeOfEventQueueStatusOfPCConfig()                 Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventQueueStatus */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDataMacros  Dem_Cfg Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Dem_Cfg_GetAdminData()                                        (Dem_Cfg_GetAdminDataOfPCConfig())
#define Dem_Cfg_GetCallbackDtcStatusChanged(Index)                    (Dem_Cfg_GetCallbackDtcStatusChangedOfPCConfig()[(Index)])
#define Dem_Cfg_GetCommitBuffer()                                     (Dem_Cfg_GetCommitBufferOfPCConfig())
#define Dem_Cfg_GetCollectionSizeOfDataCollectionTable(Index)         (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].CollectionSizeOfDataCollectionTable)
#define Dem_Cfg_GetDataElementTableCol2ElmtIndEndIdxOfDataCollectionTable(Index) (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable)
#define Dem_Cfg_GetDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable(Index) (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable)
#define Dem_Cfg_GetIdNumberOfDataCollectionTable(Index)               (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].IdNumberOfDataCollectionTable)
#define Dem_Cfg_GetMaskedBitsOfDataCollectionTable(Index)             (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].MaskedBitsOfDataCollectionTable)
#define Dem_Cfg_GetStorageKindOfDataCollectionTable(Index)            (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].StorageKindOfDataCollectionTable)
#define Dem_Cfg_GetDataCollectionTableFfm2CollInd(Index)              (Dem_Cfg_GetDataCollectionTableFfm2CollIndOfPCConfig()[(Index)])
#define Dem_Cfg_GetElementKindOfDataElementTable(Index)               (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ElementKindOfDataElementTable)
#define Dem_Cfg_GetElementSizeOfDataElementTable(Index)               (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ElementSizeOfDataElementTable)
#define Dem_Cfg_GetReadDataFuncOfDataElementTable(Index)              (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ReadDataFuncOfDataElementTable)
#define Dem_Cfg_GetDecrementStepSizeOfDebounceTable(Index)            (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].DecrementStepSizeOfDebounceTable)
#define Dem_Cfg_GetEventDebounceAlgorithmOfDebounceTable(Index)       (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].EventDebounceAlgorithmOfDebounceTable)
#define Dem_Cfg_GetFailedThresholdOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].FailedThresholdOfDebounceTable)
#define Dem_Cfg_GetIncrementStepSizeOfDebounceTable(Index)            (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].IncrementStepSizeOfDebounceTable)
#define Dem_Cfg_GetMaskedBitsOfDebounceTable(Index)                   (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].MaskedBitsOfDebounceTable)
#define Dem_Cfg_GetPassedThresholdOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].PassedThresholdOfDebounceTable)
#define Dem_Cfg_GetUdsDtcOfDtcTable(Index)                            (Dem_Cfg_GetDtcTableOfPCConfig()[(Index)].UdsDtcOfDtcTable)
#define Dem_Cfg_GetEnableConditionMaskOfEnableConditionTable(Index)   (Dem_Cfg_GetEnableConditionTableOfPCConfig()[(Index)].EnableConditionMaskOfEnableConditionTable)
#define Dem_Cfg_GetEventDebounceValue(Index)                          (Dem_Cfg_GetEventDebounceValueOfPCConfig()[(Index)])
#define Dem_Cfg_GetEventInternalStatus(Index)                         (Dem_Cfg_GetEventInternalStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetEventQueueStatus(Index)                            (Dem_Cfg_GetEventQueueStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetAgingCycleCounterThresholdOfEventTable(Index)      (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].AgingCycleCounterThresholdOfEventTable)
#define Dem_Cfg_GetAgingCycleIdOfEventTable(Index)                    (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].AgingCycleIdOfEventTable)
#define Dem_Cfg_GetDtcTableIdxOfEventTable(Index)                     (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].DtcTableIdxOfEventTable)
#define Dem_Cfg_GetEnableConditionTableIdxOfEventTable(Index)         (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].EnableConditionTableIdxOfEventTable)
#define Dem_Cfg_GetFreezeFrameNumTableEndIdxOfEventTable(Index)       (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].FreezeFrameNumTableEndIdxOfEventTable)
#define Dem_Cfg_GetFreezeFrameNumTableStartIdxOfEventTable(Index)     (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].FreezeFrameNumTableStartIdxOfEventTable)
#define Dem_Cfg_GetFreezeFrameTableStdFFIdxOfEventTable(Index)        (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].FreezeFrameTableStdFFIdxOfEventTable)
#define Dem_Cfg_GetMaskedBitsOfEventTable(Index)                      (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].MaskedBitsOfEventTable)
#define Dem_Cfg_GetNormalIndicatorTableEndIdxOfEventTable(Index)      (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].NormalIndicatorTableEndIdxOfEventTable)
#define Dem_Cfg_GetNormalIndicatorTableStartIdxOfEventTable(Index)    (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].NormalIndicatorTableStartIdxOfEventTable)
#define Dem_Cfg_GetFilterReportedEvents(Index)                        (Dem_Cfg_GetFilterReportedEventsOfPCConfig()[(Index)])
#define Dem_Cfg_GetDataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable(Index) (Dem_Cfg_GetFreezeFrameTableOfPCConfig()[(Index)].DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable)
#define Dem_Cfg_GetDataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable(Index) (Dem_Cfg_GetFreezeFrameTableOfPCConfig()[(Index)].DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable)
#define Dem_Cfg_GetRecordSizeOfFreezeFrameTable(Index)                (Dem_Cfg_GetFreezeFrameTableOfPCConfig()[(Index)].RecordSizeOfFreezeFrameTable)
#define Dem_Cfg_GetRecordSizeUdsOfFreezeFrameTable(Index)             (Dem_Cfg_GetFreezeFrameTableOfPCConfig()[(Index)].RecordSizeUdsOfFreezeFrameTable)
#define Dem_Cfg_GetIndicatorBlinking(Index)                           (Dem_Cfg_GetIndicatorBlinkingOfPCConfig()[(Index)])
#define Dem_Cfg_GetIndicatorContinuous(Index)                         (Dem_Cfg_GetIndicatorContinuousOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryBlockId(Index)                               (Dem_Cfg_GetMemoryBlockIdOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryCommitNumber(Index)                          (Dem_Cfg_GetMemoryCommitNumberOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryDataPtr(Index)                               (Dem_Cfg_GetMemoryDataPtrOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryDataSize(Index)                              (Dem_Cfg_GetMemoryDataSizeOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryEntryInit()                                  (Dem_Cfg_GetMemoryEntryInitOfPCConfig())
#define Dem_Cfg_GetMemoryStatus(Index)                                (Dem_Cfg_GetMemoryStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetIdOfNormalIndicatorTable(Index)                    (Dem_Cfg_GetNormalIndicatorTableOfPCConfig()[(Index)].IdOfNormalIndicatorTable)
#define Dem_Cfg_GetPrimaryChronology(Index)                           (Dem_Cfg_GetPrimaryChronologyOfPCConfig()[(Index)])
#define Dem_Cfg_GetPrimaryEntry_0()                                   (Dem_Cfg_GetPrimaryEntry_0OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_1()                                   (Dem_Cfg_GetPrimaryEntry_1OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_10()                                  (Dem_Cfg_GetPrimaryEntry_10OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_11()                                  (Dem_Cfg_GetPrimaryEntry_11OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_12()                                  (Dem_Cfg_GetPrimaryEntry_12OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_13()                                  (Dem_Cfg_GetPrimaryEntry_13OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_14()                                  (Dem_Cfg_GetPrimaryEntry_14OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_15()                                  (Dem_Cfg_GetPrimaryEntry_15OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_16()                                  (Dem_Cfg_GetPrimaryEntry_16OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_17()                                  (Dem_Cfg_GetPrimaryEntry_17OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_18()                                  (Dem_Cfg_GetPrimaryEntry_18OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_19()                                  (Dem_Cfg_GetPrimaryEntry_19OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_2()                                   (Dem_Cfg_GetPrimaryEntry_2OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_20()                                  (Dem_Cfg_GetPrimaryEntry_20OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_21()                                  (Dem_Cfg_GetPrimaryEntry_21OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_22()                                  (Dem_Cfg_GetPrimaryEntry_22OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_23()                                  (Dem_Cfg_GetPrimaryEntry_23OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_24()                                  (Dem_Cfg_GetPrimaryEntry_24OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_25()                                  (Dem_Cfg_GetPrimaryEntry_25OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_26()                                  (Dem_Cfg_GetPrimaryEntry_26OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_27()                                  (Dem_Cfg_GetPrimaryEntry_27OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_28()                                  (Dem_Cfg_GetPrimaryEntry_28OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_29()                                  (Dem_Cfg_GetPrimaryEntry_29OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_3()                                   (Dem_Cfg_GetPrimaryEntry_3OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_30()                                  (Dem_Cfg_GetPrimaryEntry_30OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_31()                                  (Dem_Cfg_GetPrimaryEntry_31OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_32()                                  (Dem_Cfg_GetPrimaryEntry_32OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_33()                                  (Dem_Cfg_GetPrimaryEntry_33OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_34()                                  (Dem_Cfg_GetPrimaryEntry_34OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_35()                                  (Dem_Cfg_GetPrimaryEntry_35OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_36()                                  (Dem_Cfg_GetPrimaryEntry_36OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_37()                                  (Dem_Cfg_GetPrimaryEntry_37OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_38()                                  (Dem_Cfg_GetPrimaryEntry_38OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_39()                                  (Dem_Cfg_GetPrimaryEntry_39OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_4()                                   (Dem_Cfg_GetPrimaryEntry_4OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_5()                                   (Dem_Cfg_GetPrimaryEntry_5OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_6()                                   (Dem_Cfg_GetPrimaryEntry_6OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_7()                                   (Dem_Cfg_GetPrimaryEntry_7OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_8()                                   (Dem_Cfg_GetPrimaryEntry_8OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_9()                                   (Dem_Cfg_GetPrimaryEntry_9OfPCConfig())
#define Dem_Cfg_GetReadoutBuffer()                                    (Dem_Cfg_GetReadoutBufferOfPCConfig())
#define Dem_Cfg_GetStatusData()                                       (Dem_Cfg_GetStatusDataOfPCConfig())
#define Dem_Cfg_GetTimeSeriesEntryInit()                              (Dem_Cfg_GetTimeSeriesEntryInitOfPCConfig())
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetBitDataMacros  Dem_Cfg Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define Dem_Cfg_IsJumpUpOfDebounceTable(Index)                        (DEM_CFG_JUMPUPOFDEBOUNCETABLE_MASK == (Dem_Cfg_GetMaskedBitsOfDebounceTable(Index) & DEM_CFG_JUMPUPOFDEBOUNCETABLE_MASK))  /**< DemDebounceCounterJumpUp of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_Cfg_IsFreezeFrameNumTableUsedOfEventTable(Index)          (DEM_CFG_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE_MASK == (Dem_Cfg_GetMaskedBitsOfEventTable(Index) & DEM_CFG_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE_MASK))  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_FreezeFrameNumTable */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDeduplicatedDataMacros  Dem_Cfg Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Dem_Cfg_GetConfigurationId()                                  Dem_Cfg_GetConfigurationIdOfPCConfig()
#define Dem_Cfg_GetOpCycleTypeOfCycleIdTable(Index)                   DEM_CFG_OPCYC_OTHER  /**< DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING] */
#define Dem_Cfg_IsUsedForAgingOfCycleIdTable(Index)                   (((TRUE)) != FALSE)  /**< DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef */
#define Dem_Cfg_IsDataElementTableCol2ElmtIndUsedOfDataCollectionTable(Index) (((boolean)(Dem_Cfg_GetDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable(Index) != DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
#define Dem_Cfg_IsUpdateOfDataCollectionTable(Index)                  (((FALSE)) != FALSE)
#define Dem_Cfg_GetDataElementTableCol2ElmtInd(Index)                 ((Dem_Cfg_DataElementTableCol2ElmtIndType)(((Index) + 1)))  /**< the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataElementTable */
#define Dem_Cfg_IsDebounceContinuousOfDebounceTable(Index)            (((FALSE)) != FALSE)  /**< DemDebounceContinuous of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased and ~/DemDebounceTimeBase */
#define Dem_Cfg_IsEventDebounceBehaviorOfDebounceTable(Index)         (((FALSE)) != FALSE)  /**< DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/[algorithm]/DemDebounceBehavior == DEM_DEBOUNCE_RESET */
#define Dem_Cfg_GetFailTimerCyclesOfDebounceTable(Index)              0  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimeFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
#define Dem_Cfg_IsJumpDownOfDebounceTable(Index)                      Dem_Cfg_IsJumpUpOfDebounceTable(Index)  /**< DemDebounceCounterJumpDown of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBase */
#define Dem_Cfg_GetJumpDownValueOfDebounceTable(Index)                0  /**< DemDebounceCounterJumpDownValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_Cfg_GetJumpUpValueOfDebounceTable(Index)                  0  /**< DemDebounceCounterJumpUpValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_Cfg_GetPassTimerCyclesOfDebounceTable(Index)              0  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimePassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
#define Dem_Cfg_IsStorageOfDebounceTable(Index)                       (((FALSE)) != FALSE)  /**< DemDebounceCounterStorage of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_Cfg_GetDtcSeverityOfDtcTable(Index)                       0U
#define Dem_Cfg_GetFunctionalUnitOfDtcTable(Index)                    255U
#define Dem_Cfg_IsImmediateNvStorageOfDtcTable(Index)                 (((FALSE)) != FALSE)
#define Dem_Cfg_IsEventAvailableDefault(Index)                        (((TRUE)) != FALSE)
#define Dem_Cfg_IsEventAvailableInVariant(Index)                      (((TRUE)) != FALSE)
#define Dem_Cfg_IsAgingAllowedOfEventTable(Index)                     Dem_Cfg_IsFreezeFrameNumTableUsedOfEventTable(Index)  /**< DemAgingAllowed of the DemEventParameter/DemEventClass */
#define Dem_Cfg_GetDebounceTableIdxOfEventTable(Index)                0U  /**< the index of the 1:1 relation pointing to Dem_Cfg_DebounceTable */
#define Dem_Cfg_GetEventDestinationOfEventTable(Index)                DEM_CFG_MEMORYID_PRIMARY  /**< DemEventDestination of the DemEventParameter/DemEventClass */
#define Dem_Cfg_GetEventFailureCycleCounterThresholdOfEventTable(Index) 0U  /**< DemEventFailureCycleCounterThreshold of the DemEventParameter/DemEventClass, '0': is also default for unset parameter */
#define Dem_Cfg_GetEventFailureCycleIdOfEventTable(Index)             /*no EventFailureCycle*/ 1U  /**< ID of the cycle, referenced by DemEventParameter/DemEventClass/DemEventFailureCycleRef */
#define Dem_Cfg_GetEventKindOfEventTable(Index)                       Dem_Cfg_GetFreezeFrameTableStdFFIdxOfEventTable(Index)  /**< DemEventKind of the DemEventParameter */
#define Dem_Cfg_IsEventLatchTFOfEventTable(Index)                     (((FALSE)) != FALSE)  /**< DemEventLatchTestFailed of the DemEventParameter */
#define Dem_Cfg_GetEventPriorityOfEventTable(Index)                   2U  /**< DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255]. */
#define Dem_Cfg_GetEventSignificanceOfEventTable(Index)               DEM_CFG_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE  /**< DemEventSignificance of the DemEventParameter/DemEventClass */
#define Dem_Cfg_GetExtendedDataTableIdxOfEventTable(Index)            0U  /**< the index of the 1:1 relation pointing to Dem_Cfg_ExtendedDataTable */
#define Dem_Cfg_GetHealingTargetOfEventTable(Index)                   0U  /**< DemIndicatorHealingCycleCounterThreshold of the DemEventParameter/DemEventClass/DemIndicatorAttribute (for each event all attribute's value must be identical). Events without DemIndicatorAttribute have: 0. */
#define Dem_Cfg_IsNormalIndicatorTableUsedOfEventTable(Index)         (((boolean)(Dem_Cfg_GetNormalIndicatorTableStartIdxOfEventTable(Index) != DEM_CFG_NO_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_NormalIndicatorTable */
#define Dem_Cfg_GetOperationCycleIdOfEventTable(Index)                DemConf_DemOperationCycle_PowerCycle  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef */
#define Dem_Cfg_GetMaxRecordSizeOfExtendedDataTable(Index)            0U
#define Dem_Cfg_GetFFNumberOfFreezeFrameNumTable(Index)               1U
#define Dem_Cfg_GetFFTriggerOfFreezeFrameNumTable(Index)              DEM_CFG_TRIGGER_TESTFAILED
#define Dem_Cfg_IsFFUpdateOfFreezeFrameNumTable(Index)                (((FALSE)) != FALSE)
#define Dem_Cfg_IsDataCollectionTableFfm2CollIndUsedOfFreezeFrameTable(Index) (((boolean)(Dem_Cfg_GetDataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable(Index) != DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd */
#define Dem_Cfg_GetDataElementTableIdxOfGeneralObdInput(Index)        0U  /**< the index of the 1:1 relation pointing to Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetGlobalSeverityMask()                               Dem_Cfg_GetGlobalSeverityMaskOfPCConfig()
#define Dem_Cfg_GetBehaviorOfNormalIndicatorTable(Index)              DEM_INDICATOR_CONTINUOUS  /**< DemIndicatorBehaviour of the DemEventClass/DemIndicatorAttribute: [DEM_INDICATOR_BLINKING, DEM_INDICATOR_BLINK_CONT, DEM_INDICATOR_CONTINUOUS, DEM_INDICATOR_OFF, DEM_INDICATOR_FAST_FLASH, DEM_INDICATOR_SLOW_FLASH] */
#define Dem_Cfg_GetSizeOfCallbackDtcStatusChanged()                   Dem_Cfg_GetSizeOfCallbackDtcStatusChangedOfPCConfig()
#define Dem_Cfg_GetSizeOfDataElementTable()                           Dem_Cfg_GetSizeOfDataElementTableOfPCConfig()
#define Dem_Cfg_GetSizeOfEventDebounceValue()                         Dem_Cfg_GetSizeOfEventDebounceValueOfPCConfig()
#define Dem_Cfg_GetSizeOfEventInternalStatus()                        Dem_Cfg_GetSizeOfEventInternalStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfEventQueueStatus()                           Dem_Cfg_GetSizeOfEventQueueStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfEventTable()                                 Dem_Cfg_GetSizeOfEventTableOfPCConfig()
#define Dem_Cfg_GetSizeOfFilterReportedEvents()                       Dem_Cfg_GetSizeOfFilterReportedEventsOfPCConfig()
#define Dem_Cfg_GetSizeOfIndicatorBlinking()                          Dem_Cfg_GetSizeOfIndicatorBlinkingOfPCConfig()
#define Dem_Cfg_GetSizeOfIndicatorContinuous()                        Dem_Cfg_GetSizeOfIndicatorContinuousOfPCConfig()
#define Dem_Cfg_GetSizeOfMemoryCommitNumber()                         Dem_Cfg_GetSizeOfMemoryCommitNumberOfPCConfig()
#define Dem_Cfg_GetSizeOfMemoryStatus()                               Dem_Cfg_GetSizeOfMemoryStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfPrimaryChronology()                          Dem_Cfg_GetSizeOfPrimaryChronologyOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCSetDataMacros  Dem_Cfg Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Dem_Cfg_SetAdminData(Value)                                   Dem_Cfg_GetAdminDataOfPCConfig() = (Value)
#define Dem_Cfg_SetCommitBuffer(Value)                                Dem_Cfg_GetCommitBufferOfPCConfig() = (Value)
#define Dem_Cfg_SetEventDebounceValue(Index, Value)                   Dem_Cfg_GetEventDebounceValueOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEventInternalStatus(Index, Value)                  Dem_Cfg_GetEventInternalStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEventQueueStatus(Index, Value)                     Dem_Cfg_GetEventQueueStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetFilterReportedEvents(Index, Value)                 Dem_Cfg_GetFilterReportedEventsOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetIndicatorBlinking(Index, Value)                    Dem_Cfg_GetIndicatorBlinkingOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetIndicatorContinuous(Index, Value)                  Dem_Cfg_GetIndicatorContinuousOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetMemoryCommitNumber(Index, Value)                   Dem_Cfg_GetMemoryCommitNumberOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetMemoryStatus(Index, Value)                         Dem_Cfg_GetMemoryStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetPrimaryChronology(Index, Value)                    Dem_Cfg_GetPrimaryChronologyOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetPrimaryEntry_0(Value)                              Dem_Cfg_GetPrimaryEntry_0OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_1(Value)                              Dem_Cfg_GetPrimaryEntry_1OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_10(Value)                             Dem_Cfg_GetPrimaryEntry_10OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_11(Value)                             Dem_Cfg_GetPrimaryEntry_11OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_12(Value)                             Dem_Cfg_GetPrimaryEntry_12OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_13(Value)                             Dem_Cfg_GetPrimaryEntry_13OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_14(Value)                             Dem_Cfg_GetPrimaryEntry_14OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_15(Value)                             Dem_Cfg_GetPrimaryEntry_15OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_16(Value)                             Dem_Cfg_GetPrimaryEntry_16OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_17(Value)                             Dem_Cfg_GetPrimaryEntry_17OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_18(Value)                             Dem_Cfg_GetPrimaryEntry_18OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_19(Value)                             Dem_Cfg_GetPrimaryEntry_19OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_2(Value)                              Dem_Cfg_GetPrimaryEntry_2OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_20(Value)                             Dem_Cfg_GetPrimaryEntry_20OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_21(Value)                             Dem_Cfg_GetPrimaryEntry_21OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_22(Value)                             Dem_Cfg_GetPrimaryEntry_22OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_23(Value)                             Dem_Cfg_GetPrimaryEntry_23OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_24(Value)                             Dem_Cfg_GetPrimaryEntry_24OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_25(Value)                             Dem_Cfg_GetPrimaryEntry_25OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_26(Value)                             Dem_Cfg_GetPrimaryEntry_26OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_27(Value)                             Dem_Cfg_GetPrimaryEntry_27OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_28(Value)                             Dem_Cfg_GetPrimaryEntry_28OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_29(Value)                             Dem_Cfg_GetPrimaryEntry_29OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_3(Value)                              Dem_Cfg_GetPrimaryEntry_3OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_30(Value)                             Dem_Cfg_GetPrimaryEntry_30OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_31(Value)                             Dem_Cfg_GetPrimaryEntry_31OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_32(Value)                             Dem_Cfg_GetPrimaryEntry_32OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_33(Value)                             Dem_Cfg_GetPrimaryEntry_33OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_34(Value)                             Dem_Cfg_GetPrimaryEntry_34OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_35(Value)                             Dem_Cfg_GetPrimaryEntry_35OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_36(Value)                             Dem_Cfg_GetPrimaryEntry_36OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_37(Value)                             Dem_Cfg_GetPrimaryEntry_37OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_38(Value)                             Dem_Cfg_GetPrimaryEntry_38OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_39(Value)                             Dem_Cfg_GetPrimaryEntry_39OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_4(Value)                              Dem_Cfg_GetPrimaryEntry_4OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_5(Value)                              Dem_Cfg_GetPrimaryEntry_5OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_6(Value)                              Dem_Cfg_GetPrimaryEntry_6OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_7(Value)                              Dem_Cfg_GetPrimaryEntry_7OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_8(Value)                              Dem_Cfg_GetPrimaryEntry_8OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_9(Value)                              Dem_Cfg_GetPrimaryEntry_9OfPCConfig() = (Value)
#define Dem_Cfg_SetReadoutBuffer(Value)                               Dem_Cfg_GetReadoutBufferOfPCConfig() = (Value)
#define Dem_Cfg_SetStatusData(Value)                                  Dem_Cfg_GetStatusDataOfPCConfig() = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetAddressOfDataMacros  Dem_Cfg Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Dem_Cfg_GetAddrCallbackDtcStatusChanged(Index)                &Dem_Cfg_GetCallbackDtcStatusChanged(Index)
#define Dem_Cfg_GetAddrEventDebounceValue(Index)                      &Dem_Cfg_GetEventDebounceValue(Index)
#define Dem_Cfg_GetAddrEventInternalStatus(Index)                     &Dem_Cfg_GetEventInternalStatus(Index)
#define Dem_Cfg_GetAddrEventQueueStatus(Index)                        &Dem_Cfg_GetEventQueueStatus(Index)
#define Dem_Cfg_GetAddrFilterReportedEvents(Index)                    &Dem_Cfg_GetFilterReportedEvents(Index)
#define Dem_Cfg_GetAddrIndicatorBlinking(Index)                       &Dem_Cfg_GetIndicatorBlinking(Index)
#define Dem_Cfg_GetAddrIndicatorContinuous(Index)                     &Dem_Cfg_GetIndicatorContinuous(Index)
#define Dem_Cfg_GetAddrMemoryCommitNumber(Index)                      &Dem_Cfg_GetMemoryCommitNumber(Index)
#define Dem_Cfg_GetAddrMemoryStatus(Index)                            &Dem_Cfg_GetMemoryStatus(Index)
#define Dem_Cfg_GetAddrPrimaryChronology(Index)                       &Dem_Cfg_GetPrimaryChronology(Index)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCHasMacros  Dem_Cfg Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Dem_Cfg_HasAdminData()                                        (TRUE != FALSE)
#define Dem_Cfg_HasCallbackDtcStatusChanged()                         (TRUE != FALSE)
#define Dem_Cfg_HasCommitBuffer()                                     (TRUE != FALSE)
#define Dem_Cfg_HasConfigurationId()                                  (TRUE != FALSE)
#define Dem_Cfg_HasCycleIdTable()                                     (TRUE != FALSE)
#define Dem_Cfg_HasOpCycleTypeOfCycleIdTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasUsedForAgingOfCycleIdTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTable()                              (TRUE != FALSE)
#define Dem_Cfg_HasCollectionSizeOfDataCollectionTable()              (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndEndIdxOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndUsedOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasIdNumberOfDataCollectionTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasMaskedBitsOfDataCollectionTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasStorageKindOfDataCollectionTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasUpdateOfDataCollectionTable()                      (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollInd()                   (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasElementKindOfDataElementTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasElementSizeOfDataElementTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasReadDataFuncOfDataElementTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtInd()                      (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTable()                                    (TRUE != FALSE)
#define Dem_Cfg_HasDebounceContinuousOfDebounceTable()                (TRUE != FALSE)
#define Dem_Cfg_HasDecrementStepSizeOfDebounceTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceAlgorithmOfDebounceTable()            (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceBehaviorOfDebounceTable()             (TRUE != FALSE)
#define Dem_Cfg_HasFailTimerCyclesOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasFailedThresholdOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasIncrementStepSizeOfDebounceTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasJumpDownOfDebounceTable()                          (TRUE != FALSE)
#define Dem_Cfg_HasJumpDownValueOfDebounceTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasJumpUpOfDebounceTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasJumpUpValueOfDebounceTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasMaskedBitsOfDebounceTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasPassTimerCyclesOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasPassedThresholdOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasStorageOfDebounceTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasDtcTable()                                         (TRUE != FALSE)
#define Dem_Cfg_HasDtcSeverityOfDtcTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasFunctionalUnitOfDtcTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasImmediateNvStorageOfDtcTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasUdsDtcOfDtcTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionTable()                             (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionMaskOfEnableConditionTable()        (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableDefault()                            (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableInVariant()                          (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceValue()                               (TRUE != FALSE)
#define Dem_Cfg_HasEventInternalStatus()                              (TRUE != FALSE)
#define Dem_Cfg_HasEventQueueStatus()                                 (TRUE != FALSE)
#define Dem_Cfg_HasEventTable()                                       (TRUE != FALSE)
#define Dem_Cfg_HasAgingAllowedOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasAgingCycleCounterThresholdOfEventTable()           (TRUE != FALSE)
#define Dem_Cfg_HasAgingCycleIdOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTableIdxOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasDtcTableIdxOfEventTable()                          (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionTableIdxOfEventTable()              (TRUE != FALSE)
#define Dem_Cfg_HasEventDestinationOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasEventFailureCycleCounterThresholdOfEventTable()    (TRUE != FALSE)
#define Dem_Cfg_HasEventFailureCycleIdOfEventTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasEventKindOfEventTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasEventLatchTFOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasEventPriorityOfEventTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasEventSignificanceOfEventTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTableIdxOfEventTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableEndIdxOfEventTable()            (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableStartIdxOfEventTable()          (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableUsedOfEventTable()              (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTableStdFFIdxOfEventTable()             (TRUE != FALSE)
#define Dem_Cfg_HasHealingTargetOfEventTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasMaskedBitsOfEventTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasNormalIndicatorTableEndIdxOfEventTable()           (TRUE != FALSE)
#define Dem_Cfg_HasNormalIndicatorTableStartIdxOfEventTable()         (TRUE != FALSE)
#define Dem_Cfg_HasNormalIndicatorTableUsedOfEventTable()             (TRUE != FALSE)
#define Dem_Cfg_HasOperationCycleIdOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTable()                                (TRUE != FALSE)
#define Dem_Cfg_HasMaxRecordSizeOfExtendedDataTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasFilterReportedEvents()                             (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTable()                              (TRUE != FALSE)
#define Dem_Cfg_HasFFNumberOfFreezeFrameNumTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasFFTriggerOfFreezeFrameNumTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasFFUpdateOfFreezeFrameNumTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndUsedOfFreezeFrameTable() (TRUE != FALSE)
#define Dem_Cfg_HasRecordSizeOfFreezeFrameTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasRecordSizeUdsOfFreezeFrameTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasGeneralObdInput()                                  (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableIdxOfGeneralObdInput()             (TRUE != FALSE)
#define Dem_Cfg_HasGlobalSeverityMask()                               (TRUE != FALSE)
#define Dem_Cfg_HasIndicatorBlinking()                                (TRUE != FALSE)
#define Dem_Cfg_HasIndicatorContinuous()                              (TRUE != FALSE)
#define Dem_Cfg_HasMemoryBlockId()                                    (TRUE != FALSE)
#define Dem_Cfg_HasMemoryCommitNumber()                               (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataPtr()                                    (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataSize()                                   (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntryInit()                                  (TRUE != FALSE)
#define Dem_Cfg_HasMemoryStatus()                                     (TRUE != FALSE)
#define Dem_Cfg_HasNormalIndicatorTable()                             (TRUE != FALSE)
#define Dem_Cfg_HasBehaviorOfNormalIndicatorTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasIdOfNormalIndicatorTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryChronology()                                (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_0()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_1()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_10()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_11()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_12()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_13()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_14()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_15()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_16()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_17()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_18()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_19()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_2()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_20()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_21()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_22()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_23()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_24()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_25()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_26()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_27()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_28()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_29()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_3()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_30()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_31()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_32()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_33()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_34()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_35()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_36()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_37()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_38()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_39()                                  (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_4()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_5()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_6()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_7()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_8()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_9()                                   (TRUE != FALSE)
#define Dem_Cfg_HasReadoutBuffer()                                    (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfCallbackDtcStatusChanged()                   (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDataElementTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventDebounceValue()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventInternalStatus()                        (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventQueueStatus()                           (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfFilterReportedEvents()                       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfIndicatorBlinking()                          (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfIndicatorContinuous()                        (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryCommitNumber()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryStatus()                               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfPrimaryChronology()                          (TRUE != FALSE)
#define Dem_Cfg_HasStatusData()                                       (TRUE != FALSE)
#define Dem_Cfg_HasTimeSeriesEntryInit()                              (TRUE != FALSE)
#define Dem_HasPCConfig()                                             (TRUE != FALSE)
#define Dem_Cfg_HasAdminDataOfPCConfig()                              (TRUE != FALSE)
#define Dem_Cfg_HasCallbackDtcStatusChangedOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasCommitBufferOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasConfigurationIdOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasCycleIdTableOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndOfPCConfig()         (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndOfPCConfig()            (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTableOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasDtcTableOfPCConfig()                               (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionTableOfPCConfig()                   (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableDefaultOfPCConfig()                  (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableInVariantOfPCConfig()                (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceValueOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasEventInternalStatusOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasEventQueueStatusOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasEventTableOfPCConfig()                             (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTableOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasFilterReportedEventsOfPCConfig()                   (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasGeneralObdInputOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasGlobalSeverityMaskOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasIndicatorBlinkingOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasIndicatorContinuousOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasMemoryBlockIdOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasMemoryCommitNumberOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataPtrOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataSizeOfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntryInitOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasMemoryStatusOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasNormalIndicatorTableOfPCConfig()                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryChronologyOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_0OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_10OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_11OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_12OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_13OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_14OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_15OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_16OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_17OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_18OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_19OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_1OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_20OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_21OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_22OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_23OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_24OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_25OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_26OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_27OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_28OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_29OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_2OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_30OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_31OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_32OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_33OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_34OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_35OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_36OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_37OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_38OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_39OfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_3OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_4OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_5OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_6OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_7OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_8OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_9OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasReadoutBufferOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfCallbackDtcStatusChangedOfPCConfig()         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDataElementTableOfPCConfig()                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventDebounceValueOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventInternalStatusOfPCConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventQueueStatusOfPCConfig()                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfFilterReportedEventsOfPCConfig()             (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfIndicatorBlinkingOfPCConfig()                (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfIndicatorContinuousOfPCConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryCommitNumberOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryStatusOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfPrimaryChronologyOfPCConfig()                (TRUE != FALSE)
#define Dem_Cfg_HasStatusDataOfPCConfig()                             (TRUE != FALSE)
#define Dem_Cfg_HasTimeSeriesEntryInitOfPCConfig()                    (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIncrementDataMacros  Dem_Cfg Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_IncAdminData()                                        Dem_Cfg_GetAdminData()++
#define Dem_Cfg_IncCommitBuffer()                                     Dem_Cfg_GetCommitBuffer()++
#define Dem_Cfg_IncEventDebounceValue(Index)                          Dem_Cfg_GetEventDebounceValue(Index)++
#define Dem_Cfg_IncEventInternalStatus(Index)                         Dem_Cfg_GetEventInternalStatus(Index)++
#define Dem_Cfg_IncEventQueueStatus(Index)                            Dem_Cfg_GetEventQueueStatus(Index)++
#define Dem_Cfg_IncFilterReportedEvents(Index)                        Dem_Cfg_GetFilterReportedEvents(Index)++
#define Dem_Cfg_IncIndicatorBlinking(Index)                           Dem_Cfg_GetIndicatorBlinking(Index)++
#define Dem_Cfg_IncIndicatorContinuous(Index)                         Dem_Cfg_GetIndicatorContinuous(Index)++
#define Dem_Cfg_IncMemoryCommitNumber(Index)                          Dem_Cfg_GetMemoryCommitNumber(Index)++
#define Dem_Cfg_IncMemoryStatus(Index)                                Dem_Cfg_GetMemoryStatus(Index)++
#define Dem_Cfg_IncPrimaryChronology(Index)                           Dem_Cfg_GetPrimaryChronology(Index)++
#define Dem_Cfg_IncPrimaryEntry_0()                                   Dem_Cfg_GetPrimaryEntry_0()++
#define Dem_Cfg_IncPrimaryEntry_1()                                   Dem_Cfg_GetPrimaryEntry_1()++
#define Dem_Cfg_IncPrimaryEntry_10()                                  Dem_Cfg_GetPrimaryEntry_10()++
#define Dem_Cfg_IncPrimaryEntry_11()                                  Dem_Cfg_GetPrimaryEntry_11()++
#define Dem_Cfg_IncPrimaryEntry_12()                                  Dem_Cfg_GetPrimaryEntry_12()++
#define Dem_Cfg_IncPrimaryEntry_13()                                  Dem_Cfg_GetPrimaryEntry_13()++
#define Dem_Cfg_IncPrimaryEntry_14()                                  Dem_Cfg_GetPrimaryEntry_14()++
#define Dem_Cfg_IncPrimaryEntry_15()                                  Dem_Cfg_GetPrimaryEntry_15()++
#define Dem_Cfg_IncPrimaryEntry_16()                                  Dem_Cfg_GetPrimaryEntry_16()++
#define Dem_Cfg_IncPrimaryEntry_17()                                  Dem_Cfg_GetPrimaryEntry_17()++
#define Dem_Cfg_IncPrimaryEntry_18()                                  Dem_Cfg_GetPrimaryEntry_18()++
#define Dem_Cfg_IncPrimaryEntry_19()                                  Dem_Cfg_GetPrimaryEntry_19()++
#define Dem_Cfg_IncPrimaryEntry_2()                                   Dem_Cfg_GetPrimaryEntry_2()++
#define Dem_Cfg_IncPrimaryEntry_20()                                  Dem_Cfg_GetPrimaryEntry_20()++
#define Dem_Cfg_IncPrimaryEntry_21()                                  Dem_Cfg_GetPrimaryEntry_21()++
#define Dem_Cfg_IncPrimaryEntry_22()                                  Dem_Cfg_GetPrimaryEntry_22()++
#define Dem_Cfg_IncPrimaryEntry_23()                                  Dem_Cfg_GetPrimaryEntry_23()++
#define Dem_Cfg_IncPrimaryEntry_24()                                  Dem_Cfg_GetPrimaryEntry_24()++
#define Dem_Cfg_IncPrimaryEntry_25()                                  Dem_Cfg_GetPrimaryEntry_25()++
#define Dem_Cfg_IncPrimaryEntry_26()                                  Dem_Cfg_GetPrimaryEntry_26()++
#define Dem_Cfg_IncPrimaryEntry_27()                                  Dem_Cfg_GetPrimaryEntry_27()++
#define Dem_Cfg_IncPrimaryEntry_28()                                  Dem_Cfg_GetPrimaryEntry_28()++
#define Dem_Cfg_IncPrimaryEntry_29()                                  Dem_Cfg_GetPrimaryEntry_29()++
#define Dem_Cfg_IncPrimaryEntry_3()                                   Dem_Cfg_GetPrimaryEntry_3()++
#define Dem_Cfg_IncPrimaryEntry_30()                                  Dem_Cfg_GetPrimaryEntry_30()++
#define Dem_Cfg_IncPrimaryEntry_31()                                  Dem_Cfg_GetPrimaryEntry_31()++
#define Dem_Cfg_IncPrimaryEntry_32()                                  Dem_Cfg_GetPrimaryEntry_32()++
#define Dem_Cfg_IncPrimaryEntry_33()                                  Dem_Cfg_GetPrimaryEntry_33()++
#define Dem_Cfg_IncPrimaryEntry_34()                                  Dem_Cfg_GetPrimaryEntry_34()++
#define Dem_Cfg_IncPrimaryEntry_35()                                  Dem_Cfg_GetPrimaryEntry_35()++
#define Dem_Cfg_IncPrimaryEntry_36()                                  Dem_Cfg_GetPrimaryEntry_36()++
#define Dem_Cfg_IncPrimaryEntry_37()                                  Dem_Cfg_GetPrimaryEntry_37()++
#define Dem_Cfg_IncPrimaryEntry_38()                                  Dem_Cfg_GetPrimaryEntry_38()++
#define Dem_Cfg_IncPrimaryEntry_39()                                  Dem_Cfg_GetPrimaryEntry_39()++
#define Dem_Cfg_IncPrimaryEntry_4()                                   Dem_Cfg_GetPrimaryEntry_4()++
#define Dem_Cfg_IncPrimaryEntry_5()                                   Dem_Cfg_GetPrimaryEntry_5()++
#define Dem_Cfg_IncPrimaryEntry_6()                                   Dem_Cfg_GetPrimaryEntry_6()++
#define Dem_Cfg_IncPrimaryEntry_7()                                   Dem_Cfg_GetPrimaryEntry_7()++
#define Dem_Cfg_IncPrimaryEntry_8()                                   Dem_Cfg_GetPrimaryEntry_8()++
#define Dem_Cfg_IncPrimaryEntry_9()                                   Dem_Cfg_GetPrimaryEntry_9()++
#define Dem_Cfg_IncReadoutBuffer()                                    Dem_Cfg_GetReadoutBuffer()++
#define Dem_Cfg_IncStatusData()                                       Dem_Cfg_GetStatusData()++
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCDecrementDataMacros  Dem_Cfg Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_DecAdminData()                                        Dem_Cfg_GetAdminData()--
#define Dem_Cfg_DecCommitBuffer()                                     Dem_Cfg_GetCommitBuffer()--
#define Dem_Cfg_DecEventDebounceValue(Index)                          Dem_Cfg_GetEventDebounceValue(Index)--
#define Dem_Cfg_DecEventInternalStatus(Index)                         Dem_Cfg_GetEventInternalStatus(Index)--
#define Dem_Cfg_DecEventQueueStatus(Index)                            Dem_Cfg_GetEventQueueStatus(Index)--
#define Dem_Cfg_DecFilterReportedEvents(Index)                        Dem_Cfg_GetFilterReportedEvents(Index)--
#define Dem_Cfg_DecIndicatorBlinking(Index)                           Dem_Cfg_GetIndicatorBlinking(Index)--
#define Dem_Cfg_DecIndicatorContinuous(Index)                         Dem_Cfg_GetIndicatorContinuous(Index)--
#define Dem_Cfg_DecMemoryCommitNumber(Index)                          Dem_Cfg_GetMemoryCommitNumber(Index)--
#define Dem_Cfg_DecMemoryStatus(Index)                                Dem_Cfg_GetMemoryStatus(Index)--
#define Dem_Cfg_DecPrimaryChronology(Index)                           Dem_Cfg_GetPrimaryChronology(Index)--
#define Dem_Cfg_DecPrimaryEntry_0()                                   Dem_Cfg_GetPrimaryEntry_0()--
#define Dem_Cfg_DecPrimaryEntry_1()                                   Dem_Cfg_GetPrimaryEntry_1()--
#define Dem_Cfg_DecPrimaryEntry_10()                                  Dem_Cfg_GetPrimaryEntry_10()--
#define Dem_Cfg_DecPrimaryEntry_11()                                  Dem_Cfg_GetPrimaryEntry_11()--
#define Dem_Cfg_DecPrimaryEntry_12()                                  Dem_Cfg_GetPrimaryEntry_12()--
#define Dem_Cfg_DecPrimaryEntry_13()                                  Dem_Cfg_GetPrimaryEntry_13()--
#define Dem_Cfg_DecPrimaryEntry_14()                                  Dem_Cfg_GetPrimaryEntry_14()--
#define Dem_Cfg_DecPrimaryEntry_15()                                  Dem_Cfg_GetPrimaryEntry_15()--
#define Dem_Cfg_DecPrimaryEntry_16()                                  Dem_Cfg_GetPrimaryEntry_16()--
#define Dem_Cfg_DecPrimaryEntry_17()                                  Dem_Cfg_GetPrimaryEntry_17()--
#define Dem_Cfg_DecPrimaryEntry_18()                                  Dem_Cfg_GetPrimaryEntry_18()--
#define Dem_Cfg_DecPrimaryEntry_19()                                  Dem_Cfg_GetPrimaryEntry_19()--
#define Dem_Cfg_DecPrimaryEntry_2()                                   Dem_Cfg_GetPrimaryEntry_2()--
#define Dem_Cfg_DecPrimaryEntry_20()                                  Dem_Cfg_GetPrimaryEntry_20()--
#define Dem_Cfg_DecPrimaryEntry_21()                                  Dem_Cfg_GetPrimaryEntry_21()--
#define Dem_Cfg_DecPrimaryEntry_22()                                  Dem_Cfg_GetPrimaryEntry_22()--
#define Dem_Cfg_DecPrimaryEntry_23()                                  Dem_Cfg_GetPrimaryEntry_23()--
#define Dem_Cfg_DecPrimaryEntry_24()                                  Dem_Cfg_GetPrimaryEntry_24()--
#define Dem_Cfg_DecPrimaryEntry_25()                                  Dem_Cfg_GetPrimaryEntry_25()--
#define Dem_Cfg_DecPrimaryEntry_26()                                  Dem_Cfg_GetPrimaryEntry_26()--
#define Dem_Cfg_DecPrimaryEntry_27()                                  Dem_Cfg_GetPrimaryEntry_27()--
#define Dem_Cfg_DecPrimaryEntry_28()                                  Dem_Cfg_GetPrimaryEntry_28()--
#define Dem_Cfg_DecPrimaryEntry_29()                                  Dem_Cfg_GetPrimaryEntry_29()--
#define Dem_Cfg_DecPrimaryEntry_3()                                   Dem_Cfg_GetPrimaryEntry_3()--
#define Dem_Cfg_DecPrimaryEntry_30()                                  Dem_Cfg_GetPrimaryEntry_30()--
#define Dem_Cfg_DecPrimaryEntry_31()                                  Dem_Cfg_GetPrimaryEntry_31()--
#define Dem_Cfg_DecPrimaryEntry_32()                                  Dem_Cfg_GetPrimaryEntry_32()--
#define Dem_Cfg_DecPrimaryEntry_33()                                  Dem_Cfg_GetPrimaryEntry_33()--
#define Dem_Cfg_DecPrimaryEntry_34()                                  Dem_Cfg_GetPrimaryEntry_34()--
#define Dem_Cfg_DecPrimaryEntry_35()                                  Dem_Cfg_GetPrimaryEntry_35()--
#define Dem_Cfg_DecPrimaryEntry_36()                                  Dem_Cfg_GetPrimaryEntry_36()--
#define Dem_Cfg_DecPrimaryEntry_37()                                  Dem_Cfg_GetPrimaryEntry_37()--
#define Dem_Cfg_DecPrimaryEntry_38()                                  Dem_Cfg_GetPrimaryEntry_38()--
#define Dem_Cfg_DecPrimaryEntry_39()                                  Dem_Cfg_GetPrimaryEntry_39()--
#define Dem_Cfg_DecPrimaryEntry_4()                                   Dem_Cfg_GetPrimaryEntry_4()--
#define Dem_Cfg_DecPrimaryEntry_5()                                   Dem_Cfg_GetPrimaryEntry_5()--
#define Dem_Cfg_DecPrimaryEntry_6()                                   Dem_Cfg_GetPrimaryEntry_6()--
#define Dem_Cfg_DecPrimaryEntry_7()                                   Dem_Cfg_GetPrimaryEntry_7()--
#define Dem_Cfg_DecPrimaryEntry_8()                                   Dem_Cfg_GetPrimaryEntry_8()--
#define Dem_Cfg_DecPrimaryEntry_9()                                   Dem_Cfg_GetPrimaryEntry_9()--
#define Dem_Cfg_DecReadoutBuffer()                                    Dem_Cfg_GetReadoutBuffer()--
#define Dem_Cfg_DecStatusData()                                       Dem_Cfg_GetStatusData()--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
 /*  Return type of Dem_Cfg_EventIndicatorIterGet() - returns: eventIndicatorIndex  */ 
typedef uint8                                                         Dem_Cfg_IndicatorIndexType; 

typedef struct Dem_Cfg_AdminDataType_s {
  uint16 ImplementationVersion;
  uint16 ConfigurationId;
  uint16 CycleCounter[ 1 /*DEM_CFG_GLOBAL_CYCLE_COUNT*/];
  uint8  MemoryOverflow;                                                        /* (DEM_CFG_DATA_OVFLIND == STD_ON) || (DEM_CFG_SUPPORT_OVFLIND_API == STD_ON) */
}                                                                     Dem_Cfg_AdminDataType; 

typedef struct Dem_Cfg_StatusDataType_s {
  uint16         FirstFailedEvent;
  uint16         FirstConfirmedEvent;
  uint16         MostRecentFailedEvent;
  uint16         MostRecentConfmdEvent;
  volatile uint8 EventStatus[ 64 /*DEM_G_NUMBER_OF_EVENTS (incl. #0)*/];
}                                                                     Dem_Cfg_StatusDataType; 

typedef struct Dem_Cfg_PrimaryEntryType_s {
  uint32 Timestamp;
  uint16 AgingCounter;
  uint16 EventId;
  uint8  SnapshotData[ 1 /*DEM_CFG_MAX_NUM_SNAPSHOTS*/][ 34 /*DEM_CFG_MAX_SIZE_SNAPSHOT*/];  /* (DEM_CFG_SUPPORT_SRECS == STD_ON) */
  uint8  SnapshotHeader;                                                                     /* (DEM_CFG_SUPPORT_SRECS == STD_ON) */
}                                                                     Dem_Cfg_PrimaryEntryType; 

typedef struct Dem_Cfg_TimeSeriesEntryType_s {
  uint32 Timestamp;
  uint16 EventId;
}                                                                     Dem_Cfg_TimeSeriesEntryType; 

typedef uint8                                                         Dem_Cfg_MemoryIndexType;               /* Number of NV blocks, see Dem_Cfg_GlobalNvBlockCount(). */ 

typedef uint8                                                         Dem_Cfg_EventInternalStatusType;       /* InternalStatus requires 2bits. Additionally following features enlarge the type: */ 

typedef P2VAR(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)     Dem_SharedMemoryEntryPtrType; 

typedef P2CONST(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)   Dem_ConstSharedMemoryEntryPtrType; 

typedef uint16                                                        Dem_Cfg_IndicatorContinuousType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorBlinkingType[1];      /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorFastFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorSlowFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint8                                                         Dem_Cfg_GlobalSpecialIndicatorStatesType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

 /*  Temporary buffer for interaction with NvM  */ 
typedef union Dem_Cfg_CommitBufferType_u { /* PRQA S 0750 */ /* MD_DEM_18.4 */
  uint8                    mRaw[ 1 ];
  Dem_Cfg_AdminDataType    mAdmin;
  Dem_Cfg_StatusDataType   mStatus;
  Dem_Cfg_PrimaryEntryType mPrimary;
}                                                                     Dem_Cfg_CommitBufferType; 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCIterableTypes  Dem_Cfg Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_CallbackDtcStatusChanged */
typedef uint8_least Dem_Cfg_CallbackDtcStatusChangedIterType;

/**   \brief  type used to iterate Dem_Cfg_CycleIdTable */
typedef uint8_least Dem_Cfg_CycleIdTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataCollectionTable */
typedef uint8_least Dem_Cfg_DataCollectionTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataCollectionTableFfm2CollInd */
typedef uint8_least Dem_Cfg_DataCollectionTableFfm2CollIndIterType;

/**   \brief  type used to iterate Dem_Cfg_DataElementTable */
typedef uint8_least Dem_Cfg_DataElementTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataElementTableCol2ElmtInd */
typedef uint8_least Dem_Cfg_DataElementTableCol2ElmtIndIterType;

/**   \brief  type used to iterate Dem_Cfg_DebounceTable */
typedef uint8_least Dem_Cfg_DebounceTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DtcTable */
typedef uint8_least Dem_Cfg_DtcTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EnableConditionTable */
typedef uint8_least Dem_Cfg_EnableConditionTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EventAvailableDefault */
typedef uint8_least Dem_Cfg_EventAvailableDefaultIterType;

/**   \brief  type used to iterate Dem_Cfg_EventAvailableInVariant */
typedef uint8_least Dem_Cfg_EventAvailableInVariantIterType;

/**   \brief  type used to iterate Dem_Cfg_EventTable */
typedef uint8_least Dem_Cfg_EventTableIterType;

/**   \brief  type used to iterate Dem_Cfg_ExtendedDataTable */
typedef uint8_least Dem_Cfg_ExtendedDataTableIterType;

/**   \brief  type used to iterate Dem_Cfg_FilterReportedEvents */
typedef uint8_least Dem_Cfg_FilterReportedEventsIterType;

/**   \brief  type used to iterate Dem_Cfg_FreezeFrameNumTable */
typedef uint8_least Dem_Cfg_FreezeFrameNumTableIterType;

/**   \brief  type used to iterate Dem_Cfg_FreezeFrameTable */
typedef uint8_least Dem_Cfg_FreezeFrameTableIterType;

/**   \brief  type used to iterate Dem_Cfg_GeneralObdInput */
typedef uint8_least Dem_Cfg_GeneralObdInputIterType;

/**   \brief  type used to iterate Dem_Cfg_IndicatorBlinking */
typedef uint8_least Dem_Cfg_IndicatorBlinkingIterType;

/**   \brief  type used to iterate Dem_Cfg_IndicatorContinuous */
typedef uint8_least Dem_Cfg_IndicatorContinuousIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryBlockId */
typedef uint8_least Dem_Cfg_MemoryBlockIdIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryCommitNumber */
typedef uint8_least Dem_Cfg_MemoryCommitNumberIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryDataPtr */
typedef uint8_least Dem_Cfg_MemoryDataPtrIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryDataSize */
typedef uint8_least Dem_Cfg_MemoryDataSizeIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryStatus */
typedef uint8_least Dem_Cfg_MemoryStatusIterType;

/**   \brief  type used to iterate Dem_Cfg_NormalIndicatorTable */
typedef uint8_least Dem_Cfg_NormalIndicatorTableIterType;

/**   \brief  type used to iterate Dem_Cfg_PrimaryChronology */
typedef uint8_least Dem_Cfg_PrimaryChronologyIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIterableTypesWithSizeRelations  Dem_Cfg Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_EventDebounceValue */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventDebounceValueIterType;

/**   \brief  type used to iterate Dem_Cfg_EventInternalStatus */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventInternalStatusIterType;

/**   \brief  type used to iterate Dem_Cfg_EventQueueStatus */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventQueueStatusIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCValueTypes  Dem_Cfg Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Dem_Cfg_ConfigurationId */
typedef uint16 Dem_Cfg_ConfigurationIdType;

/**   \brief  value based type definition for Dem_Cfg_OpCycleTypeOfCycleIdTable */
typedef uint8 Dem_Cfg_OpCycleTypeOfCycleIdTableType;

/**   \brief  value based type definition for Dem_Cfg_UsedForAgingOfCycleIdTable */
typedef boolean Dem_Cfg_UsedForAgingOfCycleIdTableType;

/**   \brief  value based type definition for Dem_Cfg_CollectionSizeOfDataCollectionTable */
typedef uint8 Dem_Cfg_CollectionSizeOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable */
typedef uint8 Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable */
typedef uint8 Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable */
typedef boolean Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_IdNumberOfDataCollectionTable */
typedef uint16 Dem_Cfg_IdNumberOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_MaskedBitsOfDataCollectionTable */
typedef uint8 Dem_Cfg_MaskedBitsOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_StorageKindOfDataCollectionTable */
typedef uint8 Dem_Cfg_StorageKindOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_UpdateOfDataCollectionTable */
typedef boolean Dem_Cfg_UpdateOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollInd */
typedef uint8 Dem_Cfg_DataCollectionTableFfm2CollIndType;

/**   \brief  value based type definition for Dem_Cfg_ElementKindOfDataElementTable */
typedef uint8 Dem_Cfg_ElementKindOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_ElementSizeOfDataElementTable */
typedef uint8 Dem_Cfg_ElementSizeOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtInd */
typedef uint8 Dem_Cfg_DataElementTableCol2ElmtIndType;

/**   \brief  value based type definition for Dem_Cfg_DebounceContinuousOfDebounceTable */
typedef boolean Dem_Cfg_DebounceContinuousOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_DecrementStepSizeOfDebounceTable */
typedef sint8 Dem_Cfg_DecrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceAlgorithmOfDebounceTable */
typedef uint8 Dem_Cfg_EventDebounceAlgorithmOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceBehaviorOfDebounceTable */
typedef boolean Dem_Cfg_EventDebounceBehaviorOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_FailTimerCyclesOfDebounceTable */
typedef sint8 Dem_Cfg_FailTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_FailedThresholdOfDebounceTable */
typedef sint8 Dem_Cfg_FailedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_IncrementStepSizeOfDebounceTable */
typedef sint8 Dem_Cfg_IncrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpDownOfDebounceTable */
typedef boolean Dem_Cfg_JumpDownOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpDownValueOfDebounceTable */
typedef sint8 Dem_Cfg_JumpDownValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpUpOfDebounceTable */
typedef boolean Dem_Cfg_JumpUpOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpUpValueOfDebounceTable */
typedef sint8 Dem_Cfg_JumpUpValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_MaskedBitsOfDebounceTable */
typedef uint8 Dem_Cfg_MaskedBitsOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_PassTimerCyclesOfDebounceTable */
typedef sint8 Dem_Cfg_PassTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_PassedThresholdOfDebounceTable */
typedef sint8 Dem_Cfg_PassedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_StorageOfDebounceTable */
typedef boolean Dem_Cfg_StorageOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_DtcSeverityOfDtcTable */
typedef uint8 Dem_Cfg_DtcSeverityOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_FunctionalUnitOfDtcTable */
typedef uint8 Dem_Cfg_FunctionalUnitOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_ImmediateNvStorageOfDtcTable */
typedef boolean Dem_Cfg_ImmediateNvStorageOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_UdsDtcOfDtcTable */
typedef uint32 Dem_Cfg_UdsDtcOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionMaskOfEnableConditionTable */
typedef uint16 Dem_Cfg_EnableConditionMaskOfEnableConditionTableType;

/**   \brief  value based type definition for Dem_Cfg_EventAvailableDefault */
typedef boolean Dem_Cfg_EventAvailableDefaultType;

/**   \brief  value based type definition for Dem_Cfg_EventAvailableInVariant */
typedef boolean Dem_Cfg_EventAvailableInVariantType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceValue */
typedef sint16 Dem_Cfg_EventDebounceValueType;

/**   \brief  value based type definition for Dem_Cfg_EventQueueStatus */
typedef uint8 Dem_Cfg_EventQueueStatusType;

/**   \brief  value based type definition for Dem_Cfg_AgingAllowedOfEventTable */
typedef boolean Dem_Cfg_AgingAllowedOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_AgingCycleCounterThresholdOfEventTable */
typedef uint8 Dem_Cfg_AgingCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_AgingCycleIdOfEventTable */
typedef uint8 Dem_Cfg_AgingCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DebounceTableIdxOfEventTable */
typedef uint8 Dem_Cfg_DebounceTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DtcTableIdxOfEventTable */
typedef uint8 Dem_Cfg_DtcTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionTableIdxOfEventTable */
typedef uint8 Dem_Cfg_EnableConditionTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDestinationOfEventTable */
typedef uint8 Dem_Cfg_EventDestinationOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventFailureCycleCounterThresholdOfEventTable */
typedef uint8 Dem_Cfg_EventFailureCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventFailureCycleIdOfEventTable */
typedef uint8 Dem_Cfg_EventFailureCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventKindOfEventTable */
typedef uint8 Dem_Cfg_EventKindOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventLatchTFOfEventTable */
typedef boolean Dem_Cfg_EventLatchTFOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventPriorityOfEventTable */
typedef uint8 Dem_Cfg_EventPriorityOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventSignificanceOfEventTable */
typedef uint8 Dem_Cfg_EventSignificanceOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_ExtendedDataTableIdxOfEventTable */
typedef uint8 Dem_Cfg_ExtendedDataTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameNumTableEndIdxOfEventTable */
typedef uint8 Dem_Cfg_FreezeFrameNumTableEndIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameNumTableStartIdxOfEventTable */
typedef uint8 Dem_Cfg_FreezeFrameNumTableStartIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameNumTableUsedOfEventTable */
typedef boolean Dem_Cfg_FreezeFrameNumTableUsedOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTable */
typedef uint8 Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_HealingTargetOfEventTable */
typedef uint8 Dem_Cfg_HealingTargetOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_MaskedBitsOfEventTable */
typedef uint8 Dem_Cfg_MaskedBitsOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_NormalIndicatorTableEndIdxOfEventTable */
typedef uint8 Dem_Cfg_NormalIndicatorTableEndIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_NormalIndicatorTableStartIdxOfEventTable */
typedef uint8 Dem_Cfg_NormalIndicatorTableStartIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_NormalIndicatorTableUsedOfEventTable */
typedef boolean Dem_Cfg_NormalIndicatorTableUsedOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_OperationCycleIdOfEventTable */
typedef uint8 Dem_Cfg_OperationCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_MaxRecordSizeOfExtendedDataTable */
typedef uint8 Dem_Cfg_MaxRecordSizeOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_FilterReportedEvents */
typedef uint8 Dem_Cfg_FilterReportedEventsType;

/**   \brief  value based type definition for Dem_Cfg_FFNumberOfFreezeFrameNumTable */
typedef uint8 Dem_Cfg_FFNumberOfFreezeFrameNumTableType;

/**   \brief  value based type definition for Dem_Cfg_FFTriggerOfFreezeFrameNumTable */
typedef uint8 Dem_Cfg_FFTriggerOfFreezeFrameNumTableType;

/**   \brief  value based type definition for Dem_Cfg_FFUpdateOfFreezeFrameNumTable */
typedef boolean Dem_Cfg_FFUpdateOfFreezeFrameNumTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable */
typedef uint8 Dem_Cfg_DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable */
typedef uint8 Dem_Cfg_DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable */
typedef boolean Dem_Cfg_DataCollectionTableFfm2CollIndUsedOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_RecordSizeOfFreezeFrameTable */
typedef uint8 Dem_Cfg_RecordSizeOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_RecordSizeUdsOfFreezeFrameTable */
typedef uint8 Dem_Cfg_RecordSizeUdsOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableIdxOfGeneralObdInput */
typedef uint8 Dem_Cfg_DataElementTableIdxOfGeneralObdInputType;

/**   \brief  value based type definition for Dem_Cfg_GlobalSeverityMask */
typedef uint8 Dem_Cfg_GlobalSeverityMaskType;

/**   \brief  value based type definition for Dem_Cfg_MemoryBlockId */
typedef uint16 Dem_Cfg_MemoryBlockIdType;

/**   \brief  value based type definition for Dem_Cfg_MemoryCommitNumber */
typedef uint8 Dem_Cfg_MemoryCommitNumberType;

/**   \brief  value based type definition for Dem_Cfg_MemoryDataSize */
typedef uint16 Dem_Cfg_MemoryDataSizeType;

/**   \brief  value based type definition for Dem_Cfg_MemoryStatus */
typedef uint8 Dem_Cfg_MemoryStatusType;

/**   \brief  value based type definition for Dem_Cfg_BehaviorOfNormalIndicatorTable */
typedef uint8 Dem_Cfg_BehaviorOfNormalIndicatorTableType;

/**   \brief  value based type definition for Dem_Cfg_IdOfNormalIndicatorTable */
typedef uint8 Dem_Cfg_IdOfNormalIndicatorTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfCallbackDtcStatusChanged */
typedef uint8 Dem_Cfg_SizeOfCallbackDtcStatusChangedType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfDataElementTable */
typedef uint8 Dem_Cfg_SizeOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventDebounceValue */
typedef uint8 Dem_Cfg_SizeOfEventDebounceValueType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventInternalStatus */
typedef uint8 Dem_Cfg_SizeOfEventInternalStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventQueueStatus */
typedef uint8 Dem_Cfg_SizeOfEventQueueStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventTable */
typedef uint8 Dem_Cfg_SizeOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfFilterReportedEvents */
typedef uint8 Dem_Cfg_SizeOfFilterReportedEventsType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfIndicatorBlinking */
typedef uint8 Dem_Cfg_SizeOfIndicatorBlinkingType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfIndicatorContinuous */
typedef uint8 Dem_Cfg_SizeOfIndicatorContinuousType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfMemoryCommitNumber */
typedef uint8 Dem_Cfg_SizeOfMemoryCommitNumberType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfMemoryStatus */
typedef uint8 Dem_Cfg_SizeOfMemoryStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfPrimaryChronology */
typedef uint8 Dem_Cfg_SizeOfPrimaryChronologyType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCStructTypes  Dem_Cfg Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Dem_Cfg_CycleIdTable */
typedef struct sDem_Cfg_CycleIdTableType
{
  uint8 Dem_Cfg_CycleIdTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_CycleIdTableType;

/**   \brief  type used in Dem_Cfg_DataCollectionTable */
typedef struct sDem_Cfg_DataCollectionTableType
{
  Dem_Cfg_IdNumberOfDataCollectionTableType IdNumberOfDataCollectionTable;
  Dem_Cfg_CollectionSizeOfDataCollectionTableType CollectionSizeOfDataCollectionTable;
  Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTableType DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
  Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTableType DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
  Dem_Cfg_MaskedBitsOfDataCollectionTableType MaskedBitsOfDataCollectionTable;  /**< contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable */
  Dem_Cfg_StorageKindOfDataCollectionTableType StorageKindOfDataCollectionTable;
} Dem_Cfg_DataCollectionTableType;

/**   \brief  type used in Dem_Cfg_DataElementTable */
typedef struct sDem_Cfg_DataElementTableType
{
  Dem_Cfg_ElementKindOfDataElementTableType ElementKindOfDataElementTable;  /**< DataElement kind, returned by Dem_Cfg_DataCallbackType() */
  Dem_Cfg_ElementSizeOfDataElementTableType ElementSizeOfDataElementTable;  /**< Size of data element in Byte. */
  Dem_ReadDataFPtrType ReadDataFuncOfDataElementTable;  /**< C-function for getting the data. Its signature depends on ElementKind: With value 28U or 30U use: Std_ReturnType (*)(uint8* Buffer); With value 29U or 31U use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId);. */
} Dem_Cfg_DataElementTableType;

/**   \brief  type used in Dem_Cfg_DebounceTable */
typedef struct sDem_Cfg_DebounceTableType
{
  Dem_Cfg_DecrementStepSizeOfDebounceTableType DecrementStepSizeOfDebounceTable;  /**< (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_FailedThresholdOfDebounceTableType FailedThresholdOfDebounceTable;  /**< DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_IncrementStepSizeOfDebounceTableType IncrementStepSizeOfDebounceTable;  /**< DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_PassedThresholdOfDebounceTableType PassedThresholdOfDebounceTable;  /**< DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_EventDebounceAlgorithmOfDebounceTableType EventDebounceAlgorithmOfDebounceTable;  /**< Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass */
  Dem_Cfg_MaskedBitsOfDebounceTableType MaskedBitsOfDebounceTable;  /**< contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable */
} Dem_Cfg_DebounceTableType;

/**   \brief  type used in Dem_Cfg_DtcTable */
typedef struct sDem_Cfg_DtcTableType
{
  Dem_Cfg_UdsDtcOfDtcTableType UdsDtcOfDtcTable;
} Dem_Cfg_DtcTableType;

/**   \brief  type used in Dem_Cfg_EnableConditionTable */
typedef struct sDem_Cfg_EnableConditionTableType
{
  Dem_Cfg_EnableConditionMaskOfEnableConditionTableType EnableConditionMaskOfEnableConditionTable;  /**< Bit mask combination for EnableConditionGroup. 0x01 is internally used, individual bits are: [DemEnableConditionK=0x0002, DemEnableConditionA=0x0004, DemEnableConditionB=0x0008, DemEnableConditionC=0x0010, DemEnableConditionD=0x0020, DemEnableConditionE=0x0040, DemEnableConditionF=0x0080, DemEnableConditionG=0x0100, DemEnableConditionH=0x0200, DemEnableConditionI=0x0400, DemEnableConditionJ=0x0800] */
} Dem_Cfg_EnableConditionTableType;

/**   \brief  type used in Dem_Cfg_EventTable */
typedef struct sDem_Cfg_EventTableType
{
  Dem_Cfg_AgingCycleCounterThresholdOfEventTableType AgingCycleCounterThresholdOfEventTable;  /**< DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass, if AgingAllowedOfEventTable==FALSE we use '255' here, too. */
  Dem_Cfg_AgingCycleIdOfEventTableType AgingCycleIdOfEventTable;  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef */
  Dem_Cfg_DtcTableIdxOfEventTableType DtcTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_DtcTable */
  Dem_Cfg_EnableConditionTableIdxOfEventTableType EnableConditionTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_EnableConditionTable */
  Dem_Cfg_FreezeFrameNumTableEndIdxOfEventTableType FreezeFrameNumTableEndIdxOfEventTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable */
  Dem_Cfg_FreezeFrameNumTableStartIdxOfEventTableType FreezeFrameNumTableStartIdxOfEventTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable */
  Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTableType FreezeFrameTableStdFFIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable */
  Dem_Cfg_MaskedBitsOfEventTableType MaskedBitsOfEventTable;  /**< contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable, Dem_Cfg_FreezeFrameNumTableUsedOfEventTable, Dem_Cfg_NormalIndicatorTableUsedOfEventTable */
  Dem_Cfg_NormalIndicatorTableEndIdxOfEventTableType NormalIndicatorTableEndIdxOfEventTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_NormalIndicatorTable */
  Dem_Cfg_NormalIndicatorTableStartIdxOfEventTableType NormalIndicatorTableStartIdxOfEventTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_NormalIndicatorTable */
} Dem_Cfg_EventTableType;

/**   \brief  type used in Dem_Cfg_ExtendedDataTable */
typedef struct sDem_Cfg_ExtendedDataTableType
{
  uint8 Dem_Cfg_ExtendedDataTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_ExtendedDataTableType;

/**   \brief  type used in Dem_Cfg_FreezeFrameNumTable */
typedef struct sDem_Cfg_FreezeFrameNumTableType
{
  uint8 Dem_Cfg_FreezeFrameNumTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_FreezeFrameNumTableType;

/**   \brief  type used in Dem_Cfg_FreezeFrameTable */
typedef struct sDem_Cfg_FreezeFrameTableType
{
  Dem_Cfg_DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTableType DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd */
  Dem_Cfg_DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTableType DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd */
  Dem_Cfg_RecordSizeOfFreezeFrameTableType RecordSizeOfFreezeFrameTable;  /**< Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements). */
  Dem_Cfg_RecordSizeUdsOfFreezeFrameTableType RecordSizeUdsOfFreezeFrameTable;  /**< Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message). */
} Dem_Cfg_FreezeFrameTableType;

/**   \brief  type used in Dem_Cfg_GeneralObdInput */
typedef struct sDem_Cfg_GeneralObdInputType
{
  uint8 Dem_Cfg_GeneralObdInputNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_GeneralObdInputType;

/**   \brief  type used in Dem_Cfg_NormalIndicatorTable */
typedef struct sDem_Cfg_NormalIndicatorTableType
{
  Dem_Cfg_IdOfNormalIndicatorTableType IdOfNormalIndicatorTable;  /**< DemIndicatorID referenced by DemEventClass/DemIndicatorAttribute/DemIndicatorRef */
} Dem_Cfg_NormalIndicatorTableType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCRootValueTypes  Dem_Cfg Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Dem_PCConfig */
typedef struct sDem_PCConfigType
{
  uint8 Dem_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_PCConfigType;

typedef Dem_PCConfigType Dem_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CallbackDtcStatusChanged
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_DtcStatusChangedFPtrType, DEM_CONST) Dem_Cfg_CallbackDtcStatusChanged[1];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
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
extern CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[20];
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
extern CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableFfm2CollInd[19];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
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
extern CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[20];
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
extern CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2];
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
extern CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[33];
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
extern CONST(Dem_Cfg_EnableConditionTableType, DEM_CONST) Dem_Cfg_EnableConditionTable[12];
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
extern CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[64];
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
extern CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[2];
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
extern CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[42];
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
extern CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[42];
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
extern CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[42];
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
extern CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit;
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
extern CONST(Dem_Cfg_NormalIndicatorTableType, DEM_CONST) Dem_Cfg_NormalIndicatorTable[3];
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
extern CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit;
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
extern VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
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
extern VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_DEM_18.4 */
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
extern volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[64];
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
extern volatile VAR(Dem_Cfg_EventInternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[64];
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
extern volatile VAR(Dem_Cfg_EventQueueStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventQueueStatus[64];
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
extern VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[8];
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
extern VAR(Dem_Cfg_IndicatorBlinkingType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorBlinking[4];
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
extern VAR(Dem_Cfg_IndicatorContinuousType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorContinuous[4];
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
extern volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[42];
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
extern VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[42];
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
extern VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[40];
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_10;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_11;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_12;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_13;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_14;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_15;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_16;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_17;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_18;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_19;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_20;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_21;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_22;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_23;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_24;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_25;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_26;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_27;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_28;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_29;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_30;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_31;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_32;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_33;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_34;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_35;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_36;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_37;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_38;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_39;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_8;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_9;
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
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer;
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
extern VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
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
extern FUNC(uint8, DEM_CODE) Dem_Cfg_FindGroupMaskFromUdsDtc(uint32 groupDtcNumber);
 
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
extern FUNC(uint8, DEM_CODE) Dem_Cfg_EventGroupMask(uint16 eventId);
 
#define DEM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  Justification of MISRA deviations
**********************************************************************************************************************/


#endif  /* DEM_LCFG_H */
/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.h     [Gm (Vector), VARIANT-PRE-COMPILE]
**********************************************************************************************************************/

