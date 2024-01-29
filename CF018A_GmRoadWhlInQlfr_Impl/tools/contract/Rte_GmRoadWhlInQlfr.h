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
 *          File:  Rte_GmRoadWhlInQlfr.h
 *     SW-C Type:  GmRoadWhlInQlfr
 *  Generated at:  Wed Mar 23 11:16:34 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmRoadWhlInQlfr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMROADWHLINQLFR_H
# define _RTE_GMROADWHLINQLFR_H

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

# include "Rte_GmRoadWhlInQlfr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmRoadWhlInQlfr
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLeWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRawLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRawRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRiWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVldLeWhlDstPlsCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVldLeWhlDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVldRiWhlDstPlsCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVldRiWhlDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVldTiLeFrqChg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVldTiRiFrqChg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrLeDeltaPls; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrLeDeltaTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrLeWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrRawLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrRawRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrRiDeltaPls; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrRiDeltaTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmRoadWhlInQlfrRiWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmRoadWhlInQlfr, RTE_CONST, RTE_CONST) Rte_Inst_GmRoadWhlInQlfr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmRoadWhlInQlfr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_WhlFrqVld_Logl (FALSE)
# define Rte_InitValue_WhlLeDstPlsCntr_Val (0U)
# define Rte_InitValue_WhlLeDstTiStamp_Val (0U)
# define Rte_InitValue_WhlLeDstVld_Logl (FALSE)
# define Rte_InitValue_WhlLeFrq_Val (0.01F)
# define Rte_InitValue_WhlPlsPerRev_Val (1U)
# define Rte_InitValue_WhlRiDstPlsCntr_Val (0U)
# define Rte_InitValue_WhlRiDstTiStamp_Val (0U)
# define Rte_InitValue_WhlRiDstVld_Logl (FALSE)
# define Rte_InitValue_WhlRiFrq_Val (0.01F)
# define Rte_InitValue_WhlRotlStsTiStampResl_Val (0.000000002F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlLeDstPlsCntr_Val(P2VAR(uint16, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlLeDstTiStamp_Val(P2VAR(uint16, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlLeDstVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlPlsPerRev_Val(P2VAR(uint8, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlRiDstPlsCntr_Val(P2VAR(uint16, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlRiDstTiStamp_Val(P2VAR(uint16, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlRiDstVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmRoadWhlInQlfr_WhlRotlStsTiStampResl_Val(P2VAR(float32, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmRoadWhlInQlfr_WhlFrqVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmRoadWhlInQlfr_WhlLeFrq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmRoadWhlInQlfr_WhlRiFrq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmRoadWhlInQlfr_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmRoadWhlInQlfr_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_GMROADWHLINQLFR_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmRoadWhlInQlfr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmRoadWhlInQlfr_GmRoadWhlInQlfrMaxAllwblFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmRoadWhlInQlfr_GmRoadWhlInQlfrMaxFrqChg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_WhlLeDstPlsCntr_Val Rte_Read_GmRoadWhlInQlfr_WhlLeDstPlsCntr_Val
# define Rte_Read_WhlLeDstTiStamp_Val Rte_Read_GmRoadWhlInQlfr_WhlLeDstTiStamp_Val
# define Rte_Read_WhlLeDstVld_Logl Rte_Read_GmRoadWhlInQlfr_WhlLeDstVld_Logl
# define Rte_Read_WhlPlsPerRev_Val Rte_Read_GmRoadWhlInQlfr_WhlPlsPerRev_Val
# define Rte_Read_WhlRiDstPlsCntr_Val Rte_Read_GmRoadWhlInQlfr_WhlRiDstPlsCntr_Val
# define Rte_Read_WhlRiDstTiStamp_Val Rte_Read_GmRoadWhlInQlfr_WhlRiDstTiStamp_Val
# define Rte_Read_WhlRiDstVld_Logl Rte_Read_GmRoadWhlInQlfr_WhlRiDstVld_Logl
# define Rte_Read_WhlRotlStsTiStampResl_Val Rte_Read_GmRoadWhlInQlfr_WhlRotlStsTiStampResl_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_WhlFrqVld_Logl Rte_Write_GmRoadWhlInQlfr_WhlFrqVld_Logl
# define Rte_Write_WhlLeFrq_Val Rte_Write_GmRoadWhlInQlfr_WhlLeFrq_Val
# define Rte_Write_WhlRiFrq_Val Rte_Write_GmRoadWhlInQlfr_WhlRiFrq_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmRoadWhlInQlfr_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmRoadWhlInQlfr_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmRoadWhlInQlfr_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val Rte_Prm_GmRoadWhlInQlfr_GmRoadWhlInQlfrMaxAllwblFrq_Val

