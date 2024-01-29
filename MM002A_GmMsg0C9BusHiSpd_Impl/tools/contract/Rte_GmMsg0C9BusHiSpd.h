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
 *          File:  Rte_GmMsg0C9BusHiSpd.h
 *     SW-C Type:  GmMsg0C9BusHiSpd
 *  Generated at:  Sun Feb 14 11:56:35 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg0C9BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG0C9BUSHISPD_H
# define _RTE_GMMSG0C9BUSHISPD_H

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

# include "Rte_GmMsg0C9BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg0C9BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C9BusHiSpdInvldMsgTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C9BusHiSpdPrevEndSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C9BusHiSpdPrevEngRunActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg0C9BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg0C9BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg0C9BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EngRunActv_Logl (FALSE)
# define Rte_InitValue_EngRunActvRaw_Val (0U)
# define Rte_InitValue_EngSpd_Val (0.0F)
# define Rte_InitValue_EngSpdRaw_Val (0U)
# define Rte_InitValue_EngSpdStsRaw_Val (0U)
# define Rte_InitValue_InvldMsg0C9_Logl (FALSE)
# define Rte_InitValue_LstRxnTiMsg0C9_Val (0U)
# define Rte_InitValue_MissMsg0C9_Logl (FALSE)
# define Rte_InitValue_PtCrkActv_Logl (FALSE)
# define Rte_InitValue_PtCrkActvRaw_Val (0U)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C9BusHiSpd_EngRunActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C9BusHiSpd_EngSpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C9BusHiSpd_EngSpdStsRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C9BusHiSpd_LstRxnTiMsg0C9_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C9BusHiSpd_PtCrkActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C9BusHiSpd_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C9BusHiSpd_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C9BusHiSpd_EngRunActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C9BusHiSpd_EngSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C9BusHiSpd_InvldMsg0C9_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C9BusHiSpd_MissMsg0C9_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C9BusHiSpd_PtCrkActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg0C9BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg0C9BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG0C9BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg0C9BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EngRunActvRaw_Val Rte_Read_GmMsg0C9BusHiSpd_EngRunActvRaw_Val
# define Rte_Read_EngSpdRaw_Val Rte_Read_GmMsg0C9BusHiSpd_EngSpdRaw_Val
# define Rte_Read_EngSpdStsRaw_Val Rte_Read_GmMsg0C9BusHiSpd_EngSpdStsRaw_Val
# define Rte_Read_LstRxnTiMsg0C9_Val Rte_Read_GmMsg0C9BusHiSpd_LstRxnTiMsg0C9_Val
# define Rte_Read_PtCrkActvRaw_Val Rte_Read_GmMsg0C9BusHiSpd_PtCrkActvRaw_Val
# define Rte_Read_VehSpd_Val Rte_Read_GmMsg0C9BusHiSpd_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_GmMsg0C9BusHiSpd_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_EngRunActv_Logl Rte_Write_GmMsg0C9BusHiSpd_EngRunActv_Logl
# define Rte_Write_EngSpd_Val Rte_Write_GmMsg0C9BusHiSpd_EngSpd_Val
# define Rte_Write_InvldMsg0C9_Logl Rte_Write_GmMsg0C9BusHiSpd_InvldMsg0C9_Logl
# define Rte_Write_MissMsg0C9_Logl Rte_Write_GmMsg0C9BusHiSpd_MissMsg0C9_Logl
# define Rte_Write_PtCrkActv_Logl Rte_Write_GmMsg0C9BusHiSpd_PtCrkActv_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg0C9BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg0C9BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg0C9BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg0C9BusHiSpdVehSpdThd_Val Rte_Prm_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdVehSpdThd_Val

# define Rte_Prm_GmMsg0C9BusHiSpdInvldTiOut_Val Rte_Prm_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdInvldTiOut_Val

# define Rte_Prm_GmMsg0C9BusHiSpdMissTiOut_Val Rte_Prm_GmMsg0C9BusHiSpd_GmMsg0C9BusHiSpdMissTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg0C9BusHiSpdPrevEndSpd() (Rte_Inst_GmMsg0C9BusHiSpd->Pim_GmMsg0C9BusHiSpdPrevEndSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C9BusHiSpdInvldMsgTmr() (Rte_Inst_GmMsg0C9BusHiSpd->Pim_GmMsg0C9BusHiSpdInvldMsgTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C9BusHiSpdPrevEngRunActv() (Rte_Inst_GmMsg0C9BusHiSpd->Pim_GmMsg0C9BusHiSpdPrevEngRunActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_GmMsg0C9BusHiSpdPrevEndSpd(void)
 *   uint32 *Rte_Pim_GmMsg0C9BusHiSpdInvldMsgTmr(void)
 *   boolean *Rte_Pim_GmMsg0C9BusHiSpdPrevEngRunActv(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmMsg0C9BusHiSpdVehSpdThd_Val(void)
 *   uint16 Rte_Prm_GmMsg0C9BusHiSpdInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg0C9BusHiSpdMissTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg0C9BusHiSpd_START_SEC_CODE
# include "GmMsg0C9BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg0C9BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_EngRunActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EngSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_EngSpdStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LstRxnTiMsg0C9_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PtCrkActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EngRunActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EngSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_InvldMsg0C9_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MissMsg0C9_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PtCrkActv_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg0C9BusHiSpdPer1 GmMsg0C9BusHiSpdPer1
FUNC(void, GmMsg0C9BusHiSpd_CODE) GmMsg0C9BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg0C9BusHiSpd_STOP_SEC_CODE
# include "GmMsg0C9BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1455463813
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Working/MM002A_GmMsg0C9BusHiSpd_Impl/tools/contract/Rte_GmMsg0C9BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455463813
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG0C9BUSHISPD_H */
