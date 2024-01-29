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
 *          File:  Rte_DampgPahFwl.h
 *     SW-C Type:  DampgPahFwl
 *  Generated at:  Thu Feb 11 17:25:44 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DampgPahFwl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DAMPGPAHFWL_H
# define _RTE_DAMPGPAHFWL_H

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

# include "Rte_DampgPahFwl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DampgPahFwl
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DampgCmdLpFilLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DampgCmdLpFilUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DampgDecPrfmncPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FwlActvLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InertiaCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InertiaCmpLpFilLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InertiaCmpLpFilUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlActvRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlAddDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlDampgCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlDampgCmdLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlDampgCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlDampgCmdUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlInertiaCmpHpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlInertiaCmpLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlInertiaCmpLpLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlInertiaCmpLpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlInertiaCmpOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgPahFwlInertiaCmpUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DampgPahFwl, RTE_CONST, RTE_CONST) Rte_Inst_DampgPahFwl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DampgPahFwl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiPahLimrActv_Val (0.0F)
# define Rte_InitValue_DampgCmd_Val (0.0F)
# define Rte_InitValue_DampgCmdBas_Val (0.0F)
# define Rte_InitValue_DampgCmdBasDi_Logl (FALSE)
# define Rte_InitValue_InertiaCmpVelCmd_Val (0.0F)
# define Rte_InitValue_MfgEnaSt_Val (0U)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DampgPahFwl_AssiPahLimrActv_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DampgPahFwl_DampgCmdBas_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DampgPahFwl_DampgCmdBasDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DampgPahFwl_InertiaCmpVelCmd_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DampgPahFwl_MfgEnaSt_Val(P2VAR(MfgEnaSt1, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DampgPahFwl_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DampgPahFwl_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DampgPahFwl_DampgCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DampgPahFwl_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DAMPGPAHFWL_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DampgPahFwl_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlActvFwlLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlAssiAddlDampgX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlAssiAddlDampgX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlAssiAddlDampgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlAssiAddlDampgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdAddlDampgX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdAddlDampgX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdAddlDampgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdAddlDampgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s11p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdUpprLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s11p4_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdUpprLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s7p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s7p8_12_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDftDampgX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDftDampgX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDftDampgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlDftDampgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s11p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpUpprLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s11p4_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpUpprLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s7p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s7p8_12_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DampgPahFwl_DampgPahFwlVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiPahLimrActv_Val Rte_Read_DampgPahFwl_AssiPahLimrActv_Val
# define Rte_Read_DampgCmdBas_Val Rte_Read_DampgPahFwl_DampgCmdBas_Val
# define Rte_Read_DampgCmdBasDi_Logl Rte_Read_DampgPahFwl_DampgCmdBasDi_Logl
# define Rte_Read_InertiaCmpVelCmd_Val Rte_Read_DampgPahFwl_InertiaCmpVelCmd_Val
# define Rte_Read_MfgEnaSt_Val Rte_Read_DampgPahFwl_MfgEnaSt_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_DampgPahFwl_MotVelCrf_Val
# define Rte_Read_VehSpd_Val Rte_Read_DampgPahFwl_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_DampgCmd_Val Rte_Write_DampgPahFwl_DampgCmd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_DampgPahFwl_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_DampgPahFwl_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_DampgPahFwlActvFwlLpFilFrq_Val Rte_Prm_DampgPahFwl_DampgPahFwlActvFwlLpFilFrq_Val

# define Rte_Prm_DampgPahFwlDampgCmdLpFilFrq_Val Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdLpFilFrq_Val

# define Rte_Prm_DampgPahFwlInertiaCmpLpFilFrq_Val Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpLpFilFrq_Val

# define Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val

# define Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val

# define Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val

# define Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val

# define Rte_Prm_DampgPahFwlAssiAddlDampgX_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlAssiAddlDampgX_Ary1D

# define Rte_Prm_DampgPahFwlAssiAddlDampgY_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlAssiAddlDampgY_Ary1D

# define Rte_Prm_DampgPahFwlDampgCmdAddlDampgX_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdAddlDampgX_Ary1D

# define Rte_Prm_DampgPahFwlDampgCmdAddlDampgY_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdAddlDampgY_Ary1D

# define Rte_Prm_DampgPahFwlDampgCmdUpprLimX_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdUpprLimX_Ary1D

# define Rte_Prm_DampgPahFwlDampgCmdUpprLimY_Ary2D Rte_Prm_DampgPahFwl_DampgPahFwlDampgCmdUpprLimY_Ary2D

# define Rte_Prm_DampgPahFwlDftDampgX_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlDftDampgX_Ary1D

# define Rte_Prm_DampgPahFwlDftDampgY_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlDftDampgY_Ary1D

# define Rte_Prm_DampgPahFwlInertiaCmpUpprLimX_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpUpprLimX_Ary1D

# define Rte_Prm_DampgPahFwlInertiaCmpUpprLimY_Ary2D Rte_Prm_DampgPahFwl_DampgPahFwlInertiaCmpUpprLimY_Ary2D

