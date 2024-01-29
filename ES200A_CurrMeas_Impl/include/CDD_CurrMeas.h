/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_CurrMeas.h
* Module Description: Current Measurement Arbitration Complex Driver Header
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/12/15  1        Selva       Initial Version                                                                 EA4#361
* 05/08/15  2        Selva       Extern "CONST" for NVM default values                                         EA4#361
* 09/22/15  3        Selva       Removed Extern "CONST" for NVM default values                                  EA4#1667
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_CURRMEAS_H
#define CDD_CURRMEAS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/

extern FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer2(void);



/**************************************** End Of Multiple Include Protection *****************************************/
#endif

