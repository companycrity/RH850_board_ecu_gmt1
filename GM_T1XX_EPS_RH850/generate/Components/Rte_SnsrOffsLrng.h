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
 *          File:  Rte_SnsrOffsLrng.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SnsrOffsLrng>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SNSROFFSLRNG_H
# define _RTE_SNSROFFSLRNG_H

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

# include "Rte_SnsrOffsLrng_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_HwAgOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_HwTqOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SnsrOffsLrng_VehYawRateOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgVehTrimOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgAuthy_Val (0.0F)
#  define Rte_InitValue_HwAgOffs_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqOffs_Val (0.0F)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_MotTqCmdCrf_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
#  define Rte_InitValue_VehYawRate_Val (0.0F)
#  define Rte_InitValue_VehYawRateOffs_Val (0.0F)
#  define Rte_InitValue_VehYawRateVld_Logl (FALSE)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_SnsrOffsLrng_HwTqLrngSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwAg_Val Rte_Read_SnsrOffsLrng_HwAg_Val
#  define Rte_Read_SnsrOffsLrng_HwAg_Val(data) (*(data) = Rte_HwAgVehCentrTrim_HwAgVehTrimOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgAuthy_Val Rte_Read_SnsrOffsLrng_HwAgAuthy_Val
#  define Rte_Read_SnsrOffsLrng_HwAgAuthy_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAgConf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_SnsrOffsLrng_HwTq_Val
#  define Rte_Read_SnsrOffsLrng_HwTq_Val(data) (*(data) = Rte_HwTqArbn_HwTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_SnsrOffsLrng_HwVel_Val
#  define Rte_Read_SnsrOffsLrng_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVel_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmdCrf_Val Rte_Read_SnsrOffsLrng_MotTqCmdCrf_Val
#  define Rte_Read_SnsrOffsLrng_MotTqCmdCrf_Val(data) (*(data) = Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_SnsrOffsLrng_VehSpd_Val
#  define Rte_Read_SnsrOffsLrng_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_SnsrOffsLrng_VehSpdVld_Logl
#  define Rte_Read_SnsrOffsLrng_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehYawRate_Val Rte_Read_SnsrOffsLrng_VehYawRate_Val
#  define Rte_Read_SnsrOffsLrng_VehYawRate_Val(data) (*(data) = Rte_VehSigCdng_VehYawRate_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehYawRateVld_Logl Rte_Read_SnsrOffsLrng_VehYawRateVld_Logl
#  define Rte_Read_SnsrOffsLrng_VehYawRateVld_Logl(data) (*(data) = Rte_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwAgOffs_Val Rte_Write_SnsrOffsLrng_HwAgOffs_Val
#  define Rte_Write_SnsrOffsLrng_HwAgOffs_Val(data) (Rte_SnsrOffsLrng_HwAgOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqOffs_Val Rte_Write_SnsrOffsLrng_HwTqOffs_Val
#  define Rte_Write_SnsrOffsLrng_HwTqOffs_Val(data) (Rte_SnsrOffsLrng_HwTqOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehYawRateOffs_Val Rte_Write_SnsrOffsLrng_VehYawRateOffs_Val
#  define Rte_Write_SnsrOffsLrng_VehYawRateOffs_Val(data) (Rte_SnsrOffsLrng_VehYawRateOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SnsrOffsLrnd_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)70, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SnsrOffsLrnd_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)70, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SnsrOffsLrngPer1_HwTqLrngSts(data) \
  (Rte_Irv_SnsrOffsLrng_HwTqLrngSts = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_SnsrOffsLrngPer2_HwTqLrngSts() \
  Rte_Irv_SnsrOffsLrng_HwTqLrngSts
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_SnsrOffsLrngHwAgLrngDrvgDstThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngDrvgDstThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngHwVelThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngHwVelThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngSysTqThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdMed_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngSysTqThdMed_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngSysTqThdTrustd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngSysTqThdWide_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngSysTqThdWide_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngTi_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngVehSpdThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngVehSpdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngYawOffsDbnd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngYawOffsDbnd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngYawRateThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngYawRateThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngEnaTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngEnaTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngHwAgDbnd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngHwAgDbnd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngHwAgThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngHwAgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngHwTqThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngHwTqThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngHwTqZeroOffsThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngHwVelThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngHwVelThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngMeasTi_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngMeasTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngMeasTiScar_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngMeasTiScar_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd1_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngSampleImbThd1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngSampleImbThd2_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngSampleImbThd2_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngTiWghtCoeff_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngTiWghtCoeff_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngVehSpdThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngVehSpdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwVelFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwVelFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqAndAgFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqAndAgFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnHwTqFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnHwTqFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnPwrEstimnThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnPwrEstimnThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrAmp_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnSinGenrAmp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnSinGenrFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnSinGenrFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnStg1FilGain_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnStg1FilGain_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainCen_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnStg2FilGainCen_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnStg2FilGainDwn_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnStg2FilGainUp_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnStg2FilGainUp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawACdngFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawACdngFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawLrngHwAgThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawLrngHwAgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawLrngTi_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawLrngTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawLrngYawAThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawLrngYawAThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawOffsFrshTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawOffsFrshTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawRateCdngFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawRateCdngFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawRateOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawRateOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmSysTqRat_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmSysTqRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd1_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngSampleThd1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngSampleThd2_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngSampleThd2_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngSampleCntForHwTqLrngRst_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngSampleCntForHwTqLrngRst_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnStg2WinSize_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnStg2WinSize_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngTqInpDetnStg1WinSize_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngTqInpDetnStg1WinSize_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngFctEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngFctEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwAgLrngEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwAgLrngEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngHwTqLrngEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngHwTqLrngEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SnsrOffsLrngYawLrngEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->SnsrOffsLrngYawLrngEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngDrvgDstPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnEnaTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnHwTqPreProc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnSinGenrAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1FilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1FilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2CenFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2CenFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2DwnFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2DwnFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2UpFilSt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg2UpFilSt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawLrngElpdLrngTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqLoThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqUpThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwAgMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwTqMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwTqOffsRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngSampleCntTot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngSampleImb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwVelFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngSysTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpDetnHwTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpDetnStg1Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngBiasEstimnRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawRateFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawRateFildCorrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngEnaTmrRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngMeasTmrRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnPreProcEnaLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1Idx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngTqInpDetnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqLrngTqInpPrsnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_VehYawRateLrngStRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_VehYawRateOffsFrsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngCdnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngTiVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngEstimnVldt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngMeasEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngTqInpPrsnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngTqInpPrsntVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpPrsntRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngCdnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_72, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnStg1Buf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngSysTqFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgLrngSysTqFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgMeasFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwAgMeasFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqMeasFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwTqMeasFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_HwVelCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SnsrLrndOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_SnsrOffsLrnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_SysTqCdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_TqInpDetnHwTqFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawACdngFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawCdngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawCdngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawLrngFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SnsrOffsLrng_YawLrngFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwAgLrngDrvgDstPrev() \
  (&Rte_SnsrOffsLrng_HwAgLrngDrvgDstPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnEnaTi() \
  (&Rte_SnsrOffsLrng_TqInpDetnEnaTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnHwTqPreProc() \
  (&Rte_SnsrOffsLrng_TqInpDetnHwTqPreProc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnSinGenrAg() \
  (&Rte_SnsrOffsLrng_TqInpDetnSinGenrAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg1FilSt1() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg1FilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg1FilSt2() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg1FilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg2CenFilSt1() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg2CenFilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg2CenFilSt2() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg2CenFilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg2DwnFilSt1() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg2DwnFilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg2DwnFilSt2() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg2DwnFilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg2UpFilSt1() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg2UpFilSt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg2UpFilSt2() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg2UpFilSt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_YawLrngElpdLrngTi() \
  (&Rte_SnsrOffsLrng_YawLrngElpdLrngTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_YawRatePrev() \
  (&Rte_SnsrOffsLrng_YawRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgFild() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqLoThd() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqLoThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqUpThd() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqUpThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngHwAgMeas() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwAgMeas) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqMeas() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwTqMeas) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngHwTqOffsRaw() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngHwTqOffsRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngSampleCntTot() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngSampleCntTot) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngSampleImb() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngSampleImb) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwVelFild() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwVelFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngSysTqFild() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngSysTqFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngTqInpDetnHwTqFild() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpDetnHwTqFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngTqInpDetnStg1Outp() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpDetnStg1Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngYawA() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngYawA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngYawLrngBiasEstimnRaw() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngBiasEstimnRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngYawRateFild() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngYawRateFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngYawRateFildCorrd() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngYawRateFildCorrd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLrngEnaTmrRef() \
  (&Rte_SnsrOffsLrng_HwTqLrngEnaTmrRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLrngMeasTmrRef() \
  (&Rte_SnsrOffsLrng_HwTqLrngMeasTmrRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnPreProcEnaLoop() \
  (&Rte_SnsrOffsLrng_TqInpDetnPreProcEnaLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnStg1Idx() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg1Idx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLrngStRst() \
  (&Rte_SnsrOffsLrng_HwAgLrngStRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLrngStRst() \
  (&Rte_SnsrOffsLrng_HwTqLrngStRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLrngTqInpDetnEnaPrev() \
  (&Rte_SnsrOffsLrng_HwTqLrngTqInpDetnEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLrngTqInpPrsnt() \
  (&Rte_SnsrOffsLrng_HwTqLrngTqInpPrsnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VehYawRateLrngStRst() \
  (&Rte_SnsrOffsLrng_VehYawRateLrngStRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VehYawRateOffsFrsh() \
  (&Rte_SnsrOffsLrng_VehYawRateOffsFrsh) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgLrngCdnVld() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngCdnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgLrngEna() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgLrngRst() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgLrngSysTqVldt() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngSysTqVldt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwAgLrngTiVldt() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwAgLrngTiVldt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngEna() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngEstimnVldt() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngEstimnVldt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngMeasEna() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngMeasEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsnt() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngTqInpPrsnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngHwTqLrngTqInpPrsntVld() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngHwTqLrngTqInpPrsntVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngTqInpPrsntRaw() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngTqInpPrsntRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngYawLrngCdnVld() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngCdnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dSnsrOffsLrngYawLrngEna() \
  (&Rte_SnsrOffsLrng_dSnsrOffsLrngYawLrngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_TqInpDetnStg1Buf() (&((*RtePim_TqInpDetnStg1Buf())[0]))
#  else
#   define Rte_Pim_TqInpDetnStg1Buf() RtePim_TqInpDetnStg1Buf()
#  endif
#  define RtePim_TqInpDetnStg1Buf() \
  (&Rte_SnsrOffsLrng_TqInpDetnStg1Buf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgCdngFil() \
  (&Rte_SnsrOffsLrng_HwAgCdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLrngFil1() \
  (&Rte_SnsrOffsLrng_HwAgLrngFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLrngFil2() \
  (&Rte_SnsrOffsLrng_HwAgLrngFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLrngSysTqFil1() \
  (&Rte_SnsrOffsLrng_HwAgLrngSysTqFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLrngSysTqFil2() \
  (&Rte_SnsrOffsLrng_HwAgLrngSysTqFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgMeasFil1() \
  (&Rte_SnsrOffsLrng_HwAgMeasFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgMeasFil2() \
  (&Rte_SnsrOffsLrng_HwAgMeasFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqMeasFil1() \
  (&Rte_SnsrOffsLrng_HwTqMeasFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqMeasFil2() \
  (&Rte_SnsrOffsLrng_HwTqMeasFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwVelCdngFil() \
  (&Rte_SnsrOffsLrng_HwVelCdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SnsrOffsLrnd() \
  (&Rte_SnsrOffsLrng_SnsrOffsLrnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysTqCdngFil() \
  (&Rte_SnsrOffsLrng_SysTqCdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqInpDetnHwTqFil() \
  (&Rte_SnsrOffsLrng_TqInpDetnHwTqFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_YawACdngFil() \
  (&Rte_SnsrOffsLrng_YawACdngFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_YawCdngFil1() \
  (&Rte_SnsrOffsLrng_YawCdngFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_YawCdngFil2() \
  (&Rte_SnsrOffsLrng_YawCdngFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_YawLrngFil1() \
  (&Rte_SnsrOffsLrng_YawLrngFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_YawLrngFil2() \
  (&Rte_SnsrOffsLrng_YawLrngFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define SnsrOffsLrng_START_SEC_CODE
# include "SnsrOffsLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GetHwAgOffs_Oper GetHwAgOffs_Oper
#  define RTE_RUNNABLE_GetHwTqOffs_Oper GetHwTqOffs_Oper
#  define RTE_RUNNABLE_GetYawRateOffs_Oper GetYawRateOffs_Oper
#  define RTE_RUNNABLE_RstHwTq_Oper RstHwTq_Oper
#  define RTE_RUNNABLE_RstYawAndAg_Oper RstYawAndAg_Oper
#  define RTE_RUNNABLE_SetHwAgOffs_Oper SetHwAgOffs_Oper
#  define RTE_RUNNABLE_SetHwTqOffs_Oper SetHwTqOffs_Oper
#  define RTE_RUNNABLE_SetYawRateOffs_Oper SetYawRateOffs_Oper
#  define RTE_RUNNABLE_SnsrOffsLrngInit1 SnsrOffsLrngInit1
#  define RTE_RUNNABLE_SnsrOffsLrngPer1 SnsrOffsLrngPer1
#  define RTE_RUNNABLE_SnsrOffsLrngPer2 SnsrOffsLrngPer2
# endif

FUNC(void, SnsrOffsLrng_CODE) GetHwAgOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) GetHwTqOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) GetYawRateOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) RstHwTq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) RstYawAndAg_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, SnsrOffsLrng_CODE) SnsrOffsLrngPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define SnsrOffsLrng_STOP_SEC_CODE
# include "SnsrOffsLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_SNSROFFSLRNG_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
