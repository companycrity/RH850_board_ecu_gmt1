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
 *          File:  Rte_GmMsg778BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg778BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG778BUSHISPD_H
# define _RTE_GMMSG778BUSHISPD_H

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

# include "Rte_GmMsg778BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CodSupported_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CurrSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFailrTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFltTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcNr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcSrc_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcTrig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_HistSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CodSupported_Val (0U)
#  define Rte_InitValue_CurrSts_Val (0U)
#  define Rte_InitValue_DtcFailrTyp_Val (0U)
#  define Rte_InitValue_DtcFltTyp_Val (0U)
#  define Rte_InitValue_DtcNr_Val (0U)
#  define Rte_InitValue_DtcSrc_Val (0U)
#  define Rte_InitValue_DtcTrig_Val (0U)
#  define Rte_InitValue_HistSts_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_TstFaildCodClrdSts_Val (0U)
#  define Rte_InitValue_TstFaildPwrUpSts_Val (0U)
#  define Rte_InitValue_TstNotPassdCodClrdSts_Val (0U)
#  define Rte_InitValue_TstNotPassdPwrUpSts_Val (0U)
#  define Rte_InitValue_WarnIndcrReqdSts_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_SysSt_Val Rte_Read_GmMsg778BusHiSpd_SysSt_Val
#  define Rte_Read_GmMsg778BusHiSpd_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_CodSupported_Val Rte_Write_GmMsg778BusHiSpd_CodSupported_Val
#  define Rte_Write_GmMsg778BusHiSpd_CodSupported_Val(data) (Rte_GmMsg778BusHiSpd_CodSupported_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CurrSts_Val Rte_Write_GmMsg778BusHiSpd_CurrSts_Val
#  define Rte_Write_GmMsg778BusHiSpd_CurrSts_Val(data) (Rte_GmMsg778BusHiSpd_CurrSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DtcFailrTyp_Val Rte_Write_GmMsg778BusHiSpd_DtcFailrTyp_Val
#  define Rte_Write_GmMsg778BusHiSpd_DtcFailrTyp_Val(data) (Rte_GmMsg778BusHiSpd_DtcFailrTyp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DtcFltTyp_Val Rte_Write_GmMsg778BusHiSpd_DtcFltTyp_Val
#  define Rte_Write_GmMsg778BusHiSpd_DtcFltTyp_Val(data) (Rte_GmMsg778BusHiSpd_DtcFltTyp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DtcNr_Val Rte_Write_GmMsg778BusHiSpd_DtcNr_Val
#  define Rte_Write_GmMsg778BusHiSpd_DtcNr_Val(data) (Rte_GmMsg778BusHiSpd_DtcNr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DtcSrc_Val Rte_Write_GmMsg778BusHiSpd_DtcSrc_Val
#  define Rte_Write_GmMsg778BusHiSpd_DtcSrc_Val(data) (Rte_GmMsg778BusHiSpd_DtcSrc_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DtcTrig_Val Rte_Write_GmMsg778BusHiSpd_DtcTrig_Val
#  define Rte_Write_GmMsg778BusHiSpd_DtcTrig_Val(data) (Rte_GmMsg778BusHiSpd_DtcTrig_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HistSts_Val Rte_Write_GmMsg778BusHiSpd_HistSts_Val
#  define Rte_Write_GmMsg778BusHiSpd_HistSts_Val(data) (Rte_GmMsg778BusHiSpd_HistSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TstFaildCodClrdSts_Val Rte_Write_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val
#  define Rte_Write_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val(data) (Rte_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TstFaildPwrUpSts_Val Rte_Write_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val
#  define Rte_Write_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val(data) (Rte_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TstNotPassdCodClrdSts_Val Rte_Write_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val
#  define Rte_Write_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val(data) (Rte_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TstNotPassdPwrUpSts_Val Rte_Write_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val
#  define Rte_Write_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val(data) (Rte_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WarnIndcrReqdSts_Val Rte_Write_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val
#  define Rte_Write_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val(data) (Rte_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DtcTrigStsAry_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)9, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_TrigTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_ActvEveId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_EveCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_TrigActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_DtcMap; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_DtcTrigStsAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg778BusHiSpd_EveMap; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_TrigTmr() \
  (&Rte_GmMsg778BusHiSpd_TrigTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ActvEveId() \
  (&Rte_GmMsg778BusHiSpd_ActvEveId) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EveCnt() \
  (&Rte_GmMsg778BusHiSpd_EveCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrigActv() \
  (&Rte_GmMsg778BusHiSpd_TrigActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DtcMap() (&((*RtePim_DtcMap())[0]))
#  else
#   define Rte_Pim_DtcMap() RtePim_DtcMap()
#  endif
#  define RtePim_DtcMap() \
  (&Rte_GmMsg778BusHiSpd_DtcMap) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DtcTrigStsAry() (&((*RtePim_DtcTrigStsAry())[0]))
#  else
#   define Rte_Pim_DtcTrigStsAry() RtePim_DtcTrigStsAry()
#  endif
#  define RtePim_DtcTrigStsAry() \
  (&Rte_GmMsg778BusHiSpd_DtcTrigStsAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_EveMap() (&((*RtePim_EveMap())[0]))
#  else
#   define Rte_Pim_EveMap() RtePim_EveMap()
#  endif
#  define RtePim_EveMap() \
  (&Rte_GmMsg778BusHiSpd_EveMap) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg778BusHiSpd_START_SEC_CODE
# include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CallBackDtcStsChgd CallBackDtcStsChgd
#  define RTE_RUNNABLE_ClrTrigStsAry_Oper ClrTrigStsAry_Oper
#  define RTE_RUNNABLE_GmMsg778BusHiSpdInit1 GmMsg778BusHiSpdInit1
#  define RTE_RUNNABLE_GmMsg778BusHiSpdPer1 GmMsg778BusHiSpdPer1
# endif

FUNC(Std_ReturnType, GmMsg778BusHiSpd_CODE) CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, GmMsg778BusHiSpd_CODE) ClrTrigStsAry_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg778BusHiSpd_CODE) GmMsg778BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg778BusHiSpd_STOP_SEC_CODE
# include "GmMsg778BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CallbackDTCStatusChange_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG778BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
