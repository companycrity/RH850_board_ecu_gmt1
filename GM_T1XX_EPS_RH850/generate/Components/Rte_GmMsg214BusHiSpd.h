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
 *          File:  Rte_GmMsg214BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg214BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG214BUSHISPD_H
# define _RTE_GMMSG214BUSHISPD_H

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

# include "Rte_GmMsg214BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_AbsInvld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_AbsProtd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_MissMsg214_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_VehStabyEnhmtActvMsg214_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdProtnValRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvProtdRollgCntrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg214_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AbsActvProtdProtnValRaw_Val (0U)
#  define Rte_InitValue_AbsActvProtdRaw_Val (0U)
#  define Rte_InitValue_AbsActvProtdRollgCntrRaw_Val (0U)
#  define Rte_InitValue_AbsInvld_Logl (FALSE)
#  define Rte_InitValue_AbsProtd_Logl (FALSE)
#  define Rte_InitValue_LstRxnTiMsg214_Val (0U)
#  define Rte_InitValue_MissMsg214_Logl (FALSE)
#  define Rte_InitValue_RdntVehStabyEnhmtActv_Logl (FALSE)
#  define Rte_InitValue_RdntVehStabyEnhmtSysActvRaw_Val (0U)
#  define Rte_InitValue_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val (0U)
#  define Rte_InitValue_VehStabyEnhmtActv_Logl (FALSE)
#  define Rte_InitValue_VehStabyEnhmtActvMsg214_Logl (FALSE)
#  define Rte_InitValue_VehStabyEnhmtInvld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AbsActvProtdProtnValRaw_Val Rte_Read_GmMsg214BusHiSpd_AbsActvProtdProtnValRaw_Val
#  define Rte_Read_GmMsg214BusHiSpd_AbsActvProtdProtnValRaw_Val(data) (*(data) = Rte_SerlComInpProxy_AbsActvProtdProtnValRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AbsActvProtdRaw_Val Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRaw_Val
#  define Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRaw_Val(data) (*(data) = Rte_SerlComInpProxy_AbsActvProtdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AbsActvProtdRollgCntrRaw_Val Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRollgCntrRaw_Val
#  define Rte_Read_GmMsg214BusHiSpd_AbsActvProtdRollgCntrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_AbsActvProtdRollgCntrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LstRxnTiMsg214_Val Rte_Read_GmMsg214BusHiSpd_LstRxnTiMsg214_Val
#  define Rte_Read_GmMsg214BusHiSpd_LstRxnTiMsg214_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg214_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RdntVehStabyEnhmtSysActvRaw_Val Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRaw_Val
#  define Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRaw_Val(data) (*(data) = Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val
#  define Rte_Read_GmMsg214BusHiSpd_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehStabyEnhmtActv_Logl Rte_Read_GmMsg214BusHiSpd_VehStabyEnhmtActv_Logl
#  define Rte_Read_GmMsg214BusHiSpd_VehStabyEnhmtActv_Logl(data) (*(data) = Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AbsInvld_Logl Rte_Write_GmMsg214BusHiSpd_AbsInvld_Logl
#  define Rte_Write_GmMsg214BusHiSpd_AbsInvld_Logl(data) (Rte_GmMsg214BusHiSpd_AbsInvld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_AbsProtd_Logl Rte_Write_GmMsg214BusHiSpd_AbsProtd_Logl
#  define Rte_Write_GmMsg214BusHiSpd_AbsProtd_Logl(data) (Rte_GmMsg214BusHiSpd_AbsProtd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MissMsg214_Logl Rte_Write_GmMsg214BusHiSpd_MissMsg214_Logl
#  define Rte_Write_GmMsg214BusHiSpd_MissMsg214_Logl(data) (Rte_GmMsg214BusHiSpd_MissMsg214_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RdntVehStabyEnhmtActv_Logl Rte_Write_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl
#  define Rte_Write_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl(data) (Rte_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehStabyEnhmtActvMsg214_Logl Rte_Write_GmMsg214BusHiSpd_VehStabyEnhmtActvMsg214_Logl
#  define Rte_Write_GmMsg214BusHiSpd_VehStabyEnhmtActvMsg214_Logl(data) (Rte_GmMsg214BusHiSpd_VehStabyEnhmtActvMsg214_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehStabyEnhmtInvld_Logl Rte_Write_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl
#  define Rte_Write_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl(data) (Rte_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg214BusHiSpdAbsActvProtdInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg214BusHiSpdAbsActvProtdProtnValInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg214BusHiSpdAbsActvProtdRollgCntrInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg214BusHiSpdMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg214BusHiSpdMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg214BusHiSpdRdntVehStabyEnhmtActvInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg214BusHiSpdRdntVehStabyEnhmtActvRollgCntrInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevAbsProtd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldProtnValTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldRollgCntrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdInvldTmr() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdPrevRxnTi() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldRollgCntrTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdAbsActvProtdPrevRollgCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRdntVehStabyEnhmtPrevRollgCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdPrevAbsProtd() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevAbsProtd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdPrevVehStabyEnhmtInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg214BusHiSpdRollgCntrRst() \
  (&Rte_GmMsg214BusHiSpd_GmMsg214BusHiSpdRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg214BusHiSpd_START_SEC_CODE
# include "GmMsg214BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg214BusHiSpdInit1 GmMsg214BusHiSpdInit1
#  define RTE_RUNNABLE_GmMsg214BusHiSpdPer1 GmMsg214BusHiSpdPer1
# endif

FUNC(void, GmMsg214BusHiSpd_CODE) GmMsg214BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg214BusHiSpd_CODE) GmMsg214BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg214BusHiSpd_STOP_SEC_CODE
# include "GmMsg214BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG214BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
