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
 *          File:  Rte_GmMsg1E5BusChassisExp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1E5BusChassisExp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1E5BUSCHASSISEXP_H
# define _RTE_GMMSG1E5BUSCHASSISEXP_H

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

# include "Rte_GmMsg1E5BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgToSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgVldToSerlCom_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVelToSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgTrimPrfmd_Logl (FALSE)
#  define Rte_InitValue_HwAgVldToSerlCom_Logl (FALSE)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_SteerWhlAgAlvRollgCntBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtMaskBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtVldBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgMaskBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrCalStsBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrChksBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrTypBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgVldBusChassisExp_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwAg_Val Rte_Read_GmMsg1E5BusChassisExp_HwAg_Val
#  define Rte_Read_GmMsg1E5BusChassisExp_HwAg_Val(data) (*(data) = Rte_HwAgSysArbn_HwAgToSerlCom_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTrimPrfmd_Logl Rte_Read_GmMsg1E5BusChassisExp_HwAgTrimPrfmd_Logl
#  define Rte_Read_GmMsg1E5BusChassisExp_HwAgTrimPrfmd_Logl(data) (*(data) = Rte_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgVldToSerlCom_Logl Rte_Read_GmMsg1E5BusChassisExp_HwAgVldToSerlCom_Logl
#  define Rte_Read_GmMsg1E5BusChassisExp_HwAgVldToSerlCom_Logl(data) (*(data) = Rte_HwAgSysArbn_HwAgVldToSerlCom_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_GmMsg1E5BusChassisExp_HwVel_Val
#  define Rte_Read_GmMsg1E5BusChassisExp_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVelToSerlCom_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_SteerWhlAgAlvRollgCntBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgGrdtBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgGrdtMaskBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgGrdtVldBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgMaskBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgSnsrCalStsBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgSnsrChksBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgSnsrTypBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgVldBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val
#  define Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val(data) (Rte_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E5BusChassisExp_GmMsg1E5BusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg1E5BusChassisExpRollgCntr() \
  (&Rte_GmMsg1E5BusChassisExp_GmMsg1E5BusChassisExpRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg1E5BusChassisExp_START_SEC_CODE
# include "GmMsg1E5BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg1E5BusChassisExpPer1 GmMsg1E5BusChassisExpPer1
#  define RTE_RUNNABLE_Msg1E5ChassisExpTxCallBack_Oper Msg1E5ChassisExpTxCallBack_Oper
# endif

FUNC(void, GmMsg1E5BusChassisExp_CODE) GmMsg1E5BusChassisExpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg1E5BusChassisExp_CODE) Msg1E5ChassisExpTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg1E5BusChassisExp_STOP_SEC_CODE
# include "GmMsg1E5BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG1E5BUSCHASSISEXP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
