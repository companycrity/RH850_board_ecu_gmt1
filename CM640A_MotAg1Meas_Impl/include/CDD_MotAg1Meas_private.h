/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg1Meas_private.h
* Module Description: Private header file for the CDD_MotAg1Meas component
* Project           : CBD   
* Author            : Rijvi Ahmed
*****************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       jzk9cc %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/09/15	1   	 Rijvi		 Initial version							                                    EA4#849
* 10/06/15  2        Rijvi       Updated per design rev. 2.1.0                    		                        EA4#1752 
******************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTAG1MEAS_PRIVATE_H
#define CDD_MOTAG1MEAS_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

#define  SPIPARMASK_CNT_U32 					((uint32)33554432U)
#define  CORRNTBLSIZEMASK_CNT_U08  				((uint8)127U) 


#define  PimMotAg1CorrnTbl  ( *(Ary1D_sm5p12_128 *) (Rte_Pim_MotAg1CorrnTbl()) )


/******************************************** File Level Rule Deviations *********************************************/



/*********************************************** Exported Declarations ***********************************************/


/**************************************** End Of Multiple Include Protection *****************************************/
#endif


