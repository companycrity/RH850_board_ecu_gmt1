/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrc_Cfg_private.h
* Module Description: Private configuration header file for CM800A Synchronous CRC component.
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       nz2654 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 10/07/15  1       KJS     Initial version of the private header template                                  EA4#1844
* 01/12/16  2       KJS     Updates for FDD Rev1 and support for CRC reservation                            EA4#5405
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_SYNCCRC_CFG_PRIVATE_H
#define CDD_SYNCCRC_CFG_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

/************************************************ Embedded Constants *************************************************/
#define NROFCRCHWUNIT_CNT_U08       4U
#define NROFACTVCRCHWUNIT_CNT_U08   4U
#define ARWRPRENAD_CNT_U08          STD_OFF
#define CRCOSREF_CNT_U08            Appl10

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_SYNCCRC_CFG_PRIVATE_H */
