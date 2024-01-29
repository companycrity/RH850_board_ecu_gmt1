/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_HwTq1Meas.h
* Module Description: HwTq1 Measurement  Complex Driver Header
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
*10/14/15  1        Selva       Initial Version                                                                 EA4#1918
*21/12/15  2        Selva       CM410A SnsrMeasStrt Rev 1.1.0 - Implementation A3213                            EA4#3219     
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_HWTQ1MEAS_H
#define CDD_HWTQ1MEAS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/

extern FUNC(void, HwTq1Meas_CODE) HwTq1MeasTrigStrt_Oper(void);



/**************************************** End Of Multiple Include Protection *****************************************/
#endif

