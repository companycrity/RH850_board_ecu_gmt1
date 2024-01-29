/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   Ap_StHlthSw.h
* Module Description: Component Header file for StHlthSw
* Project           : CBD
* Author            : Vinod / Akilan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       tzyksv %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 11/06/15  1       Akilan     SoHS Initial Version							                                
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef STHLTHSIGSTC_H
#define STHLTHSIGSTC_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "osek.h"
#include "os.h"
/******************************************** File Level Rule Deviations *********************************************/

/****************************************************** Macros *******************************************************/


/****************************************************** Typedefs*******************************************************/

typedef   uint8 (*GetDataOper)(void );

typedef struct
{
  GetDataOper         GetStHlthDataOper;  /* Function pointer which provides State of Health value for the signal */
  uint16              SamplePerSec;       /* Counter to use for average calculation for every 1 second */                                
  TaskType            TaskRef;            /* Task in which the signal is updated. */
  uint8               RamStorgOffs;       /* Address offset from start of RAM buffer for the signal. 
                                             For each signal Raw, Max, Min, Average will be maintained.*/
  uint8               NvmStorgOffs;       /* This is the offset from the start of the NvM block, where the signal 
                                             will be located */   
}StHlthSigStcPrmRec1;

typedef struct
{
    const uint32 *CrcStrtAdr;
}StHlthSigStcCrcAdrRec1;


typedef struct
{
  StHlthSigStcPrmRec1 const *SigPrm;
  StHlthSigStcCrcAdrRec1 const *CrcAdr;

}StHlthSigStcCfgRec1;


/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/

														 

#endif /* STHLTHSIGSTC_H */
