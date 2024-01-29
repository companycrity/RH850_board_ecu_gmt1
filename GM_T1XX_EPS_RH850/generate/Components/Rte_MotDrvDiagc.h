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
 *          File:  Rte_MotDrvDiagc.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotDrvDiagc>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTDRVDIAGC_H
# define _RTE_MOTDRVDIAGC_H

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

# include "Rte_MotDrvDiagc_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrC_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrD_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrE_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotDrvDiagc_MotDrvErrF_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr2Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdC_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumC_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
#  define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
#  define Rte_InitValue_MotDrvErrA_Val (0.0F)
#  define Rte_InitValue_MotDrvErrB_Val (0.0F)
#  define Rte_InitValue_MotDrvErrC_Val (0.0F)
#  define Rte_InitValue_MotDrvErrD_Val (0.0F)
#  define Rte_InitValue_MotDrvErrE_Val (0.0F)
#  define Rte_InitValue_MotDrvErrF_Val (0.0F)
#  define Rte_InitValue_PhaOnTiMeasdA_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdB_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdC_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdD_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdE_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdF_Val (0U)
#  define Rte_InitValue_PhaOnTiSumA_Val (0U)
#  define Rte_InitValue_PhaOnTiSumB_Val (0U)
#  define Rte_InitValue_PhaOnTiSumC_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_MotDrvDiagc_DiagcStsIvtr1Inactv_Logl
#  define Rte_Read_MotDrvDiagc_DiagcStsIvtr1Inactv_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_MotDrvDiagc_DiagcStsIvtr2Inactv_Logl
#  define Rte_Read_MotDrvDiagc_DiagcStsIvtr2Inactv_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsIvtr2Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiMeasdA_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdA_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiMeasdA_Val(data) (*(data) = Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdA_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiMeasdB_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdB_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiMeasdB_Val(data) (*(data) = Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdB_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiMeasdC_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdC_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiMeasdC_Val(data) (*(data) = Rte_CDD_Tauj0CfgAndUse_PhaOnTiMeasdC_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiMeasdD_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdD_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiMeasdD_Val(data) (*(data) = Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiMeasdE_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdE_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiMeasdE_Val(data) (*(data) = Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiMeasdF_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdF_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiMeasdF_Val(data) (*(data) = Rte_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiSumA_Val Rte_Read_MotDrvDiagc_PhaOnTiSumA_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiSumA_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_PhaOnTiSumA_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiSumB_Val Rte_Read_MotDrvDiagc_PhaOnTiSumB_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiSumB_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_PhaOnTiSumB_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PhaOnTiSumC_Val Rte_Read_MotDrvDiagc_PhaOnTiSumC_Val
#  define Rte_Read_MotDrvDiagc_PhaOnTiSumC_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_PhaOnTiSumC_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_MotDrvDiagc_SysSt_Val
#  define Rte_Read_MotDrvDiagc_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotDrvErrA_Val Rte_Write_MotDrvDiagc_MotDrvErrA_Val
#  define Rte_Write_MotDrvDiagc_MotDrvErrA_Val(data) (Rte_MotDrvDiagc_MotDrvErrA_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotDrvErrB_Val Rte_Write_MotDrvDiagc_MotDrvErrB_Val
#  define Rte_Write_MotDrvDiagc_MotDrvErrB_Val(data) (Rte_MotDrvDiagc_MotDrvErrB_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotDrvErrC_Val Rte_Write_MotDrvDiagc_MotDrvErrC_Val
#  define Rte_Write_MotDrvDiagc_MotDrvErrC_Val(data) (Rte_MotDrvDiagc_MotDrvErrC_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotDrvErrD_Val Rte_Write_MotDrvDiagc_MotDrvErrD_Val
#  define Rte_Write_MotDrvDiagc_MotDrvErrD_Val(data) (Rte_MotDrvDiagc_MotDrvErrD_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotDrvErrE_Val Rte_Write_MotDrvDiagc_MotDrvErrE_Val
#  define Rte_Write_MotDrvDiagc_MotDrvErrE_Val(data) (Rte_MotDrvDiagc_MotDrvErrE_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotDrvErrF_Val Rte_Write_MotDrvDiagc_MotDrvErrF_Val
#  define Rte_Write_MotDrvDiagc_MotDrvErrF_Val(data) (Rte_MotDrvDiagc_MotDrvErrF_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_MotDrvDiagcErrFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotDrvDiagcErrFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotDrvDiagcErrOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotDrvDiagcErrOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotDrvDiagcErrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotDrvDiagcErrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_UnitDly; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaAFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaBFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaCFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaDFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaEFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotDrvDiagc_MotDrvDiagcPhaFFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_MotDrvDiagcPhaOnTiSumAPrev() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumAPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaOnTiSumBPrev() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumBPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaOnTiSumCPrev() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaOnTiSumCPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_UnitDly() \
  (&Rte_MotDrvDiagc_UnitDly) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaAFilLp() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaAFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaBFilLp() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaBFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaCFilLp() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaCFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaDFilLp() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaDFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaEFilLp() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaEFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotDrvDiagcPhaFFilLp() \
  (&Rte_MotDrvDiagc_MotDrvDiagcPhaFFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define MotDrvDiagc_START_SEC_CODE
# include "MotDrvDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_MotDrvDiagcInit1 MotDrvDiagcInit1
#  define RTE_RUNNABLE_MotDrvDiagcPer1 MotDrvDiagcPer1
# endif

FUNC(void, MotDrvDiagc_CODE) MotDrvDiagcInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, MotDrvDiagc_CODE) MotDrvDiagcPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define MotDrvDiagc_STOP_SEC_CODE
# include "MotDrvDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTDRVDIAGC_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
