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
 *            Module: BswM
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Callout_Stubs.c
 *   Generation Time: 2016-12-22 15:35:14
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Version>                           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
* Module File Name  : BswM_Callout_Stubs.c
* Module Description: BSWM Callout Functions
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          14 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/28/15  4        LWW       Added initial implementation of functions for shutdown processing               EA4#512
* 05/01/15  5        LWW       Added callout for CanStop processing                                            EA4#553
* 05/04/15  6        LWW       Changed NvM_MainFunction to trusted function for readall processing             EA4#569
* 05/08/15  7        LWW       Added trusted function call for WdgM_Init                                       EA4#580
* 05/19/15  8        LWW       Anomaly EA4#591 Correction                                                      EA4#616
* 06/23/15  9        LWW       Fixed NvM ReadAll Trusted Function calls                                        EA4#900
* 10/22/15  10       JWJ       Updates to SelectBootTarget function in support of Micro Diagnostics updates    EA4#2214
* 01/25/16  14       LWW       Updates for new vector BSW delivery                                             EA4#3191
* 01/28/16  15       JWJ       Update to support NvM Proxy CDD name changes                                    EA4#3615
* 02/29/16  16       JWJ       Added shutdown function for SoH to WriteAll function                            EA4#4026
* 03/11/16  17       JWJ       Updated the call to DiagMgr shutdown function to support ES101A version 2.0.0   EA4#4466
* 10/07/16  18       JWJ       Added call to NvM MultiBlkCallBack function before WriteAll                     EA4#7935
* 12/22/16  19       JWJ       Updates for new shutdown sequence                                               EA4#9036
* 12/23/16  20       JWJ       Added missing call for state of health signal statistics shutdown function      EA4#9036
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*********************************************************************************************************************
    INCLUDES
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#define BSWM_CALLOUT_STUBS_SOURCE
#include "BswM.h"
#include "BswM_Private_Cfg.h"



/**********************************************************************************************************************
 *  Additional configured User includes
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>                          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "WdgM.h"
#include "WdgM_PBcfg.h"
#include "WdgIf.h"
#include "ram_regs.h"
#include "Os.h"
#include "osekext.h"
#include "CDD_NvMProxy.h"
#include "CDD_NvMProxy_Cbk.h"
#include "CDD_ExcpnHndlg.h"
#include "DiagcMgr.h"
#include "CDD_NxtrTi.h" 
#include "Rte_IoHwAb.h"
#include "Wdgm_PBcfg.h"

/* Maximum duration allowed for a NvM Cancel request to complete to ensure proper restart times in units of 100us: */
#define BSWMWRCNCLMAXDURN_100US_U32  5000

#define BSWMWRALLPASSD_CNT_U08  0x55U
#define BSWMWRALLFAILD_CNT_U08  0xAAU

/* TODO: This extern statement needs to be moved to StHlthSigStc.h */
extern FUNC(void, StHlthSigStc_CODE) StHlthStcPwrDwn_Oper(void);

#define BSWM_START_SEC_VAR_INIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"
STATIC VAR(boolean, BSWM_VAR_NOINIT) BswM_RestartRequest_Cnt_M_logl = FALSE;
STATIC VAR(uint8, BSWM_VAR_NOINIT) BswM_WrAllFaild_Uls_M_u8 = BSWMWRALLPASSD_CNT_U08;
#define BSWM_STOP_SEC_VAR_INIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CALLOUT FUNCTIONS
 *********************************************************************************************************************/
