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
 *          File:  Rte_TmplMonr.h
 *     SW-C Type:  TmplMonr
 *  Generated at:  Thu Dec  8 16:45:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TmplMonr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TMPLMONR_H
# define _RTE_TMPLMONR_H

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

# include "Rte_TmplMonr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TmplMonr
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrIninTestCmplFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrNtc40PrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrSpiReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrSpiReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrWdgRstrtCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TmplMonr, RTE_CONST, RTE_CONST) Rte_Inst_TmplMonr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TmplMonr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_TmplMonrIninTestCmpl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TmplMonr_DiagcStsIvtr1Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TmplMonr_DiagcStsIvtr2Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TmplMonr_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TmplMonr_TmplMonrIninTestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_GetGpioPwrOutpEnaFb_Oper(P2VAR(boolean, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_TmplMonr_DiagcStsIvtr1Inactv_Logl
# define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_TmplMonr_DiagcStsIvtr2Inactv_Logl
# define Rte_Read_StrtUpSt_Val Rte_Read_TmplMonr_StrtUpSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_TmplMonrIninTestCmpl_Logl Rte_Write_TmplMonr_TmplMonrIninTestCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CtrlErrOut_Oper Rte_Call_TmplMonr_CtrlErrOut_Oper
# define Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper Rte_Call_TmplMonr_IoHwAb_GetGpioPwrOutpEnaFb_Oper
# define Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper Rte_Call_TmplMonr_IoHwAb_SetGpioSysFlt2A_Oper
# define Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper Rte_Call_TmplMonr_IoHwAb_SetGpioSysFlt2B_Oper
# define Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper Rte_Call_TmplMonr_IoHwAb_SetGpioTmplMonrWdg_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_TmplMonr_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_TmplMonrIninCntr() (Rte_Inst_TmplMonr->Pim_TmplMonrIninCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrNtc40PrmByte() (Rte_Inst_TmplMonr->Pim_TmplMonrNtc40PrmByte) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrWdgRstrtCnt() (Rte_Inst_TmplMonr->Pim_TmplMonrWdgRstrtCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrIninTestCmplFlg() (Rte_Inst_TmplMonr->Pim_TmplMonrIninTestCmplFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrSpiReadWrOrderFlg1() (Rte_Inst_TmplMonr->Pim_TmplMonrSpiReadWrOrderFlg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrSpiReadWrOrderFlg2() (Rte_Inst_TmplMonr->Pim_TmplMonrSpiReadWrOrderFlg2) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_TmplMonrIninCntr(void)
 *   uint8 *Rte_Pim_TmplMonrNtc40PrmByte(void)
 *   uint8 *Rte_Pim_TmplMonrWdgRstrtCnt(void)
 *   boolean *Rte_Pim_TmplMonrIninTestCmplFlg(void)
 *   boolean *Rte_Pim_TmplMonrSpiReadWrOrderFlg1(void)
 *   boolean *Rte_Pim_TmplMonrSpiReadWrOrderFlg2(void)
 *
 *********************************************************************************************************************/


# define TmplMonr_START_SEC_CODE
# include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TmplMonrInit1 TmplMonrInit1
FUNC(void, TmplMonr_CODE) TmplMonrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrPer1
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
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper(boolean *PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TmplMonrPer1 TmplMonrPer1
FUNC(void, TmplMonr_CODE) TmplMonrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrPer2
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
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TmplMonrPer2 TmplMonrPer2
FUNC(void, TmplMonr_CODE) TmplMonrPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TmplMonr_STOP_SEC_CODE
# include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetGpio1_E_NOT_OK (1U)

# define RTE_E_SetGpio1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481229590
#    error "The magic number of the generated file <C:/component/ES005A_TmplMonr_Impl/tools/contract/Rte_TmplMonr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481229590
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TMPLMONR_H */
