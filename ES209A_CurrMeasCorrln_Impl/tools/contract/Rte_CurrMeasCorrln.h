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
 *          File:  Rte_CurrMeasCorrln.h
 *     SW-C Type:  CurrMeasCorrln
 *  Generated at:  Thu Sep  1 15:33:43 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CurrMeasCorrln> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CURRMEASCORRLN_H
# define _RTE_CURRMEASCORRLN_H

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

# include "Rte_CurrMeasCorrln_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CurrMeasCorrln
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMeasCorrlnSens0RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMeasCorrlnSens0StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMeasCorrlnSens1RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrMeasCorrlnSens1StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CurrMeasCorrln, RTE_CONST, RTE_CONST) Rte_Inst_CurrMeasCorrln; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CurrMeasCorrln, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CurrMeasCorrlnSts_Val (63U)
# define Rte_InitValue_CurrMeasIdptSig_Val (2U)
# define Rte_InitValue_CurrMotSumABC_Val (0.0F)
# define Rte_InitValue_CurrMotSumDEF_Val (0.0F)
# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
# define Rte_InitValue_MotCurrCorrdA_Val (0.0F)
# define Rte_InitValue_MotCurrCorrdB_Val (0.0F)
# define Rte_InitValue_MotCurrCorrdC_Val (0.0F)
# define Rte_InitValue_MotCurrCorrdD_Val (0.0F)
# define Rte_InitValue_MotCurrCorrdE_Val (0.0F)
# define Rte_InitValue_MotCurrCorrdF_Val (0.0F)
# define Rte_InitValue_MotCurrEolCalSt_Val (0U)
# define Rte_InitValue_MotCurrQlfr1_Val (0U)
# define Rte_InitValue_MotCurrQlfr2_Val (0U)
# define Rte_InitValue_MotCurrRollgCntr1_Val (0U)
# define Rte_InitValue_MotCurrRollgCntr2_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_DiagcStsIvtr1Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_DiagcStsIvtr2Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrCorrdA_Val(P2VAR(float32, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrCorrdB_Val(P2VAR(float32, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrCorrdC_Val(P2VAR(float32, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrCorrdD_Val(P2VAR(float32, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrCorrdE_Val(P2VAR(float32, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrCorrdF_Val(P2VAR(float32, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrEolCalSt_Val(P2VAR(MotCurrEolCalSt2, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrQlfr1_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrQlfr2_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrRollgCntr1_Val(P2VAR(uint8, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_MotCurrRollgCntr2_Val(P2VAR(uint8, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrMeasCorrln_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CurrMeasCorrln_CurrMeasCorrlnSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CurrMeasCorrln_CurrMeasIdptSig_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CurrMeasCorrln_CurrMotSumABC_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CurrMeasCorrln_CurrMotSumDEF_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CurrMeasCorrln_FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CurrMeasCorrln_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_CURRMEASCORRLN_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CurrMeasCorrln_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnMaxErrCurr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04DFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04DPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04EFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04EPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnMaxStallCntr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_CurrMeasCorrln_DiagcStsIvtr1Inactv_Logl
# define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_CurrMeasCorrln_DiagcStsIvtr2Inactv_Logl
# define Rte_Read_MotCurrCorrdA_Val Rte_Read_CurrMeasCorrln_MotCurrCorrdA_Val
# define Rte_Read_MotCurrCorrdB_Val Rte_Read_CurrMeasCorrln_MotCurrCorrdB_Val
# define Rte_Read_MotCurrCorrdC_Val Rte_Read_CurrMeasCorrln_MotCurrCorrdC_Val
# define Rte_Read_MotCurrCorrdD_Val Rte_Read_CurrMeasCorrln_MotCurrCorrdD_Val
# define Rte_Read_MotCurrCorrdE_Val Rte_Read_CurrMeasCorrln_MotCurrCorrdE_Val
# define Rte_Read_MotCurrCorrdF_Val Rte_Read_CurrMeasCorrln_MotCurrCorrdF_Val
# define Rte_Read_MotCurrEolCalSt_Val Rte_Read_CurrMeasCorrln_MotCurrEolCalSt_Val
# define Rte_Read_MotCurrQlfr1_Val Rte_Read_CurrMeasCorrln_MotCurrQlfr1_Val
# define Rte_Read_MotCurrQlfr2_Val Rte_Read_CurrMeasCorrln_MotCurrQlfr2_Val
# define Rte_Read_MotCurrRollgCntr1_Val Rte_Read_CurrMeasCorrln_MotCurrRollgCntr1_Val
# define Rte_Read_MotCurrRollgCntr2_Val Rte_Read_CurrMeasCorrln_MotCurrRollgCntr2_Val
# define Rte_Read_SysSt_Val Rte_Read_CurrMeasCorrln_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CurrMeasCorrlnSts_Val Rte_Write_CurrMeasCorrln_CurrMeasCorrlnSts_Val
# define Rte_Write_CurrMeasIdptSig_Val Rte_Write_CurrMeasCorrln_CurrMeasIdptSig_Val
# define Rte_Write_CurrMotSumABC_Val Rte_Write_CurrMeasCorrln_CurrMotSumABC_Val
# define Rte_Write_CurrMotSumDEF_Val Rte_Write_CurrMeasCorrln_CurrMotSumDEF_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_u08_Oper Rte_Call_CurrMeasCorrln_FltInj_u08_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CurrMeasCorrln_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_CurrMeasCorrln_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnMaxErrCurr_Val

