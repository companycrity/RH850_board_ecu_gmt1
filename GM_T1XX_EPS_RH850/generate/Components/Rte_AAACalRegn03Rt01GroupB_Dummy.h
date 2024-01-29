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
 *          File:  Rte_AAACalRegn03Rt01GroupB_Dummy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AAACalRegn03Rt01GroupB_Dummy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AAACALREGN03RT01GROUPB_DUMMY_H
# define _RTE_AAACALREGN03RT01GROUPB_DUMMY_H

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

# ifndef RTE_CORE
#  define RTE_MULTI_INST_API
# endif

/* include files */

# include "Rte_AAACalRegn03Rt01GroupB_Dummy_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE
typedef P2CONST(struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(self) ((self)->AssiHiFrqTqWhlImbRejctnTqX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(self) ((self)->AssiHiFrqWhlImbRejctnBlndX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(self) ((self)->AssiHiFrqWhlImbRejctnBlndY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(self) ((self)->AssiHiFrqWhlImbRejctnGainY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMaxX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMaxY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(self) ((self)->AssiWhlImbRejctnBlndScaX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(self) ((self)->AssiWhlImbRejctnBlndScaY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D(self) ((self)->EotProtnDampgVehSpdTbl.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D(self) ((self)->EotProtnEntrGainVehSpdTbl.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnEntrGainX_Ary2D(self) ((self)->EotProtnEntrGainX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnEntrGainY_Ary2D(self) ((self)->EotProtnEntrGainY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnExitDampgY_Ary2D(self) ((self)->EotProtnExitDampgY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnHwDegDampgX_Ary2D(self) ((self)->EotProtnHwDegDampgX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnNormDampgY_Ary2D(self) ((self)->EotProtnNormDampgY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(self) ((self)->InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# endif /* !defined(RTE_CORE) */


# define AAACalRegn03Rt01GroupB_Dummy_START_SEC_CODE
# include "AAACalRegn03Rt01GroupB_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CalRegn03Rt01GroupBDummyInit1 CalRegn03Rt01GroupBDummyInit1
# endif

FUNC(void, AAACalRegn03Rt01GroupB_Dummy_CODE) CalRegn03Rt01GroupBDummyInit1(P2CONST(struct Rte_CDS_AAACalRegn03Rt01GroupB_Dummy, AUTOMATIC, RTE_CONST) self); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define AAACalRegn03Rt01GroupB_Dummy_STOP_SEC_CODE
# include "AAACalRegn03Rt01GroupB_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_AAACALREGN03RT01GROUPB_DUMMY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
