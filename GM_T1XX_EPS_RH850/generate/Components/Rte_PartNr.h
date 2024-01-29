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
 *          File:  Rte_PartNr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PartNr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PARTNR_H
# define _RTE_PARTNR_H

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

# include "Rte_PartNr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_PartNr_CustMfgEnSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmSysPwrMod1, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CustMfgEnSt_Val (0U)
#  define Rte_InitValue_GmSysPwrMod_Val (0U)
#  define Rte_InitValue_SysPwrModRun_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_GmSysPwrMod_Val Rte_Read_PartNr_GmSysPwrMod_Val
#  define Rte_Read_PartNr_GmSysPwrMod_Val(data) (*(data) = Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysPwrModRun_Logl Rte_Read_PartNr_SysPwrModRun_Logl
#  define Rte_Read_PartNr_SysPwrModRun_Logl(data) (*(data) = Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_CustMfgEnSt_Val Rte_Write_PartNr_CustMfgEnSt_Val
#  define Rte_Write_PartNr_CustMfgEnSt_Val(data) (Rte_PartNr_CustMfgEnSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PartNrBasMdlPartNr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)89, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrCalProgdSts_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)94, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrCcaMfgTrakg_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)85, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrCtrlPidSeedKey_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)90, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrCustMfgEnaCntr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)95, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrDataUniversalNrSysId_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)93, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrEcuId_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)55, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrEndMdlPartNr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)88, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrNxtrMfgTrakg_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)87, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrProgmDate_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)92, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrProgmSessionSeedKey_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)96, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrRepairShopCod_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)83, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrSecuBypAuthn_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)53, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrSysCodVersNr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)86, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrSysName_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)84, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PartNrVinData_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)91, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts6_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_PartNrCalProgdStsDft() (((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrCalProgdStsDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_PartNrCustMfgEnaCntrDft() (((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrCustMfgEnaCntrDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrBasMdlPartNrDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrBasMdlPartNrDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrBasMdlPartNrDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrBasMdlPartNrDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrCcaMfgTrakgDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrCcaMfgTrakgDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrCcaMfgTrakgDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrCcaMfgTrakgDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrCtrlPidSeedKeyDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrCtrlPidSeedKeyDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrCtrlPidSeedKeyDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrCtrlPidSeedKeyDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrDataUniversalNrSysIdDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrDataUniversalNrSysIdDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrDataUniversalNrSysIdDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrDataUniversalNrSysIdDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrEndMdlPartNrDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrEndMdlPartNrDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrEndMdlPartNrDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrEndMdlPartNrDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrNxtrMfgTrakgDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrNxtrMfgTrakgDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrNxtrMfgTrakgDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrNxtrMfgTrakgDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrProgmDateDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrProgmDateDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrProgmDateDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrProgmDateDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrProgmSessionSeedKeyDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrProgmSessionSeedKeyDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrProgmSessionSeedKeyDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrProgmSessionSeedKeyDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrRepairShopCodDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrRepairShopCodDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrRepairShopCodDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrRepairShopCodDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrSysCodVersNrDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrSysCodVersNrDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrSysCodVersNrDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrSysCodVersNrDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrSysNameDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrSysNameDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrSysNameDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrSysNameDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PartNrVinDataDft() (&(((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrVinDataDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PartNrVinDataDft() (&((P2CONST(Rte_Calprm_PartNr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP])->PartNrVinDataDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->PartNrCmpdVehPartnProdtStruct_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PartNrCmpdVehPartnProdtStruct_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->PartNrCmpdVehPartnProdtStruct_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCalProgdSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCustMfgEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrPrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrBasMdlPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_9, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCcaMfgTrakg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrCtrlPidSeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_9, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrDataUniversalNrSysId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrEcuId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrEndMdlPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_7, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrNxtrMfgTrakg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrProgmDate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrProgmSessionSeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrRepairShopCod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_822, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSecuBypAuthn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSysCodVersNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrSysName; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_17, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_PartNr_PartNrVinData; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PartNrCalProgdSts() \
  (&Rte_PartNr_PartNrCalProgdSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PartNrCustMfgEnaCntr() \
  (&Rte_PartNr_PartNrCustMfgEnaCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PartNrPrevSysPwrModRun() \
  (&Rte_PartNr_PartNrPrevSysPwrModRun) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrBasMdlPartNr() (&((*RtePim_PartNrBasMdlPartNr())[0]))
#  else
#   define Rte_Pim_PartNrBasMdlPartNr() RtePim_PartNrBasMdlPartNr()
#  endif
#  define RtePim_PartNrBasMdlPartNr() \
  (&Rte_PartNr_PartNrBasMdlPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrCcaMfgTrakg() (&((*RtePim_PartNrCcaMfgTrakg())[0]))
#  else
#   define Rte_Pim_PartNrCcaMfgTrakg() RtePim_PartNrCcaMfgTrakg()
#  endif
#  define RtePim_PartNrCcaMfgTrakg() \
  (&Rte_PartNr_PartNrCcaMfgTrakg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrCtrlPidSeedKey() (&((*RtePim_PartNrCtrlPidSeedKey())[0]))
#  else
#   define Rte_Pim_PartNrCtrlPidSeedKey() RtePim_PartNrCtrlPidSeedKey()
#  endif
#  define RtePim_PartNrCtrlPidSeedKey() \
  (&Rte_PartNr_PartNrCtrlPidSeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrDataUniversalNrSysId() (&((*RtePim_PartNrDataUniversalNrSysId())[0]))
#  else
#   define Rte_Pim_PartNrDataUniversalNrSysId() RtePim_PartNrDataUniversalNrSysId()
#  endif
#  define RtePim_PartNrDataUniversalNrSysId() \
  (&Rte_PartNr_PartNrDataUniversalNrSysId) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrEcuId() (&((*RtePim_PartNrEcuId())[0]))
#  else
#   define Rte_Pim_PartNrEcuId() RtePim_PartNrEcuId()
#  endif
#  define RtePim_PartNrEcuId() \
  (&Rte_PartNr_PartNrEcuId) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrEndMdlPartNr() (&((*RtePim_PartNrEndMdlPartNr())[0]))
#  else
#   define Rte_Pim_PartNrEndMdlPartNr() RtePim_PartNrEndMdlPartNr()
#  endif
#  define RtePim_PartNrEndMdlPartNr() \
  (&Rte_PartNr_PartNrEndMdlPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrNxtrMfgTrakg() (&((*RtePim_PartNrNxtrMfgTrakg())[0]))
#  else
#   define Rte_Pim_PartNrNxtrMfgTrakg() RtePim_PartNrNxtrMfgTrakg()
#  endif
#  define RtePim_PartNrNxtrMfgTrakg() \
  (&Rte_PartNr_PartNrNxtrMfgTrakg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrProgmDate() (&((*RtePim_PartNrProgmDate())[0]))
#  else
#   define Rte_Pim_PartNrProgmDate() RtePim_PartNrProgmDate()
#  endif
#  define RtePim_PartNrProgmDate() \
  (&Rte_PartNr_PartNrProgmDate) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrProgmSessionSeedKey() (&((*RtePim_PartNrProgmSessionSeedKey())[0]))
#  else
#   define Rte_Pim_PartNrProgmSessionSeedKey() RtePim_PartNrProgmSessionSeedKey()
#  endif
#  define RtePim_PartNrProgmSessionSeedKey() \
  (&Rte_PartNr_PartNrProgmSessionSeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrRepairShopCod() (&((*RtePim_PartNrRepairShopCod())[0]))
#  else
#   define Rte_Pim_PartNrRepairShopCod() RtePim_PartNrRepairShopCod()
#  endif
#  define RtePim_PartNrRepairShopCod() \
  (&Rte_PartNr_PartNrRepairShopCod) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrSecuBypAuthn() (&((*RtePim_PartNrSecuBypAuthn())[0]))
#  else
#   define Rte_Pim_PartNrSecuBypAuthn() RtePim_PartNrSecuBypAuthn()
#  endif
#  define RtePim_PartNrSecuBypAuthn() \
  (&Rte_PartNr_PartNrSecuBypAuthn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrSysCodVersNr() (&((*RtePim_PartNrSysCodVersNr())[0]))
#  else
#   define Rte_Pim_PartNrSysCodVersNr() RtePim_PartNrSysCodVersNr()
#  endif
#  define RtePim_PartNrSysCodVersNr() \
  (&Rte_PartNr_PartNrSysCodVersNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrSysName() (&((*RtePim_PartNrSysName())[0]))
#  else
#   define Rte_Pim_PartNrSysName() RtePim_PartNrSysName()
#  endif
#  define RtePim_PartNrSysName() \
  (&Rte_PartNr_PartNrSysName) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PartNrVinData() (&((*RtePim_PartNrVinData())[0]))
#  else
#   define Rte_Pim_PartNrVinData() RtePim_PartNrVinData()
#  endif
#  define RtePim_PartNrVinData() \
  (&Rte_PartNr_PartNrVinData) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define PartNr_START_SEC_CODE
# include "PartNr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_PartNrBasMdlPartNrAlphaCodRd_Oper PartNrBasMdlPartNrAlphaCodRd_Oper
#  define RTE_RUNNABLE_PartNrBasMdlPartNrAlphaCodWr_Oper PartNrBasMdlPartNrAlphaCodWr_Oper
#  define RTE_RUNNABLE_PartNrBasMdlPartNrRd_Oper PartNrBasMdlPartNrRd_Oper
#  define RTE_RUNNABLE_PartNrBasMdlPartNrWr_Oper PartNrBasMdlPartNrWr_Oper
#  define RTE_RUNNABLE_PartNrCalProgdStsRd_Oper PartNrCalProgdStsRd_Oper
#  define RTE_RUNNABLE_PartNrCalProgdStsWr_Oper PartNrCalProgdStsWr_Oper
#  define RTE_RUNNABLE_PartNrCcaMfgTrakgRd_Oper PartNrCcaMfgTrakgRd_Oper
#  define RTE_RUNNABLE_PartNrCcaMfgTrakgWr_Oper PartNrCcaMfgTrakgWr_Oper
#  define RTE_RUNNABLE_PartNrCmpdVehPartnProdtStructRd_Oper PartNrCmpdVehPartnProdtStructRd_Oper
#  define RTE_RUNNABLE_PartNrCtrlPidKeyChk_Oper PartNrCtrlPidKeyChk_Oper
#  define RTE_RUNNABLE_PartNrCtrlPidKeyWr_Oper PartNrCtrlPidKeyWr_Oper
#  define RTE_RUNNABLE_PartNrCtrlPidSeedKeyWr_Oper PartNrCtrlPidSeedKeyWr_Oper
#  define RTE_RUNNABLE_PartNrCtrlPidSeedRd_Oper PartNrCtrlPidSeedRd_Oper
#  define RTE_RUNNABLE_PartNrCtrlPidSeedUpprByteRd_Oper PartNrCtrlPidSeedUpprByteRd_Oper
#  define RTE_RUNNABLE_PartNrCtrlPidSeedUpprByteWr_Oper PartNrCtrlPidSeedUpprByteWr_Oper
#  define RTE_RUNNABLE_PartNrCustMfgEnaCntrRd_Oper PartNrCustMfgEnaCntrRd_Oper
#  define RTE_RUNNABLE_PartNrCustMfgEnaCntrWr_Oper PartNrCustMfgEnaCntrWr_Oper
#  define RTE_RUNNABLE_PartNrDataUniversalNrSysIdRd_Oper PartNrDataUniversalNrSysIdRd_Oper
#  define RTE_RUNNABLE_PartNrDataUniversalNrSysIdWr_Oper PartNrDataUniversalNrSysIdWr_Oper
#  define RTE_RUNNABLE_PartNrEcuIdRd_Oper PartNrEcuIdRd_Oper
#  define RTE_RUNNABLE_PartNrEcuIdWr_Oper PartNrEcuIdWr_Oper
#  define RTE_RUNNABLE_PartNrEndMdlPartNrAlphaCodRd_Oper PartNrEndMdlPartNrAlphaCodRd_Oper
#  define RTE_RUNNABLE_PartNrEndMdlPartNrAlphaCodWr_Oper PartNrEndMdlPartNrAlphaCodWr_Oper
#  define RTE_RUNNABLE_PartNrEndMdlPartNrRd_Oper PartNrEndMdlPartNrRd_Oper
#  define RTE_RUNNABLE_PartNrEndMdlPartNrWr_Oper PartNrEndMdlPartNrWr_Oper
#  define RTE_RUNNABLE_PartNrInit1 PartNrInit1
#  define RTE_RUNNABLE_PartNrLstRepairShopCodRd_Oper PartNrLstRepairShopCodRd_Oper
#  define RTE_RUNNABLE_PartNrNxtrMfgTrakgRd_Oper PartNrNxtrMfgTrakgRd_Oper
#  define RTE_RUNNABLE_PartNrNxtrMfgTrakgWr_Oper PartNrNxtrMfgTrakgWr_Oper
#  define RTE_RUNNABLE_PartNrPer1 PartNrPer1
#  define RTE_RUNNABLE_PartNrProgmDateRd_Oper PartNrProgmDateRd_Oper
#  define RTE_RUNNABLE_PartNrProgmDateWr_Oper PartNrProgmDateWr_Oper
#  define RTE_RUNNABLE_PartNrProgmSessionKeyChk_Oper PartNrProgmSessionKeyChk_Oper
#  define RTE_RUNNABLE_PartNrProgmSessionSeedKeyWr_Oper PartNrProgmSessionSeedKeyWr_Oper
#  define RTE_RUNNABLE_PartNrProgmSessionSeedRd_Oper PartNrProgmSessionSeedRd_Oper
#  define RTE_RUNNABLE_PartNrRepairShopCodRd_Oper PartNrRepairShopCodRd_Oper
#  define RTE_RUNNABLE_PartNrRepairShopCodWr_Oper PartNrRepairShopCodWr_Oper
#  define RTE_RUNNABLE_PartNrSecuBypAuthnRd_Oper PartNrSecuBypAuthnRd_Oper
#  define RTE_RUNNABLE_PartNrSecuBypAuthnWr_Oper PartNrSecuBypAuthnWr_Oper
#  define RTE_RUNNABLE_PartNrSysCodVersNrRd_Oper PartNrSysCodVersNrRd_Oper
#  define RTE_RUNNABLE_PartNrSysCodVersNrWr_Oper PartNrSysCodVersNrWr_Oper
#  define RTE_RUNNABLE_PartNrSysNameRd_Oper PartNrSysNameRd_Oper
#  define RTE_RUNNABLE_PartNrSysNameWr_Oper PartNrSysNameWr_Oper
#  define RTE_RUNNABLE_PartNrVinDataRd_Oper PartNrVinDataRd_Oper
#  define RTE_RUNNABLE_PartNrVinDataWr_Oper PartNrVinDataWr_Oper
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrBasMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, PartNr_CODE) PartNrCalProgdStsRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, PartNr_CODE) PartNrCalProgdStsWr_Oper(uint8 CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCcaMfgTrakgWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(Ary1D_u8_14, AUTOMATIC, RTE_PARTNR_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCtrlPidKeyWr_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) CtrlPidSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, PartNr_CODE) PartNrCtrlPidSeedUpprByteRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CtrlPidSeedUpprByte); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, PartNr_CODE) PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, PartNr_CODE) PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, PartNr_CODE) PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrDataUniversalNrSysIdWr_Oper(P2CONST(Ary1D_u8_9, AUTOMATIC, RTE_PARTNR_APPL_DATA) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEcuIdRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEcuIdWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEcuIdWr_Oper(P2CONST(Ary1D_u8_16, AUTOMATIC, RTE_PARTNR_APPL_DATA) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrAlphaCodWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrEndMdlPartNrWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, PartNr_CODE) PartNrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrLstRepairShopCodRd_Oper(P2VAR(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgRd_Oper(P2VAR(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrNxtrMfgTrakgWr_Oper(P2CONST(Ary1D_u8_7, AUTOMATIC, RTE_PARTNR_APPL_DATA) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, PartNr_CODE) PartNrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrProgmDateRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmDateWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, PartNr_CODE) PartNrProgmSessionKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedKeyWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) ProgmSessionSeedKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrProgmSessionSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_PARTNR_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrRepairShopCodRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrRepairShopCodWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_PARTNR_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnRd_Oper(P2VAR(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSecuBypAuthnWr_Oper(P2CONST(Ary1D_u8_822, AUTOMATIC, RTE_PARTNR_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysCodVersNrRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysCodVersNrWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysNameRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrSysNameWr_Oper(P2CONST(Ary1D_u8_20, AUTOMATIC, RTE_PARTNR_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrVinDataRd_Oper(P2VAR(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, PartNr_CODE) PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, PartNr_CODE) PartNrVinDataWr_Oper(P2CONST(Ary1D_u8_17, AUTOMATIC, RTE_PARTNR_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define PartNr_STOP_SEC_CODE
# include "PartNr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_PartNrCalProgdStsWr1_InvldVal (1U)

#  define RTE_E_PartNrCtrlPidKeyChk1_InvldKey (1U)

#  define RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero (1U)

#  define RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero (1U)

#  define RTE_E_PartNrProgmDateWr1_OutOfRange (1U)

#  define RTE_E_PartNrProgmSessionKeyChk1_InvldKey (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PARTNR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
