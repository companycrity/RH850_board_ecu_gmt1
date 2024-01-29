/**********************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_FlsMem_Cfg_private.h
* Module Description: Private configuration header file for Flah Configuration for CRC calculation component.
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 1/14/16  1       AJM     Initial version of the private header template                                  EA4#3245 
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_FLSMEM_CFG_PRIVATE_H
#define CDD_FLSMEM_CFG_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

#define NROFFLSCRCREGNS_CNT_U08	 (uint8)2U

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

typedef struct 
{

	/*! \n
	* -# Description: Start Address of the Flash Block for CRC Calculation.
	* -# Units of measure:               N/A
	* -# Limit/range of values:          0-0xFFFFFFFF
	* -# Required Accuracy/Precision:    N/A
	* -# Source/Destination:             
	* -# Type:                           uint32
	* -# Calculation Frequency:          At link time
	*/
	uint32 CrcFlsBlkStrtAdr;
	
	/*! \n
	* -# Description: Length of the Flash Block for CRC Calculation.
	* -# Units of measure:               N/A
	* -# Limit/range of values:          0-0xFFFFFFFF
	* -# Required Accuracy/Precision:    N/A
	* -# Source/Destination:             
	* -# Type:                           uint32
	* -# Calculation Frequency:          At link time
	*/
	uint32 CrcFlsBlkLen;
	
	/*! \n
	* -# Description: Pointer to the Pre calculated CRC saved in flash.
	* -# Units of measure:               N/A
	* -# Limit/range of values:          0-0xFFFFFFFF
	* -# Required Accuracy/Precision:    N/A
	* -# Source/Destination:             
	* -# Type:                           uint32*
	* -# Calculation Frequency:          At link time
	*/
	uint32* PreCalcnCrcFlsAdr;
}FlsCrcCfgBlkRec;


#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

extern VAR(uint32, AUTOMATIC) HwCrcCalcdRes_C[8];
    
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

extern const FlsCrcCfgBlkRec FlsCfgTbl[];

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif/*CDD_FLSMEM_CFG_PRIVATE_H*/
