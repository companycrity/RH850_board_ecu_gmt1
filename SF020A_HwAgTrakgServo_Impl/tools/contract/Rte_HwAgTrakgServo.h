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
 *          File:  Rte_HwAgTrakgServo.h
 *     SW-C Type:  HwAgTrakgServo
 *  Generated at:  Wed Aug 17 16:26:34 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgTrakgServo> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGTRAKGSERVO_H
# define _RTE_HWAGTRAKGSERVO_H

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

# include "Rte_HwAgTrakgServo_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAgTrakgServo
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DftlTermLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgTarRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevDftlErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAgTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevIntglErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSmotng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoDftlTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoHwAgTarFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoIntglTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoPidCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoPropTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoRampCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoRtnScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgTrakgServoSmotngEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAgTrakgServo, RTE_CONST, RTE_CONST) Rte_Inst_HwAgTrakgServo; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAgTrakgServo, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgTrakgServoCmd_Val (0.0F)
# define Rte_InitValue_HwAgTrakgServoEna_Logl (FALSE)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotTqServoCmd_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrakgServo_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrakgServo_HwAgTrakgServoCmd_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrakgServo_HwAgTrakgServoEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrakgServo_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrakgServo_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrakgServo_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgTrakgServo_MotTqServoCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDftlTermLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoEnaRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoExecRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoHwAgLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoHwTqLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxRamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMinRamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPidLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoRampCmpl_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDampgTqX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDampgTqX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDampgTqY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u4p12_3_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDampgTqY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDftlGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u0p16_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDftlGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDiRateX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDiRateX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u7p9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDiRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u7p9_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDiRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoHwAgRateLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoHwAgRateLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoIntglGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoIntglGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxCmdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxCmdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxCmdY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxCmdY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPropGainX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u12p4_7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPropGainX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPropGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u10p6_3_7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPropGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoSmotngX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoSmotngX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoSmotngY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoSmotngY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoVehSpdBasd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAgTrakgServo_HwAgTrakgServoVehSpdBasd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_HwAgTrakgServo_HwAg_Val
# define Rte_Read_HwAgTrakgServoCmd_Val Rte_Read_HwAgTrakgServo_HwAgTrakgServoCmd_Val
# define Rte_Read_HwAgTrakgServoEna_Logl Rte_Read_HwAgTrakgServo_HwAgTrakgServoEna_Logl
# define Rte_Read_HwTq_Val Rte_Read_HwAgTrakgServo_HwTq_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_HwAgTrakgServo_MotVelCrf_Val
# define Rte_Read_VehSpd_Val Rte_Read_HwAgTrakgServo_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotTqServoCmd_Val Rte_Write_HwAgTrakgServo_MotTqServoCmd_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDftlTermLpFilFrq_Val

# define Rte_Prm_HwAgTrakgServoEnaRate_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoEnaRate_Val

# define Rte_Prm_HwAgTrakgServoExecRate_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoExecRate_Val

# define Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoHwAgLpFilFrq_Val

# define Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoHwTqLpFilFrq_Val

# define Rte_Prm_HwAgTrakgServoMaxRamp_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxRamp_Val

# define Rte_Prm_HwAgTrakgServoMinRamp_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMinRamp_Val

# define Rte_Prm_HwAgTrakgServoPidLim_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPidLim_Val

# define Rte_Prm_HwAgTrakgServoRampCmpl_Val Rte_Prm_HwAgTrakgServo_HwAgTrakgServoRampCmpl_Val

# define Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDampgTqX_Ary1D

# define Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDampgTqY_Ary2D

# define Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDftlGainY_Ary1D

# define Rte_Prm_HwAgTrakgServoDiRateX_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDiRateX_Ary1D

# define Rte_Prm_HwAgTrakgServoDiRateY_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoDiRateY_Ary1D

# define Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoHwAgRateLim_Ary1D

# define Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoIntglGainY_Ary1D

# define Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D

# define Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxCmdX_Ary1D

# define Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoMaxCmdY_Ary1D

# define Rte_Prm_HwAgTrakgServoPropGainX_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPropGainX_Ary1D

# define Rte_Prm_HwAgTrakgServoPropGainY_Ary2D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoPropGainY_Ary2D

# define Rte_Prm_HwAgTrakgServoSmotngX_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoSmotngX_Ary1D

# define Rte_Prm_HwAgTrakgServoSmotngY_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoSmotngY_Ary1D

