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
 *          File:  Rte_GmRoadWhlInQlfr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmRoadWhlInQlfr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMROADWHLINQLFR_H
# define _RTE_GMROADWHLINQLFR_H

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

# include "Rte_GmRoadWhlInQlfr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg500BusHiSpd_WhlPlsPerRev_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg500BusHiSpd_WhlRotlStsTiStampResl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlFrqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlLeFrq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlRiFrq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_WhlFrqVld_Logl (FALSE)
#  define Rte_InitValue_WhlLeDstPlsCntr_Val (0U)
#  define Rte_InitValue_WhlLeDstTiStamp_Val (0U)
#  define Rte_InitValue_WhlLeDstVld_Logl (FALSE)
#  define Rte_InitValue_WhlLeFrq_Val (0.01F)
#  define Rte_InitValue_WhlPlsPerRev_Val (1U)
#  define Rte_InitValue_WhlRiDstPlsCntr_Val (0U)
#  define Rte_InitValue_WhlRiDstTiStamp_Val (0U)
#  define Rte_InitValue_WhlRiDstVld_Logl (FALSE)
#  define Rte_InitValue_WhlRiFrq_Val (0.01F)
#  define Rte_InitValue_WhlRotlStsTiStampResl_Val (0.000000002F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_WhlLeDstPlsCntr_Val Rte_Read_GmRoadWhlInQlfr_WhlLeDstPlsCntr_Val
#  define Rte_Read_GmRoadWhlInQlfr_WhlLeDstPlsCntr_Val(data) (*(data) = Rte_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlLeDstTiStamp_Val Rte_Read_GmRoadWhlInQlfr_WhlLeDstTiStamp_Val
#  define Rte_Read_GmRoadWhlInQlfr_WhlLeDstTiStamp_Val(data) (*(data) = Rte_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlLeDstVld_Logl Rte_Read_GmRoadWhlInQlfr_WhlLeDstVld_Logl
#  define Rte_Read_GmRoadWhlInQlfr_WhlLeDstVld_Logl(data) (*(data) = Rte_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlPlsPerRev_Val Rte_Read_GmRoadWhlInQlfr_WhlPlsPerRev_Val
#  define Rte_Read_GmRoadWhlInQlfr_WhlPlsPerRev_Val(data) (*(data) = Rte_GmMsg500BusHiSpd_WhlPlsPerRev_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlRiDstPlsCntr_Val Rte_Read_GmRoadWhlInQlfr_WhlRiDstPlsCntr_Val
#  define Rte_Read_GmRoadWhlInQlfr_WhlRiDstPlsCntr_Val(data) (*(data) = Rte_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlRiDstTiStamp_Val Rte_Read_GmRoadWhlInQlfr_WhlRiDstTiStamp_Val
#  define Rte_Read_GmRoadWhlInQlfr_WhlRiDstTiStamp_Val(data) (*(data) = Rte_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlRiDstVld_Logl Rte_Read_GmRoadWhlInQlfr_WhlRiDstVld_Logl
#  define Rte_Read_GmRoadWhlInQlfr_WhlRiDstVld_Logl(data) (*(data) = Rte_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlRotlStsTiStampResl_Val Rte_Read_GmRoadWhlInQlfr_WhlRotlStsTiStampResl_Val
#  define Rte_Read_GmRoadWhlInQlfr_WhlRotlStsTiStampResl_Val(data) (*(data) = Rte_GmMsg500BusHiSpd_WhlRotlStsTiStampResl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_WhlFrqVld_Logl Rte_Write_GmRoadWhlInQlfr_WhlFrqVld_Logl
#  define Rte_Write_GmRoadWhlInQlfr_WhlFrqVld_Logl(data) (Rte_GmRoadWhlInQlfr_WhlFrqVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlLeFrq_Val Rte_Write_GmRoadWhlInQlfr_WhlLeFrq_Val
#  define Rte_Write_GmRoadWhlInQlfr_WhlLeFrq_Val(data) (Rte_GmRoadWhlInQlfr_WhlLeFrq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlRiFrq_Val Rte_Write_GmRoadWhlInQlfr_WhlRiFrq_Val
#  define Rte_Write_GmRoadWhlInQlfr_WhlRiFrq_Val(data) (Rte_GmRoadWhlInQlfr_WhlRiFrq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmRoadWhlInQlfrMaxAllwblFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->GmRoadWhlInQlfrMaxAllwblFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmRoadWhlInQlfrMaxFrqChg_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->GmRoadWhlInQlfrMaxFrqChg_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRawLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRawRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRawLeWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRawRiWhlFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldTiLeFrqChg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldTiRiFrqChg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldLeWhlDstPlsCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldLeWhlDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldRiWhlDstPlsCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevVldRiWhlDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeDeltaPls; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeDeltaTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiDeltaPls; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiDeltaTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevLeWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_PrevRiWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiWhlFrqVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevLeWhlFrq() \
  (&Rte_GmRoadWhlInQlfr_PrevLeWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevRawLeWhlFrq() \
  (&Rte_GmRoadWhlInQlfr_PrevRawLeWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevRawRiWhlFrq() \
  (&Rte_GmRoadWhlInQlfr_PrevRawRiWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevRiWhlFrq() \
  (&Rte_GmRoadWhlInQlfr_PrevRiWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrRawLeWhlFrq() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRawLeWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrRawRiWhlFrq() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRawRiWhlFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVldTiLeFrqChg() \
  (&Rte_GmRoadWhlInQlfr_PrevVldTiLeFrqChg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVldTiRiFrqChg() \
  (&Rte_GmRoadWhlInQlfr_PrevVldTiRiFrqChg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVldLeWhlDstPlsCntr() \
  (&Rte_GmRoadWhlInQlfr_PrevVldLeWhlDstPlsCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVldLeWhlDstTiStamp() \
  (&Rte_GmRoadWhlInQlfr_PrevVldLeWhlDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVldRiWhlDstPlsCntr() \
  (&Rte_GmRoadWhlInQlfr_PrevVldRiWhlDstPlsCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVldRiWhlDstTiStamp() \
  (&Rte_GmRoadWhlInQlfr_PrevVldRiWhlDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrLeDeltaPls() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeDeltaPls) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrLeDeltaTiStamp() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeDeltaTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrRiDeltaPls() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiDeltaPls) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrRiDeltaTiStamp() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiDeltaTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLeWhlFrqVld() \
  (&Rte_GmRoadWhlInQlfr_PrevLeWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevRiWhlFrqVld() \
  (&Rte_GmRoadWhlInQlfr_PrevRiWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrLeWhlFrqVld() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrLeWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmRoadWhlInQlfrRiWhlFrqVld() \
  (&Rte_GmRoadWhlInQlfr_dGmRoadWhlInQlfrRiWhlFrqVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmRoadWhlInQlfr_START_SEC_CODE
# include "GmRoadWhlInQlfr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmRoadWhlInQlfrInit1 GmRoadWhlInQlfrInit1
#  define RTE_RUNNABLE_GmRoadWhlInQlfrPer1 GmRoadWhlInQlfrPer1
# endif

FUNC(void, GmRoadWhlInQlfr_CODE) GmRoadWhlInQlfrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmRoadWhlInQlfr_CODE) GmRoadWhlInQlfrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmRoadWhlInQlfr_STOP_SEC_CODE
# include "GmRoadWhlInQlfr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMROADWHLINQLFR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
