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
 *          File:  Rte_DampgPahFwl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DampgPahFwl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DAMPGPAHFWL_H
# define _RTE_DAMPGPAHFWL_H

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

# include "Rte_DampgPahFwl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DampgCmdBasDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_DampgPahFwl_DampgCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiPahFwl_AssiPahLimrActv_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdBas_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_InertiaCmpVel_InertiaCmpVelCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiPahLimrActv_Val (0.0F)
#  define Rte_InitValue_DampgCmd_Val (0.0F)
#  define Rte_InitValue_DampgCmdBas_Val (0.0F)
#  define Rte_InitValue_DampgCmdBasDi_Logl (FALSE)
#  define Rte_InitValue_InertiaCmpVelCmd_Val (0.0F)
#  define Rte_InitValue_MfgEnaSt_Val (0U)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiPahLimrActv_Val Rte_Read_DampgPahFwl_AssiPahLimrActv_Val
#  define Rte_Read_DampgPahFwl_AssiPahLimrActv_Val(data) (*(data) = Rte_AssiPahFwl_AssiPahLimrActv_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DampgCmdBas_Val Rte_Read_DampgPahFwl_DampgCmdBas_Val
#  define Rte_Read_DampgPahFwl_DampgCmdBas_Val(data) (*(data) = Rte_Dampg_DampgCmdBas_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DampgCmdBasDi_Logl Rte_Read_DampgPahFwl_DampgCmdBasDi_Logl
#  define Rte_Read_DampgPahFwl_DampgCmdBasDi_Logl(data) (*(data) = Rte_CmnMfgSrv_DampgCmdBasDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_InertiaCmpVelCmd_Val Rte_Read_DampgPahFwl_InertiaCmpVelCmd_Val
#  define Rte_Read_DampgPahFwl_InertiaCmpVelCmd_Val(data) (*(data) = Rte_InertiaCmpVel_InertiaCmpVelCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MfgEnaSt_Val Rte_Read_DampgPahFwl_MfgEnaSt_Val
#  define Rte_Read_DampgPahFwl_MfgEnaSt_Val(data) (*(data) = Rte_CmnMfgSrv_MfgEnaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelCrf_Val Rte_Read_DampgPahFwl_MotVelCrf_Val
#  define Rte_Read_DampgPahFwl_MotVelCrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelCrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_DampgPahFwl_VehSpd_Val
#  define Rte_Read_DampgPahFwl_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_DampgCmd_Val Rte_Write_DampgPahFwl_DampgCmd_Val
#  define Rte_Write_DampgPahFwl_DampgCmd_Val(data) (Rte_DampgPahFwl_DampgCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_DampgPahFwlActvFwlLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlActvFwlLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgPahFwlDampgCmdLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgPahFwlInertiaCmpLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlInertiaCmpLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlAssiAddlDampgX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlAssiAddlDampgX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlAssiAddlDampgX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlAssiAddlDampgX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlAssiAddlDampgY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlAssiAddlDampgY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlAssiAddlDampgY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlAssiAddlDampgY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlDampgCmdAddlDampgX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdAddlDampgX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlDampgCmdAddlDampgX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdAddlDampgX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlDampgCmdAddlDampgY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdAddlDampgY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlDampgCmdAddlDampgY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdAddlDampgY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlDampgCmdUpprLimX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdUpprLimX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlDampgCmdUpprLimX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdUpprLimX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlDampgCmdUpprLimY_Ary2D() ((P2CONST(s7p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdUpprLimY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlDampgCmdUpprLimY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDampgCmdUpprLimY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlDftDampgX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDftDampgX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlDftDampgX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDftDampgX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlDftDampgY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDftDampgY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlDftDampgY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlDftDampgY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlInertiaCmpUpprLimX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlInertiaCmpUpprLimX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlInertiaCmpUpprLimX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlInertiaCmpUpprLimX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlInertiaCmpUpprLimY_Ary2D() ((P2CONST(s7p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlInertiaCmpUpprLimY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlInertiaCmpUpprLimY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlInertiaCmpUpprLimY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DampgPahFwlVehSpd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlVehSpd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DampgPahFwlVehSpd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DampgPahFwlVehSpd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlActvRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlAddDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpHpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLpLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_DampgDecPrfmncPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlDampgCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_dDampgPahFwlInertiaCmpOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_DampgCmdLpFilLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_DampgCmdLpFilUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_FwlActvLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_InertiaCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_InertiaCmpLpFilLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DampgPahFwl_InertiaCmpLpFilUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dDampgPahFwlActvRaw() \
  (&Rte_DampgPahFwl_dDampgPahFwlActvRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlAddDampg() \
  (&Rte_DampgPahFwl_dDampgPahFwlAddDampg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlDampgCmdLimd() \
  (&Rte_DampgPahFwl_dDampgPahFwlDampgCmdLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlDampgCmdLowrLimFild() \
  (&Rte_DampgPahFwl_dDampgPahFwlDampgCmdLowrLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlDampgCmdUpprLimFild() \
  (&Rte_DampgPahFwl_dDampgPahFwlDampgCmdUpprLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlInertiaCmpHpPah() \
  (&Rte_DampgPahFwl_dDampgPahFwlInertiaCmpHpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlInertiaCmpLowrLimFild() \
  (&Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLowrLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlInertiaCmpLpLimd() \
  (&Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLpLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlInertiaCmpLpPah() \
  (&Rte_DampgPahFwl_dDampgPahFwlInertiaCmpLpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlInertiaCmpUpprLimFild() \
  (&Rte_DampgPahFwl_dDampgPahFwlInertiaCmpUpprLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DampgDecPrfmncPrev() \
  (&Rte_DampgPahFwl_DampgDecPrfmncPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlDampgCmdOverLim() \
  (&Rte_DampgPahFwl_dDampgPahFwlDampgCmdOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dDampgPahFwlInertiaCmpOverLim() \
  (&Rte_DampgPahFwl_dDampgPahFwlInertiaCmpOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DampgCmdLpFilLowrLim() \
  (&Rte_DampgPahFwl_DampgCmdLpFilLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DampgCmdLpFilUpprLim() \
  (&Rte_DampgPahFwl_DampgCmdLpFilUpprLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FwlActvLpFil() \
  (&Rte_DampgPahFwl_FwlActvLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InertiaCmpLpFil() \
  (&Rte_DampgPahFwl_InertiaCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InertiaCmpLpFilLowrLim() \
  (&Rte_DampgPahFwl_InertiaCmpLpFilLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InertiaCmpLpFilUpprLim() \
  (&Rte_DampgPahFwl_InertiaCmpLpFilUpprLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define DampgPahFwl_START_SEC_CODE
# include "DampgPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_DampgPahFwlInit1 DampgPahFwlInit1
#  define RTE_RUNNABLE_DampgPahFwlPer1 DampgPahFwlPer1
# endif

FUNC(void, DampgPahFwl_CODE) DampgPahFwlInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DampgPahFwl_CODE) DampgPahFwlPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define DampgPahFwl_STOP_SEC_CODE
# include "DampgPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

#endif /* _RTE_DAMPGPAHFWL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
