/*****************************************************************************
* Copyright 2015, 2016 Nexteer
* Nexteer Confidential
*
* Module File Name: FltInj.h
* Module Description: Fault Injection definitions Stub File
* Project           : CBD
* Author            : Darryl Greathouse
*****************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        gzkys7 %
*------------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 06/20/16   1        SB        Initial version                                                                 EA4#6251
*------------------------------------------------------------------------------------------------------------------------                                                            EA4#952
******************************************************************************/

#ifndef FLTINJ_H
#define FLTINJ_H

#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]: Deviation allowed for functions required to be declared in two headers to be 
											accessible via the RTE as well as outside of the RTE 
											Function Names: FltInj_logl_Oper */
						  
/* Fault Injection Enable */
/* This is false for production builds.  It is set to true at compile time
   only for s/w special builds with fault injection active. */
#define FLTINJENA								   (STD_OFF)

/* Fault Injection Diagnostic Manager Diagnostic Status Inverter 1 Inactive */
/* Output signal of Diagnostics Manager */
#define FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV        (31U)

/* Fault Injection Diagnostic Manager Diagnostic Status Inverter 2 Inactive */
/* Output signal of Diagnostics Manager */
#define FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV        (32U)

extern FUNC(void, FltInj_CODE) FltInj_logl_Oper(P2VAR(boolean, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);

#endif
