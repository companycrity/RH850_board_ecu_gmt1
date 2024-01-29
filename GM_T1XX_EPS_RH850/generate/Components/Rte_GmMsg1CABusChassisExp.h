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
 *          File:  Rte_GmMsg1CABusChassisExp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1CABusChassisExp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1CABUSCHASSISEXP_H
# define _RTE_GMMSG1CABUSCHASSISEXP_H

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

# include "Rte_GmMsg1CABusChassisExp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_EscSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_EscCmdArbd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ElecPwrSteerTotTqDlvd_Val (0U)
#  define Rte_InitValue_EscSt_Val (0U)
#  define Rte_InitValue_EscTqDlvd_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_TqOvrlDeltaTqDlvd_Val (0U)
#  define Rte_InitValue_TqOvrlDlvdChks_Val (0U)
#  define Rte_InitValue_TqOvrlDlvdRollgCntr_Val (0U)
#  define Rte_InitValue_TqOvrlTqDlvdSts_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EscSt_Val Rte_Read_GmMsg1CABusChassisExp_EscSt_Val
#  define Rte_Read_GmMsg1CABusChassisExp_EscSt_Val(data) (*(data) = Rte_GmOvrlStMgr_EscSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EscTqDlvd_Val Rte_Read_GmMsg1CABusChassisExp_EscTqDlvd_Val
#  define Rte_Read_GmMsg1CABusChassisExp_EscTqDlvd_Val(data) (*(data) = Rte_GmTqArbn_EscCmdArbd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_GmMsg1CABusChassisExp_HwTq_Val
#  define Rte_Read_GmMsg1CABusChassisExp_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ElecPwrSteerTotTqDlvd_Val Rte_Write_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val
#  define Rte_Write_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val(data) (Rte_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TqOvrlDeltaTqDlvd_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val
#  define Rte_Write_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val(data) (Rte_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TqOvrlDlvdChks_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val
#  define Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val(data) (Rte_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TqOvrlDlvdRollgCntr_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val
#  define Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val(data) (Rte_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TqOvrlTqDlvdSts_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val
#  define Rte_Write_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val(data) (Rte_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1CaBusChassisExpTqPolarity_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1CABusChassisExp_GmMsg1CABusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg1CABusChassisExpRollgCntr() \
  (&Rte_GmMsg1CABusChassisExp_GmMsg1CABusChassisExpRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg1CABusChassisExp_START_SEC_CODE
# include "GmMsg1CABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg1CABusChassisExpPer1 GmMsg1CABusChassisExpPer1
#  define RTE_RUNNABLE_Msg1CATxCallBack_Oper Msg1CATxCallBack_Oper
# endif

FUNC(void, GmMsg1CABusChassisExp_CODE) GmMsg1CABusChassisExpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg1CABusChassisExp_CODE) Msg1CATxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg1CABusChassisExp_STOP_SEC_CODE
# include "GmMsg1CABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG1CABUSCHASSISEXP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
