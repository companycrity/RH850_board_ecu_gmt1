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
 *          File:  Rte_HwAgVehCentrTrim.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgVehCentrTrim>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGVEHCENTRTRIM_H
# define _RTE_HWAGVEHCENTRTRIM_H

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

# include "Rte_HwAgVehCentrTrim_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgVehCentrTrim_HwAgVehTrimOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgArbn_HwAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCcwDetd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCwDetd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EngRunActv_Logl (FALSE)
#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgCcwDetd_Logl (FALSE)
#  define Rte_InitValue_HwAgCwDetd_Logl (FALSE)
#  define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
#  define Rte_InitValue_HwAgEotCw_Val (360.0F)
#  define Rte_InitValue_HwAgTrimPrfmd_Logl (FALSE)
#  define Rte_InitValue_HwAgVehTrimOffs_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EngRunActv_Logl Rte_Read_HwAgVehCentrTrim_EngRunActv_Logl
#  define Rte_Read_HwAgVehCentrTrim_EngRunActv_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAg_Val Rte_Read_HwAgVehCentrTrim_HwAg_Val
#  define Rte_Read_HwAgVehCentrTrim_HwAg_Val(data) (*(data) = Rte_HwAgArbn_HwAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgCcwDetd_Logl Rte_Read_HwAgVehCentrTrim_HwAgCcwDetd_Logl
#  define Rte_Read_HwAgVehCentrTrim_HwAgCcwDetd_Logl(data) (*(data) = Rte_EotLrng_HwAgCcwDetd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgCwDetd_Logl Rte_Read_HwAgVehCentrTrim_HwAgCwDetd_Logl
#  define Rte_Read_HwAgVehCentrTrim_HwAgCwDetd_Logl(data) (*(data) = Rte_EotLrng_HwAgCwDetd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCcw_Val Rte_Read_HwAgVehCentrTrim_HwAgEotCcw_Val
#  define Rte_Read_HwAgVehCentrTrim_HwAgEotCcw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCcw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCw_Val Rte_Read_HwAgVehCentrTrim_HwAgEotCw_Val
#  define Rte_Read_HwAgVehCentrTrim_HwAgEotCw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_HwAgVehCentrTrim_VehSpd_Val
#  define Rte_Read_HwAgVehCentrTrim_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwAgTrimPrfmd_Logl Rte_Write_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl
#  define Rte_Write_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl(data) (Rte_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAgVehTrimOffs_Val Rte_Write_HwAgVehCentrTrim_HwAgVehTrimOffs_Val
#  define Rte_Write_HwAgVehCentrTrim_HwAgVehTrimOffs_Val(data) (Rte_HwAgVehCentrTrim_HwAgVehTrimOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAgTrimData_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)58, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_HwAgTrimDataDft() (&((P2CONST(Rte_Calprm_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP])->HwAgTrimDataDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwAgVehCentrTrimHwAgLim_Val() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgVehCentrTrimHwAgLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgVehCentrTrimVehSpdMaxThd_Val() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgVehCentrTrimVehSpdMaxThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(HwAgSnsrTrimRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgVehCentrTrim_HwAgTrimData; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwAgTrimData() \
  (&Rte_HwAgVehCentrTrim_HwAgTrimData) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HwAgVehCentrTrim_START_SEC_CODE
# include "HwAgVehCentrTrim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ClrHwAgTrimVal_Oper ClrHwAgTrimVal_Oper
#  define RTE_RUNNABLE_GetHwAgTrimVal_Oper GetHwAgTrimVal_Oper
#  define RTE_RUNNABLE_HwAgVehCentrTrimInit1 HwAgVehCentrTrimInit1
#  define RTE_RUNNABLE_HwAgVehCentrTrimPer1 HwAgVehCentrTrimPer1
#  define RTE_RUNNABLE_SetHwAgTrimVal_Oper SetHwAgTrimVal_Oper
#  define RTE_RUNNABLE_UpdHwAgTrimVal_Oper UpdHwAgTrimVal_Oper
# endif

FUNC(void, HwAgVehCentrTrim_CODE) ClrHwAgTrimVal_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAgVehCentrTrim_CODE) GetHwAgTrimVal_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) HwAgTrimVal_Arg, P2VAR(boolean, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAgVehCentrTrim_CODE) HwAgVehCentrTrimInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAgVehCentrTrim_CODE) HwAgVehCentrTrimPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAgVehCentrTrim_CODE) SetHwAgTrimVal_Oper(float32 HwAgTrimVal_Arg, boolean HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAgVehCentrTrim_CODE) UpdHwAgTrimVal_Oper(P2VAR(uint8, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) UpdHwAgTrimValSrvResp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgVehCentrTrim_STOP_SEC_CODE
# include "HwAgVehCentrTrim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWAGVEHCENTRTRIM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
