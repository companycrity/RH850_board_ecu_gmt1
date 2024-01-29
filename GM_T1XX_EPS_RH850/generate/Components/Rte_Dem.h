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
 *          File:  Rte_Dem.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Dem>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DEM_H
# define _RTE_DEM_H

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

# include "Rte_Dem_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_BattVltgEcu_ReadData CSDataServices_BattVltgEcu_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EcuIntT_ReadData CSDataServices_EcuIntT_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EngSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EngSpd_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EngSpd_ReadData CSDataServices_EngSpd_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpdMotOvldProtnCntr_ReadData CSDataServices_EpdMotOvldProtnCntr_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpsAgOvrlSts_ReadData CSDataServices_EpsAgOvrlSts_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpsApaAgOvrlReq_ReadData CSDataServices_EpsApaAgOvrlReq_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpsMotCurr_ReadData CSDataServices_EpsMotCurr_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpsMotCurrFb_ReadData CSDataServices_EpsMotCurrFb_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpsStopStrtSts_ReadData CSDataServices_EpsStopStrtSts_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpsTqOvrlReq_ReadData CSDataServices_EpsTqOvrlReq_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_EpsTqOvrlSts_ReadData CSDataServices_EpsTqOvrlSts_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_IgnCycCntr_ReadData CSDataServices_IgnCycCntr_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_SplrIntDtcInfo_ReadData CSDataServices_SplrIntDtcInfo_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_SteerInpTq_ReadData CSDataServices_SteerInpTq_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_SteerOutpTq_ReadData CSDataServices_SteerOutpTq_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_SteerWhlAg_ReadData CSDataServices_SteerWhlAg_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_SysPwrMod_ReadData CSDataServices_SysPwrMod_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_TiIgnOn_ReadData CSDataServices_TiIgnOn_ReadData
#  define RTE_START_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_VehSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAGC_APPL_CODE) CSDataServices_VehSpd_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_VehSpd_ReadData CSDataServices_VehSpd_ReadData
#  define RTE_START_SEC_GMMSG778BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_GMMSG778BUSHISPD_APPL_CODE) CallBackDtcStsChgd(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_GMMSG778BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBStatusDTC_1_DTCStatusChanged CallBackDtcStsChgd


# endif /* !defined(RTE_CORE) */


# define Dem_START_SEC_CODE
# include "Dem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ClearDTC Dem_ClearDTC
#  define RTE_RUNNABLE_DcmClearDTC Dem_DcmClearDTC
#  define RTE_RUNNABLE_DcmEnableDTCSetting Dem_DcmEnableDTCSetting
#  define RTE_RUNNABLE_DcmGetExtendedDataRecordByDTC Dem_DcmGetExtendedDataRecordByDTC
#  define RTE_RUNNABLE_DcmGetFreezeFrameDataByDTC Dem_DcmGetFreezeFrameDataByDTC
#  define RTE_RUNNABLE_DcmGetNextFilteredDTCAndFDC Dem_DcmGetNextFilteredDTCAndFDC
#  define RTE_RUNNABLE_Dem_MainFunction Dem_MainFunction
#  define RTE_RUNNABLE_GetDTCOfEvent Dem_GetDTCOfEvent
#  define RTE_RUNNABLE_GetDTCStatusAvailabilityMask Dem_DcmGetDTCStatusAvailabilityMask
#  define RTE_RUNNABLE_GetDebouncingOfEvent Dem_GetDebouncingOfEvent
#  define RTE_RUNNABLE_GetEventEnableCondition Dem_GetEventEnableCondition
#  define RTE_RUNNABLE_GetEventExtendedDataRecord Dem_GetEventExtendedDataRecord
#  define RTE_RUNNABLE_GetEventFailed Dem_GetEventFailed
#  define RTE_RUNNABLE_GetEventFreezeFrameData Dem_GetEventFreezeFrameData
#  define RTE_RUNNABLE_GetEventMemoryOverflow Dem_GetEventMemoryOverflow
#  define RTE_RUNNABLE_GetEventStatus Dem_GetEventStatus
#  define RTE_RUNNABLE_GetEventTested Dem_GetEventTested
#  define RTE_RUNNABLE_GetFaultDetectionCounter Dem_GetFaultDetectionCounter
#  define RTE_RUNNABLE_GetIndicatorStatus Dem_GetIndicatorStatus
#  define RTE_RUNNABLE_GetNumberOfEventMemoryEntries Dem_GetNumberOfEventMemoryEntries
#  define RTE_RUNNABLE_PostRunRequested Dem_PostRunRequested
#  define RTE_RUNNABLE_ResetEventDebounceStatus Dem_ResetEventDebounceStatus
#  define RTE_RUNNABLE_ResetEventStatus Dem_ResetEventStatus
#  define RTE_RUNNABLE_SetEnableCondition Dem_SetEnableCondition
#  define RTE_RUNNABLE_SetEventStatus Dem_SetEventStatus
#  define RTE_RUNNABLE_SetOperationCycleState Dem_SetOperationCycleState
# endif

