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
 *          File:  Rte_HowDetn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HowDetn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HOWDETN_H
# define _RTE_HOWDETN_H

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

# include "Rte_HowDetn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HowDetn_HowDetnEstimn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HowDetn_HowDetnFlg_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_HowDetn_HowDetnSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HowDetnEstimn_Val (0.5F)
#  define Rte_InitValue_HowDetnFlg_Logl (TRUE)
#  define Rte_InitValue_HowDetnSt_Val (0)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTq_Val Rte_Read_HowDetn_HwTq_Val
#  define Rte_Read_HowDetn_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_HowDetn_VehSpd_Val
#  define Rte_Read_HowDetn_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HowDetnEstimn_Val Rte_Write_HowDetn_HowDetnEstimn_Val
#  define Rte_Write_HowDetn_HowDetnEstimn_Val(data) (Rte_HowDetn_HowDetnEstimn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HowDetnFlg_Logl Rte_Write_HowDetn_HowDetnFlg_Logl
#  define Rte_Write_HowDetn_HowDetnFlg_Logl(data) (Rte_HowDetn_HowDetnFlg_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HowDetnSt_Val Rte_Write_HowDetn_HowDetnSt_Val
#  define Rte_Write_HowDetn_HowDetnSt_Val(data) (Rte_HowDetn_HowDetnSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HowDetnEstimLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->HowDetnEstimLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnMinVehSpd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnMinVehSpd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnOffThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnOffThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnOffTi_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnOffTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnPercOfPrevHowEstim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnPercOfPrevHowEstim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnSlewRate_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnSlewRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnStLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->HowDetnStLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnTqFinalLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->HowDetnTqFinalLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnTqHpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnTqHpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HowDetnTqInitLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->HowDetnTqInitLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HowDetnHiFrqGainY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnHiFrqGainY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HowDetnHiFrqGainY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnHiFrqGainY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HowDetnHiFrqRateX_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnHiFrqRateX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HowDetnHiFrqRateX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnHiFrqRateX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HowDetnHiFrqRateY_Ary2D() ((P2CONST(s7p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnHiFrqRateY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HowDetnHiFrqRateY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnHiFrqRateY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HowDetnLoFrqRateX_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnLoFrqRateX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HowDetnLoFrqRateX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnLoFrqRateX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HowDetnLoFrqRateY_Ary2D() ((P2CONST(s7p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnLoFrqRateY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HowDetnLoFrqRateY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnLoFrqRateY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HowDetnStThdX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnStThdX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HowDetnStThdX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnStThdX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HowDetnVehSpd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnVehSpd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HowDetnVehSpd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->HowDetnVehSpd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_PrevCalcdHowEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_PrevHowEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_dHowDetnAbsHiFrqTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_dHowDetnAbsLoFrqTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_RefTiHowOff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_HowOffPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_EstimLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_FinalLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_IniLpFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_IniLpFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_IniLpFil3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_StLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilHpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HowDetn_TqHpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevCalcdHowEstim() \
  (&Rte_HowDetn_PrevCalcdHowEstim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHowEstim() \
  (&Rte_HowDetn_PrevHowEstim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHowDetnAbsHiFrqTq() \
  (&Rte_HowDetn_dHowDetnAbsHiFrqTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHowDetnAbsLoFrqTq() \
  (&Rte_HowDetn_dHowDetnAbsLoFrqTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RefTiHowOff() \
  (&Rte_HowDetn_RefTiHowOff) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HowOffPrev() \
  (&Rte_HowDetn_HowOffPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EstimLpFil() \
  (&Rte_HowDetn_EstimLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FinalLpFil() \
  (&Rte_HowDetn_FinalLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IniLpFil1() \
  (&Rte_HowDetn_IniLpFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IniLpFil2() \
  (&Rte_HowDetn_IniLpFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IniLpFil3() \
  (&Rte_HowDetn_IniLpFil3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_StLpFil() \
  (&Rte_HowDetn_StLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqHpFil() \
  (&Rte_HowDetn_TqHpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HowDetn_START_SEC_CODE
# include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HowDetnInit1 HowDetnInit1
#  define RTE_RUNNABLE_HowDetnPer1 HowDetnPer1
# endif

FUNC(void, HowDetn_CODE) HowDetnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HowDetn_CODE) HowDetnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HowDetn_STOP_SEC_CODE
# include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HOWDETN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
