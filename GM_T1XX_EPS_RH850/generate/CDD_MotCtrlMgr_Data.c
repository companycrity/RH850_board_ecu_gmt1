
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.c
* Module Description: Motor Control Manager Data
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 26.01.2017 17:39:19
***********************************************************************************************************************
* Version Control:
* %version:          30 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 10/29/15  2        LWW       Template update for signal mapping changes and memory map change                EA4#3428
* 08/08/16  3        LWW       Template update for compatibility with MotCtrlMgr Configuration Tool            EA4#6787
**********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "CDD_MotCtrlMgr_Data.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/************************************************** Global Signals ***************************************************/

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlToTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlToTwoMilliSec_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0U, 
	0U, 
	0U, 
	0, 
	{0U, 62U, 125U, 187U, 250U, 312U, 375U, 437U}, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0U, 
	{0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	FALSE, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"


#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(TwoMilliSecFromMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0U, 
	0U, 
	0U, 
	0, 
	{0U, 62U, 125U, 187U, 250U, 312U, 375U, 437U}, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0U, 
	{0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	FALSE, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(TwoMilliSecToMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecToMotCtrl_Rec = 
{
	6.0F, 
	0.0F, 
	25.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.021651F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.005F, 
	0U, 
	MCECS_OFFSCMDSTRT, 
	FALSE, 
	FALSE, 
	1, 
	SYSST_WRMININ, 
	63U, 
	1, 
	SIGQLFR_NORES, 
	SIGQLFR_NORES, 
	FALSE, 
	FALSE, 
	1, 
	7U, 
	SIGQLFR_NORES, 
	SIGQLFR_NORES, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	21U, 
	23U, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlFromTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec = 
{
	6.0F, 
	0.0F, 
	25.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.021651F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.005F, 
	0U, 
	MCECS_OFFSCMDSTRT, 
	FALSE, 
	FALSE, 
	1, 
	SYSST_WRMININ, 
	63U, 
	1, 
	SIGQLFR_NORES, 
	SIGQLFR_NORES, 
	FALSE, 
	FALSE, 
	1, 
	7U, 
	SIGQLFR_NORES, 
	SIGQLFR_NORES, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	21U, 
	23U, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlIntRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlInt_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	3964U, 
	4444U, 
	4364U, 
	4444U, 
	4444U, 
	4444U, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0U, 
	0U, 
	62500U, 
	0.0F, 
	{0U, 0U, 0U}, 
	0U, 
	0.0F, 
	0U, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	{0U, 0U, 0U}, 
	0.0F, 
	8411.0F, 
	8411.0F, 
	0U, 
	0U, 
	0U, 
	0U, 
	FALSE, 
	{0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

