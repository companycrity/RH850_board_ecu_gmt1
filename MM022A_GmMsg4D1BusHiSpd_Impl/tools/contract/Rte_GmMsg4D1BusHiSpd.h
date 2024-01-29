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
 *          File:  Rte_GmMsg4D1BusHiSpd.h
 *     SW-C Type:  GmMsg4D1BusHiSpd
 *  Generated at:  Tue Feb  9 17:01:27 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg4D1BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG4D1BUSHISPD_H
# define _RTE_GMMSG4D1BUSHISPD_H

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

# include "Rte_GmMsg4D1BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg4D1BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg4D1BusHiSpdInvldMsgTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg4D1BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg4D1BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg4D1BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EngOilT_Val (0.0F)
# define Rte_InitValue_EngOilTRaw_Val (0U)
# define Rte_InitValue_EngOilVldRaw_Val (0U)
# define Rte_InitValue_LstRxnTiMsg4D1_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg4D1BusHiSpd_EngOilTRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG4D1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg4D1BusHiSpd_EngOilVldRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG4D1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg4D1BusHiSpd_LstRxnTiMsg4D1_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG4D1BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg4D1BusHiSpd_EngOilT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg4D1BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG4D1BUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg4D1BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG4D1BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg4D1BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdEngOilTDft_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EngOilTRaw_Val Rte_Read_GmMsg4D1BusHiSpd_EngOilTRaw_Val
# define Rte_Read_EngOilVldRaw_Val Rte_Read_GmMsg4D1BusHiSpd_EngOilVldRaw_Val
# define Rte_Read_LstRxnTiMsg4D1_Val Rte_Read_GmMsg4D1BusHiSpd_LstRxnTiMsg4D1_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_EngOilT_Val Rte_Write_GmMsg4D1BusHiSpd_EngOilT_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg4D1BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg4D1BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg4D1BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg4D1BusHiSpdEngOilTDft_Val Rte_Prm_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdEngOilTDft_Val

# define Rte_Prm_GmMsg4D1BusHiSpdInvldTiOut_Val Rte_Prm_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdInvldTiOut_Val

# define Rte_Prm_GmMsg4D1BusHiSpdMissTiOut_Val Rte_Prm_GmMsg4D1BusHiSpd_GmMsg4D1BusHiSpdMissTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg4D1BusHiSpdInvldMsgTmr() (Rte_Inst_GmMsg4D1BusHiSpd->Pim_GmMsg4D1BusHiSpdInvldMsgTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg4D1BusHiSpdInvldMsgTmr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmMsg4D1BusHiSpdEngOilTDft_Val(void)
 *   uint16 Rte_Prm_GmMsg4D1BusHiSpdInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg4D1BusHiSpdMissTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg4D1BusHiSpd_START_SEC_CODE
# include "GmMsg4D1BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg4D1BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_EngOilTRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EngOilVldRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LstRxnTiMsg4D1_Val(uint32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EngOilT_Val(float32 data)
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

# define RTE_RUNNABLE_GmMsg4D1BusHiSpdPer1 GmMsg4D1BusHiSpdPer1
FUNC(void, GmMsg4D1BusHiSpd_CODE) GmMsg4D1BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg4D1BusHiSpd_STOP_SEC_CODE
# include "GmMsg4D1BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1455048667
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Working/MM022A_GmMsg4D1BusHiSpd_Impl/tools/contract/Rte_GmMsg4D1BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455048667
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG4D1BUSHISPD_H */
