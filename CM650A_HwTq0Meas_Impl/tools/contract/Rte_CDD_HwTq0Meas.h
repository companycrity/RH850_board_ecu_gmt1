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
 *          File:  Rte_CDD_HwTq0Meas.h
 *     SW-C Type:  CDD_HwTq0Meas
 *  Generated at:  Wed Mar 30 12:14:34 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_HwTq0Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_HWTQ0MEAS_H
# define _RTE_CDD_HWTQ0MEAS_H

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

# include "Rte_CDD_HwTq0Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_HwTq0Meas
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq0MeasPrevHwTq0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq0MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq0MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwTqOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq0Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrCcwEot0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrCwEot0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot0Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot0Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot0Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot0Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot0Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot0Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot0Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_HwTq0Meas, RTE_CONST, RTE_CONST) Rte_Inst_CDD_HwTq0Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_HwTq0Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq0_Val (0.0F)
# define Rte_InitValue_HwTq0Polarity_Val (1)
# define Rte_InitValue_HwTq0Qlfr_Val (0U)
# define Rte_InitValue_HwTq0RollgCntr_Val (0U)
# define Rte_InitValue_RackLimrCcwEotSig0_Val (0.0F)
# define Rte_InitValue_RackLimrCwEotSig0_Val (0.0F)
# define Rte_InitValue_RackLimrEotSig0Avl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_HwTq0Meas_HwTq0Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq0Meas_HwTq0_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq0Meas_HwTq0Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq0Meas_HwTq0RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq0Meas_RackLimrCcwEotSig0_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq0Meas_RackLimrCwEotSig0_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_HwTq0Offs_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_IoHwAb_SetFctPrphlHwTq0_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq0Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq0Meas_HwTq0MeasHwTq0PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq0Meas_HwTq0MeasHwTq0PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(HwTqOffsRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_HwTq0Meas_HwTq0OffsDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq0Polarity_Val Rte_Read_CDD_HwTq0Meas_HwTq0Polarity_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTq0_Val Rte_Write_CDD_HwTq0Meas_HwTq0_Val
# define Rte_Write_HwTq0Qlfr_Val Rte_Write_CDD_HwTq0Meas_HwTq0Qlfr_Val
# define Rte_Write_HwTq0RollgCntr_Val Rte_Write_CDD_HwTq0Meas_HwTq0RollgCntr_Val
# define Rte_Write_RackLimrCcwEotSig0_Val Rte_Write_CDD_HwTq0Meas_RackLimrCcwEotSig0_Val
# define Rte_Write_RackLimrCwEotSig0_Val Rte_Write_CDD_HwTq0Meas_RackLimrCwEotSig0_Val
# define Rte_Write_RackLimrEotSig0Avl_Logl Rte_Write_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_CDD_HwTq0Meas_FltInj_f32_Oper
# define Rte_Call_FltInj_u08_Oper Rte_Call_CDD_HwTq0Meas_FltInj_u08_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CDD_HwTq0Meas_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_CDD_HwTq0Meas_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_CDD_HwTq0Meas_GetTiSpan1MicroSec32bit_Oper
# define Rte_Call_HwTq0Offs_SetRamBlockStatus Rte_Call_CDD_HwTq0Meas_HwTq0Offs_SetRamBlockStatus
# define Rte_Call_IoHwAb_SetFctPrphlHwTq0_Oper Rte_Call_CDD_HwTq0Meas_IoHwAb_SetFctPrphlHwTq0_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_HwTq0Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_HwTq0OffsDft Rte_CData_CDD_HwTq0Meas_HwTq0OffsDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTq0MeasHwTq0PrtclFltFailStep_Val Rte_Prm_CDD_HwTq0Meas_HwTq0MeasHwTq0PrtclFltFailStep_Val

