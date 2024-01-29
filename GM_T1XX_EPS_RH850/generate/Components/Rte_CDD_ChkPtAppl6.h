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
 *          File:  Rte_CDD_ChkPtAppl6.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_ChkPtAppl6>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_CHKPTAPPL6_H
# define _RTE_CDD_CHKPTAPPL6_H

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

# include "Rte_CDD_ChkPtAppl6_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_WDGM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_WDGM_APPL_CODE) WdgM_CheckpointReached(WdgM_SupervisedEntityIdType parg0, WdgM_CheckpointIdType parg1); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_WDGM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ChkPt_10ms_Appl6_End_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)4, (WdgM_CheckpointIdType)1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_10ms_Appl6_Strt_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)4, (WdgM_CheckpointIdType)0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_2ms_App6_End_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)2, (WdgM_CheckpointIdType)1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_2ms_Appl6_Strt_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)2, (WdgM_CheckpointIdType)0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_ChkPtAppl6_START_SEC_CODE
# include "CDD_ChkPtAppl6_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ChkPt_10msAppl6End ChkPt_10msAppl6End
#  define RTE_RUNNABLE_ChkPt_10msAppl6Strt ChkPt_10msAppl6Strt
#  define RTE_RUNNABLE_ChkPt_2msAppl6End ChkPt_2msAppl6End
#  define RTE_RUNNABLE_ChkPt_2msAppl6Strt ChkPt_2msAppl6Strt
# endif

FUNC(void, CDD_ChkPtAppl6_CODE) ChkPt_10msAppl6End(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl6_CODE) ChkPt_10msAppl6Strt(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl6_CODE) ChkPt_2msAppl6End(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl6_CODE) ChkPt_2msAppl6Strt(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_ChkPtAppl6_STOP_SEC_CODE
# include "CDD_ChkPtAppl6_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_WdgM_AliveSupervision_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_CHKPTAPPL6_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
