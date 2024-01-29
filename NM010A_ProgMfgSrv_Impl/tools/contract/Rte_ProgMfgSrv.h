/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_ProgMfgSrv.h
 *     SW-C Type:  ProgMfgSrv
 *  Generated at:  Thu May 12 09:20:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <ProgMfgSrv> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PROGMFGSRV_H
# define _RTE_PROGMFGSRV_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_ProgMfgSrv_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_ProgMfgSrv
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_ProgMfgSrv, RTE_CONST, RTE_CONST) Rte_Inst_ProgMfgSrv; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_ProgMfgSrv, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_GetGmLoaIgnCntr_Oper(P2VAR(uint16, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCcaMfgTrakgRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCcaMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCcaMfgTrakgWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCtrlPidSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCtrlPidSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrDataUniversalNrSysIdRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrDataUniversalNrSysIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrDataUniversalNrSysIdWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEcuIdRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEcuIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEcuIdWr_Oper(P2CONST(Ary1D_u8_16, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrNxtrMfgTrakgRd_Oper(P2VAR(Ary1D_u8_7, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrNxtrMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrNxtrMfgTrakgWr_Oper(P2CONST(Ary1D_u8_7, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrProgmDateRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrProgmDateWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrProgmSessionSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrProgmSessionSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrRepairShopCodRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrRepairShopCodWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSecuBypAuthnRd_Oper(P2VAR(Ary1D_u8_822, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSecuBypAuthnWr_Oper(P2CONST(Ary1D_u8_822, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysCodVersNrRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysCodVersNrWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysNameRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrSysNameWr_Oper(P2CONST(Ary1D_u8_20, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrVinDataRd_Oper(P2VAR(Ary1D_u8_17, AUTOMATIC, RTE_PROGMFGSRV_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_PartNrVinDataWr_Oper(P2CONST(Ary1D_u8_17, AUTOMATIC, RTE_PROGMFGSRV_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ProgMfgSrv_SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetGmLoaIgnCntr_Oper Rte_Call_ProgMfgSrv_GetGmLoaIgnCntr_Oper
# define Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrAlphaCodRd_Oper
# define Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrAlphaCodWr_Oper
# define Rte_Call_PartNrBasMdlPartNrRd_Oper Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrRd_Oper
# define Rte_Call_PartNrBasMdlPartNrWr_Oper Rte_Call_ProgMfgSrv_PartNrBasMdlPartNrWr_Oper
# define Rte_Call_PartNrCcaMfgTrakgRd_Oper Rte_Call_ProgMfgSrv_PartNrCcaMfgTrakgRd_Oper
# define Rte_Call_PartNrCcaMfgTrakgWr_Oper Rte_Call_ProgMfgSrv_PartNrCcaMfgTrakgWr_Oper
# define Rte_Call_PartNrCtrlPidSeedKeyWr_Oper Rte_Call_ProgMfgSrv_PartNrCtrlPidSeedKeyWr_Oper
# define Rte_Call_PartNrCustMfgEnaCntrRd_Oper Rte_Call_ProgMfgSrv_PartNrCustMfgEnaCntrRd_Oper
# define Rte_Call_PartNrCustMfgEnaCntrWr_Oper Rte_Call_ProgMfgSrv_PartNrCustMfgEnaCntrWr_Oper
# define Rte_Call_PartNrDataUniversalNrSysIdRd_Oper Rte_Call_ProgMfgSrv_PartNrDataUniversalNrSysIdRd_Oper
# define Rte_Call_PartNrDataUniversalNrSysIdWr_Oper Rte_Call_ProgMfgSrv_PartNrDataUniversalNrSysIdWr_Oper
# define Rte_Call_PartNrEcuIdRd_Oper Rte_Call_ProgMfgSrv_PartNrEcuIdRd_Oper
# define Rte_Call_PartNrEcuIdWr_Oper Rte_Call_ProgMfgSrv_PartNrEcuIdWr_Oper
# define Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrAlphaCodRd_Oper
# define Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrAlphaCodWr_Oper
# define Rte_Call_PartNrEndMdlPartNrRd_Oper Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrRd_Oper
# define Rte_Call_PartNrEndMdlPartNrWr_Oper Rte_Call_ProgMfgSrv_PartNrEndMdlPartNrWr_Oper
# define Rte_Call_PartNrNxtrMfgTrakgRd_Oper Rte_Call_ProgMfgSrv_PartNrNxtrMfgTrakgRd_Oper
# define Rte_Call_PartNrNxtrMfgTrakgWr_Oper Rte_Call_ProgMfgSrv_PartNrNxtrMfgTrakgWr_Oper
# define Rte_Call_PartNrProgmDateRd_Oper Rte_Call_ProgMfgSrv_PartNrProgmDateRd_Oper
# define Rte_Call_PartNrProgmDateWr_Oper Rte_Call_ProgMfgSrv_PartNrProgmDateWr_Oper
# define Rte_Call_PartNrProgmSessionSeedKeyWr_Oper Rte_Call_ProgMfgSrv_PartNrProgmSessionSeedKeyWr_Oper
# define Rte_Call_PartNrRepairShopCodRd_Oper Rte_Call_ProgMfgSrv_PartNrRepairShopCodRd_Oper
# define Rte_Call_PartNrRepairShopCodWr_Oper Rte_Call_ProgMfgSrv_PartNrRepairShopCodWr_Oper
# define Rte_Call_PartNrSecuBypAuthnRd_Oper Rte_Call_ProgMfgSrv_PartNrSecuBypAuthnRd_Oper
# define Rte_Call_PartNrSecuBypAuthnWr_Oper Rte_Call_ProgMfgSrv_PartNrSecuBypAuthnWr_Oper
# define Rte_Call_PartNrSysCodVersNrRd_Oper Rte_Call_ProgMfgSrv_PartNrSysCodVersNrRd_Oper
# define Rte_Call_PartNrSysCodVersNrWr_Oper Rte_Call_ProgMfgSrv_PartNrSysCodVersNrWr_Oper
# define Rte_Call_PartNrSysNameRd_Oper Rte_Call_ProgMfgSrv_PartNrSysNameRd_Oper
# define Rte_Call_PartNrSysNameWr_Oper Rte_Call_ProgMfgSrv_PartNrSysNameWr_Oper
# define Rte_Call_PartNrVinDataRd_Oper Rte_Call_ProgMfgSrv_PartNrVinDataRd_Oper
# define Rte_Call_PartNrVinDataWr_Oper Rte_Call_ProgMfgSrv_PartNrVinDataWr_Oper
# define Rte_Call_SetGmLoaIgnCntr_Oper Rte_Call_ProgMfgSrv_SetGmLoaIgnCntr_Oper




# define ProgMfgSrv_START_SEC_CODE
# include "ProgMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ProgMfgSrvInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGmLoaIgnCntr_Oper(uint16 *GmLoaIgnCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(const uint8 *BasMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrWr_Oper(const uint8 *BasMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakgWr_Oper(const uint8 *CcaMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKeyWr_Oper(const uint8 *CtrlPidSeedKey)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCustMfgEnaCntrWr_PortIf1_CustMfgEnaCntrZero
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysIdWr_Oper(const uint8 *DataUniversalNrSysId)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEcuIdWr_Oper(const uint8 *EcuId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrProgmDateWr_PortIf1_OutOfRange
 *   Std_ReturnType Rte_Call_PartNrProgmSessionSeedKeyWr_Oper(const uint8 *ProgmSessionSeedKey)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ProgMfgSrvInit1 ProgMfgSrvInit1
FUNC(void, ProgMfgSrv_CODE) ProgMfgSrvInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define ProgMfgSrv_STOP_SEC_CODE
# include "ProgMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_PartNrCustMfgEnaCntrWr_PortIf1_CustMfgEnaCntrZero (1U)

# define RTE_E_PartNrProgmDateWr_PortIf1_OutOfRange (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1463067740
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Sandbox/NM010A_ProgMfgSrv_Impl/tools/contract/Rte_ProgMfgSrv.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1463067740
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_PROGMFGSRV_H */
