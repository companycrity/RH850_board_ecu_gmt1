/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg0Meas.h
* Module Description: CSIH1 peripheral configuration and motor Angle 0 measurement Complex Driver Header
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/19/15	1   	 Rijvi			initial version							                                    EA4#541
* 01/04/16  5        Selva       Implement design rev. 3.4.0     											   EA4#3208
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTAG0MEAS_H
#define CDD_MOTAG0MEAS_H


/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

#define  MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32  ((uint32)2147680256u)  /* Used in DMA */
#define  MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32         0U

/******************************************** File Level Rule Deviations *********************************************/


/*********************************************** Exported Declarations ***********************************************/

extern FUNC (void, CDD_MotAg0Meas_CODE) MotAg0MeasPer1 (void);


/**************************************** End Of Multiple Include Protection *****************************************/
#endif

