/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : Os.h
* Module Description: This file contains a stub header for component unit test and static analysis usage
* Project           : CBD
* Author            : Kathleen Creager
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  -------------------------------------------------------------------------     ----------
* 10/15/15  1        KMC       Modified from the stub header in AR200A, to add the items needed for          
*                              CM101A_ExcpnHndlg  
**********************************************************************************************************************/
#ifndef OS_H
#define OS_H

extern uint16 OSErrorGetosCANError(void);

/*
 * Syntax of errornumbers:
 * 0xgfee
 *   ||+--- consecutive error number
 *   |+---- number of function in the function group
 *   +----- number of function group
 */

/* Group: Task management 1 */
/*    function ActivateTask:           AT: 1 */
/*    function TerminateTask:          TT: 2 */
/*    function ChainTask:              HT: 3 */
/*    function Schedule:               SH: 4 */
/*    function GetTaskState:           GS: 5 */
/*    function GetTaskID:              GI: 6 */
/*    function osMissingTerminateError MT: 7 */

#define osdErrATWrongTaskID           0x1101U
#define osdErrATWrongTaskPrio         0x1102U
#define osdErrATMultipleActivation    0x1103U
#define osdErrATIntAPIDisabled        0x1104U
#define osdErrATAlarmMultipleActivation 0x1105U
#define osdErrATNoAccess              0x1106U
#define osdErrATCallContext           0x1107U
#define osdErrATWrongAppState         0x1108U

#define osdErrTTDisabledInterrupts    0x1201U
#define osdErrTTResourcesOccupied     0x1202U
#define osdErrTTNotActivated          0x1203U
#define osdErrTTOnInterruptLevel      0x1204U
#define osdErrTTNoImmediateTaskSwitch 0x1205U /* TR:SPMF12:0011 */
#define osdErrTTCallContext           0x1206U
#define osdErrTTWrongActiveTaskID     0x1208U

#define osdErrHTInterruptsDisabled    0x1301U
#define osdErrHTResourcesOccupied     0x1302U
#define osdErrHTWrongTaskID           0x1303U
#define osdErrHTNotActivated          0x1304U
#define osdErrHTMultipleActivation    0x1305U
#define osdErrHTOnInterruptLevel      0x1306U
#define osdErrHTNoImmediateTaskSwitch 0x1308U /* TR:SPMF12:0012 */
#define osdErrHTCallContext           0x1309U
#define osdErrHTNoAccess              0x130AU
#define osdErrHTWrongAppState         0x130BU
#define osdErrHTWrongActiveTaskID     0x130DU

#define osdErrSHInterruptsDisabled    0x1401U
#define osdErrSHOnInterruptLevel      0x1402U
#define osdErrSHScheduleNotAllowed    0x1403U
#define osdErrSHResourcesOccupied     0x1405U
#define osdErrSHCallContext           0x1406U
#define osdErrSHNoReadyTaskFound      0x1408U
#define osdErrSHWrongActiveTaskID     0x1409U

#define osdErrGSWrongTaskID           0x1501U
#define osdErrGSIntAPIDisabled        0x1502U
#define osdErrGSIllegalAddr           0x1503U
#define osdErrGSCallContext           0x1504U
#define osdErrGSNoAccess              0x1505U
#define osdErrGSWrongAppState         0x1506U
#define osdErrGSOddInvocation         0x1507U

#define osdErrGIIntAPIDisabled        0x1601U
#define osdErrGIIllegalAddr           0x1602U
#define osdErrGICallContext           0x1603U
#define osdErrGIOddInvocation         0x1604U

#define osdErrMTMissingTerminateTask  0x1701U


/* Group: Interrupt handling 2 */
/*    function EnableAllInterrupts         EA: 4 */
/*    function DisableAllInterrupts        DA: 5 */
/*    function ResumeOSInterrupts          RI: 6 */
/*    function SuspendOSInterrupts         SI: 7 */
/*    function osUnhandledException        UE: 8 */
/*    function osSaveDisableLevelNested    SD: 9 */
/*    function osRestoreEnableLevelNested  RE: A */
/*    function osSaveDisableGlobalNested   SG: B */
/*    function osRestoreEnableGlobalNested RG: C */
/*    function ResumeAllInterrupts         RA: D */
/*    function SuspendAllInterrupts        SA: E */
/*    function GetISRID                    II: 2 */
/*    function Interrupt Exit              IX: 3 */

