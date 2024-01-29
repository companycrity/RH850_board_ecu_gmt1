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
 *          File:  Rte_HwAgTrajGenn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgTrajGenn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGTRAJGENN_H
# define _RTE_HWAGTRAJGENN_H

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

# include "Rte_HwAgTrajGenn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HwAgTrajGenn_HwAgTrakgServoCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgTrajGenn_HwAgTrajGennEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgTrajGennEna_Logl (FALSE)
#  define Rte_InitValue_HwAgTrakgServoCmd_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgTrajGenn_HwATar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgTrajGenn_HwAgTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgTrajGenn_HwVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwAg_Val Rte_Read_HwAgTrajGenn_HwAg_Val
#  define Rte_Read_HwAgTrajGenn_HwAg_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTrajGennEna_Logl Rte_Read_HwAgTrajGenn_HwAgTrajGennEna_Logl
#  define Rte_Read_HwAgTrajGenn_HwAgTrajGennEna_Logl(data) (*(data) = Rte_HwAgTrajGenn_HwAgTrajGennEna_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwAgTrakgServoCmd_Val Rte_Write_HwAgTrajGenn_HwAgTrakgServoCmd_Val
#  define Rte_Write_HwAgTrajGenn_HwAgTrakgServoCmd_Val(data) (Rte_HwAgTrajGenn_HwAgTrakgServoCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAgTrajGennPer1_HwATar() \
  Rte_Irv_HwAgTrajGenn_HwATar
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAgTrajGennPer1_HwAgTar() \
  Rte_Irv_HwAgTrajGenn_HwAgTar
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwAgTrajGennPer1_HwVelTar() \
  Rte_Irv_HwAgTrajGenn_HwVelTar
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(data) \
  (Rte_Irv_HwAgTrajGenn_HwATar = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(data) \
  (Rte_Irv_HwAgTrajGenn_HwAgTar = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(data) \
  (Rte_Irv_HwAgTrajGenn_HwVelTar = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwAgTrajGennAMax_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrajGennAMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrajGennAgMax_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrajGennAgMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrajGennVelMax_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrajGennVelMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_AMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_HwPosnIni; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_HwPosnOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_SignHwPosnDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_TiDeltaA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_TiDeltaVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_TiSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_VelMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwAgTrajCmdSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_CmdSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrajGenn_CalcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_AMax() \
  (&Rte_HwAgTrajGenn_AMax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwPosnIni() \
  (&Rte_HwAgTrajGenn_HwPosnIni) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwPosnOffs() \
  (&Rte_HwAgTrajGenn_HwPosnOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SignHwPosnDelta() \
  (&Rte_HwAgTrajGenn_SignHwPosnDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TiDeltaA() \
  (&Rte_HwAgTrajGenn_TiDeltaA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TiDeltaVel() \
  (&Rte_HwAgTrajGenn_TiDeltaVel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TiSt() \
  (&Rte_HwAgTrajGenn_TiSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VelMax() \
  (&Rte_HwAgTrajGenn_VelMax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CmdSt() \
  (&Rte_HwAgTrajGenn_CmdSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CalcFlg() \
  (&Rte_HwAgTrajGenn_CalcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HwAgTrajGenn_START_SEC_CODE
# include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwAgTrajGennInit1 HwAgTrajGennInit1
#  define RTE_RUNNABLE_HwAgTrajGennPer1 HwAgTrajGennPer1
#  define RTE_RUNNABLE_SetTrajTarPrm_Oper SetTrajTarPrm_Oper
# endif

FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAgTrajGenn_CODE) SetTrajTarPrm_Oper(float32 HwAgTrajGennHwAgTar_Arg, float32 HwAgTrajGennHwVelTar_Arg, float32 HwAgTrajGennHwATar_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgTrajGenn_STOP_SEC_CODE
# include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWAGTRAJGENN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
