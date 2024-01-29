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
 *          File:  Rte_GmTqArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmTqArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMTQARBN_H
# define _RTE_GMTQARBN_H

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

# include "Rte_GmTqArbn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_EscCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_LkaCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_AssiCmdBasSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_DampgCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_EscCmdArbd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmTqArbn_EscLimdActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_HwTqOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_LkaTqCmdCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_MotTqCmdOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmTqArbn_PullCmpCustLrngDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_RtnCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmTqArbnEscSt1, RTE_VAR_INIT) Rte_GmOvrlStMgr_EscSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgServoEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwOscnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TqOscn_HwOscnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmTqArbnLkaSt1, RTE_VAR_INIT) Rte_GmOvrlStMgr_LkaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgTrakgServo_MotTqServoCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMaxSecur_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiCmdBasSca_Val (0.0F)
#  define Rte_InitValue_DampgCmdSca_Val (0.0F)
#  define Rte_InitValue_EscCmd_Val (0.0F)
#  define Rte_InitValue_EscCmdArbd_Val (0.0F)
#  define Rte_InitValue_EscLimdActv_Logl (FALSE)
#  define Rte_InitValue_EscSt_Val (0U)
#  define Rte_InitValue_HwAgServoEna_Logl (FALSE)
#  define Rte_InitValue_HwOscnEna_Logl (FALSE)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqOscCmd_Val (0.0F)
#  define Rte_InitValue_HwTqOvrl_Val (0.0F)
#  define Rte_InitValue_LkaSt_Val (0U)
#  define Rte_InitValue_LkaTqCmd_Val (0.0F)
#  define Rte_InitValue_LkaTqCmdCdnd_Val (0.0F)
#  define Rte_InitValue_MotTqCmdOvrl_Val (0.0F)
#  define Rte_InitValue_MotTqServoCmd_Val (0.0F)
#  define Rte_InitValue_PullCmpCustLrngDi_Logl (FALSE)
#  define Rte_InitValue_RtnCmdSca_Val (0.0F)
#  define Rte_InitValue_VehSpdMaxSecur_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EscCmd_Val Rte_Read_GmTqArbn_EscCmd_Val
#  define Rte_Read_GmTqArbn_EscCmd_Val(data) (*(data) = Rte_GmMsg180BusChassisExp_EscCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EscSt_Val Rte_Read_GmTqArbn_EscSt_Val
#  define Rte_Read_GmTqArbn_EscSt_Val(data) (*(data) = Rte_GmOvrlStMgr_EscSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgServoEna_Logl Rte_Read_GmTqArbn_HwAgServoEna_Logl
#  define Rte_Read_GmTqArbn_HwAgServoEna_Logl(data) (*(data) = Rte_GmOvrlStMgr_HwAgServoEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwOscnEna_Logl Rte_Read_GmTqArbn_HwOscnEna_Logl
#  define Rte_Read_GmTqArbn_HwOscnEna_Logl(data) (*(data) = Rte_GmOvrlStMgr_HwOscnEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_GmTqArbn_HwTq_Val
#  define Rte_Read_GmTqArbn_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqOscCmd_Val Rte_Read_GmTqArbn_HwTqOscCmd_Val
#  define Rte_Read_GmTqArbn_HwTqOscCmd_Val(data) (*(data) = Rte_TqOscn_HwOscnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaSt_Val Rte_Read_GmTqArbn_LkaSt_Val
#  define Rte_Read_GmTqArbn_LkaSt_Val(data) (*(data) = Rte_GmOvrlStMgr_LkaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaTqCmd_Val Rte_Read_GmTqArbn_LkaTqCmd_Val
#  define Rte_Read_GmTqArbn_LkaTqCmd_Val(data) (*(data) = Rte_GmMsg180BusHiSpd_LkaCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqServoCmd_Val Rte_Read_GmTqArbn_MotTqServoCmd_Val
#  define Rte_Read_GmTqArbn_MotTqServoCmd_Val(data) (*(data) = Rte_HwAgTrakgServo_MotTqServoCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdMaxSecur_Val Rte_Read_GmTqArbn_VehSpdMaxSecur_Val
#  define Rte_Read_GmTqArbn_VehSpdMaxSecur_Val(data) (*(data) = Rte_GmVehSpdArbn_VehSpdMaxSecur_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AssiCmdBasSca_Val Rte_Write_GmTqArbn_AssiCmdBasSca_Val
#  define Rte_Write_GmTqArbn_AssiCmdBasSca_Val(data) (Rte_GmTqArbn_AssiCmdBasSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DampgCmdSca_Val Rte_Write_GmTqArbn_DampgCmdSca_Val
#  define Rte_Write_GmTqArbn_DampgCmdSca_Val(data) (Rte_GmTqArbn_DampgCmdSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_EscCmdArbd_Val Rte_Write_GmTqArbn_EscCmdArbd_Val
#  define Rte_Write_GmTqArbn_EscCmdArbd_Val(data) (Rte_GmTqArbn_EscCmdArbd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_EscLimdActv_Logl Rte_Write_GmTqArbn_EscLimdActv_Logl
#  define Rte_Write_GmTqArbn_EscLimdActv_Logl(data) (Rte_GmTqArbn_EscLimdActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqOvrl_Val Rte_Write_GmTqArbn_HwTqOvrl_Val
#  define Rte_Write_GmTqArbn_HwTqOvrl_Val(data) (Rte_GmTqArbn_HwTqOvrl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaTqCmdCdnd_Val Rte_Write_GmTqArbn_LkaTqCmdCdnd_Val
#  define Rte_Write_GmTqArbn_LkaTqCmdCdnd_Val(data) (Rte_GmTqArbn_LkaTqCmdCdnd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotTqCmdOvrl_Val Rte_Write_GmTqArbn_MotTqCmdOvrl_Val
#  define Rte_Write_GmTqArbn_MotTqCmdOvrl_Val(data) (Rte_GmTqArbn_MotTqCmdOvrl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PullCmpCustLrngDi_Logl Rte_Write_GmTqArbn_PullCmpCustLrngDi_Logl
#  define Rte_Write_GmTqArbn_PullCmpCustLrngDi_Logl(data) (Rte_GmTqArbn_PullCmpCustLrngDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RtnCmdSca_Val Rte_Write_GmTqArbn_RtnCmdSca_Val
#  define Rte_Write_GmTqArbn_RtnCmdSca_Val(data) (Rte_GmTqArbn_RtnCmdSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmTqArbnApaEnaRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaEnaRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaSmotngHwTqLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnEscMaxTq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnEscMaxTq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaOutpOvrlUpprLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaAssiScaEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaAssiScaEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaDampgScaEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaDampgScaEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnApaRtnScaEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaRtnScaEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmTqArbnLkaSlewEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaSlewEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnApaDiRateX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaDiRateX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnApaDiRateX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaDiRateX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnApaDiRateY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaDiRateY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnApaDiRateY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaDiRateY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnApaSmotngX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaSmotngX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnApaSmotngX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaSmotngX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnApaSmotngY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaSmotngY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnApaSmotngY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnApaSmotngY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D() ((P2CONST(u4p12, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaOutpOvrlX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaOutpOvrlX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D() ((P2CONST(u4p12, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaOutpOvrlY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaOutpOvrlY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnLkaSlewX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaSlewX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnLkaSlewX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaSlewX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmTqArbnLkaSlewY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaSlewY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmTqArbnLkaSlewY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmTqArbnLkaSlewY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmVehSpdBilnrSeln_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmVehSpdBilnrSeln_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_ActPosnServoCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_DesLkaTqCmdRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_PosnServoSmotngEnaRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnDesLkaTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnEscTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnLkaOutpTqReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnLkaTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_dGmTqArbnPosnServoSmotngLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmTqArbn_APASmotngHwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_ActPosnServoCmd() \
  (&Rte_GmTqArbn_ActPosnServoCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DesLkaTqCmdRateLim() \
  (&Rte_GmTqArbn_DesLkaTqCmdRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoSmotngEnaRateLim() \
  (&Rte_GmTqArbn_PosnServoSmotngEnaRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmTqArbnDesLkaTqCmd() \
  (&Rte_GmTqArbn_dGmTqArbnDesLkaTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmTqArbnEscTqCmd() \
  (&Rte_GmTqArbn_dGmTqArbnEscTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmTqArbnLkaOutpTqReq() \
  (&Rte_GmTqArbn_dGmTqArbnLkaOutpTqReq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmTqArbnLkaTqCmd() \
  (&Rte_GmTqArbn_dGmTqArbnLkaTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim() \
  (&Rte_GmTqArbn_dGmTqArbnPosnServoSmotngLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_APASmotngHwTqLpFil() \
  (&Rte_GmTqArbn_APASmotngHwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmTqArbn_START_SEC_CODE
# include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmTqArbnInit1 GmTqArbnInit1
#  define RTE_RUNNABLE_GmTqArbnPer1 GmTqArbnPer1
# endif

FUNC(void, GmTqArbn_CODE) GmTqArbnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmTqArbn_CODE) GmTqArbnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmTqArbn_STOP_SEC_CODE
# include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMTQARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
