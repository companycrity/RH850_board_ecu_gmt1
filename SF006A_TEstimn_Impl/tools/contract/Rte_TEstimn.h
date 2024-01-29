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
 *          File:  Rte_TEstimn.h
 *     SW-C Type:  TEstimn
 *  Generated at:  Fri Sep 25 11:44:01 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TEstimn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TESTIMN_H
# define _RTE_TESTIMN_H

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

# include "Rte_TEstimn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TEstimn
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AmbTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechTInitEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechTSlewLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CuFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CuTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EngOilTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MagFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MagTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SiFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SiTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAmbPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAssiMechCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAssiMechDampgSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAssiMechFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAssiMechLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnCuCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnCuLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnMagCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnMagLLFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnScadAmbT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnScadEngT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnSiCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnSiLLFilv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnWghtAvrgT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TEstimn, RTE_CONST, RTE_CONST) Rte_Inst_TEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TEstimn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AmbT_Val (0.0F)
# define Rte_InitValue_AmbTVld_Logl (FALSE)
# define Rte_InitValue_AssiMechT_Val (25.0F)
# define Rte_InitValue_AssiMechTEstimnDi_Logl (FALSE)
# define Rte_InitValue_EcuTFild_Val (25.0F)
# define Rte_InitValue_EngOilT_Val (0.0F)
# define Rte_InitValue_EngOilTVld_Logl (FALSE)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_MotCurrPeakEstimd_Val (0.0F)
# define Rte_InitValue_MotFetT_Val (25.0F)
# define Rte_InitValue_MotMagT_Val (25.0F)
# define Rte_InitValue_MotWidgT_Val (25.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_AmbT_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_AmbTVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_AssiMechTEstimnDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_EngOilT_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_EngOilTVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_MotCurrPeakEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_AssiMechT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_MotFetT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_MotMagT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_MotWidgT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAmbPwrMplr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAmbTSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechAmbMplr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechCorrLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechDampgSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechDftT_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffA1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB0_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechSlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTAssiMech_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTCu_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTMag_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTSi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuAmbMplr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuCorrnLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffA1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB0_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnEngTSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagAmbMplr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagCorrnLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffA1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB0_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiAmbMplr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiCorrnLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffA1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB0_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_TEstimn_TEstimnWghtAvrgTDi_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AmbT_Val Rte_Read_TEstimn_AmbT_Val
# define Rte_Read_AmbTVld_Logl Rte_Read_TEstimn_AmbTVld_Logl
# define Rte_Read_AssiMechTEstimnDi_Logl Rte_Read_TEstimn_AssiMechTEstimnDi_Logl
# define Rte_Read_EcuTFild_Val Rte_Read_TEstimn_EcuTFild_Val
# define Rte_Read_EngOilT_Val Rte_Read_TEstimn_EngOilT_Val
# define Rte_Read_EngOilTVld_Logl Rte_Read_TEstimn_EngOilTVld_Logl
# define Rte_Read_HwVel_Val Rte_Read_TEstimn_HwVel_Val
# define Rte_Read_MotCurrPeakEstimd_Val Rte_Read_TEstimn_MotCurrPeakEstimd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiMechT_Val Rte_Write_TEstimn_AssiMechT_Val
# define Rte_Write_MotFetT_Val Rte_Write_TEstimn_MotFetT_Val
# define Rte_Write_MotMagT_Val Rte_Write_TEstimn_MotMagT_Val
# define Rte_Write_MotWidgT_Val Rte_Write_TEstimn_MotWidgT_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_TEstimnAmbPwrMplr_Val Rte_Prm_TEstimn_TEstimnAmbPwrMplr_Val

# define Rte_Prm_TEstimnAmbTSca_Val Rte_Prm_TEstimn_TEstimnAmbTSca_Val

# define Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrq_Val

# define Rte_Prm_TEstimnAssiMechAmbMplr_Val Rte_Prm_TEstimn_TEstimnAssiMechAmbMplr_Val

# define Rte_Prm_TEstimnAssiMechCorrLim_Val Rte_Prm_TEstimn_TEstimnAssiMechCorrLim_Val

# define Rte_Prm_TEstimnAssiMechDampgSca_Val Rte_Prm_TEstimn_TEstimnAssiMechDampgSca_Val

