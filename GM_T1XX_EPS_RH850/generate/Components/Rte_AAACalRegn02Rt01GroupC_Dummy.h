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
 *          File:  Rte_AAACalRegn02Rt01GroupC_Dummy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AAACalRegn02Rt01GroupC_Dummy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AAACALREGN02RT01GROUPC_DUMMY_H
# define _RTE_AAACALREGN02RT01GROUPC_DUMMY_H

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

# include "Rte_AAACalRegn02Rt01GroupC_Dummy_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE
typedef P2CONST(struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(self) ((self)->GmOvrlStMgrHwAgTarLimr.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrStandStillThd_Val(self) ((self)->GmOvrlStMgrStandStillThd.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaEnaRate_Val(self) ((self)->GmTqArbnApaEnaRate.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(self) ((self)->GmTqArbnApaSmotngHwTqLpFilFrq.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(self) ((self)->GmOvrlStMgrShiftLvrTiThd.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(self) ((self)->GmOvrlStMgrStandStillTiThd.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaDiRateY_Ary1D(self) ((self)->GmTqArbnApaDiRateY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaSmotngX_Ary1D(self) ((self)->GmTqArbnApaSmotngX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaSmotngY_Ary1D(self) ((self)->GmTqArbnApaSmotngY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(self) ((self)->GmTqArbnLkaOutpOvrlX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(self) ((self)->GmTqArbnLkaOutpOvrlY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnLkaSlewX_Ary1D(self) ((self)->GmTqArbnLkaSlewX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnLkaSlewY_Ary1D(self) ((self)->GmTqArbnLkaSlewY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# endif /* !defined(RTE_CORE) */


# define AAACalRegn02Rt01GroupC_Dummy_START_SEC_CODE
# include "AAACalRegn02Rt01GroupC_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CalRegn02Rt01GroupCDummyInit1 CalRegn02Rt01GroupCDummyInit1
# endif

FUNC(void, AAACalRegn02Rt01GroupC_Dummy_CODE) CalRegn02Rt01GroupCDummyInit1(P2CONST(struct Rte_CDS_AAACalRegn02Rt01GroupC_Dummy, AUTOMATIC, RTE_CONST) self); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define AAACalRegn02Rt01GroupC_Dummy_STOP_SEC_CODE
# include "AAACalRegn02Rt01GroupC_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_AAACALREGN02RT01GROUPC_DUMMY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
