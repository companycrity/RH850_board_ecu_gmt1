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
 *          File:  Rte_CDD_Tauj1CfgAndUse.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_Tauj1CfgAndUse>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_TAUJ1CFGANDUSE_H
# define _RTE_CDD_TAUJ1CFGANDUSE_H

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

# include "Rte_CDD_Tauj1CfgAndUse_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PhaOnTiMeasdD_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdE_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdF_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PhaOnTiMeasdD_Val Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val
#  define Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val(data) (Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaOnTiMeasdE_Val Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val
#  define Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val(data) (Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaOnTiMeasdF_Val Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val
#  define Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val(data) (Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrDPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrEPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrFPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PhaOnTiCntrDPrev() \
  (&Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrDPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaOnTiCntrEPrev() \
  (&Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrEPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaOnTiCntrFPrev() \
  (&Rte_CDD_Tauj1CfgAndUse_PhaOnTiCntrFPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_Tauj1CfgAndUse_START_SEC_CODE
# include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Tauj1CfgAndUseInit1 Tauj1CfgAndUseInit1
#  define RTE_RUNNABLE_Tauj1CfgAndUsePer1 Tauj1CfgAndUsePer1
# endif

FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUseInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUsePer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_Tauj1CfgAndUse_STOP_SEC_CODE
# include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_TAUJ1CFGANDUSE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