FUNC(Std_ReturnType, Dem_CODE) Dem_ClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_DcmClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_DcmEnableDTCSetting(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetExtendedDataRecordByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetFreezeFrameDataByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetNextFilteredDTCAndFDC(P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTC, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCFaultDetectionCounter); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Dem_CODE) Dem_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetDTCOfEvent(Dem_EventIdType parg0, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetDTCStatusAvailabilityMask(P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCStatusMask); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetDebouncingOfEvent(Dem_EventIdType parg0, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEM_APPL_VAR) DebouncingState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventEnableCondition(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) ConditionFullfilled); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventExtendedDataRecord(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventExtendedDataRecord(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFailed(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventFailed); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFreezeFrameData(Dem_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFreezeFrameData(Dem_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventMemoryOverflow(Dem_DTCOriginType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) OverflowIndication); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventStatus(Dem_EventIdType parg0, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_DEM_APPL_VAR) EventStatusExtended); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventTested(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventTested); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetFaultDetectionCounter(Dem_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetIndicatorStatus(uint8 parg0, P2VAR(Dem_IndicatorStatusType, AUTOMATIC, RTE_DEM_APPL_VAR) IndicatorStatus); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_GetNumberOfEventMemoryEntries(Dem_DTCOriginType parg0, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) NumberOfEventMemoryEntries); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_PostRunRequested(P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) IsRequested); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_ResetEventDebounceStatus(Dem_EventIdType parg0, Dem_DebounceResetStatusType DebounceResetStatus); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_ResetEventStatus(Dem_EventIdType parg0); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_SetEnableCondition(uint8 parg0, boolean ConditionFulfilled); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_SetEventStatus(Dem_EventIdType parg0, Dem_EventStatusType EventStatus); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Dem_CODE) Dem_SetOperationCycleState(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */

# define Dem_STOP_SEC_CODE
# include "Dem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CSDataServices_BattVltgEcu_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EcuIntT_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EngSpd_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpdMotOvldProtnCntr_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsAgOvrlSts_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsApaAgOvrlReq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsMotCurr_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsMotCurrFb_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsStopStrtSts_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsTqOvrlReq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_EpsTqOvrlSts_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_IgnCycCntr_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SteerInpTq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SteerOutpTq_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SteerWhlAg_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_SysPwrMod_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_TiIgnOn_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_VehSpd_E_NOT_OK (1U)

#  define RTE_E_CallbackDTCStatusChange_E_NOT_OK (1U)

#  define RTE_E_CddIf_DEM_CLEAR_BUSY (5U)

#  define RTE_E_CddIf_DEM_CLEAR_FAILED (3U)

#  define RTE_E_CddIf_DEM_CLEAR_PENDING (4U)

#  define RTE_E_CddIf_DEM_CLEAR_WRONG_DTC (1U)

#  define RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_CLEAR_BUSY (5U)

#  define RTE_E_DcmIf_DEM_CLEAR_FAILED (3U)

#  define RTE_E_DcmIf_DEM_CLEAR_PENDING (4U)

#  define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTC (1U)

#  define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_CONTROL_DTC_SETTING_N_OK (1U)

#  define RTE_E_DcmIf_DEM_CONTROL_DTC_WRONG_DTCGROUP (2U)

#  define RTE_E_DcmIf_DEM_FILTERED_NO_MATCHING_DTC (1U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_PENDING (5U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_BUFFERSIZE (4U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_DTC (1U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_RECORDNUMBER (3U)

#  define RTE_E_DcmIf_DEM_RECORD_PENDING (5U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_BUFFERSIZE (4U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_DTC (1U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_NUMBER (3U)

#  define RTE_E_DemServices_E_NOT_OK (1U)

#  define RTE_E_DiagnosticInfo_DEM_E_NODATAAVAILABLE (48U)

#  define RTE_E_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (2U)

#  define RTE_E_DiagnosticInfo_DEM_E_NO_FDC_AVAILABLE (3U)

#  define RTE_E_DiagnosticInfo_DEM_E_WRONG_DIDNUMBER (50U)

#  define RTE_E_DiagnosticInfo_DEM_E_WRONG_RECORDNUMBER (49U)

#  define RTE_E_DiagnosticInfo_E_NOT_OK (1U)

#  define RTE_E_DiagnosticMonitor_DEM_E_NODATAAVAILABLE (48U)

#  define RTE_E_DiagnosticMonitor_DEM_E_NO_DTC_AVAILABLE (2U)

#  define RTE_E_DiagnosticMonitor_DEM_E_NO_FDC_AVAILABLE (3U)

#  define RTE_E_DiagnosticMonitor_DEM_E_WRONG_DIDNUMBER (50U)

#  define RTE_E_DiagnosticMonitor_DEM_E_WRONG_RECORDNUMBER (49U)

#  define RTE_E_DiagnosticMonitor_E_NOT_OK (1U)

#  define RTE_E_EnableCondition_E_NOT_OK (1U)

#  define RTE_E_EvMemOverflowIndication_E_NOT_OK (1U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_NODATAAVAILABLE (48U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (2U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_FDC_AVAILABLE (3U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_WRONG_DIDNUMBER (50U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_WRONG_RECORDNUMBER (49U)

#  define RTE_E_GeneralDiagnosticInfo_E_NOT_OK (1U)

#  define RTE_E_IndicatorStatus_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DEM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1330:  MISRA rule: 16.4
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
