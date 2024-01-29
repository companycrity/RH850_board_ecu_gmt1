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
 *          File:  Rte_HwAg0Meas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAg0Meas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAG0MEAS_H
# define _RTE_HWAG0MEAS_H

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

# include "Rte_HwAg0Meas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HwAg0Meas_HwAg0_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwAg0Meas_HwAg0Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAg0Meas_HwAg0RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg0Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwAg0_Val (0.0F)
#  define Rte_InitValue_HwAg0Polarity_Val (1)
#  define Rte_InitValue_HwAg0Qlfr_Val (0U)
#  define Rte_InitValue_HwAg0RollgCntr_Val (0U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr0Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr0TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr1Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg0Meas_HwAg0Snsr1TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwAg0Polarity_Val Rte_Read_HwAg0Meas_HwAg0Polarity_Val
#  define Rte_Read_HwAg0Meas_HwAg0Polarity_Val(data) (*(data) = Rte_PolarityCfg_HwAg0Polarity_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwAg0_Val Rte_Write_HwAg0Meas_HwAg0_Val
#  define Rte_Write_HwAg0Meas_HwAg0_Val(data) (Rte_HwAg0Meas_HwAg0_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg0Qlfr_Val Rte_Write_HwAg0Meas_HwAg0Qlfr_Val
#  define Rte_Write_HwAg0Meas_HwAg0Qlfr_Val(data) (Rte_HwAg0Meas_HwAg0Qlfr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg0RollgCntr_Val Rte_Write_HwAg0Meas_HwAg0RollgCntr_Val
#  define Rte_Write_HwAg0Meas_HwAg0RollgCntr_Val(data) (Rte_HwAg0Meas_HwAg0RollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Call_HwAg0Offs_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)110, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPrphlHwAg0_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPrphlHwAg0_Oper IoHwAb_SetFctPrphlHwAg0_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0Raw(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr0Raw = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0TestOk(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr0TestOk = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0Raw(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr0Raw = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr0TestOk(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr0TestOk = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1Raw(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr1Raw = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1TestOk(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr1TestOk = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0Raw() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr0Raw
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0TestOk() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr0TestOk
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1Raw() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr1Raw
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1TestOk() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr1TestOk
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1Raw(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr1Raw = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwAg0MeasPer4_HwAg0Snsr1TestOk(data) \
  (Rte_Irv_HwAg0Meas_HwAg0Snsr1TestOk = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0Raw() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr0Raw
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr0TestOk() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr0TestOk
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1Raw() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr1Raw
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAg0MeasPer5_HwAg0Snsr1TestOk() \
  Rte_Irv_HwAg0Meas_HwAg0Snsr1TestOk
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_HwAg0OffsDft() (&((P2CONST(Rte_Calprm_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP])->HwAg0OffsDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwAg0MeasHwAg0IfFltFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasHwAg0IfFltFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAg0MeasHwAg0IfFltPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasHwAg0IfFltPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAg0MeasVrnrErrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasVrnrErrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAg0MeasSnsr0Rev_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasSnsr0Rev_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAg0MeasSnsr0Rev_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasSnsr0Rev_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAg0MeasSnsr1Rev_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasSnsr1Rev_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAg0MeasSnsr1Rev_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasSnsr1Rev_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAg0MeasStep_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasStep_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAg0MeasStep_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAg0MeasStep_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0PrevHwAg0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0RawDataAvlStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr0FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_dHwAg0MeasSnsr1FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr0Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr1Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0PrevRollCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0PrevStepSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr0NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Snsr1NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0SnsrTrigNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Qlfr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr0TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_PrevHwAg0Snsr1TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0InitStepSeqNrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwAgOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg0Meas_HwAg0Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwAg0PrevHwAg0() \
  (&Rte_HwAg0Meas_HwAg0PrevHwAg0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAg0() \
  (&Rte_HwAg0Meas_PrevHwAg0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr0Abs() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr0Abs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr0Rel() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr0Rel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr1Abs() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr1Abs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr1Rel() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr1Rel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0RawDataAvlStrtTi() \
  (&Rte_HwAg0Meas_HwAg0RawDataAvlStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr0CS() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr0CS) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr0FRXD() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr0FRXD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr1CS() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr1CS) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAg0MeasSnsr1FRXD() \
  (&Rte_HwAg0Meas_dHwAg0MeasSnsr1FRXD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAg0Snsr0Raw() \
  (&Rte_HwAg0Meas_PrevHwAg0Snsr0Raw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAg0Snsr1Raw() \
  (&Rte_HwAg0Meas_PrevHwAg0Snsr1Raw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0PrevRollCnt() \
  (&Rte_HwAg0Meas_HwAg0PrevRollCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0PrevStepSeqNr() \
  (&Rte_HwAg0Meas_HwAg0PrevStepSeqNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr0ComStsErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr0ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr0IdErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr0IdErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr0IntSnsrErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr0IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr0NoMsgErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr0NoMsgErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr1ComStsErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr1ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr1IdErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr1IdErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr1IntSnsrErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr1IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Snsr1NoMsgErrCntr() \
  (&Rte_HwAg0Meas_HwAg0Snsr1NoMsgErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0SnsrTrigNr() \
  (&Rte_HwAg0Meas_HwAg0SnsrTrigNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAg0Qlfr() \
  (&Rte_HwAg0Meas_PrevHwAg0Qlfr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAg0Snsr0TestOk() \
  (&Rte_HwAg0Meas_PrevHwAg0Snsr0TestOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAg0Snsr1TestOk() \
  (&Rte_HwAg0Meas_PrevHwAg0Snsr1TestOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0InitStepSeqNrCmpl() \
  (&Rte_HwAg0Meas_HwAg0InitStepSeqNrCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAg0Offs() \
  (&Rte_HwAg0Meas_HwAg0Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HwAg0Meas_START_SEC_CODE
# include "HwAg0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwAg0MeasHwAg0AutTrim_Oper HwAg0MeasHwAg0AutTrim_Oper
#  define RTE_RUNNABLE_HwAg0MeasHwAg0ClrTrim_Oper HwAg0MeasHwAg0ClrTrim_Oper
#  define RTE_RUNNABLE_HwAg0MeasHwAg0ReadTrim_Oper HwAg0MeasHwAg0ReadTrim_Oper
#  define RTE_RUNNABLE_HwAg0MeasHwAg0TrimPrfmdSts_Oper HwAg0MeasHwAg0TrimPrfmdSts_Oper
#  define RTE_RUNNABLE_HwAg0MeasHwAg0WrTrim_Oper HwAg0MeasHwAg0WrTrim_Oper
#  define RTE_RUNNABLE_HwAg0MeasInit1 HwAg0MeasInit1
#  define RTE_RUNNABLE_HwAg0MeasPer1 HwAg0MeasPer1
#  define RTE_RUNNABLE_HwAg0MeasPer2 HwAg0MeasPer2
#  define RTE_RUNNABLE_HwAg0MeasPer3 HwAg0MeasPer3
#  define RTE_RUNNABLE_HwAg0MeasPer4 HwAg0MeasPer4
#  define RTE_RUNNABLE_HwAg0MeasPer5 HwAg0MeasPer5
# endif

FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) HwAgReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) HwAgOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer4(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer5(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HwAg0Meas_STOP_SEC_CODE
# include "HwAg0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWAG0MEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