#define osdErrEAIntAPIWrongSequence   0x2401U
#define osdErrDAIntAPIDisabled        0x2501U

#define osdErrUEUnhandledException    0x2801U  /* TR:SPMF78:0004 */

#define osdErrSDWrongCounter          0x2901U
#define osdErrREWrongCounter          0x2A01U

#define osdErrSGWrongCounter          0x2B01U
#define osdErrRGWrongCounter          0x2C01U

#define osdErrIIIntAPIDisabled        0x2201U
#define osdErrIICallContext           0x2202U

#define osdErrIXResourcesOccupied     0x2301U
#define osdErrIXIntAPIDisabled        0x2302U


/* Group: Resource management 3 */
/*    function GetResource            GR:  1 */
/*    function ReleaseResource        RR:  2 */

#define osdErrGRWrongResourceID       0x3101U
#define osdErrGRPriorityOccupied      0x3102U
#define osdErrGRResourceOccupied      0x3103U
#define osdErrGRNoAccessRights        0x3104U /* TR:SPMF12:0009 */ /* TR:SPMF12:0010 */
#define osdErrGRWrongPrio             0x3105U
#define osdErrGRIntAPIDisabled        0x3106U
#define osdErrGRNoAccess              0x3107U
#define osdErrGRCallContext           0x3108U
#define osdErrGRISRNoAccessRights     0x3109U
#define osdErrGRWrongTaskID           0x310BU

#define osdErrRRWrongResourceID       0x3201U
#define osdErrRRCeilingPriorityNotSet 0x3202U
#define osdErrRRWrongTask             0x3203U
#define osdErrRRWrongPrio             0x3204U
#define osdErrRRNotOccupied           0x3206U
#define osdErrRRWrongSequence         0x3207U
#define osdErrRRIntAPIDisabled        0x3208U
#define osdErrRRNoAccess              0x3209U
#define osdErrRRCallContext           0x320AU
#define osdErrRRISRNoAccessRights     0x320BU
#define osdErrRRNoReadyTaskFound      0x320DU
#define osdErrRRWrongTaskID           0x320EU
#define osdErrRRWrongHighRdyPrio      0x320FU


/* Group: Event control 4 */
/*    function SetEvent               SE:  1 */
/*    function ClearEvent             CE:  2 */
/*    function GetEvent               GE:  3 */
/*    function WaitEvent              WE:  4 */

#define osdErrSEWrongTaskID           0x4101U
#define osdErrSENotExtendedTask       0x4102U
#define osdErrSETaskSuspended         0x4103U
#define osdErrSEWrongTaskPrio         0x4104U
#define osdErrSEIntAPIDisabled        0x4105U
#define osdErrSECallContext           0x4106U
#define osdErrSENoAccess              0x4107U
#define osdErrSEWrongAppState         0x4108U

#define osdErrCENotExtendedTask       0x4201U
#define osdErrCEOnInterruptLevel      0x4202U
#define osdErrCEIntAPIDisabled        0x4203U
#define osdErrCECallContext           0x4204U

#define osdErrGEWrongTaskID           0x4301U
#define osdErrGENotExtendedTask       0x4302U
#define osdErrGETaskSuspended         0x4303U
#define osdErrGEIntAPIDisabled        0x4304U
#define osdErrGEIllegalAddr           0x4305U
#define osdErrGECallContext           0x4306U
#define osdErrGENoAccess              0x4307U
#define osdErrGEWrongAppState         0x4308U
#define osdErrGEOddInvocation         0x4309U

#define osdErrWENotExtendedTask       0x4401U
#define osdErrWEResourcesOccupied     0x4402U
#define osdErrWEInterruptsDisabled    0x4403U
#define osdErrWEOnInterruptLevel      0x4404U
#define osdErrWECallContext           0x4405U


/* Group: Alarms 5 */
/*    function GetAlarmBase           GB:  1 */
/*    function GetAlarm               GA:  2 */
/*    function SetRelAlarm            SA:  3 */
/*    function SetAbsAlarm            SL:  4 */
/*    function CancelAlarm            CA:  5 */
/*    function osWorkAlarm            WA:  6 */

