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
 *          File:  Rte_GmStrtStop.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmStrtStop>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMSTRTSTOP_H
# define _RTE_GMSTRTSTOP_H

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

# include "Rte_GmStrtStop_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_InvldMsg0C9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmStrtStop_VehStrtStopMotTqCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmStrtStop_VehStrtStopRampRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmStrtStop_VehStrtStopSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EngSpd_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_Msg0C9BusHiSpdInvld_Logl (FALSE)
#  define Rte_InitValue_Msg0C9BusHiSpdMiss_Logl (FALSE)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
#  define Rte_InitValue_VehStrtStopMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_VehStrtStopRampRate_Val (0.0F)
#  define Rte_InitValue_VehStrtStopSt_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EngSpd_Val Rte_Read_GmStrtStop_EngSpd_Val
#  define Rte_Read_GmStrtStop_EngSpd_Val(data) (*(data) = Rte_GmMsg0C9BusHiSpd_EngSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_GmStrtStop_HwTq_Val
#  define Rte_Read_GmStrtStop_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_GmStrtStop_HwVel_Val
#  define Rte_Read_GmStrtStop_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVel_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg0C9BusHiSpdInvld_Logl Rte_Read_GmStrtStop_Msg0C9BusHiSpdInvld_Logl
#  define Rte_Read_GmStrtStop_Msg0C9BusHiSpdInvld_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_InvldMsg0C9_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg0C9BusHiSpdMiss_Logl Rte_Read_GmStrtStop_Msg0C9BusHiSpdMiss_Logl
#  define Rte_Read_GmStrtStop_Msg0C9BusHiSpdMiss_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_GmStrtStop_VehSpd_Val
#  define Rte_Read_GmStrtStop_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_GmStrtStop_VehSpdVld_Logl
#  define Rte_Read_GmStrtStop_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_VehStrtStopMotTqCmdSca_Val Rte_Write_GmStrtStop_VehStrtStopMotTqCmdSca_Val
#  define Rte_Write_GmStrtStop_VehStrtStopMotTqCmdSca_Val(data) (Rte_GmStrtStop_VehStrtStopMotTqCmdSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehStrtStopRampRate_Val Rte_Write_GmStrtStop_VehStrtStopRampRate_Val
#  define Rte_Write_GmStrtStop_VehStrtStopRampRate_Val(data) (Rte_GmStrtStop_VehStrtStopRampRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehStrtStopSt_Val Rte_Write_GmStrtStop_VehStrtStopSt_Val
#  define Rte_Write_GmStrtStop_VehStrtStopSt_Val(data) (Rte_GmStrtStop_VehStrtStopSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_GmStrtStopFltRateLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopFltRateLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopMod1EngTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopMod1EngTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopMod1Sca_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopMod1Sca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopMod1ToStopRateLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopMod1ToStopRateLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopMod1VehSpdTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopMod1VehSpdTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopMod2Sca_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopMod2Sca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopNormModEngTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopNormModEngTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopNormModVehSpdTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopNormModVehSpdTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopNormRateLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopNormRateLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopNormToMod1RateLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopNormToMod1RateLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopAndMod2RateLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopAndMod2RateLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod1HwTqTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod1HwTqTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod1HwVelTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod1HwVelTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod1Tmr_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod1Tmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod1VehSpdTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod1VehSpdTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod2HwTqTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod2HwTqTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod2HwVelTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod2HwVelTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod2Tmr_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod2Tmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopMod2VehSpdTranThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopMod2VehSpdTranThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopStopModSca_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopStopModSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmStrtStopEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmStrtStopEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_Mod1RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_Mod2RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_PrevActSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmStrtStop_PrevStrtStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_Mod1RefTmr() \
  (&Rte_GmStrtStop_Mod1RefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Mod2RefTmr() \
  (&Rte_GmStrtStop_Mod2RefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevActSt() \
  (&Rte_GmStrtStop_PrevActSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevStrtStopSt() \
  (&Rte_GmStrtStop_PrevStrtStopSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmStrtStop_START_SEC_CODE
# include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmStrtStopInit1 GmStrtStopInit1
#  define RTE_RUNNABLE_GmStrtStopPer1 GmStrtStopPer1
# endif

FUNC(void, GmStrtStop_CODE) GmStrtStopInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmStrtStop_CODE) GmStrtStopPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmStrtStop_STOP_SEC_CODE
# include "GmStrtStop_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMSTRTSTOP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
