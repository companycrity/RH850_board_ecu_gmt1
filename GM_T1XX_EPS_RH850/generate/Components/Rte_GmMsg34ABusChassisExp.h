/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_GmMsg34ABusChassisExp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg34ABusChassisExp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG34ABUSCHASSISEXP_H
# define _RTE_GMMSG34ABUSCHASSISEXP_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_GmMsg34ABusChassisExp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg34ABusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_LstRxnTiMsg34ABusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelLeNonDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeNonDrvnRawBusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelRiNonDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiNonDrvnRawBusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_LstRxnTiMsg34ABusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_LstRxnTiMsg34ABusChassisExp_Val
#  define Rte_Read_GmMsg34ABusChassisExp_LstRxnTiMsg34ABusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg34ABusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnRawBusChassisExp_Val
#  define Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val
#  define Rte_Read_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnRawBusChassisExp_Val
#  define Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val
#  define Rte_Read_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_WhlGndVelLeNonDrvnBusChassisExp_Val Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val
#  define Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val(data) (Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl
#  define Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(data) (Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeNonDrvnVldBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl
#  define Rte_Write_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(data) (Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiNonDrvnBusChassisExp_Val Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val
#  define Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val(data) (Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl
#  define Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(data) (Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiNonDrvnVldBusChassisExp_Logl Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl
#  define Rte_Write_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(data) (Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts6_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmMsg34ABusChassisExpInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg34ABusChassisExpInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg34ABusChassisExpMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg34ABusChassisExpMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg34ABusChassisExpStuckTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg34ABusChassisExpStuckTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi() \
  (&Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi() \
  (&Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelLeNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi() \
  (&Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi() \
  (&Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpWhlGndVelRiNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn() \
  (&Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelLeNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn() \
  (&Rte_GmMsg34ABusChassisExp_GmMsg34ABusChassisExpPrevWhlGndVelRiNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg34ABusChassisExp_START_SEC_CODE
# include "GmMsg34ABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg34ABusChassisExpPer1 GmMsg34ABusChassisExpPer1
# endif

FUNC(void, GmMsg34ABusChassisExp_CODE) GmMsg34ABusChassisExpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg34ABusChassisExp_STOP_SEC_CODE
# include "GmMsg34ABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG34ABUSCHASSISEXP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