#define osdErrGBWrongAlarmID          0x5101U
#define osdErrGBIntAPIDisabled        0x5102U
#define osdErrGBIllegalAddr           0x5103U
#define osdErrGBCallContext           0x5104U
#define osdErrGBNoAccess              0x5105U
#define osdErrGBWrongAppState         0x5106U

#define osdErrGAWrongAlarmID          0x5201U
#define osdErrGANotActive             0x5202U
#define osdErrGAIntAPIDisabled        0x5203U
#define osdErrGAIllegalAddr           0x5204U
#define osdErrGACallContext           0x5205U
#define osdErrGANoAccess              0x5206U
#define osdErrGAWrongAppState         0x5207U

#define osdErrSAWrongAlarmID          0x5301U
#define osdErrSAAlreadyActive         0x5302U
#define osdErrSAWrongCycle            0x5303U
#define osdErrSAWrongDelta            0x5304U
#define osdErrSAIntAPIDisabled        0x5305U
#define osdErrSAZeroIncrement         0x5306U
#define osdErrSACallContext           0x5307U
#define osdErrSANoAccess              0x5308U
#define osdErrSAWrongAppState         0x5309U

#define osdErrSLWrongAlarmID          0x5401U
#define osdErrSLAlreadyActive         0x5402U
#define osdErrSLWrongCycle            0x5403U
#define osdErrSLWrongStart            0x5404U
#define osdErrSLIntAPIDisabled        0x5405U
#define osdErrSLCallContext           0x5406U
#define osdErrSLNoAccess              0x5407U
#define osdErrSLWrongAppState         0x5408U

#define osdErrCAWrongAlarmID          0x5501U
#define osdErrCANotActive             0x5502U
#define osdErrCAIntAPIDisabled        0x5503U
#define osdErrCAAlarmInternal         0x5504U /* TR:SPMF12:0008 */
#define osdErrCACallContext           0x5505U
#define osdErrCANoAccess              0x5506U
#define osdErrCAWrongAppState         0x5507U

#define osdErrWAWrongIDonHeap         0x5601U
#define osdErrWAHeapOverflow          0x5602U
#define osdErrWAUnknownAction         0x5603U
#define osdErrWAWrongCounterID        0x5604U


/* Group: Operating system execution control 6 */
/*    function osCheckStackOverflow      SO:  1 */
/*    function osGetStackUsage           SU:  3 */
/*    function osCheckLibraryVers..      CL:  4 */
/*    function osErrorHook               EH:  5 */
/*    function StartOS                   ST:  6 */
/*    function osSchedInsertTask         QI:  7 */
/*    function osSchedRemoveRunningTask  QR:  8 */
/*    function osSchedOnHomePrio         QS:  9 */

#define osdErrSOStackOverflow         0x6101U

#define osdErrSUWrongTaskID           0x6301U

#define osdErrCLWrongLibrary          0x6401U

#define osdErrEHInterruptsEnabled     0x6501U

#define osdErrSTMemoryError           0x6601U /* TR:SPMF12:0006 */
#define osdErrSTNoImmediateTaskSwitch 0x6602U
#define osdErrSTWrongAppMode          0x6603U
#define osdErrSTConfigCRCError        0x6604U
#define osdErrSTConfigMagicNrError    0x6606U
#define osdErrSTInvalidMajorVersion   0x6607U
#define osdErrSTInvalidMinorVersion   0x6608U
#define osdErrSTInvalidSTCfg          0x6609U

#define osdErrQIWrongTaskPrio         0x6701U

#define osdErrQRInterruptsEnabled     0x6801U /* TR:SPMF12:0007 */
#define osdErrQRWrongTaskID           0x6802U
#define osdErrQRWrongTaskPrio         0x6803U
#define osdErrQRWrongHighRdyPrio      0x6804U

#define osdErrQSInterruptsEnabled     0x6901U /* TR:SPMF12:0007 */
#define osdErrQSNoReadyTaskFound      0x6902U
#define osdErrQSWrongPriority         0x6903U

#define osdErrQOWrongTaskID           0x6A01U

