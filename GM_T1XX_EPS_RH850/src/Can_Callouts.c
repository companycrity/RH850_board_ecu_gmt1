/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer
* Nexteer Confidential
*
* Module File Name  : Can_Callouts.c
* Module Description: Can Related Callouts
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/11/15  1        LWW       Initial Version with stubbed out functionality                                  EA4#331
* 08/14/15  2        LWW       Added interrupt handling callbacks per anomaly fix                              EA4#1323
* 12/03/15  3        JWJ       Added Hardware Error Loop callout functions to fix EA4#2615 and EA4#2592        EA4#5409
* 01/25/16  4        LWW       Updates for new vector BSW delivery to make sue of OS Interrupt support         EA4#3191
* 08/29/16  5        JWJ       Added VN enable on return to normal mode per EA4#7034                           EA4#7234
**********************************************************************************************************************/

#include "Std_Types.h"
#include "il_inc.h"
#include "desc.h"
#include "ggda.h"
#include "can_inc.h"
#include "CDD_NxtrTi.h"

/* Note: These variables are mapped via one of the CAN config files to an appropriate memory section - no explicit
 * MemMap statements were needed here */
STATIC VAR(uint32, Can_Callouts_VAR) Bus0OffRecStartTime_M;
STATIC VAR(uint32, Can_Callouts_VAR) Bus1OffRecStartTime_M;


/**********************************************************************************************************************
  * Name:        ApplGgdaOnReturnToNormalMode
  * Description: Notifies about leaving all activities activated from the tester (e.g. CommControlHalted, WakeUpLink, etc.)
  *              up to now. Within this function call you have to enable the DTC setting (if previously disabled).
  * Inputs:      context - Identifies the channel on which the GGDA has restored normal mode. You can safely ignore this
  *              parameter if the GGDA only handles one channel.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplGgdaOnReturnToNormalMode(GgdaContextIndexType context)
{
	IlNwmActivateVN(kCanChannel_CE, VN_SLHSSharedDiagnostic);
	IlNwmActivateVN(kCanChannel_CE, VN_AllNodes);
	IlNwmActivateVN(kCanChannel_CE, VN_SLHS_VNReq);
}

/**********************************************************************************************************************
  * Name:        ApplGgdaForceEcuReset
  * Description: Notifies about ECU reset execution. The reset can be done immediately or later (if some EEPROM writing is
  *              needed). If a diagnostic response was necessary, it already has been sent before this function is called
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplGgdaForceEcuReset (void)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplGgdaOnDisableAllDtc
  * Description: Notifies about requested service to disable the DTC setting.
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplGgdaOnDisableAllDtc (void)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplGgdaOnDisableNormalComm
  * Description: Notifies about entering in disabled normal communication mode. The GGDA has already disabled
  *              communication when this function is called.
  * Inputs:      context - Identifies the channel on which the GGDA has restored normal mode. You can safely ignore this
  *              parameter if the GGDA only handles one channel.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplGgdaOnDisableNormalComm(GgdaContextIndexType context)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplGgdaMayEnterProgMode
  * Description: Once the diagnostic request $A5 $01 was received from the CANdesc module this function will be called.
  *              The application shall decide whether to accept the requested programming mode or to reject it.
  * Inputs:      context - Identifies the channel on which the GGDA has restored normal mode. You can safely ignore this
  *              parameter if the GGDA only handles one channel.
  * Outputs:     kDescOk – if the programming mode shall be accepted or
  *              kDescFailed –if the programming mode shall NOT be accepted.
  * Usage Notes: NONE
  ********************************************************************************************************************/
vuint8 ApplGgdaMayEnterProgMode(GgdaContextIndexType context)
{
	/* TODO: Implement required functionality */
	return(kDescOk);
}

/**********************************************************************************************************************
  * Name:        ApplTrcvrNormalMode
  * Description: This callback is executed when the transceiver has to be set to normal mode, e.g. after transmission of a
  *              HLVW message.
  *              The application has to set the transceiver in the corresponding state (normal mode).
  * Inputs:      channel - CAN channel handle
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplTrcvrNormalMode(CanChannelHandle channel)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplNwmVnDeactivated
  * Description: The callback is executed to notify the application that a VN has been deactivated.
  *              Related API: ApplNwmVnActivated()
  * Inputs:      channel - CAN channel handle
  *              VnHndl - VN handle
  *                       Note: The VN handles are defined to symbolic names in nm_cfg.h. The
  *                       symbolic name and the handle correspond to the value of the DBC network
  *                       attribute named VN_<name>.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplNwmVnDeactivated(CanChannelHandle channel, vuint8 VnHndl)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplNwmVnActivated
  * Description: The callback is executed to notify the application that a VN has been activated.
  *              Related API: ApplNwmVnDeactivated()
  * Inputs:      channel - CAN channel handle
  *              VnHndl - VN handle
  *                       Note: The VN handles are defined to symbolic names in nm_cfg.h. The
  *                       symbolic name and the handle correspond to the value of the DBC network
  *                       attribute named VN_<name>.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplNwmVnActivated(CanChannelHandle channel, vuint8 VnHndl)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplNwmVnActiveFault
  * Description: This callback informs the application about a 'VN Active Fault' detected by the 'Fault Detection and
  *              Mitigation Algorithm'.
  * Inputs:      channel - CAN channel handle
  *              VnHndl - VN handle
  *                       Note: The VN handles are defined to symbolic names in nm_cfg.h. The
  *                       symbolic name and the handle correspond to the value of the DBC network
  *                       attribute named VN_<name>.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplNwmVnActiveFault(CanChannelHandle channel, vuint8 VnHndl)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplNwmNetworkActiveFault
  * Description: This callback informs the application about a 'Network Active Fault' detected by the 'Fault Detection and
  *              Mitigation Algorithm'.
  * Inputs:      channel - CAN channel handle
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplNwmNetworkActiveFault(CanChannelHandle channel)
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        OsCanCanInterruptDisable
  * Description: This additional call-back function is used if the driver does not perform CAN interrupt
  *              handling. See TechnicalReference_Rh850_Rscan for usage details
  * Inputs:      channel - This parameter specifies the CAN channel for which the interrupts shall be
  *              disabled.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void OsCanCanInterruptDisable(CanChannelHandle channel)
{
    /* TODO: Provide optimized functionality that only disables CAN related Interrupts if needed */
    SuspendOSInterrupts();
}

