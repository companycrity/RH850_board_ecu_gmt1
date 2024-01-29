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
 *          File:  Rte_CDD_HwTq0Meas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_HwTq0Meas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_HWTQ0MEAS_H
# define _RTE_CDD_HWTQ0MEAS_H

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

# include "Rte_CDD_HwTq0Meas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_RackLimrCcwEotSig0_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_RackLimrCwEotSig0_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq0Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwTq0_Val (0.0F)
#  define Rte_InitValue_HwTq0Polarity_Val (1)
#  define Rte_InitValue_HwTq0Qlfr_Val (0U)
#  define Rte_InitValue_HwTq0RollgCntr_Val (0U)
#  define Rte_InitValue_RackLimrCcwEotSig0_Val (0.0F)
#  define Rte_InitValue_RackLimrCwEotSig0_Val (0.0F)
#  define Rte_InitValue_RackLimrEotSig0Avl_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTq0Polarity_Val Rte_Read_CDD_HwTq0Meas_HwTq0Polarity_Val
#  define Rte_Read_CDD_HwTq0Meas_HwTq0Polarity_Val(data) (*(data) = Rte_PolarityCfg_HwTq0Polarity_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwTq0_Val Rte_Write_CDD_HwTq0Meas_HwTq0_Val
#  define Rte_Write_CDD_HwTq0Meas_HwTq0_Val(data) (Rte_CDD_HwTq0Meas_HwTq0_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq0Qlfr_Val Rte_Write_CDD_HwTq0Meas_HwTq0Qlfr_Val
#  define Rte_Write_CDD_HwTq0Meas_HwTq0Qlfr_Val(data) (Rte_CDD_HwTq0Meas_HwTq0Qlfr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq0RollgCntr_Val Rte_Write_CDD_HwTq0Meas_HwTq0RollgCntr_Val
#  define Rte_Write_CDD_HwTq0Meas_HwTq0RollgCntr_Val(data) (Rte_CDD_HwTq0Meas_HwTq0RollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RackLimrCcwEotSig0_Val Rte_Write_CDD_HwTq0Meas_RackLimrCcwEotSig0_Val
#  define Rte_Write_CDD_HwTq0Meas_RackLimrCcwEotSig0_Val(data) (Rte_CDD_HwTq0Meas_RackLimrCcwEotSig0_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RackLimrCwEotSig0_Val Rte_Write_CDD_HwTq0Meas_RackLimrCwEotSig0_Val
#  define Rte_Write_CDD_HwTq0Meas_RackLimrCwEotSig0_Val(data) (Rte_CDD_HwTq0Meas_RackLimrCwEotSig0_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RackLimrEotSig0Avl_Logl Rte_Write_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl
#  define Rte_Write_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl(data) (Rte_CDD_HwTq0Meas_RackLimrEotSig0Avl_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_FLTINJ_APPL_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FltInj_f32_Oper(arg1, arg2) (FltInj_f32_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_FLTINJ_APPL_CODE) FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FltInj_u08_Oper(arg1, arg2) (FltInj_u08_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr1MicroSec32bit_Oper(arg1) (GetRefTmr1MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan1MicroSec32bit_Oper(arg1, arg2) (GetTiSpan1MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq0Offs_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)102, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPrphlHwTq0_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPrphlHwTq0_Oper IoHwAb_SetFctPrphlHwTq0_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_HwTq0OffsDft() (&((P2CONST(Rte_Calprm_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP])->HwTq0OffsDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwTq0MeasHwTq0PrtclFltFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwTq0MeasHwTq0PrtclFltFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTq0MeasHwTq0PrtclFltPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwTq0MeasHwTq0PrtclFltPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0MeasPrevHwTq0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrCcwEot0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrCwEot0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_RackLimrEot0Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq0Meas_HwTq0Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwTq0MeasPrevHwTq0() \
  (&Rte_CDD_HwTq0Meas_HwTq0MeasPrevHwTq0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrCcwEot0() \
  (&Rte_CDD_HwTq0Meas_RackLimrCcwEot0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrCwEot0() \
  (&Rte_CDD_HwTq0Meas_RackLimrCwEot0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq0MsgMissRxCnt() \
  (&Rte_CDD_HwTq0Meas_HwTq0MsgMissRxCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq0ComStsErrCntr() \
  (&Rte_CDD_HwTq0Meas_HwTq0ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq0IntSnsrErrCntr() \
  (&Rte_CDD_HwTq0Meas_HwTq0IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq0MeasPrevRollgCntr() \
  (&Rte_CDD_HwTq0Meas_HwTq0MeasPrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot0Data0() \
  (&Rte_CDD_HwTq0Meas_RackLimrEot0Data0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot0Data1() \
  (&Rte_CDD_HwTq0Meas_RackLimrEot0Data1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot0Data2() \
  (&Rte_CDD_HwTq0Meas_RackLimrEot0Data2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot0Avl() \
  (&Rte_CDD_HwTq0Meas_RackLimrEot0Avl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot0Id2DataReadCmpl() \
  (&Rte_CDD_HwTq0Meas_RackLimrEot0Id2DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot0Id3DataReadCmpl() \
  (&Rte_CDD_HwTq0Meas_RackLimrEot0Id3DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot0Id4DataReadCmpl() \
  (&Rte_CDD_HwTq0Meas_RackLimrEot0Id4DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq0Offs() \
  (&Rte_CDD_HwTq0Meas_HwTq0Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_HwTq0Meas_START_SEC_CODE
# include "CDD_HwTq0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwTq0MeasHwTq0AutTrim_Oper HwTq0MeasHwTq0AutTrim_Oper
#  define RTE_RUNNABLE_HwTq0MeasHwTq0ClrTrim_Oper HwTq0MeasHwTq0ClrTrim_Oper
#  define RTE_RUNNABLE_HwTq0MeasHwTq0ReadTrim_Oper HwTq0MeasHwTq0ReadTrim_Oper
#  define RTE_RUNNABLE_HwTq0MeasHwTq0TrimPrfmdSts_Oper HwTq0MeasHwTq0TrimPrfmdSts_Oper
#  define RTE_RUNNABLE_HwTq0MeasHwTq0WrTrim_Oper HwTq0MeasHwTq0WrTrim_Oper
#  define RTE_RUNNABLE_HwTq0MeasInit1 HwTq0MeasInit1
#  define RTE_RUNNABLE_HwTq0MeasPer1 HwTq0MeasPer1
#  define RTE_RUNNABLE_HwTq0MeasPer2 HwTq0MeasPer2
#  define RTE_RUNNABLE_HwTq0MeasTrigStrt_Oper HwTq0MeasTrigStrt_Oper
# endif

FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasHwTq0WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_HwTq0Meas_CODE) HwTq0MeasTrigStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_HwTq0Meas_STOP_SEC_CODE
# include "CDD_HwTq0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_HWTQ0MEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
