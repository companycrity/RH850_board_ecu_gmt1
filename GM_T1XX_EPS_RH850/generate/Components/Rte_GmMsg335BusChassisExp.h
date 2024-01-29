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
 *          File:  Rte_GmMsg335BusChassisExp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg335BusChassisExp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG335BUSCHASSISEXP_H
# define _RTE_GMMSG335BUSCHASSISEXP_H

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

# include "Rte_GmMsg335BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_ApaDrvrIntvDetd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_ApaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ApaDrvrIntvDetd_Logl (FALSE)
#  define Rte_InitValue_ApaSt_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetd_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetdProtnVal_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetdRollgCntr_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetdVld_Val (0U)
#  define Rte_InitValue_ElecPowerSteerAvlSts_Val (0U)
#  define Rte_InitValue_ElecPowerSteerAvlStsProtnVal_Val (0U)
#  define Rte_InitValue_ElecPowerSteerAvlStsRollgCntr_Val (0U)
#  define Rte_InitValue_HwTqIdptSig_Val (4U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ApaDrvrIntvDetd_Logl Rte_Read_GmMsg335BusChassisExp_ApaDrvrIntvDetd_Logl
#  define Rte_Read_GmMsg335BusChassisExp_ApaDrvrIntvDetd_Logl(data) (*(data) = Rte_GmOvrlStMgr_ApaDrvrIntvDetd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ApaSt_Val Rte_Read_GmMsg335BusChassisExp_ApaSt_Val
#  define Rte_Read_GmMsg335BusChassisExp_ApaSt_Val(data) (*(data) = Rte_GmOvrlStMgr_ApaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqIdptSig_Val Rte_Read_GmMsg335BusChassisExp_HwTqIdptSig_Val
#  define Rte_Read_GmMsg335BusChassisExp_HwTqIdptSig_Val(data) (*(data) = Rte_HwTqCorrln_HwTqIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_DrvrSteerIntvDetd_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val
#  define Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val(data) (Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DrvrSteerIntvDetdProtnVal_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val
#  define Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val(data) (Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DrvrSteerIntvDetdRollgCntr_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val
#  define Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val(data) (Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DrvrSteerIntvDetdVld_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val
#  define Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val(data) (Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ElecPowerSteerAvlSts_Val Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val
#  define Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val(data) (Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ElecPowerSteerAvlStsProtnVal_Val Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val
#  define Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val(data) (Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val
#  define Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val(data) (Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSigFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg335BusChassisExp_GmMsg335BusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg335BusChassisExpRollgCntr() \
  (&Rte_GmMsg335BusChassisExp_GmMsg335BusChassisExpRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg335BusChassisExp_START_SEC_CODE
# include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg335BusChassisExpPer1 GmMsg335BusChassisExpPer1
#  define RTE_RUNNABLE_Msg335TxCallBack_Oper Msg335TxCallBack_Oper
# endif

FUNC(void, GmMsg335BusChassisExp_CODE) GmMsg335BusChassisExpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg335BusChassisExp_CODE) Msg335TxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg335BusChassisExp_STOP_SEC_CODE
# include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG335BUSCHASSISEXP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
