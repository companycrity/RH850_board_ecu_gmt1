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
 *          File:  Rte_MotDrvDiagc.h
 *     SW-C Type:  MotDrvDiagc
 *  Generated at:  Tue Apr 19 13:50:43 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotDrvDiagc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTDRVDIAGC_H
# define _RTE_MOTDRVDIAGC_H

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

# include "Rte_MotDrvDiagc_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotDrvDiagc
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaAFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaBFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaCFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaDFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaEFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaFFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaOnTiSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaOnTiSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDrvDiagcPhaOnTiSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_UnitDly; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotDrvDiagc, RTE_CONST, RTE_CONST) Rte_Inst_MotDrvDiagc; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotDrvDiagc, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
# define Rte_InitValue_MotDrvErrA_Val (0.0F)
# define Rte_InitValue_MotDrvErrB_Val (0.0F)
# define Rte_InitValue_MotDrvErrC_Val (0.0F)
# define Rte_InitValue_MotDrvErrD_Val (0.0F)
# define Rte_InitValue_MotDrvErrE_Val (0.0F)
# define Rte_InitValue_MotDrvErrF_Val (0.0F)
# define Rte_InitValue_PhaOnTiMeasdA_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdB_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdC_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdD_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdE_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdF_Val (0U)
# define Rte_InitValue_PhaOnTiSumA_Val (0U)
# define Rte_InitValue_PhaOnTiSumB_Val (0U)
# define Rte_InitValue_PhaOnTiSumC_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_DiagcStsIvtr1Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_DiagcStsIvtr2Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiMeasdA_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiMeasdB_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiMeasdC_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiMeasdD_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiMeasdE_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiMeasdF_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiSumA_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiSumB_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_PhaOnTiSumC_Val(P2VAR(uint32, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotDrvDiagc_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_MOTDRVDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotDrvDiagc_MotDrvErrA_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotDrvDiagc_MotDrvErrB_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotDrvDiagc_MotDrvErrC_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotDrvDiagc_MotDrvErrD_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotDrvDiagc_MotDrvErrE_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotDrvDiagc_MotDrvErrF_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotDrvDiagc_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotDrvDiagc_MotDrvDiagcErrFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_MotDrvDiagc_MotDrvDiagcErrOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_MotDrvDiagc_MotDrvDiagcErrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_MotDrvDiagc_DiagcStsIvtr1Inactv_Logl
# define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_MotDrvDiagc_DiagcStsIvtr2Inactv_Logl
# define Rte_Read_PhaOnTiMeasdA_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdA_Val
# define Rte_Read_PhaOnTiMeasdB_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdB_Val
# define Rte_Read_PhaOnTiMeasdC_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdC_Val
# define Rte_Read_PhaOnTiMeasdD_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdD_Val
# define Rte_Read_PhaOnTiMeasdE_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdE_Val
# define Rte_Read_PhaOnTiMeasdF_Val Rte_Read_MotDrvDiagc_PhaOnTiMeasdF_Val
# define Rte_Read_PhaOnTiSumA_Val Rte_Read_MotDrvDiagc_PhaOnTiSumA_Val
# define Rte_Read_PhaOnTiSumB_Val Rte_Read_MotDrvDiagc_PhaOnTiSumB_Val
# define Rte_Read_PhaOnTiSumC_Val Rte_Read_MotDrvDiagc_PhaOnTiSumC_Val
# define Rte_Read_SysSt_Val Rte_Read_MotDrvDiagc_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotDrvErrA_Val Rte_Write_MotDrvDiagc_MotDrvErrA_Val
# define Rte_Write_MotDrvErrB_Val Rte_Write_MotDrvDiagc_MotDrvErrB_Val
# define Rte_Write_MotDrvErrC_Val Rte_Write_MotDrvDiagc_MotDrvErrC_Val
# define Rte_Write_MotDrvErrD_Val Rte_Write_MotDrvDiagc_MotDrvErrD_Val
# define Rte_Write_MotDrvErrE_Val Rte_Write_MotDrvDiagc_MotDrvErrE_Val
# define Rte_Write_MotDrvErrF_Val Rte_Write_MotDrvDiagc_MotDrvErrF_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_MotDrvDiagc_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotDrvDiagcErrFilFrq_Val Rte_Prm_MotDrvDiagc_MotDrvDiagcErrFilFrq_Val

# define Rte_Prm_MotDrvDiagcErrOffs_Val Rte_Prm_MotDrvDiagc_MotDrvDiagcErrOffs_Val

# define Rte_Prm_MotDrvDiagcErrThd_Val Rte_Prm_MotDrvDiagc_MotDrvDiagcErrThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MotDrvDiagcPhaOnTiSumAPrev() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaOnTiSumAPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaOnTiSumBPrev() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaOnTiSumBPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaOnTiSumCPrev() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaOnTiSumCPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_UnitDly() (Rte_Inst_MotDrvDiagc->Pim_UnitDly) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaAFilLp() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaAFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaBFilLp() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaBFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaCFilLp() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaCFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaDFilLp() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaDFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaEFilLp() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaEFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDrvDiagcPhaFFilLp() (Rte_Inst_MotDrvDiagc->Pim_MotDrvDiagcPhaFFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_MotDrvDiagcPhaOnTiSumAPrev(void)
 *   uint32 *Rte_Pim_MotDrvDiagcPhaOnTiSumBPrev(void)
 *   uint32 *Rte_Pim_MotDrvDiagcPhaOnTiSumCPrev(void)
 *   boolean *Rte_Pim_UnitDly(void)
 *   FilLpRec1 *Rte_Pim_MotDrvDiagcPhaAFilLp(void)
 *   FilLpRec1 *Rte_Pim_MotDrvDiagcPhaBFilLp(void)
 *   FilLpRec1 *Rte_Pim_MotDrvDiagcPhaCFilLp(void)
 *   FilLpRec1 *Rte_Pim_MotDrvDiagcPhaDFilLp(void)
 *   FilLpRec1 *Rte_Pim_MotDrvDiagcPhaEFilLp(void)
 *   FilLpRec1 *Rte_Pim_MotDrvDiagcPhaFFilLp(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotDrvDiagcErrFilFrq_Val(void)
 *   uint32 Rte_Prm_MotDrvDiagcErrOffs_Val(void)
 *   uint32 Rte_Prm_MotDrvDiagcErrThd_Val(void)
 *
 *********************************************************************************************************************/


# define MotDrvDiagc_START_SEC_CODE
# include "MotDrvDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotDrvDiagcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotDrvDiagcInit1 MotDrvDiagcInit1
FUNC(void, MotDrvDiagc_CODE) MotDrvDiagcInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotDrvDiagcPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdA_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdB_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdC_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdD_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdE_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdF_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiSumA_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiSumB_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiSumC_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotDrvErrA_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvErrB_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvErrC_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvErrD_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvErrE_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvErrF_Val(float32 data)
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

# define RTE_RUNNABLE_MotDrvDiagcPer1 MotDrvDiagcPer1
FUNC(void, MotDrvDiagc_CODE) MotDrvDiagcPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotDrvDiagc_STOP_SEC_CODE
# include "MotDrvDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1461088414
#    error "The magic number of the generated file <C:/component/ES320A_MotDrvDiagc_Impl/tools/contract/Rte_MotDrvDiagc.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461088414
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTDRVDIAGC_H */
