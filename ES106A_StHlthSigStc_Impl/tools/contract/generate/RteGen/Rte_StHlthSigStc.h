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
 *          File:  Rte_StHlthSigStc.h
 *     SW-C Type:  StHlthSigStc
 *  Generated at:  Fri Dec  9 17:42:36 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StHlthSigStc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STHLTHSIGSTC_H
# define _RTE_STHLTHSIGSTC_H

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

# include "Rte_StHlthSigStc_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_StHlthSigStc
{
  /* PIM Handles section */
  P2VAR(Ary1D_u32_StHlthSigStc1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IgnCycSampleCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_StHlthSigStc1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RamBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_StHlthSigStc1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SigAvrgBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_225, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SigStcHistDataAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VldNvm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_StHlthSigStc, RTE_CONST, RTE_CONST) Rte_Inst_StHlthSigStc; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_StHlthSigStc, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AbsltMotPosABDifStHlth_Val (100U)
# define Rte_InitValue_AbsltMotPosACDifStHlth_Val (100U)
# define Rte_InitValue_AbsltMotPosBCDifStHlth_Val (100U)
# define Rte_InitValue_CtrlrTStHlth_Val (100U)
# define Rte_InitValue_CurrMotSumABCStHlth_Val (100U)
# define Rte_InitValue_CurrMotSumDEFStHlth_Val (100U)
# define Rte_InitValue_DigTqIdptSigStHlth_Val (100U)
# define Rte_InitValue_DigTqSnsrAStHlth_Val (100U)
# define Rte_InitValue_DigTqSnsrBStHlth_Val (100U)
# define Rte_InitValue_DutyCycStHlth_Val (100U)
# define Rte_InitValue_EotImpctStHlth_Val (100U)
# define Rte_InitValue_FricEstimnStHlth_Val (100U)
# define Rte_InitValue_MotPosStHlth_Val (100U)
# define Rte_InitValue_OutpAssiStHlth_Val (100U)
# define Rte_InitValue_PhaAStHlth_Val (100U)
# define Rte_InitValue_PhaBStHlth_Val (100U)
# define Rte_InitValue_PhaCStHlth_Val (100U)
# define Rte_InitValue_PhaDStHlth_Val (100U)
# define Rte_InitValue_PhaEStHlth_Val (100U)
# define Rte_InitValue_PhaFStHlth_Val (100U)
# define Rte_InitValue_RamEccSngBitCorrnStHlth_Val (100U)
# define Rte_InitValue_WhlImbMaxCmpStHlth_Val (100U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_AbsltMotPosABDifStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_AbsltMotPosACDifStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_AbsltMotPosBCDifStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_CtrlrTStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_CurrMotSumABCStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_CurrMotSumDEFStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_DigTqIdptSigStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_DigTqSnsrAStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_DigTqSnsrBStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_DutyCycStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_EotImpctStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_FricEstimnStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_MotPosStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_OutpAssiStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_PhaAStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_PhaBStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_PhaCStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_PhaDStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_PhaEStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_PhaFStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_RamEccSngBitCorrnStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StHlthSigStc_WhlImbMaxCmpStHlth_Val(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StHlthSigStc_SigStcHistDataAry_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StHlthSigStc_SigStcHistDataAry_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_StHlthSigStc_StHlthSigStc_ExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_StHlthSigStc_StHlthSigStc_ExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AbsltMotPosABDifStHlth_Val Rte_Read_StHlthSigStc_AbsltMotPosABDifStHlth_Val
# define Rte_Read_AbsltMotPosACDifStHlth_Val Rte_Read_StHlthSigStc_AbsltMotPosACDifStHlth_Val
# define Rte_Read_AbsltMotPosBCDifStHlth_Val Rte_Read_StHlthSigStc_AbsltMotPosBCDifStHlth_Val
# define Rte_Read_CtrlrTStHlth_Val Rte_Read_StHlthSigStc_CtrlrTStHlth_Val
# define Rte_Read_CurrMotSumABCStHlth_Val Rte_Read_StHlthSigStc_CurrMotSumABCStHlth_Val
# define Rte_Read_CurrMotSumDEFStHlth_Val Rte_Read_StHlthSigStc_CurrMotSumDEFStHlth_Val
# define Rte_Read_DigTqIdptSigStHlth_Val Rte_Read_StHlthSigStc_DigTqIdptSigStHlth_Val
# define Rte_Read_DigTqSnsrAStHlth_Val Rte_Read_StHlthSigStc_DigTqSnsrAStHlth_Val
# define Rte_Read_DigTqSnsrBStHlth_Val Rte_Read_StHlthSigStc_DigTqSnsrBStHlth_Val
# define Rte_Read_DutyCycStHlth_Val Rte_Read_StHlthSigStc_DutyCycStHlth_Val
# define Rte_Read_EotImpctStHlth_Val Rte_Read_StHlthSigStc_EotImpctStHlth_Val
# define Rte_Read_FricEstimnStHlth_Val Rte_Read_StHlthSigStc_FricEstimnStHlth_Val
# define Rte_Read_MotPosStHlth_Val Rte_Read_StHlthSigStc_MotPosStHlth_Val
# define Rte_Read_OutpAssiStHlth_Val Rte_Read_StHlthSigStc_OutpAssiStHlth_Val
# define Rte_Read_PhaAStHlth_Val Rte_Read_StHlthSigStc_PhaAStHlth_Val
# define Rte_Read_PhaBStHlth_Val Rte_Read_StHlthSigStc_PhaBStHlth_Val
# define Rte_Read_PhaCStHlth_Val Rte_Read_StHlthSigStc_PhaCStHlth_Val
# define Rte_Read_PhaDStHlth_Val Rte_Read_StHlthSigStc_PhaDStHlth_Val
# define Rte_Read_PhaEStHlth_Val Rte_Read_StHlthSigStc_PhaEStHlth_Val
# define Rte_Read_PhaFStHlth_Val Rte_Read_StHlthSigStc_PhaFStHlth_Val
# define Rte_Read_RamEccSngBitCorrnStHlth_Val Rte_Read_StHlthSigStc_RamEccSngBitCorrnStHlth_Val
# define Rte_Read_WhlImbMaxCmpStHlth_Val Rte_Read_StHlthSigStc_WhlImbMaxCmpStHlth_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SigStcHistDataAry_GetErrorStatus Rte_Call_StHlthSigStc_SigStcHistDataAry_GetErrorStatus
# define Rte_Call_SigStcHistDataAry_SetRamBlockStatus Rte_Call_StHlthSigStc_SigStcHistDataAry_SetRamBlockStatus


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_StHlthSigStc_ExclusiveArea Rte_Enter_StHlthSigStc_StHlthSigStc_ExclusiveArea
# define Rte_Exit_StHlthSigStc_ExclusiveArea Rte_Exit_StHlthSigStc_StHlthSigStc_ExclusiveArea


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_VldNvm() (Rte_Inst_StHlthSigStc->Pim_VldNvm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_IgnCycSampleCntrAry() (*Rte_Inst_StHlthSigStc->Pim_IgnCycSampleCntrAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_IgnCycSampleCntrAry() (Rte_Inst_StHlthSigStc->Pim_IgnCycSampleCntrAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RamBuf() (*Rte_Inst_StHlthSigStc->Pim_RamBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RamBuf() (Rte_Inst_StHlthSigStc->Pim_RamBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SigAvrgBuf() (*Rte_Inst_StHlthSigStc->Pim_SigAvrgBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SigAvrgBuf() (Rte_Inst_StHlthSigStc->Pim_SigAvrgBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SigStcHistDataAry() (*Rte_Inst_StHlthSigStc->Pim_SigStcHistDataAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SigStcHistDataAry() (Rte_Inst_StHlthSigStc->Pim_SigStcHistDataAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_VldNvm(void)
 *   uint32 *Rte_Pim_IgnCycSampleCntrAry(void)
 *   uint8 *Rte_Pim_RamBuf(void)
 *   float32 *Rte_Pim_SigAvrgBuf(void)
 *   uint8 *Rte_Pim_SigStcHistDataAry(void)
 *
 *********************************************************************************************************************/


# define StHlthSigStc_START_SEC_CODE
# include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrSigStcHlthData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrSigStcHlthData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrSigStcHlthData_Oper(boolean ClrTar_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ClrSigStcHlthData_Oper ClrSigStcHlthData_Oper
FUNC(void, StHlthSigStc_CODE) ClrSigStcHlthData_Oper(boolean ClrTar_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigStcHlthData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigStcHlthData>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_StHlthSigStc_ExclusiveArea(void)
 *   void Rte_Exit_StHlthSigStc_ExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, uint32 *BufPtr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigStcHlthData_Oper GetSigStcHlthData_Oper
FUNC(Std_ReturnType, StHlthSigStc_CODE) GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) BufPtr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StHlthSigStcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StHlthSigStcInit1 StHlthSigStcInit1
FUNC(void, StHlthSigStc_CODE) StHlthSigStcInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StHlthStcPwrDwn_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StHlthStcPwrDwn>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StHlthStcPwrDwn_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StHlthStcPwrDwn_Oper StHlthStcPwrDwn_Oper
FUNC(void, StHlthSigStc_CODE) StHlthStcPwrDwn_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: UpdStHlthStcData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <UpdStHlthStcData>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AbsltMotPosABDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsltMotPosACDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsltMotPosBCDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CtrlrTStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumABCStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumDEFStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqIdptSigStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqSnsrAStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqSnsrBStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DutyCycStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EotImpctStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FricEstimnStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotPosStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_OutpAssiStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaAStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaBStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaCStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaDStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaEStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaFStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RamEccSngBitCorrnStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlImbMaxCmpStHlth_Val(uint8 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_StHlthSigStc_ExclusiveArea(void)
 *   void Rte_Exit_StHlthSigStc_ExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void UpdStHlthStcData_Oper(uint8 TaskId_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_UpdStHlthStcData_Oper UpdStHlthStcData_Oper
FUNC(void, StHlthSigStc_CODE) UpdStHlthStcData_Oper(uint8 TaskId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StHlthSigStc_STOP_SEC_CODE
# include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481319775
#    error "The magic number of the generated file <C:/Component/ES106A_StHlthSigStc_Impl/tools/contract/generate/RteGen/Rte_StHlthSigStc.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481319775
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_STHLTHSIGSTC_H */