# define Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04DFailStep_Val

# define Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04DPassStep_Val

# define Rte_Prm_CurrMeasCorrlnNtc0x04EFailStep_Val Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04EFailStep_Val

# define Rte_Prm_CurrMeasCorrlnNtc0x04EPassStep_Val Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnNtc0x04EPassStep_Val

# define Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val Rte_Prm_CurrMeasCorrln_CurrMeasCorrlnMaxStallCntr_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CurrMeasCorrlnSens0RollgCntPrev() (Rte_Inst_CurrMeasCorrln->Pim_CurrMeasCorrlnSens0RollgCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrMeasCorrlnSens0StallCntPrev() (Rte_Inst_CurrMeasCorrln->Pim_CurrMeasCorrlnSens0StallCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrMeasCorrlnSens1RollgCntPrev() (Rte_Inst_CurrMeasCorrln->Pim_CurrMeasCorrlnSens1RollgCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrMeasCorrlnSens1StallCntPrev() (Rte_Inst_CurrMeasCorrln->Pim_CurrMeasCorrlnSens1StallCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_CurrMeasCorrlnSens0RollgCntPrev(void)
 *   uint8 *Rte_Pim_CurrMeasCorrlnSens0StallCntPrev(void)
 *   uint8 *Rte_Pim_CurrMeasCorrlnSens1RollgCntPrev(void)
 *   uint8 *Rte_Pim_CurrMeasCorrlnSens1StallCntPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val(void)
 *   uint16 Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasCorrlnNtc0x04EFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasCorrlnNtc0x04EPassStep_Val(void)
 *   uint8 Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val(void)
 *
 *********************************************************************************************************************/


# define CurrMeasCorrln_START_SEC_CODE
# include "CurrMeasCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasCorrlnPer1
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
 *   Std_ReturnType Rte_Read_MotCurrCorrdA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrCorrdB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrCorrdC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrCorrdD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrCorrdE_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrCorrdF_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_MotCurrQlfr1_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotCurrQlfr2_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotCurrRollgCntr1_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrRollgCntr2_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CurrMeasCorrlnSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMeasIdptSig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumABC_Val(float32 data)
 *   Std_ReturnType Rte_Write_CurrMotSumDEF_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CurrMeasCorrlnPer1 CurrMeasCorrlnPer1
FUNC(void, CurrMeasCorrln_CODE) CurrMeasCorrlnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CurrMeasCorrln_STOP_SEC_CODE
# include "CurrMeasCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1472766782
#    error "The magic number of the generated file <C:/Component/ES209A_CurrMeasCorrln_Impl/tools/contract/Rte_CurrMeasCorrln.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1472766782
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CURRMEASCORRLN_H */
