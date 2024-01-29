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
 *          File:  Rte_GmMsg1E9BusHiSpd.h
 *     SW-C Type:  GmMsg1E9BusHiSpd
 *  Generated at:  Thu Apr 21 15:07:20 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1E9BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1E9BUSHISPD_H
# define _RTE_GMMSG1E9BUSHISPD_H

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

# include "Rte_GmMsg1E9BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg1E9BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E9BusHiSpdAbsFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E9BusHiSpdLatAInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E9BusHiSpdTcsEnaTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E9BusHiSpdYawRateInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg1E9BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg1E9BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg1E9BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AbsActvRaw_Val (0U)
# define Rte_InitValue_AbsFaildRaw_Val (0U)
# define Rte_InitValue_InvldMsg1E9_Logl (FALSE)
# define Rte_InitValue_LstRxnTiMsg1E9_Val (0U)
# define Rte_InitValue_MissMsg1E9_Logl (FALSE)
# define Rte_InitValue_RdntVehStabyEnhmtActv_Logl (FALSE)
# define Rte_InitValue_SerlComAbsActv_Logl (FALSE)
# define Rte_InitValue_SerlComLatA_Val (0.0F)
# define Rte_InitValue_SerlComTcsActv_Logl (FALSE)
# define Rte_InitValue_SerlComYawRate_Val (0.0F)
# define Rte_InitValue_SerlComYawRateVld_Logl (FALSE)
# define Rte_InitValue_TracCtrlSysActvRaw_Val (0U)
# define Rte_InitValue_TracCtrlSysEnaRaw_Val (0U)
# define Rte_InitValue_VehDynCtrlSysStRaw_Val (0U)
# define Rte_InitValue_VehDynYawRateRaw_Val (0U)
# define Rte_InitValue_VehDynYawRateVldRaw_Val (0U)
# define Rte_InitValue_VehLatAVldSerlCom_Logl (FALSE)
# define Rte_InitValue_VehStabyEnhmtActv_Logl (FALSE)
# define Rte_InitValue_VehStabyEnhmtActvRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtLatARaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtLatAVldRaw_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_AbsActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_AbsFaildRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_LstRxnTiMsg1E9_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_RdntVehStabyEnhmtActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysEnaRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_VehDynCtrlSysStRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateVldRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtActvRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatARaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatAVldRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_MissMsg1E9_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_SerlComLatA_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg1E9BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg1E9BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG1E9BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg1E9BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatADft_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateDft_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdAbsFaildTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatAInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdTcsDisadTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AbsActvRaw_Val Rte_Read_GmMsg1E9BusHiSpd_AbsActvRaw_Val
# define Rte_Read_AbsFaildRaw_Val Rte_Read_GmMsg1E9BusHiSpd_AbsFaildRaw_Val
# define Rte_Read_LstRxnTiMsg1E9_Val Rte_Read_GmMsg1E9BusHiSpd_LstRxnTiMsg1E9_Val
# define Rte_Read_RdntVehStabyEnhmtActv_Logl Rte_Read_GmMsg1E9BusHiSpd_RdntVehStabyEnhmtActv_Logl
# define Rte_Read_TracCtrlSysActvRaw_Val Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysActvRaw_Val
# define Rte_Read_TracCtrlSysEnaRaw_Val Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysEnaRaw_Val
# define Rte_Read_VehDynCtrlSysStRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehDynCtrlSysStRaw_Val
# define Rte_Read_VehDynYawRateRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateRaw_Val
# define Rte_Read_VehDynYawRateVldRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateVldRaw_Val
# define Rte_Read_VehStabyEnhmtActvRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtActvRaw_Val
# define Rte_Read_VehStabyEnhmtLatARaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatARaw_Val
# define Rte_Read_VehStabyEnhmtLatAVldRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatAVldRaw_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_InvldMsg1E9_Logl Rte_Write_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl
# define Rte_Write_MissMsg1E9_Logl Rte_Write_GmMsg1E9BusHiSpd_MissMsg1E9_Logl
# define Rte_Write_SerlComAbsActv_Logl Rte_Write_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl
# define Rte_Write_SerlComLatA_Val Rte_Write_GmMsg1E9BusHiSpd_SerlComLatA_Val
# define Rte_Write_SerlComTcsActv_Logl Rte_Write_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl
# define Rte_Write_SerlComYawRate_Val Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRate_Val
# define Rte_Write_SerlComYawRateVld_Logl Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl
# define Rte_Write_VehLatAVldSerlCom_Logl Rte_Write_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl
# define Rte_Write_VehStabyEnhmtActv_Logl Rte_Write_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg1E9BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg1E9BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg1E9BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg1E9BusHiSpdLatADft_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatADft_Val

