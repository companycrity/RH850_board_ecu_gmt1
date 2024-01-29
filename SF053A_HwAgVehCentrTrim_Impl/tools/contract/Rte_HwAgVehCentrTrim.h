/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_HwAgVehCentrTrim.h
 *     SW-C Type:  HwAgVehCentrTrim
 *  Generated at:  Tue Dec 13 11:16:09 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgVehCentrTrim> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGVEHCENTRTRIM_H
# define _RTE_HWAGVEHCENTRTRIM_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_HwAgVehCentrTrim_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAgVehCentrTrim
{
  /* PIM Handles section */
  P2VAR(HwAgSnsrTrimRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgTrimData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAgVehCentrTrim, RTE_CONST, RTE_CONST) Rte_Inst_HwAgVehCentrTrim; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAgVehCentrTrim, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EngRunActv_Logl (FALSE)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgCcwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgCwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_HwAgTrimPrfmd_Logl (FALSE)
# define Rte_InitValue_HwAgVehTrimOffs_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgVehCentrTrim_EngRunActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgVehCentrTrim_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgVehCentrTrim_HwAgCcwDetd_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgVehCentrTrim_HwAgCwDetd_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgVehCentrTrim_HwAgEotCcw_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgVehCentrTrim_HwAgEotCw_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgVehCentrTrim_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgVehCentrTrim_HwAgVehTrimOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgVehCentrTrim_HwAgTrimData_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgVehCentrTrim_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgVehCentrTrim_HwAgVehCentrTrimHwAgLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgVehCentrTrim_HwAgVehCentrTrimVehSpdMaxThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(HwAgSnsrTrimRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_HwAgVehCentrTrim_HwAgTrimDataDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EngRunActv_Logl Rte_Read_HwAgVehCentrTrim_EngRunActv_Logl
# define Rte_Read_HwAg_Val Rte_Read_HwAgVehCentrTrim_HwAg_Val
# define Rte_Read_HwAgCcwDetd_Logl Rte_Read_HwAgVehCentrTrim_HwAgCcwDetd_Logl
# define Rte_Read_HwAgCwDetd_Logl Rte_Read_HwAgVehCentrTrim_HwAgCwDetd_Logl
# define Rte_Read_HwAgEotCcw_Val Rte_Read_HwAgVehCentrTrim_HwAgEotCcw_Val
# define Rte_Read_HwAgEotCw_Val Rte_Read_HwAgVehCentrTrim_HwAgEotCw_Val
# define Rte_Read_VehSpd_Val Rte_Read_HwAgVehCentrTrim_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgTrimPrfmd_Logl Rte_Write_HwAgVehCentrTrim_HwAgTrimPrfmd_Logl
# define Rte_Write_HwAgVehTrimOffs_Val Rte_Write_HwAgVehCentrTrim_HwAgVehTrimOffs_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_HwAgTrimData_SetRamBlockStatus Rte_Call_HwAgVehCentrTrim_HwAgTrimData_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwAgVehCentrTrim_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_HwAgTrimDataDft Rte_CData_HwAgVehCentrTrim_HwAgTrimDataDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAgVehCentrTrimHwAgLim_Val Rte_Prm_HwAgVehCentrTrim_HwAgVehCentrTrimHwAgLim_Val

# define Rte_Prm_HwAgVehCentrTrimVehSpdMaxThd_Val Rte_Prm_HwAgVehCentrTrim_HwAgVehCentrTrimVehSpdMaxThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAgTrimData() (Rte_Inst_HwAgVehCentrTrim->Pim_HwAgTrimData) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   HwAgSnsrTrimRec1 *Rte_Pim_HwAgTrimData(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   HwAgSnsrTrimRec1 *Rte_CData_HwAgTrimDataDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgVehCentrTrimHwAgLim_Val(void)
 *   float32 Rte_Prm_HwAgVehCentrTrimVehSpdMaxThd_Val(void)
 *
 *********************************************************************************************************************/


# define HwAgVehCentrTrim_START_SEC_CODE
# include "HwAgVehCentrTrim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrHwAgTrimVal_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrHwAgTrimVal>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAgTrimData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrHwAgTrimVal_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ClrHwAgTrimVal_Oper ClrHwAgTrimVal_Oper
FUNC(void, HwAgVehCentrTrim_CODE) ClrHwAgTrimVal_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetHwAgTrimVal_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetHwAgTrimVal>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetHwAgTrimVal_Oper(float32 *HwAgTrimVal_Arg, boolean *HwAgTrimPrfmd_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetHwAgTrimVal_Oper GetHwAgTrimVal_Oper
FUNC(void, HwAgVehCentrTrim_CODE) GetHwAgTrimVal_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) HwAgTrimVal_Arg, P2VAR(boolean, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgVehCentrTrimInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgVehCentrTrimInit1 HwAgVehCentrTrimInit1
FUNC(void, HwAgVehCentrTrim_CODE) HwAgVehCentrTrimInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgVehCentrTrimPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgTrimPrfmd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgVehTrimOffs_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAgTrimData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgVehCentrTrimPer1 HwAgVehCentrTrimPer1
FUNC(void, HwAgVehCentrTrim_CODE) HwAgVehCentrTrimPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetHwAgTrimVal_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetHwAgTrimVal>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAgTrimData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetHwAgTrimVal_Oper(float32 HwAgTrimVal_Arg, boolean HwAgTrimPrfmd_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetHwAgTrimVal_Oper SetHwAgTrimVal_Oper
FUNC(void, HwAgVehCentrTrim_CODE) SetHwAgTrimVal_Oper(float32 HwAgTrimVal_Arg, boolean HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: UpdHwAgTrimVal_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <UpdHwAgTrimVal>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EngRunActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgCcwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgCwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgTrimPrfmd_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAgTrimData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void UpdHwAgTrimVal_Oper(uint8 *UpdHwAgTrimValSrvResp_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_UpdHwAgTrimVal_Oper UpdHwAgTrimVal_Oper
FUNC(void, HwAgVehCentrTrim_CODE) UpdHwAgTrimVal_Oper(P2VAR(uint8, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) UpdHwAgTrimValSrvResp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgVehCentrTrim_STOP_SEC_CODE
# include "HwAgVehCentrTrim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481639073
#    error "The magic number of the generated file <C:/component/SF053A_HwAgVehCentrTrim_Impl/tools/contract/Rte_HwAgVehCentrTrim.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481639073
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAGVEHCENTRTRIM_H */
