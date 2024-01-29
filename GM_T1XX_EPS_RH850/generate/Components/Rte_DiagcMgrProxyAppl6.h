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
 *          File:  Rte_DiagcMgrProxyAppl6.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DiagcMgrProxyAppl6>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DIAGCMGRPROXYAPPL6_H
# define _RTE_DIAGCMGRPROXYAPPL6_H

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

# include "Rte_DiagcMgrProxyAppl6_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_DiagcMgrProxyAppl6_ClrDiagcFlgProxy_Val
#  define Rte_Read_DiagcMgrProxyAppl6_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_DIAGCMGR_APPL_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_DIAGCMGR_APPL_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(Ary1D_NtcInfoRec4_DiagcMgr, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DiagcMgrIninCore_Oper(arg1, arg2, arg3, arg4, arg5) (DiagcMgrIninCore_Oper(arg1, arg2, arg3, arg4, arg5), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcActvCore_Oper(arg1, arg2) (GetNtcActvCore_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrStsCore_Oper(arg1, arg2) (GetNtcQlfrStsCore_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcStsCore_Oper(arg1, arg2) (GetNtcStsCore_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGR_APPL_CODE) SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoDebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcStsCore_Oper SetNtcStsCore_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

/* PRQA S 3458 L1 */ /* MD_MSR_19.4 */
#  define Rte_Enter_DiagcMgrProxyAppl6()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */ \
  { \
    Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_ENTER_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
    SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
  }
/* PRQA L:L1 */

/* PRQA S 3458 L1 */ /* MD_MSR_19.4 */
#  define Rte_Exit_DiagcMgrProxyAppl6()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */ \
  { \
    Rte_CheckDetErrorContinue(Rte_InitState == RTE_STATE_INIT, RTE_EXIT_SERVICE_ID, RTE_E_DET_UNINIT); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */ \
  }
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->DiagcMgrFltResp_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DiagcMgrFltResp_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->DiagcMgrFltResp_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_PrevClrNtcFlg6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6Ary; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_s16_DiagcMgrProxyAppl6, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6DebCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_DiagcData6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec1, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_DiagcMgrProxyAppl6_ProxySetNtcData6; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevClrNtcFlg6() \
  (&Rte_DiagcMgrProxyAppl6_PrevClrNtcFlg6) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DiagcMgrNtcInfo6Ary() (&((*RtePim_DiagcMgrNtcInfo6Ary())[0]))
#  else
#   define Rte_Pim_DiagcMgrNtcInfo6Ary() RtePim_DiagcMgrNtcInfo6Ary()
#  endif
#  define RtePim_DiagcMgrNtcInfo6Ary() \
  (&Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6Ary) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DiagcMgrNtcInfo6DebCntrAry() (&((*RtePim_DiagcMgrNtcInfo6DebCntrAry())[0]))
#  else
#   define Rte_Pim_DiagcMgrNtcInfo6DebCntrAry() RtePim_DiagcMgrNtcInfo6DebCntrAry()
#  endif
#  define RtePim_DiagcMgrNtcInfo6DebCntrAry() \
  (&Rte_DiagcMgrProxyAppl6_DiagcMgrNtcInfo6DebCntrAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiagcData6() \
  (&Rte_DiagcMgrProxyAppl6_DiagcData6) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ProxySetNtcData6() \
  (&Rte_DiagcMgrProxyAppl6_ProxySetNtcData6) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define DiagcMgrProxyAppl6_START_SEC_CODE
# include "DiagcMgrProxyAppl6_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_DiagcMgrProxyAppl6Init1 DiagcMgrProxyAppl6Init1
#  define RTE_RUNNABLE_DiagcMgrProxyAppl6Per1 DiagcMgrProxyAppl6Per1
#  define RTE_RUNNABLE_GetDiagcDataAppl6_Oper GetDiagcDataAppl6_Oper
#  define RTE_RUNNABLE_GetNtcActv6_Oper GetNtcActv6_Oper
#  define RTE_RUNNABLE_GetNtcDebCntrAppl6_Oper GetNtcDebCntrAppl6_Oper
#  define RTE_RUNNABLE_GetNtcInfoAppl6_Oper GetNtcInfoAppl6_Oper
#  define RTE_RUNNABLE_GetNtcQlfrSts6_Oper GetNtcQlfrSts6_Oper
#  define RTE_RUNNABLE_GetNtcSts6_Oper GetNtcSts6_Oper
#  define RTE_RUNNABLE_SetNtcSts6_Oper SetNtcSts6_Oper
# endif

FUNC(void, DiagcMgrProxyAppl6_CODE) DiagcMgrProxyAppl6Init1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DiagcMgrProxyAppl6_CODE) DiagcMgrProxyAppl6Per1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DiagcMgrProxyAppl6_CODE) GetDiagcDataAppl6_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagcMgrProxyAppl6_CODE) GetNtcActv6_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgrProxyAppl6_CODE) GetNtcDebCntrAppl6_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgrProxyAppl6_CODE) GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagcMgrProxyAppl6_CODE) GetNtcQlfrSts6_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagcMgrProxyAppl6_CODE) GetNtcSts6_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL6_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagcMgrProxyAppl6_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DiagcMgrProxyAppl6_STOP_SEC_CODE
# include "DiagcMgrProxyAppl6_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcActv_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetNtcSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcStsCore_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DIAGCMGRPROXYAPPL6_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
