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
 *          File:  Rte_GmMsg1F1BusHiSpd.h
 *     SW-C Type:  GmMsg1F1BusHiSpd
 *  Generated at:  Tue Jan 31 16:59:36 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1F1BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1F1BUSHISPD_H
# define _RTE_GMMSG1F1BUSHISPD_H

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

# include "Rte_GmMsg1F1BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg1F1BusHiSpd
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg1F1BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg1F1BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg1F1BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EngRunActv_Logl (FALSE)
# define Rte_InitValue_LstRxnTiMsg1F1_Val (0U)
# define Rte_InitValue_MissMsg1F1_Logl (FALSE)
# define Rte_InitValue_SysBackUpPwrModEnaRaw_Val (0U)
# define Rte_InitValue_SysBackUpPwrModRaw_Val (0U)
# define Rte_InitValue_SysPwrMod_Val (0U)
# define Rte_InitValue_SysPwrModRaw_Val (0U)
# define Rte_InitValue_SysPwrModRun_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1F1BusHiSpd_EngRunActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG1F1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1F1BusHiSpd_LstRxnTiMsg1F1_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG1F1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModEnaRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1F1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1F1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1F1BusHiSpd_SysPwrModRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1F1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1F1BusHiSpd_MissMsg1F1_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1F1BusHiSpd_SysPwrMod_Val(GmSysPwrMod1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1F1BusHiSpd_SysPwrModRun_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg1F1BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG1F1BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg1F1BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1F1BusHiSpd_GmMsg1F1BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EngRunActv_Logl Rte_Read_GmMsg1F1BusHiSpd_EngRunActv_Logl
# define Rte_Read_LstRxnTiMsg1F1_Val Rte_Read_GmMsg1F1BusHiSpd_LstRxnTiMsg1F1_Val
# define Rte_Read_SysBackUpPwrModEnaRaw_Val Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModEnaRaw_Val
# define Rte_Read_SysBackUpPwrModRaw_Val Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModRaw_Val
# define Rte_Read_SysPwrModRaw_Val Rte_Read_GmMsg1F1BusHiSpd_SysPwrModRaw_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MissMsg1F1_Logl Rte_Write_GmMsg1F1BusHiSpd_MissMsg1F1_Logl
# define Rte_Write_SysPwrMod_Val Rte_Write_GmMsg1F1BusHiSpd_SysPwrMod_Val
# define Rte_Write_SysPwrModRun_Logl Rte_Write_GmMsg1F1BusHiSpd_SysPwrModRun_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg1F1BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg1F1BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg1F1BusHiSpdMissTiOut_Val Rte_Prm_GmMsg1F1BusHiSpd_GmMsg1F1BusHiSpdMissTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun() (Rte_Inst_GmMsg1F1BusHiSpd->Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg1F1BusHiSpdMissTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg1F1BusHiSpd_START_SEC_CODE
# include "GmMsg1F1BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1F1BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_EngRunActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LstRxnTiMsg1F1_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_SysBackUpPwrModEnaRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysBackUpPwrModRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysPwrModRaw_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MissMsg1F1_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysPwrMod_Val(GmSysPwrMod1 data)
 *   Std_ReturnType Rte_Write_SysPwrModRun_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg1F1BusHiSpdPer1 GmMsg1F1BusHiSpdPer1
FUNC(void, GmMsg1F1BusHiSpd_CODE) GmMsg1F1BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg1F1BusHiSpd_STOP_SEC_CODE
# include "GmMsg1F1BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1485903719
#    error "The magic number of the generated file <C:/component/MM007A_GmMsg1F1BusHiSpd_Impl/tools/contract/Rte_GmMsg1F1BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1485903719
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG1F1BUSHISPD_H */
