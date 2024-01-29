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
 *          File:  Rte_AssiPahFwl.h
 *     SW-C Type:  AssiPahFwl
 *  Generated at:  Tue Feb  9 14:25:39 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AssiPahFwl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSIPAHFWL_H
# define _RTE_ASSIPAHFWL_H

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

# include "Rte_AssiPahFwl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_AssiPahFwl
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiPrfmncPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CombdAssiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FwlActvLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HiFrqCmdLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LowrLimLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_UpprLimLpFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlActvRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlBasAssiCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlBasAssiLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlBasAssiLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlBasAssiUpprLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlHiFrqAssiLowrLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlHiFrqAssiUpprLimFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlHiFrqCmdHpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlHiFrqCmdLpPah; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlHiFrqCmdOverLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlHiFrqLpLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiPahFwlSumInp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_AssiPahFwl, RTE_CONST, RTE_CONST) Rte_Inst_AssiPahFwl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_AssiPahFwl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmdBas_Val (0.0F)
# define Rte_InitValue_AssiCmdSum_Val (0.0F)
# define Rte_InitValue_AssiHiFrqCmd_Val (0.0F)
# define Rte_InitValue_AssiLnrGainEna_Logl (FALSE)
# define Rte_InitValue_AssiPahLimrActv_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqOvrl_Val (0.0F)
# define Rte_InitValue_HysCmpCmd_Val (0.0F)
# define Rte_InitValue_MfgEnaSt_Val (0U)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_AssiCmdBas_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_AssiHiFrqCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_AssiLnrGainEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_HwTqOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_HysCmpCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_MfgEnaSt_Val(P2VAR(MfgEnaSt1, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiPahFwl_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiPahFwl_AssiCmdSum_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiPahFwl_AssiPahLimrActv_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiPahFwl_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_ASSIPAHFWL_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiPahFwl_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlCmdSplitLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlFwlActvLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlHysCmpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlRestoreThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiPahFwl_BasAssiPahFwlOverLimDiagcFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiPahFwl_BasAssiPahFwlOverLimDiagcPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiPahFwl_HiFrqAssiPahFwlOverLimDiagcFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiPahFwl_HiFrqAssiPahFwlOverLimDiagcPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlDiRcvr_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlDftAssiX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlDftAssiX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlDftAssiY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s4p11_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlDftAssiY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlHiFrqUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s4p11_12_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlHiFrqUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlUpprLimX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s4p11_12_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlUpprLimX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s4p11_12_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlUpprLimY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiPahFwl_AssiPahFwlVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmdBas_Val Rte_Read_AssiPahFwl_AssiCmdBas_Val
# define Rte_Read_AssiHiFrqCmd_Val Rte_Read_AssiPahFwl_AssiHiFrqCmd_Val
# define Rte_Read_AssiLnrGainEna_Logl Rte_Read_AssiPahFwl_AssiLnrGainEna_Logl
# define Rte_Read_HwTq_Val Rte_Read_AssiPahFwl_HwTq_Val
# define Rte_Read_HwTqOvrl_Val Rte_Read_AssiPahFwl_HwTqOvrl_Val
# define Rte_Read_HysCmpCmd_Val Rte_Read_AssiPahFwl_HysCmpCmd_Val
# define Rte_Read_MfgEnaSt_Val Rte_Read_AssiPahFwl_MfgEnaSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_AssiPahFwl_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiCmdSum_Val Rte_Write_AssiPahFwl_AssiCmdSum_Val
# define Rte_Write_AssiPahLimrActv_Val Rte_Write_AssiPahFwl_AssiPahLimrActv_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_AssiPahFwl_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_AssiPahFwl_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val Rte_Prm_AssiPahFwl_AssiPahFwlCmdSplitLpFilFrq_Val

# define Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val Rte_Prm_AssiPahFwl_AssiPahFwlFwlActvLpFilFrq_Val

# define Rte_Prm_AssiPahFwlHysCmpLim_Val Rte_Prm_AssiPahFwl_AssiPahFwlHysCmpLim_Val

# define Rte_Prm_AssiPahFwlRestoreThd_Val Rte_Prm_AssiPahFwl_AssiPahFwlRestoreThd_Val

# define Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val Rte_Prm_AssiPahFwl_BasAssiPahFwlOverLimDiagcFailStep_Val

# define Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val Rte_Prm_AssiPahFwl_BasAssiPahFwlOverLimDiagcPassStep_Val

# define Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val Rte_Prm_AssiPahFwl_HiFrqAssiPahFwlOverLimDiagcFailStep_Val

# define Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val Rte_Prm_AssiPahFwl_HiFrqAssiPahFwlOverLimDiagcPassStep_Val

# define Rte_Prm_AssiPahFwlDiRcvr_Logl Rte_Prm_AssiPahFwl_AssiPahFwlDiRcvr_Logl

# define Rte_Prm_AssiPahFwlDftAssiX_Ary1D Rte_Prm_AssiPahFwl_AssiPahFwlDftAssiX_Ary1D

# define Rte_Prm_AssiPahFwlDftAssiY_Ary1D Rte_Prm_AssiPahFwl_AssiPahFwlDftAssiY_Ary1D

