/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_GMLANSdl.c
* Module Description: GMLAN Scheduler complex driver component
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/16/15  1        LWW       Initial Version                                                                 EA4#331
* 04/28/15  2        LWW       Added CanStop Nontrusted function for shutdown processing                       EA4#512
* 08/14/15  3        LWW       Re-arranged CAN interrupt enabling per anomaly fix                              EA4#1323
* 08/26/16  4        JWJ       Corrected anomaly EA4#5673                                                      EA4#7213
* 08/31/16  5        JWJ       Created second periodic for transmit tasks to be scheduled at end of periodic   EA4#7336
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Rte_CDD_GMLANSdl.h"

#include "Os.h"
#include "osekext.h"

#include "il_inc.h"
#include "ggda.h"
#include "desc.h"
#include "tpmc.h" 
/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
#define CDD_GMLANSdl_START_SEC_CODE
#include "CDD_GMLANSdl_MemMap.h"

/**********************************************************************************************************************
  * Name:        GMLANSdlPer1
  * Description: GMLAN Scheduler Function Part 1
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called every 10ms by RTE at the start of the task
  ********************************************************************************************************************/
FUNC(void, CDD_GMLANSdl_CODE) GMLANSdlPer1(void)
{
	IlNwmTask(kCanChannel_HS);
	IlNwmTask(kCanChannel_CE);
	IlRxTask(kCanChannel_HS);
	IlRxTask(kCanChannel_CE);
	TpRxTask();
	DescTask();
	GgdaTimerTask();
	GgdaStateTask();
}

/**********************************************************************************************************************
  * Name:        GMLANSdlPer2
  * Description: GMLAN Scheduler Function Part 2
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called every 10ms by RTE at the end of the task
  ********************************************************************************************************************/
FUNC(void, CDD_GMLANSdl_CODE) GMLANSdlPer2(void)
{
	IlTxTask(kCanChannel_HS);
	IlTxTask(kCanChannel_CE);
	TpTxTask();
}

/**********************************************************************************************************************
  * Name:        NONTRUSTED_NtWrapS_GMLANInit
  * Description: Non-Trusted Server Function for GMLAN Initialization
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called by BSWM during initialization.  Since BSWM is running in a separate application from the 
  *              GMLAN communication stack, a non-trusted function is required.
  ********************************************************************************************************************/
FUNC(void, CDD_GMLANSdl_CODE) NONTRUSTED_NtWrapS_GMLANInit(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	/* Unmask CAN Related ISRs */
	osClearIMRmEI(183); /* Channel error interrupt 0 (INTRCAN0ERR) */
	osClearIMRmEI(185); /* Channel TX interrupt 0 (INTRCAN0TRX) */
	osClearIMRmEI(186); /* Channel error interrupt 1 (INTRCAN1ERR) */
	osClearIMRmEI(188); /* Channel TX interrupt 1 (INTRCAN1TRX) */
	osClearIMRmEI(189); /* Global error interrupt (INTRCANGERR) */
	osClearIMRmEI(190); /* RX FIFO interrupt (INTRCANGRECC) */

	/* Call GMLAN Initialization Functions */
	IlInitPowerOn();
	TpInitPowerOn();
	GgdaInitPowerOn();
	DescInitPowerOn(kDescPowerOnInitParam);

	/* Activate Virtual Networks */
	IlNwmActivateVN(kCanChannel_HS, VN_SLHSSharedDiagnostic);
	IlNwmActivateVN(kCanChannel_HS, VN_AllNodes);
	IlNwmActivateVN(kCanChannel_HS, VN_SLHS_VNReq);
	IlNwmActivateVN(kCanChannel_CE, VN_SLHSSharedDiagnostic);
	IlNwmActivateVN(kCanChannel_CE, VN_AllNodes);
	IlNwmActivateVN(kCanChannel_CE, VN_SLHS_VNReq);
}

/**********************************************************************************************************************
  * Name:        NONTRUSTED_NtWrapS_CanStop
  * Description: Non-Trusted Server Function for CanStop
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called by BSWM during shutdown.  Since BSWM is running in a separate application from the 
  *              GMLAN communication stack, a non-trusted function is required.
  ********************************************************************************************************************/
FUNC(void, CDD_GMLANSdl_CODE) NONTRUSTED_NtWrapS_CanStop(NonTrustedFunctionIndexType index, NonTrustedFunctionParameterRefType par)
{
	SuspendOSInterrupts();
	CanStop(kCanChannel_HS);
	CanStop(kCanChannel_CE);
	ResumeOSInterrupts();
}

#define CDD_GMLANSdl_STOP_SEC_CODE
#include "CDD_GMLANSdl_MemMap.h"
