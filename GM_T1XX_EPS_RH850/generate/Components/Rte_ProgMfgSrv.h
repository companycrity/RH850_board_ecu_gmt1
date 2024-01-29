/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_ProgMfgSrv.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <ProgMfgSrv>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PROGMFGSRV_H
# define _RTE_PROGMFGSRV_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_ProgMfgSrv_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_GMOVRLSTMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMOVRLSTMGR_APPL_CODE) GetGmLoaIgnCntr_Oper(P2VAR(uint16, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMOVRLSTMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetGmLoaIgnCntr_Oper(arg1) (GetGmLoaIgnCntr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(arg1) (PartNrBasMdlPartNrAlphaCodRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(arg1) (PartNrBasMdlPartNrAlphaCodWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrBasMdlPartNrRd_Oper(arg1) (PartNrBasMdlPartNrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrBasMdlPartNrWr_Oper(arg1) (PartNrBasMdlPartNrWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCcaMfgTrakgRd_Oper(arg1) (PartNrCcaMfgTrakgRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCcaMfgTrakgWr_Oper(arg1) (PartNrCcaMfgTrakgWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCtrlPidSeedKeyWr_Oper(arg1) (PartNrCtrlPidSeedKeyWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCustMfgEnaCntrRd_Oper(arg1) (PartNrCustMfgEnaCntrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrCustMfgEnaCntrWr_Oper PartNrCustMfgEnaCntrWr_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(arg1) (PartNrDataUniversalNrSysIdRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrDataUniversalNrSysIdWr_Oper(arg1) (PartNrDataUniversalNrSysIdWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEcuIdRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEcuIdRd_Oper(arg1) (PartNrEcuIdRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEcuIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEcuIdWr_Oper(P2CONST(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEcuIdWr_Oper(arg1) (PartNrEcuIdWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(arg1) (PartNrEndMdlPartNrAlphaCodRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(arg1) (PartNrEndMdlPartNrAlphaCodWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrRd_Oper(arg1) (PartNrEndMdlPartNrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrEndMdlPartNrWr_Oper(arg1) (PartNrEndMdlPartNrWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrNxtrMfgTrakgRd_Oper(arg1) (PartNrNxtrMfgTrakgRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrNxtrMfgTrakgWr_Oper(arg1) (PartNrNxtrMfgTrakgWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmDateRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrProgmDateRd_Oper(arg1) (PartNrProgmDateRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(Std_ReturnType, RTE_PARTNR_APPL_CODE) PartNrProgmDateWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrProgmDateWr_Oper PartNrProgmDateWr_Oper
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrProgmSessionSeedKeyWr_Oper(arg1) (PartNrProgmSessionSeedKeyWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrRepairShopCodRd_Oper(arg1) (PartNrRepairShopCodRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrRepairShopCodWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrRepairShopCodWr_Oper(arg1) (PartNrRepairShopCodWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSecuBypAuthnRd_Oper(arg1) (PartNrSecuBypAuthnRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSecuBypAuthnWr_Oper(arg1) (PartNrSecuBypAuthnWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysCodVersNrRd_Oper(arg1) (PartNrSysCodVersNrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysCodVersNrWr_Oper(arg1) (PartNrSysCodVersNrWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysNameRd_Oper(arg1) (PartNrSysNameRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrSysNameWr_Oper(P2CONST(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrSysNameWr_Oper(arg1) (PartNrSysNameWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataRd_Oper(P2VAR(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrVinDataRd_Oper(arg1) (PartNrVinDataRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_PARTNR_APPL_CODE) PartNrVinDataWr_Oper(P2CONST(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_PARTNR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrVinDataWr_Oper(arg1) (PartNrVinDataWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_GMOVRLSTMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMOVRLSTMGR_APPL_CODE) SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMOVRLSTMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetGmLoaIgnCntr_Oper(arg1) (SetGmLoaIgnCntr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define ProgMfgSrv_START_SEC_CODE
# include "ProgMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ProgMfgSrvInit1 ProgMfgSrvInit1
# endif

FUNC(void, ProgMfgSrv_CODE) ProgMfgSrvInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define ProgMfgSrv_STOP_SEC_CODE
# include "ProgMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_PartNrCustMfgEnaCntrWr_PortIf1_CustMfgEnaCntrZero (1U)

#  define RTE_E_PartNrProgmDateWr_PortIf1_OutOfRange (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PROGMFGSRV_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
