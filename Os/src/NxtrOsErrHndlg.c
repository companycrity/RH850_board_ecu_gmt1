/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrOsErrHndlg.c
* Module Description: Nexteer OS Error Handling function
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/04/16  1        LWW       Initial Version                                                                 EA4#3175
**********************************************************************************************************************/

#include "Std_Types.h"
#include "Os.h"
#include "CDD_ExcpnHndlg.h"
#include "NxtrOsErrHndlg.h"

/*****************************************************************************
  * Name:        NxtrOsErrHndlg
  * Description: OS Error Handling Function
  * Called by:   OS Error and Protection Hooks
  * Inputs:      None 
  * Outputs:     None
*****************************************************************************/
void NxtrOsErrHndlg(StatusType Error)
{	
	switch (OSErrorGetosCANError())
	{
		case osdErrUEUnhandledException:
		case osdErrUEUnhandledCoreException:
		case osdErrUEUnhandledDirectBranch:
			/* Unhandled Exceptions */
			ProcUkwnExcpnErr((uint32)OSErrorGetosCANError());
		break;
		case osdErrEXMemoryViolation:
			/* MPU Violations */
			ProcMpuExcpnErr((uint32)OSErrorGetosCANError());
		break;
		case osdErrEXPrivilegedInstruction:
			/* Privileged Instruction Exceptions */
			ProcPrvlgdInstrExcpnErr((uint32)OSErrorGetosCANError());
		break;
		case osdErrATWrongTaskPrio:
		case osdErrTTNotActivated:
		case osdErrTTNoImmediateTaskSwitch:
		case osdErrTTWrongActiveTaskID:
		case osdErrHTNotActivated:
		case osdErrHTNoImmediateTaskSwitch:
		case osdErrHTWrongActiveTaskID:
		case osdErrSHScheduleNotAllowed:
		case osdErrSHWrongActiveTaskID:
		case osdErrGSOddInvocation:
		case osdErrGIOddInvocation:
		case osdErrMTMissingTerminateTask:
		case osdErrEAIntAPIWrongSequence:
		case osdErrDAIntAPIDisabled:
		case osdErrSDWrongCounter:
		case osdErrREWrongCounter:
		case osdErrSGWrongCounter:
		case osdErrRGWrongCounter:
		case osdErrGRPriorityOccupied:
		case osdErrGRNoAccessRights:
		case osdErrGRWrongTaskID:
		case osdErrRRCeilingPriorityNotSet:
		case osdErrRRWrongTask:
		case osdErrRRNoReadyTaskFound:
		case osdErrRRWrongTaskID:
		case osdErrRRWrongHighRdyPrio:
		case osdErrSEWrongTaskPrio:
		case osdErrGEOddInvocation:
		case osdErrCAAlarmInternal:
		case osdErrWAWrongIDonHeap:
		case osdErrWAHeapOverflow:
		case osdErrWAUnknownAction:
		case osdErrWAWrongCounterID:
		case osdErrSOStackOverflow:
		case osdErrSUWrongTaskID:
		case osdErrCLWrongLibrary:
		case osdErrEHInterruptsEnabled:
		case osdErrSTMemoryError:
		case osdErrSTNoImmediateTaskSwitch:
		case osdErrSTWrongAppMode:
		case osdErrSTConfigCRCError:
		case osdErrSTConfigMagicNrError:
		case osdErrSTInvalidMajorVersion:
		case osdErrSTInvalidMinorVersion:
		case osdErrSTInvalidSTCfg:
		case osdErrQIWrongTaskPrio:
		case osdErrQRInterruptsEnabled:
		case osdErrQRWrongTaskID:
		case osdErrQRWrongTaskPrio:
		case osdErrQRWrongHighRdyPrio:
		case osdErrQSInterruptsEnabled:
		case osdErrQSNoReadyTaskFound:
		case osdErrQSWrongPriority:
		case osdErrQOWrongTaskID:
		case osdErrSPUnknownCase:
		case osdErrSGOddInvocation:
		case osdErrWSUnknownAction:
		case osdErrWSUnknownReaction:
		case osdErrWSWrongID:
		case osdErrGCOddInvocation:
		case osdErrBMResAlreadyMeasured:
		case osdErrBMInvalidProcessInStart:
		case osdErrBMInvalidProcessInStop:
		case osdErrBMInvalidResource:
		case osdErrETNoCurrentProcess:
		case osdErrASOddInvocation:
		case osdErrTAInvalidTaskState:
		case osdErrRSWrongTaskPrio:
		case osdErrPAInvalidAreaIndex:
		case osdErrPANoAccessRight:
		case osdErrPAInvalidAddress:
		case osdErrYOSystemStackOverflow:
		case osdErrYOTaskStackOverflow:
		case osdErrYOISRStackOverflow:
		case osdErrSCWrongSysCallParameter:
		case osdErrDPStartValidContext:
		case osdErrDPResumeInvalidContext:
		case osdErrDPInvalidTaskIndex:
		case osdErrDPInvalidApplicationID:
		case osdErrSUInvalidTaskIndex:
		case osdErrSUInvalidIsrIndex:
		case osdErrSUInvalidIsrPrioLevel:
		case osdErrCIInvalidIsrIndex:
		case osdErrCIInvalidIsrPrioLevel:
		case osdErrCIInvalidApplicationID:
		case osdErrCIMissingIntRequest:
		case osdErrCIInterruptIsMasked:
		case osdErrCIWrongIntPriority:
		case osdErrPIGetIMRInvalidIndex:
		case osdErrPISetIMRInvalidIndex:
		case osdErrPIClearIMRInvalidIndex:
		case osdErrPIWriteIMR8InvalidAddr:
		case osdErrPIWriteIMR16InvalidAddr:
		case osdErrPIWriteIMR32InvalidAddr:
		case osdErrPISetICRMaskInvalidAddr:
		case osdErrPIClearICRMaskInvalidAddr:
		case osdErrPISetICRReqInvalidAddr:
		case osdErrPIClearICRReqInvalidAddr:
		case osdErrPIWriteICR8InvalidAddr:
		case osdErrPIWriteICR16InvalidAddr:
		case osdErrPIWriteICRxLoInvalidIndex:
		case osdErrPIWriteICRxHiInvalidIndex:
		case osdErrPIWriteICRx16InvalidIndex:
		case osdErrCRInvalidSettingOSTM:
		case osdErrCRInvalidSettingMPU:
			/* Fatal OS fault for assertion / syscheck errors - set data for reset cause */
			ProcPrmntOsErr((uint32)OSErrorGetosCANError());
		break;
		default:
			/* Assumed to be a non-fatal OSEK fault - Set data for periodic sweep up */
			ProcNonCritOsErr((uint32)OSErrorGetosCANError());
		break;
	}
}