#define BSWM_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GENERIC CALLOUTS
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_INIT_NvMReadAll(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_INIT_NvMReadAll>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

    NvM_RequestResultType MultiBlockStatus;

	Fee_EnableFss();
    NvM_ReadAll();
    
	/* Loop until ReadAll operation completes */
    do
    {
	 Call_NvM_MainFunction();
	 Fee_MainFunction();
	 Call_Fls_MainFunction();

	 NvM_GetErrorStatus(NvMConf___MultiBlockRequest, &MultiBlockStatus);
    }
    while(MultiBlockStatus==NVM_REQ_PENDING);

	NvMProxy_Init0();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_INIT_NvMReadAll */


FUNC(void, BSWM_CODE) BswM_SHUTDOWN_NvMWriteAll(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_SHUTDOWN_NvMWriteAll>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
	VAR(uint32, AUTOMATIC) WrCncl_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) WrCnclDurn_Cnt_T_u32;
	VAR(boolean, AUTOMATIC) PinSt_Cnt_T_Logl;
	VAR(NvM_RequestResultType, AUTOMATIC) MultiBlockStatus;

	BswM_RestartRequest_Cnt_M_logl = FALSE;
	BswM_WrAllFaild_Uls_M_u8 = BSWMWRALLPASSD_CNT_U08;

	(void)StHlthStcPwrDwn_Oper();

	/* Don't perform write all for hard resets */
	if(BswM_GetGenericState(BSWM_GENERIC_BswM_ShutdownStates) != BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_HARDRESET)
	{
		/* Force storing of RAM block statuses in case of restart event (i.e. quick ignition cycle) */
		NvMProxy_MultiBlkCallBack(NVM_WRITE_ALL, NVM_REQ_PENDING);
		NvM_WriteAll();

		/* Loop until WriteAll completes */
		do
		{
			NvM_MainFunction();
			Fee_MainFunction();
			Fls_MainFunction();

			NvM_GetErrorStatus(NvMConf___MultiBlockRequest, &MultiBlockStatus);

			/* The following only matters for normal power downs */
			if (BswM_GetGenericState(BSWM_GENERIC_BswM_ShutdownStates) == BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_SWITCHOFF)
			{
				/* Check if ignition has been turned back on (i.e. quick ignition cycle) */
				IoHwAb_GetGpioMcuEna_Oper(&PinSt_Cnt_T_Logl);
				if (PinSt_Cnt_T_Logl == STD_HIGH)
				{
					/* First, attempt to cancel the write all and allow the current block to finish */
					GetRefTmr100MicroSec32bit_Oper(&WrCncl_Cnt_T_u32);
					Fee_DisableFss(); /* For speed, disallow sector swapping for the cancel */
					NvM_CancelWriteAll();

					/* Give some time for the WriteAll to cancel and wrap up the current operation */
					do
					{
						NvM_MainFunction();
						Fee_MainFunction();
						Fls_MainFunction();

						NvM_GetErrorStatus(NvMConf___MultiBlockRequest, &MultiBlockStatus);
						GetTiSpan100MicroSec32bit_Oper(WrCncl_Cnt_T_u32, &WrCnclDurn_Cnt_T_u32);

						/* Abort the Cancel if an error occurs OR a timeout occurs */
					} while (((MultiBlockStatus == NVM_REQ_PENDING)) && (WrCnclDurn_Cnt_T_u32 < BSWMWRCNCLMAXDURN_100US_U32));

					/* If the timeout occurred before the write finished then kill the write all */
					if (MultiBlockStatus == NVM_REQ_PENDING)
					{
						NvM_KillWriteAll();
					}

					Fee_EnableFss(); /* Re-enable sector swapping, this will resume after periodics are restarted */
					NvMProxy_MultiBlkCallBack(NVM_WRITE_ALL, NVM_REQ_CANCELED);
					BswM_RestartRequest_Cnt_M_logl = TRUE;
					BswM_RequestMode(BSWM_GENERIC_BSWM_STATE, BSWM_GENERICVALUE_BSWM_STATE_BSWM_RESTART);
				}
			}
		}
		while ((MultiBlockStatus==NVM_REQ_PENDING) && (BswM_RestartRequest_Cnt_M_logl == FALSE));

		if ((MultiBlockStatus == NVM_REQ_NOT_OK) && (BswM_RestartRequest_Cnt_M_logl == FALSE))
		{
			BswM_WrAllFaild_Uls_M_u8 = BSWMWRALLFAILD_CNT_U08;
		}

	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_SHUTDOWN_NvMWriteAll */


FUNC(void, BSWM_CODE) BswM_ShtdwnHndlg_PrepShutdown(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ShtdwnHndlg_PrepShutdown>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

	if(BswM_GetGenericState(BSWM_GENERIC_BswM_PrepShutdownStatesDef) == BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_REPROGRAM)
	{
		EcuM_SelectShutdownTarget(ECUM_STATE_RESET, EcuMConf_EcuMResetMode_ECUM_RESET_MCU);
		BswM_RequestMode(BSWM_GENERIC_BswM_ShutdownStates, BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_REPROGRAM);
	}
	else if(BswM_GetGenericState(BSWM_GENERIC_BswM_PrepShutdownStatesDef) == BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_HARDRESET)
	{
		EcuM_SelectShutdownTarget(ECUM_STATE_RESET, EcuMConf_EcuMResetMode_ECUM_RESET_MCU);
		BswM_RequestMode(BSWM_GENERIC_BswM_ShutdownStates, BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_HARDRESET);
	}
	else if(BswM_GetGenericState(BSWM_GENERIC_BswM_PrepShutdownStatesDef) == BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_SOFTRESET)
	{
		EcuM_SelectShutdownTarget(ECUM_STATE_RESET, EcuMConf_EcuMResetMode_ECUM_RESET_MCU);
		BswM_RequestMode(BSWM_GENERIC_BswM_ShutdownStates, BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_SOFTRESET);
	}
	else
	{
		EcuM_SelectShutdownTarget(ECUM_STATE_OFF, 0);
		BswM_RequestMode(BSWM_GENERIC_BswM_ShutdownStates, BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_SWITCHOFF);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ShtdwnHndlg_PrepShutdown */


FUNC(void, BSWM_CODE) BswM_Restart(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_Restart>                           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

	(void)CallNonTrustedFunction(NtWrapS_CmnMfgSrv_Init, NULL_PTR);
	Call_ReleaseResource(SHUTDOWN_ONGOING);

	/* At this point, all of the periodics associated with SHUTDOWN_ONGOING will execute.  This is intentionally done
	 * before enabling supervision as the time between right now and the next system tick will not be exactly 2ms as
	 * the watchdog expects and will lead to program flow violations.
	 */

	osSuspendOSInterrupts();
	WdgM_ActivateSupervisionEntity(SE_0);  /* 10ms BSW */
	WdgM_ActivateSupervisionEntity(SE_1);
	WdgM_ActivateSupervisionEntity(SE_2);
	WdgM_ActivateSupervisionEntity(SE_3);
	WdgM_ActivateSupervisionEntity(SE_4);
	WdgM_ActivateSupervisionEntity(SE_5);
	WdgM_ActivateSupervisionEntity(SE_6);
	osResumeOSInterrupts();

	(void)WdgM_CheckpointReached(SE_0, CP_0_0); /* Needed to avoid program flow violations for this task */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_Restart */


FUNC(void, BSWM_CODE) BswM_FinalizeShtdwn(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_FinalizeShtdwn>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

	VAR(NvM_RequestResultType, AUTOMATIC) ClsChkStatus;

	/* If this is anything other than a shutdown event that has been canceled (i.e. quick ignition cycle) */
	if (BswM_RestartRequest_Cnt_M_logl == FALSE)
	{
		if (BswM_GetGenericState(BSWM_GENERIC_BswM_ShutdownStates) != BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_HARDRESET)
		{
			/* Issue the close check write only if the WriteAll didn't fail */
			if(BswM_WrAllFaild_Uls_M_u8 == BSWMWRALLPASSD_CNT_U08)
			{
				/* Close Check Block Write */
				NvMProxy_ClsChkWr_Oper();
			}
			else
			{
				/* TODO: Write a different value in ClsChk to indicate failed NvM_WriteAll Operation */
			}

			/* Commit the close check flag to FEE */
			do
			{
				NvM_MainFunction();
				Fee_MainFunction();
				Fls_MainFunction();

				NvM_GetErrorStatus(NvMConf_NvMBlockDescriptor_Rte_NvmBlock_NvMProxy_ShtdwnClsChk, &ClsChkStatus);

			} while (ClsChkStatus==NVM_REQ_PENDING);

			/* Stop CAN for all requests except HARD reset - also not called on a restart request for obvious reasons */
			(void)CallNonTrustedFunction(NtWrapS_CanStop, NULL_PTR);
		}

		/* Power down */
		EcuM_ClearValidatedWakeupEvent(0x2);
		WdgIf_SetTriggerCondition(0U, 10000); /* Increase watchdog timeout to avoid watchdog failures after stopping OS */
		EcuM_GoDown(BSWM_MODULE_ID);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_FinalizeShtdwn */


FUNC(void, BSWM_CODE) BswM_DiagcMgrPwrDwn(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_DiagcMgrPwrDwn>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

	if(BswM_GetGenericState(BSWM_GENERIC_BswM_PrepShutdownStatesDef) != BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_HARDRESET)
	{
		(void)DiagcMgrPwrDwn();
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_DiagcMgrPwrDwn */


FUNC(void, BSWM_CODE) BwmM_GetShutdownOngoing(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BwmM_GetShutdownOngoing>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

	Call_GetResource(SHUTDOWN_ONGOING);
	(void)WdgM_CheckpointReached(SE_0, CP_0_1); /* This task cannot be "active" when the deactivate call is made below */
	WdgM_DeactivateSupervisionEntity(SE_0);  /* 10ms BSW */
	WdgM_DeactivateSupervisionEntity(SE_1);
	WdgM_DeactivateSupervisionEntity(SE_2);
	WdgM_DeactivateSupervisionEntity(SE_3);
	WdgM_DeactivateSupervisionEntity(SE_4);
	WdgM_DeactivateSupervisionEntity(SE_5);
	WdgM_DeactivateSupervisionEntity(SE_6);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BwmM_GetShutdownOngoing */


#define BSWM_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  END OF FILE: BSWM_CALLOUT_STUBS.C
 *********************************************************************************************************************/


