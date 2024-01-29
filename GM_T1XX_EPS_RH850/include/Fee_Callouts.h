/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : Fee_Callouts.h
* Module Description: Error callout header for FEE error handling
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/03/15  1        LWW       Initial Version                                                                 EA4#215
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef FEE_CALLOUTS_H
#define FEE_CALLOUTS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "Fee.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(Fee_ErrorCallbackReturnType, Fee_Callouts_CODE) Appl_FeeCriticalErrorCallback(uint8 partitionId, Fee_SectorErrorType err);

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
