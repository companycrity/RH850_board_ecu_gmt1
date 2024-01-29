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
 *          File:  Rte_PwrDiscnct.h
 *     SW-C Type:  PwrDiscnct
 *  Generated at:  Wed Apr 29 14:06:10 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PwrDiscnct> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PWRDISCNCT_H
# define _RTE_PWRDISCNCT_H

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

# include "Rte_PwrDiscnct_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PwrDiscnct
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctDeltaVltg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctDeltaVltg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctSeqATestCmplPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PwrDiscnct, RTE_CONST, RTE_CONST) Rte_Inst_PwrDiscnct; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PwrDiscnct, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BattVltg_Val (0.0F)
# define Rte_InitValue_BattVltgSwd1_Val (0.0F)
# define Rte_InitValue_BattVltgSwd2_Val (0.0F)
# define Rte_InitValue_PwrDiscnctATestCmpl_Logl (FALSE)
# define Rte_InitValue_PwrDiscnctBTestCmpl_Logl (FALSE)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_BattVltg_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_BattVltgSwd1_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_BattVltgSwd2_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrDiscnct_PwrDiscnctATestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrDiscnct_PwrDiscnctBTestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrDiscnct_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, P2VAR(SigQlfr1, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) NtcQlfr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrDiscnct_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_BattVltgSwdMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctOpenThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x042FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x042PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x04AFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x04APassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BattVltg_Val Rte_Read_PwrDiscnct_BattVltg_Val
# define Rte_Read_BattVltgSwd1_Val Rte_Read_PwrDiscnct_BattVltgSwd1_Val
# define Rte_Read_BattVltgSwd2_Val Rte_Read_PwrDiscnct_BattVltgSwd2_Val
# define Rte_Read_StrtUpSt_Val Rte_Read_PwrDiscnct_StrtUpSt_Val
# define Rte_Read_SysSt_Val Rte_Read_PwrDiscnct_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PwrDiscnctATestCmpl_Logl Rte_Write_PwrDiscnct_PwrDiscnctATestCmpl_Logl
# define Rte_Write_PwrDiscnctBTestCmpl_Logl Rte_Write_PwrDiscnct_PwrDiscnctBTestCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_PwrDiscnct_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_PwrDiscnct_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_BattVltgSwdMax_Val Rte_Prm_PwrDiscnct_BattVltgSwdMax_Val

# define Rte_Prm_PwrDiscnctOpenThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctOpenThd_Val

# define Rte_Prm_PwrDiscnctNtc0x042FailStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x042FailStep_Val

# define Rte_Prm_PwrDiscnctNtc0x042PassStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x042PassStep_Val

# define Rte_Prm_PwrDiscnctNtc0x04AFailStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x04AFailStep_Val

# define Rte_Prm_PwrDiscnctNtc0x04APassStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctNtc0x04APassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PwrDiscnctDeltaVltg1() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctDeltaVltg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrDiscnctDeltaVltg2() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctDeltaVltg2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrDiscnctSeqATestCmplPrev() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctSeqATestCmplPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PwrDiscnctDeltaVltg1(void)
 *   float32 *Rte_Pim_PwrDiscnctDeltaVltg2(void)
 *   boolean *Rte_Pim_PwrDiscnctSeqATestCmplPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_BattVltgSwdMax_Val(void)
 *   float32 Rte_Prm_PwrDiscnctOpenThd_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctNtc0x042FailStep_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctNtc0x042PassStep_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctNtc0x04AFailStep_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctNtc0x04APassStep_Val(void)
 *
 *********************************************************************************************************************/


# define PwrDiscnct_START_SEC_CODE
# include "PwrDiscnct_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrDiscnctPer1
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
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattVltgSwd1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattVltgSwd2_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrDiscnctATestCmpl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PwrDiscnctBTestCmpl_Logl(boolean data)
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

# define RTE_RUNNABLE_PwrDiscnctPer1 PwrDiscnctPer1
FUNC(void, PwrDiscnct_CODE) PwrDiscnctPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PwrDiscnct_STOP_SEC_CODE
# include "PwrDiscnct_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1430338253
#    error "The magic number of the generated file <C:/component/ES003A_PwrDiscnct_Impl/tools/contract/Rte_PwrDiscnct.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1430338253
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_PWRDISCNCT_H */