# define Rte_Prm_TEstimnAssiMechDftT_Val Rte_Prm_TEstimn_TEstimnAssiMechDftT_Val

# define Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffA1_Val

# define Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB0_Val

# define Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB1_Val

# define Rte_Prm_TEstimnAssiMechSlew_Val Rte_Prm_TEstimn_TEstimnAssiMechSlew_Val

# define Rte_Prm_TEstimnCorrnTAssiMech_Val Rte_Prm_TEstimn_TEstimnCorrnTAssiMech_Val

# define Rte_Prm_TEstimnCorrnTCu_Val Rte_Prm_TEstimn_TEstimnCorrnTCu_Val

# define Rte_Prm_TEstimnCorrnTMag_Val Rte_Prm_TEstimn_TEstimnCorrnTMag_Val

# define Rte_Prm_TEstimnCorrnTSi_Val Rte_Prm_TEstimn_TEstimnCorrnTSi_Val

# define Rte_Prm_TEstimnCuAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrq_Val

# define Rte_Prm_TEstimnCuAmbMplr_Val Rte_Prm_TEstimn_TEstimnCuAmbMplr_Val

# define Rte_Prm_TEstimnCuCorrnLim_Val Rte_Prm_TEstimn_TEstimnCuCorrnLim_Val

# define Rte_Prm_TEstimnCuLLFilCoeffA1_Val Rte_Prm_TEstimn_TEstimnCuLLFilCoeffA1_Val

# define Rte_Prm_TEstimnCuLLFilCoeffB0_Val Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB0_Val

# define Rte_Prm_TEstimnCuLLFilCoeffB1_Val Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB1_Val

# define Rte_Prm_TEstimnEngTSca_Val Rte_Prm_TEstimn_TEstimnEngTSca_Val

# define Rte_Prm_TEstimnMagAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrq_Val

# define Rte_Prm_TEstimnMagAmbMplr_Val Rte_Prm_TEstimn_TEstimnMagAmbMplr_Val

# define Rte_Prm_TEstimnMagCorrnLim_Val Rte_Prm_TEstimn_TEstimnMagCorrnLim_Val

# define Rte_Prm_TEstimnMagLLFilCoeffA1_Val Rte_Prm_TEstimn_TEstimnMagLLFilCoeffA1_Val

# define Rte_Prm_TEstimnMagLLFilCoeffB0_Val Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB0_Val

# define Rte_Prm_TEstimnMagLLFilCoeffB1_Val Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB1_Val

# define Rte_Prm_TEstimnSiAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrq_Val

# define Rte_Prm_TEstimnSiAmbMplr_Val Rte_Prm_TEstimn_TEstimnSiAmbMplr_Val

# define Rte_Prm_TEstimnSiCorrnLim_Val Rte_Prm_TEstimn_TEstimnSiCorrnLim_Val

# define Rte_Prm_TEstimnSiLLFilCoeffA1_Val Rte_Prm_TEstimn_TEstimnSiLLFilCoeffA1_Val

# define Rte_Prm_TEstimnSiLLFilCoeffB0_Val Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB0_Val

# define Rte_Prm_TEstimnSiLLFilCoeffB1_Val Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB1_Val

