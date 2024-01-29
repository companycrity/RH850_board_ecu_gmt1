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
 *          File:  Rte_GmStrtStop.h
 *     SW-C Type:  GmStrtStop
 *  Generated at:  Mon Jun 27 10:51:39 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmStrtStop> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMSTRTSTOP_H
# define _RTE_GMSTRTSTOP_H

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

# include "Rte_GmStrtStop_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmStrtStop
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Mod1RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Mod2RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevActSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevStrtStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmStrtStop, RTE_CONST, RTE_CONST) Rte_Inst_GmStrtStop; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmStrtStop, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EngSpd_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_Msg0C9BusHiSpdInvld_Logl (FALSE)
# define Rte_InitValue_Msg0C9BusHiSpdMiss_Logl (FALSE)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)
# define Rte_InitValue_VehStrtStopMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_VehStrtStopRampRate_Val (0.0F)
# define Rte_InitValue_VehStrtStopSt_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmStrtStop_EngSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmStrtStop_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmStrtStop_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmStrtStop_Msg0C9BusHiSpdInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmStrtStop_Msg0C9BusHiSpdMiss_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmStrtStop_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmStrtStop_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmStrtStop_VehStrtStopMotTqCmdSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmStrtStop_VehStrtStopRampRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmStrtStop_VehStrtStopSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmStrtStop_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmStrtStop_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_GMSTRTSTOP_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopFltRateLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopMod1EngTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopMod1Sca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopMod1ToStopRateLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopMod1VehSpdTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopMod2Sca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopNormModEngTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopNormModVehSpdTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopNormRateLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopNormToMod1RateLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopAndMod2RateLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod1HwTqTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod1HwVelTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod1Tmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod1VehSpdTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod2HwTqTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod2HwVelTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod2Tmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopMod2VehSpdTranThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopStopModSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmStrtStop_GmStrtStopEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EngSpd_Val Rte_Read_GmStrtStop_EngSpd_Val
# define Rte_Read_HwTq_Val Rte_Read_GmStrtStop_HwTq_Val
# define Rte_Read_HwVel_Val Rte_Read_GmStrtStop_HwVel_Val
# define Rte_Read_Msg0C9BusHiSpdInvld_Logl Rte_Read_GmStrtStop_Msg0C9BusHiSpdInvld_Logl
# define Rte_Read_Msg0C9BusHiSpdMiss_Logl Rte_Read_GmStrtStop_Msg0C9BusHiSpdMiss_Logl
# define Rte_Read_VehSpd_Val Rte_Read_GmStrtStop_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_GmStrtStop_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_VehStrtStopMotTqCmdSca_Val Rte_Write_GmStrtStop_VehStrtStopMotTqCmdSca_Val
# define Rte_Write_VehStrtStopRampRate_Val Rte_Write_GmStrtStop_VehStrtStopRampRate_Val
# define Rte_Write_VehStrtStopSt_Val Rte_Write_GmStrtStop_VehStrtStopSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmStrtStop_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmStrtStop_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmStrtStopFltRateLim_Val Rte_Prm_GmStrtStop_GmStrtStopFltRateLim_Val

# define Rte_Prm_GmStrtStopMod1EngTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopMod1EngTranThd_Val

# define Rte_Prm_GmStrtStopMod1Sca_Val Rte_Prm_GmStrtStop_GmStrtStopMod1Sca_Val

# define Rte_Prm_GmStrtStopMod1ToStopRateLim_Val Rte_Prm_GmStrtStop_GmStrtStopMod1ToStopRateLim_Val

# define Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopMod1VehSpdTranThd_Val

# define Rte_Prm_GmStrtStopMod2Sca_Val Rte_Prm_GmStrtStop_GmStrtStopMod2Sca_Val

# define Rte_Prm_GmStrtStopNormModEngTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopNormModEngTranThd_Val

# define Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopNormModVehSpdTranThd_Val

# define Rte_Prm_GmStrtStopNormRateLim_Val Rte_Prm_GmStrtStop_GmStrtStopNormRateLim_Val

# define Rte_Prm_GmStrtStopNormToMod1RateLim_Val Rte_Prm_GmStrtStop_GmStrtStopNormToMod1RateLim_Val

# define Rte_Prm_GmStrtStopStopAndMod2RateLim_Val Rte_Prm_GmStrtStop_GmStrtStopStopAndMod2RateLim_Val

# define Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod1HwTqTranThd_Val

# define Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod1HwVelTranThd_Val

# define Rte_Prm_GmStrtStopStopMod1Tmr_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod1Tmr_Val

# define Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod1VehSpdTranThd_Val

# define Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod2HwTqTranThd_Val

# define Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod2HwVelTranThd_Val

# define Rte_Prm_GmStrtStopStopMod2Tmr_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod2Tmr_Val

# define Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val Rte_Prm_GmStrtStop_GmStrtStopStopMod2VehSpdTranThd_Val

# define Rte_Prm_GmStrtStopStopModSca_Val Rte_Prm_GmStrtStop_GmStrtStopStopModSca_Val

# define Rte_Prm_GmStrtStopEna_Logl Rte_Prm_GmStrtStop_GmStrtStopEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_Mod1RefTmr() (Rte_Inst_GmStrtStop->Pim_Mod1RefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Mod2RefTmr() (Rte_Inst_GmStrtStop->Pim_Mod2RefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevActSt() (Rte_Inst_GmStrtStop->Pim_PrevActSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevStrtStopSt() (Rte_Inst_GmStrtStop->Pim_PrevStrtStopSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_Mod1RefTmr(void)
 *   uint32 *Rte_Pim_Mod2RefTmr(void)
 *   uint8 *Rte_Pim_PrevActSt(void)
 *   uint8 *Rte_Pim_PrevStrtStopSt(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmStrtStopFltRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1EngTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1Sca_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1ToStopRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopMod2Sca_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormModEngTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormRateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopNormToMod1RateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopAndMod2RateLim_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1Tmr_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2Tmr_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val(void)
 *   float32 Rte_Prm_GmStrtStopStopModSca_Val(void)
 *   boolean Rte_Prm_GmStrtStopEna_Logl(void)
 *
 *********************************************************************************************************************/


# define GmStrtStop_START_SEC_CODE
# include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmStrtStopInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmStrtStopInit1 GmStrtStopInit1
FUNC(void, GmStrtStop_CODE) GmStrtStopInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmStrtStopPer1
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
 *   Std_ReturnType Rte_Read_EngSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_Msg0C9BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg0C9BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehStrtStopMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehStrtStopRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehStrtStopSt_Val(uint8 data)
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

# define RTE_RUNNABLE_GmStrtStopPer1 GmStrtStopPer1
FUNC(void, GmStrtStop_CODE) GmStrtStopPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmStrtStop_STOP_SEC_CODE
# include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467033534
#    error "The magic number of the generated file <C:/Component/CF012A_GmStrtStop_Impl/tools/contract/Rte_GmStrtStop.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467033534
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMSTRTSTOP_H */
