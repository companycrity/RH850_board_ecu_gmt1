/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg0Meas_private.h
* Module Description: Private header file for the CDD_MotAg0Meas component
* Project           : CBD   
* Author            : Rijvi Ahmed
*****************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       jzk9cc %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/19/15	1   	 Rijvi			Initial version							                                    EA4#541
* 10/04/15  2        Rijvi          Updated per design rev. 3.0.0     											EA4#1748  
******************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTAG0MEAS_PRIVATE_H
#define CDD_MOTAG0MEAS_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

#define  SPIPARMASK_CNT_U32 				((uint32)33554432U) 
#define  CORRNTBLSIZEMASK_CNT_U08  			((uint8)127U) 


#define  PimMotAg0CorrnTbl  ( *(Ary1D_sm5p12_128 *) (Rte_Pim_MotAg0CorrnTbl()) )


/******************************************** File Level Rule Deviations *********************************************/



/*********************************************** Exported Declarations ***********************************************/


/**************************************** End Of Multiple Include Protection *****************************************/
#endif


