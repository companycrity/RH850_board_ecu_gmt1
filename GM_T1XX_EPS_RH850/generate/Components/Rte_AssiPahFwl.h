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
 *          File:  Rte_AssiPahFwl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AssiPahFwl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSIPAHFWL_H
# define _RTE_ASSIPAHFWL_H

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

# include "Rte_AssiPahFwl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGainEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_AssiPahFwl_AssiCmdSum_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiPahFwl_AssiPahLimrActv_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBas_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiHiFrq_AssiHiFrqCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_HwTqOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HysCmp_HysCmpCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiCmdBas_Val (0.0F)
#  define Rte_InitValue_AssiCmdSum_Val (0.0F)
#  define Rte_InitValue_AssiHiFrqCmd_Val (0.0F)
#  define Rte_InitValue_AssiLnrGainEna_Logl (FALSE)
#  define Rte_InitValue_AssiPahLimrActv_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqOvrl_Val (0.0F)
#  define Rte_InitValue_HysCmpCmd_Val (0.0F)
#  define Rte_InitValue_MfgEnaSt_Val (0U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiCmdBas_Val Rte_Read_AssiPahFwl_AssiCmdBas_Val
#  define Rte_Read_AssiPahFwl_AssiCmdBas_Val(data) (*(data) = Rte_Assi_AssiCmdBas_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AssiHiFrqCmd_Val Rte_Read_AssiPahFwl_AssiHiFrqCmd_Val
#  define Rte_Read_AssiPahFwl_AssiHiFrqCmd_Val(data) (*(data) = Rte_AssiHiFrq_AssiHiFrqCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AssiLnrGainEna_Logl Rte_Read_AssiPahFwl_AssiLnrGainEna_Logl
#  define Rte_Read_AssiPahFwl_AssiLnrGainEna_Logl(data) (*(data) = Rte_CmnMfgSrv_AssiLnrGainEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_AssiPahFwl_HwTq_Val
#  define Rte_Read_AssiPahFwl_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqOvrl_Val Rte_Read_AssiPahFwl_HwTqOvrl_Val
#  define Rte_Read_AssiPahFwl_HwTqOvrl_Val(data) (*(data) = Rte_GmTqArbn_HwTqOvrl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HysCmpCmd_Val Rte_Read_AssiPahFwl_HysCmpCmd_Val
#  define Rte_Read_AssiPahFwl_HysCmpCmd_Val(data) (*(data) = Rte_HysCmp_HysCmpCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MfgEnaSt_Val Rte_Read_AssiPahFwl_MfgEnaSt_Val
#  define Rte_Read_AssiPahFwl_MfgEnaSt_Val(data) (*(data) = Rte_CmnMfgSrv_MfgEnaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_AssiPahFwl_VehSpd_Val
#  define Rte_Read_AssiPahFwl_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AssiCmdSum_Val Rte_Write_AssiPahFwl_AssiCmdSum_Val
#  define Rte_Write_AssiPahFwl_AssiCmdSum_Val(data) (Rte_AssiPahFwl_AssiCmdSum_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_AssiPahLimrActv_Val Rte_Write_AssiPahFwl_AssiPahLimrActv_Val
#  define Rte_Write_AssiPahFwl_AssiPahLimrActv_Val(data) (Rte_AssiPahFwl_AssiPahLimrActv_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlCmdSplitLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlFwlActvLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiPahFwlHysCmpLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlHysCmpLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiPahFwlRestoreThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlRestoreThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->BasAssiPahFwlOverLimDiagcFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->BasAssiPahFwlOverLimDiagcPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HiFrqAssiPahFwlOverLimDiagcFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HiFrqAssiPahFwlOverLimDiagcPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiPahFwlDiRcvr_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlDiRcvr_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiPahFwlDftAssiX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlDftAssiX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiPahFwlDftAssiX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlDftAssiX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiPahFwlDftAssiY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlDftAssiY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiPahFwlDftAssiY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlDftAssiY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D() ((P2CONST(s4p11, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlHiFrqUpprLimY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlHiFrqUpprLimY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiPahFwlUpprLimX_Ary2D() ((P2CONST(s4p11, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlUpprLimX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiPahFwlUpprLimX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlUpprLimX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiPahFwlUpprLimY_Ary2D() ((P2CONST(s4p11, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlUpprLimY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiPahFwlUpprLimY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlUpprLimY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiPahFwlVehSpd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlVehSpd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiPahFwlVehSpd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->AssiPahFwlVehSpd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_CombdAssiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlActvRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqAssiLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqAssiUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdHpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdLpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqLpLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlSumInp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_AssiPrfmncPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlBasAssiCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_FwlActvLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_HiFrqCmdLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_LowrLimLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiPahFwl_UpprLimLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CombdAssiPrev() \
  (&Rte_AssiPahFwl_CombdAssiPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlActvRaw() \
  (&Rte_AssiPahFwl_dAssiPahFwlActvRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlBasAssiLimd() \
  (&Rte_AssiPahFwl_dAssiPahFwlBasAssiLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlBasAssiLowrLim() \
  (&Rte_AssiPahFwl_dAssiPahFwlBasAssiLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlBasAssiUpprLim() \
  (&Rte_AssiPahFwl_dAssiPahFwlBasAssiUpprLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild() \
  (&Rte_AssiPahFwl_dAssiPahFwlHiFrqAssiLowrLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild() \
  (&Rte_AssiPahFwl_dAssiPahFwlHiFrqAssiUpprLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlHiFrqCmdHpPah() \
  (&Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdHpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlHiFrqCmdLpPah() \
  (&Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdLpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlHiFrqLpLimd() \
  (&Rte_AssiPahFwl_dAssiPahFwlHiFrqLpLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlSumInp() \
  (&Rte_AssiPahFwl_dAssiPahFwlSumInp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiPrfmncPrev() \
  (&Rte_AssiPahFwl_AssiPrfmncPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlBasAssiCmdOverLim() \
  (&Rte_AssiPahFwl_dAssiPahFwlBasAssiCmdOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dAssiPahFwlHiFrqCmdOverLim() \
  (&Rte_AssiPahFwl_dAssiPahFwlHiFrqCmdOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FwlActvLpFilStVari() \
  (&Rte_AssiPahFwl_FwlActvLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HiFrqCmdLpFilStVari() \
  (&Rte_AssiPahFwl_HiFrqCmdLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LowrLimLpFilStVari() \
  (&Rte_AssiPahFwl_LowrLimLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_UpprLimLpFilStVari() \
  (&Rte_AssiPahFwl_UpprLimLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define AssiPahFwl_START_SEC_CODE
# include "AssiPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_AssiPahFwlInit1 AssiPahFwlInit1
#  define RTE_RUNNABLE_AssiPahFwlPer1 AssiPahFwlPer1
# endif

FUNC(void, AssiPahFwl_CODE) AssiPahFwlInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, AssiPahFwl_CODE) AssiPahFwlPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define AssiPahFwl_STOP_SEC_CODE
# include "AssiPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ASSIPAHFWL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
