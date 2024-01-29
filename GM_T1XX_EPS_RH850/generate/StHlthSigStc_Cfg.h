/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   StHlthSigStc_Cfg.h
* Module Description: Configuration Header file for State of Health Statistics component
* Project           : GM_T1XX_EPS_RH850
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       nz2654 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 07/02/16  1        AR     State of Health Signal Statistics - Initial Version	                            EA4#3760
* 05/05/16  2        AR     Updated for additional signals for monitoring			                        EA4#5553
					                                
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef STHLTHSIGSTC_CFG_H
#define STHLTHSIGSTC_CFG_H

/************************************************ Include Statements *************************************************/
#include "StHlthSigStc.h"
/******************************************** File Level Rule Deviations *********************************************/

/****************************************************** Macros *******************************************************/
/* Number of signals to be monitored by State of Health Signal Statistics component */
#define SIGCNT_ULS_U08           22U
/* Total number of bytes required for RAM buffer*/
#define TOTBUFSIZERAM_CNT_U08    66U
/* Total number of bytes required for NVM buffer*/
#define TOTBUFSIZENVM_CNT_U16    177U
/* Macro  to identify signal monitored in Motor ISR */
#define MOTISRREF_CNT_U16         osdNumberOfAllTasks
/* OS Application in which State of Health Signal components is expected to run */
#define STHLTHOSAPPL_CNT_U16             Appl10
/* Number of CRC symbols to be considered to check State of Health Signal Statistics data validity */
#define NROFCRCAREA_CNT_U08  1U

/* Typedefs used for dynamic pim in the component */
typedef uint8 Ary1D_u8_StHlthSigStc1[TOTBUFSIZERAM_CNT_U08];
typedef uint32 Ary1D_u32_StHlthSigStc1[SIGCNT_ULS_U08];
typedef float32 Ary1D_f32_StHlthSigStc1[SIGCNT_ULS_U08];

extern CONST(StHlthSigStcCfgRec1, StHlthSigStc_CONST) StHlthSigStcCfgRecInst;

#endif /* STHLTHSIGSTC_CFG_H */