# define Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val Rte_Prm_GmRoadWhlInQlfr_GmRoadWhlInQlfrMaxFrqChg_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevLeWhlFrq() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevLeWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRawLeWhlFrq() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevRawLeWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRawRiWhlFrq() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevRawRiWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRiWhlFrq() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevRiWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrRawLeWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrRawRiWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVldTiLeFrqChg() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevVldTiLeFrqChg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVldTiRiFrqChg() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevVldTiRiFrqChg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVldLeWhlDstPlsCntr() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevVldLeWhlDstPlsCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVldLeWhlDstTiStamp() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevVldLeWhlDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVldRiWhlDstPlsCntr() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevVldRiWhlDstPlsCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVldRiWhlDstTiStamp() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevVldRiWhlDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrLeDeltaPls) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrLeDeltaTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrRiDeltaPls) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrRiDeltaTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLeWhlFrqVld() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevLeWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRiWhlFrqVld() (Rte_Inst_GmRoadWhlInQlfr->Pim_PrevRiWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrLeWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld() (Rte_Inst_GmRoadWhlInQlfr->Pim_dGmRoadWhlInQlfrRiWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevLeWhlFrq(void)
 *   float32 *Rte_Pim_PrevRawLeWhlFrq(void)
 *   float32 *Rte_Pim_PrevRawRiWhlFrq(void)
 *   float32 *Rte_Pim_PrevRiWhlFrq(void)
 *   float32 *Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq(void)
 *   float32 *Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq(void)
 *   uint32 *Rte_Pim_PrevVldTiLeFrqChg(void)
 *   uint32 *Rte_Pim_PrevVldTiRiFrqChg(void)
 *   uint16 *Rte_Pim_PrevVldLeWhlDstPlsCntr(void)
 *   uint16 *Rte_Pim_PrevVldLeWhlDstTiStamp(void)
 *   uint16 *Rte_Pim_PrevVldRiWhlDstPlsCntr(void)
 *   uint16 *Rte_Pim_PrevVldRiWhlDstTiStamp(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls(void)
 *   uint16 *Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp(void)
 *   boolean *Rte_Pim_PrevLeWhlFrqVld(void)
 *   boolean *Rte_Pim_PrevRiWhlFrqVld(void)
 *   boolean *Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld(void)
 *   boolean *Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val(void)
 *   float32 Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val(void)
 *
 *********************************************************************************************************************/


# define GmRoadWhlInQlfr_START_SEC_CODE
# include "GmRoadWhlInQlfr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmRoadWhlInQlfrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmRoadWhlInQlfrInit1 GmRoadWhlInQlfrInit1
FUNC(void, GmRoadWhlInQlfr_CODE) GmRoadWhlInQlfrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmRoadWhlInQlfrPer1
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
 *   Std_ReturnType Rte_Read_WhlLeDstPlsCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlLeDstTiStamp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlLeDstVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlPlsPerRev_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlRiDstPlsCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlRiDstTiStamp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlRiDstVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlRotlStsTiStampResl_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_WhlFrqVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlLeFrq_Val(float32 data)
 *   Std_ReturnType Rte_Write_WhlRiFrq_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmRoadWhlInQlfrPer1 GmRoadWhlInQlfrPer1
FUNC(void, GmRoadWhlInQlfr_CODE) GmRoadWhlInQlfrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmRoadWhlInQlfr_STOP_SEC_CODE
# include "GmRoadWhlInQlfr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1458747890
#    error "The magic number of the generated file <C:/Component/CF018A_GmRoadWhlInQlfr_Impl/tools/contract/Rte_GmRoadWhlInQlfr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1458747890
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMROADWHLINQLFR_H */
