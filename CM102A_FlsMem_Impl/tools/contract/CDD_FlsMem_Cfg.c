/**********************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_FlsMem_Cfg.c
* Module Description: Variable definition for Flash CRC Sections from Configurator .
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 1/14/16  	1       AJM     Initial version of the Config.c template		                                EA4#3245 
* 1/15/16  	2       AJM     Corrected placement of the structure members                                    EA4#3245 
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
/************************************************ Include Statements *************************************************/
#include "CDD_FlsMem_Cfg_private.h"
/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

 /* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.2]	Cast of a variable address to an integer type required for writing a variable address to a register. */


#define CDD_FlsMem_START_SEC_CODE
#include "CDD_FlsMem_MemMap.h"

const FlsCrcCfgBlkRec FlsCfgTbl[] = 
{
	{
		(uint32)0x0U,
		(uint32)0x17ff0U,
		(uint32 *)0x17ff0U,
	},
	{
		(uint32)0x18900U,
		(uint32)0x974f0U,
		(uint32 *)0xafdf0U,
	},
	{
		(uint32)0x0U,
		(uint32)0x0U,
		(uint32 *)0x0U,
	}
};

#define CDD_FlsMem_STOP_SEC_CODE
#include "CDD_FlsMem_MemMap.h"

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
