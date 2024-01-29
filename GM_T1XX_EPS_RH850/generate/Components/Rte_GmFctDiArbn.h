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
 *          File:  Rte_GmFctDiArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmFctDiArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMFCTDIARBN_H
# define _RTE_GMFCTDIARBN_H

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

# include "Rte_GmFctDiArbn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_ApaReqActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_EscReqActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_LkaReqActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_ApaEnaArbn_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_EscEnaArbn_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmFctDiArbnSts1, RTE_VAR_INIT) Rte_GmFctDiArbn_GmFctDiSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_InertiaCmpDecelGainDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_LkaEnaArbn_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_PullCmpActvDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_TunSetRtDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_WhlImbRejctnDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LoaSt1, RTE_VAR_INIT) Rte_LoaMgr_LoaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ApaEna_Logl (FALSE)
#  define Rte_InitValue_ApaEnaArbn_Logl (FALSE)
#  define Rte_InitValue_EscEna_Logl (FALSE)
#  define Rte_InitValue_EscEnaArbn_Logl (FALSE)
#  define Rte_InitValue_GmFctDiSts_Val (0U)
#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
#  define Rte_InitValue_HwAgEotCw_Val (360.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_InertiaCmpDecelGainDi_Logl (FALSE)
#  define Rte_InitValue_LkaEna_Logl (FALSE)
#  define Rte_InitValue_LkaEnaArbn_Logl (FALSE)
#  define Rte_InitValue_LoaSt_Val (0U)
#  define Rte_InitValue_PullCmpActvDi_Logl (FALSE)
#  define Rte_InitValue_TunSetRtDi_Logl (FALSE)
#  define Rte_InitValue_WhlImbRejctnDi_Logl (FALSE)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GmFctDiArbn_FctDiReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_Irv_GmFctDiArbn_FctDiStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ApaEna_Logl Rte_Read_GmFctDiArbn_ApaEna_Logl
#  define Rte_Read_GmFctDiArbn_ApaEna_Logl(data) (*(data) = Rte_GmMsg337BusChassisExp_ApaReqActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EscEna_Logl Rte_Read_GmFctDiArbn_EscEna_Logl
#  define Rte_Read_GmFctDiArbn_EscEna_Logl(data) (*(data) = Rte_GmMsg180BusChassisExp_EscReqActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAg_Val Rte_Read_GmFctDiArbn_HwAg_Val
#  define Rte_Read_GmFctDiArbn_HwAg_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCcw_Val Rte_Read_GmFctDiArbn_HwAgEotCcw_Val
#  define Rte_Read_GmFctDiArbn_HwAgEotCcw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCcw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCw_Val Rte_Read_GmFctDiArbn_HwAgEotCw_Val
#  define Rte_Read_GmFctDiArbn_HwAgEotCw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_GmFctDiArbn_HwTq_Val
#  define Rte_Read_GmFctDiArbn_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaEna_Logl Rte_Read_GmFctDiArbn_LkaEna_Logl
#  define Rte_Read_GmFctDiArbn_LkaEna_Logl(data) (*(data) = Rte_GmMsg180BusHiSpd_LkaReqActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LoaSt_Val Rte_Read_GmFctDiArbn_LoaSt_Val
#  define Rte_Read_GmFctDiArbn_LoaSt_Val(data) (*(data) = Rte_LoaMgr_LoaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ApaEnaArbn_Logl Rte_Write_GmFctDiArbn_ApaEnaArbn_Logl
#  define Rte_Write_GmFctDiArbn_ApaEnaArbn_Logl(data) (Rte_GmFctDiArbn_ApaEnaArbn_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_EscEnaArbn_Logl Rte_Write_GmFctDiArbn_EscEnaArbn_Logl
#  define Rte_Write_GmFctDiArbn_EscEnaArbn_Logl(data) (Rte_GmFctDiArbn_EscEnaArbn_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_GmFctDiSts_Val Rte_Write_GmFctDiArbn_GmFctDiSts_Val
#  define Rte_Write_GmFctDiArbn_GmFctDiSts_Val(data) (Rte_GmFctDiArbn_GmFctDiSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_InertiaCmpDecelGainDi_Logl Rte_Write_GmFctDiArbn_InertiaCmpDecelGainDi_Logl
#  define Rte_Write_GmFctDiArbn_InertiaCmpDecelGainDi_Logl(data) (Rte_GmFctDiArbn_InertiaCmpDecelGainDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaEnaArbn_Logl Rte_Write_GmFctDiArbn_LkaEnaArbn_Logl
#  define Rte_Write_GmFctDiArbn_LkaEnaArbn_Logl(data) (Rte_GmFctDiArbn_LkaEnaArbn_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PullCmpActvDi_Logl Rte_Write_GmFctDiArbn_PullCmpActvDi_Logl
#  define Rte_Write_GmFctDiArbn_PullCmpActvDi_Logl(data) (Rte_GmFctDiArbn_PullCmpActvDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TunSetRtDi_Logl Rte_Write_GmFctDiArbn_TunSetRtDi_Logl
#  define Rte_Write_GmFctDiArbn_TunSetRtDi_Logl(data) (Rte_GmFctDiArbn_TunSetRtDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlImbRejctnDi_Logl Rte_Write_GmFctDiArbn_WhlImbRejctnDi_Logl
#  define Rte_Write_GmFctDiArbn_WhlImbRejctnDi_Logl(data) (Rte_GmFctDiArbn_WhlImbRejctnDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
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
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GmFctDiArbnPer1_FctDiReq() \
  Rte_Irv_GmFctDiArbn_FctDiReq
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi() \
  Rte_Irv_GmFctDiArbn_FctDiStrtTi
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(data) \
  (Rte_Irv_GmFctDiArbn_FctDiReq = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(data) \
  (Rte_Irv_GmFctDiArbn_FctDiStrtTi = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmFctDiArbnEotHwAgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmFctDiArbnEotHwAgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmFctDiArbnEotTi_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmFctDiArbnEotTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmFctDiArbnOnCentrHwAgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmFctDiArbnOnCentrHwTqThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmFctDiArbnOnCentrTi_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmFctDiArbnOnCentrTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmFctDiArbnSrvTi_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmFctDiArbnSrvTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCcwEotRngElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCwEotRngElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_OnCentrElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_CcwEotEnad; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_CwEotEnad; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_FctDiLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCcwEotRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InCwEotRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmFctDiArbn_InOnCentrRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_InCcwEotRngElpdTi() \
  (&Rte_GmFctDiArbn_InCcwEotRngElpdTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InCwEotRngElpdTi() \
  (&Rte_GmFctDiArbn_InCwEotRngElpdTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_OnCentrElpdTi() \
  (&Rte_GmFctDiArbn_OnCentrElpdTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CcwEotEnad() \
  (&Rte_GmFctDiArbn_CcwEotEnad) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CwEotEnad() \
  (&Rte_GmFctDiArbn_CwEotEnad) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FctDiLtch() \
  (&Rte_GmFctDiArbn_FctDiLtch) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InCcwEotRng() \
  (&Rte_GmFctDiArbn_InCcwEotRng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InCwEotRng() \
  (&Rte_GmFctDiArbn_InCwEotRng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InOnCentrRng() \
  (&Rte_GmFctDiArbn_InOnCentrRng) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmFctDiArbn_START_SEC_CODE
# include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmFctDiArbnInit1 GmFctDiArbnInit1
#  define RTE_RUNNABLE_GmFctDiArbnPer1 GmFctDiArbnPer1
#  define RTE_RUNNABLE_GmFctDiReq_Oper GmFctDiReq_Oper
# endif

FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmFctDiArbn_CODE) GmFctDiReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmFctDiArbn_STOP_SEC_CODE
# include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMFCTDIARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
