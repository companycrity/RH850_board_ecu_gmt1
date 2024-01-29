
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Irq.c
* Module Description: Motor Control Manager Interrupt Definition
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 26.01.2017 17:39:18
***********************************************************************************************************************
* Version Control:
* %version:          14 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 01/21/16  2        LWW       Updated to remove interrupt keyword for change to pragma                        EA4#3428                                                 
**********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "CDD_MotCtrlMgr_Irq.h"
#include "CDD_GmT1xxMcuCfg.h"
#include "CDD_TSG31CfgAndUse.h"
#include "CDD_CurrMeas.h"
#include "CDD_CurrMeasArbn.h"
#include "CDD_MotAgArbn.h"
#include "CDD_MotCurrRegVltgLimr.h"
#include "CDD_MotVel.h"
#include "CDD_MotAg0Meas.h"
#include "CDD_MotAgCmp.h"
#include "CDD_SinVltgGenn.h"
#include "CDD_MotAg1Meas.h"
#include "CDD_MotRplCoggCmd.h"
#include "CDD_McuDiagc.h"
#include "CDD_Adc0CfgAndUse.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

#define CDD_MotCtrlMgr_Irq_START_SEC_CODE
#include "MotCtrlMgr_MemMap.h"

/* Use GreenHills pragma for creating an interrupt service routine.  
   The default is for RH850 EI level exceptions */
#pragma ghs interrupt
FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrIrq(void)
{
	static VAR(uint8, CDD_MotCtrlMgr_VAR_NOINIT) MotCtrlLoopCntr_Cnt_F_u8 = 1U;
	
	MotAg0MeasPer1();
	MotAg1MeasPer1();
	MotAgArbnPer1();
	MotAgCmpPer1();
	GmT1xxMcuCfgPer1();
	if( MotCtrlLoopCntr_Cnt_F_u8 == 1U )
	{
		CurrMeasPer2();
		CurrMeasArbnPer1();
		MotRplCoggCmdPer1();
		MotCurrRegVltgLimrPer1();
		McuDiagcPer1();
		Adc0CfgAndUsePer1();
	}
	SinVltgGennPer1();
	TSG31CfgAndUsePer1();
	SinVltgGennPer2();
	MotVelPer1();
	MotCtrlLoopCntr_Cnt_F_u8 ^= 1U;
}

#define CDD_MotCtrlMgr_Irq_STOP_SEC_CODE
#include "MotCtrlMgr_MemMap.h"


