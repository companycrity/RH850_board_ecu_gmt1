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
 *          File:  Rte_CDD_CurrMeas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_CurrMeas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_CURRMEAS_H
# define _RTE_CDD_CURRMEAS_H

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

# include "Rte_CDD_CurrMeas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotCurrEolCalSt2, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrEolCalSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrQlfr1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrQlfr2_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr2Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyC_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyD_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyE_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyF_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Ntc5DErrCnt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Ntc6DErrCnt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_PwrUpSeq_StrtUpSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BrdgVltg_Val (6.0F)
#  define Rte_InitValue_CurrMeasWrmIninTestCmpl_Logl (FALSE)
#  define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
#  define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
#  define Rte_InitValue_MotCurrAdcVlyA_Val (0.0F)
#  define Rte_InitValue_MotCurrAdcVlyB_Val (0.0F)
#  define Rte_InitValue_MotCurrAdcVlyC_Val (0.0F)
#  define Rte_InitValue_MotCurrAdcVlyD_Val (0.0F)
#  define Rte_InitValue_MotCurrAdcVlyE_Val (0.0F)
#  define Rte_InitValue_MotCurrAdcVlyF_Val (0.0F)
#  define Rte_InitValue_MotCurrEolCalSt_Val (0U)
#  define Rte_InitValue_MotCurrQlfr1_Val (0U)
#  define Rte_InitValue_MotCurrQlfr2_Val (0U)
#  define Rte_InitValue_MotVelMrf_Val (0.0F)
#  define Rte_InitValue_Ntc5DErrCnt_Val (0U)
#  define Rte_InitValue_Ntc6DErrCnt_Val (0U)
#  define Rte_InitValue_StrtUpSt_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_BrdgVltg_Val Rte_Read_CDD_CurrMeas_BrdgVltg_Val
#  define Rte_Read_CDD_CurrMeas_BrdgVltg_Val(data) (*(data) = Rte_BattVltg_BrdgVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_CDD_CurrMeas_DiagcStsIvtr1Inactv_Logl
#  define Rte_Read_CDD_CurrMeas_DiagcStsIvtr1Inactv_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_CDD_CurrMeas_DiagcStsIvtr2Inactv_Logl
#  define Rte_Read_CDD_CurrMeas_DiagcStsIvtr2Inactv_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsIvtr2Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrAdcVlyA_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyA_Val
#  define Rte_Read_CDD_CurrMeas_MotCurrAdcVlyA_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotCurrAdcVlyA_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrAdcVlyB_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyB_Val
#  define Rte_Read_CDD_CurrMeas_MotCurrAdcVlyB_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotCurrAdcVlyB_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrAdcVlyC_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyC_Val
#  define Rte_Read_CDD_CurrMeas_MotCurrAdcVlyC_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotCurrAdcVlyC_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrAdcVlyD_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyD_Val
#  define Rte_Read_CDD_CurrMeas_MotCurrAdcVlyD_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotCurrAdcVlyD_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrAdcVlyE_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyE_Val
#  define Rte_Read_CDD_CurrMeas_MotCurrAdcVlyE_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotCurrAdcVlyE_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrAdcVlyF_Val Rte_Read_CDD_CurrMeas_MotCurrAdcVlyF_Val
#  define Rte_Read_CDD_CurrMeas_MotCurrAdcVlyF_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotCurrAdcVlyF_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelMrf_Val Rte_Read_CDD_CurrMeas_MotVelMrf_Val
#  define Rte_Read_CDD_CurrMeas_MotVelMrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelMrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ntc5DErrCnt_Val Rte_Read_CDD_CurrMeas_Ntc5DErrCnt_Val
#  define Rte_Read_CDD_CurrMeas_Ntc5DErrCnt_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_Ntc5DErrCnt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ntc6DErrCnt_Val Rte_Read_CDD_CurrMeas_Ntc6DErrCnt_Val
#  define Rte_Read_CDD_CurrMeas_Ntc6DErrCnt_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_Ntc6DErrCnt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_StrtUpSt_Val Rte_Read_CDD_CurrMeas_StrtUpSt_Val
#  define Rte_Read_CDD_CurrMeas_StrtUpSt_Val(data) (*(data) = Rte_PwrUpSeq_StrtUpSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_CDD_CurrMeas_SysSt_Val
#  define Rte_Read_CDD_CurrMeas_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_CDD_CurrMeas_VehSpd_Val
#  define Rte_Read_CDD_CurrMeas_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_CDD_CurrMeas_VehSpdVld_Logl
#  define Rte_Read_CDD_CurrMeas_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_CurrMeasWrmIninTestCmpl_Logl Rte_Write_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl
#  define Rte_Write_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl(data) (Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotCurrEolCalSt_Val Rte_Write_CDD_CurrMeas_MotCurrEolCalSt_Val
#  define Rte_Write_CDD_CurrMeas_MotCurrEolCalSt_Val(data) (Rte_CDD_CurrMeas_MotCurrEolCalSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotCurrQlfr1_Val Rte_Write_CDD_CurrMeas_MotCurrQlfr1_Val
#  define Rte_Write_CDD_CurrMeas_MotCurrQlfr1_Val(data) (Rte_CDD_CurrMeas_MotCurrQlfr1_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotCurrQlfr2_Val Rte_Write_CDD_CurrMeas_MotCurrQlfr2_Val
#  define Rte_Write_CDD_CurrMeas_MotCurrQlfr2_Val(data) (Rte_CDD_CurrMeas_MotCurrQlfr2_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasEolGainCalSet_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)97, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_CurrMeasEolOffsCalSet_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)98, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_CurrMeasEolGainCalSetDft() (&((P2CONST(Rte_Calprm_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP])->CurrMeasEolGainCalSetDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_CurrMeasEolOffsCalSetDft() (&((P2CONST(Rte_Calprm_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP])->CurrMeasEolOffsCalSetDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_CurrMeasEolGainMax_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolGainMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolGainMin_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolGainMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolGainNumer_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolGainNumer_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolMaxMotVel_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolMaxMotVel_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsHiBrdgVltgMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsMax_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsMin_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasMotCurrAdcVlyWrmIninMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasMotCurrAdcVlyWrmIninMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolFixdPwmPerd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolFixdPwmPerd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsHiCmuOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsLoCmuOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasMinRqrdPhaOnTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasMotAgCompuDly_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasMotAgCompuDly_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolGainNrOfSample_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolGainNrOfSample_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsNrOfSample_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsNrOfSample_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasNtc0x05DFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasNtc0x05DFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasNtc0x05DPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasNtc0x05DPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasNtc0x06DFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasNtc0x06DFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasNtc0x06DPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasNtc0x06DPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolTranCntrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolTranCntrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmMotPoleCnt_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmMotPoleCnt_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_BrdgVltgSumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsHiBrdgVltg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgE; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgF; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumDPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumEPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumFPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_TempMotCurrAdcVlySum1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_TempMotCurrAdcVlySum2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_GainEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCtrlNtc5DErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCtrlNtc6DErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_Ntc5DErrCnt2MilliSecPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_Ntc6DErrCnt2MilliSecPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_OffsEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_PhaOnTiErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolGainSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolTranCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotCurrEolCalSt2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolCalStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrRollgCnt1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrRollgCnt2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolOffsProcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_WrmIninTestCmplPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(CurrMeasEolGainCalRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolGainCalSet; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(CurrMeasEolOffsCalRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolOffsCalSet; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_BrdgVltgSumPrev() \
  (&Rte_CDD_CurrMeas_BrdgVltgSumPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EolOffsHiBrdgVltg() \
  (&Rte_CDD_CurrMeas_EolOffsHiBrdgVltg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolGainA() \
  (&Rte_CDD_CurrMeas_MotCurrEolGainA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolGainB() \
  (&Rte_CDD_CurrMeas_MotCurrEolGainB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolGainC() \
  (&Rte_CDD_CurrMeas_MotCurrEolGainC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolGainD() \
  (&Rte_CDD_CurrMeas_MotCurrEolGainD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolGainE() \
  (&Rte_CDD_CurrMeas_MotCurrEolGainE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolGainF() \
  (&Rte_CDD_CurrMeas_MotCurrEolGainF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsDeltaA() \
  (&Rte_CDD_CurrMeas_MotCurrOffsDeltaA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsDeltaB() \
  (&Rte_CDD_CurrMeas_MotCurrOffsDeltaB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsDeltaC() \
  (&Rte_CDD_CurrMeas_MotCurrOffsDeltaC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsDeltaD() \
  (&Rte_CDD_CurrMeas_MotCurrOffsDeltaD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsDeltaE() \
  (&Rte_CDD_CurrMeas_MotCurrOffsDeltaE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsDeltaF() \
  (&Rte_CDD_CurrMeas_MotCurrOffsDeltaF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsHiAvrgA() \
  (&Rte_CDD_CurrMeas_MotCurrOffsHiAvrgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsHiAvrgB() \
  (&Rte_CDD_CurrMeas_MotCurrOffsHiAvrgB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsHiAvrgC() \
  (&Rte_CDD_CurrMeas_MotCurrOffsHiAvrgC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsHiAvrgD() \
  (&Rte_CDD_CurrMeas_MotCurrOffsHiAvrgD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsHiAvrgE() \
  (&Rte_CDD_CurrMeas_MotCurrOffsHiAvrgE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsHiAvrgF() \
  (&Rte_CDD_CurrMeas_MotCurrOffsHiAvrgF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsLoAvrgA() \
  (&Rte_CDD_CurrMeas_MotCurrOffsLoAvrgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsLoAvrgB() \
  (&Rte_CDD_CurrMeas_MotCurrOffsLoAvrgB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsLoAvrgC() \
  (&Rte_CDD_CurrMeas_MotCurrOffsLoAvrgC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsLoAvrgD() \
  (&Rte_CDD_CurrMeas_MotCurrOffsLoAvrgD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsLoAvrgE() \
  (&Rte_CDD_CurrMeas_MotCurrOffsLoAvrgE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsLoAvrgF() \
  (&Rte_CDD_CurrMeas_MotCurrOffsLoAvrgF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsZeroAvrgA() \
  (&Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsZeroAvrgB() \
  (&Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsZeroAvrgC() \
  (&Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsZeroAvrgD() \
  (&Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsZeroAvrgE() \
  (&Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgE) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrOffsZeroAvrgF() \
  (&Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgF) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrSumAPrev() \
  (&Rte_CDD_CurrMeas_MotCurrSumAPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrSumBPrev() \
  (&Rte_CDD_CurrMeas_MotCurrSumBPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrSumCPrev() \
  (&Rte_CDD_CurrMeas_MotCurrSumCPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrSumDPrev() \
  (&Rte_CDD_CurrMeas_MotCurrSumDPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrSumEPrev() \
  (&Rte_CDD_CurrMeas_MotCurrSumEPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrSumFPrev() \
  (&Rte_CDD_CurrMeas_MotCurrSumFPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TempMotCurrAdcVlySum1Prev() \
  (&Rte_CDD_CurrMeas_TempMotCurrAdcVlySum1Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TempMotCurrAdcVlySum2Prev() \
  (&Rte_CDD_CurrMeas_TempMotCurrAdcVlySum2Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GainEolAvrgCntrPrev() \
  (&Rte_CDD_CurrMeas_GainEolAvrgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCtrlNtc5DErrCntPrev() \
  (&Rte_CDD_CurrMeas_MotCtrlNtc5DErrCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCtrlNtc6DErrCntPrev() \
  (&Rte_CDD_CurrMeas_MotCtrlNtc6DErrCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ntc5DErrCnt2MilliSecPrev() \
  (&Rte_CDD_CurrMeas_Ntc5DErrCnt2MilliSecPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ntc6DErrCnt2MilliSecPrev() \
  (&Rte_CDD_CurrMeas_Ntc6DErrCnt2MilliSecPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_OffsEolAvrgCntrPrev() \
  (&Rte_CDD_CurrMeas_OffsEolAvrgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaOnTiErrCntPrev() \
  (&Rte_CDD_CurrMeas_PhaOnTiErrCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EolGainSts() \
  (&Rte_CDD_CurrMeas_EolGainSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EolOffsSts() \
  (&Rte_CDD_CurrMeas_EolOffsSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EolTranCntrPrev() \
  (&Rte_CDD_CurrMeas_EolTranCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolCalStPrev() \
  (&Rte_CDD_CurrMeas_MotCurrEolCalStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrRollgCnt1Prev() \
  (&Rte_CDD_CurrMeas_MotCurrRollgCnt1Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrRollgCnt2Prev() \
  (&Rte_CDD_CurrMeas_MotCurrRollgCnt2Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrEolOffsProcFlg() \
  (&Rte_CDD_CurrMeas_MotCurrEolOffsProcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WrmIninTestCmplPrev() \
  (&Rte_CDD_CurrMeas_WrmIninTestCmplPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CurrMeasEolGainCalSet() \
  (&Rte_CDD_CurrMeas_CurrMeasEolGainCalSet) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CurrMeasEolOffsCalSet() \
  (&Rte_CDD_CurrMeas_CurrMeasEolOffsCalSet) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_CurrMeas_START_SEC_CODE
# include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CurrMeasEolGainReq_Oper CurrMeasEolGainReq_Oper
#  define RTE_RUNNABLE_CurrMeasEolGainStsReq_Oper CurrMeasEolGainStsReq_Oper
#  define RTE_RUNNABLE_CurrMeasEolOffsReq_Oper CurrMeasEolOffsReq_Oper
#  define RTE_RUNNABLE_CurrMeasEolOffsStsReq_Oper CurrMeasEolOffsStsReq_Oper
#  define RTE_RUNNABLE_CurrMeasGainReadReq_Oper CurrMeasGainReadReq_Oper
#  define RTE_RUNNABLE_CurrMeasGainWrReq_Oper CurrMeasGainWrReq_Oper
#  define RTE_RUNNABLE_CurrMeasInit1 CurrMeasInit1
#  define RTE_RUNNABLE_CurrMeasOffsReadReq_Oper CurrMeasOffsReadReq_Oper
#  define RTE_RUNNABLE_CurrMeasOffsWrReq_Oper CurrMeasOffsWrReq_Oper
#  define RTE_RUNNABLE_CurrMeasPer1 CurrMeasPer1
#  define RTE_RUNNABLE_CurrMeasPer3 CurrMeasPer3
# endif

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolGainSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasGainWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsHiBrdgVltg_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifF_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasOffsWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_CurrMeas_STOP_SEC_CODE
# include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_CURRMEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
