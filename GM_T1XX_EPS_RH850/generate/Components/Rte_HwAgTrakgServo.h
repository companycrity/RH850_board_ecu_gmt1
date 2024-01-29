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
 *          File:  Rte_HwAgTrakgServo.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgTrakgServo>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGTRAKGSERVO_H
# define _RTE_HWAGTRAKGSERVO_H

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

# include "Rte_HwAgTrakgServo_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HwAgTrakgServo_MotTqServoCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgServoCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgServoEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgTrakgServoCmd_Val (0.0F)
#  define Rte_InitValue_HwAgTrakgServoEna_Logl (FALSE)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_MotTqServoCmd_Val (0.0F)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwAg_Val Rte_Read_HwAgTrakgServo_HwAg_Val
#  define Rte_Read_HwAgTrakgServo_HwAg_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTrakgServoCmd_Val Rte_Read_HwAgTrakgServo_HwAgTrakgServoCmd_Val
#  define Rte_Read_HwAgTrakgServo_HwAgTrakgServoCmd_Val(data) (*(data) = Rte_GmOvrlStMgr_HwAgServoCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTrakgServoEna_Logl Rte_Read_HwAgTrakgServo_HwAgTrakgServoEna_Logl
#  define Rte_Read_HwAgTrakgServo_HwAgTrakgServoEna_Logl(data) (*(data) = Rte_GmOvrlStMgr_HwAgServoEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_HwAgTrakgServo_HwTq_Val
#  define Rte_Read_HwAgTrakgServo_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelCrf_Val Rte_Read_HwAgTrakgServo_MotVelCrf_Val
#  define Rte_Read_HwAgTrakgServo_MotVelCrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelCrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_HwAgTrakgServo_VehSpd_Val
#  define Rte_Read_HwAgTrakgServo_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotTqServoCmd_Val Rte_Write_HwAgTrakgServo_MotTqServoCmd_Val
#  define Rte_Write_HwAgTrakgServo_MotTqServoCmd_Val(data) (Rte_HwAgTrakgServo_MotTqServoCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDftlTermLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoEnaRate_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoEnaRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoExecRate_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoExecRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoHwAgLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoHwTqLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoMaxRamp_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoMaxRamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoMinRamp_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoMinRamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoPidLim_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoPidLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwAgTrakgServoRampCmpl_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoRampCmpl_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDampgTqX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDampgTqX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D() ((P2CONST(u4p12, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDampgTqY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDampgTqY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDftlGainY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDftlGainY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoDiRateX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDiRateX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoDiRateX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDiRateX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoDiRateY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDiRateY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoDiRateY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoDiRateY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoHwAgRateLim_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoHwAgRateLim_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoIntglGainY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoIntglGainY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoMaxCmdX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoMaxCmdX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoMaxCmdY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoMaxCmdY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoPropGainX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoPropGainX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoPropGainX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoPropGainX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoPropGainY_Ary2D() ((P2CONST(u10p6, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoPropGainY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoPropGainY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoPropGainY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoSmotngX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoSmotngX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoSmotngX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoSmotngX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoSmotngY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoSmotngY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoSmotngY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoSmotngY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoVehSpdBasd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwAgTrakgServoVehSpdBasd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_HwAgTarRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevDftlErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevHwAgTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevIntglErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_PrevSmotng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoDftlTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoHwAgTarFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoIntglTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoPidCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoPropTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoRtnScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoSmotngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_dHwAgTrakgServoRampCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_DftlTermLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgTrakgServo_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwAgTarRateLim() \
  (&Rte_HwAgTrakgServo_HwAgTarRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevDftlErr() \
  (&Rte_HwAgTrakgServo_PrevDftlErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAgTar() \
  (&Rte_HwAgTrakgServo_PrevHwAgTar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevIntglErr() \
  (&Rte_HwAgTrakgServo_PrevIntglErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevSmotng() \
  (&Rte_HwAgTrakgServo_PrevSmotng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoDftlTerm() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoDftlTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoHwAgTarFild() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoHwAgTarFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoIntglTerm() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoIntglTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoPidCmd() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoPidCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoPropTerm() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoPropTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoRtnScaFac() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoRtnScaFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoSmotngEna() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoSmotngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHwAgTrakgServoRampCmpl() \
  (&Rte_HwAgTrakgServo_dHwAgTrakgServoRampCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DftlTermLpFil() \
  (&Rte_HwAgTrakgServo_DftlTermLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLpFil() \
  (&Rte_HwAgTrakgServo_HwAgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLpFil() \
  (&Rte_HwAgTrakgServo_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HwAgTrakgServo_START_SEC_CODE
# include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwAgTrakgServoInit1 HwAgTrakgServoInit1
#  define RTE_RUNNABLE_HwAgTrakgServoPer1 HwAgTrakgServoPer1
# endif

FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HwAgTrakgServo_STOP_SEC_CODE
# include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWAGTRAKGSERVO_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
