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
 *          File:  Rte_AAACalRegn03Rt01GroupA_Dummy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AAACalRegn03Rt01GroupA_Dummy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AAACALREGN03RT01GROUPA_DUMMY_H
# define _RTE_AAACALREGN03RT01GROUPA_DUMMY_H

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

# include "Rte_AAACalRegn03Rt01GroupA_Dummy_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE
typedef P2CONST(struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_AssiHiFrqGainY_Ary2D(self) ((self)->AssiHiFrqGainY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqTqX_Ary2D(self) ((self)->AssiHiFrqTqX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMinX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMinY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff1ScaY_Ary1D(self) ((self)->DampgHydCoeff1ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff2ScaY_Ary1D(self) ((self)->DampgHydCoeff2ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff3ScaY_Ary1D(self) ((self)->DampgHydCoeff3ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff4ScaY_Ary1D(self) ((self)->DampgHydCoeff4ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgMotVelX_Ary2D(self) ((self)->DampgMotVelX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgMotVelY_Ary2D(self) ((self)->DampgMotVelY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnBlndX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnBlndY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnOffY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnOnY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(self) ((self)->InertiaCmpVelAssiBasdDampgCoeffX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(self) ((self)->InertiaCmpVelAssiBasdDampgRollgY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(self) ((self)->InertiaCmpVelAssiBasdDampgStatY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(self) ((self)->InertiaCmpVelDampgSpdBlndY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(self) ((self)->InertiaCmpVelNotchBlndY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(self) ((self)->RtnHwAgOffsCalcdX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(self) ((self)->RtnHwAgOffsCalcdY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnScaTqX_Ary2D(self) ((self)->RtnScaTqX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnScaTqY_Ary2D(self) ((self)->RtnScaTqY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnScaVelX_Ary2D(self) ((self)->RtnScaVelX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnScaVelY_Ary2D(self) ((self)->RtnScaVelY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# endif /* !defined(RTE_CORE) */


# define AAACalRegn03Rt01GroupA_Dummy_START_SEC_CODE
# include "AAACalRegn03Rt01GroupA_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CalRegn03Rt01GroupADummyInit1 CalRegn03Rt01GroupADummyInit1
# endif

FUNC(void, AAACalRegn03Rt01GroupA_Dummy_CODE) CalRegn03Rt01GroupADummyInit1(P2CONST(struct Rte_CDS_AAACalRegn03Rt01GroupA_Dummy, AUTOMATIC, RTE_CONST) self); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define AAACalRegn03Rt01GroupA_Dummy_STOP_SEC_CODE
# include "AAACalRegn03Rt01GroupA_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_AAACALREGN03RT01GROUPA_DUMMY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
