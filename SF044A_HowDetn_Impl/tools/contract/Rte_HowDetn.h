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
 *          File:  Rte_HowDetn.h
 *     SW-C Type:  HowDetn
 *  Generated at:  Wed Nov 30 22:38:42 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HowDetn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HOWDETN_H
# define _RTE_HOWDETN_H

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

# include "Rte_HowDetn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HowDetn
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EstimLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FinalLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HowOffPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IniLpFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IniLpFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IniLpFil3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevCalcdHowEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHowEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RefTiHowOff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilHpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqHpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHowDetnAbsHiFrqTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHowDetnAbsLoFrqTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HowDetn, RTE_CONST, RTE_CONST) Rte_Inst_HowDetn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HowDetn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HowDetnEstimn_Val (0.5F)
# define Rte_InitValue_HowDetnFlg_Logl (TRUE)
# define Rte_InitValue_HowDetnSt_Val (0)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HowDetn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_HOWDETN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HowDetn_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_HOWDETN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HowDetn_HowDetnEstimn_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HowDetn_HowDetnFlg_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HowDetn_HowDetnSt_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HowDetn_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_HOWDETN_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HowDetn_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_HOWDETN_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnEstimLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnMinVehSpd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnOffThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnOffTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnPercOfPrevHowEstim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnStLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnTqFinalLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnTqHpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HowDetn_HowDetnTqInitLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnHiFrqGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnHiFrqGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnHiFrqRateX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_9_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnHiFrqRateX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s7p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnHiFrqRateY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s7p8_9_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnHiFrqRateY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnLoFrqRateX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_9_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnLoFrqRateX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s7p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnLoFrqRateY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s7p8_9_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnLoFrqRateY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnStThdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnStThdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HowDetn_HowDetnVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq_Val Rte_Read_HowDetn_HwTq_Val
# define Rte_Read_VehSpd_Val Rte_Read_HowDetn_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HowDetnEstimn_Val Rte_Write_HowDetn_HowDetnEstimn_Val
# define Rte_Write_HowDetnFlg_Logl Rte_Write_HowDetn_HowDetnFlg_Logl
# define Rte_Write_HowDetnSt_Val Rte_Write_HowDetn_HowDetnSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_HowDetn_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_HowDetn_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HowDetnEstimLpFilFrq_Val Rte_Prm_HowDetn_HowDetnEstimLpFilFrq_Val

# define Rte_Prm_HowDetnMinVehSpd_Val Rte_Prm_HowDetn_HowDetnMinVehSpd_Val

# define Rte_Prm_HowDetnOffThd_Val Rte_Prm_HowDetn_HowDetnOffThd_Val

# define Rte_Prm_HowDetnOffTi_Val Rte_Prm_HowDetn_HowDetnOffTi_Val

# define Rte_Prm_HowDetnPercOfPrevHowEstim_Val Rte_Prm_HowDetn_HowDetnPercOfPrevHowEstim_Val

# define Rte_Prm_HowDetnSlewRate_Val Rte_Prm_HowDetn_HowDetnSlewRate_Val

# define Rte_Prm_HowDetnStLpFilFrq_Val Rte_Prm_HowDetn_HowDetnStLpFilFrq_Val

# define Rte_Prm_HowDetnTqFinalLpFilFrq_Val Rte_Prm_HowDetn_HowDetnTqFinalLpFilFrq_Val

# define Rte_Prm_HowDetnTqHpFilFrq_Val Rte_Prm_HowDetn_HowDetnTqHpFilFrq_Val

# define Rte_Prm_HowDetnTqInitLpFilFrq_Val Rte_Prm_HowDetn_HowDetnTqInitLpFilFrq_Val

# define Rte_Prm_HowDetnHiFrqGainY_Ary1D Rte_Prm_HowDetn_HowDetnHiFrqGainY_Ary1D

# define Rte_Prm_HowDetnHiFrqRateX_Ary2D Rte_Prm_HowDetn_HowDetnHiFrqRateX_Ary2D

# define Rte_Prm_HowDetnHiFrqRateY_Ary2D Rte_Prm_HowDetn_HowDetnHiFrqRateY_Ary2D

# define Rte_Prm_HowDetnLoFrqRateX_Ary2D Rte_Prm_HowDetn_HowDetnLoFrqRateX_Ary2D

# define Rte_Prm_HowDetnLoFrqRateY_Ary2D Rte_Prm_HowDetn_HowDetnLoFrqRateY_Ary2D

