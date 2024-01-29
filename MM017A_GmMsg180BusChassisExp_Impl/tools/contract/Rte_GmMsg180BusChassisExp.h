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
 *          File:  Rte_GmMsg180BusChassisExp.h
 *     SW-C Type:  GmMsg180BusChassisExp
 *  Generated at:  Mon Apr 25 10:11:03 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg180BusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG180BUSCHASSISEXP_H
# define _RTE_GMMSG180BUSCHASSISEXP_H

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

# include "Rte_GmMsg180BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg180BusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpInvldProtnValTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpPrevEscCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpPrevEscCmdActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpPrevInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg180BusChassisExpRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg180BusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg180BusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg180BusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EscCmd_Val (0.0F)
# define Rte_InitValue_EscReqActv_Logl (FALSE)
# define Rte_InitValue_InvldMsg180BusChassisExp_Logl (FALSE)
# define Rte_InitValue_LstRxnTiMsg180BusChassisExp_Val (0U)
# define Rte_InitValue_MissMsg180BusChassisExp_Logl (FALSE)
# define Rte_InitValue_TqOvrlAlvRollgCntrRaw_Val (0U)
# define Rte_InitValue_TqOvrlCmdChksRaw_Val (0U)
# define Rte_InitValue_TqOvrlDeltaTqCmdActvRaw_Val (0U)
# define Rte_InitValue_TqOvrlDeltaTqCmdValRaw_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusChassisExp_LstRxnTiMsg180BusChassisExp_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG180BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusChassisExp_TqOvrlAlvRollgCntrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG180BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusChassisExp_TqOvrlCmdChksRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG180BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusChassisExp_TqOvrlDeltaTqCmdActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG180BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg180BusChassisExp_TqOvrlDeltaTqCmdValRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG180BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusChassisExp_EscCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusChassisExp_EscReqActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusChassisExp_InvldMsg180BusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg180BusChassisExp_MissMsg180BusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg180BusChassisExp_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG180BUSCHASSISEXP_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg180BusChassisExp_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG180BUSCHASSISEXP_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg180BusChassisExp_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpInvldProtnValTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpRollgCntrInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(sint8, RTE_CODE) Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpTqPolarity_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LstRxnTiMsg180BusChassisExp_Val Rte_Read_GmMsg180BusChassisExp_LstRxnTiMsg180BusChassisExp_Val
# define Rte_Read_TqOvrlAlvRollgCntrRaw_Val Rte_Read_GmMsg180BusChassisExp_TqOvrlAlvRollgCntrRaw_Val
# define Rte_Read_TqOvrlCmdChksRaw_Val Rte_Read_GmMsg180BusChassisExp_TqOvrlCmdChksRaw_Val
# define Rte_Read_TqOvrlDeltaTqCmdActvRaw_Val Rte_Read_GmMsg180BusChassisExp_TqOvrlDeltaTqCmdActvRaw_Val
# define Rte_Read_TqOvrlDeltaTqCmdValRaw_Val Rte_Read_GmMsg180BusChassisExp_TqOvrlDeltaTqCmdValRaw_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_EscCmd_Val Rte_Write_GmMsg180BusChassisExp_EscCmd_Val
# define Rte_Write_EscReqActv_Logl Rte_Write_GmMsg180BusChassisExp_EscReqActv_Logl
# define Rte_Write_InvldMsg180BusChassisExp_Logl Rte_Write_GmMsg180BusChassisExp_InvldMsg180BusChassisExp_Logl
# define Rte_Write_MissMsg180BusChassisExp_Logl Rte_Write_GmMsg180BusChassisExp_MissMsg180BusChassisExp_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg180BusChassisExp_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg180BusChassisExp_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg180BusChassisExp_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg180BusChassisExpInvldProtnValTiOut_Val Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpInvldProtnValTiOut_Val

# define Rte_Prm_GmMsg180BusChassisExpMissTiOut_Val Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpMissTiOut_Val

# define Rte_Prm_GmMsg180BusChassisExpRollgCntrInvldTiOut_Val Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpRollgCntrInvldTiOut_Val

# define Rte_Prm_GmMsg180BusChassisExpTqPolarity_Val Rte_Prm_GmMsg180BusChassisExp_GmMsg180BusChassisExpTqPolarity_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg180BusChassisExpPrevEscCmd() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpPrevEscCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusChassisExpInvldProtnValTmr() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpInvldProtnValTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusChassisExpInvldRollgCntrTmr() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpInvldRollgCntrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusChassisExpPrevRxnTi() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusChassisExpPrevRollgCntrVal() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpPrevRollgCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusChassisExpPrevEscCmdActv() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpPrevEscCmdActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusChassisExpPrevInvld() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpPrevInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg180BusChassisExpRollgCntrRst() (Rte_Inst_GmMsg180BusChassisExp->Pim_GmMsg180BusChassisExpRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_GmMsg180BusChassisExpPrevEscCmd(void)
 *   uint32 *Rte_Pim_GmMsg180BusChassisExpInvldProtnValTmr(void)
 *   uint32 *Rte_Pim_GmMsg180BusChassisExpInvldRollgCntrTmr(void)
 *   uint32 *Rte_Pim_GmMsg180BusChassisExpPrevRxnTi(void)
 *   uint8 *Rte_Pim_GmMsg180BusChassisExpPrevRollgCntrVal(void)
 *   boolean *Rte_Pim_GmMsg180BusChassisExpPrevEscCmdActv(void)
 *   boolean *Rte_Pim_GmMsg180BusChassisExpPrevInvld(void)
 *   boolean *Rte_Pim_GmMsg180BusChassisExpRollgCntrRst(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg180BusChassisExpInvldProtnValTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg180BusChassisExpMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg180BusChassisExpRollgCntrInvldTiOut_Val(void)
 *   sint8 Rte_Prm_GmMsg180BusChassisExpTqPolarity_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg180BusChassisExp_START_SEC_CODE
# include "GmMsg180BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg180BusChassisExpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg180BusChassisExpInit1 GmMsg180BusChassisExpInit1
FUNC(void, GmMsg180BusChassisExp_CODE) GmMsg180BusChassisExpInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg180BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_LstRxnTiMsg180BusChassisExp_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_TqOvrlAlvRollgCntrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TqOvrlCmdChksRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_TqOvrlDeltaTqCmdActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TqOvrlDeltaTqCmdValRaw_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EscCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EscReqActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_InvldMsg180BusChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MissMsg180BusChassisExp_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg180BusChassisExpPer1 GmMsg180BusChassisExpPer1
FUNC(void, GmMsg180BusChassisExp_CODE) GmMsg180BusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg180BusChassisExp_STOP_SEC_CODE
# include "GmMsg180BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1461595770
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_SerlComm/MM017A_GmMsg180BusChassisExp_Impl/tools/contract/Rte_GmMsg180BusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461595770
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG180BUSCHASSISEXP_H */
