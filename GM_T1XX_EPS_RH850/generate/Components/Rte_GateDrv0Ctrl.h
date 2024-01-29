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
 *          File:  Rte_GateDrv0Ctrl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GateDrv0Ctrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GATEDRV0CTRL_H
# define _RTE_GATEDRV0CTRL_H

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

# include "Rte_GateDrv0Ctrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_PwrUpSeq_StrtUpSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
#  define Rte_InitValue_MotDrvr0IninTestCmpl_Logl (FALSE)
#  define Rte_InitValue_StrtUpSt_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_GateDrv0Ena; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_Ivtr0PhyFltInpActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl
#  define Rte_Read_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_StrtUpSt_Val Rte_Read_GateDrv0Ctrl_StrtUpSt_Val
#  define Rte_Read_GateDrv0Ctrl_StrtUpSt_Val(data) (*(data) = Rte_PwrUpSeq_StrtUpSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_GateDrv0Ctrl_SysSt_Val
#  define Rte_Read_GateDrv0Ctrl_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotDrvr0IninTestCmpl_Logl Rte_Write_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl
#  define Rte_Write_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl(data) (Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_GetGpioMotDrvr0Diag_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper IoHwAb_GetGpioMotDrvr0Diag_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioGateDrv0Rst_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper IoHwAb_SetGpioGateDrv0Rst_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioSysFlt2A_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper IoHwAb_SetGpioSysFlt2A_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena(data) \
  (Rte_Irv_GateDrv0Ctrl_GateDrv0Ena = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv(data) \
  (Rte_Irv_GateDrv0Ctrl_Ivtr0PhyFltInpActv = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena() \
  Rte_Irv_GateDrv0Ctrl_GateDrv0Ena
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv() \
  Rte_Irv_GateDrv0Ctrl_Ivtr0PhyFltInpActv
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlNtcNr0x050FailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlNtcNr0x050PassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlNtcNr0x051FailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlNtcNr0x051PassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlNtcNr0x055FailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlNtcNr0x055PassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlUnit0Cfg2WrVal_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlUnit0Cfg3WrVal_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlUnit0Cfg4WrVal_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GateDrv0CtrlUnit0Cfg7WrVal_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0St; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0BootstrpSplyFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0GenericFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0OffStChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GateDrv0Diag0Val() \
  (&Rte_GateDrv0Ctrl_GateDrv0Diag0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0Diag1Val() \
  (&Rte_GateDrv0Ctrl_GateDrv0Diag1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0Diag2Val() \
  (&Rte_GateDrv0Ctrl_GateDrv0Diag2Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0StsVal() \
  (&Rte_GateDrv0Ctrl_GateDrv0StsVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0VrfyRes0Val() \
  (&Rte_GateDrv0Ctrl_GateDrv0VrfyRes0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0VrfyRes1Val() \
  (&Rte_GateDrv0Ctrl_GateDrv0VrfyRes1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val() \
  (&Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val() \
  (&Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val() \
  (&Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag2Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGateDrv0CtrlGateDrv0StsVal() \
  (&Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0StsVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val() \
  (&Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val() \
  (&Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0CfgCnt() \
  (&Rte_GateDrv0Ctrl_GateDrv0CfgCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0OffStChkIdx() \
  (&Rte_GateDrv0Ctrl_GateDrv0OffStChkIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0OffStCnt() \
  (&Rte_GateDrv0Ctrl_GateDrv0OffStCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0St() \
  (&Rte_GateDrv0Ctrl_GateDrv0St) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() \
  (&Rte_GateDrv0Ctrl_Ivtr0BootstrpSplyFltPrmVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ivtr0GenericFltPrmVal() \
  (&Rte_GateDrv0Ctrl_Ivtr0GenericFltPrmVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx() \
  (&Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0CfgSecAtmpt() \
  (&Rte_GateDrv0Ctrl_GateDrv0CfgSecAtmpt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GateDrv0OffStChkSecAtmpt() \
  (&Rte_GateDrv0Ctrl_GateDrv0OffStChkSecAtmpt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ivtr0OffStChkCmpl() \
  (&Rte_GateDrv0Ctrl_Ivtr0OffStChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GateDrv0Ctrl_START_SEC_CODE
# include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GateDrv0CtrlInit1 GateDrv0CtrlInit1
#  define RTE_RUNNABLE_GateDrv0CtrlPer1 GateDrv0CtrlPer1
#  define RTE_RUNNABLE_GateDrv0CtrlPer2 GateDrv0CtrlPer2
# endif

FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GateDrv0Ctrl_STOP_SEC_CODE
# include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetGpio1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GATEDRV0CTRL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
