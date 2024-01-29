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
 *          File:  Rte_WhlImbRejctn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <WhlImbRejctn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_WHLIMBREJCTN_H
# define _RTE_WHLIMBREJCTN_H

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

# include "Rte_WhlImbRejctn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnAmp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlFrqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_WhlImbRejctn_WhlImbRejctnCustEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_WhlImbRejctnDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlLeFrq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmRoadWhlInQlfr_WhlRiFrq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (TRUE)
#  define Rte_InitValue_WhlFrqVld_Logl (FALSE)
#  define Rte_InitValue_WhlImbRejctnActv_Logl (FALSE)
#  define Rte_InitValue_WhlImbRejctnAmp_Val (0.0F)
#  define Rte_InitValue_WhlImbRejctnCmd_Val (0.0F)
#  define Rte_InitValue_WhlImbRejctnCustEna_Logl (TRUE)
#  define Rte_InitValue_WhlImbRejctnDi_Logl (FALSE)
#  define Rte_InitValue_WhlLeFrq_Val (0.01F)
#  define Rte_InitValue_WhlRiFrq_Val (0.01F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_CmdAmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_CurrMgnSlewRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_DcTrendFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_EnaSlewRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_FrqDiagcFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_IniCmpFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_MaxMgnFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_SlowSpdDiagc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_WhlImbRejctn_WhlSpdCorrlnFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTq_Val Rte_Read_WhlImbRejctn_HwTq_Val
#  define Rte_Read_WhlImbRejctn_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_WhlImbRejctn_SysSt_Val
#  define Rte_Read_WhlImbRejctn_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_WhlImbRejctn_VehSpd_Val
#  define Rte_Read_WhlImbRejctn_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_WhlImbRejctn_VehSpdVld_Logl
#  define Rte_Read_WhlImbRejctn_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlFrqVld_Logl Rte_Read_WhlImbRejctn_WhlFrqVld_Logl
#  define Rte_Read_WhlImbRejctn_WhlFrqVld_Logl(data) (*(data) = Rte_GmRoadWhlInQlfr_WhlFrqVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlImbRejctnCustEna_Logl Rte_Read_WhlImbRejctn_WhlImbRejctnCustEna_Logl
#  define Rte_Read_WhlImbRejctn_WhlImbRejctnCustEna_Logl(data) (*(data) = Rte_WhlImbRejctn_WhlImbRejctnCustEna_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlImbRejctnDi_Logl Rte_Read_WhlImbRejctn_WhlImbRejctnDi_Logl
#  define Rte_Read_WhlImbRejctn_WhlImbRejctnDi_Logl(data) (*(data) = Rte_GmFctDiArbn_WhlImbRejctnDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlLeFrq_Val Rte_Read_WhlImbRejctn_WhlLeFrq_Val
#  define Rte_Read_WhlImbRejctn_WhlLeFrq_Val(data) (*(data) = Rte_GmRoadWhlInQlfr_WhlLeFrq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlRiFrq_Val Rte_Read_WhlImbRejctn_WhlRiFrq_Val
#  define Rte_Read_WhlImbRejctn_WhlRiFrq_Val(data) (*(data) = Rte_GmRoadWhlInQlfr_WhlRiFrq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_WhlImbRejctnActv_Logl Rte_Write_WhlImbRejctn_WhlImbRejctnActv_Logl
#  define Rte_Write_WhlImbRejctn_WhlImbRejctnActv_Logl(data) (Rte_WhlImbRejctn_WhlImbRejctnActv_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlImbRejctnAmp_Val Rte_Write_WhlImbRejctn_WhlImbRejctnAmp_Val
#  define Rte_Write_WhlImbRejctn_WhlImbRejctnAmp_Val(data) (Rte_WhlImbRejctn_WhlImbRejctnAmp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlImbRejctnCmd_Val Rte_Write_WhlImbRejctn_WhlImbRejctnCmd_Val
#  define Rte_Write_WhlImbRejctn_WhlImbRejctnCmd_Val(data) (Rte_WhlImbRejctn_WhlImbRejctnCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CmpPeakData_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)3, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CmpPeakData_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)3, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnInit1_CurrMgnSlewRate(data) \
  (Rte_Irv_WhlImbRejctn_CurrMgnSlewRate = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnInit1_EnaSlewRate(data) \
  (Rte_Irv_WhlImbRejctn_EnaSlewRate = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnInit1_IniCmpFlt(data) \
  (Rte_Irv_WhlImbRejctn_IniCmpFlt = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer1_CurrMgnSlewRate() \
  Rte_Irv_WhlImbRejctn_CurrMgnSlewRate
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer1_EnaSlewRate() \
  Rte_Irv_WhlImbRejctn_EnaSlewRate
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer1_IniCmpFlt() \
  Rte_Irv_WhlImbRejctn_IniCmpFlt
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer1_SlowSpdDiagc() \
  Rte_Irv_WhlImbRejctn_SlowSpdDiagc
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnPer1_CmdAmp(data) \
  (Rte_Irv_WhlImbRejctn_CmdAmp = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnPer1_DcTrendFlt(data) \
  (Rte_Irv_WhlImbRejctn_DcTrendFlt = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnPer1_FrqDiagcFlt(data) \
  (Rte_Irv_WhlImbRejctn_FrqDiagcFlt = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnPer1_MaxMgnFlt(data) \
  (Rte_Irv_WhlImbRejctn_MaxMgnFlt = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnPer1_WhlSpdCorrlnFlt(data) \
  (Rte_Irv_WhlImbRejctn_WhlSpdCorrlnFlt = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer2_CmdAmp() \
  Rte_Irv_WhlImbRejctn_CmdAmp
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer2_DcTrendFlt() \
  Rte_Irv_WhlImbRejctn_DcTrendFlt
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer2_FrqDiagcFlt() \
  Rte_Irv_WhlImbRejctn_FrqDiagcFlt
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer2_MaxMgnFlt() \
  Rte_Irv_WhlImbRejctn_MaxMgnFlt
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_WhlImbRejctnPer2_WhlSpdCorrlnFlt() \
  Rte_Irv_WhlImbRejctn_WhlSpdCorrlnFlt
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_WhlImbRejctnPer2_SlowSpdDiagc(data) \
  (Rte_Irv_WhlImbRejctn_SlowSpdDiagc = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_LePeakPrevDft() (((P2CONST(Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP])->LePeakPrevDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_MaxCompPercDft() (((P2CONST(Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP])->MaxCompPercDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_RiPeakPrevDft() (((P2CONST(Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP])->RiPeakPrevDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_ActvCmpBand1Dft() (((P2CONST(Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP])->ActvCmpBand1Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_ActvCmpBand2Dft() (((P2CONST(Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP])->ActvCmpBand2Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_ActvCmpBand3Dft() (((P2CONST(Rte_Calprm_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP])->ActvCmpBand3Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_WhlImbRejctnAdpvFac_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnAdpvFac_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnAutScaTar_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnAutScaTar_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnBlndCmdMgnLp1FilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnBlndCmdMgnLp1FilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnBlndCmdMgnLp2FilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnBlndCmdMgnLp2FilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnCmdMgnLp1FilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnCmdMgnLp1FilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnCmdMgnLp2FilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnCmdMgnLp2FilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnCurrMgnSlewPerLoop_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnCurrMgnSlewPerLoop_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendFltRcvryDly_Val() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendFltRcvryDly_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendFltRcvryNegStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendFltRcvryNegStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendFltRcvryPosStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendFltRcvryPosStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendFltRcvryThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendFltRcvryThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendTh2Tq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendTh2Tq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendThTq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendThTq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendTi2Sec_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendTi2Sec_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDcTrendTiSec_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDcTrendTiSec_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnDistbnMgnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnDistbnMgnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnEnaSlewPerLoop_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnEnaSlewPerLoop_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcAmpThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcAmpThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryDly_Val() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcFltRcvryDly_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryNegStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcFltRcvryNegStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryPosStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcFltRcvryPosStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcFltRcvryThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcFltRcvryThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcUgrPoleMgn_Val() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcUgrPoleMgn_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgn_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgn_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgnFltNegStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgnFltNegStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgnFltPosStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgnFltPosStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryDly_Val() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgnFltRcvryDly_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryNegStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgnFltRcvryNegStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryPosStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgnFltRcvryPosStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgnFltRcvryThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgnFltRcvryThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxMgnFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxMgnFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMgnEstimnDeltaSca_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMgnEstimnDeltaSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMgnEstimnDiThd_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMgnEstimnDiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMgnEstimnEnaThd_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMgnEstimnEnaThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMgnEstimnFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMgnEstimnFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMgnEstimnFrqDelta_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMgnEstimnFrqDelta_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMgnEstimnLeak_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMgnEstimnLeak_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnScaCncl_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnScaCncl_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnUgrPoleMgn_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnUgrPoleMgn_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnVehSpdEna_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnVehSpdEna_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnWhlSpdCorrlnFltRcvryDly_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnWhlSpdCorrlnFltRcvryThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnWhlSpdCorrlnThd_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnWhlSpdCorrlnThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnWhlSpdLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnWhlSpdLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcTout_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcTout_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnMaxDurn_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnMaxDurn_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnRampDwnTi_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnRampDwnTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnWhlSpdCorrlnTi_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnWhlSpdCorrlnTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnAutScaEna_Logl() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnAutScaEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFctEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFctEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_WhlImbRejctnFrqDiagcEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqDiagcEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqScaTblX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_WhlImbRejctnFrqScaTblX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqScaTblX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqScaTblY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_WhlImbRejctnFrqScaTblY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnFrqScaTblY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnPhaAdjX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_WhlImbRejctnPhaAdjX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnPhaAdjX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnPhaAdjY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_WhlImbRejctnPhaAdjY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->WhlImbRejctnPhaAdjY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_EnaSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcUgr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcUgr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_LeCurrMgnSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil1Coeff1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil1Coeff2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil2Coeff1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PhaAdjFil2Coeff2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PrevFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PrevHwTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RiCurrMgnSlewPerLoop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_ScaLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_ScaRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrLe1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrLe2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrRi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_UgrRi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnCnclTqOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnCurrMgnLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnCurrMgnRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnFildWhlSpdLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnFildWhlSpdRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnLMSqdOutLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnLMSqdOutRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnScaLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnScaRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_dWhlImbRejctnWhlSpdCorrPerc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendRefTiEnaLrngTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendRefTiEnaLrngTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcRefTiEnaLrngTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_SlowSpdDiagcRefTiEnaLrngTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnDiagcRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnRefTiEnaLrngTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLrngEnaPrevTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLrngEnaPrevTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DistbnMagEnadPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcLrngEnaPrevTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_PrevSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RampNo; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RampYes; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_SlowSpdDiagcLrngEnaPrevTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrFltFaild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrFltRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnDiagcLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnLrngEnaPrevTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_LeStDlyUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_LeStVariUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RiStDlyUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_RiStVariUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_StordValLe; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_30, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_StordValRi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_BlndCmdMgnLp1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_BlndCmdMgnLp2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_CmdMgnLp1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_CmdMgnLp2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(WhlImbRejctnCmpPeakRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_CmpPeakData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DcTrendLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DistbnMgnLeLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_DistbnMgnRiLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_FrqDiagcLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_MaxMgnFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PassFailCntrDiagcRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdCorrlnFltRcvry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdLeLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_WhlImbRejctn_WhlSpdRiLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_EnaSlewPerLoop() \
  (&Rte_WhlImbRejctn_EnaSlewPerLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcUgr1() \
  (&Rte_WhlImbRejctn_FrqDiagcUgr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcUgr2() \
  (&Rte_WhlImbRejctn_FrqDiagcUgr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LeCurrMgnSlewPerLoop() \
  (&Rte_WhlImbRejctn_LeCurrMgnSlewPerLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaAdjFil1Coeff1() \
  (&Rte_WhlImbRejctn_PhaAdjFil1Coeff1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaAdjFil1Coeff2() \
  (&Rte_WhlImbRejctn_PhaAdjFil1Coeff2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaAdjFil2Coeff1() \
  (&Rte_WhlImbRejctn_PhaAdjFil2Coeff1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaAdjFil2Coeff2() \
  (&Rte_WhlImbRejctn_PhaAdjFil2Coeff2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevFlt() \
  (&Rte_WhlImbRejctn_PrevFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwTq() \
  (&Rte_WhlImbRejctn_PrevHwTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RiCurrMgnSlewPerLoop() \
  (&Rte_WhlImbRejctn_RiCurrMgnSlewPerLoop) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ScaLe() \
  (&Rte_WhlImbRejctn_ScaLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ScaRi() \
  (&Rte_WhlImbRejctn_ScaRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_UgrLe1() \
  (&Rte_WhlImbRejctn_UgrLe1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_UgrLe2() \
  (&Rte_WhlImbRejctn_UgrLe2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_UgrRi1() \
  (&Rte_WhlImbRejctn_UgrRi1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_UgrRi2() \
  (&Rte_WhlImbRejctn_UgrRi2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnCnclTqOutp() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnCnclTqOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnCurrMgnLe() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnCurrMgnLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnCurrMgnRi() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnCurrMgnRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnFildWhlSpdLe() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnFildWhlSpdLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnFildWhlSpdRi() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnFildWhlSpdRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnLMSqdOutLe() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnLMSqdOutLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnLMSqdOutRi() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnLMSqdOutRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnScaLe() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnScaLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnScaRi() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnScaRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dWhlImbRejctnWhlSpdCorrPerc() \
  (&Rte_WhlImbRejctn_dWhlImbRejctnWhlSpdCorrPerc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendRefTiEnaLrng() \
  (&Rte_WhlImbRejctn_DcTrendRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendRefTiEnaLrngTmr1() \
  (&Rte_WhlImbRejctn_DcTrendRefTiEnaLrngTmr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendRefTiEnaLrngTmr2() \
  (&Rte_WhlImbRejctn_DcTrendRefTiEnaLrngTmr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcRefTiEnaLrng() \
  (&Rte_WhlImbRejctn_FrqDiagcRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcRefTiEnaLrngTiOut() \
  (&Rte_WhlImbRejctn_FrqDiagcRefTiEnaLrngTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxMgnRefTiEnaLrng() \
  (&Rte_WhlImbRejctn_MaxMgnRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SlowSpdDiagcRefTiEnaLrngTmr() \
  (&Rte_WhlImbRejctn_SlowSpdDiagcRefTiEnaLrngTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdCorrlnDiagcRefTiEnaLrng() \
  (&Rte_WhlImbRejctn_WhlSpdCorrlnDiagcRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdCorrlnRefTiEnaLrngTmr() \
  (&Rte_WhlImbRejctn_WhlSpdCorrlnRefTiEnaLrngTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendFltFaild() \
  (&Rte_WhlImbRejctn_DcTrendFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendFltRst() \
  (&Rte_WhlImbRejctn_DcTrendFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendLrngEnaPrev() \
  (&Rte_WhlImbRejctn_DcTrendLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendLrngEnaPrevTmr1() \
  (&Rte_WhlImbRejctn_DcTrendLrngEnaPrevTmr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendLrngEnaPrevTmr2() \
  (&Rte_WhlImbRejctn_DcTrendLrngEnaPrevTmr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DistbnMagEnadPrev() \
  (&Rte_WhlImbRejctn_DistbnMagEnadPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcFltFaild() \
  (&Rte_WhlImbRejctn_FrqDiagcFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcFltRst() \
  (&Rte_WhlImbRejctn_FrqDiagcFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcLrngEnaPrev() \
  (&Rte_WhlImbRejctn_FrqDiagcLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcLrngEnaPrevTiOut() \
  (&Rte_WhlImbRejctn_FrqDiagcLrngEnaPrevTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxMgnFltFaild() \
  (&Rte_WhlImbRejctn_MaxMgnFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxMgnFltRst() \
  (&Rte_WhlImbRejctn_MaxMgnFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxMgnLrngEnaPrev() \
  (&Rte_WhlImbRejctn_MaxMgnLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevSts() \
  (&Rte_WhlImbRejctn_PrevSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RampNo() \
  (&Rte_WhlImbRejctn_RampNo) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RampYes() \
  (&Rte_WhlImbRejctn_RampYes) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SlowSpdDiagcLrngEnaPrevTmr() \
  (&Rte_WhlImbRejctn_SlowSpdDiagcLrngEnaPrevTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdCorrFltFaild() \
  (&Rte_WhlImbRejctn_WhlSpdCorrFltFaild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdCorrFltRst() \
  (&Rte_WhlImbRejctn_WhlSpdCorrFltRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdCorrlnDiagcLrngEnaPrev() \
  (&Rte_WhlImbRejctn_WhlSpdCorrlnDiagcLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdCorrlnLrngEnaPrevTmr() \
  (&Rte_WhlImbRejctn_WhlSpdCorrlnLrngEnaPrevTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_LeStDlyUpd() (&((*RtePim_LeStDlyUpd())[0]))
#  else
#   define Rte_Pim_LeStDlyUpd() RtePim_LeStDlyUpd()
#  endif
#  define RtePim_LeStDlyUpd() \
  (&Rte_WhlImbRejctn_LeStDlyUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_LeStVariUpd() (&((*RtePim_LeStVariUpd())[0]))
#  else
#   define Rte_Pim_LeStVariUpd() RtePim_LeStVariUpd()
#  endif
#  define RtePim_LeStVariUpd() \
  (&Rte_WhlImbRejctn_LeStVariUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_RiStDlyUpd() (&((*RtePim_RiStDlyUpd())[0]))
#  else
#   define Rte_Pim_RiStDlyUpd() RtePim_RiStDlyUpd()
#  endif
#  define RtePim_RiStDlyUpd() \
  (&Rte_WhlImbRejctn_RiStDlyUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_RiStVariUpd() (&((*RtePim_RiStVariUpd())[0]))
#  else
#   define Rte_Pim_RiStVariUpd() RtePim_RiStVariUpd()
#  endif
#  define RtePim_RiStVariUpd() \
  (&Rte_WhlImbRejctn_RiStVariUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_StordValLe() (&((*RtePim_StordValLe())[0]))
#  else
#   define Rte_Pim_StordValLe() RtePim_StordValLe()
#  endif
#  define RtePim_StordValLe() \
  (&Rte_WhlImbRejctn_StordValLe) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_StordValRi() (&((*RtePim_StordValRi())[0]))
#  else
#   define Rte_Pim_StordValRi() RtePim_StordValRi()
#  endif
#  define RtePim_StordValRi() \
  (&Rte_WhlImbRejctn_StordValRi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BlndCmdMgnLp1Fil() \
  (&Rte_WhlImbRejctn_BlndCmdMgnLp1Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BlndCmdMgnLp2Fil() \
  (&Rte_WhlImbRejctn_BlndCmdMgnLp2Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CmdMgnLp1Fil() \
  (&Rte_WhlImbRejctn_CmdMgnLp1Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CmdMgnLp2Fil() \
  (&Rte_WhlImbRejctn_CmdMgnLp2Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CmpPeakData() \
  (&Rte_WhlImbRejctn_CmpPeakData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendFltRcvry() \
  (&Rte_WhlImbRejctn_DcTrendFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DcTrendLpFil() \
  (&Rte_WhlImbRejctn_DcTrendLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DistbnMgnLeLpFil() \
  (&Rte_WhlImbRejctn_DistbnMgnLeLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DistbnMgnRiLpFil() \
  (&Rte_WhlImbRejctn_DistbnMgnRiLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcFltRcvry() \
  (&Rte_WhlImbRejctn_FrqDiagcFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FrqDiagcLpFil() \
  (&Rte_WhlImbRejctn_FrqDiagcLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxMgnFltRcvry() \
  (&Rte_WhlImbRejctn_MaxMgnFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdCorrlnFltRcvry() \
  (&Rte_WhlImbRejctn_WhlSpdCorrlnFltRcvry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdLeLpFil() \
  (&Rte_WhlImbRejctn_WhlSpdLeLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WhlSpdRiLpFil() \
  (&Rte_WhlImbRejctn_WhlSpdRiLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define WhlImbRejctn_START_SEC_CODE
# include "WhlImbRejctn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_WhlImbRejctnInit1 WhlImbRejctnInit1
#  define RTE_RUNNABLE_WhlImbRejctnPer1 WhlImbRejctnPer1
#  define RTE_RUNNABLE_WhlImbRejctnPer2 WhlImbRejctnPer2
# endif

FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, WhlImbRejctn_CODE) WhlImbRejctnPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define WhlImbRejctn_STOP_SEC_CODE
# include "WhlImbRejctn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_WHLIMBREJCTN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
