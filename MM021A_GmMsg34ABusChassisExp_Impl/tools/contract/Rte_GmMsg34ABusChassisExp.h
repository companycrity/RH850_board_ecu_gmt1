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
 *          File:  Rte_GmMsg34ABusChassisExp.h
 *     SW-C Type:  GmMsg34ABusChassisExp
 *  Generated at:  Sun Sep 27 12:18:30 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg34ABusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG34ABUSCHASSISEXP_H
# define _RTE_GMMSG34ABUSCHASSISEXP_H

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

# include "Rte_GmMsg34ABusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg34ABusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg34ABusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg34ABusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg34ABusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LstRxnTiMsg34ABusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeNonDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiNonDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusChassisExp_LstRxnTiMsg34ABusChassisExp_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG34ABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnRawBusChassisExp_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG34ABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG34ABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnRawBusChassisExp_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG34ABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG34ABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg34ABusChassisExp_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG34ABUSCHASSISEXP_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg34ABusChassisExp_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG34ABUSCHASSISEXP_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg34ABusChassisExp_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpStuckTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LstRxnTiMsg34ABusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_LstRxnTiMsg34ABusChassisExp_Val
# define Rte_Read_WhlGndVelLeNonDrvnRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnRawBusChassisExp_Val
# define Rte_Read_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val
# define Rte_Read_WhlGndVelRiNonDrvnRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnRawBusChassisExp_Val
# define Rte_Read_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_WhlGndVelLeNonDrvnBusChassisExp_Val Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val
# define Rte_Write_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl
# define Rte_Write_WhlGndVelLeNonDrvnVldBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl
# define Rte_Write_WhlGndVelRiNonDrvnBusChassisExp_Val Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val
# define Rte_Write_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl
# define Rte_Write_WhlGndVelRiNonDrvnVldBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg34ABusChassisExp_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg34ABusChassisExp_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg34ABusChassisExp_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg34ABusChassisExpInvldTiOut_Val Rte_Prm_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpInvldTiOut_Val

# define Rte_Prm_GmMsg34ABusChassisExpMissTiOut_Val Rte_Prm_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpMissTiOut_Val

# define Rte_Prm_GmMsg34ABusChassisExpStuckTiOut_Val Rte_Prm_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpStuckTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi() (Rte_Inst_GmMsg34ABusChassisExp->Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi() (Rte_Inst_GmMsg34ABusChassisExp->Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi() (Rte_Inst_GmMsg34ABusChassisExp->Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi() (Rte_Inst_GmMsg34ABusChassisExp->Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn() (Rte_Inst_GmMsg34ABusChassisExp->Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn() (Rte_Inst_GmMsg34ABusChassisExp->Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi(void)
 *   uint32 *Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi(void)
 *   uint32 *Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi(void)
 *   uint16 *Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn(void)
 *   uint16 *Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg34ABusChassisExpInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg34ABusChassisExpMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg34ABusChassisExpStuckTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg34ABusChassisExp_START_SEC_CODE
# include "GmMsg34ABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg34ABusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_LstRxnTiMsg34ABusChassisExp_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnRawBusChassisExp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnRawBusChassisExp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnBusChassisExp_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnBusChassisExp_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg34ABusChassisExpPer1 GmMsg34ABusChassisExpPer1
FUNC(void, GmMsg34ABusChassisExp_CODE) GmMsg34ABusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg34ABusChassisExp_STOP_SEC_CODE
# include "GmMsg34ABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1443379082
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Working/MM021A_GmMsg34ABusChassisExp_Impl/tools/contract/Rte_GmMsg34ABusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1443379082
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG34ABUSCHASSISEXP_H */
