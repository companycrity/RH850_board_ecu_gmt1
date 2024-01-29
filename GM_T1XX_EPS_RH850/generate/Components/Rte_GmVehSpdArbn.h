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
 *          File:  Rte_GmVehSpdArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmVehSpdArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMVEHSPDARBN_H
# define _RTE_GMVEHSPDARBN_H

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

# include "Rte_GmVehSpdArbn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdArbd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdArbdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMaxSecur_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMaxSecurVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMinSecur_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMinSecurVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdSnsrVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_VehPwrModDftVehSpdEna_Logl (FALSE)
#  define Rte_InitValue_VehSpdArbd_Val (0.0F)
#  define Rte_InitValue_VehSpdArbdVld_Logl (FALSE)
#  define Rte_InitValue_VehSpdMaxSecur_Val (0.0F)
#  define Rte_InitValue_VehSpdMaxSecurVld_Logl (FALSE)
#  define Rte_InitValue_VehSpdMinSecur_Val (0.0F)
#  define Rte_InitValue_VehSpdMinSecurVld_Logl (FALSE)
#  define Rte_InitValue_VehSpdSnsrVld_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnVldBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeNonDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeNonDrvnVldBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnVldBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiNonDrvnBusHiSpd_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiNonDrvnVldBusHiSpd_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_VehPwrModDftVehSpdEna_Logl Rte_Read_GmVehSpdArbn_VehPwrModDftVehSpdEna_Logl
#  define Rte_Read_GmVehSpdArbn_VehPwrModDftVehSpdEna_Logl(data) (*(data) = Rte_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusChassisExp_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusChassisExp_Val(data) (*(data) = Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusHiSpd_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusHiSpd_Val(data) (*(data) = Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusChassisExp_Logl(data) (*(data) = Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusHiSpd_Logl(data) (*(data) = Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnStuckBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusChassisExp_Logl(data) (*(data) = Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusHiSpd_Logl(data) (*(data) = Rte_GmMsg348BusHiSpd_WhlGndVelLeDrvnVldBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusChassisExp_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusChassisExp_Val(data) (*(data) = Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusHiSpd_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusHiSpd_Val(data) (*(data) = Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(data) (*(data) = Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(data) (*(data) = Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(data) (*(data) = Rte_GmMsg34ABusChassisExp_WhlGndVelLeNonDrvnVldBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeNonDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(data) (*(data) = Rte_GmMsg34ABusHiSpd_WhlGndVelLeNonDrvnVldBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusChassisExp_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusChassisExp_Val(data) (*(data) = Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusHiSpd_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusHiSpd_Val(data) (*(data) = Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusChassisExp_Logl(data) (*(data) = Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusHiSpd_Logl(data) (*(data) = Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnStuckBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusChassisExp_Logl(data) (*(data) = Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusHiSpd_Logl(data) (*(data) = Rte_GmMsg348BusHiSpd_WhlGndVelRiDrvnVldBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusChassisExp_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusChassisExp_Val(data) (*(data) = Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusHiSpd_Val
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusHiSpd_Val(data) (*(data) = Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(data) (*(data) = Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(data) (*(data) = Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusChassisExp_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(data) (*(data) = Rte_GmMsg34ABusChassisExp_WhlGndVelRiNonDrvnVldBusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiNonDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusHiSpd_Logl
#  define Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(data) (*(data) = Rte_GmMsg34ABusHiSpd_WhlGndVelRiNonDrvnVldBusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_VehSpdArbd_Val Rte_Write_GmVehSpdArbn_VehSpdArbd_Val
#  define Rte_Write_GmVehSpdArbn_VehSpdArbd_Val(data) (Rte_GmVehSpdArbn_VehSpdArbd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdArbdVld_Logl Rte_Write_GmVehSpdArbn_VehSpdArbdVld_Logl
#  define Rte_Write_GmVehSpdArbn_VehSpdArbdVld_Logl(data) (Rte_GmVehSpdArbn_VehSpdArbdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdMaxSecur_Val Rte_Write_GmVehSpdArbn_VehSpdMaxSecur_Val
#  define Rte_Write_GmVehSpdArbn_VehSpdMaxSecur_Val(data) (Rte_GmVehSpdArbn_VehSpdMaxSecur_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdMaxSecurVld_Logl Rte_Write_GmVehSpdArbn_VehSpdMaxSecurVld_Logl
#  define Rte_Write_GmVehSpdArbn_VehSpdMaxSecurVld_Logl(data) (Rte_GmVehSpdArbn_VehSpdMaxSecurVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdMinSecur_Val Rte_Write_GmVehSpdArbn_VehSpdMinSecur_Val
#  define Rte_Write_GmVehSpdArbn_VehSpdMinSecur_Val(data) (Rte_GmVehSpdArbn_VehSpdMinSecur_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdMinSecurVld_Logl Rte_Write_GmVehSpdArbn_VehSpdMinSecurVld_Logl
#  define Rte_Write_GmVehSpdArbn_VehSpdMinSecurVld_Logl(data) (Rte_GmVehSpdArbn_VehSpdMinSecurVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdSnsrVld_Logl Rte_Write_GmVehSpdArbn_VehSpdSnsrVld_Logl
#  define Rte_Write_GmVehSpdArbn_VehSpdSnsrVld_Logl(data) (Rte_GmVehSpdArbn_VehSpdSnsrVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_DiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnLeDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnLeNonDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnRiDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehSpdArbn_dGmVehSpdArbnRiNonDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_DiagcRefTi() \
  (&Rte_GmVehSpdArbn_DiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmVehSpdArbnLeDrvnVld() \
  (&Rte_GmVehSpdArbn_dGmVehSpdArbnLeDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmVehSpdArbnLeNonDrvnVld() \
  (&Rte_GmVehSpdArbn_dGmVehSpdArbnLeNonDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmVehSpdArbnRiDrvnVld() \
  (&Rte_GmVehSpdArbn_dGmVehSpdArbnRiDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmVehSpdArbnRiNonDrvnVld() \
  (&Rte_GmVehSpdArbn_dGmVehSpdArbnRiNonDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmVehSpdArbn_START_SEC_CODE
# include "GmVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmVehSpdArbnInit1 GmVehSpdArbnInit1
#  define RTE_RUNNABLE_GmVehSpdArbnPer1 GmVehSpdArbnPer1
# endif

FUNC(void, GmVehSpdArbn_CODE) GmVehSpdArbnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmVehSpdArbn_CODE) GmVehSpdArbnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmVehSpdArbn_STOP_SEC_CODE
# include "GmVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMVEHSPDARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
