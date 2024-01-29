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
 *          File:  Rte_GmMsg0C5BusHiSpd.h
 *     SW-C Type:  GmMsg0C5BusHiSpd
 *  Generated at:  Tue Apr 26 15:43:31 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg0C5BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG0C5BUSHISPD_H
# define _RTE_GMMSG0C5BUSHISPD_H

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

# include "Rte_GmMsg0C5BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg0C5BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdLeInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdLeRstTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdLeSeqNrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevLeSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevLeVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevRiSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevRiVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdRiInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdRiRstTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdRiSeqNrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg0C5BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg0C5BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg0C5BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg0C5BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LeWhlDstPlsCntr_Val (0U)
# define Rte_InitValue_LeWhlDstPlsCntrRaw_Val (0U)
# define Rte_InitValue_LeWhlDstTiStamp_Val (0U)
# define Rte_InitValue_LeWhlDstTiStampRaw_Val (0U)
# define Rte_InitValue_LeWhlDstVld_Logl (FALSE)
# define Rte_InitValue_LeWhlDstVldRaw_Val (0U)
# define Rte_InitValue_LeWhlRotlStsRstRaw_Val (0U)
# define Rte_InitValue_LeWhlSeqNrRaw_Val (0U)
# define Rte_InitValue_LstRxnTiMsg0C5BusHiSpd_Val (0U)
# define Rte_InitValue_RiWhlDstPlsCntr_Val (0U)
# define Rte_InitValue_RiWhlDstPlsCntrRaw_Val (0U)
# define Rte_InitValue_RiWhlDstTiStamp_Val (0U)
# define Rte_InitValue_RiWhlDstTiStampRaw_Val (0U)
# define Rte_InitValue_RiWhlDstVld_Logl (FALSE)
# define Rte_InitValue_RiWhlDstVldRaw_Val (0U)
# define Rte_InitValue_RiWhlRotlStsRstRaw_Val (0U)
# define Rte_InitValue_RiWhlSeqNrRaw_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstPlsCntrRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstTiStampRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstVldRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_LeWhlRotlStsRstRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_LeWhlSeqNrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_LstRxnTiMsg0C5BusHiSpd_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstPlsCntrRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstTiStampRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstVldRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_RiWhlRotlStsRstRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg0C5BusHiSpd_RiWhlSeqNrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg0C5BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg0C5BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG0C5BUSHISPD_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg0C5BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRstTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdSeqNrTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LeWhlDstPlsCntrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstPlsCntrRaw_Val
# define Rte_Read_LeWhlDstTiStampRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstTiStampRaw_Val
# define Rte_Read_LeWhlDstVldRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstVldRaw_Val
# define Rte_Read_LeWhlRotlStsRstRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlRotlStsRstRaw_Val
# define Rte_Read_LeWhlSeqNrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlSeqNrRaw_Val
# define Rte_Read_LstRxnTiMsg0C5BusHiSpd_Val Rte_Read_GmMsg0C5BusHiSpd_LstRxnTiMsg0C5BusHiSpd_Val
# define Rte_Read_RiWhlDstPlsCntrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstPlsCntrRaw_Val
# define Rte_Read_RiWhlDstTiStampRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstTiStampRaw_Val
# define Rte_Read_RiWhlDstVldRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstVldRaw_Val
# define Rte_Read_RiWhlRotlStsRstRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlRotlStsRstRaw_Val
# define Rte_Read_RiWhlSeqNrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlSeqNrRaw_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_LeWhlDstPlsCntr_Val Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val
# define Rte_Write_LeWhlDstTiStamp_Val Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val
# define Rte_Write_LeWhlDstVld_Logl Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl
# define Rte_Write_RiWhlDstPlsCntr_Val Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val
# define Rte_Write_RiWhlDstTiStamp_Val Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val
# define Rte_Write_RiWhlDstVld_Logl Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg0C5BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg0C5BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg0C5BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg0C5BusHiSpdInvldTiOut_Val Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdInvldTiOut_Val

