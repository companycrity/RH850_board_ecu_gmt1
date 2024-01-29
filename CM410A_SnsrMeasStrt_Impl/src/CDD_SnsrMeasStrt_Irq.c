/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_SnsrMeasStrt_Irq.c
* Module Description: Sensor Measurement Start
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
*10/12/15  1        Selva       Initial Version                                                                 EA4#1918   
*21/12/15  2        Selva       CM410A SnsrMeasStrt Rev 1.1.0 - Implementation A3213                            EA4#3219                 
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_SnsrMeasStrt.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "ostm_regs.h"
#include "Os.h"
#include "CDD_HwTq0Meas.h"
#include "CDD_HwTq1Meas.h"
#include "CDD_HwTq2Meas.h"
#include "CDD_HwTq3Meas.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
#define CDD_SnsrMeasStrt_START_SEC_CODE
#include "CDD_SnsrMeasStrt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

ISR(SnsrMeasStrtIrq)
{
	
	OSTM1TT = 1U;
	
	(void)HwTq0MeasTrigStrt_Oper();
	(void)HwTq1MeasTrigStrt_Oper();
	(void)HwTq2MeasTrigStrt_Oper();
	(void)HwTq3MeasTrigStrt_Oper();
	
	/* Rollover intentional*/
	*Rte_Pim_TqMsgTrigCnt() = *Rte_Pim_TqMsgTrigCnt() + 1U;
	
	
}


#define CDD_SnsrMeasStrt_STOP_SEC_CODE
#include "CDD_SnsrMeasStrt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



