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
 *          File:  Rte_GmFctDiArbn.h
 *     SW-C Type:  GmFctDiArbn
 *  Generated at:  Thu Jun 30 10:59:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmFctDiArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMFCTDIARBN_H
# define _RTE_GMFCTDIARBN_H

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

# include "Rte_GmFctDiArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmFctDiArbn
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CcwEotEnad; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CwEotEnad; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FctDiLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InCcwEotRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InCcwEotRngElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InCwEotRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InCwEotRngElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InOnCentrRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OnCentrElpdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmFctDiArbn, RTE_CONST, RTE_CONST) Rte_Inst_GmFctDiArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmFctDiArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ApaEna_Logl (FALSE)
# define Rte_InitValue_ApaEnaArbn_Logl (FALSE)
# define Rte_InitValue_EscEna_Logl (FALSE)
# define Rte_InitValue_EscEnaArbn_Logl (FALSE)
# define Rte_InitValue_GmFctDiSts_Val (0U)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_InertiaCmpDecelGainDi_Logl (FALSE)
# define Rte_InitValue_LkaEna_Logl (FALSE)
# define Rte_InitValue_LkaEnaArbn_Logl (FALSE)
# define Rte_InitValue_LoaSt_Val (0U)
# define Rte_InitValue_PullCmpActvDi_Logl (FALSE)
# define Rte_InitValue_TunSetRtDi_Logl (FALSE)
# define Rte_InitValue_WhlImbRejctnDi_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_ApaEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_EscEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_HwAgEotCcw_Val(P2VAR(float32, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_HwAgEotCw_Val(P2VAR(float32, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_LkaEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmFctDiArbn_LoaSt_Val(P2VAR(LoaSt1, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_ApaEnaArbn_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_EscEnaArbn_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_GmFctDiSts_Val(GmFctDiArbnSts1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_InertiaCmpDecelGainDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_LkaEnaArbn_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_PullCmpActvDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_TunSetRtDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmFctDiArbn_WhlImbRejctnDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmFctDiArbn_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmFctDiArbn_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_GMFCTDIARBN_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmFctDiArbn_GmFctDiArbnEotHwAgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmFctDiArbn_GmFctDiArbnEotTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmFctDiArbn_GmFctDiArbnOnCentrHwAgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmFctDiArbn_GmFctDiArbnOnCentrHwTqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmFctDiArbn_GmFctDiArbnOnCentrTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmFctDiArbn_GmFctDiArbnSrvTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_GmFctDiArbn_GmFctDiArbnPer1_FctDiReq(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_IrvRead_GmFctDiArbn_GmFctDiArbnPer1_FctDiStrtTi(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_GmFctDiArbn_GmFctDiReq_Oper_FctDiReq(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_GmFctDiArbn_GmFctDiReq_Oper_FctDiStrtTi(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ApaEna_Logl Rte_Read_GmFctDiArbn_ApaEna_Logl
# define Rte_Read_EscEna_Logl Rte_Read_GmFctDiArbn_EscEna_Logl
# define Rte_Read_HwAg_Val Rte_Read_GmFctDiArbn_HwAg_Val
# define Rte_Read_HwAgEotCcw_Val Rte_Read_GmFctDiArbn_HwAgEotCcw_Val
# define Rte_Read_HwAgEotCw_Val Rte_Read_GmFctDiArbn_HwAgEotCw_Val
# define Rte_Read_HwTq_Val Rte_Read_GmFctDiArbn_HwTq_Val
# define Rte_Read_LkaEna_Logl Rte_Read_GmFctDiArbn_LkaEna_Logl
# define Rte_Read_LoaSt_Val Rte_Read_GmFctDiArbn_LoaSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ApaEnaArbn_Logl Rte_Write_GmFctDiArbn_ApaEnaArbn_Logl
# define Rte_Write_EscEnaArbn_Logl Rte_Write_GmFctDiArbn_EscEnaArbn_Logl
# define Rte_Write_GmFctDiSts_Val Rte_Write_GmFctDiArbn_GmFctDiSts_Val
# define Rte_Write_InertiaCmpDecelGainDi_Logl Rte_Write_GmFctDiArbn_InertiaCmpDecelGainDi_Logl
# define Rte_Write_LkaEnaArbn_Logl Rte_Write_GmFctDiArbn_LkaEnaArbn_Logl
# define Rte_Write_PullCmpActvDi_Logl Rte_Write_GmFctDiArbn_PullCmpActvDi_Logl
# define Rte_Write_TunSetRtDi_Logl Rte_Write_GmFctDiArbn_TunSetRtDi_Logl
# define Rte_Write_WhlImbRejctnDi_Logl Rte_Write_GmFctDiArbn_WhlImbRejctnDi_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmFctDiArbn_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmFctDiArbn_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GmFctDiArbnPer1_FctDiReq() \
  Rte_IrvRead_GmFctDiArbn_GmFctDiArbnPer1_FctDiReq()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi() \
  Rte_IrvRead_GmFctDiArbn_GmFctDiArbnPer1_FctDiStrtTi()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(data) \
  Rte_IrvWrite_GmFctDiArbn_GmFctDiReq_Oper_FctDiReq(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(data) \
  Rte_IrvWrite_GmFctDiArbn_GmFctDiReq_Oper_FctDiStrtTi(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmFctDiArbnEotHwAgThd_Val Rte_Prm_GmFctDiArbn_GmFctDiArbnEotHwAgThd_Val

# define Rte_Prm_GmFctDiArbnEotTi_Val Rte_Prm_GmFctDiArbn_GmFctDiArbnEotTi_Val

# define Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val Rte_Prm_GmFctDiArbn_GmFctDiArbnOnCentrHwAgThd_Val

# define Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val Rte_Prm_GmFctDiArbn_GmFctDiArbnOnCentrHwTqThd_Val

# define Rte_Prm_GmFctDiArbnOnCentrTi_Val Rte_Prm_GmFctDiArbn_GmFctDiArbnOnCentrTi_Val

# define Rte_Prm_GmFctDiArbnSrvTi_Val Rte_Prm_GmFctDiArbn_GmFctDiArbnSrvTi_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_InCcwEotRngElpdTi() (Rte_Inst_GmFctDiArbn->Pim_InCcwEotRngElpdTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InCwEotRngElpdTi() (Rte_Inst_GmFctDiArbn->Pim_InCwEotRngElpdTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_OnCentrElpdTi() (Rte_Inst_GmFctDiArbn->Pim_OnCentrElpdTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CcwEotEnad() (Rte_Inst_GmFctDiArbn->Pim_CcwEotEnad) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CwEotEnad() (Rte_Inst_GmFctDiArbn->Pim_CwEotEnad) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FctDiLtch() (Rte_Inst_GmFctDiArbn->Pim_FctDiLtch) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InCcwEotRng() (Rte_Inst_GmFctDiArbn->Pim_InCcwEotRng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InCwEotRng() (Rte_Inst_GmFctDiArbn->Pim_InCwEotRng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InOnCentrRng() (Rte_Inst_GmFctDiArbn->Pim_InOnCentrRng) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_InCcwEotRngElpdTi(void)
 *   uint32 *Rte_Pim_InCwEotRngElpdTi(void)
 *   uint32 *Rte_Pim_OnCentrElpdTi(void)
 *   boolean *Rte_Pim_CcwEotEnad(void)
 *   boolean *Rte_Pim_CwEotEnad(void)
 *   boolean *Rte_Pim_FctDiLtch(void)
 *   boolean *Rte_Pim_InCcwEotRng(void)
 *   boolean *Rte_Pim_InCwEotRng(void)
 *   boolean *Rte_Pim_InOnCentrRng(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmFctDiArbnEotHwAgThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnEotTi_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrTi_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnSrvTi_Val(void)
 *
 *********************************************************************************************************************/


# define GmFctDiArbn_START_SEC_CODE
# include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmFctDiArbnInit1 GmFctDiArbnInit1
FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiArbnPer1
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
 *   Std_ReturnType Rte_Read_ApaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApaEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EscEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_GmFctDiSts_Val(GmFctDiArbnSts1 data)
 *   Std_ReturnType Rte_Write_InertiaCmpDecelGainDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LkaEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PullCmpActvDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TunSetRtDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlImbRejctnDi_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_GmFctDiArbnPer1_FctDiReq(void)
 *   uint32 Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi(void)
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

# define RTE_RUNNABLE_GmFctDiArbnPer1 GmFctDiArbnPer1
FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GmFctDiReq>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(boolean data)
 *   void Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(uint32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GmFctDiReq_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmFctDiReq_Oper GmFctDiReq_Oper
FUNC(void, GmFctDiArbn_CODE) GmFctDiReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmFctDiArbn_STOP_SEC_CODE
# include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467289908
#    error "The magic number of the generated file <C:/Component/CF025A_GmFctDiArbn_Impl/tools/contract/Rte_GmFctDiArbn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467289908
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMFCTDIARBN_H */