# define Rte_Prm_GmMsg0C5BusHiSpdMissTiOut_Val Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdMissTiOut_Val

# define Rte_Prm_GmMsg0C5BusHiSpdRstTiOut_Val Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRstTiOut_Val

# define Rte_Prm_GmMsg0C5BusHiSpdSeqNrTiOut_Val Rte_Prm_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdSeqNrTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg0C5BusHiSpdLeInvldTmr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdLeInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdLeRstTmr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdLeRstTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdLeSeqNrTmr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdLeSeqNrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevRxnTi() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdRiInvldTmr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdRiInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdRiRstTmr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdRiRstTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdRiSeqNrTmr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdRiSeqNrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevLeSeqNr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevLeSeqNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevRiSeqNr() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevRiSeqNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevLeVld() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevLeVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdPrevRiVld() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdPrevRiVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg0C5BusHiSpdRollgCntrRst() (Rte_Inst_GmMsg0C5BusHiSpd->Pim_GmMsg0C5BusHiSpdRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GmMsg0C5BusHiSpdLeInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg0C5BusHiSpdLeRstTmr(void)
 *   uint32 *Rte_Pim_GmMsg0C5BusHiSpdLeSeqNrTmr(void)
 *   uint32 *Rte_Pim_GmMsg0C5BusHiSpdPrevRxnTi(void)
 *   uint32 *Rte_Pim_GmMsg0C5BusHiSpdRiInvldTmr(void)
 *   uint32 *Rte_Pim_GmMsg0C5BusHiSpdRiRstTmr(void)
 *   uint32 *Rte_Pim_GmMsg0C5BusHiSpdRiSeqNrTmr(void)
 *   uint16 *Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt(void)
 *   uint16 *Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp(void)
 *   uint16 *Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt(void)
 *   uint16 *Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp(void)
 *   uint8 *Rte_Pim_GmMsg0C5BusHiSpdPrevLeSeqNr(void)
 *   uint8 *Rte_Pim_GmMsg0C5BusHiSpdPrevRiSeqNr(void)
 *   boolean *Rte_Pim_GmMsg0C5BusHiSpdPrevLeVld(void)
 *   boolean *Rte_Pim_GmMsg0C5BusHiSpdPrevRiVld(void)
 *   boolean *Rte_Pim_GmMsg0C5BusHiSpdRollgCntrRst(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg0C5BusHiSpdInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg0C5BusHiSpdMissTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg0C5BusHiSpdRstTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg0C5BusHiSpdSeqNrTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg0C5BusHiSpd_START_SEC_CODE
# include "GmMsg0C5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg0C5BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg0C5BusHiSpdInit1 GmMsg0C5BusHiSpdInit1
FUNC(void, GmMsg0C5BusHiSpd_CODE) GmMsg0C5BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg0C5BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_LeWhlDstPlsCntrRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LeWhlDstTiStampRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LeWhlDstVldRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LeWhlRotlStsRstRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LeWhlSeqNrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LstRxnTiMsg0C5BusHiSpd_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_RiWhlDstPlsCntrRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_RiWhlDstTiStampRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_RiWhlDstVldRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RiWhlRotlStsRstRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RiWhlSeqNrRaw_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_LeWhlDstPlsCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LeWhlDstTiStamp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LeWhlDstVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RiWhlDstPlsCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_RiWhlDstTiStamp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_RiWhlDstVld_Logl(boolean data)
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

# define RTE_RUNNABLE_GmMsg0C5BusHiSpdPer1 GmMsg0C5BusHiSpdPer1
FUNC(void, GmMsg0C5BusHiSpd_CODE) GmMsg0C5BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg0C5BusHiSpd_STOP_SEC_CODE
# include "GmMsg0C5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1461710506
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Working/MM001A_GmMsg0C5BusHiSpd_Impl/tools/contract/Rte_GmMsg0C5BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461710506
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG0C5BUSHISPD_H */
