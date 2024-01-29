/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : WdgM.h
* Module Description: Stub WdgM header for static analysis and unit testing
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/13/16  1        LWW       Initial Version                                                              
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef WDGM_H
#define WDGM_H

#include "Std_Types.h"

typedef uint16 WdgM_ConfigType;

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(void, WDGM_CODE) WdgM_Init(P2CONST (WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) WdgMConfigPtr);

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