# define Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D Rte_Prm_AssiPahFwl_AssiPahFwlHiFrqUpprLimY_Ary2D

# define Rte_Prm_AssiPahFwlUpprLimX_Ary2D Rte_Prm_AssiPahFwl_AssiPahFwlUpprLimX_Ary2D

# define Rte_Prm_AssiPahFwlUpprLimY_Ary2D Rte_Prm_AssiPahFwl_AssiPahFwlUpprLimY_Ary2D

# define Rte_Prm_AssiPahFwlVehSpd_Ary1D Rte_Prm_AssiPahFwl_AssiPahFwlVehSpd_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CombdAssiPrev() (Rte_Inst_AssiPahFwl->Pim_CombdAssiPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlActvRaw() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlActvRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlBasAssiLimd() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlBasAssiLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlBasAssiLowrLim() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlBasAssiLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlBasAssiUpprLim() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlBasAssiUpprLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlHiFrqAssiLowrLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlHiFrqAssiUpprLimFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlHiFrqCmdHpPah() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlHiFrqCmdHpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlHiFrqCmdLpPah() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlHiFrqCmdLpPah) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlHiFrqLpLimd() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlHiFrqLpLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlSumInp() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlSumInp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiPrfmncPrev() (Rte_Inst_AssiPahFwl->Pim_AssiPrfmncPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlBasAssiCmdOverLim() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlBasAssiCmdOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiPahFwlHiFrqCmdOverLim() (Rte_Inst_AssiPahFwl->Pim_dAssiPahFwlHiFrqCmdOverLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FwlActvLpFilStVari() (Rte_Inst_AssiPahFwl->Pim_FwlActvLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HiFrqCmdLpFilStVari() (Rte_Inst_AssiPahFwl->Pim_HiFrqCmdLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LowrLimLpFilStVari() (Rte_Inst_AssiPahFwl->Pim_LowrLimLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_UpprLimLpFilStVari() (Rte_Inst_AssiPahFwl->Pim_UpprLimLpFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_CombdAssiPrev(void)
 *   float32 *Rte_Pim_dAssiPahFwlActvRaw(void)
 *   float32 *Rte_Pim_dAssiPahFwlBasAssiLimd(void)
 *   float32 *Rte_Pim_dAssiPahFwlBasAssiLowrLim(void)
 *   float32 *Rte_Pim_dAssiPahFwlBasAssiUpprLim(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqCmdHpPah(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqCmdLpPah(void)
 *   float32 *Rte_Pim_dAssiPahFwlHiFrqLpLimd(void)
 *   float32 *Rte_Pim_dAssiPahFwlSumInp(void)
 *   boolean *Rte_Pim_AssiPrfmncPrev(void)
 *   boolean *Rte_Pim_dAssiPahFwlBasAssiCmdOverLim(void)
 *   boolean *Rte_Pim_dAssiPahFwlHiFrqCmdOverLim(void)
 *   FilLpRec1 *Rte_Pim_FwlActvLpFilStVari(void)
 *   FilLpRec1 *Rte_Pim_HiFrqCmdLpFilStVari(void)
 *   FilLpRec1 *Rte_Pim_LowrLimLpFilStVari(void)
 *   FilLpRec1 *Rte_Pim_UpprLimLpFilStVari(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val(void)
 *   float32 Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val(void)
 *   float32 Rte_Prm_AssiPahFwlHysCmpLim_Val(void)
 *   float32 Rte_Prm_AssiPahFwlRestoreThd_Val(void)
 *   uint16 Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val(void)
 *   uint16 Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val(void)
 *   uint16 Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val(void)
 *   uint16 Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val(void)
 *   boolean Rte_Prm_AssiPahFwlDiRcvr_Logl(void)
 *   u8p8 *Rte_Prm_AssiPahFwlDftAssiX_Ary1D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlDftAssiY_Ary1D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlUpprLimX_Ary2D(void)
 *   s4p11 *Rte_Prm_AssiPahFwlUpprLimY_Ary2D(void)
 *   u9p7 *Rte_Prm_AssiPahFwlVehSpd_Ary1D(void)
 *
 *********************************************************************************************************************/


# define AssiPahFwl_START_SEC_CODE
# include "AssiPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPahFwlInit1
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

# define RTE_RUNNABLE_AssiPahFwlInit1 AssiPahFwlInit1
FUNC(void, AssiPahFwl_CODE) AssiPahFwlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPahFwlPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiHiFrqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiLnrGainEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HysCmpCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdSum_Val(float32 data)
 *   Std_ReturnType Rte_Write_AssiPahLimrActv_Val(float32 data)
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

# define RTE_RUNNABLE_AssiPahFwlPer1 AssiPahFwlPer1
FUNC(void, AssiPahFwl_CODE) AssiPahFwlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define AssiPahFwl_STOP_SEC_CODE
# include "AssiPahFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1455043830
#    error "The magic number of the generated file <C:/component/SF034A_AssiPahFwl_Impl/tools/contract/Rte_AssiPahFwl.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455043830
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_ASSIPAHFWL_H */
