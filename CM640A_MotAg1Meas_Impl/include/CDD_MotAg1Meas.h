/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg1Meas.h
* Module Description: CSIH3 peripheral configuration and motor Angle 1 measurement Complex Driver Header
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/09/15	1   	 Rijvi			initial version							                                    EA4#849
* 01/04/16  2        Selva       Implement design rev. 2.4.0     											   EA4#3210
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTAG1MEAS_H
#define CDD_MOTAG1MEAS_H


/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

#define  MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32  ((uint32)2147680256u)  /* Used in DMA */
#define  MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32      0U


/******************************************** File Level Rule Deviations *********************************************/


/*********************************************** Exported Declarations ***********************************************/

extern FUNC (void, CDD_MotAg1Meas_CODE) MotAg1MeasPer1 (void);


/**************************************** End Of Multiple Include Protection *****************************************/
#endif