# define Rte_Prm_DampgPahFwlVehSpd_Ary1D Rte_Prm_DampgPahFwl_DampgPahFwlVehSpd_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dDampgPahFwlActvRaw() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlActvRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlAddDampg() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlAddDampg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlDampgCmdLimd() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlDampgCmdLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlDampgCmdLowrLimFild() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlDampgCmdLowrLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlDampgCmdUpprLimFild() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlDampgCmdUpprLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlInertiaCmpHpPah() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlInertiaCmpHpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlInertiaCmpLowrLimFild() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlInertiaCmpLowrLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlInertiaCmpLpLimd() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlInertiaCmpLpLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlInertiaCmpLpPah() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlInertiaCmpLpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlInertiaCmpUpprLimFild() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlInertiaCmpUpprLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DampgDecPrfmncPrev() (Rte_Inst_DampgPahFwl->Pim_DampgDecPrfmncPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlDampgCmdOverLim() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlDampgCmdOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgPahFwlInertiaCmpOverLim() (Rte_Inst_DampgPahFwl->Pim_dDampgPahFwlInertiaCmpOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DampgCmdLpFilLowrLim() (Rte_Inst_DampgPahFwl->Pim_DampgCmdLpFilLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DampgCmdLpFilUpprLim() (Rte_Inst_DampgPahFwl->Pim_DampgCmdLpFilUpprLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FwlActvLpFil() (Rte_Inst_DampgPahFwl->Pim_FwlActvLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InertiaCmpLpFil() (Rte_Inst_DampgPahFwl->Pim_InertiaCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InertiaCmpLpFilLowrLim() (Rte_Inst_DampgPahFwl->Pim_InertiaCmpLpFilLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InertiaCmpLpFilUpprLim() (Rte_Inst_DampgPahFwl->Pim_InertiaCmpLpFilUpprLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dDampgPahFwlActvRaw(void)
 *   float32 *Rte_Pim_dDampgPahFwlAddDampg(void)
 *   float32 *Rte_Pim_dDampgPahFwlDampgCmdLimd(void)
 *   float32 *Rte_Pim_dDampgPahFwlDampgCmdLowrLimFild(void)
 *   float32 *Rte_Pim_dDampgPahFwlDampgCmdUpprLimFild(void)
 *   float32 *Rte_Pim_dDampgPahFwlInertiaCmpHpPah(void)
 *   float32 *Rte_Pim_dDampgPahFwlInertiaCmpLowrLimFild(void)
 *   float32 *Rte_Pim_dDampgPahFwlInertiaCmpLpLimd(void)
 *   float32 *Rte_Pim_dDampgPahFwlInertiaCmpLpPah(void)
 *   float32 *Rte_Pim_dDampgPahFwlInertiaCmpUpprLimFild(void)
 *   boolean *Rte_Pim_DampgDecPrfmncPrev(void)
 *   boolean *Rte_Pim_dDampgPahFwlDampgCmdOverLim(void)
 *   boolean *Rte_Pim_dDampgPahFwlInertiaCmpOverLim(void)
 *   FilLpRec1 *Rte_Pim_DampgCmdLpFilLowrLim(void)
 *   FilLpRec1 *Rte_Pim_DampgCmdLpFilUpprLim(void)
 *   FilLpRec1 *Rte_Pim_FwlActvLpFil(void)
 *   FilLpRec1 *Rte_Pim_InertiaCmpLpFil(void)
 *   FilLpRec1 *Rte_Pim_InertiaCmpLpFilLowrLim(void)
 *   FilLpRec1 *Rte_Pim_InertiaCmpLpFilUpprLim(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DampgPahFwlActvFwlLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgPahFwlDampgCmdLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgPahFwlInertiaCmpLpFilFrq_Val(void)
 *   uint16 Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val(void)
 *   uint16 Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val(void)
 *   uint16 Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val(void)
 *   uint16 Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val(void)
 *   u11p5 *Rte_Prm_DampgPahFwlAssiAddlDampgX_Ary1D(void)
 *   u5p11 *Rte_Prm_DampgPahFwlAssiAddlDampgY_Ary1D(void)
 *   u11p5 *Rte_Prm_DampgPahFwlDampgCmdAddlDampgX_Ary1D(void)
 *   u5p11 *Rte_Prm_DampgPahFwlDampgCmdAddlDampgY_Ary1D(void)
 *   s11p4 *Rte_Prm_DampgPahFwlDampgCmdUpprLimX_Ary1D(void)
 *   s7p8 *Rte_Prm_DampgPahFwlDampgCmdUpprLimY_Ary2D(void)
 *   u11p5 *Rte_Prm_DampgPahFwlDftDampgX_Ary1D(void)
 *   u5p11 *Rte_Prm_DampgPahFwlDftDampgY_Ary1D(void)
 *   s11p4 *Rte_Prm_DampgPahFwlInertiaCmpUpprLimX_Ary1D(void)
 *   s7p8 *Rte_Prm_DampgPahFwlInertiaCmpUpprLimY_Ary2D(void)
 *   u9p7 *Rte_Prm_DampgPahFwlVehSpd_Ary1D(void)
 *
 *********************************************************************************************************************/


# define DampgPahFwl_START_SEC_CODE
# include "DampgPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgPahFwlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DampgPahFwlInit1 DampgPahFwlInit1
FUNC(void, DampgPahFwl_CODE) DampgPahFwlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgPahFwlPer1
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
 *   Std_ReturnType Rte_Read_AssiPahLimrActv_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmdBasDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_InertiaCmpVelCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DampgCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DampgPahFwlPer1 DampgPahFwlPer1
FUNC(void, DampgPahFwl_CODE) DampgPahFwlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DampgPahFwl_STOP_SEC_CODE
# include "DampgPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1455232186
#    error "The magic number of the generated file <C:/Component/SF035A_DampgPahFwl_Impl/tools/contract/Rte_DampgPahFwl.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455232186
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_DAMPGPAHFWL_H */
