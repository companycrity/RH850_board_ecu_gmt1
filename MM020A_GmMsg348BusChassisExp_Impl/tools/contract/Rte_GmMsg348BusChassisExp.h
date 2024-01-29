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
 *          File:  Rte_GmMsg348BusChassisExp.h
 *     SW-C Type:  GmMsg348BusChassisExp
 *  Generated at:  Sun Sep 27 12:12:35 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg348BusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG348BUSCHASSISEXP_H
# define _RTE_GMMSG348BUSCHASSISEXP_H

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

# include "Rte_GmMsg348BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg348BusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg348BusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg348BusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg348BusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LstRxnTiMsg348BusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnVldRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnVldRawBusChassisExp_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusChassisExp_LstRxnTiMsg348BusChassisExp_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG348BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnRawBusChassisExp_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG348BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldRawBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG348BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnRawBusChassisExp_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG348BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldRawBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG348BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg348BusChassisExp_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG348BUSCHASSISEXP_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg348BusChassisExp_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG348BUSCHASSISEXP_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg348BusChassisExp_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg348BusChassisExp_GmMsg348BusChassisExpInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg348BusChassisExp_GmMsg348BusChassisExpMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg348BusChassisExp_GmMsg348BusChassisExpStuckTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LstRxnTiMsg348BusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_LstRxnTiMsg348BusChassisExp_Val
# define Rte_Read_WhlGndVelLeDrvnRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnRawBusChassisExp_Val
# define Rte_Read_WhlGndVelLeDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldRawBusChassisExp_Val
# define Rte_Read_WhlGndVelRiDrvnRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnRawBusChassisExp_Val
# define Rte_Read_WhlGndVelRiDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldRawBusChassisExp_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_WhlGndVelLeDrvnBusChassisExp_Val Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val
# define Rte_Write_WhlGndVelLeDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl
# define Rte_Write_WhlGndVelLeDrvnVldBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl
# define Rte_Write_WhlGndVelRiDrvnBusChassisExp_Val Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val
# define Rte_Write_WhlGndVelRiDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl
# define Rte_Write_WhlGndVelRiDrvnVldBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg348BusChassisExp_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg348BusChassisExp_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg348BusChassisExp_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg348BusChassisExpInvldTiOut_Val Rte_Prm_GmMsg348BusChassisExp_GmMsg348BusChassisExpInvldTiOut_Val

# define Rte_Prm_GmMsg348BusChassisExpMissTiOut_Val Rte_Prm_GmMsg348BusChassisExp_GmMsg348BusChassisExpMissTiOut_Val

# define Rte_Prm_GmMsg348BusChassisExpStuckTiOut_Val Rte_Prm_GmMsg348BusChassisExp_GmMsg348BusChassisExpStuckTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi() (Rte_Inst_GmMsg348BusChassisExp->Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi() (Rte_Inst_GmMsg348BusChassisExp->Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi() (Rte_Inst_GmMsg348BusChassisExp->Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi() (Rte_Inst_GmMsg348BusChassisExp->Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn() (Rte_Inst_GmMsg348BusChassisExp->Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn() (Rte_Inst_GmMsg348BusChassisExp->Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi(void)
 *   uint32 *Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi(void)
 *   uint16 *Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn(void)
 *   uint16 *Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg348BusChassisExpInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg348BusChassisExpMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg348BusChassisExpStuckTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg348BusChassisExp_START_SEC_CODE
# include "GmMsg348BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg348BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_LstRxnTiMsg348BusChassisExp_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnRawBusChassisExp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnVldRawBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnRawBusChassisExp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnVldRawBusChassisExp_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnBusChassisExp_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnStuckBusChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnVldBusChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnBusChassisExp_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnStuckBusChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnVldBusChassisExp_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg348BusChassisExpPer1 GmMsg348BusChassisExpPer1
FUNC(void, GmMsg348BusChassisExp_CODE) GmMsg348BusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg348BusChassisExp_STOP_SEC_CODE
# include "GmMsg348BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1443365409
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Working/MM020A_GmMsg348BusChassisExp_Impl/tools/contract/Rte_GmMsg348BusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1443365409
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG348BUSCHASSISEXP_H */
