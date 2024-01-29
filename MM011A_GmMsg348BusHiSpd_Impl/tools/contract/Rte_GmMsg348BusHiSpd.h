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
 *          File:  Rte_GmMsg348BusHiSpd.h
 *     SW-C Type:  GmMsg348BusHiSpd
 *  Generated at:  Sun Sep 27 11:37:08 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg348BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG348BUSHISPD_H
# define _RTE_GMMSG348BUSHISPD_H

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

# include "Rte_GmMsg348BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg348BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg348BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg348BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg348BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LstRxnTiMsg348BusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnVldBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnVldRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnVldBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnVldRawBusHiSpd_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusHiSpd_LstRxnTiMsg348BusHiSpd_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG348BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnRawBusHiSpd_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG348BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldRawBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG348BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnRawBusHiSpd_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG348BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldRawBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG348BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg348BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG348BUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg348BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG348BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg348BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg348BusHiSpd_GmMsg348BusHiSpdInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg348BusHiSpd_GmMsg348BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg348BusHiSpd_GmMsg348BusHiSpdStuckTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LstRxnTiMsg348BusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_LstRxnTiMsg348BusHiSpd_Val
# define Rte_Read_WhlGndVelLeDrvnRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnRawBusHiSpd_Val
# define Rte_Read_WhlGndVelLeDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldRawBusHiSpd_Val
# define Rte_Read_WhlGndVelRiDrvnRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnRawBusHiSpd_Val
# define Rte_Read_WhlGndVelRiDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldRawBusHiSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_WhlGndVelLeDrvnBusHiSpd_Val Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val
# define Rte_Write_WhlGndVelLeDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl
# define Rte_Write_WhlGndVelLeDrvnVldBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl
# define Rte_Write_WhlGndVelRiDrvnBusHiSpd_Val Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val
# define Rte_Write_WhlGndVelRiDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl
# define Rte_Write_WhlGndVelRiDrvnVldBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg348BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg348BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg348BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg348BusHiSpdInvldTiOut_Val Rte_Prm_GmMsg348BusHiSpd_GmMsg348BusHiSpdInvldTiOut_Val

# define Rte_Prm_GmMsg348BusHiSpdMissTiOut_Val Rte_Prm_GmMsg348BusHiSpd_GmMsg348BusHiSpdMissTiOut_Val

# define Rte_Prm_GmMsg348BusHiSpdStuckTiOut_Val Rte_Prm_GmMsg348BusHiSpd_GmMsg348BusHiSpdStuckTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi() (Rte_Inst_GmMsg348BusHiSpd->Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi() (Rte_Inst_GmMsg348BusHiSpd->Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi() (Rte_Inst_GmMsg348BusHiSpd->Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi() (Rte_Inst_GmMsg348BusHiSpd->Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn() (Rte_Inst_GmMsg348BusHiSpd->Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn() (Rte_Inst_GmMsg348BusHiSpd->Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi(void)
 *   uint32 *Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi(void)
 *   uint16 *Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn(void)
 *   uint16 *Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg348BusHiSpdInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg348BusHiSpdMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg348BusHiSpdStuckTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg348BusHiSpd_START_SEC_CODE
# include "GmMsg348BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg348BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_LstRxnTiMsg348BusHiSpd_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnRawBusHiSpd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnVldRawBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnRawBusHiSpd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnVldRawBusHiSpd_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnBusHiSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnStuckBusHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnVldBusHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnBusHiSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnStuckBusHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnVldBusHiSpd_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg348BusHiSpdPer1 GmMsg348BusHiSpdPer1
FUNC(void, GmMsg348BusHiSpd_CODE) GmMsg348BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg348BusHiSpd_STOP_SEC_CODE
# include "GmMsg348BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1443376194
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/MM011A_GmMsg348BusHiSpd_Impl-kzdyfh/MM011A_GmMsg348BusHiSpd_Impl/tools/contract/Rte_GmMsg348BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1443376194
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG348BUSHISPD_H */
