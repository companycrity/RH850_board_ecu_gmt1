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
 *          File:  Rte_GmMsg778BusHiSpd.h
 *     SW-C Type:  GmMsg778BusHiSpd
 *  Generated at:  Wed May 25 12:51:47 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg778BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG778BUSHISPD_H
# define _RTE_GMMSG778BUSHISPD_H

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

# include "Rte_GmMsg778BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg778BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ActvEveId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u32_40, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DtcMap; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_40, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DtcTrigStsAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EveCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_40, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EveMap; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrigActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrigTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg778BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg778BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg778BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CodSupported_Val (0U)
# define Rte_InitValue_CurrSts_Val (0U)
# define Rte_InitValue_DtcFailrTyp_Val (0U)
# define Rte_InitValue_DtcFltTyp_Val (0U)
# define Rte_InitValue_DtcNr_Val (0U)
# define Rte_InitValue_DtcSrc_Val (0U)
# define Rte_InitValue_DtcTrig_Val (0U)
# define Rte_InitValue_HistSts_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_TstFaildCodClrdSts_Val (0U)
# define Rte_InitValue_TstFaildPwrUpSts_Val (0U)
# define Rte_InitValue_TstNotPassdCodClrdSts_Val (0U)
# define Rte_InitValue_TstNotPassdPwrUpSts_Val (0U)
# define Rte_InitValue_WarnIndcrReqdSts_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg778BusHiSpd_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_GMMSG778BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_CodSupported_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_CurrSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_DtcFailrTyp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_DtcFltTyp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_DtcNr_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_DtcSrc_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_DtcTrig_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_HistSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg778BusHiSpd_DtcTrigStsAry_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg778BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG778BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg778BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_GMMSG778BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_SysSt_Val Rte_Read_GmMsg778BusHiSpd_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CodSupported_Val Rte_Write_GmMsg778BusHiSpd_CodSupported_Val
# define Rte_Write_CurrSts_Val Rte_Write_GmMsg778BusHiSpd_CurrSts_Val
# define Rte_Write_DtcFailrTyp_Val Rte_Write_GmMsg778BusHiSpd_DtcFailrTyp_Val
# define Rte_Write_DtcFltTyp_Val Rte_Write_GmMsg778BusHiSpd_DtcFltTyp_Val
# define Rte_Write_DtcNr_Val Rte_Write_GmMsg778BusHiSpd_DtcNr_Val
# define Rte_Write_DtcSrc_Val Rte_Write_GmMsg778BusHiSpd_DtcSrc_Val
# define Rte_Write_DtcTrig_Val Rte_Write_GmMsg778BusHiSpd_DtcTrig_Val
# define Rte_Write_HistSts_Val Rte_Write_GmMsg778BusHiSpd_HistSts_Val
# define Rte_Write_TstFaildCodClrdSts_Val Rte_Write_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val
# define Rte_Write_TstFaildPwrUpSts_Val Rte_Write_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val
# define Rte_Write_TstNotPassdCodClrdSts_Val Rte_Write_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val
# define Rte_Write_TstNotPassdPwrUpSts_Val Rte_Write_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val
# define Rte_Write_WarnIndcrReqdSts_Val Rte_Write_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DtcTrigStsAry_SetRamBlockStatus Rte_Call_GmMsg778BusHiSpd_DtcTrigStsAry_SetRamBlockStatus
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg778BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg778BusHiSpd_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_TrigTmr() (Rte_Inst_GmMsg778BusHiSpd->Pim_TrigTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ActvEveId() (Rte_Inst_GmMsg778BusHiSpd->Pim_ActvEveId) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EveCnt() (Rte_Inst_GmMsg778BusHiSpd->Pim_EveCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrigActv() (Rte_Inst_GmMsg778BusHiSpd->Pim_TrigActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DtcMap() (*Rte_Inst_GmMsg778BusHiSpd->Pim_DtcMap) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DtcMap() (Rte_Inst_GmMsg778BusHiSpd->Pim_DtcMap) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DtcTrigStsAry() (*Rte_Inst_GmMsg778BusHiSpd->Pim_DtcTrigStsAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DtcTrigStsAry() (Rte_Inst_GmMsg778BusHiSpd->Pim_DtcTrigStsAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_EveMap() (*Rte_Inst_GmMsg778BusHiSpd->Pim_EveMap) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_EveMap() (Rte_Inst_GmMsg778BusHiSpd->Pim_EveMap) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_TrigTmr(void)
 *   uint8 *Rte_Pim_ActvEveId(void)
 *   uint8 *Rte_Pim_EveCnt(void)
 *   boolean *Rte_Pim_TrigActv(void)
 *   uint32 *Rte_Pim_DtcMap(void)
 *   uint8 *Rte_Pim_DtcTrigStsAry(void)
 *   uint8 *Rte_Pim_EveMap(void)
 *
 *********************************************************************************************************************/


# define GmMsg778BusHiSpd_START_SEC_CODE
# include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CallBackDtcStsChgd
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DTCStatusChanged> of PortPrototype <CallBackDtcStsChgd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CallbackDTCStatusChange_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CallBackDtcStsChgd CallBackDtcStsChgd
FUNC(Std_ReturnType, GmMsg778BusHiSpd_CODE) CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrTrigStsAry_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrTrigStsAry>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrTrigStsAry_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ClrTrigStsAry_Oper ClrTrigStsAry_Oper
FUNC(void, GmMsg778BusHiSpd_CODE) ClrTrigStsAry_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg778BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DtcTrigStsAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg778BusHiSpdInit1 GmMsg778BusHiSpdInit1
FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg778BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodSupported_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFailrTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcFltTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcNr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_DtcSrc_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DtcTrig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HistSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstFaildPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdCodClrdSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TstNotPassdPwrUpSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WarnIndcrReqdSts_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg778BusHiSpdPer1 GmMsg778BusHiSpdPer1
FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg778BusHiSpd_STOP_SEC_CODE
# include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_CallbackDTCStatusChange_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1464196799
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Sandbox/MM504A_GmMsg778BusHiSpd_Impl/tools/contract/Rte_GmMsg778BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1464196799
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG778BUSHISPD_H */
