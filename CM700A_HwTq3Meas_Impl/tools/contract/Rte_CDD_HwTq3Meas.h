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
 *          File:  Rte_CDD_HwTq3Meas.h
 *     SW-C Type:  CDD_HwTq3Meas
 *  Generated at:  Wed Mar 30 11:57:58 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_HwTq3Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_HWTQ3MEAS_H
# define _RTE_CDD_HWTQ3MEAS_H

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

# include "Rte_CDD_HwTq3Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_HwTq3Meas
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GearIdn2Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GearIdn2Data; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq3ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq3IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq3MeasPrevHwTq3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq3MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq3MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwTqOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq3Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_HwTq3Meas, RTE_CONST, RTE_CONST) Rte_Inst_CDD_HwTq3Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_HwTq3Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_GearIdn2_Val (0U)
# define Rte_InitValue_GearIdn2Vld_Logl (FALSE)
# define Rte_InitValue_HwTq3_Val (0.0F)
# define Rte_InitValue_HwTq3Polarity_Val (1)
# define Rte_InitValue_HwTq3Qlfr_Val (0U)
# define Rte_InitValue_HwTq3RollgCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_HwTq3Meas_HwTq3Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq3Meas_GearIdn2_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq3Meas_GearIdn2Vld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq3Meas_HwTq3_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq3Meas_HwTq3Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq3Meas_HwTq3RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq3Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq3Meas_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq3Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq3Meas_HwTq3Offs_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq3Meas_IoHwAb_SetFctPrphlHwTq3_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq3Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq3Meas_HwTq3MeasHwTq3PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq3Meas_HwTq3MeasHwTq3PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(HwTqOffsRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_HwTq3Meas_HwTq3OffsDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq3Polarity_Val Rte_Read_CDD_HwTq3Meas_HwTq3Polarity_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_GearIdn2_Val Rte_Write_CDD_HwTq3Meas_GearIdn2_Val
# define Rte_Write_GearIdn2Vld_Logl Rte_Write_CDD_HwTq3Meas_GearIdn2Vld_Logl
# define Rte_Write_HwTq3_Val Rte_Write_CDD_HwTq3Meas_HwTq3_Val
# define Rte_Write_HwTq3Qlfr_Val Rte_Write_CDD_HwTq3Meas_HwTq3Qlfr_Val
# define Rte_Write_HwTq3RollgCntr_Val Rte_Write_CDD_HwTq3Meas_HwTq3RollgCntr_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CDD_HwTq3Meas_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_CDD_HwTq3Meas_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_CDD_HwTq3Meas_GetTiSpan1MicroSec32bit_Oper
# define Rte_Call_HwTq3Offs_SetRamBlockStatus Rte_Call_CDD_HwTq3Meas_HwTq3Offs_SetRamBlockStatus
# define Rte_Call_IoHwAb_SetFctPrphlHwTq3_Oper Rte_Call_CDD_HwTq3Meas_IoHwAb_SetFctPrphlHwTq3_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_HwTq3Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_HwTq3OffsDft Rte_CData_CDD_HwTq3Meas_HwTq3OffsDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTq3MeasHwTq3PrtclFltFailStep_Val Rte_Prm_CDD_HwTq3Meas_HwTq3MeasHwTq3PrtclFltFailStep_Val

# define Rte_Prm_HwTq3MeasHwTq3PrtclFltPassStep_Val Rte_Prm_CDD_HwTq3Meas_HwTq3MeasHwTq3PrtclFltPassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTq3MeasPrevHwTq3() (Rte_Inst_CDD_HwTq3Meas->Pim_HwTq3MeasPrevHwTq3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq3MsgMissRxCnt() (Rte_Inst_CDD_HwTq3Meas->Pim_HwTq3MsgMissRxCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GearIdn2Data() (Rte_Inst_CDD_HwTq3Meas->Pim_GearIdn2Data) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq3ComStsErrCntr() (Rte_Inst_CDD_HwTq3Meas->Pim_HwTq3ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq3IntSnsrErrCntr() (Rte_Inst_CDD_HwTq3Meas->Pim_HwTq3IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq3MeasPrevRollgCntr() (Rte_Inst_CDD_HwTq3Meas->Pim_HwTq3MeasPrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GearIdn2Avl() (Rte_Inst_CDD_HwTq3Meas->Pim_GearIdn2Avl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq3Offs() (Rte_Inst_CDD_HwTq3Meas->Pim_HwTq3Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTq3MeasPrevHwTq3(void)
 *   uint32 *Rte_Pim_HwTq3MsgMissRxCnt(void)
 *   uint8 *Rte_Pim_GearIdn2Data(void)
 *   uint8 *Rte_Pim_HwTq3ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwTq3IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwTq3MeasPrevRollgCntr(void)
 *   boolean *Rte_Pim_GearIdn2Avl(void)
 *   HwTqOffsRec1 *Rte_Pim_HwTq3Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   HwTqOffsRec1 *Rte_CData_HwTq3OffsDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwTq3MeasHwTq3PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwTq3MeasHwTq3PrtclFltPassStep_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_HwTq3Meas_START_SEC_CODE
# include "CDD_HwTq3Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasHwTq3AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq3MeasHwTq3AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq3Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq3MeasHwTq3AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasHwTq3AutTrim_Oper HwTq3MeasHwTq3AutTrim_Oper
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasHwTq3AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasHwTq3ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq3MeasHwTq3ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq3Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq3MeasHwTq3ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasHwTq3ClrTrim_Oper HwTq3MeasHwTq3ClrTrim_Oper
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasHwTq3ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasHwTq3ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq3MeasHwTq3ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq3MeasHwTq3ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasHwTq3ReadTrim_Oper HwTq3MeasHwTq3ReadTrim_Oper
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasHwTq3ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasHwTq3TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq3MeasHwTq3TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq3MeasHwTq3TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasHwTq3TrimPrfmdSts_Oper HwTq3MeasHwTq3TrimPrfmdSts_Oper
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasHwTq3TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasHwTq3WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq3MeasHwTq3WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq3Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq3MeasHwTq3WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasHwTq3WrTrim_Oper HwTq3MeasHwTq3WrTrim_Oper
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasHwTq3WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwTq3_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasInit1 HwTq3MeasInit1
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasPer1
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
 *   Std_ReturnType Rte_Read_HwTq3Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_GearIdn2_Val(uint8 data)
 *   Std_ReturnType Rte_Write_GearIdn2Vld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwTq3_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq3Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq3RollgCntr_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasPer1 HwTq3MeasPer1
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
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
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasPer2 HwTq3MeasPer2
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq3MeasTrigStrt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq3MeasTrigStrt>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq3MeasTrigStrt_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq3MeasTrigStrt_Oper HwTq3MeasTrigStrt_Oper
FUNC(void, CDD_HwTq3Meas_CODE) HwTq3MeasTrigStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_HwTq3Meas_STOP_SEC_CODE
# include "CDD_HwTq3Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1459347945
#    error "The magic number of the generated file <C:/Component/CM700A_HwTq3Meas_Impl/tools/contract/Rte_CDD_HwTq3Meas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1459347945
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_HWTQ3MEAS_H */
