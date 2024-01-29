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
 *          File:  Rte_DiagcMgrProxyAppl5.h
 *     SW-C Type:  DiagcMgrProxyAppl5
 *  Generated at:  Tue Jun 28 11:40:33 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DiagcMgrProxyAppl5> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DIAGCMGRPROXYAPPL5_H
# define _RTE_DIAGCMGRPROXYAPPL5_H

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

# include "Rte_DiagcMgrProxyAppl5_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DiagcMgrProxyAppl5
{
  /* PIM Handles section */
  P2VAR(DiagcDataRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiagcData5; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl5, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiagcMgrNtcInfo5Ary; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_s16_DiagcMgrProxyAppl5, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiagcMgrNtcInfo5DebCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevClrNtcFlg5; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(DiagcDataRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ProxySetNtcData5; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DiagcMgrProxyAppl5, RTE_CONST, RTE_CONST) Rte_Inst_DiagcMgrProxyAppl5; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DiagcMgrProxyAppl5, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgrProxyAppl5_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(Ary1D_NtcInfoRec4_DiagcMgr, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) ProxySetNtcData_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcInfoDebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DiagcMgrProxyAppl5_DiagcMgrFltResp_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u32_512, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DiagcMgrProxyAppl5_DiagcMgrFltResp_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

FUNC(void, RTE_CODE) Rte_Enter_DiagcMgrProxyAppl5_DiagcMgrProxyAppl5(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_DiagcMgrProxyAppl5_DiagcMgrProxyAppl5(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_DiagcMgrProxyAppl5_ClrDiagcFlgProxy_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DiagcMgrIninCore_Oper Rte_Call_DiagcMgrProxyAppl5_DiagcMgrIninCore_Oper
# define Rte_Call_GetNtcActvCore_Oper Rte_Call_DiagcMgrProxyAppl5_GetNtcActvCore_Oper
# define Rte_Call_GetNtcQlfrStsCore_Oper Rte_Call_DiagcMgrProxyAppl5_GetNtcQlfrStsCore_Oper
# define Rte_Call_GetNtcStsCore_Oper Rte_Call_DiagcMgrProxyAppl5_GetNtcStsCore_Oper
# define Rte_Call_SetNtcStsCore_Oper Rte_Call_DiagcMgrProxyAppl5_SetNtcStsCore_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_DiagcMgrProxyAppl5 Rte_Enter_DiagcMgrProxyAppl5_DiagcMgrProxyAppl5
# define Rte_Exit_DiagcMgrProxyAppl5 Rte_Exit_DiagcMgrProxyAppl5_DiagcMgrProxyAppl5


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_DiagcMgrFltResp_Ary1D Rte_Prm_DiagcMgrProxyAppl5_DiagcMgrFltResp_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevClrNtcFlg5() (Rte_Inst_DiagcMgrProxyAppl5->Pim_PrevClrNtcFlg5) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DiagcMgrNtcInfo5Ary() (*Rte_Inst_DiagcMgrProxyAppl5->Pim_DiagcMgrNtcInfo5Ary) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DiagcMgrNtcInfo5Ary() (Rte_Inst_DiagcMgrProxyAppl5->Pim_DiagcMgrNtcInfo5Ary) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DiagcMgrNtcInfo5DebCntrAry() (*Rte_Inst_DiagcMgrProxyAppl5->Pim_DiagcMgrNtcInfo5DebCntrAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DiagcMgrNtcInfo5DebCntrAry() (Rte_Inst_DiagcMgrProxyAppl5->Pim_DiagcMgrNtcInfo5DebCntrAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Rte_Pim_DiagcData5() (Rte_Inst_DiagcMgrProxyAppl5->Pim_DiagcData5) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ProxySetNtcData5() (Rte_Inst_DiagcMgrProxyAppl5->Pim_ProxySetNtcData5) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PrevClrNtcFlg5(void)
 *   NtcInfoRec4 *Rte_Pim_DiagcMgrNtcInfo5Ary(void)
 *   sint16 *Rte_Pim_DiagcMgrNtcInfo5DebCntrAry(void)
 *   DiagcDataRec1 *Rte_Pim_DiagcData5(void)
 *   DiagcDataRec1 *Rte_Pim_ProxySetNtcData5(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 *Rte_Prm_DiagcMgrFltResp_Ary1D(void)
 *
 *********************************************************************************************************************/


# define DiagcMgrProxyAppl5_START_SEC_CODE
# include "DiagcMgrProxyAppl5_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrProxyAppl5Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DiagcMgrProxyAppl5Init1 DiagcMgrProxyAppl5Init1
FUNC(void, DiagcMgrProxyAppl5_CODE) DiagcMgrProxyAppl5Init1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrProxyAppl5Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_DiagcMgrProxyAppl5(void)
 *   void Rte_Exit_DiagcMgrProxyAppl5(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DiagcMgrProxyAppl5Per1 DiagcMgrProxyAppl5Per1
FUNC(void, DiagcMgrProxyAppl5_CODE) DiagcMgrProxyAppl5Per1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDiagcDataAppl5_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetDiagcDataAppl5>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetDiagcDataAppl5_Oper(DiagcDataRec1 *DiagcData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetDiagcDataAppl5_Oper GetDiagcDataAppl5_Oper
FUNC(void, DiagcMgrProxyAppl5_CODE) GetDiagcDataAppl5_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcActv5_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcActv5>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetNtcActv5_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetNtcActv_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcActv5_Oper GetNtcActv5_Oper
FUNC(Std_ReturnType, DiagcMgrProxyAppl5_CODE) GetNtcActv5_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcDebCntrAppl5_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcDebCntrAppl5>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcDebCntrAppl5_Oper GetNtcDebCntrAppl5_Oper
FUNC(void, DiagcMgrProxyAppl5_CODE) GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcInfoAppl5_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcInfoAppl5>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcInfoAppl5_Oper GetNtcInfoAppl5_Oper
FUNC(void, DiagcMgrProxyAppl5_CODE) GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcQlfrSts5_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcQlfrSts5>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetNtcQlfrSts5_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcQlfrSts5_Oper GetNtcQlfrSts5_Oper
FUNC(Std_ReturnType, DiagcMgrProxyAppl5_CODE) GetNtcQlfrSts5_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcSts5_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcSts5>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetNtcSts5_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcSts5_Oper GetNtcSts5_Oper
FUNC(Std_ReturnType, DiagcMgrProxyAppl5_CODE) GetNtcSts5_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL5_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetNtcSts5_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetNtcSts5>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsCore_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetNtcSts5_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetNtcSts5_Oper SetNtcSts5_Oper
FUNC(Std_ReturnType, DiagcMgrProxyAppl5_CODE) SetNtcSts5_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DiagcMgrProxyAppl5_STOP_SEC_CODE
# include "DiagcMgrProxyAppl5_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcActv_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetNtcSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcStsCore_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467123168
#    error "The magic number of the generated file <C:/Component/ES101A_DiagcMgr_Impl/tools/contract/generate/RteGen/DiagcMgrProxyAppl5/Rte_DiagcMgrProxyAppl5.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467123168
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_DIAGCMGRPROXYAPPL5_H */
