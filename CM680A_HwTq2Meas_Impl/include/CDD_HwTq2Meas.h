/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_HwTq2Meas.h
* Module Description: HwTq2 Measurement  Complex Driver Header
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
*10/14/15  1        Selva       Initial Version                                                                 EA4#1924
*12/21/15  2        Selva     CM680A HwTq2Meas Rev1.3.0 - Implementation (A3079)                                EA4#3160 
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_HWTQ2MEAS_H
#define CDD_HWTQ2MEAS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]: Deviation allowed for functions required to be declared in two headers to be accessible via the RTE as well as outside of the RTE 
						  Function Names: HwTq2MeasTrigStrt_Oper*/
/*********************************************** Exported Declarations ***********************************************/

extern FUNC(void, HwTq2Meas_CODE) HwTq2MeasTrigStrt_Oper(void);



/**************************************** End Of Multiple Include Protection *****************************************/
#endif

