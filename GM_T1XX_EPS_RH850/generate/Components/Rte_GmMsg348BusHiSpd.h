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
 *          File:  Rte_GmMsg348BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg348BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG348BUSHISPD_H
# define _RTE_GMMSG348BUSHISPD_H

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

# include "Rte_GmMsg348BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg348BusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_LstRxnTiMsg348BusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelLeDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeDrvnRawBusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelLeDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnVldBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnVldRawBusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelRiDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiDrvnRawBusHiSpd_Val (0U)
#  define Rte_InitValue_WhlGndVelRiDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnVldBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnVldRawBusHiSpd_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_LstRxnTiMsg348BusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_LstRxnTiMsg348BusHiSpd_Val
#  define Rte_Read_GmMsg348BusHiSpd_LstRxnTiMsg348BusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg348BusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnRawBusHiSpd_Val
#  define Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldRawBusHiSpd_Val
#  define Rte_Read_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnRawBusHiSpd_Val
#  define Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnVldRawBusHiSpd_Val Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldRawBusHiSpd_Val
#  define Rte_Read_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldRawBusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_WhlGndVelLeDrvnBusHiSpd_Val Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val
#  define Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val(data) (Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl
#  define Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl(data) (Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeDrvnVldBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl
#  define Rte_Write_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl(data) (Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiDrvnBusHiSpd_Val Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val
#  define Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val(data) (Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiDrvnStuckBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl
#  define Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl(data) (Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiDrvnVldBusHiSpd_Logl Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl
#  define Rte_Write_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl(data) (Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_GmMsg348BusHiSpdInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg348BusHiSpdInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg348BusHiSpdMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg348BusHiSpdMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg348BusHiSpdStuckTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg348BusHiSpdStuckTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi() \
  (&Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi() \
  (&Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelLeDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi() \
  (&Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi() \
  (&Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdWhlGndVelRiDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn() \
  (&Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelLeDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn() \
  (&Rte_GmMsg348BusHiSpd_GmMsg348BusHiSpdPrevWhlGndVelRiDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg348BusHiSpd_START_SEC_CODE
# include "GmMsg348BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg348BusHiSpdPer1 GmMsg348BusHiSpdPer1
# endif

FUNC(void, GmMsg348BusHiSpd_CODE) GmMsg348BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg348BusHiSpd_STOP_SEC_CODE
# include "GmMsg348BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG348BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
