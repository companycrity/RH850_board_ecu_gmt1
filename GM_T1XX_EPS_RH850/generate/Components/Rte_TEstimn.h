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
 *          File:  Rte_TEstimn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TEstimn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TESTIMN_H
# define _RTE_TESTIMN_H

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

# include "Rte_TEstimn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg3F1BusHiSpd_AmbT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg4D1BusHiSpd_EngOilT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AssiMechT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotFetT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotMagT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotWidgT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_AmbTVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_EngOilTVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AmbT_Val (0.0F)
#  define Rte_InitValue_AmbTVld_Logl (FALSE)
#  define Rte_InitValue_AssiMechT_Val (25.0F)
#  define Rte_InitValue_AssiMechTEstimnDi_Logl (FALSE)
#  define Rte_InitValue_EcuTFild_Val (25.0F)
#  define Rte_InitValue_EngOilT_Val (0.0F)
#  define Rte_InitValue_EngOilTVld_Logl (FALSE)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_MotCurrPeakEstimd_Val (0.0F)
#  define Rte_InitValue_MotFetT_Val (25.0F)
#  define Rte_InitValue_MotMagT_Val (25.0F)
#  define Rte_InitValue_MotWidgT_Val (25.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AmbT_Val Rte_Read_TEstimn_AmbT_Val
#  define Rte_Read_TEstimn_AmbT_Val(data) (*(data) = Rte_GmMsg3F1BusHiSpd_AmbT_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AmbTVld_Logl Rte_Read_TEstimn_AmbTVld_Logl
#  define Rte_Read_TEstimn_AmbTVld_Logl(data) (*(data) = Rte_TEstimn_AmbTVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AssiMechTEstimnDi_Logl Rte_Read_TEstimn_AssiMechTEstimnDi_Logl
#  define Rte_Read_TEstimn_AssiMechTEstimnDi_Logl(data) (*(data) = Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EcuTFild_Val Rte_Read_TEstimn_EcuTFild_Val
#  define Rte_Read_TEstimn_EcuTFild_Val(data) (*(data) = Rte_EcuTMeas_EcuTFild_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EngOilT_Val Rte_Read_TEstimn_EngOilT_Val
#  define Rte_Read_TEstimn_EngOilT_Val(data) (*(data) = Rte_GmMsg4D1BusHiSpd_EngOilT_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EngOilTVld_Logl Rte_Read_TEstimn_EngOilTVld_Logl
#  define Rte_Read_TEstimn_EngOilTVld_Logl(data) (*(data) = Rte_TEstimn_EngOilTVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_TEstimn_HwVel_Val
#  define Rte_Read_TEstimn_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVel_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrPeakEstimd_Val Rte_Read_TEstimn_MotCurrPeakEstimd_Val
#  define Rte_Read_TEstimn_MotCurrPeakEstimd_Val(data) (*(data) = Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AssiMechT_Val Rte_Write_TEstimn_AssiMechT_Val
#  define Rte_Write_TEstimn_AssiMechT_Val(data) (Rte_TEstimn_AssiMechT_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotFetT_Val Rte_Write_TEstimn_MotFetT_Val
#  define Rte_Write_TEstimn_MotFetT_Val(data) (Rte_TEstimn_MotFetT_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotMagT_Val Rte_Write_TEstimn_MotMagT_Val
#  define Rte_Write_TEstimn_MotMagT_Val(data) (Rte_TEstimn_MotMagT_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotWidgT_Val Rte_Write_TEstimn_MotWidgT_Val
#  define Rte_Write_TEstimn_MotWidgT_Val(data) (Rte_TEstimn_MotWidgT_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_TEstimnAmbPwrMplr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAmbPwrMplr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAmbTSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAmbTSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechAmbLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechAmbMplr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechAmbMplr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechCorrLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechCorrLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechDampgSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechDampgSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechDftT_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechDftT_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechLLFilCoeffA1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechLLFilCoeffB0_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechLLFilCoeffB1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnAssiMechSlew_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnAssiMechSlew_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCorrnTAssiMech_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCorrnTAssiMech_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCorrnTCu_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCorrnTCu_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCorrnTMag_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCorrnTMag_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCorrnTSi_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCorrnTSi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCuAmbLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCuAmbLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCuAmbMplr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCuAmbMplr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCuCorrnLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCuCorrnLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCuLLFilCoeffA1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCuLLFilCoeffA1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCuLLFilCoeffB0_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCuLLFilCoeffB0_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnCuLLFilCoeffB1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnCuLLFilCoeffB1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnEngTSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnEngTSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnMagAmbLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnMagAmbMplr_Val() (((P2CONST(Rte_Calprm_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbMplr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnMagCorrnLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagCorrnLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnMagLLFilCoeffA1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagLLFilCoeffA1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnMagLLFilCoeffB0_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagLLFilCoeffB0_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnMagLLFilCoeffB1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagLLFilCoeffB1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnSiAmbLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnSiAmbLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnSiAmbMplr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnSiAmbMplr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnSiCorrnLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnSiCorrnLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnSiLLFilCoeffA1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnSiLLFilCoeffA1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnSiLLFilCoeffB0_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnSiLLFilCoeffB0_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnSiLLFilCoeffB1_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnSiLLFilCoeffB1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_TEstimnWghtAvrgTDi_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnWghtAvrgTDi_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTSlewLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAmbPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechDampgSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnCuCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnCuLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnMagCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnMagLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadAmbT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadEngT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnSiCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnSiLLFilv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnWghtAvrgT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AmbTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTInitEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_EngOilTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_AssiMechTEstimnPrev() \
  (&Rte_TEstimn_AssiMechTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiMechTSlewLimPrev() \
  (&Rte_TEstimn_AssiMechTSlewLimPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CuTEstimnPrev() \
  (&Rte_TEstimn_CuTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MagTEstimnPrev() \
  (&Rte_TEstimn_MagTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SiTEstimnPrev() \
  (&Rte_TEstimn_SiTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnAmbPwr() \
  (&Rte_TEstimn_dTEstimnAmbPwr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnAssiMechCorrn() \
  (&Rte_TEstimn_dTEstimnAssiMechCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnAssiMechDampgSca() \
  (&Rte_TEstimn_dTEstimnAssiMechDampgSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnAssiMechFil() \
  (&Rte_TEstimn_dTEstimnAssiMechFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnAssiMechLLFil() \
  (&Rte_TEstimn_dTEstimnAssiMechLLFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnCuCorrn() \
  (&Rte_TEstimn_dTEstimnCuCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnCuLLFil() \
  (&Rte_TEstimn_dTEstimnCuLLFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnMagCorrn() \
  (&Rte_TEstimn_dTEstimnMagCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnMagLLFil() \
  (&Rte_TEstimn_dTEstimnMagLLFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnScadAmbT() \
  (&Rte_TEstimn_dTEstimnScadAmbT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnScadEngT() \
  (&Rte_TEstimn_dTEstimnScadEngT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnSiCorrn() \
  (&Rte_TEstimn_dTEstimnSiCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnSiLLFilv() \
  (&Rte_TEstimn_dTEstimnSiLLFilv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dTEstimnWghtAvrgT() \
  (&Rte_TEstimn_dTEstimnWghtAvrgT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AmbTVldPrev() \
  (&Rte_TEstimn_AmbTVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiMechTInitEna() \
  (&Rte_TEstimn_AssiMechTInitEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EngOilTVldPrev() \
  (&Rte_TEstimn_EngOilTVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiMechFilLp() \
  (&Rte_TEstimn_AssiMechFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CuFilLp() \
  (&Rte_TEstimn_CuFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MagFilLp() \
  (&Rte_TEstimn_MagFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SiFilLp() \
  (&Rte_TEstimn_SiFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define TEstimn_START_SEC_CODE
# include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_TEstimnInit1 TEstimnInit1
#  define RTE_RUNNABLE_TEstimnPer1 TEstimnPer1
# endif

FUNC(void, TEstimn_CODE) TEstimnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TEstimn_CODE) TEstimnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define TEstimn_STOP_SEC_CODE
# include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TESTIMN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
