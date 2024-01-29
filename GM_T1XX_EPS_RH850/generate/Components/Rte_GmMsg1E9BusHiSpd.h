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
 *          File:  Rte_GmMsg1E9BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1E9BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1E9BUSHISPD_H
# define _RTE_GMMSG1E9BUSHISPD_H

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

# include "Rte_GmMsg1E9BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_MissMsg1E9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComLatA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComYawRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsActvRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_AbsFaildRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1E9_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TracCtrlSysActvRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_TracCtrlSysEnaRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynCtrlSysStRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynYawRateRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehDynYawRateVldRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtActvRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLatARaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_VehStabyEnhmtLatAVldRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AbsActvRaw_Val (0U)
#  define Rte_InitValue_AbsFaildRaw_Val (0U)
#  define Rte_InitValue_InvldMsg1E9_Logl (FALSE)
#  define Rte_InitValue_LstRxnTiMsg1E9_Val (0U)
#  define Rte_InitValue_MissMsg1E9_Logl (FALSE)
#  define Rte_InitValue_RdntVehStabyEnhmtActv_Logl (FALSE)
#  define Rte_InitValue_SerlComAbsActv_Logl (FALSE)
#  define Rte_InitValue_SerlComLatA_Val (0.0F)
#  define Rte_InitValue_SerlComTcsActv_Logl (FALSE)
#  define Rte_InitValue_SerlComYawRate_Val (0.0F)
#  define Rte_InitValue_SerlComYawRateVld_Logl (FALSE)
#  define Rte_InitValue_TracCtrlSysActvRaw_Val (0U)
#  define Rte_InitValue_TracCtrlSysEnaRaw_Val (0U)
#  define Rte_InitValue_VehDynCtrlSysStRaw_Val (0U)
#  define Rte_InitValue_VehDynYawRateRaw_Val (0U)
#  define Rte_InitValue_VehDynYawRateVldRaw_Val (0U)
#  define Rte_InitValue_VehLatAVldSerlCom_Logl (FALSE)
#  define Rte_InitValue_VehStabyEnhmtActv_Logl (FALSE)
#  define Rte_InitValue_VehStabyEnhmtActvRaw_Val (0U)
#  define Rte_InitValue_VehStabyEnhmtLatARaw_Val (0U)
#  define Rte_InitValue_VehStabyEnhmtLatAVldRaw_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AbsActvRaw_Val Rte_Read_GmMsg1E9BusHiSpd_AbsActvRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_AbsActvRaw_Val(data) (*(data) = Rte_SerlComInpProxy_AbsActvRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AbsFaildRaw_Val Rte_Read_GmMsg1E9BusHiSpd_AbsFaildRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_AbsFaildRaw_Val(data) (*(data) = Rte_SerlComInpProxy_AbsFaildRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LstRxnTiMsg1E9_Val Rte_Read_GmMsg1E9BusHiSpd_LstRxnTiMsg1E9_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_LstRxnTiMsg1E9_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg1E9_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RdntVehStabyEnhmtActv_Logl Rte_Read_GmMsg1E9BusHiSpd_RdntVehStabyEnhmtActv_Logl
#  define Rte_Read_GmMsg1E9BusHiSpd_RdntVehStabyEnhmtActv_Logl(data) (*(data) = Rte_GmMsg214BusHiSpd_RdntVehStabyEnhmtActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TracCtrlSysActvRaw_Val Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysActvRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysActvRaw_Val(data) (*(data) = Rte_SerlComInpProxy_TracCtrlSysActvRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TracCtrlSysEnaRaw_Val Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysEnaRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_TracCtrlSysEnaRaw_Val(data) (*(data) = Rte_SerlComInpProxy_TracCtrlSysEnaRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehDynCtrlSysStRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehDynCtrlSysStRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_VehDynCtrlSysStRaw_Val(data) (*(data) = Rte_SerlComInpProxy_VehDynCtrlSysStRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehDynYawRateRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateRaw_Val(data) (*(data) = Rte_SerlComInpProxy_VehDynYawRateRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehDynYawRateVldRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateVldRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_VehDynYawRateVldRaw_Val(data) (*(data) = Rte_SerlComInpProxy_VehDynYawRateVldRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehStabyEnhmtActvRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtActvRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtActvRaw_Val(data) (*(data) = Rte_SerlComInpProxy_VehStabyEnhmtActvRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehStabyEnhmtLatARaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatARaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatARaw_Val(data) (*(data) = Rte_SerlComInpProxy_VehStabyEnhmtLatARaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehStabyEnhmtLatAVldRaw_Val Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatAVldRaw_Val
#  define Rte_Read_GmMsg1E9BusHiSpd_VehStabyEnhmtLatAVldRaw_Val(data) (*(data) = Rte_SerlComInpProxy_VehStabyEnhmtLatAVldRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_InvldMsg1E9_Logl Rte_Write_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl
#  define Rte_Write_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl(data) (Rte_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MissMsg1E9_Logl Rte_Write_GmMsg1E9BusHiSpd_MissMsg1E9_Logl
#  define Rte_Write_GmMsg1E9BusHiSpd_MissMsg1E9_Logl(data) (Rte_GmMsg1E9BusHiSpd_MissMsg1E9_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SerlComAbsActv_Logl Rte_Write_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl
#  define Rte_Write_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl(data) (Rte_GmMsg1E9BusHiSpd_SerlComAbsActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SerlComLatA_Val Rte_Write_GmMsg1E9BusHiSpd_SerlComLatA_Val
#  define Rte_Write_GmMsg1E9BusHiSpd_SerlComLatA_Val(data) (Rte_GmMsg1E9BusHiSpd_SerlComLatA_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SerlComTcsActv_Logl Rte_Write_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl
#  define Rte_Write_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl(data) (Rte_GmMsg1E9BusHiSpd_SerlComTcsActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SerlComYawRate_Val Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRate_Val
#  define Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRate_Val(data) (Rte_GmMsg1E9BusHiSpd_SerlComYawRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SerlComYawRateVld_Logl Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl
#  define Rte_Write_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl(data) (Rte_GmMsg1E9BusHiSpd_SerlComYawRateVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehLatAVldSerlCom_Logl Rte_Write_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl
#  define Rte_Write_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl(data) (Rte_GmMsg1E9BusHiSpd_VehLatAVldSerlCom_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehStabyEnhmtActv_Logl Rte_Write_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl
#  define Rte_Write_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl(data) (Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_GmMsg1E9BusHiSpdLatADft_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdLatADft_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdYawRateDft_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdYawRateDft_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdAbsFaildTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdAbsFaildTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdLatAInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdLatAInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdTcsDisadTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdTcsDisadTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdVehDynCtrlStTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdVehStabyEnhmtActvVldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg1E9BusHiSpdYawRateInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1E9BusHiSpdYawRateInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdAbsFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatAInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdTcsEnaTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg1E9BusHiSpdAbsFaildTmr() \
  (&Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdAbsFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg1E9BusHiSpdLatAInvldTmr() \
  (&Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdLatAInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr() \
  (&Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdRdntVehStabyEnhmtTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg1E9BusHiSpdTcsEnaTmr() \
  (&Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdTcsEnaTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr() \
  (&Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdVehDynCtrlSysStTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg1E9BusHiSpdYawRateInvldTmr() \
  (&Rte_GmMsg1E9BusHiSpd_GmMsg1E9BusHiSpdYawRateInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg1E9BusHiSpd_START_SEC_CODE
# include "GmMsg1E9BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg1E9BusHiSpdPer1 GmMsg1E9BusHiSpdPer1
# endif

FUNC(void, GmMsg1E9BusHiSpd_CODE) GmMsg1E9BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg1E9BusHiSpd_STOP_SEC_CODE
# include "GmMsg1E9BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG1E9BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
