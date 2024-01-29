/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: Fee_Callouts.c
* Module Description: Error callout functions for FEE error handling
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* -------   -------  --------  ------------------------------------------------------------------------------  --------
* 03/03/15  1        LWW       Initial Version                                                                 EA4#215
* 05/05/16  2        JWJ       Corrected issue that caused part to fill sectors and constantly trigger 0xBF    EA4#
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Fee_Callouts.h"
/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

#define FEE_CALLOUTS_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
  * Name:        Appl_FeeCriticalErrorCallback
  * Description: Fee callout function for error handling
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(Fee_ErrorCallbackReturnType, Fee_Callouts_CODE) Appl_FeeCriticalErrorCallback(uint8 partitionId, Fee_SectorErrorType err)
{
	VAR(Fee_ErrorCallbackReturnType, AUTOMATIC) RtnCod_Cnt_T_enum;

	if (err == FEE_SECTOR_CRITICAL_FILL_LEVEL)
	{
		RtnCod_Cnt_T_enum = FEE_ERRCBK_RESOLVE_AUTOMATICALLY;
	}
	else
	{
		RtnCod_Cnt_T_enum = FEE_ERRCBK_REJECT_ALL;
	}

	return(RtnCod_Cnt_T_enum);
}

#define FEE_CALLOUTS_STOP_SEC_CODE
#include "MemMap.h"