/* Group: Schedule Table control 7 */
/*    function StartScheduleTableRel      SR:  1 */
/*    function StartScheduleTableAbs      SS:  2 */
/*    function StopScheduleTable          SP:  3 */
/*    function GetScheduleTableStatus     SG:  4 */
/*    function NextScheduleTable          SN:  5 */
/*    function osWorkScheduleTable        WS:  6 */
/*    function SyncScheduleTable          SY:  7 */
/*    function SetScheduleTableAsync      AY:  8 */
/*    function StartScheduleTableSynchron TS:  C */

#define osdErrSRWrongID                0x7101U
#define osdErrSRAlreadyRunningOrNext   0x7102U
#define osdErrSRZeroOffset             0x7103U
#define osdErrSROffsetTooBig           0x7104U
#define osdErrSRIntAPIDisabled         0x7105U
#define osdErrSRCallContext            0x7106U
#define osdErrSRNoAccess               0x7107U
#define osdErrSRImpliciteSync          0x7109U
#define osdErrSRWrongAppState          0x710AU

#define osdErrSSWrongID                0x7201U
#define osdErrSSAlreadyRunningOrNext   0x7202U
#define osdErrSSTickvalueTooBig        0x7203U
#define osdErrSSIntAPIDisabled         0x7204U
#define osdErrSSCallContext            0x7205U
#define osdErrSSNoAccess               0x7206U
#define osdErrSSWrongAppState          0x7207U

#define osdErrSPWrongID                0x7301U
#define osdErrSPNotRunning             0x7302U
#define osdErrSPIntAPIDisabled         0x7303U
#define osdErrSPCallContext            0x7304U
#define osdErrSPNoAccess               0x7305U
#define osdErrSPUnknownCase            0x7306U
#define osdErrSPWrongAppState          0x7307U

#define osdErrSGWrongID                0x7401U
#define osdErrSGIntAPIDisabled         0x7402U
#define osdErrSGCallContext            0x7403U
#define osdErrSGNoAccess               0x7404U
#define osdErrSGIllegalAddr            0x7405U
#define osdErrSGWrongAppState          0x7406U
#define osdErrSGOddInvocation          0x7407U

#define osdErrSNWrongCurrentID         0x7501U
#define osdErrSNWrongNextID            0x7502U
#define osdErrSNNotRunning             0x7503U
#define osdErrSNAlreadyRunningOrNext   0x7504U
#define osdErrSNDifferentCounters      0x7505U
#define osdErrSNIntAPIDisabled         0x7506U
#define osdErrSNCallContext            0x7507U
#define osdErrSNNoAccess               0x7508U
#define osdErrSNWrongAppState          0x7509U
#define osdErrSNSyncStrategyMismatch   0x750AU

#define osdErrWSUnknownAction          0x7601U
#define osdErrWSUnknownReaction        0x7602U
#define osdErrWSWrongID                0x7603U

#define osdErrSYCallContext            0x7701U
#define osdErrSYWrongID                0x7702U
#define osdErrSYNoAccess               0x7703U
#define osdErrSYIntAPIDisabled         0x7704U
#define osdErrSYSTNotRunning           0x7705U
#define osdErrSYGlobalTimeTooBig       0x7706U
#define osdErrSYSyncKindNotExplicit    0x7707U
#define osdErrSYWrongAppState          0x7708U

#define osdErrAYCallContext            0x7801U
#define osdErrAYWrongID                0x7802U
#define osdErrAYNoAccess               0x7803U
#define osdErrAYIntAPIDisabled         0x7804U
#define osdErrAYWrongAppState          0x7805U
#define osdErrAYNotRunning             0x7806U

#define osdErrTSCallContext            0x7C01U
#define osdErrTSWrongID                0x7C02U
#define osdErrTSNoAccess               0x7C03U
#define osdErrTSIntAPIDisabled         0x7C04U
#define osdErrTSSTAlreadyRunning       0x7C05U
#define osdErrTSGlobalTimeTooBig       0x7C06U
#define osdErrTSSyncKindNotExplicit    0x7C08U
#define osdErrTSWrongAppState          0x7C09U


/* Group: Counter API 8 */
/*    function IncrementCounter         IC:  1 */
/*    function osGetCounterValue        GC:  3 */
/*    function osGetElapsedValue        GV:  4 */
#define osdErrICWrongCounterID        0x8101U
#define osdErrICIntAPIDisabled        0x8102U
#define osdErrICCallContext           0x8103U
#define osdErrICNoAccess              0x8104U
#define osdErrICWrongAppState         0x8105U

