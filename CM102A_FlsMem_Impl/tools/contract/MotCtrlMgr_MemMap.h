/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotCtrlMgr_MemMap.h
* Module Description: Motor Control Manager Memory Mapping
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version																	EA4#511
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define MEMMAP_ERROR

#ifdef CDD_MotCtrlMgr_Irq_START_SEC_CODE
    # undef CDD_MotCtrlMgr_Irq_START_SEC_CODE
	#undef MEMMAP_ERROR
	#define MotCtrl_START_SEC_CODE
	#include "MemMap.h"	
#endif

#ifdef CDD_MotCtrlMgr_Irq_STOP_SEC_CODE
    # undef CDD_MotCtrlMgr_Irq_STOP_SEC_CODE
	#undef MEMMAP_ERROR
	#define MotCtrl_STOP_SEC_CODE
	#include "MemMap.h"
#endif

#ifdef CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
	#pragma alignvar (16)
	#undef CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
	#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_UNSPECIFIED
	#include "CDD_MotCtrlMgr_MemMap.h"
#elif defined CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
	#undef CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
	#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_UNSPECIFIED
	#include "CDD_MotCtrlMgr_MemMap.h"
	
#elif defined CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
	#pragma alignvar (16)
	#pragma ghs section data=".data_dma_128"
	#undef CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
	#undef MEMMAP_ERROR
#elif defined CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
	#pragma ghs section data=default
	#undef CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
	#undef MEMMAP_ERROR
#endif

#ifdef MEMMAP_ERROR
	#error "MotCtrlMgr_MemMap.h, wrong pragma command"
#endif

/*** End of file **************************************************************/
