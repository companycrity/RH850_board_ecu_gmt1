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
 *          File:  Rte_SnsrOffsCorrn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SnsrOffsCorrn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SNSROFFSCORRN_H
# define _RTE_SNSROFFSCORRN_H

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

# include "Rte_SnsrOffsCorrn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsCorrn_HwAgCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsCorrn_HwTqCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsCorrn_VehYawRateCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgVehTrimOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_HwAgOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_HwTqOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_VehYawRateOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgCorrd_Val (0.0F)
#  define Rte_InitValue_HwAgOffs_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqCorrd_Val (0.0F)
#  define Rte_InitValue_HwTqOffs_Val (0.0F)
#  define Rte_InitValue_VehYawRate_Val (0.0F)
#  define Rte_InitValue_VehYawRateCorrd_Val (0.0F)
#  define Rte_InitValue_VehYawRateOffs_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwAg_Val Rte_Read_SnsrOffsCorrn_HwAg_Val
#  define Rte_Read_SnsrOffsCorrn_HwAg_Val(data) (*(data) = Rte_HwAgVehCentrTrim_HwAgVehTrimOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgOffs_Val Rte_Read_SnsrOffsCorrn_HwAgOffs_Val
#  define Rte_Read_SnsrOffsCorrn_HwAgOffs_Val(data) (*(data) = Rte_SnsrOffsLrng_HwAgOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_SnsrOffsCorrn_HwTq_Val
#  define Rte_Read_SnsrOffsCorrn_HwTq_Val(data) (*(data) = Rte_HwTqArbn_HwTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqOffs_Val Rte_Read_SnsrOffsCorrn_HwTqOffs_Val
#  define Rte_Read_SnsrOffsCorrn_HwTqOffs_Val(data) (*(data) = Rte_SnsrOffsLrng_HwTqOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehYawRate_Val Rte_Read_SnsrOffsCorrn_VehYawRate_Val
#  define Rte_Read_SnsrOffsCorrn_VehYawRate_Val(data) (*(data) = Rte_VehSigCdng_VehYawRate_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehYawRateOffs_Val Rte_Read_SnsrOffsCorrn_VehYawRateOffs_Val
#  define Rte_Read_SnsrOffsCorrn_VehYawRateOffs_Val(data) (*(data) = Rte_SnsrOffsLrng_VehYawRateOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwAgCorrd_Val Rte_Write_SnsrOffsCorrn_HwAgCorrd_Val
#  define Rte_Write_SnsrOffsCorrn_HwAgCorrd_Val(data) (Rte_SnsrOffsCorrn_HwAgCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqCorrd_Val Rte_Write_SnsrOffsCorrn_HwTqCorrd_Val
#  define Rte_Write_SnsrOffsCorrn_HwTqCorrd_Val(data) (Rte_SnsrOffsCorrn_HwTqCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehYawRateCorrd_Val Rte_Write_SnsrOffsCorrn_VehYawRateCorrd_Val
#  define Rte_Write_SnsrOffsCorrn_VehYawRateCorrd_Val(data) (Rte_SnsrOffsCorrn_VehYawRateCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsCorrnHwAgLrndOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsCorrnHwTqLrndOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsCorrnVehYawRateLrndOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsCorrnOffsEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsCorrnOffsEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# endif /* !defined(RTE_CORE) */


# define SnsrOffsCorrn_START_SEC_CODE
# include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_SnsrOffsCorrnInit1 SnsrOffsCorrnInit1
#  define RTE_RUNNABLE_SnsrOffsCorrnPer1 SnsrOffsCorrnPer1
# endif

FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define SnsrOffsCorrn_STOP_SEC_CODE
# include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_SNSROFFSCORRN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