#define osdErrGCCallContext           0x8301U
#define osdErrGCIntAPIDisabled        0x8302U
#define osdErrGCWrongID               0x8303U
#define osdErrGCNoAccess              0x8304U
#define osdErrGCIllegalAddr           0x8305U
#define osdErrGCWrongAppState         0x8306U
#define osdErrGCOddInvocation         0x8307U

#define osdErrGVCallContext           0x8401U
#define osdErrGVIntAPIDisabled        0x8402U
#define osdErrGVWrongID               0x8403U
#define osdErrGVNoAccess              0x8404U
#define osdErrGVIllegalAddr           0x8405U
#define osdErrGVWrongAppState         0x8406U
#define osdErrGVIllegalValue          0x8407U
#define osdErrGVIllegalPointers       0x8408U
#define osdErrGVOddInvocation         0x8409U


/* Group: Timing Protection and Timing Measurement 9 */
/*    function osGetTaskMinInterArrivalTime   TM:  0 */
/*    function BlockingTimeMonitoring         BM:  7 */
/*    function osGetTaskMaxExecutionTime      TE:  8 */
/*    function osGetISRMaxExecutionTime       IE:  9 */
/*    function osGetTaskMaxBlockingTime       TB:  A */
/*    function osGetISRMaxBlockingTime        IB:  B */
/*    function ExecutionTimeMonitoring        ET:  D */
/*    function osGetISRMinInterArrivalTime    MI:  F */

#define osdErrTMWrongTaskID            0x9001U
#define osdErrTMNoAccess               0x9002U
#define osdErrTMIllegalAddr            0x9003U
#define osdErrTMWrongAppState          0x9004U

#define osdErrBMResAlreadyMeasured     0x9702U
#define osdErrBMInvalidProcessInStart  0x9703U
#define osdErrBMInvalidProcessInStop   0x9704U
#define osdErrBMInvalidResource        0x9705U

#define osdErrTEWrongTaskID            0x9801U
#define osdErrTENoAccess               0x9802U
#define osdErrTEIllegalAddr            0x9803U
#define osdErrTEWrongAppState          0x9804U

#define osdErrIEWrongISRID             0x9901U
#define osdErrIENoAccess               0x9902U
#define osdErrIEIllegalAddr            0x9903U
#define osdErrIEWrongAppState          0x9904U

#define osdErrTBWrongTaskID            0x9A01U
#define osdErrTBWrongBlockType         0x9A02U
#define osdErrTBWrongResourceID        0x9A03U
#define osdErrTBNoAccessToTask         0x9A04U
#define osdErrTBNoAccessToResource     0x9A05U
#define osdErrTBIllegalAddr            0x9A06U
#define osdErrTBWrongAppState          0x9A07U

#define osdErrIBWrongISRID             0x9B01U
#define osdErrIBWrongBlockType         0x9B02U
#define osdErrIBWrongResourceID        0x9B03U
#define osdErrIBNoAccessToISR          0x9B04U
#define osdErrIBNoAccessToResource     0x9B05U
#define osdErrIBIllegalAddr            0x9B06U
#define osdErrIBWrongAppState          0x9B07U

#define osdErrETNoCurrentProcess       0x9D01U

#define osdErrMIWrongISRID             0x9F01U
#define osdErrMINoAccess               0x9F02U
#define osdErrMIIllegalAddr            0x9F03U
#define osdErrMIWrongAppState          0x9F04U

/* Group: Platform specific error codes A */
/* KB begin osekHwErrorCodes (overwritten) */
#define osdErrYOSystemStackOverflow       0xA101U
#define osdErrYOTaskStackOverflow         0xA102U
#define osdErrYOISRStackOverflow          0xA103U

#define osdErrSCWrongSysCallParameter     0xA201U
                                          
#define osdErrDPStartValidContext         0xA401U
#define osdErrDPResumeInvalidContext      0xA402U
#define osdErrDPInvalidTaskIndex          0xA403U
#define osdErrDPInvalidApplicationID      0xA404U

#define osdErrEXMemoryViolation           0xA501U
#define osdErrEXPrivilegedInstruction     0xA502U                                          

