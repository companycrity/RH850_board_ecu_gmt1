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
 *          File:  Rte_CmnMfgSrv.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CmnMfgSrv>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CMNMFGSRV_H
# define _RTE_CMNMFGSRV_H

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

# include "Rte_CmnMfgSrv_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGain_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGainEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DampgCmdBasDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_EotProtnDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_FricLrngDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_HysCmpCmdDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CmnMfgSrv_IgnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_LoaScaDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgDiagcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpCmdDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpLrngDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_RtnCmdDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_StallMotTqLimDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrdEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiLnrGain_Val (0.0F)
#  define Rte_InitValue_AssiLnrGainEna_Logl (FALSE)
#  define Rte_InitValue_AssiMechTEstimnDi_Logl (FALSE)
#  define Rte_InitValue_DampgCmdBasDi_Logl (FALSE)
#  define Rte_InitValue_DutyCycThermProtnDi_Logl (FALSE)
#  define Rte_InitValue_EotProtnDi_Logl (FALSE)
#  define Rte_InitValue_FricLrngDi_Logl (FALSE)
#  define Rte_InitValue_HysCmpCmdDi_Logl (FALSE)
#  define Rte_InitValue_IgnCntr_Val (0U)
#  define Rte_InitValue_InertiaCmpVelCmdDi_Logl (FALSE)
#  define Rte_InitValue_LoaScaDi_Logl (FALSE)
#  define Rte_InitValue_MfgDiagcInhb_Logl (FALSE)
#  define Rte_InitValue_MfgEnaSt_Val (0U)
#  define Rte_InitValue_PullCmpCmdDi_Logl (FALSE)
#  define Rte_InitValue_PullCmpLrngDi_Logl (FALSE)
#  define Rte_InitValue_RtnCmdDi_Logl (FALSE)
#  define Rte_InitValue_StallMotTqLimDi_Logl (FALSE)
#  define Rte_InitValue_SysMotTqCmdRampRateDi_Logl (FALSE)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_SysStImdtTranReqOff_Logl (FALSE)
#  define Rte_InitValue_SysStReqEnaOvrd_Logl (FALSE)
#  define Rte_InitValue_VehSpdOvrd_Val (0.0F)
#  define Rte_InitValue_VehSpdOvrdEna_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_SysSt_Val Rte_Read_CmnMfgSrv_SysSt_Val
#  define Rte_Read_CmnMfgSrv_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AssiLnrGain_Val Rte_Write_CmnMfgSrv_AssiLnrGain_Val
#  define Rte_Write_CmnMfgSrv_AssiLnrGain_Val(data) (Rte_CmnMfgSrv_AssiLnrGain_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_AssiLnrGainEna_Logl Rte_Write_CmnMfgSrv_AssiLnrGainEna_Logl
#  define Rte_Write_CmnMfgSrv_AssiLnrGainEna_Logl(data) (Rte_CmnMfgSrv_AssiLnrGainEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_AssiMechTEstimnDi_Logl Rte_Write_CmnMfgSrv_AssiMechTEstimnDi_Logl
#  define Rte_Write_CmnMfgSrv_AssiMechTEstimnDi_Logl(data) (Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DampgCmdBasDi_Logl Rte_Write_CmnMfgSrv_DampgCmdBasDi_Logl
#  define Rte_Write_CmnMfgSrv_DampgCmdBasDi_Logl(data) (Rte_CmnMfgSrv_DampgCmdBasDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DutyCycThermProtnDi_Logl Rte_Write_CmnMfgSrv_DutyCycThermProtnDi_Logl
#  define Rte_Write_CmnMfgSrv_DutyCycThermProtnDi_Logl(data) (Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_EotProtnDi_Logl Rte_Write_CmnMfgSrv_EotProtnDi_Logl
#  define Rte_Write_CmnMfgSrv_EotProtnDi_Logl(data) (Rte_CmnMfgSrv_EotProtnDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FricLrngDi_Logl Rte_Write_CmnMfgSrv_FricLrngDi_Logl
#  define Rte_Write_CmnMfgSrv_FricLrngDi_Logl(data) (Rte_CmnMfgSrv_FricLrngDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HysCmpCmdDi_Logl Rte_Write_CmnMfgSrv_HysCmpCmdDi_Logl
#  define Rte_Write_CmnMfgSrv_HysCmpCmdDi_Logl(data) (Rte_CmnMfgSrv_HysCmpCmdDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_IgnCntr_Val Rte_Write_CmnMfgSrv_IgnCntr_Val
#  define Rte_Write_CmnMfgSrv_IgnCntr_Val(data) (Rte_CmnMfgSrv_IgnCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_InertiaCmpVelCmdDi_Logl Rte_Write_CmnMfgSrv_InertiaCmpVelCmdDi_Logl
#  define Rte_Write_CmnMfgSrv_InertiaCmpVelCmdDi_Logl(data) (Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LoaScaDi_Logl Rte_Write_CmnMfgSrv_LoaScaDi_Logl
#  define Rte_Write_CmnMfgSrv_LoaScaDi_Logl(data) (Rte_CmnMfgSrv_LoaScaDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MfgDiagcInhb_Logl Rte_Write_CmnMfgSrv_MfgDiagcInhb_Logl
#  define Rte_Write_CmnMfgSrv_MfgDiagcInhb_Logl(data) (Rte_CmnMfgSrv_MfgDiagcInhb_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MfgEnaSt_Val Rte_Write_CmnMfgSrv_MfgEnaSt_Val
#  define Rte_Write_CmnMfgSrv_MfgEnaSt_Val(data) (Rte_CmnMfgSrv_MfgEnaSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PullCmpCmdDi_Logl Rte_Write_CmnMfgSrv_PullCmpCmdDi_Logl
#  define Rte_Write_CmnMfgSrv_PullCmpCmdDi_Logl(data) (Rte_CmnMfgSrv_PullCmpCmdDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PullCmpLrngDi_Logl Rte_Write_CmnMfgSrv_PullCmpLrngDi_Logl
#  define Rte_Write_CmnMfgSrv_PullCmpLrngDi_Logl(data) (Rte_CmnMfgSrv_PullCmpLrngDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RtnCmdDi_Logl Rte_Write_CmnMfgSrv_RtnCmdDi_Logl
#  define Rte_Write_CmnMfgSrv_RtnCmdDi_Logl(data) (Rte_CmnMfgSrv_RtnCmdDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_StallMotTqLimDi_Logl Rte_Write_CmnMfgSrv_StallMotTqLimDi_Logl
#  define Rte_Write_CmnMfgSrv_StallMotTqLimDi_Logl(data) (Rte_CmnMfgSrv_StallMotTqLimDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysMotTqCmdRampRateDi_Logl Rte_Write_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl
#  define Rte_Write_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl(data) (Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStImdtTranReqOff_Logl Rte_Write_CmnMfgSrv_SysStImdtTranReqOff_Logl
#  define Rte_Write_CmnMfgSrv_SysStImdtTranReqOff_Logl(data) (Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStReqEnaOvrd_Logl Rte_Write_CmnMfgSrv_SysStReqEnaOvrd_Logl
#  define Rte_Write_CmnMfgSrv_SysStReqEnaOvrd_Logl(data) (Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdOvrd_Val Rte_Write_CmnMfgSrv_VehSpdOvrd_Val
#  define Rte_Write_CmnMfgSrv_VehSpdOvrd_Val(data) (Rte_CmnMfgSrv_VehSpdOvrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdOvrdEna_Logl Rte_Write_CmnMfgSrv_VehSpdOvrdEna_Logl
#  define Rte_Write_CmnMfgSrv_VehSpdOvrdEna_Logl(data) (Rte_CmnMfgSrv_VehSpdOvrdEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ClrAllDiagc_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrAllDiagc_Oper() (ClrAllDiagc_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) ClrFricLrngOperMod_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrFricLrngOperMod_Oper() (ClrFricLrngOperMod_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGVEHCENTRTRIM_APPL_CODE) ClrHwAgTrimVal_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrHwAgTrimVal_Oper() (ClrHwAgTrimVal_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ClrSnpshtData_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrSnpshtData_Oper() (ClrSnpshtData_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CMNMFGSRVIF_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CMNMFGSRVIF_APPL_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(uint8, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CMNMFGSRVIF_APPL_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(Ary1D_u8_CmnMfgSrvIf, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CMNMFGSRVIF_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(arg1, arg2) (CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasEolGainReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasEolGainReq_Oper() (CurrMeasEolGainReq_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasEolGainStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolGainSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasEolGainStReq_Oper(arg1) (CurrMeasEolGainStsReq_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasEolOffsReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasEolOffsReq_Oper() (CurrMeasEolOffsReq_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasEolOffsStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasEolOffsStReq_Oper(arg1) (CurrMeasEolOffsStsReq_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasGainReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasGainReadReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6) (CurrMeasGainReadReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasGainWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasGainWrReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7) (CurrMeasGainWrReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasOffsReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsHiBrdgVltg_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifF_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgD_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgE_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasOffsReadReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13) (CurrMeasOffsReadReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_CURRMEAS_APPL_CODE) CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasOffsWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_CURRMEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CurrMeasOffsWrReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14) (CurrMeasOffsWrReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGSNSRLS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGSNSRLS_APPL_CODE) FSnsrlsHwCentr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGSNSRLS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FSnsrlsHwCentr_Oper() (FSnsrlsHwCentr_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTVELCTRL_APPL_CODE) GetCtrlPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlPropGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlIntgtrGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupLim_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvLpFilTiCon_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetCtrlPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7) (GetCtrlPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffs_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) BasLineFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) VehLrndFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) Hys_Arg, P2VAR(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffs_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) BasLineFric_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) VehLrndFric_Arg, P2VAR(Ary2D_f32_8_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) Hys_Arg, P2VAR(Ary2D_u16_8_3, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetFricData_Oper(arg1, arg2, arg3, arg4, arg5) (GetFricData_Oper(arg1, arg2, arg3, arg4, arg5), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) GetFricLrngData_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngEna_Arg, P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOffsOutpEna_Arg, P2VAR(SysFricLrngOperMod1, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOperMod_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetFricLrngData_Oper(arg1, arg2, arg3, arg4) (GetFricLrngData_Oper(arg1, arg2, arg3, arg4), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) GetFricOffsOutpDi_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetFricOffsOutpDi_Oper(arg1) (GetFricOffsOutpDi_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) GetHwAgOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetHwAgOffs_Oper(arg1, arg2) (GetHwAgOffs_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_EOTLRNG_APPL_CODE) GetHwAgOverTrvlCnt_Oper(P2VAR(uint8, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgOverTrvlCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetHwAgOverTrvlCnt_Oper(arg1) (GetHwAgOverTrvlCnt_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGVEHCENTRTRIM_APPL_CODE) GetHwAgTrimVal_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) HwAgTrimVal_Arg, P2VAR(boolean, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetHwAgTrimVal_Oper(arg1, arg2) (GetHwAgTrimVal_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) GetHwTqOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetHwTqOffs_Oper(arg1, arg2) (GetHwTqOffs_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_MOTRPLCOGGCMD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CDD_MOTRPLCOGGCMD_APPL_CODE) GetMotCoggCmdPrm_Oper(P2VAR(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CDD_MOTRPLCOGGCMD_APPL_CODE) GetMotCoggCmdPrm_Oper(P2VAR(Ary1D_s1p14_128, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CDD_MOTRPLCOGGCMD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetMotCoggCmdPrm_Oper(arg1, arg2) (GetMotCoggCmdPrm_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTCTRLPRMESTIMN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_MOTCTRLPRMESTIMN_APPL_CODE) GetMotPrmNomEol_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotBackEmfConNom_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotRNom_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTCTRLPRMESTIMN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetMotPrmNomEol_Oper GetMotPrmNomEol_Oper
#  define RTE_START_SEC_MOTRPLCOGGCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTRPLCOGGCFG_APPL_CODE) GetMotRplCoggPrm_Oper(P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3Y_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTRPLCOGGCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetMotRplCoggPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9) (GetMotRplCoggPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTTQCMDSCA_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTTQCMDSCA_APPL_CODE) GetMotTqCmdSca_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTTQCMDSCA_APPL_VAR) MotTqCmdSca_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTTQCMDSCA_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetMotTqCmdSca_Oper(arg1) (GetMotTqCmdSca_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcSts_Oper GetNtcSts10_Oper
#  define RTE_START_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_PULLCMPACTV_APPL_CODE) GetPullCmpPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_PULLCMPACTV_APPL_VAR) PullCmpCmdTot_Arg, P2VAR(float32, AUTOMATIC, RTE_PULLCMPACTV_APPL_VAR) PullCmpShoTerm_Arg, P2VAR(float32, AUTOMATIC, RTE_PULLCMPACTV_APPL_VAR) PullCmpLongTerm_Arg, P2VAR(boolean, AUTOMATIC, RTE_PULLCMPACTV_APPL_VAR) LrngEnad_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetPullCmpPrm_Oper(arg1, arg2, arg3, arg4) (GetPullCmpPrm_Oper(arg1, arg2, arg3, arg4), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit1_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit1_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) GetYawRateOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_SNSROFFSLRNG_APPL_VAR) VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetYawRateOffs_Oper(arg1, arg2) (GetYawRateOffs_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG0MEAS_APPL_CODE) HwAg0MeasHwAg0AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg0MeasHwAg0AutoTrim_Oper() (HwAg0MeasHwAg0AutTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG0MEAS_APPL_CODE) HwAg0MeasHwAg0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg0MeasHwAg0ClrTrim_Oper() (HwAg0MeasHwAg0ClrTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG0MEAS_APPL_CODE) HwAg0MeasHwAg0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) HwAgReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg0MeasHwAg0ReadTrim_Oper(arg1) (HwAg0MeasHwAg0ReadTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG0MEAS_APPL_CODE) HwAg0MeasHwAg0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) HwAgOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg0MeasHwAg0TrimPrfmdSts_Oper(arg1) (HwAg0MeasHwAg0TrimPrfmdSts_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG0MEAS_APPL_CODE) HwAg0MeasHwAg0WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg0MeasHwAg0WrTrim_Oper(arg1) (HwAg0MeasHwAg0WrTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG1MEAS_APPL_CODE) HwAg1MeasHwAg1AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg1MeasHwAg1AutoTrim_Oper() (HwAg1MeasHwAg1AutTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG1MEAS_APPL_CODE) HwAg1MeasHwAg1ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg1MeasHwAg1ClrTrim_Oper() (HwAg1MeasHwAg1ClrTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG1MEAS_APPL_CODE) HwAg1MeasHwAg1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) HwAgReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg1MeasHwAg1ReadTrim_Oper(arg1) (HwAg1MeasHwAg1ReadTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG1MEAS_APPL_CODE) HwAg1MeasHwAg1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) HwAgOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg1MeasHwAg1TrimPrfmdSts_Oper(arg1) (HwAg1MeasHwAg1TrimPrfmdSts_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAG1MEAS_APPL_CODE) HwAg1MeasHwAg1WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwAg1MeasHwAg1WrTrim_Oper(arg1) (HwAg1MeasHwAg1WrTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ0MEAS_APPL_CODE) HwTq0MeasHwTq0AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq0MeasHwTq0AutTrim_Oper() (HwTq0MeasHwTq0AutTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ0MEAS_APPL_CODE) HwTq0MeasHwTq0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq0MeasHwTq0ClrTrim_Oper() (HwTq0MeasHwTq0ClrTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ0MEAS_APPL_CODE) HwTq0MeasHwTq0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq0MeasHwTq0ReadTrim_Oper(arg1) (HwTq0MeasHwTq0ReadTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ0MEAS_APPL_CODE) HwTq0MeasHwTq0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ0MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq0MeasHwTq0TrimPrfmdSts_Oper(arg1) (HwTq0MeasHwTq0TrimPrfmdSts_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ0MEAS_APPL_CODE) HwTq0MeasHwTq0WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq0MeasHwTq0WrTrim_Oper(arg1) (HwTq0MeasHwTq0WrTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ1MEAS_APPL_CODE) HwTq1MeasHwTq1AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq1MeasHwTq1AutTrim_Oper() (HwTq1MeasHwTq1AutTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ1MEAS_APPL_CODE) HwTq1MeasHwTq1ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq1MeasHwTq1ClrTrim_Oper() (HwTq1MeasHwTq1ClrTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ1MEAS_APPL_CODE) HwTq1MeasHwTq1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq1MeasHwTq1ReadTrim_Oper(arg1) (HwTq1MeasHwTq1ReadTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ1MEAS_APPL_CODE) HwTq1MeasHwTq1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq1MeasHwTq1TrimPrfmdSts_Oper(arg1) (HwTq1MeasHwTq1TrimPrfmdSts_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ1MEAS_APPL_CODE) HwTq1MeasHwTq1WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq1MeasHwTq1WrTrim_Oper(arg1) (HwTq1MeasHwTq1WrTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ2MEAS_APPL_CODE) HwTq2MeasHwTq2AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq2MeasHwTq2AutTrim_Oper() (HwTq2MeasHwTq2AutTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ2MEAS_APPL_CODE) HwTq2MeasHwTq2ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq2MeasHwTq2ClrTrim_Oper() (HwTq2MeasHwTq2ClrTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ2MEAS_APPL_CODE) HwTq2MeasHwTq2ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ2MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq2MeasHwTq2ReadTrim_Oper(arg1) (HwTq2MeasHwTq2ReadTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ2MEAS_APPL_CODE) HwTq2MeasHwTq2TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ2MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq2MeasHwTq2TrimPrfmdSts_Oper(arg1) (HwTq2MeasHwTq2TrimPrfmdSts_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ2MEAS_APPL_CODE) HwTq2MeasHwTq2WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq2MeasHwTq2WrTrim_Oper(arg1) (HwTq2MeasHwTq2WrTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ3MEAS_APPL_CODE) HwTq3MeasHwTq3AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq3MeasHwTq3AutTrim_Oper() (HwTq3MeasHwTq3AutTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ3MEAS_APPL_CODE) HwTq3MeasHwTq3ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq3MeasHwTq3ClrTrim_Oper() (HwTq3MeasHwTq3ClrTrim_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ3MEAS_APPL_CODE) HwTq3MeasHwTq3ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq3MeasHwTq3ReadTrim_Oper(arg1) (HwTq3MeasHwTq3ReadTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ3MEAS_APPL_CODE) HwTq3MeasHwTq3TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ3MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq3MeasHwTq3TrimPrfmdSts_Oper(arg1) (HwTq3MeasHwTq3TrimPrfmdSts_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_HWTQ3MEAS_APPL_CODE) HwTq3MeasHwTq3WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_HWTQ3MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq3MeasHwTq3WrTrim_Oper(arg1) (HwTq3MeasHwTq3WrTrim_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4AutTrim_Oper() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4ClrSnsrSca_Oper() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4ClrTrim_Oper() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4ReadSnsrSca_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4ReadTrim_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4SnsrScaPrfmdSts_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4TrimPrfmdSts_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4WrSnsrSca_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq4WrTrim_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5AutTrim_Oper() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5ClrSnsrSca_Oper() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5ClrTrim_Oper() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5ReadSnsrSca_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5ReadTrim_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5SnsrScaPrfmdSts_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5TrimPrfmdSts_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5WrSnsrSca_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTq5WrTrim_Oper(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) InitFricLrngTbl_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_InitFricLrngTbl_Oper() (InitFricLrngTbl_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_MOTAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CDD_MOTAG0MEAS_APPL_CODE) MotAg0MeasMotAg0CoeffTblRead_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CDD_MOTAG0MEAS_APPL_CODE) MotAg0MeasMotAg0CoeffTblRead_Oper(P2VAR(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CDD_MOTAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg0MeasMotAg0CoeffTblRead_Oper(arg1) (MotAg0MeasMotAg0CoeffTblRead_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_MOTAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CDD_MOTAG0MEAS_APPL_CODE) MotAg0MeasMotAg0CoeffTblWr_Oper(P2CONST(float32, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CDD_MOTAG0MEAS_APPL_CODE) MotAg0MeasMotAg0CoeffTblWr_Oper(P2CONST(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG0MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CDD_MOTAG0MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg0MeasMotAg0CoeffTblWr_Oper(arg1) (MotAg0MeasMotAg0CoeffTblWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_MOTAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CDD_MOTAG1MEAS_APPL_CODE) MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CDD_MOTAG1MEAS_APPL_CODE) MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CDD_MOTAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg1MeasMotAg1CoeffTblRead_Oper(arg1) (MotAg1MeasMotAg1CoeffTblRead_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_MOTAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CDD_MOTAG1MEAS_APPL_CODE) MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(float32, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CDD_MOTAG1MEAS_APPL_CODE) MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CDD_MOTAG1MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg1MeasMotAg1CoeffTblWr_Oper(arg1) (MotAg1MeasMotAg1CoeffTblWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_MOTAGCMP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_MOTAGCMP_APPL_CODE) MotAgCmpBackEmfRead_Oper(P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTAGCMP_APPL_VAR) MotAgBackEmfRead); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_MOTAGCMP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAgCmpBackEmfRead_Oper(arg1) (MotAgCmpBackEmfRead_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_MOTAGCMP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CDD_MOTAGCMP_APPL_CODE) MotAgCmpBackEmfWr_Oper(u0p16 MotAgCmpBackEmfWrData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_MOTAGCMP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAgCmpBackEmfWr_Oper MotAgCmpBackEmfWr_Oper
#  define RTE_START_SEC_MOTAG2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTAG2MEAS_APPL_CODE) MotAg2MeasEolPrmRead_Oper(P2VAR(MotAgMeasEolPrmRec1, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) MotAgEolPrmRead_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTAG2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAgMeasEolPrmRead_Oper(arg1) (MotAg2MeasEolPrmRead_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTAG2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTAG2MEAS_APPL_CODE) MotAg2MeasEolPrmWr_Oper(P2CONST(MotAgMeasEolPrmRec1, AUTOMATIC, RTE_MOTAG2MEAS_APPL_DATA) MotAgSinCosEolCalData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTAG2MEAS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAgMeasEolPrmWr_Oper(arg1) (MotAg2MeasEolPrmWr_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NvmCcaHwPartNr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)80, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmCcaSerlNr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)82, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmDiRestore_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)77, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmEpsSysSerlNr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)75, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmIgnCntr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)113, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)112, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmMfgTmpBuf0_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)81, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmMfgTmpBuf1_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)79, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmMfgTmpBuf2_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)78, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmMfgTmpBuf3_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)76, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmMfgTmpBuf4_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)74, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_EraseNvBlock(NvM_BlockIdType parg0); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NvmSeedKey_EraseBlock() (NvMProxy_EraseNvBlock((NvM_BlockIdType)5)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NvmSeedKey_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)5, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvmSeedKey_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)5, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NXTRCALIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_NXTRCALIDS_APPL_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(Std_ReturnType, RTE_NXTRCALIDS_APPL_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(Ary1D_u8_48, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_NXTRCALIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NxtrCalIdsCalDevlpRd_Oper NxtrCalIdsCalDevlpRd_Oper
#  define RTE_START_SEC_NXTRCALIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_NXTRCALIDS_APPL_CODE) NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelNr, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NXTRCALIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NxtrCalIdsCalRelRd_Oper(arg1, arg2, arg3) (NxtrCalIdsCalRelRd_Oper(arg1, arg2, arg3), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsPsrInfoRd_Oper(P2VAR(uint32, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrId, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrRev); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NxtrSwIdsPsrInfoRd_Oper NxtrSwIdsPsrInfoRd_Oper
#  define RTE_START_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NxtrSwIdsSwBuildDateTiRd_Oper(arg1) (NxtrSwIdsSwBuildDateTiRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NxtrSwIdsSwRelInfoRd_Oper(arg1, arg2) (NxtrSwIdsSwRelInfoRd_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NxtrSwIdsSwRelNrRd_Oper(arg1) (NxtrSwIdsSwRelNrRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_NXTRSWIDS_APPL_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_NXTRSWIDS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NxtrSwIdsSwRelVerRd_Oper(arg1) (NxtrSwIdsSwRelVerRd_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_POLARITYCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_POLARITYCFG_APPL_CODE) PolarityCfgRead_Oper(P2VAR(uint32, AUTOMATIC, RTE_POLARITYCFG_APPL_VAR) PolarityCfgSaved); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_POLARITYCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PolarityCfgRead_Oper PolarityCfgRead_Oper
#  define RTE_START_SEC_POLARITYCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_POLARITYCFG_APPL_CODE) PolarityCfgWr_Oper(uint32 PolarityCfgSaved); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_POLARITYCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PolarityCfgWr_Oper PolarityCfgWr_Oper
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ReadNtcFltAry_Oper(P2VAR(ReadFltInfoRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ReadNtcFltAry_Oper(P2VAR(Ary1D_ReadFltInfoRec1_20, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ReadNtcFltAry_Oper(arg1) (ReadNtcFltAry_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ReadNtcInfoAndDebCntr_Oper(arg1, arg2, arg3) (ReadNtcInfoAndDebCntr_Oper(arg1, arg2, arg3), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ReadSnpshtData_Oper(P2VAR(SnpshtDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ReadSnpshtData_Oper(P2VAR(Ary1D_SnpshtDataRec1_8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ReadSnpshtData_Oper(arg1) (ReadSnpshtData_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_EOTLRNG_APPL_CODE) RstHwAgOverTrvlCnt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RstHwAgOverTrvlCnt_Oper() (RstHwAgOverTrvlCnt_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) RstHwTq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RstHwTq_Oper() (RstHwTq_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_EOTLRNG_APPL_CODE) RstMaxHwAgCwAndCcw_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RstMaxHwAgCwAndCcw_Oper() (RstMaxHwAgCwAndCcw_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_PULLCMPACTV_APPL_CODE) RstPullCmp_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RstPullCmp_Oper() (RstPullCmp_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGSNSRLS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGSNSRLS_APPL_CODE) RstSnsrlsHwCentr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGSNSRLS_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RstSnsrlsHwCentr_Oper() (RstSnsrlsHwCentr_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) RstYawAndAg_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RstYawAndAg_Oper() (RstYawAndAg_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_EOTLRNG_APPL_CODE) RtnMaxHwAgCwAndCcw_Oper(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCcwMax_Arg, P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCwMax_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RtnMaxHwAgCwAndCcw_Oper(arg1, arg2) (RtnMaxHwAgCwAndCcw_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_EOTLRNG_APPL_CODE) SerlComRstEot_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SerlComRstEot_Oper() (SerlComRstEot_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTVELCTRL_APPL_CODE) SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetCtrlPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7) (SetCtrlPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) SetFricData_Oper(float32 FricOffs_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) BasLineFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) VehLrndFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) Hys_Arg, P2CONST(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) SetFricData_Oper(float32 FricOffs_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) BasLineFric_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) VehLrndFric_Arg, P2CONST(Ary2D_f32_8_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) Hys_Arg, P2CONST(Ary2D_u16_8_3, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetFricData_Oper(arg1, arg2, arg3, arg4, arg5) (SetFricData_Oper(arg1, arg2, arg3, arg4, arg5), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetFricLrngData_Oper(arg1, arg2, arg3, arg4) (SetFricLrngData_Oper(arg1, arg2, arg3, arg4), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SYSFRICLRNG_APPL_CODE) SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SYSFRICLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetFricOffsOutpDi_Oper(arg1) (SetFricOffsOutpDi_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetHwAgOffs_Oper(arg1, arg2) (SetHwAgOffs_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_EOTLRNG_APPL_CODE) SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_EOTLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetHwAgOverTrvlCnt_Oper(arg1) (SetHwAgOverTrvlCnt_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGVEHCENTRTRIM_APPL_CODE) SetHwAgTrimVal_Oper(float32 HwAgTrimVal_Arg, boolean HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetHwAgTrimVal_Oper(arg1, arg2) (SetHwAgTrimVal_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetHwTqOffs_Oper(arg1, arg2) (SetHwTqOffs_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_ASSISUMLIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_ASSISUMLIM_APPL_CODE) SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_ASSISUMLIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetManTqCmd_Oper SetManTqCmd_Oper
#  define RTE_START_SEC_CDD_MOTRPLCOGGCMD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CDD_MOTRPLCOGGCMD_APPL_CODE) SetMotCoggCmdPrm_Oper(P2CONST(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CDD_MOTRPLCOGGCMD_APPL_CODE) SetMotCoggCmdPrm_Oper(P2CONST(Ary1D_s1p14_128, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CDD_MOTRPLCOGGCMD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetMotCoggCmdPrm_Oper(arg1, arg2) (SetMotCoggCmdPrm_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTCTRLPRMESTIMN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_MOTCTRLPRMESTIMN_APPL_CODE) SetMotPrmNomEol_Oper(float32 MotBackEmfConNom_Arg, float32 MotRNom_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTCTRLPRMESTIMN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetMotPrmNomEol_Oper SetMotPrmNomEol_Oper
#  define RTE_START_SEC_MOTRPLCOGGCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTRPLCOGGCFG_APPL_CODE) SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTRPLCOGGCFG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetMotRplCoggPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9) (SetMotRplCoggPrm_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTTQCMDSCA_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTTQCMDSCA_APPL_CODE) SetMotTqCmdSca_Oper(float32 MotTqCmdSca_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTTQCMDSCA_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetMotTqCmdSca_Oper(arg1) (SetMotTqCmdSca_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_PULLCMPACTV_APPL_CODE) SetPullCmpLongTerm_Oper(float32 PullCmpLongTerm_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetPullCmpLongTerm_Oper(arg1) (SetPullCmpLongTerm_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_PULLCMPACTV_APPL_CODE) SetPullCmpShoTerm_Oper(float32 PullCmpShoTerm_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_PULLCMPACTV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetPullCmpShoTerm_Oper(arg1) (SetPullCmpShoTerm_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_SNSROFFSLRNG_APPL_CODE) SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_SNSROFFSLRNG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetYawRateOffs_Oper(arg1, arg2) (SetYawRateOffs_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTVELCTRL_APPL_CODE) StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_StopCtrl_Oper(arg1) (StopCtrl_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_MOTVELCTRL_APPL_CODE) StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_MOTVELCTRL_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_StrtCtrl_Oper(arg1, arg2) (StrtCtrl_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_HWAGVEHCENTRTRIM_APPL_CODE) UpdHwAgTrimVal_Oper(P2VAR(uint8, AUTOMATIC, RTE_HWAGVEHCENTRTRIM_APPL_VAR) UpdHwAgTrimValSrvResp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_HWAGVEHCENTRTRIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_UpdHwAgTrimVal_Oper(arg1) (UpdHwAgTrimVal_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_NvmIgnCntr_DefaultValue() (((P2CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP])->NvmIgnCntr_DefaultValue) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_NvmMfgEnaCntr_DefaultValue() (((P2CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP])->NvmMfgEnaCntr_DefaultValue) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_NvmNxtrSeedKey_DefaultValue() (&(((P2CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP])->NvmNxtrSeedKey_DefaultValue[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_NvmNxtrSeedKey_DefaultValue() (&((P2CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP])->NvmNxtrSeedKey_DefaultValue) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_SeedKeyDft() (&(((P2CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP])->SeedKeyDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_SeedKeyDft() (&((P2CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP])->SeedKeyDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_CmnMfgSrvSecuAcsAtmptTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CmnMfgSrvSecuAcsAtmptTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CmnMfgSrvSecuAcsMaxNrAtmpt_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CmnMfgSrvSecuAcsMaxNrAtmpt_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_IgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SessionTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_NxtrMfgEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SessionCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiAssiMechTEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiDutyCycThermProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiEotProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiHysCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiInertiaCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiLoaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiSysFricLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiSysMotTqCmdRampRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgDiagcInhb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsSeedReqCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsUnlckd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SysStReqEnaOvrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_CcaHwPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_CcaSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_DiRestore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_EpsSysSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_2, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrv_SeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_IgnCntr() \
  (&Rte_CmnMfgSrv_IgnCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SecuAcsAtmptTmr() \
  (&Rte_CmnMfgSrv_SecuAcsAtmptTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SessionTiOut() \
  (&Rte_CmnMfgSrv_SessionTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NxtrMfgEnaCntr() \
  (&Rte_CmnMfgSrv_NxtrMfgEnaCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SecuAcsAtmptCntr() \
  (&Rte_CmnMfgSrv_SecuAcsAtmptCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SessionCurr() \
  (&Rte_CmnMfgSrv_SessionCurr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiAssiMechTEstimn() \
  (&Rte_CmnMfgSrv_DiAssiMechTEstimn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiDampg() \
  (&Rte_CmnMfgSrv_DiDampg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiDutyCycThermProtn() \
  (&Rte_CmnMfgSrv_DiDutyCycThermProtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiEotProtn() \
  (&Rte_CmnMfgSrv_DiEotProtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiHysCmp() \
  (&Rte_CmnMfgSrv_DiHysCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiInertiaCmp() \
  (&Rte_CmnMfgSrv_DiInertiaCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiLoaSca() \
  (&Rte_CmnMfgSrv_DiLoaSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiPullCmpActvCmd() \
  (&Rte_CmnMfgSrv_DiPullCmpActvCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiPullCmpActvLrng() \
  (&Rte_CmnMfgSrv_DiPullCmpActvLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiRtn() \
  (&Rte_CmnMfgSrv_DiRtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiStallMotTqLim() \
  (&Rte_CmnMfgSrv_DiStallMotTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiSysFricLrng() \
  (&Rte_CmnMfgSrv_DiSysFricLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiSysMotTqCmdRampRate() \
  (&Rte_CmnMfgSrv_DiSysMotTqCmdRampRate) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MfgDiagcInhb() \
  (&Rte_CmnMfgSrv_MfgDiagcInhb) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SecuAcsSeedReqCmpl() \
  (&Rte_CmnMfgSrv_SecuAcsSeedReqCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SecuAcsUnlckd() \
  (&Rte_CmnMfgSrv_SecuAcsUnlckd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStReqEnaOvrd() \
  (&Rte_CmnMfgSrv_SysStReqEnaOvrd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_CcaHwPartNr() (&((*RtePim_CcaHwPartNr())[0]))
#  else
#   define Rte_Pim_CcaHwPartNr() RtePim_CcaHwPartNr()
#  endif
#  define RtePim_CcaHwPartNr() \
  (&Rte_CmnMfgSrv_CcaHwPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_CcaSerlNr() (&((*RtePim_CcaSerlNr())[0]))
#  else
#   define Rte_Pim_CcaSerlNr() RtePim_CcaSerlNr()
#  endif
#  define RtePim_CcaSerlNr() \
  (&Rte_CmnMfgSrv_CcaSerlNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DiRestore() (&((*RtePim_DiRestore())[0]))
#  else
#   define Rte_Pim_DiRestore() RtePim_DiRestore()
#  endif
#  define RtePim_DiRestore() \
  (&Rte_CmnMfgSrv_DiRestore) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_EpsSysSerlNr() (&((*RtePim_EpsSysSerlNr())[0]))
#  else
#   define Rte_Pim_EpsSysSerlNr() RtePim_EpsSysSerlNr()
#  endif
#  define RtePim_EpsSysSerlNr() \
  (&Rte_CmnMfgSrv_EpsSysSerlNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MfgTmpBuf0() (&((*RtePim_MfgTmpBuf0())[0]))
#  else
#   define Rte_Pim_MfgTmpBuf0() RtePim_MfgTmpBuf0()
#  endif
#  define RtePim_MfgTmpBuf0() \
  (&Rte_CmnMfgSrv_MfgTmpBuf0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MfgTmpBuf1() (&((*RtePim_MfgTmpBuf1())[0]))
#  else
#   define Rte_Pim_MfgTmpBuf1() RtePim_MfgTmpBuf1()
#  endif
#  define RtePim_MfgTmpBuf1() \
  (&Rte_CmnMfgSrv_MfgTmpBuf1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MfgTmpBuf2() (&((*RtePim_MfgTmpBuf2())[0]))
#  else
#   define Rte_Pim_MfgTmpBuf2() RtePim_MfgTmpBuf2()
#  endif
#  define RtePim_MfgTmpBuf2() \
  (&Rte_CmnMfgSrv_MfgTmpBuf2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MfgTmpBuf3() (&((*RtePim_MfgTmpBuf3())[0]))
#  else
#   define Rte_Pim_MfgTmpBuf3() RtePim_MfgTmpBuf3()
#  endif
#  define RtePim_MfgTmpBuf3() \
  (&Rte_CmnMfgSrv_MfgTmpBuf3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MfgTmpBuf4() (&((*RtePim_MfgTmpBuf4())[0]))
#  else
#   define Rte_Pim_MfgTmpBuf4() RtePim_MfgTmpBuf4()
#  endif
#  define RtePim_MfgTmpBuf4() \
  (&Rte_CmnMfgSrv_MfgTmpBuf4) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_SeedKey() (&((*RtePim_SeedKey())[0]))
#  else
#   define Rte_Pim_SeedKey() RtePim_SeedKey()
#  endif
#  define RtePim_SeedKey() \
  (&Rte_CmnMfgSrv_SeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CmnMfgSrv_START_SEC_CODE
# include "CmnMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CmnMfgSrvCmnMfgSrvMaiFct_Oper CmnMfgSrvCmnMfgSrvMaiFct_Oper
#  define RTE_RUNNABLE_CmnMfgSrvInit1 CmnMfgSrvInit1
#  define RTE_RUNNABLE_CmnMfgSrvPer1 CmnMfgSrvPer1
# endif

FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespLen, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CmnMfgSrv_STOP_SEC_CODE
# include "CmnMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetMotPrmNomEol1_E_NOT_OK (1U)

#  define RTE_E_GetNtcSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_MotAgCmpBackEmfRead1_E_NOT_OK (1U)

#  define RTE_E_MotAgCmpBackEmfWr1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK (1U)

#  define RTE_E_PolarityCfgRead1_E_NOT_OK (1U)

#  define RTE_E_PolarityCfgWr1_E_NOT_OK (1U)

#  define RTE_E_SetManTqCmd1_E_NOT_OK (1U)

#  define RTE_E_SetMotPrmNomEol1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CMNMFGSRV_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
