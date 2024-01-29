/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: CmnMfgSrv_NxtrMemMap.h
* Module Description: Common Manufacturing Services Nexteer Memory Map
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 01/26/16  1        JWJ       Added disable bit parsing functions                                          EA4#2518
***********************************************************************************************************************/
#ifndef CMNMFGSRV_NXTRMEMMAP_H
#define CMNMFGSRV_NXTRMEMMAP_H

#ifdef CMNMFGSRV_START_SEC_VAR_NOINIT_8GS
# undef CMNMFGSRV_START_SEC_VAR_NOINIT_8GS
#pragma ghs section bss=".osGlobalShared_bss"
#pragma ghs section sbss=".osGlobalShared_sbss"
#pragma ghs section data=".osGlobalShared_data"
#pragma ghs section sdata=".osGlobalShared_sdata"
#endif

#ifdef CMNMFGSRV_STOP_SEC_VAR_NOINIT_8GS
# undef CMNMFGSRV_STOP_SEC_VAR_NOINIT_8GS
#pragma ghs section bss=default
#pragma ghs section sbss=default
#pragma ghs section data=default
#pragma ghs section sdata=default
#endif

#endif
/* End of File: CmnMfgSrv_NxtrMemMap.h */