# define Rte_Prm_HowDetnStThdX_Ary1D Rte_Prm_HowDetn_HowDetnStThdX_Ary1D

# define Rte_Prm_HowDetnVehSpd_Ary1D Rte_Prm_HowDetn_HowDetnVehSpd_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevCalcdHowEstim() (Rte_Inst_HowDetn->Pim_PrevCalcdHowEstim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHowEstim() (Rte_Inst_HowDetn->Pim_PrevHowEstim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHowDetnAbsHiFrqTq() (Rte_Inst_HowDetn->Pim_dHowDetnAbsHiFrqTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHowDetnAbsLoFrqTq() (Rte_Inst_HowDetn->Pim_dHowDetnAbsLoFrqTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RefTiHowOff() (Rte_Inst_HowDetn->Pim_RefTiHowOff) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HowOffPrev() (Rte_Inst_HowDetn->Pim_HowOffPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EstimLpFil() (Rte_Inst_HowDetn->Pim_EstimLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FinalLpFil() (Rte_Inst_HowDetn->Pim_FinalLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IniLpFil1() (Rte_Inst_HowDetn->Pim_IniLpFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IniLpFil2() (Rte_Inst_HowDetn->Pim_IniLpFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IniLpFil3() (Rte_Inst_HowDetn->Pim_IniLpFil3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StLpFil() (Rte_Inst_HowDetn->Pim_StLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqHpFil() (Rte_Inst_HowDetn->Pim_TqHpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevCalcdHowEstim(void)
 *   float32 *Rte_Pim_PrevHowEstim(void)
 *   float32 *Rte_Pim_dHowDetnAbsHiFrqTq(void)
 *   float32 *Rte_Pim_dHowDetnAbsLoFrqTq(void)
 *   uint32 *Rte_Pim_RefTiHowOff(void)
 *   boolean *Rte_Pim_HowOffPrev(void)
 *   FilLpRec1 *Rte_Pim_EstimLpFil(void)
 *   FilLpRec1 *Rte_Pim_FinalLpFil(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil1(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil2(void)
 *   FilLpRec1 *Rte_Pim_IniLpFil3(void)
 *   FilLpRec1 *Rte_Pim_StLpFil(void)
 *   FilHpRec1 *Rte_Pim_TqHpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HowDetnEstimLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnMinVehSpd_Val(void)
 *   float32 Rte_Prm_HowDetnOffThd_Val(void)
 *   float32 Rte_Prm_HowDetnOffTi_Val(void)
 *   float32 Rte_Prm_HowDetnPercOfPrevHowEstim_Val(void)
 *   float32 Rte_Prm_HowDetnSlewRate_Val(void)
 *   float32 Rte_Prm_HowDetnStLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqFinalLpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqHpFilFrq_Val(void)
 *   float32 Rte_Prm_HowDetnTqInitLpFilFrq_Val(void)
 *   u9p7 *Rte_Prm_HowDetnHiFrqGainY_Ary1D(void)
 *   u8p8 *Rte_Prm_HowDetnHiFrqRateX_Ary2D(void)
 *   s7p8 *Rte_Prm_HowDetnHiFrqRateY_Ary2D(void)
 *   u8p8 *Rte_Prm_HowDetnLoFrqRateX_Ary2D(void)
 *   s7p8 *Rte_Prm_HowDetnLoFrqRateY_Ary2D(void)
 *   u8p8 *Rte_Prm_HowDetnStThdX_Ary1D(void)
 *   u9p7 *Rte_Prm_HowDetnVehSpd_Ary1D(void)
 *
 *********************************************************************************************************************/


# define HowDetn_START_SEC_CODE
# include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HowDetnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HowDetnEstimn_Val(float32 data)
 *   Std_ReturnType Rte_Write_HowDetnFlg_Logl(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HowDetnInit1 HowDetnInit1
FUNC(void, HowDetn_CODE) HowDetnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HowDetnPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HowDetnEstimn_Val(float32 data)
 *   Std_ReturnType Rte_Write_HowDetnFlg_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HowDetnSt_Val(sint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HowDetnPer1 HowDetnPer1
FUNC(void, HowDetn_CODE) HowDetnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HowDetn_STOP_SEC_CODE
# include "HowDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1480541505
#    error "The magic number of the generated file <C:/Component/SF044A_HowDetn_Impl_2.0.0/tools/contract/Rte_HowDetn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1480541505
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HOWDETN_H */