/**********************************************************************************************************************
  * Name:        OsCanCanInterruptDisable
  * Description: This additional call-back function is used if the driver does not perform CAN interrupt
  *              handling. See TechnicalReference_Rh850_Rscan for usage details
  * Inputs:      channel - This parameter specifies the CAN channel for which the interrupts shall be
  *              restored.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void OsCanCanInterruptRestore(CanChannelHandle channel)
{
    /* TODO: Provide optimized functionality that only enables CAN related Interrupts if needed */
    ResumeOSInterrupts();
}

/**********************************************************************************************************************
  * Name:        ApplCanTimerStart
  * Description: This additional call-back function is used if the driver wants to start a hardware loop check timer.
  * Inputs:      channel - This parameter specifies the CAN channel for which the time shall be started.
  *              timerIdentification - This parameter indicates the timer that should be started.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplCanTimerStart( CanChannelHandle Channel,  vuint8 timerIdentification )
{
	if (timerIdentification == kCanLoopRamInit)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopInit)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopBusOffRecovery)
	{
		if (Channel == kCanChannel_HS)
		{
			GetRefTmr1MicroSec32bit_Oper(&Bus0OffRecStartTime_M);
		}
		else
		{
			GetRefTmr1MicroSec32bit_Oper(&Bus1OffRecStartTime_M);
		}
	}
	else if (timerIdentification == kCanLoopEnterResetMode)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopEnterOperationMode)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopRxFcProcess)
	{
		/* TODO: Implement required functionality */
	}
}

/**********************************************************************************************************************
  * Name:        ApplCanTimerEnd
  * Description: This additional call-back function is used if the driver wants to stop a hardware loop check timer.
  * Inputs:      channel - This parameter specifies the CAN channel for which the time shall be stopped.
  *              timerIdentification - This parameter indicates the timer that should be stopped.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplCanTimerEnd( CanChannelHandle Channel,  vuint8 timerIdentification )
{
	/* TODO: Implement required functionality */
}

/**********************************************************************************************************************
  * Name:        ApplCanTimerLoop
  * Description: This additional call-back function is used if the driver wants to check a timer to determine if the
  *              loop should exit (timeour).
  * Inputs:      channel - This parameter specifies the CAN channel for which the time shall be checked.
  *              timerIdentification - This parameter indicates the timer that should be checked.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
vuint8 ApplCanTimerLoop(CanChannelHandle Channel, vuint8 timerIdentification )
{
	VAR(vuint8, AUTOMATIC) RtnVal_Cnt_T_u08 = TRUE;
	VAR(uint32, AUTOMATIC) Bus0OffRecDeltaTime_uS_T_u32;
	VAR(uint32, AUTOMATIC) Bus1OffRecDeltaTime_uS_T_u32;

	if (timerIdentification == kCanLoopRamInit)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopInit)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopBusOffRecovery)
	{
		if (Channel == kCanChannel_HS)
		{
			GetTiSpan1MicroSec32bit_Oper(Bus0OffRecStartTime_M, &Bus0OffRecDeltaTime_uS_T_u32);
			if (Bus0OffRecDeltaTime_uS_T_u32 >= 30U)
			{
				RtnVal_Cnt_T_u08 = FALSE;
			}
		}
		else
		{
			GetTiSpan1MicroSec32bit_Oper(Bus1OffRecStartTime_M, &Bus1OffRecDeltaTime_uS_T_u32);
			if (Bus1OffRecDeltaTime_uS_T_u32 >= 30U)
			{
				RtnVal_Cnt_T_u08 = FALSE;
			}
		}
	}
	else if (timerIdentification == kCanLoopEnterResetMode)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopEnterOperationMode)
	{
		/* TODO: Implement required functionality */
	}
	else if (timerIdentification == kCanLoopRxFcProcess)
	{
		/* TODO: Implement required functionality */
	}

	return RtnVal_Cnt_T_u08;
}

