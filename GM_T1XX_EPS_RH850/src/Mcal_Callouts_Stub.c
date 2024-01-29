/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: Mcal_Callouts_Stub.c
* Module Description: Temporary error callout functions for MCAL components
* Project           : GM T1xx
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* -------   -------  --------  ------------------------------------------------------------------------------  --------
* 12/22/16  1        JWJ       Initial Version                                                                 EA4#8936
* 12/22/16  2        JWJ       Added callout for Mcu component                                                 EA4#8936
* 12/22/16  3        JWJ       Added callout for Port component                                                EA4#8936
* 12/22/16  4        JWJ       Added callout for Wdg component                                                 EA4#8936
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "Dem.h"

/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/
#pragma ghs section bss=".osGlobalShared_bss"
#pragma ghs section sbss=".osGlobalShared_sbss"
#pragma ghs section data=".osGlobalShared_data"
#pragma ghs section sdata=".osGlobalShared_sdata"
static volatile VAR(uint16, AUTOMATIC) Dio_ErrId_Cnt_D_u16;
static volatile VAR(uint8, AUTOMATIC) Dio_ApiId_Cnt_D_u08;
static volatile VAR(uint16, AUTOMATIC) Mcu_ErrId_Cnt_D_u16;
static volatile VAR(uint8, AUTOMATIC) Mcu_ApiId_Cnt_D_u08;
static volatile VAR(uint16, AUTOMATIC) Port_ErrId_Cnt_D_u16;
static volatile VAR(uint8, AUTOMATIC) Port_ApiId_Cnt_D_u08;
static volatile VAR(uint16, AUTOMATIC) Wdg_ErrId_Cnt_D_u16;
static volatile VAR(uint8, AUTOMATIC) Wdg_ApiId_Cnt_D_u08;
#pragma ghs section bss=default
#pragma ghs section sbss=default
#pragma ghs section data=default
#pragma ghs section sdata=default


/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

#define MCAL_CALLOUTS_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
  * Name:        DioWrVrfyFailr
  * Description: Dio callout function for error handling
  * Inputs:      WVErrId: Error id
  *              uiApiId: API Id
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, MCU_APPL_CODE) DioWrVrfyFailr(Dem_EventIdType WVErrId, uint8 uiApiId)
{
	Dio_ErrId_Cnt_D_u16 = (uint16)WVErrId;
	Dio_ApiId_Cnt_D_u08 = uiApiId;
}

/**********************************************************************************************************************
  * Name:        McuWrVrfyFailr
  * Description: Mcu callout function for error handling
  * Inputs:      WVErrId: Error id
  *              uiApiId: API Id
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, MCU_APPL_CODE) McuWrVrfyFailr(Dem_EventIdType WVErrId, uint8 uiApiId)
{
	Mcu_ErrId_Cnt_D_u16 = (uint16)WVErrId;
	Mcu_ApiId_Cnt_D_u08 = uiApiId;
}

/**********************************************************************************************************************
  * Name:        PortWrVrfyFailr
  * Description: Port callout function for error handling
  * Inputs:      WVErrId: Error id
  *              uiApiId: API Id
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, MCU_APPL_CODE) PortWrVrfyFailr(Dem_EventIdType WVErrId, uint8 uiApiId)
{
	Port_ErrId_Cnt_D_u16 = (uint16)WVErrId;
	Port_ApiId_Cnt_D_u08 = uiApiId;
}

/**********************************************************************************************************************
  * Name:        WdgWrVrfyFailr
  * Description: Wdg callout function for error handling
  * Inputs:      WVErrId: Error id
  *              uiApiId: API Id
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, MCU_APPL_CODE) WdgWrVrfyFailr(Dem_EventIdType WVErrId, uint8 uiApiId)
{
	Wdg_ErrId_Cnt_D_u16 = (uint16)WVErrId;
	Wdg_ApiId_Cnt_D_u08 = uiApiId;
}

#define MCAL_CALLOUTS_STOP_SEC_CODE
#include "MemMap.h"
