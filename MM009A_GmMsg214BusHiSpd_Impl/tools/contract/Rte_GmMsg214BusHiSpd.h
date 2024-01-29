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
 *          File:  Rte_GmMsg214BusHiSpd.h
 *     SW-C Type:  GmMsg214BusHiSpd
 *  Generated at:  Wed Apr 20 16:35:31 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg214BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG214BUSHISPD_H
# define _RTE_GMMSG214BUSHISPD_H

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

# include "Rte_GmMsg214BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg214BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdPrevAbsProtd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg214BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg214BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg214BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg214BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AbsActvProtdProtnValRaw_Val (0U)
# define Rte_InitValue_AbsActvProtdRaw_Val (0U)
# define Rte_InitValue_AbsActvProtdRollgCntrRaw_Val (0U)
# define Rte_InitValue_AbsProtd_Logl (FALSE)
# define Rte_InitValue_LstRxnTiMsg214_Val (0U)
# define Rte_InitValue_MissMsg214_Logl (FALSE)
# define Rte_InitValue_RdntVehStabyEnhmtActv_Logl (FALSE)
# define Rte_InitValue_RdntVehStabyEnhmtSysActvRaw_Val (0U)
# define Rte_InitValue_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtActv_Logl (FALSE)
# define Rte_InitValue_VehStabyEnhmtInvld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg214BusHiSpd_AbsActvProtdProtnValRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRollgCntrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg214BusHiSpd_LstRxnTiMsg214_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg214BusHiSpd_VehStabyEnhmtActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg214BusHiSpd_AbsProtd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg214BusHiSpd_MissMsg214_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg214BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg214BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG214BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg214BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AbsActvProtdProtnValRaw_Val Rte_Read_GmMsg214BusHiSpd_AbsActvProtdProtnValRaw_Val
# define Rte_Read_AbsActvProtdRaw_Val Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRaw_Val
# define Rte_Read_AbsActvProtdRollgCntrRaw_Val Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRollgCntrRaw_Val
# define Rte_Read_LstRxnTiMsg214_Val Rte_Read_GmMsg214BusHiSpd_LstRxnTiMsg214_Val
# define Rte_Read_RdntVehStabyEnhmtSysActvRaw_Val Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRaw_Val
# define Rte_Read_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val
# define Rte_Read_VehStabyEnhmtActv_Logl Rte_Read_GmMsg214BusHiSpd_VehStabyEnhmtActv_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AbsProtd_Logl Rte_Write_GmMsg214BusHiSpd_AbsProtd_Logl
# define Rte_Write_MissMsg214_Logl Rte_Write_GmMsg214BusHiSpd_MissMsg214_Logl
# define Rte_Write_RdntVehStabyEnhmtActv_Logl Rte_Write_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl
# define Rte_Write_VehStabyEnhmtInvld_Logl Rte_Write_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg214BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg214BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg214BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val

# define Rte_Prm_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val

# define Rte_Prm_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val

# define Rte_Prm_GmMsg214BusHiSpdMissTiOut_Val Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdMissTiOut_Val

# define Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val

# define Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val Rte_Prm_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdPrevRxnTi() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdPrevAbsProtd() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdPrevAbsProtd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg214BusHiSpdRollgCntrRst() (Rte_Inst_GmMsg214BusHiSpd->Pim_GmMsg214BusHiSpdRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr(void)
 *   uint32 *Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr(void)
 *   uint32 *Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg214BusHiSpdPrevRxnTi(void)
 *   uint32 *Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr(void)
 *   uint32 *Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr(void)
 *   uint8 *Rte_Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal(void)
 *   uint8 *Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal(void)
 *   boolean *Rte_Pim_GmMsg214BusHiSpdPrevAbsProtd(void)
 *   boolean *Rte_Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld(void)
 *   boolean *Rte_Pim_GmMsg214BusHiSpdRollgCntrRst(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg214BusHiSpdMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg214BusHiSpd_START_SEC_CODE
# include "GmMsg214BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg214BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg214BusHiSpdInit1 GmMsg214BusHiSpdInit1
FUNC(void, GmMsg214BusHiSpd_CODE) GmMsg214BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg214BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_AbsActvProtdProtnValRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsActvProtdRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsActvProtdRollgCntrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LstRxnTiMsg214_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_RdntVehStabyEnhmtSysActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtActv_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AbsProtd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MissMsg214_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RdntVehStabyEnhmtActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtInvld_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg214BusHiSpdPer1 GmMsg214BusHiSpdPer1
FUNC(void, GmMsg214BusHiSpd_CODE) GmMsg214BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg214BusHiSpd_STOP_SEC_CODE
# include "GmMsg214BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1461179490
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/MM009A_GmMsg214BusHiSpd_Impl-kzdyfh/MM009A_GmMsg214BusHiSpd_Impl/tools/contract/Rte_GmMsg214BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461179490
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG214BUSHISPD_H */
