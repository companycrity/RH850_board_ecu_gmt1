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
 *          File:  Rte_EcuTMeas.h
 *     SW-C Type:  EcuTMeas
 *  Generated at:  Mon Mar 21 14:28:32 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <EcuTMeas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ECUTMEAS_H
# define _RTE_ECUTMEAS_H

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

# include "Rte_EcuTMeas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_EcuTMeas
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EcuTMeasFilStVarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_EcuTMeas, RTE_CONST, RTE_CONST) Rte_Inst_EcuTMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_EcuTMeas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsLimdTPrfmnc_Logl (FALSE)
# define Rte_InitValue_EcuT_Val (0.0F)
# define Rte_InitValue_EcuTAdcFaild_Logl (FALSE)
# define Rte_InitValue_EcuTFild_Val (25.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EcuTMeas_DiagcStsLimdTPrfmnc_Logl(P2VAR(boolean, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EcuTMeas_EcuT_Val(P2VAR(float32, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EcuTMeas_EcuTAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EcuTMeas_EcuTFild_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasDftT_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasFilTau_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasRngDiagcMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasRngDiagcMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasScag_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasScagOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasNtc0x045FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_EcuTMeas_EcuTMeasNtc0x045PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsLimdTPrfmnc_Logl Rte_Read_EcuTMeas_DiagcStsLimdTPrfmnc_Logl
# define Rte_Read_EcuT_Val Rte_Read_EcuTMeas_EcuT_Val
# define Rte_Read_EcuTAdcFaild_Logl Rte_Read_EcuTMeas_EcuTAdcFaild_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_EcuTFild_Val Rte_Write_EcuTMeas_EcuTFild_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_EcuTMeas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_EcuTMeasDftT_Val Rte_Prm_EcuTMeas_EcuTMeasDftT_Val

# define Rte_Prm_EcuTMeasFilTau_Val Rte_Prm_EcuTMeas_EcuTMeasFilTau_Val

# define Rte_Prm_EcuTMeasRngDiagcMax_Val Rte_Prm_EcuTMeas_EcuTMeasRngDiagcMax_Val

# define Rte_Prm_EcuTMeasRngDiagcMin_Val Rte_Prm_EcuTMeas_EcuTMeasRngDiagcMin_Val

# define Rte_Prm_EcuTMeasScag_Val Rte_Prm_EcuTMeas_EcuTMeasScag_Val

# define Rte_Prm_EcuTMeasScagOffs_Val Rte_Prm_EcuTMeas_EcuTMeasScagOffs_Val

# define Rte_Prm_EcuTMeasNtc0x045FailStep_Val Rte_Prm_EcuTMeas_EcuTMeasNtc0x045FailStep_Val

# define Rte_Prm_EcuTMeasNtc0x045PassStep_Val Rte_Prm_EcuTMeas_EcuTMeasNtc0x045PassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_EcuTMeasFilStVarPrev() (Rte_Inst_EcuTMeas->Pim_EcuTMeasFilStVarPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   FilLpRec1 *Rte_Pim_EcuTMeasFilStVarPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EcuTMeasDftT_Val(void)
 *   float32 Rte_Prm_EcuTMeasFilTau_Val(void)
 *   float32 Rte_Prm_EcuTMeasRngDiagcMax_Val(void)
 *   float32 Rte_Prm_EcuTMeasRngDiagcMin_Val(void)
 *   float32 Rte_Prm_EcuTMeasScag_Val(void)
 *   float32 Rte_Prm_EcuTMeasScagOffs_Val(void)
 *   uint16 Rte_Prm_EcuTMeasNtc0x045FailStep_Val(void)
 *   uint16 Rte_Prm_EcuTMeasNtc0x045PassStep_Val(void)
 *
 *********************************************************************************************************************/


# define EcuTMeas_START_SEC_CODE
# include "EcuTMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: EcuTMeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuT_Val(float32 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EcuTMeasInit1 EcuTMeasInit1
FUNC(void, EcuTMeas_CODE) EcuTMeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EcuTMeasPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagcStsLimdTPrfmnc_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTAdcFaild_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EcuTFild_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EcuTMeasPer1 EcuTMeasPer1
FUNC(void, EcuTMeas_CODE) EcuTMeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define EcuTMeas_STOP_SEC_CODE
# include "EcuTMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1458581415
#    error "The magic number of the generated file <C:/Component/ES210A_EcuTMeas_Impl/tools/contract/Rte_EcuTMeas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1458581415
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_ECUTMEAS_H */
