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
 *          File:  Rte_PartNr.h
 *     SW-C Type:  PartNr
 *  Generated at:  Thu Sep 29 09:16:53 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PartNr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PARTNR_H
# define _RTE_PARTNR_H

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

# include "Rte_PartNr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PartNr
{
  /* PIM Handles section */
  P2VAR(Ary1D_u8_6, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrBasMdlPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrCalProgdSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_9, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrCcaMfgTrakg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_10, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrCtrlPidSeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrCustMfgEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_9, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrDataUniversalNrSysId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrEcuId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_6, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrEndMdlPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_7, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrNxtrMfgTrakg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrPrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_4, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrProgmDate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_10, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrProgmSessionSeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_20, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrRepairShopCod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_822, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrSecuBypAuthn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrSysCodVersNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_20, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrSysName; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_17, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PartNrVinData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PartNr, RTE_CONST, RTE_CONST) Rte_Inst_PartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PartNr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CustMfgEnSt_Val (0U)
# define Rte_InitValue_GmSysPwrMod_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PartNr_GmSysPwrMod_Val(P2VAR(GmSysPwrMod1, AUTOMATIC, RTE_PARTNR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PartNr_CustMfgEnSt_Val(MfgEnaSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrBasMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrCalProgdSts_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrCcaMfgTrakg_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrCtrlPidSeedKey_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrCustMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrDataUniversalNrSysId_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrEcuId_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrEndMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrNxtrMfgTrakg_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrProgmDate_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrProgmSessionSeedKey_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrRepairShopCod_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrSecuBypAuthn_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrSysCodVersNr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrSysName_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_PartNrVinData_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PartNr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PartNr_PartNrCmpdVehPartnProdtStruct_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PartNr_PartNrCmpdVehPartnProdtStruct_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrBasMdlPartNrDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_6, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrBasMdlPartNrDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(uint8, RTE_CODE) Rte_CData_PartNr_PartNrCalProgdStsDft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrCcaMfgTrakgDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_9, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrCcaMfgTrakgDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrCtrlPidSeedKeyDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_10, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrCtrlPidSeedKeyDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(uint8, RTE_CODE) Rte_CData_PartNr_PartNrCustMfgEnaCntrDft(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrDataUniversalNrSysIdDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_9, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrDataUniversalNrSysIdDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrEndMdlPartNrDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_6, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrEndMdlPartNrDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrNxtrMfgTrakgDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_7, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrNxtrMfgTrakgDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrProgmDateDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_4, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrProgmDateDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrProgmSessionSeedKeyDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_10, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrProgmSessionSeedKeyDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrRepairShopCodDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_20, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrRepairShopCodDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrSysCodVersNrDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_2, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrSysCodVersNrDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrSysNameDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_20, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrSysNameDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrVinDataDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_17, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_PartNr_PartNrVinDataDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_GmSysPwrMod_Val Rte_Read_PartNr_GmSysPwrMod_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CustMfgEnSt_Val Rte_Write_PartNr_CustMfgEnSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus Rte_Call_PartNr_PartNrBasMdlPartNr_SetRamBlockStatus
# define Rte_Call_PartNrCalProgdSts_SetRamBlockStatus Rte_Call_PartNr_PartNrCalProgdSts_SetRamBlockStatus
# define Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus Rte_Call_PartNr_PartNrCcaMfgTrakg_SetRamBlockStatus
# define Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus Rte_Call_PartNr_PartNrCtrlPidSeedKey_SetRamBlockStatus
# define Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus Rte_Call_PartNr_PartNrCustMfgEnaCntr_SetRamBlockStatus
# define Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus Rte_Call_PartNr_PartNrDataUniversalNrSysId_SetRamBlockStatus
# define Rte_Call_PartNrEcuId_SetRamBlockStatus Rte_Call_PartNr_PartNrEcuId_SetRamBlockStatus
# define Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus Rte_Call_PartNr_PartNrEndMdlPartNr_SetRamBlockStatus
# define Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus Rte_Call_PartNr_PartNrNxtrMfgTrakg_SetRamBlockStatus
# define Rte_Call_PartNrProgmDate_SetRamBlockStatus Rte_Call_PartNr_PartNrProgmDate_SetRamBlockStatus
# define Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus Rte_Call_PartNr_PartNrProgmSessionSeedKey_SetRamBlockStatus
# define Rte_Call_PartNrRepairShopCod_SetRamBlockStatus Rte_Call_PartNr_PartNrRepairShopCod_SetRamBlockStatus
# define Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus Rte_Call_PartNr_PartNrSecuBypAuthn_SetRamBlockStatus
# define Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus Rte_Call_PartNr_PartNrSysCodVersNr_SetRamBlockStatus
# define Rte_Call_PartNrSysName_SetRamBlockStatus Rte_Call_PartNr_PartNrSysName_SetRamBlockStatus
# define Rte_Call_PartNrVinData_SetRamBlockStatus Rte_Call_PartNr_PartNrVinData_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_PartNr_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_PartNrCalProgdStsDft Rte_CData_PartNr_PartNrCalProgdStsDft

# define Rte_CData_PartNrCustMfgEnaCntrDft Rte_CData_PartNr_PartNrCustMfgEnaCntrDft

# define Rte_CData_PartNrBasMdlPartNrDft Rte_CData_PartNr_PartNrBasMdlPartNrDft

# define Rte_CData_PartNrCcaMfgTrakgDft Rte_CData_PartNr_PartNrCcaMfgTrakgDft

# define Rte_CData_PartNrCtrlPidSeedKeyDft Rte_CData_PartNr_PartNrCtrlPidSeedKeyDft

# define Rte_CData_PartNrDataUniversalNrSysIdDft Rte_CData_PartNr_PartNrDataUniversalNrSysIdDft

# define Rte_CData_PartNrEndMdlPartNrDft Rte_CData_PartNr_PartNrEndMdlPartNrDft

# define Rte_CData_PartNrNxtrMfgTrakgDft Rte_CData_PartNr_PartNrNxtrMfgTrakgDft

# define Rte_CData_PartNrProgmDateDft Rte_CData_PartNr_PartNrProgmDateDft

# define Rte_CData_PartNrProgmSessionSeedKeyDft Rte_CData_PartNr_PartNrProgmSessionSeedKeyDft

# define Rte_CData_PartNrRepairShopCodDft Rte_CData_PartNr_PartNrRepairShopCodDft

# define Rte_CData_PartNrSysCodVersNrDft Rte_CData_PartNr_PartNrSysCodVersNrDft

# define Rte_CData_PartNrSysNameDft Rte_CData_PartNr_PartNrSysNameDft

# define Rte_CData_PartNrVinDataDft Rte_CData_PartNr_PartNrVinDataDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D Rte_Prm_PartNr_PartNrCmpdVehPartnProdtStruct_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PartNrCalProgdSts() (Rte_Inst_PartNr->Pim_PartNrCalProgdSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PartNrCustMfgEnaCntr() (Rte_Inst_PartNr->Pim_PartNrCustMfgEnaCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PartNrPrevSysPwrModRun() (Rte_Inst_PartNr->Pim_PartNrPrevSysPwrModRun) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrBasMdlPartNr() (*Rte_Inst_PartNr->Pim_PartNrBasMdlPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrBasMdlPartNr() (Rte_Inst_PartNr->Pim_PartNrBasMdlPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrCcaMfgTrakg() (*Rte_Inst_PartNr->Pim_PartNrCcaMfgTrakg) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrCcaMfgTrakg() (Rte_Inst_PartNr->Pim_PartNrCcaMfgTrakg) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrCtrlPidSeedKey() (*Rte_Inst_PartNr->Pim_PartNrCtrlPidSeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrCtrlPidSeedKey() (Rte_Inst_PartNr->Pim_PartNrCtrlPidSeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrDataUniversalNrSysId() (*Rte_Inst_PartNr->Pim_PartNrDataUniversalNrSysId) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrDataUniversalNrSysId() (Rte_Inst_PartNr->Pim_PartNrDataUniversalNrSysId) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrEcuId() (*Rte_Inst_PartNr->Pim_PartNrEcuId) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrEcuId() (Rte_Inst_PartNr->Pim_PartNrEcuId) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrEndMdlPartNr() (*Rte_Inst_PartNr->Pim_PartNrEndMdlPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrEndMdlPartNr() (Rte_Inst_PartNr->Pim_PartNrEndMdlPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrNxtrMfgTrakg() (*Rte_Inst_PartNr->Pim_PartNrNxtrMfgTrakg) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrNxtrMfgTrakg() (Rte_Inst_PartNr->Pim_PartNrNxtrMfgTrakg) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrProgmDate() (*Rte_Inst_PartNr->Pim_PartNrProgmDate) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrProgmDate() (Rte_Inst_PartNr->Pim_PartNrProgmDate) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrProgmSessionSeedKey() (*Rte_Inst_PartNr->Pim_PartNrProgmSessionSeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrProgmSessionSeedKey() (Rte_Inst_PartNr->Pim_PartNrProgmSessionSeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrRepairShopCod() (*Rte_Inst_PartNr->Pim_PartNrRepairShopCod) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrRepairShopCod() (Rte_Inst_PartNr->Pim_PartNrRepairShopCod) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrSecuBypAuthn() (*Rte_Inst_PartNr->Pim_PartNrSecuBypAuthn) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrSecuBypAuthn() (Rte_Inst_PartNr->Pim_PartNrSecuBypAuthn) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrSysCodVersNr() (*Rte_Inst_PartNr->Pim_PartNrSysCodVersNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrSysCodVersNr() (Rte_Inst_PartNr->Pim_PartNrSysCodVersNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrSysName() (*Rte_Inst_PartNr->Pim_PartNrSysName) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrSysName() (Rte_Inst_PartNr->Pim_PartNrSysName) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PartNrVinData() (*Rte_Inst_PartNr->Pim_PartNrVinData) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PartNrVinData() (Rte_Inst_PartNr->Pim_PartNrVinData) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PartNrCalProgdSts(void)
 *   uint8 *Rte_Pim_PartNrCustMfgEnaCntr(void)
 *   boolean *Rte_Pim_PartNrPrevSysPwrModRun(void)
 *   uint8 *Rte_Pim_PartNrBasMdlPartNr(void)
 *   uint8 *Rte_Pim_PartNrCcaMfgTrakg(void)
 *   uint8 *Rte_Pim_PartNrCtrlPidSeedKey(void)
 *   uint8 *Rte_Pim_PartNrDataUniversalNrSysId(void)
 *   uint8 *Rte_Pim_PartNrEcuId(void)
 *   uint8 *Rte_Pim_PartNrEndMdlPartNr(void)
 *   uint8 *Rte_Pim_PartNrNxtrMfgTrakg(void)
 *   uint8 *Rte_Pim_PartNrProgmDate(void)
 *   uint8 *Rte_Pim_PartNrProgmSessionSeedKey(void)
 *   uint8 *Rte_Pim_PartNrRepairShopCod(void)
 *   uint8 *Rte_Pim_PartNrSecuBypAuthn(void)
 *   uint8 *Rte_Pim_PartNrSysCodVersNr(void)
 *   uint8 *Rte_Pim_PartNrSysName(void)
 *   uint8 *Rte_Pim_PartNrVinData(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 Rte_CData_PartNrCalProgdStsDft(void)
 *   uint8 Rte_CData_PartNrCustMfgEnaCntrDft(void)
 *   uint8 *Rte_CData_PartNrBasMdlPartNrDft(void)
 *   uint8 *Rte_CData_PartNrCcaMfgTrakgDft(void)
 *   uint8 *Rte_CData_PartNrCtrlPidSeedKeyDft(void)
 *   uint8 *Rte_CData_PartNrDataUniversalNrSysIdDft(void)
 *   uint8 *Rte_CData_PartNrEndMdlPartNrDft(void)
 *   uint8 *Rte_CData_PartNrNxtrMfgTrakgDft(void)
 *   uint8 *Rte_CData_PartNrProgmDateDft(void)
 *   uint8 *Rte_CData_PartNrProgmSessionSeedKeyDft(void)
 *   uint8 *Rte_CData_PartNrRepairShopCodDft(void)
 *   uint8 *Rte_CData_PartNrSysCodVersNrDft(void)
 *   uint8 *Rte_CData_PartNrSysNameDft(void)
 *   uint8 *Rte_CData_PartNrVinDataDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 *Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D(void)
 *
 *********************************************************************************************************************/


# define PartNr_START_SEC_CODE
# include "PartNr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrBasMdlPartNrAlphaCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrAlphaCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrBasMdlPartNrAlphaCodRd_Oper PartNrBasMdlPartNrAlphaCodRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrBasMdlPartNrAlphaCodWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrAlphaCodWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrAlphaCodWr_Oper(const uint8 *BasMdlPartNrAlphaCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrBasMdlPartNrAlphaCodWr_Oper PartNrBasMdlPartNrAlphaCodWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrBasMdlPartNrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrBasMdlPartNrRd_Oper PartNrBasMdlPartNrRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrBasMdlPartNrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrBasMdlPartNrWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrBasMdlPartNrWr_Oper(const uint8 *BasMdlPartNr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrBasMdlPartNrWr_Oper PartNrBasMdlPartNrWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCalProgdStsRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCalProgdStsRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCalProgdStsRd_Oper(uint8 *CalProgdSts)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCalProgdStsRd_Oper PartNrCalProgdStsRd_Oper
FUNC(void, PartNr_CODE) PartNrCalProgdStsRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCalProgdStsWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCalProgdStsWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCalProgdStsWr_Oper(uint8 CalProgdSts)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCalProgdStsWr1_InvldVal
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCalProgdStsWr_Oper PartNrCalProgdStsWr_Oper
FUNC(Std_ReturnType, PartNr_CODE) PartNrCalProgdStsWr_Oper(uint8 CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCcaMfgTrakgRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCcaMfgTrakgRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCcaMfgTrakgRd_Oper PartNrCcaMfgTrakgRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCcaMfgTrakgWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCcaMfgTrakgWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCcaMfgTrakgWr_Oper(const uint8 *CcaMfgTrakg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCcaMfgTrakgWr_Oper PartNrCcaMfgTrakgWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCmpdVehPartnProdtStructRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCmpdVehPartnProdtStructRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCmpdVehPartnProdtStructRd_Oper(uint8 *CmpdVehPartnProdtStruct)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCmpdVehPartnProdtStructRd_Oper PartNrCmpdVehPartnProdtStructRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(Ary1D_u8_14, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidKeyChk_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidKeyChk>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCtrlPidKeyChk_Oper(const uint8 *CtrlPidKey)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCtrlPidKeyChk1_InvldKey
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCtrlPidKeyChk_Oper PartNrCtrlPidKeyChk_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidKeyWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidKeyWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidKeyWr_Oper(const uint8 *CtrlPidKey)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCtrlPidKeyWr_Oper PartNrCtrlPidKeyWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidSeedKeyWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedKeyWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidSeedKeyWr_Oper(const uint8 *CtrlPidSeedKey)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCtrlPidSeedKeyWr_Oper PartNrCtrlPidSeedKeyWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidSeedRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidSeedRd_Oper(uint8 *CtrlPidSeed)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCtrlPidSeedRd_Oper PartNrCtrlPidSeedRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidSeedUpprByteRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedUpprByteRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCtrlPidSeedUpprByteRd_Oper(uint8 *CtrlPidSeedUpprByte)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCtrlPidSeedUpprByteRd_Oper PartNrCtrlPidSeedUpprByteRd_Oper
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedUpprByteRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeedUpprByte); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCtrlPidSeedUpprByteWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCtrlPidSeedUpprByteWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCtrlPidSeedUpprByteWr_Oper PartNrCtrlPidSeedUpprByteWr_Oper
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCustMfgEnaCntrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCustMfgEnaCntrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCustMfgEnaCntrRd_Oper PartNrCustMfgEnaCntrRd_Oper
FUNC(void, PartNr_CODE) PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrCustMfgEnaCntrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrCustMfgEnaCntrWr>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrCustMfgEnaCntrWr_Oper PartNrCustMfgEnaCntrWr_Oper
FUNC(Std_ReturnType, PartNr_CODE) PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrDataUniversalNrSysIdRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrDataUniversalNrSysIdRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrDataUniversalNrSysIdRd_Oper PartNrDataUniversalNrSysIdRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrDataUniversalNrSysIdWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrDataUniversalNrSysIdWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrDataUniversalNrSysIdWr_Oper(const uint8 *DataUniversalNrSysId)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrDataUniversalNrSysIdWr_Oper PartNrDataUniversalNrSysIdWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEcuIdRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEcuIdRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrEcuIdRd_Oper PartNrEcuIdRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEcuIdRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEcuIdWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEcuIdWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrEcuId_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEcuIdWr_Oper(const uint8 *EcuId_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrEcuIdWr_Oper PartNrEcuIdWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEcuIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEcuIdWr_Oper(P2CONST(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEndMdlPartNrAlphaCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrAlphaCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrEndMdlPartNrAlphaCodRd_Oper PartNrEndMdlPartNrAlphaCodRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEndMdlPartNrAlphaCodWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrAlphaCodWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrEndMdlPartNrAlphaCodWr_Oper PartNrEndMdlPartNrAlphaCodWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEndMdlPartNrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrEndMdlPartNrRd_Oper PartNrEndMdlPartNrRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrEndMdlPartNrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrEndMdlPartNrWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrEndMdlPartNrWr_Oper PartNrEndMdlPartNrWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrInit1 PartNrInit1
FUNC(void, PartNr_CODE) PartNrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrLstRepairShopCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrLstRepairShopCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrLstRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrLstRepairShopCodRd_Oper PartNrLstRepairShopCodRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrNxtrMfgTrakgRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrNxtrMfgTrakgRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrNxtrMfgTrakgRd_Oper PartNrNxtrMfgTrakgRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrNxtrMfgTrakgWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrNxtrMfgTrakgWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrNxtrMfgTrakgWr_Oper PartNrNxtrMfgTrakgWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CustMfgEnSt_Val(MfgEnaSt1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrPer1 PartNrPer1
FUNC(void, PartNr_CODE) PartNrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmDateRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmDateRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrProgmDateRd_Oper(uint8 *ProgmDate)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrProgmDateRd_Oper PartNrProgmDateRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrProgmDateRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmDateWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmDateWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrProgmDate_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrProgmDateWr1_OutOfRange
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrProgmDateWr_Oper PartNrProgmDateWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmDateWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmSessionKeyChk_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmSessionKeyChk>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PartNrProgmSessionKeyChk_Oper(const uint8 *ProgmSessionKey)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PartNrProgmSessionKeyChk1_InvldKey
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrProgmSessionKeyChk_Oper PartNrProgmSessionKeyChk_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmSessionSeedKeyWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmSessionSeedKeyWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrProgmSessionSeedKeyWr_Oper(const uint8 *ProgmSessionSeedKey)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrProgmSessionSeedKeyWr_Oper PartNrProgmSessionSeedKeyWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrProgmSessionSeedRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrProgmSessionSeedRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrProgmSessionSeedRd_Oper(uint8 *ProgmSessionSeed)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrProgmSessionSeedRd_Oper PartNrProgmSessionSeedRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrRepairShopCodRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrRepairShopCodRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrRepairShopCodRd_Oper PartNrRepairShopCodRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrRepairShopCodRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrRepairShopCodWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrRepairShopCodWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrRepairShopCodWr_Oper PartNrRepairShopCodWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrRepairShopCodWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSecuBypAuthnRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSecuBypAuthnRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrSecuBypAuthnRd_Oper PartNrSecuBypAuthnRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSecuBypAuthnWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSecuBypAuthnWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrSecuBypAuthnWr_Oper PartNrSecuBypAuthnWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSysCodVersNrRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysCodVersNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrSysCodVersNrRd_Oper PartNrSysCodVersNrRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSysCodVersNrWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysCodVersNrWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrSysCodVersNrWr_Oper PartNrSysCodVersNrWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSysNameRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysNameRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysNameRd_Oper(uint8 *SysName)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrSysNameRd_Oper PartNrSysNameRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysNameRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrSysNameWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrSysNameWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrSysName_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrSysNameWr_Oper(const uint8 *SysName)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrSysNameWr_Oper PartNrSysNameWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysNameWr_Oper(P2CONST(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrVinDataRd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrVinDataRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrVinDataRd_Oper(uint8 *VinData)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrVinDataRd_Oper PartNrVinDataRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrVinDataRd_Oper(P2VAR(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PartNrVinDataWr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PartNrVinDataWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PartNrVinData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PartNrVinDataWr_Oper(const uint8 *VinData)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PartNrVinDataWr_Oper PartNrVinDataWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrVinDataWr_Oper(P2CONST(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define PartNr_STOP_SEC_CODE
# include "PartNr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_PartNrCalProgdStsWr1_InvldVal (1U)

# define RTE_E_PartNrCtrlPidKeyChk1_InvldKey (1U)

# define RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero (1U)

# define RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero (1U)

# define RTE_E_PartNrProgmDateWr1_OutOfRange (1U)

# define RTE_E_PartNrProgmSessionKeyChk1_InvldKey (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1475165340
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/GM_002A_PartNr_Impl-kzdyfh/GM_002A_PartNr_Impl/tools/contract/Rte_PartNr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1475165340
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_PARTNR_H */