# define Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D Rte_Prm_HwAgTrakgServo_HwAgTrakgServoVehSpdBasd_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAgTarRateLim() (Rte_Inst_HwAgTrakgServo->Pim_HwAgTarRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevDftlErr() (Rte_Inst_HwAgTrakgServo->Pim_PrevDftlErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAgTar() (Rte_Inst_HwAgTrakgServo->Pim_PrevHwAgTar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevIntglErr() (Rte_Inst_HwAgTrakgServo->Pim_PrevIntglErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSmotng() (Rte_Inst_HwAgTrakgServo->Pim_PrevSmotng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoDftlTerm() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoDftlTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoHwAgTarFild() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoHwAgTarFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoIntglTerm() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoIntglTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoPidCmd() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoPidCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoPropTerm() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoPropTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoRtnScaFac() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoRtnScaFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoSmotngEna() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoSmotngEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgTrakgServoRampCmpl() (Rte_Inst_HwAgTrakgServo->Pim_dHwAgTrakgServoRampCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DftlTermLpFil() (Rte_Inst_HwAgTrakgServo->Pim_DftlTermLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLpFil() (Rte_Inst_HwAgTrakgServo->Pim_HwAgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLpFil() (Rte_Inst_HwAgTrakgServo->Pim_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgTarRateLim(void)
 *   float32 *Rte_Pim_PrevDftlErr(void)
 *   float32 *Rte_Pim_PrevHwAgTar(void)
 *   float32 *Rte_Pim_PrevIntglErr(void)
 *   float32 *Rte_Pim_PrevSmotng(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoDftlTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoHwAgTarFild(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoIntglTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoPidCmd(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoPropTerm(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoRtnScaFac(void)
 *   float32 *Rte_Pim_dHwAgTrakgServoSmotngEna(void)
 *   boolean *Rte_Pim_dHwAgTrakgServoRampCmpl(void)
 *   FilLpRec1 *Rte_Pim_DftlTermLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgTrakgServoDftlTermLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoEnaRate_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoExecRate_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoHwAgLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoMaxRamp_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoMinRamp_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoPidLim_Val(void)
 *   float32 Rte_Prm_HwAgTrakgServoRampCmpl_Val(void)
 *   u11p5 *Rte_Prm_HwAgTrakgServoDampgTqX_Ary1D(void)
 *   u4p12 *Rte_Prm_HwAgTrakgServoDampgTqY_Ary2D(void)
 *   u0p16 *Rte_Prm_HwAgTrakgServoDftlGainY_Ary1D(void)
 *   u4p12 *Rte_Prm_HwAgTrakgServoDiRateX_Ary1D(void)
 *   u7p9 *Rte_Prm_HwAgTrakgServoDiRateY_Ary1D(void)
 *   u10p6 *Rte_Prm_HwAgTrakgServoHwAgRateLim_Ary1D(void)
 *   u2p14 *Rte_Prm_HwAgTrakgServoIntglGainY_Ary1D(void)
 *   u10p6 *Rte_Prm_HwAgTrakgServoIntglTermAntiWdupLimY_Ary1D(void)
 *   u8p8 *Rte_Prm_HwAgTrakgServoMaxCmdX_Ary1D(void)
 *   u4p12 *Rte_Prm_HwAgTrakgServoMaxCmdY_Ary1D(void)
 *   u12p4 *Rte_Prm_HwAgTrakgServoPropGainX_Ary1D(void)
 *   u10p6 *Rte_Prm_HwAgTrakgServoPropGainY_Ary2D(void)
 *   u1p15 *Rte_Prm_HwAgTrakgServoSmotngX_Ary1D(void)
 *   u1p15 *Rte_Prm_HwAgTrakgServoSmotngY_Ary1D(void)
 *   u9p7 *Rte_Prm_HwAgTrakgServoVehSpdBasd_Ary1D(void)
 *
 *********************************************************************************************************************/


# define HwAgTrakgServo_START_SEC_CODE
# include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrakgServoInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgTrakgServoInit1 HwAgTrakgServoInit1
FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrakgServoPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrakgServoCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrakgServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqServoCmd_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgTrakgServoPer1 HwAgTrakgServoPer1
FUNC(void, HwAgTrakgServo_CODE) HwAgTrakgServoPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgTrakgServo_STOP_SEC_CODE
# include "HwAgTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1471468612
#    error "The magic number of the generated file <C:/Component/SF020A_HwAgTrakgServo_Impl/tools/contract/Rte_HwAgTrakgServo.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1471468612
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAGTRAKGSERVO_H */