# define Rte_Prm_HwTq0MeasHwTq0PrtclFltPassStep_Val Rte_Prm_CDD_HwTq0Meas_HwTq0MeasHwTq0PrtclFltPassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTq0MeasPrevHwTq0() (Rte_Inst_CDD_HwTq0Meas->Pim_HwTq0MeasPrevHwTq0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrCcwEot0() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrCcwEot0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrCwEot0() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrCwEot0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq0MsgMissRxCnt() (Rte_Inst_CDD_HwTq0Meas->Pim_HwTq0MsgMissRxCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq0ComStsErrCntr() (Rte_Inst_CDD_HwTq0Meas->Pim_HwTq0ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq0IntSnsrErrCntr() (Rte_Inst_CDD_HwTq0Meas->Pim_HwTq0IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq0MeasPrevRollgCntr() (Rte_Inst_CDD_HwTq0Meas->Pim_HwTq0MeasPrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot0Data0() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrEot0Data0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot0Data1() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrEot0Data1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot0Data2() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrEot0Data2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot0Avl() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrEot0Avl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot0Id2DataReadCmpl() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrEot0Id2DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot0Id3DataReadCmpl() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrEot0Id3DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot0Id4DataReadCmpl() (Rte_Inst_CDD_HwTq0Meas->Pim_RackLimrEot0Id4DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq0Offs() (Rte_Inst_CDD_HwTq0Meas->Pim_HwTq0Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTq0MeasPrevHwTq0(void)
 *   float32 *Rte_Pim_RackLimrCcwEot0(void)
 *   float32 *Rte_Pim_RackLimrCwEot0(void)
 *   uint32 *Rte_Pim_HwTq0MsgMissRxCnt(void)
 *   uint8 *Rte_Pim_HwTq0ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwTq0IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwTq0MeasPrevRollgCntr(void)
 *   uint8 *Rte_Pim_RackLimrEot0Data0(void)
 *   uint8 *Rte_Pim_RackLimrEot0Data1(void)
 *   uint8 *Rte_Pim_RackLimrEot0Data2(void)
 *   boolean *Rte_Pim_RackLimrEot0Avl(void)
 *   boolean *Rte_Pim_RackLimrEot0Id2DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot0Id3DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot0Id4DataReadCmpl(void)
 *   HwTqOffsRec1 *Rte_Pim_HwTq0Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   HwTqOffsRec1 *Rte_CData_HwTq0OffsDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwTq0MeasHwTq0PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwTq0MeasHwTq0PrtclFltPassStep_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_HwTq0Meas_START_SEC_CODE
# include "CDD_HwTq0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasHwTq0AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq0MeasHwTq0AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq0Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq0MeasHwTq0AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasHwTq0AutTrim_Oper HwTq0MeasHwTq0AutTrim_Oper
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasHwTq0ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq0MeasHwTq0ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq0Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq0MeasHwTq0ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasHwTq0ClrTrim_Oper HwTq0MeasHwTq0ClrTrim_Oper
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasHwTq0ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq0MeasHwTq0ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq0MeasHwTq0ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasHwTq0ReadTrim_Oper HwTq0MeasHwTq0ReadTrim_Oper
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasHwTq0TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq0MeasHwTq0TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq0MeasHwTq0TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasHwTq0TrimPrfmdSts_Oper HwTq0MeasHwTq0TrimPrfmdSts_Oper
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasHwTq0WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq0MeasHwTq0WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq0Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq0MeasHwTq0WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasHwTq0WrTrim_Oper HwTq0MeasHwTq0WrTrim_Oper
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasInit1
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
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwTq0_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasInit1 HwTq0MeasInit1
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasPer1
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
 *   Std_ReturnType Rte_Read_HwTq0Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq0_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq0Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq0RollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RackLimrCcwEotSig0_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrCwEotSig0_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrEotSig0Avl_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasPer1 HwTq0MeasPer1
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasPer2
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

# define RTE_RUNNABLE_HwTq0MeasPer2 HwTq0MeasPer2
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq0MeasTrigStrt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq0MeasTrigStrt>
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
 *   void HwTq0MeasTrigStrt_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq0MeasTrigStrt_Oper HwTq0MeasTrigStrt_Oper
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasTrigStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_HwTq0Meas_STOP_SEC_CODE
# include "CDD_HwTq0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1459355429
#    error "The magic number of the generated file <C:/Component/CM650A_HwTq0Meas_Impl/tools/contract/Rte_CDD_HwTq0Meas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1459355429
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_HWTQ0MEAS_H */
