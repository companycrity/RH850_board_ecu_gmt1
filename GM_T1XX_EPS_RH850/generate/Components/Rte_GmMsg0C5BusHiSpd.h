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
 *          File:  Rte_GmMsg0C5BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg0C5BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG0C5BUSHISPD_H
# define _RTE_GMMSG0C5BUSHISPD_H

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

# include "Rte_GmMsg0C5BusHiSpd_Type.h"
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
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstPlsCntrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstTiStampRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlDstVldRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlRotlStsRstRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_LeWhlSeqNrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg0C5_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstPlsCntrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstTiStampRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlDstVldRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlRotlStsRstRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RiWhlSeqNrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_LeWhlDstPlsCntr_Val (0U)
#  define Rte_InitValue_LeWhlDstPlsCntrRaw_Val (0U)
#  define Rte_InitValue_LeWhlDstTiStamp_Val (0U)
#  define Rte_InitValue_LeWhlDstTiStampRaw_Val (0U)
#  define Rte_InitValue_LeWhlDstVld_Logl (FALSE)
#  define Rte_InitValue_LeWhlDstVldRaw_Val (0U)
#  define Rte_InitValue_LeWhlRotlStsRstRaw_Val (0U)
#  define Rte_InitValue_LeWhlSeqNrRaw_Val (0U)
#  define Rte_InitValue_LstRxnTiMsg0C5BusHiSpd_Val (0U)
#  define Rte_InitValue_RiWhlDstPlsCntr_Val (0U)
#  define Rte_InitValue_RiWhlDstPlsCntrRaw_Val (0U)
#  define Rte_InitValue_RiWhlDstTiStamp_Val (0U)
#  define Rte_InitValue_RiWhlDstTiStampRaw_Val (0U)
#  define Rte_InitValue_RiWhlDstVld_Logl (FALSE)
#  define Rte_InitValue_RiWhlDstVldRaw_Val (0U)
#  define Rte_InitValue_RiWhlRotlStsRstRaw_Val (0U)
#  define Rte_InitValue_RiWhlSeqNrRaw_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_LeWhlDstPlsCntrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstPlsCntrRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstPlsCntrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_LeWhlDstPlsCntrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LeWhlDstTiStampRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstTiStampRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstTiStampRaw_Val(data) (*(data) = Rte_SerlComInpProxy_LeWhlDstTiStampRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LeWhlDstVldRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstVldRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_LeWhlDstVldRaw_Val(data) (*(data) = Rte_SerlComInpProxy_LeWhlDstVldRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LeWhlRotlStsRstRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlRotlStsRstRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_LeWhlRotlStsRstRaw_Val(data) (*(data) = Rte_SerlComInpProxy_LeWhlRotlStsRstRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LeWhlSeqNrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_LeWhlSeqNrRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_LeWhlSeqNrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_LeWhlSeqNrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LstRxnTiMsg0C5BusHiSpd_Val Rte_Read_GmMsg0C5BusHiSpd_LstRxnTiMsg0C5BusHiSpd_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_LstRxnTiMsg0C5BusHiSpd_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg0C5_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RiWhlDstPlsCntrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstPlsCntrRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstPlsCntrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_RiWhlDstPlsCntrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RiWhlDstTiStampRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstTiStampRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstTiStampRaw_Val(data) (*(data) = Rte_SerlComInpProxy_RiWhlDstTiStampRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RiWhlDstVldRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstVldRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_RiWhlDstVldRaw_Val(data) (*(data) = Rte_SerlComInpProxy_RiWhlDstVldRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RiWhlRotlStsRstRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlRotlStsRstRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_RiWhlRotlStsRstRaw_Val(data) (*(data) = Rte_SerlComInpProxy_RiWhlRotlStsRstRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RiWhlSeqNrRaw_Val Rte_Read_GmMsg0C5BusHiSpd_RiWhlSeqNrRaw_Val
#  define Rte_Read_GmMsg0C5BusHiSpd_RiWhlSeqNrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_RiWhlSeqNrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_LeWhlDstPlsCntr_Val Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val
#  define Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val(data) (Rte_GmMsg0C5BusHiSpd_LeWhlDstPlsCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LeWhlDstTiStamp_Val Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val
#  define Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val(data) (Rte_GmMsg0C5BusHiSpd_LeWhlDstTiStamp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LeWhlDstVld_Logl Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl
#  define Rte_Write_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl(data) (Rte_GmMsg0C5BusHiSpd_LeWhlDstVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RiWhlDstPlsCntr_Val Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val
#  define Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val(data) (Rte_GmMsg0C5BusHiSpd_RiWhlDstPlsCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RiWhlDstTiStamp_Val Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val
#  define Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val(data) (Rte_GmMsg0C5BusHiSpd_RiWhlDstTiStamp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RiWhlDstVld_Logl Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl
#  define Rte_Write_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl(data) (Rte_GmMsg0C5BusHiSpd_RiWhlDstVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts6_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmMsg0C5BusHiSpdInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg0C5BusHiSpdInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg0C5BusHiSpdMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg0C5BusHiSpdMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg0C5BusHiSpdRstTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg0C5BusHiSpdRstTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg0C5BusHiSpdSeqNrTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg0C5BusHiSpdSeqNrTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeRstTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeSeqNrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiRstTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiSeqNrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstPlsCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstPlsCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstTiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg0C5BusHiSpdLeInvldTmr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdLeRstTmr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeRstTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdLeSeqNrTmr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdLeSeqNrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevRxnTi() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdRiInvldTmr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdRiRstTmr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiRstTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdRiSeqNrTmr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRiSeqNrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstPlsCnt() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstPlsCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevLeDstTiStamp() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstPlsCnt() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstPlsCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevRiDstTiStamp() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiDstTiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevLeSeqNr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeSeqNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevRiSeqNr() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiSeqNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevLeVld() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevLeVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdPrevRiVld() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdPrevRiVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg0C5BusHiSpdRollgCntrRst() \
  (&Rte_GmMsg0C5BusHiSpd_GmMsg0C5BusHiSpdRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg0C5BusHiSpd_START_SEC_CODE
# include "GmMsg0C5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg0C5BusHiSpdInit1 GmMsg0C5BusHiSpdInit1
#  define RTE_RUNNABLE_GmMsg0C5BusHiSpdPer1 GmMsg0C5BusHiSpdPer1
# endif

FUNC(void, GmMsg0C5BusHiSpd_CODE) GmMsg0C5BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg0C5BusHiSpd_CODE) GmMsg0C5BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg0C5BusHiSpd_STOP_SEC_CODE
# include "GmMsg0C5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG0C5BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