# define Rte_Prm_TEstimnWghtAvrgTDi_Logl Rte_Prm_TEstimn_TEstimnWghtAvrgTDi_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AssiMechTEstimnPrev() (Rte_Inst_TEstimn->Pim_AssiMechTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiMechTSlewLimPrev() (Rte_Inst_TEstimn->Pim_AssiMechTSlewLimPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CuTEstimnPrev() (Rte_Inst_TEstimn->Pim_CuTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MagTEstimnPrev() (Rte_Inst_TEstimn->Pim_MagTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SiTEstimnPrev() (Rte_Inst_TEstimn->Pim_SiTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAmbPwr() (Rte_Inst_TEstimn->Pim_dTEstimnAmbPwr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAssiMechCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnAssiMechCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAssiMechDampgSca() (Rte_Inst_TEstimn->Pim_dTEstimnAssiMechDampgSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAssiMechFil() (Rte_Inst_TEstimn->Pim_dTEstimnAssiMechFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAssiMechLLFil() (Rte_Inst_TEstimn->Pim_dTEstimnAssiMechLLFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnCuCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnCuCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnCuLLFil() (Rte_Inst_TEstimn->Pim_dTEstimnCuLLFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnMagCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnMagCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnMagLLFil() (Rte_Inst_TEstimn->Pim_dTEstimnMagLLFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnScadAmbT() (Rte_Inst_TEstimn->Pim_dTEstimnScadAmbT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnScadEngT() (Rte_Inst_TEstimn->Pim_dTEstimnScadEngT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnSiCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnSiCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnSiLLFilv() (Rte_Inst_TEstimn->Pim_dTEstimnSiLLFilv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnWghtAvrgT() (Rte_Inst_TEstimn->Pim_dTEstimnWghtAvrgT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AmbTVldPrev() (Rte_Inst_TEstimn->Pim_AmbTVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiMechTInitEna() (Rte_Inst_TEstimn->Pim_AssiMechTInitEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EngOilTVldPrev() (Rte_Inst_TEstimn->Pim_EngOilTVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiMechFilLp() (Rte_Inst_TEstimn->Pim_AssiMechFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CuFilLp() (Rte_Inst_TEstimn->Pim_CuFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MagFilLp() (Rte_Inst_TEstimn->Pim_MagFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SiFilLp() (Rte_Inst_TEstimn->Pim_SiFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AssiMechTEstimnPrev(void)
 *   float32 *Rte_Pim_AssiMechTSlewLimPrev(void)
 *   float32 *Rte_Pim_CuTEstimnPrev(void)
 *   float32 *Rte_Pim_MagTEstimnPrev(void)
 *   float32 *Rte_Pim_SiTEstimnPrev(void)
 *   float32 *Rte_Pim_dTEstimnAmbPwr(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechCorrn(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechDampgSca(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechFil(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechLLFil(void)
 *   float32 *Rte_Pim_dTEstimnCuCorrn(void)
 *   float32 *Rte_Pim_dTEstimnCuLLFil(void)
 *   float32 *Rte_Pim_dTEstimnMagCorrn(void)
 *   float32 *Rte_Pim_dTEstimnMagLLFil(void)
 *   float32 *Rte_Pim_dTEstimnScadAmbT(void)
 *   float32 *Rte_Pim_dTEstimnScadEngT(void)
 *   float32 *Rte_Pim_dTEstimnSiCorrn(void)
 *   float32 *Rte_Pim_dTEstimnSiLLFilv(void)
 *   float32 *Rte_Pim_dTEstimnWghtAvrgT(void)
 *   boolean *Rte_Pim_AmbTVldPrev(void)
 *   boolean *Rte_Pim_AssiMechTInitEna(void)
 *   boolean *Rte_Pim_EngOilTVldPrev(void)
 *   FilLpRec1 *Rte_Pim_AssiMechFilLp(void)
 *   FilLpRec1 *Rte_Pim_CuFilLp(void)
 *   FilLpRec1 *Rte_Pim_MagFilLp(void)
 *   FilLpRec1 *Rte_Pim_SiFilLp(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TEstimnAmbPwrMplr_Val(void)
 *   float32 Rte_Prm_TEstimnAmbTSca_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechCorrLim_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechDampgSca_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechDftT_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechSlew_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTAssiMech_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTCu_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTMag_Val(void)
 *   float32 Rte_Prm_TEstimnCorrnTSi_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnCuCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnCuLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnEngTSca_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnMagCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnMagLLFilCoeffB1_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbMplr_Val(void)
 *   float32 Rte_Prm_TEstimnSiCorrnLim_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffA1_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffB0_Val(void)
 *   float32 Rte_Prm_TEstimnSiLLFilCoeffB1_Val(void)
 *   boolean Rte_Prm_TEstimnWghtAvrgTDi_Logl(void)
 *
 *********************************************************************************************************************/


# define TEstimn_START_SEC_CODE
# include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: TEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TEstimnInit1 TEstimnInit1
FUNC(void, TEstimn_CODE) TEstimnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TEstimnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_AssiMechTEstimnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TEstimnPer1 TEstimnPer1
FUNC(void, TEstimn_CODE) TEstimnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TEstimn_STOP_SEC_CODE
# include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1443187454
#    error "The magic number of the generated file <C:/component/SF006A_TEstimn_Impl/tools/contract/Rte_TEstimn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1443187454
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TESTIMN_H */
