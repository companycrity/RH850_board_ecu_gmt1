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
 *          File:  Rte_GmMsg337BusChassisExp.h
 *     SW-C Type:  GmMsg337BusChassisExp
 *  Generated at:  Fri Apr 22 16:16:00 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg337BusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG337BUSCHASSISEXP_H
# define _RTE_GMMSG337BUSCHASSISEXP_H

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

# include "Rte_GmMsg337BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg337BusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpFbProtnValInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpPrevInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg337BusChassisExpRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg337BusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg337BusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg337BusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ApaReqActv_Logl (FALSE)
# define Rte_InitValue_FbReqActv_Logl (FALSE)
# define Rte_InitValue_InvldMsg337_Logl (FALSE)
# define Rte_InitValue_LstRxnTiMsg337BusChassisExp_Val (0U)
# define Rte_InitValue_MissMsg337_Logl (FALSE)
# define Rte_InitValue_SteerWhlAgReqActvRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqActvVldRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqProtnValRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqRollgCntrRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqTarAg_Val (0.0F)
# define Rte_InitValue_SteerWhlAgReqTarAgRaw_Val (0U)
# define Rte_InitValue_SteerWhlFbReqActvProtnValRaw_Val (0U)
# define Rte_InitValue_SteerWhlFbReqActvRaw_Val (0U)
# define Rte_InitValue_SteerWhlFbReqActvRollgCntrRaw_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_LstRxnTiMsg337BusChassisExp_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvVldRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqProtnValRaw_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqRollgCntrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqTarAgRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvProtnValRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRollgCntrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg337BusChassisExp_ApaReqActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg337BusChassisExp_FbReqActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg337BusChassisExp_InvldMsg337_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg337BusChassisExp_MissMsg337_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg337BusChassisExp_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg337BusChassisExp_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG337BUSCHASSISEXP_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg337BusChassisExp_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldDiagcTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldProtnValTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(sint8, RTE_CODE) Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpTarAgPolarity_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LstRxnTiMsg337BusChassisExp_Val Rte_Read_GmMsg337BusChassisExp_LstRxnTiMsg337BusChassisExp_Val
# define Rte_Read_SteerWhlAgReqActvRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvRaw_Val
# define Rte_Read_SteerWhlAgReqActvVldRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvVldRaw_Val
# define Rte_Read_SteerWhlAgReqProtnValRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqProtnValRaw_Val
# define Rte_Read_SteerWhlAgReqRollgCntrRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqRollgCntrRaw_Val
# define Rte_Read_SteerWhlAgReqTarAgRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqTarAgRaw_Val
# define Rte_Read_SteerWhlFbReqActvProtnValRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvProtnValRaw_Val
# define Rte_Read_SteerWhlFbReqActvRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRaw_Val
# define Rte_Read_SteerWhlFbReqActvRollgCntrRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRollgCntrRaw_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ApaReqActv_Logl Rte_Write_GmMsg337BusChassisExp_ApaReqActv_Logl
# define Rte_Write_FbReqActv_Logl Rte_Write_GmMsg337BusChassisExp_FbReqActv_Logl
# define Rte_Write_InvldMsg337_Logl Rte_Write_GmMsg337BusChassisExp_InvldMsg337_Logl
# define Rte_Write_MissMsg337_Logl Rte_Write_GmMsg337BusChassisExp_MissMsg337_Logl
# define Rte_Write_SteerWhlAgReqTarAg_Val Rte_Write_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg337BusChassisExp_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg337BusChassisExp_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg337BusChassisExp_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg337BusChassisExpInvldDiagcTiOut_Val Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldDiagcTiOut_Val

# define Rte_Prm_GmMsg337BusChassisExpInvldProtnValTiOut_Val Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldProtnValTiOut_Val

# define Rte_Prm_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val

# define Rte_Prm_GmMsg337BusChassisExpMissTiOut_Val Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpMissTiOut_Val

# define Rte_Prm_GmMsg337BusChassisExpTarAgPolarity_Val Rte_Prm_GmMsg337BusChassisExp_GmMsg337BusChassisExpTarAgPolarity_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpFbProtnValInvldTmr() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpFbProtnValInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpInvldTmr() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpPrevRxnTi() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpPrevInvld() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpPrevInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg337BusChassisExpRollgCntrRst() (Rte_Inst_GmMsg337BusChassisExp->Pim_GmMsg337BusChassisExpRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg337BusChassisExpFbProtnValInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg337BusChassisExpInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg337BusChassisExpPrevRxnTi(void)
 *   uint8 *Rte_Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal(void)
 *   uint8 *Rte_Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal(void)
 *   boolean *Rte_Pim_GmMsg337BusChassisExpPrevInvld(void)
 *   boolean *Rte_Pim_GmMsg337BusChassisExpRollgCntrRst(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg337BusChassisExpInvldDiagcTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg337BusChassisExpInvldProtnValTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg337BusChassisExpMissTiOut_Val(void)
 *   sint8 Rte_Prm_GmMsg337BusChassisExpTarAgPolarity_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg337BusChassisExp_START_SEC_CODE
# include "GmMsg337BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg337BusChassisExpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg337BusChassisExpInit1 GmMsg337BusChassisExpInit1
FUNC(void, GmMsg337BusChassisExp_CODE) GmMsg337BusChassisExpInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg337BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_LstRxnTiMsg337BusChassisExp_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgReqActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgReqActvVldRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgReqProtnValRaw_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgReqRollgCntrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgReqTarAgRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SteerWhlFbReqActvProtnValRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlFbReqActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlFbReqActvRollgCntrRaw_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApaReqActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FbReqActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_InvldMsg337_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MissMsg337_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqTarAg_Val(float32 data)
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

# define RTE_RUNNABLE_GmMsg337BusChassisExpPer1 GmMsg337BusChassisExpPer1
FUNC(void, GmMsg337BusChassisExp_CODE) GmMsg337BusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg337BusChassisExp_STOP_SEC_CODE
# include "GmMsg337BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1461364183
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_SerlComm/MM019A_GmMsg337BusChassisExp_Impl/tools/contract/Rte_GmMsg337BusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461364183
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG337BUSCHASSISEXP_H */
