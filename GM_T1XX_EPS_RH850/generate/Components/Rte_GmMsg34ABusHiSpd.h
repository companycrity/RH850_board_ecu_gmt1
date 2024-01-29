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
 *          File:  Rte_GmMsg34ABusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg34ABusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG34ABUSHISPD_H
# define _RTE_GMMSG34ABUSHISPD_H

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

# include "Rte_GmMsg34ABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg34ABusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_LstRxnTiMsg34ABusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelLeNonDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeNonDrvnRawBusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnVldBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelRiNonDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiNonDrvnRawBusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnVldBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_LstRxnTiMsg34ABusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_LstRxnTiMsg34ABusHiSpd_Val
#  define Rte_Read_GmMsg34ABusHiSpd_LstRxnTiMsg34ABusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg34ABusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnRawBusHiSpd_Val
#  define Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val
#  define Rte_Read_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnRawBusHiSpd_Val
#  define Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val
#  define Rte_Read_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_WhlGndVelLeNonDrvnBusHiSpd_Val Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val
#  define Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val(data) (Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl
#  define Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(data) (Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeNonDrvnVldBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl
#  define Rte_Write_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(data) (Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiNonDrvnBusHiSpd_Val Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val
#  define Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val(data) (Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl
#  define Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(data) (Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiNonDrvnVldBusHiSpd_Logl Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl
#  define Rte_Write_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(data) (Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_GmMsg34ABusHiSpdInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg34ABusHiSpdInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg34ABusHiSpdMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg34ABusHiSpdMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg34ABusHiSpdStuckTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg34ABusHiSpdStuckTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi() \
  (&Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi() \
  (&Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelLeNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi() \
  (&Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi() \
  (&Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdWhlGndVelRiNonDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn() \
  (&Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelLeNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn() \
  (&Rte_GmMsg34ABusHiSpd_GmMsg34ABusHiSpdPrevWhlGndVelRiNonDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg34ABusHiSpd_START_SEC_CODE
# include "GmMsg34ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg34ABusHiSpdPer1 GmMsg34ABusHiSpdPer1
# endif

FUNC(void, GmMsg34ABusHiSpd_CODE) GmMsg34ABusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg34ABusHiSpd_STOP_SEC_CODE
# include "GmMsg34ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG34ABUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
