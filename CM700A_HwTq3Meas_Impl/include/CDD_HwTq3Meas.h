/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_HwTq3Meas.h
* Module Description: HwTq3 Measurement  Complex Driver Header
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
*10/14/15  1        Selva       Initial Version                                                                 EA4#1926
*12/21/15  2        Selva     CM700A HwTq3Meas Rev1.3.0 - Implementation (A3079)                                EA4#3162 
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_HWTQ3MEAS_H
#define CDD_HWTQ3MEAS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]: Deviation allowed for functions required to be declared in two headers to be accessible via the RTE as well as outside of the RTE 
						  Function Names: HwTq3MeasTrigStrt_Oper*/
/*********************************************** Exported Declarations ***********************************************/

extern FUNC(void, HwTq3Meas_CODE) HwTq3MeasTrigStrt_Oper(void);



/**************************************** End Of Multiple Include Protection *****************************************/
#endif

