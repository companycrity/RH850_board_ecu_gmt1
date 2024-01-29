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
 *          File:  Rte_GmMsg180BusHiSpd.h
 *     SW-C Type:  GmMsg180BusHiSpd
 *  Generated at:  Wed Apr 20 10:06:30 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg180BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG180BUSHISPD_H
# define _RTE_GMMSG180BUSHISPD_H

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

# include "Rte_GmMsg180BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg180BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdInvldCrcTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdPrevInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdPrevTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdPrevTqReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg180BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg180BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg180BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_InvldMsg180BusHiSpd_Logl (FALSE)
# define Rte_InitValue_LkaCmd_Val (0.0F)
# define Rte_InitValue_LkaCmdProtnValRaw_Val (0U)
# define Rte_InitValue_LkaCmdRollgCntrRaw_Val (0U)
# define Rte_InitValue_LkaCmdTqReqActvRaw_Val (0U)
# define Rte_InitValue_LkaCmdTqValRaw_Val (0U)
# define Rte_InitValue_LkaReqActv_Logl (FALSE)
# define Rte_InitValue_LstRxnTiMsg180BusHiSpd_Val (0U)
# define Rte_InitValue_MissMsg180BusHiSpd_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusHiSpd_LkaCmdProtnValRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG180BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusHiSpd_LkaCmdRollgCntrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG180BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusHiSpd_LkaCmdTqReqActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG180BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusHiSpd_LkaCmdTqValRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG180BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusHiSpd_LstRxnTiMsg180BusHiSpd_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG180BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusHiSpd_InvldMsg180BusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusHiSpd_LkaCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusHiSpd_LkaReqActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusHiSpd_MissMsg180BusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg180BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG180BUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg180BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG180BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg180BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdCrcInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdRollgCntrInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(sint8, RTE_CODE) Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdTqPolarity_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LkaCmdProtnValRaw_Val Rte_Read_GmMsg180BusHiSpd_LkaCmdProtnValRaw_Val
# define Rte_Read_LkaCmdRollgCntrRaw_Val Rte_Read_GmMsg180BusHiSpd_LkaCmdRollgCntrRaw_Val
# define Rte_Read_LkaCmdTqReqActvRaw_Val Rte_Read_GmMsg180BusHiSpd_LkaCmdTqReqActvRaw_Val
# define Rte_Read_LkaCmdTqValRaw_Val Rte_Read_GmMsg180BusHiSpd_LkaCmdTqValRaw_Val
# define Rte_Read_LstRxnTiMsg180BusHiSpd_Val Rte_Read_GmMsg180BusHiSpd_LstRxnTiMsg180BusHiSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_InvldMsg180BusHiSpd_Logl Rte_Write_GmMsg180BusHiSpd_InvldMsg180BusHiSpd_Logl
# define Rte_Write_LkaCmd_Val Rte_Write_GmMsg180BusHiSpd_LkaCmd_Val
# define Rte_Write_LkaReqActv_Logl Rte_Write_GmMsg180BusHiSpd_LkaReqActv_Logl
# define Rte_Write_MissMsg180BusHiSpd_Logl Rte_Write_GmMsg180BusHiSpd_MissMsg180BusHiSpd_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg180BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg180BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg180BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg180BusHiSpdCrcInvldTiOut_Val Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdCrcInvldTiOut_Val

# define Rte_Prm_GmMsg180BusHiSpdMissTiOut_Val Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdMissTiOut_Val

# define Rte_Prm_GmMsg180BusHiSpdRollgCntrInvldTiOut_Val Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdRollgCntrInvldTiOut_Val

# define Rte_Prm_GmMsg180BusHiSpdTqPolarity_Val Rte_Prm_GmMsg180BusHiSpd_GmMsg180BusHiSpdTqPolarity_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg180BusHiSpdPrevTqCmd() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdPrevTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusHiSpdInvldCrcTmr() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdInvldCrcTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusHiSpdInvldRollgCntrTmr() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdInvldRollgCntrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusHiSpdPrevRxnTi() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusHiSpdPrevRollgCntrVal() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdPrevRollgCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusHiSpdPrevInvld() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdPrevInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusHiSpdPrevTqReq() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdPrevTqReq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusHiSpdRollgCntrRst() (Rte_Inst_GmMsg180BusHiSpd->Pim_GmMsg180BusHiSpdRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_GmMsg180BusHiSpdPrevTqCmd(void)
 *   uint32 *Rte_Pim_GmMsg180BusHiSpdInvldCrcTmr(void)
 *   uint32 *Rte_Pim_GmMsg180BusHiSpdInvldRollgCntrTmr(void)
 *   uint32 *Rte_Pim_GmMsg180BusHiSpdPrevRxnTi(void)
 *   uint8 *Rte_Pim_GmMsg180BusHiSpdPrevRollgCntrVal(void)
 *   boolean *Rte_Pim_GmMsg180BusHiSpdPrevInvld(void)
 *   boolean *Rte_Pim_GmMsg180BusHiSpdPrevTqReq(void)
 *   boolean *Rte_Pim_GmMsg180BusHiSpdRollgCntrRst(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg180BusHiSpdCrcInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg180BusHiSpdMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg180BusHiSpdRollgCntrInvldTiOut_Val(void)
 *   sint8 Rte_Prm_GmMsg180BusHiSpdTqPolarity_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg180BusHiSpd_START_SEC_CODE
# include "GmMsg180BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg180BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg180BusHiSpdInit1 GmMsg180BusHiSpdInit1
FUNC(void, GmMsg180BusHiSpd_CODE) GmMsg180BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg180BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_LkaCmdProtnValRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LkaCmdRollgCntrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaCmdTqReqActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaCmdTqValRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LstRxnTiMsg180BusHiSpd_Val(uint32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_InvldMsg180BusHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LkaCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_LkaReqActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MissMsg180BusHiSpd_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg180BusHiSpdPer1 GmMsg180BusHiSpdPer1
FUNC(void, GmMsg180BusHiSpd_CODE) GmMsg180BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg180BusHiSpd_STOP_SEC_CODE
# include "GmMsg180BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1461171135
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/MM005A_GmMsg180BusHiSpd_Impl-kzdyfh/MM005A_GmMsg180BusHiSpd_Impl/tools/contract/Rte_GmMsg180BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461171135
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG180BUSHISPD_H */