# define Rte_Prm_GmMsg1E9BusHiSpdYawRateDft_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateDft_Val

# define Rte_Prm_GmMsg1E9BusHiSpdAbsFaildTiOut_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdAbsFaildTiOut_Val

# define Rte_Prm_GmMsg1E9BusHiSpdLatAInvldTiOut_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatAInvldTiOut_Val

# define Rte_Prm_GmMsg1E9BusHiSpdMissTiOut_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdMissTiOut_Val

# define Rte_Prm_GmMsg1E9BusHiSpdTcsDisadTiOut_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdTcsDisadTiOut_Val

# define Rte_Prm_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val

# define Rte_Prm_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val

# define Rte_Prm_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val Rte_Prm_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg1E9BusHiSpdAbsFaildTmr() (Rte_Inst_GmMsg1E9BusHiSpd->Pim_GmMsg1E9BusHiSpdAbsFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg1E9BusHiSpdLatAInvldTmr() (Rte_Inst_GmMsg1E9BusHiSpd->Pim_GmMsg1E9BusHiSpdLatAInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr() (Rte_Inst_GmMsg1E9BusHiSpd->Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg1E9BusHiSpdTcsEnaTmr() (Rte_Inst_GmMsg1E9BusHiSpd->Pim_GmMsg1E9BusHiSpdTcsEnaTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr() (Rte_Inst_GmMsg1E9BusHiSpd->Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg1E9BusHiSpdYawRateInvldTmr() (Rte_Inst_GmMsg1E9BusHiSpd->Pim_GmMsg1E9BusHiSpdYawRateInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg1E9BusHiSpdAbsFaildTmr(void)
 *   uint32 *Rte_Pim_GmMsg1E9BusHiSpdLatAInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr(void)
 *   uint32 *Rte_Pim_GmMsg1E9BusHiSpdTcsEnaTmr(void)
 *   uint32 *Rte_Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr(void)
 *   uint32 *Rte_Pim_GmMsg1E9BusHiSpdYawRateInvldTmr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmMsg1E9BusHiSpdLatADft_Val(void)
 *   float32 Rte_Prm_GmMsg1E9BusHiSpdYawRateDft_Val(void)
 *   uint16 Rte_Prm_GmMsg1E9BusHiSpdAbsFaildTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg1E9BusHiSpdLatAInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg1E9BusHiSpdMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg1E9BusHiSpdTcsDisadTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg1E9BusHiSpd_START_SEC_CODE
# include "GmMsg1E9BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1E9BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AbsActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsFaildRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LstRxnTiMsg1E9_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_RdntVehStabyEnhmtActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TracCtrlSysActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TracCtrlSysEnaRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehDynCtrlSysStRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehDynYawRateRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_VehDynYawRateVldRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtActvRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtLatARaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtLatAVldRaw_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_InvldMsg1E9_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MissMsg1E9_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SerlComAbsActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SerlComLatA_Val(float32 data)
 *   Std_ReturnType Rte_Write_SerlComTcsActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SerlComYawRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_SerlComYawRateVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehLatAVldSerlCom_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtActv_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg1E9BusHiSpdPer1 GmMsg1E9BusHiSpdPer1
FUNC(void, GmMsg1E9BusHiSpd_CODE) GmMsg1E9BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg1E9BusHiSpd_STOP_SEC_CODE
# include "GmMsg1E9BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1461257746
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_SerlComm/MM006A_GmMsg1E9BusHiSpd_Impl/tools/contract/Rte_GmMsg1E9BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461257746
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG1E9BUSHISPD_H */
