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
 *          File:  Rte_GmMsg34ABusHiSpd.h
 *     SW-C Type:  GmMsg34ABusHiSpd
 *  Generated at:  Sun Sep 27 12:04:25 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg34ABusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG34ABUSHISPD_H
# define _RTE_GMMSG34ABUSHISPD_H

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

# include "Rte_GmMsg34ABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg34ABusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg34ABusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg34ABusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg34ABusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LstRxnTiMsg34ABusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeNonDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiNonDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusHiSpd_LstRxnTiMsg34ABusHiSpd_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG34ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnRawBusHiSpd_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG34ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG34ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnRawBusHiSpd_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG34ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG34ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg34ABusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG34ABUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg34ABusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG34ABUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg34ABusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdStuckTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LstRxnTiMsg34ABusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_LstRxnTiMsg34ABusHiSpd_Val
# define Rte_Read_WhlGndVelLeNonDrvnRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnRawBusHiSpd_Val
# define Rte_Read_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val
# define Rte_Read_WhlGndVelRiNonDrvnRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnRawBusHiSpd_Val
# define Rte_Read_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_WhlGndVelLeNonDrvnBusHiSpd_Val Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val
# define Rte_Write_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl
# define Rte_Write_WhlGndVelLeNonDrvnVldBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl
# define Rte_Write_WhlGndVelRiNonDrvnBusHiSpd_Val Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val
# define Rte_Write_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl
# define Rte_Write_WhlGndVelRiNonDrvnVldBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg34ABusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg34ABusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg34ABusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg34ABusHiSpdInvldTiOut_Val Rte_Prm_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdInvldTiOut_Val

# define Rte_Prm_GmMsg34ABusHiSpdMissTiOut_Val Rte_Prm_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdMissTiOut_Val

# define Rte_Prm_GmMsg34ABusHiSpdStuckTiOut_Val Rte_Prm_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdStuckTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi() (Rte_Inst_GmMsg34ABusHiSpd->Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi() (Rte_Inst_GmMsg34ABusHiSpd->Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi() (Rte_Inst_GmMsg34ABusHiSpd->Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi() (Rte_Inst_GmMsg34ABusHiSpd->Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn() (Rte_Inst_GmMsg34ABusHiSpd->Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn() (Rte_Inst_GmMsg34ABusHiSpd->Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi(void)
 *   uint32 *Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi(void)
 *   uint16 *Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn(void)
 *   uint16 *Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg34ABusHiSpdInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg34ABusHiSpdMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg34ABusHiSpdStuckTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg34ABusHiSpd_START_SEC_CODE
# include "GmMsg34ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg34ABusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_LstRxnTiMsg34ABusHiSpd_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnRawBusHiSpd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnRawBusHiSpd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnBusHiSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnBusHiSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg34ABusHiSpdPer1 GmMsg34ABusHiSpdPer1
FUNC(void, GmMsg34ABusHiSpd_CODE) GmMsg34ABusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg34ABusHiSpd_STOP_SEC_CODE
# include "GmMsg34ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1443378636
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/MM012A_GmMsg34ABusHiSpd_Impl-kzdyfh/MM012A_GmMsg34ABusHiSpd_Impl/tools/contract/Rte_GmMsg34ABusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1443378636
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG34ABUSHISPD_H */
