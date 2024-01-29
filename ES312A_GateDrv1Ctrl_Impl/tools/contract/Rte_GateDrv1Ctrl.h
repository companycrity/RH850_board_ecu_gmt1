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
 *          File:  Rte_GateDrv1Ctrl.h
 *     SW-C Type:  GateDrv1Ctrl
 *  Generated at:  Wed Jul 13 17:00:31 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GateDrv1Ctrl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GATEDRV1CTRL_H
# define _RTE_GATEDRV1CTRL_H

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

# include "Rte_GateDrv1Ctrl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GateDrv1Ctrl
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1CfgCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1CfgSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1OffStChkIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1OffStChkSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1OffStCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1St; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv1VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ivtr1BootstrpSplyFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ivtr1GenericFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ivtr1OffStChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv1CtrlGateDrv1Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv1CtrlGateDrv1Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv1CtrlGateDrv1Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv1CtrlGateDrv1StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GateDrv1Ctrl, RTE_CONST, RTE_CONST) Rte_Inst_GateDrv1Ctrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GateDrv1Ctrl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
# define Rte_InitValue_MotDrvr1IninTestCmpl_Logl (FALSE)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GateDrv1Ctrl_DiagcStsIvtr2Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GATEDRV1CTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GateDrv1Ctrl_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_GATEDRV1CTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GateDrv1Ctrl_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_GATEDRV1CTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GateDrv1Ctrl_MotDrvr1IninTestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv1Ctrl_IoHwAb_GetGpioMotDrvr1Diag_Oper(P2VAR(boolean, AUTOMATIC, RTE_GATEDRV1CTRL_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv1Ctrl_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv1Ctrl_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv1Ctrl_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x060FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x060PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x061FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x061PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x065FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x065PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg2WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg3WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg4WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg7WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_GateDrv1Ctrl_GateDrv1CtrlPer1_GateDrv1Ena(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_GateDrv1Ctrl_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_GateDrv1Ctrl_GateDrv1CtrlPer2_GateDrv1Ena(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_GateDrv1Ctrl_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_GateDrv1Ctrl_DiagcStsIvtr2Inactv_Logl
# define Rte_Read_StrtUpSt_Val Rte_Read_GateDrv1Ctrl_StrtUpSt_Val
# define Rte_Read_SysSt_Val Rte_Read_GateDrv1Ctrl_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotDrvr1IninTestCmpl_Logl Rte_Write_GateDrv1Ctrl_MotDrvr1IninTestCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper Rte_Call_GateDrv1Ctrl_IoHwAb_GetGpioMotDrvr1Diag_Oper
# define Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper Rte_Call_GateDrv1Ctrl_IoHwAb_SetGpioGateDrv1Rst_Oper
# define Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper Rte_Call_GateDrv1Ctrl_IoHwAb_SetGpioSysFlt2B_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GateDrv1Ctrl_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena(data) \
  Rte_IrvWrite_GateDrv1Ctrl_GateDrv1CtrlPer1_GateDrv1Ena(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv(data) \
  Rte_IrvWrite_GateDrv1Ctrl_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GateDrv1CtrlPer2_GateDrv1Ena() \
  Rte_IrvRead_GateDrv1Ctrl_GateDrv1CtrlPer2_GateDrv1Ena()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv() \
  Rte_IrvRead_GateDrv1Ctrl_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x060FailStep_Val

# define Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x060PassStep_Val

# define Rte_Prm_GateDrv1CtrlNtcNr0x061FailStep_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x061FailStep_Val

# define Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x061PassStep_Val

# define Rte_Prm_GateDrv1CtrlNtcNr0x065FailStep_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x065FailStep_Val

# define Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlNtcNr0x065PassStep_Val

# define Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg2WrVal_Val

# define Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg3WrVal_Val

# define Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg4WrVal_Val

# define Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val Rte_Prm_GateDrv1Ctrl_GateDrv1CtrlUnit1Cfg7WrVal_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GateDrv1Diag0Val() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1Diag0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1Diag1Val() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1Diag1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1Diag2Val() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1Diag2Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1StsVal() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1StsVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1VrfyRes0Val() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1VrfyRes0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1VrfyRes1Val() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1VrfyRes1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv1CtrlGateDrv1Diag0Val() (Rte_Inst_GateDrv1Ctrl->Pim_dGateDrv1CtrlGateDrv1Diag0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv1CtrlGateDrv1Diag1Val() (Rte_Inst_GateDrv1Ctrl->Pim_dGateDrv1CtrlGateDrv1Diag1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv1CtrlGateDrv1Diag2Val() (Rte_Inst_GateDrv1Ctrl->Pim_dGateDrv1CtrlGateDrv1Diag2Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv1CtrlGateDrv1StsVal() (Rte_Inst_GateDrv1Ctrl->Pim_dGateDrv1CtrlGateDrv1StsVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val() (Rte_Inst_GateDrv1Ctrl->Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val() (Rte_Inst_GateDrv1Ctrl->Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1CfgCnt() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1CfgCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1OffStChkIdx() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1OffStChkIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1OffStCnt() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1OffStCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1St() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1St) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ivtr1BootstrpSplyFltPrmVal() (Rte_Inst_GateDrv1Ctrl->Pim_Ivtr1BootstrpSplyFltPrmVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ivtr1GenericFltPrmVal() (Rte_Inst_GateDrv1Ctrl->Pim_Ivtr1GenericFltPrmVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx() (Rte_Inst_GateDrv1Ctrl->Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1CfgSecAtmpt() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1CfgSecAtmpt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv1OffStChkSecAtmpt() (Rte_Inst_GateDrv1Ctrl->Pim_GateDrv1OffStChkSecAtmpt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ivtr1OffStChkCmpl() (Rte_Inst_GateDrv1Ctrl->Pim_Ivtr1OffStChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_GateDrv1Diag0Val(void)
 *   uint16 *Rte_Pim_GateDrv1Diag1Val(void)
 *   uint16 *Rte_Pim_GateDrv1Diag2Val(void)
 *   uint16 *Rte_Pim_GateDrv1StsVal(void)
 *   uint16 *Rte_Pim_GateDrv1VrfyRes0Val(void)
 *   uint16 *Rte_Pim_GateDrv1VrfyRes1Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1Diag0Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1Diag1Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1Diag2Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1StsVal(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes0Val(void)
 *   uint16 *Rte_Pim_dGateDrv1CtrlGateDrv1VrfyRes1Val(void)
 *   uint8 *Rte_Pim_GateDrv1CfgCnt(void)
 *   uint8 *Rte_Pim_GateDrv1OffStChkIdx(void)
 *   uint8 *Rte_Pim_GateDrv1OffStCnt(void)
 *   uint8 *Rte_Pim_GateDrv1St(void)
 *   uint8 *Rte_Pim_Ivtr1BootstrpSplyFltPrmVal(void)
 *   uint8 *Rte_Pim_Ivtr1GenericFltPrmVal(void)
 *   uint8 *Rte_Pim_dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx(void)
 *   boolean *Rte_Pim_GateDrv1CfgSecAtmpt(void)
 *   boolean *Rte_Pim_GateDrv1OffStChkSecAtmpt(void)
 *   boolean *Rte_Pim_Ivtr1OffStChkCmpl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x060FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x060PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x061FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x061PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x065FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlNtcNr0x065PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg2WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg3WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg4WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv1CtrlUnit1Cfg7WrVal_Val(void)
 *
 *********************************************************************************************************************/


# define GateDrv1Ctrl_START_SEC_CODE
# include "GateDrv1Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv1CtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GateDrv1CtrlInit1 GateDrv1CtrlInit1
FUNC(void, GateDrv1Ctrl_CODE) GateDrv1CtrlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv1CtrlPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GateDrv1CtrlPer1_GateDrv1Ena(boolean data)
 *   void Rte_IrvWrite_GateDrv1CtrlPer1_Ivtr1PhyFltInpActv(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GateDrv1CtrlPer1 GateDrv1CtrlPer1
FUNC(void, GateDrv1Ctrl_CODE) GateDrv1CtrlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv1CtrlPer2
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotDrvr1IninTestCmpl_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_GateDrv1CtrlPer2_GateDrv1Ena(void)
 *   boolean Rte_IrvRead_GateDrv1CtrlPer2_Ivtr1PhyFltInpActv(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr1Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv1Rst_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GateDrv1CtrlPer2 GateDrv1CtrlPer2
FUNC(void, GateDrv1Ctrl_CODE) GateDrv1CtrlPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GateDrv1Ctrl_STOP_SEC_CODE
# include "GateDrv1Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetGpio1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1468435446
#    error "The magic number of the generated file <C:/component/ES312A_GateDrv1Ctrl_Impl/tools/contract/Rte_GateDrv1Ctrl.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1468435446
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GATEDRV1CTRL_H */
