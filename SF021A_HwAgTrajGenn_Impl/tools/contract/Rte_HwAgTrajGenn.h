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
 *          File:  Rte_HwAgTrajGenn.h
 *     SW-C Type:  HwAgTrajGenn
 *  Generated at:  Tue Feb  9 12:14:53 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgTrajGenn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGTRAJGENN_H
# define _RTE_HWAGTRAJGENN_H

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

# include "Rte_HwAgTrajGenn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAgTrajGenn
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CalcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwAgTrajCmdSt1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmdSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwPosnIni; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwPosnOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SignHwPosnDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TiDeltaA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TiDeltaVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TiSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VelMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAgTrajGenn, RTE_CONST, RTE_CONST) Rte_Inst_HwAgTrajGenn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAgTrajGenn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgTrajGennEna_Logl (FALSE)
# define Rte_InitValue_HwAgTrakgServoCmd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrajGenn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGTRAJGENN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgTrajGenn_HwAgTrajGennEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGTRAJGENN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgTrajGenn_HwAgTrakgServoCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrajGenn_HwAgTrajGennAMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrajGenn_HwAgTrajGennAgMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgTrajGenn_HwAgTrajGennVelMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_HwAgTrajGenn_HwAgTrajGennPer1_HwATar(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_HwAgTrajGenn_HwAgTrajGennPer1_HwAgTar(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_HwAgTrajGenn_HwAgTrajGennPer1_HwVelTar(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAgTrajGenn_SetTrajTarPrm_Oper_HwATar(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAgTrajGenn_SetTrajTarPrm_Oper_HwAgTar(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAgTrajGenn_SetTrajTarPrm_Oper_HwVelTar(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_HwAgTrajGenn_HwAg_Val
# define Rte_Read_HwAgTrajGennEna_Logl Rte_Read_HwAgTrajGenn_HwAgTrajGennEna_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgTrakgServoCmd_Val Rte_Write_HwAgTrajGenn_HwAgTrakgServoCmd_Val


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAgTrajGennPer1_HwATar() \
  Rte_IrvRead_HwAgTrajGenn_HwAgTrajGennPer1_HwATar()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAgTrajGennPer1_HwAgTar() \
  Rte_IrvRead_HwAgTrajGenn_HwAgTrajGennPer1_HwAgTar()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAgTrajGennPer1_HwVelTar() \
  Rte_IrvRead_HwAgTrajGenn_HwAgTrajGennPer1_HwVelTar()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(data) \
  Rte_IrvWrite_HwAgTrajGenn_SetTrajTarPrm_Oper_HwATar(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(data) \
  Rte_IrvWrite_HwAgTrajGenn_SetTrajTarPrm_Oper_HwAgTar(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(data) \
  Rte_IrvWrite_HwAgTrajGenn_SetTrajTarPrm_Oper_HwVelTar(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAgTrajGennAMax_Val Rte_Prm_HwAgTrajGenn_HwAgTrajGennAMax_Val

# define Rte_Prm_HwAgTrajGennAgMax_Val Rte_Prm_HwAgTrajGenn_HwAgTrajGennAgMax_Val

# define Rte_Prm_HwAgTrajGennVelMax_Val Rte_Prm_HwAgTrajGenn_HwAgTrajGennVelMax_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AMax() (Rte_Inst_HwAgTrajGenn->Pim_AMax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwPosnIni() (Rte_Inst_HwAgTrajGenn->Pim_HwPosnIni) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwPosnOffs() (Rte_Inst_HwAgTrajGenn->Pim_HwPosnOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SignHwPosnDelta() (Rte_Inst_HwAgTrajGenn->Pim_SignHwPosnDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TiDeltaA() (Rte_Inst_HwAgTrajGenn->Pim_TiDeltaA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TiDeltaVel() (Rte_Inst_HwAgTrajGenn->Pim_TiDeltaVel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TiSt() (Rte_Inst_HwAgTrajGenn->Pim_TiSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VelMax() (Rte_Inst_HwAgTrajGenn->Pim_VelMax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CmdSt() (Rte_Inst_HwAgTrajGenn->Pim_CmdSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CalcFlg() (Rte_Inst_HwAgTrajGenn->Pim_CalcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AMax(void)
 *   float32 *Rte_Pim_HwPosnIni(void)
 *   float32 *Rte_Pim_HwPosnOffs(void)
 *   float32 *Rte_Pim_SignHwPosnDelta(void)
 *   float32 *Rte_Pim_TiDeltaA(void)
 *   float32 *Rte_Pim_TiDeltaVel(void)
 *   float32 *Rte_Pim_TiSt(void)
 *   float32 *Rte_Pim_VelMax(void)
 *   HwAgTrajCmdSt1 *Rte_Pim_CmdSt(void)
 *   boolean *Rte_Pim_CalcFlg(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgTrajGennAMax_Val(void)
 *   float32 Rte_Prm_HwAgTrajGennAgMax_Val(void)
 *   float32 Rte_Prm_HwAgTrajGennVelMax_Val(void)
 *
 *********************************************************************************************************************/


# define HwAgTrajGenn_START_SEC_CODE
# include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrajGennInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgTrajGennInit1 HwAgTrajGennInit1
FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrajGennPer1
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
 *   Std_ReturnType Rte_Read_HwAgTrajGennEna_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgTrakgServoCmd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwATar(void)
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwAgTar(void)
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwVelTar(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgTrajGennPer1 HwAgTrajGennPer1
FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetTrajTarPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetTrajTarPrm>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(float32 data)
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(float32 data)
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(float32 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetTrajTarPrm_Oper(float32 HwAgTrajGennHwAgTar_Arg, float32 HwAgTrajGennHwVelTar_Arg, float32 HwAgTrajGennHwATar_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetTrajTarPrm_Oper SetTrajTarPrm_Oper
FUNC(void, HwAgTrajGenn_CODE) SetTrajTarPrm_Oper(float32 HwAgTrajGennHwAgTar_Arg, float32 HwAgTrajGennHwVelTar_Arg, float32 HwAgTrajGennHwATar_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgTrajGenn_STOP_SEC_CODE
# include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1455045380
#    error "The magic number of the generated file <C:/component/SF021A_HwAgTrajGenn_Impl/tools/contract/Rte_HwAgTrajGenn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455045380
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAGTRAJGENN_H */
