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
 *          File:  Rte_GmMsg337BusChassisExp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg337BusChassisExp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG337BUSCHASSISEXP_H
# define _RTE_GMMSG337BUSCHASSISEXP_H

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

# include "Rte_GmMsg337BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_ApaReqActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_FbReqActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_InvldMsg337_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_MissMsg337_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg337BusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqActvRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqActvVldRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqProtnValRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqRollgCntrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlAgReqTarAgRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvProtnValRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SteerWhlFbReqActvRollgCntrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ApaReqActv_Logl (FALSE)
#  define Rte_InitValue_FbReqActv_Logl (FALSE)
#  define Rte_InitValue_InvldMsg337_Logl (FALSE)
#  define Rte_InitValue_LstRxnTiMsg337BusChassisExp_Val (0U)
#  define Rte_InitValue_MissMsg337_Logl (FALSE)
#  define Rte_InitValue_SteerWhlAgReqActvRaw_Val (0U)
#  define Rte_InitValue_SteerWhlAgReqActvVldRaw_Val (0U)
#  define Rte_InitValue_SteerWhlAgReqProtnValRaw_Val (0U)
#  define Rte_InitValue_SteerWhlAgReqRollgCntrRaw_Val (0U)
#  define Rte_InitValue_SteerWhlAgReqTarAg_Val (0.0F)
#  define Rte_InitValue_SteerWhlAgReqTarAgRaw_Val (0U)
#  define Rte_InitValue_SteerWhlFbReqActvProtnValRaw_Val (0U)
#  define Rte_InitValue_SteerWhlFbReqActvRaw_Val (0U)
#  define Rte_InitValue_SteerWhlFbReqActvRollgCntrRaw_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_LstRxnTiMsg337BusChassisExp_Val Rte_Read_GmMsg337BusChassisExp_LstRxnTiMsg337BusChassisExp_Val
#  define Rte_Read_GmMsg337BusChassisExp_LstRxnTiMsg337BusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg337BusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgReqActvRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlAgReqActvRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgReqActvVldRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvVldRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqActvVldRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlAgReqActvVldRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgReqProtnValRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqProtnValRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqProtnValRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlAgReqProtnValRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgReqRollgCntrRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqRollgCntrRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqRollgCntrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlAgReqRollgCntrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgReqTarAgRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqTarAgRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlAgReqTarAgRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlAgReqTarAgRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlFbReqActvProtnValRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvProtnValRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvProtnValRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlFbReqActvProtnValRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlFbReqActvRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlFbReqActvRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlFbReqActvRollgCntrRaw_Val Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRollgCntrRaw_Val
#  define Rte_Read_GmMsg337BusChassisExp_SteerWhlFbReqActvRollgCntrRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SteerWhlFbReqActvRollgCntrRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ApaReqActv_Logl Rte_Write_GmMsg337BusChassisExp_ApaReqActv_Logl
#  define Rte_Write_GmMsg337BusChassisExp_ApaReqActv_Logl(data) (Rte_GmMsg337BusChassisExp_ApaReqActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FbReqActv_Logl Rte_Write_GmMsg337BusChassisExp_FbReqActv_Logl
#  define Rte_Write_GmMsg337BusChassisExp_FbReqActv_Logl(data) (Rte_GmMsg337BusChassisExp_FbReqActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_InvldMsg337_Logl Rte_Write_GmMsg337BusChassisExp_InvldMsg337_Logl
#  define Rte_Write_GmMsg337BusChassisExp_InvldMsg337_Logl(data) (Rte_GmMsg337BusChassisExp_InvldMsg337_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MissMsg337_Logl Rte_Write_GmMsg337BusChassisExp_MissMsg337_Logl
#  define Rte_Write_GmMsg337BusChassisExp_MissMsg337_Logl(data) (Rte_GmMsg337BusChassisExp_MissMsg337_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteerWhlAgReqTarAg_Val Rte_Write_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val
#  define Rte_Write_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val(data) (Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_GmMsg337BusChassisExpInvldDiagcTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg337BusChassisExpInvldDiagcTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg337BusChassisExpInvldProtnValTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg337BusChassisExpInvldProtnValTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg337BusChassisExpInvldRollgCntrTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg337BusChassisExpInvldRollgCntrTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg337BusChassisExpMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg337BusChassisExpMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg337BusChassisExpTarAgPolarity_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg337BusChassisExpTarAgPolarity_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqProtnValInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbProtnValInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbRollgCntrInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevRxnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevAgReqRollgCntVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevFbReqRollgCntVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpRollgCntrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg337BusChassisExpAgReqProtnValInvldTmr() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqProtnValInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpAgReqRollgCntrInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpFbProtnValInvldTmr() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbProtnValInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpFbRollgCntrInvldTmr() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpFbRollgCntrInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpInvldTmr() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpPrevRxnTi() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevRxnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpPrevAgReqRollgCntVal() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevAgReqRollgCntVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpPrevFbReqRollgCntVal() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevFbReqRollgCntVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpPrevInvld() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpPrevInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg337BusChassisExpRollgCntrRst() \
  (&Rte_GmMsg337BusChassisExp_GmMsg337BusChassisExpRollgCntrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg337BusChassisExp_START_SEC_CODE
# include "GmMsg337BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg337BusChassisExpInit1 GmMsg337BusChassisExpInit1
#  define RTE_RUNNABLE_GmMsg337BusChassisExpPer1 GmMsg337BusChassisExpPer1
# endif

FUNC(void, GmMsg337BusChassisExp_CODE) GmMsg337BusChassisExpInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg337BusChassisExp_CODE) GmMsg337BusChassisExpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg337BusChassisExp_STOP_SEC_CODE
# include "GmMsg337BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG337BUSCHASSISEXP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
