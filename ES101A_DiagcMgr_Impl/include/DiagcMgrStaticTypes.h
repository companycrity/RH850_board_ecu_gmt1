/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgrStaticTypes.h
* Module Description: Ststic Types header file for the DiagcMgr and DiagcMgrProxy components
* Project           : CBD   
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:             2 %
* %derived_by:          gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/26/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation								   EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation								   EA4#5110
**********************************************************************************************************************/
#ifndef DIAGCMGRSTATICTYPES_H
#define DIAGCMGRSTATICTYPES_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h" 

typedef struct
{
  uint8 NtcStInfo;
  uint8 Sts;
  uint8 AgiCntr;
} NtcInfoRec4;

typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgr[65535];

typedef struct 
{
    uint8 ApplIdx; 
    uint8 NtcInfoIdx;
	uint8 DebCntrIdx;
} NtcMapRec1;

extern CONST(NtcMapRec1, DiagcMgr_CODE) DiagcMgrNtcMap_Cnt_rec[512u];

#endif