#define osdErrSUInvalidTaskIndex          0xA601U
#define osdErrSUInvalidIsrIndex           0xA602U
#define osdErrSUInvalidIsrPrioLevel       0xA603U
                                          
#define osdErrCIInvalidIsrIndex           0xA701U
#define osdErrCIInvalidIsrPrioLevel       0xA702U
#define osdErrCIInvalidApplicationID      0xA703U
#define osdErrCIMissingIntRequest         0xA704U
#define osdErrCIInterruptIsMasked         0xA705U
#define osdErrCIWrongIntPriority          0xA706U
                                          
#define osdErrPIGetIMRInvalidIndex        0xA801U
#define osdErrPISetIMRInvalidIndex        0xA802U
#define osdErrPIClearIMRInvalidIndex      0xA803U
#define osdErrPIWriteIMR8InvalidAddr      0xA804U
#define osdErrPIWriteIMR16InvalidAddr     0xA805U
#define osdErrPIWriteIMR32InvalidAddr     0xA806U
#define osdErrPISetICRMaskInvalidAddr     0xA807U
#define osdErrPIClearICRMaskInvalidAddr   0xA808U
#define osdErrPISetICRReqInvalidAddr      0xA809U
#define osdErrPIClearICRReqInvalidAddr    0xA80AU
#define osdErrPIWriteICR8InvalidAddr      0xA80BU
#define osdErrPIWriteICR16InvalidAddr     0xA80CU
#define osdErrPIWriteICRxLoInvalidIndex   0xA80DU
#define osdErrPIWriteICRxHiInvalidIndex   0xA80EU
#define osdErrPIWriteICRx16InvalidIndex   0xA80FU

#define osdErrCRInvalidSettingOSTM        0xA901U
#define osdErrCRInvalidSettingMPU         0xA902U

#define osdErrUEUnhandledCoreException    0xAA01U
#define osdErrUEUnhandledDirectBranch     0xAA02U
/* KB end osekHwErrorCodes */


/* Group: Application API B */
/*    function osGetApplicationState    AS:  1 */
/*    function osAllowAccess            AA:  2 */
/*    function TerminateApplication     TA:  4 */

#define osdErrASCallContext           0xB101U
#define osdErrASIntAPIDisabled        0xB102U
#define osdErrASWrongAppID            0xB103U
#define osdErrASOddInvocation         0xB104U

#define osdErrAACallContext           0xB201U
#define osdErrAAIntAPIDisabled        0xB202U
#define osdErrAAWrongState            0xB203U

#define osdErrTAWrongRestartOption    0xB401U
#define osdErrTACallContext           0xB402U
#define osdErrTAIntAPIDisabled        0xB403U
#define osdErrTAWrongAppID            0xB404U
#define osdErrTANoAccess              0xB405U
#define osdErrTAWrongAppState         0xB406U
#define osdErrTAInvalidTaskState      0xB407U


/* Group: Semaphores C */
/*    function osGetSemaphore         GM:  1 */
/*    function osReleaseSemaphore     RS:  2 */

#define osdErrGMWrongSemaphoreID      0xC101U
#define osdErrGMOnInterruptLevel      0xC102U
#define osdErrGMNotExtendedTask       0xC103U
#define osdErrGMResourcesOccupied     0xC104U
#define osdErrGMInterruptsDisabled    0xC105U

#define osdErrRSWrongSemaphoreID      0xC201U
#define osdErrRSAlreadyReleased       0xC203U
#define osdErrRSWrongTaskPrio         0xC204U
#define osdErrRSInterruptsDisabled    0xC205U


/* Group: Additional functions E */
/*    function CallTrustedFunction        CT:  3 */
/*    function CallNonTrustedFunction     NT:  4 */
/*    PeripheralAPI functions             PA:  5 */

#define osdErrCTWrongFctIdx           0xE301U
#define osdErrCTCallContext           0xE302U
#define osdErrCTIntAPIDisabled        0xE303U

#define osdErrNTWrongFctIdx           0xE404U
#define osdErrNTCallContext           0xE405U
#define osdErrNTIntAPIDisabled        0xE406U

#define osdErrPAInvalidAreaIndex      0xE501U
#define osdErrPANoAccessRight         0xE502U
#define osdErrPAInvalidAddress        0xE503U

#endif  /* OS_H */
