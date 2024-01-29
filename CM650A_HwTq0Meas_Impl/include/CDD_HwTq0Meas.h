/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_HwTq0Meas.h
* Module Description: HwTq0 Measurement  Complex Driver Header
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
*10/14/15  1        Selva       Initial Version                                                                 EA4#1920
*12/21/15  2        Selva     CM650A HwTq0Meas Rev1.8.0 - Implementation (A3079)                                EA4#3156 
*
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_HWTQ0MEAS_H
#define CDD_HWTQ0MEAS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/

/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]: Deviation allowed for functions required to be declared in two headers to be accessible via the RTE as well as outside of the RTE 
						  Function Names: HwTq0MeasTrigStrt_Oper*/
extern FUNC(void, HwTq0Meas_CODE) HwTq0MeasTrigStrt_Oper(void);



/**************************************** End Of Multiple Include Protection *****************************************/
#endif

