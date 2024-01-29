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
 *          File:  Rte_CDD_MotAg0Meas.h
 *     SW-C Type:  CDD_MotAg0Meas
 *  Generated at:  Mon Mar 14 15:27:40 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotAg0Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAG0MEAS_H
# define _RTE_CDD_MOTAG0MEAS_H

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

# include "Rte_CDD_MotAg0Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_MotAg0Meas
{
  /* PIM Handles section */
  P2VAR(Ary1D_f32_26, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0CoeffTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_sm5p12_128, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0CorrnTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0ErrParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0ErrParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0ErrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0MeclRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0ParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0ParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u0p16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0RawMeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0VltgFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0VltgFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotAg0MeasMotAg0RawAgReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotAg0MeasMotAg0RawErrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotAg0MeasMotAg0RawTurnCntrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_MotAg0Meas, RTE_CONST, RTE_CONST) Rte_Inst_CDD_MotAg0Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_MotAg0Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotAg0ErrReg_Val (0U)
# define Rte_InitValue_MotAg0MeclQlfr_Val (0U)
# define Rte_InitValue_MotAg0ParFltCnt_Val (0U)
# define Rte_InitValue_MotAg0VltgFltCnt_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg0Meas_MotAg0ErrReg_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg0Meas_MotAg0ParFltCnt_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg0Meas_MotAg0VltgFltCnt_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotAg0Meas_MotAg0MeclQlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg0Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, P2VAR(SigQlfr1, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) NtcQlfr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg0Meas_MotAg0CoeffTbl_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg0Meas_MotAg0CoeffTbl_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg0Meas_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_MotAg0Meas_MotAg0CoeffTblDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_26, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_MotAg0Meas_MotAg0CoeffTblDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotAg0ErrReg_Val Rte_Read_CDD_MotAg0Meas_MotAg0ErrReg_Val
# define Rte_Read_MotAg0ParFltCnt_Val Rte_Read_CDD_MotAg0Meas_MotAg0ParFltCnt_Val
# define Rte_Read_MotAg0VltgFltCnt_Val Rte_Read_CDD_MotAg0Meas_MotAg0VltgFltCnt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotAg0MeclQlfr_Val Rte_Write_CDD_MotAg0Meas_MotAg0MeclQlfr_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CDD_MotAg0Meas_GetNtcQlfrSts_Oper
# define Rte_Call_MotAg0CoeffTbl_GetErrorStatus Rte_Call_CDD_MotAg0Meas_MotAg0CoeffTbl_GetErrorStatus
# define Rte_Call_MotAg0CoeffTbl_SetRamBlockStatus Rte_Call_CDD_MotAg0Meas_MotAg0CoeffTbl_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_MotAg0Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_MotAg0CoeffTblDft Rte_CData_CDD_MotAg0Meas_MotAg0CoeffTblDft

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotAg0MeasMotAg0RawAgReg() (Rte_Inst_CDD_MotAg0Meas->Pim_dMotAg0MeasMotAg0RawAgReg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotAg0MeasMotAg0RawErrReg() (Rte_Inst_CDD_MotAg0Meas->Pim_dMotAg0MeasMotAg0RawErrReg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotAg0MeasMotAg0RawTurnCntrReg() (Rte_Inst_CDD_MotAg0Meas->Pim_dMotAg0MeasMotAg0RawTurnCntrReg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0ErrParFltCntPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0ErrParFltCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0ErrParFltNtcStInfoCntPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0ErrParFltNtcStInfoCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0ParFltCntPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0ParFltCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0ParFltNtcStInfoCntPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0ParFltNtcStInfoCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0RawMeclPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0RawMeclPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0VltgFltCntPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0VltgFltCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0VltgFltNtcStInfoCntPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0VltgFltNtcStInfoCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0ErrPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0ErrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0MeclRollgCntrPrev() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0MeclRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg0CoeffTbl() (*Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0CoeffTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg0CoeffTbl() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0CoeffTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg0CorrnTbl() (*Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0CorrnTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg0CorrnTbl() (Rte_Inst_CDD_MotAg0Meas->Pim_MotAg0CorrnTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_dMotAg0MeasMotAg0RawAgReg(void)
 *   uint32 *Rte_Pim_dMotAg0MeasMotAg0RawErrReg(void)
 *   uint32 *Rte_Pim_dMotAg0MeasMotAg0RawTurnCntrReg(void)
 *   uint16 *Rte_Pim_MotAg0ErrParFltCntPrev(void)
 *   uint16 *Rte_Pim_MotAg0ErrParFltNtcStInfoCntPrev(void)
 *   uint16 *Rte_Pim_MotAg0ParFltCntPrev(void)
 *   uint16 *Rte_Pim_MotAg0ParFltNtcStInfoCntPrev(void)
 *   u0p16 *Rte_Pim_MotAg0RawMeclPrev(void)
 *   uint16 *Rte_Pim_MotAg0VltgFltCntPrev(void)
 *   uint16 *Rte_Pim_MotAg0VltgFltNtcStInfoCntPrev(void)
 *   uint8 *Rte_Pim_MotAg0ErrPrev(void)
 *   uint8 *Rte_Pim_MotAg0MeclRollgCntrPrev(void)
 *   float32 *Rte_Pim_MotAg0CoeffTbl(void)
 *   sm5p12 *Rte_Pim_MotAg0CorrnTbl(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   float32 *Rte_CData_MotAg0CoeffTblDft(void)
 *
 *********************************************************************************************************************/


# define CDD_MotAg0Meas_START_SEC_CODE
# include "CDD_MotAg0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg0MeasInit1
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
 *   Std_ReturnType Rte_Call_MotAg0CoeffTbl_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg0MeasInit1 MotAg0MeasInit1
FUNC(void, CDD_MotAg0Meas_CODE) MotAg0MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg0MeasMotAg0CoeffTblRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg0MeasMotAg0CoeffTblRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg0MeasMotAg0CoeffTblRead_Oper(float32 *MotAgCoeffTbl_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg0MeasMotAg0CoeffTblRead_Oper MotAg0MeasMotAg0CoeffTblRead_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotAg0Meas_CODE) MotAg0MeasMotAg0CoeffTblRead_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_MotAg0Meas_CODE) MotAg0MeasMotAg0CoeffTblRead_Oper(P2VAR(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg0MeasMotAg0CoeffTblWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg0MeasMotAg0CoeffTblWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg0CoeffTbl_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg0MeasMotAg0CoeffTblWr_Oper(const float32 *MotAgCoeffTbl_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg0MeasMotAg0CoeffTblWr_Oper MotAg0MeasMotAg0CoeffTblWr_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotAg0Meas_CODE) MotAg0MeasMotAg0CoeffTblWr_Oper(P2CONST(float32, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_MotAg0Meas_CODE) MotAg0MeasMotAg0CoeffTblWr_Oper(P2CONST(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg0MeasPer2
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
 *   Std_ReturnType Rte_Read_MotAg0ErrReg_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAg0ParFltCnt_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg0VltgFltCnt_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAg0MeclQlfr_Val(SigQlfr1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg0MeasPer2 MotAg0MeasPer2
FUNC(void, CDD_MotAg0Meas_CODE) MotAg0MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_MotAg0Meas_STOP_SEC_CODE
# include "CDD_MotAg0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1457981262
#    error "The magic number of the generated file <C:/Component/CM620A_MotAg0Meas_Impl/tools/contract/Rte_CDD_MotAg0Meas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1457981262
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_MOTAG0MEAS_H */
