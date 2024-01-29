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
 *          File:  Rte_CustDiagc.h
 *     SW-C Type:  CustDiagc
 *  Generated at:  Sun Feb 12 13:02:11 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CustDiagc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CUSTDIAGC_H
# define _RTE_CUSTDIAGC_H

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

# include "Rte_CustDiagc_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CustDiagc
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CpidActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcCtrlPidKeyAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcCtrlPidSeedKeyTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcCtrlPidSeedReqd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcCtrlPidSeedTmrActvd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcProgmSessionKeyAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcProgmSessionSeedKeyTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcProgmSessionSeedReqd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CustDiagcProgmSessionSeedTmrActvd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DtcNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmDiCtrlPidTstRunng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmIgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgCntxt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(GmFctDiArbnSts1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevGmFctDiArbnSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Srv12LoopCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SrvCntxt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStReqEnaOvrdCust; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CustDiagc, RTE_CONST, RTE_CONST) Rte_Inst_CustDiagc; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CustDiagc, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ApaSt_Val (0U)
# define Rte_InitValue_BattVltg_Val (0.0F)
# define Rte_InitValue_CtrlrTRng_Val (0U)
# define Rte_InitValue_CustMfgEnaSt_Val (0U)
# define Rte_InitValue_DesRtIdx_Val (0U)
# define Rte_InitValue_EcuTFild_Val (0.0F)
# define Rte_InitValue_EngRunActv_Logl (FALSE)
# define Rte_InitValue_EngSpd_Val (0.0F)
# define Rte_InitValue_GmFctDiSts_Val (0U)
# define Rte_InitValue_GmIgnCntr_Val (0U)
# define Rte_InitValue_GmSysPwrMod_Val (0U)
# define Rte_InitValue_HwAgCcwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgCwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_HwAgTrimPrfmd_Logl (FALSE)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqIdptSig_Val (4U)
# define Rte_InitValue_LkaCmd_Val (0.0F)
# define Rte_InitValue_LkaSt_Val (0U)
# define Rte_InitValue_MfgOvrlDi_Logl (FALSE)
# define Rte_InitValue_MissMsg0C9_Logl (FALSE)
# define Rte_InitValue_MissMsg1F1_Logl (FALSE)
# define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
# define Rte_InitValue_MotCurrPeakEstimd_Val (0.0F)
# define Rte_InitValue_MotTqCmd_Val (0.0F)
# define Rte_InitValue_PinionAg_Val (0.0F)
# define Rte_InitValue_PinionAgConf_Val (0.0F)
# define Rte_InitValue_SerlComDi_Logl (FALSE)
# define Rte_InitValue_SteerWhlAgReqTarAg_Val (0.0F)
# define Rte_InitValue_StrtStopSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_SysStReqEnaOvrdCombd_Logl (FALSE)
# define Rte_InitValue_SysStReqEnaOvrdNxtr_Logl (FALSE)
# define Rte_InitValue_ThermLimFlgCntr_Val (0U)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)
# define Rte_InitValue_VltgRng_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_ApaSt_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_BattVltg_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_CtrlrTRng_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_CustMfgEnaSt_Val(P2VAR(MfgEnaSt1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_DesRtIdx_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_EngRunActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_EngSpd_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_GmFctDiSts_Val(P2VAR(GmFctDiArbnSts1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_GmSysPwrMod_Val(P2VAR(GmSysPwrMod1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_HwAgCcwDetd_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_HwAgCwDetd_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_HwAgEotCcw_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_HwAgEotCw_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_HwAgTrimPrfmd_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_HwTqIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_LkaCmd_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_LkaSt_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_MissMsg0C9_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_MissMsg1F1_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_MotCurrDaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_MotCurrPeakEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_MotTqCmd_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_PinionAg_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_PinionAgConf_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_SteerWhlAgReqTarAg_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_StrtStopSt_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_SysStReqEnaOvrdNxtr_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_ThermLimFlgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiagc_VltgRng_Val(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CustDiagc_GmIgnCntr_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CustDiagc_MfgOvrlDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CustDiagc_SerlComDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CustDiagc_SysStReqEnaOvrdCombd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_ClrAllDiagc_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_ClrHwAgTrimVal_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_ClrTrigStsAry_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_CustDiagcGmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_GetGpioMcuEna_Oper(P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_GetNtcActv_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) BufPtr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_GmFctDiReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrBasMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) BasMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrBasMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrBasMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) BasMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCalProgdStsRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCalProgdStsWr_Oper(uint8 CalProgdSts); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCcaMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCcaMfgTrakgRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CcaMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCmpdVehPartnProdtStructRd_Oper(P2VAR(Ary1D_u8_14, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CmpdVehPartnProdtStruct); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCtrlPidKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCtrlPidKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCtrlPidKeyWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCtrlPidKeyWr_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) CtrlPidKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCtrlPidSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCtrlPidSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CtrlPidSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCustMfgEnaCntrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrDataUniversalNrSysIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrDataUniversalNrSysIdRd_Oper(P2VAR(Ary1D_u8_9, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) DataUniversalNrSysId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrEcuIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrEcuIdRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) EcuId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrEndMdlPartNrAlphaCodRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) EndMdlPartNrAlphaCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrEndMdlPartNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrEndMdlPartNrRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) EndMdlPartNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrGmLanIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) GmLanId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrGmLanIdRd_Oper(P2VAR(Ary1D_u8_12, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) GmLanId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrLstRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrLstRepairShopCodRd_Oper(P2VAR(Ary1D_u8_10, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrNxtrMfgTrakgRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrNxtrMfgTrakgRd_Oper(P2VAR(Ary1D_u8_7, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) NxtrMfgTrakg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmDateRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmDateRd_Oper(P2VAR(Ary1D_u8_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmDateWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmDateWr_Oper(P2CONST(Ary1D_u8_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) ProgmDate); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmSessionKeyChk_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmSessionKeyChk_Oper(P2CONST(Ary1D_u8_5, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) ProgmSessionKey); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmSessionSeedRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrProgmSessionSeedRd_Oper(P2VAR(Ary1D_u8_5, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) ProgmSessionSeed); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrRepairShopCodRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrRepairShopCodRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrRepairShopCodWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrRepairShopCodWr_Oper(P2CONST(Ary1D_u8_10, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) RepairShopCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSecuBypAuthnRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSecuBypAuthnRd_Oper(P2VAR(Ary1D_u8_822, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSecuBypAuthnWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSecuBypAuthnWr_Oper(P2CONST(Ary1D_u8_822, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) SecuBypAuthn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysCodVersNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysCodVersNrRd_Oper(P2VAR(Ary1D_u8_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysCodVersNrWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysCodVersNrWr_Oper(P2CONST(Ary1D_u8_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) SysCodVersNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysNameRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysNameRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysNameWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrSysNameWr_Oper(P2CONST(Ary1D_u8_20, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) SysName); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrVinDataRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrVinDataRd_Oper(P2VAR(Ary1D_u8_17, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrVinDataWr_Oper(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_PartNrVinDataWr_Oper(P2CONST(Ary1D_u8_17, AUTOMATIC, RTE_CUSTDIAGC_APPL_DATA) VinData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_RtnMaxHwAgCwAndCcw_Oper(P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) HwAgCcwMax_Arg, P2VAR(float32, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) HwAgCwMax_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CustDiagc_UpdHwAgTrimVal_Oper(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) UpdHwAgTrimValSrvResp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CustDiagc_EotLrngRackTrvlMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CustDiagc_GmOvrlStMgrApaMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CustDiagc_GmOvrlStMgrEscMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CustDiagc_GmOvrlStMgrLkaMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CustDiagc_GmStrtStopEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CustDiagc_InertiaCmpVelDecelGainEnaCal_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CustDiagc_PullCmpActvEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CustDiagc_WhlImbRejctnFctEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CustDiagc_DiagcMgrFltResp_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u32_512, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CustDiagc_DiagcMgrFltResp_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ApaSt_Val Rte_Read_CustDiagc_ApaSt_Val
# define Rte_Read_BattVltg_Val Rte_Read_CustDiagc_BattVltg_Val
# define Rte_Read_CtrlrTRng_Val Rte_Read_CustDiagc_CtrlrTRng_Val
# define Rte_Read_CustMfgEnaSt_Val Rte_Read_CustDiagc_CustMfgEnaSt_Val
# define Rte_Read_DesRtIdx_Val Rte_Read_CustDiagc_DesRtIdx_Val
# define Rte_Read_EcuTFild_Val Rte_Read_CustDiagc_EcuTFild_Val
# define Rte_Read_EngRunActv_Logl Rte_Read_CustDiagc_EngRunActv_Logl
# define Rte_Read_EngSpd_Val Rte_Read_CustDiagc_EngSpd_Val
# define Rte_Read_GmFctDiSts_Val Rte_Read_CustDiagc_GmFctDiSts_Val
# define Rte_Read_GmSysPwrMod_Val Rte_Read_CustDiagc_GmSysPwrMod_Val
# define Rte_Read_HwAgCcwDetd_Logl Rte_Read_CustDiagc_HwAgCcwDetd_Logl
# define Rte_Read_HwAgCwDetd_Logl Rte_Read_CustDiagc_HwAgCwDetd_Logl
# define Rte_Read_HwAgEotCcw_Val Rte_Read_CustDiagc_HwAgEotCcw_Val
# define Rte_Read_HwAgEotCw_Val Rte_Read_CustDiagc_HwAgEotCw_Val
# define Rte_Read_HwAgTrimPrfmd_Logl Rte_Read_CustDiagc_HwAgTrimPrfmd_Logl
# define Rte_Read_HwTq_Val Rte_Read_CustDiagc_HwTq_Val
# define Rte_Read_HwTqIdptSig_Val Rte_Read_CustDiagc_HwTqIdptSig_Val
# define Rte_Read_LkaCmd_Val Rte_Read_CustDiagc_LkaCmd_Val
# define Rte_Read_LkaSt_Val Rte_Read_CustDiagc_LkaSt_Val
# define Rte_Read_MissMsg0C9_Logl Rte_Read_CustDiagc_MissMsg0C9_Logl
# define Rte_Read_MissMsg1F1_Logl Rte_Read_CustDiagc_MissMsg1F1_Logl
# define Rte_Read_MotCurrDaxCmd_Val Rte_Read_CustDiagc_MotCurrDaxCmd_Val
# define Rte_Read_MotCurrPeakEstimd_Val Rte_Read_CustDiagc_MotCurrPeakEstimd_Val
# define Rte_Read_MotTqCmd_Val Rte_Read_CustDiagc_MotTqCmd_Val
# define Rte_Read_PinionAg_Val Rte_Read_CustDiagc_PinionAg_Val
# define Rte_Read_PinionAgConf_Val Rte_Read_CustDiagc_PinionAgConf_Val
# define Rte_Read_SteerWhlAgReqTarAg_Val Rte_Read_CustDiagc_SteerWhlAgReqTarAg_Val
# define Rte_Read_StrtStopSt_Val Rte_Read_CustDiagc_StrtStopSt_Val
# define Rte_Read_SysSt_Val Rte_Read_CustDiagc_SysSt_Val
# define Rte_Read_SysStReqEnaOvrdNxtr_Logl Rte_Read_CustDiagc_SysStReqEnaOvrdNxtr_Logl
# define Rte_Read_ThermLimFlgCntr_Val Rte_Read_CustDiagc_ThermLimFlgCntr_Val
# define Rte_Read_VehSpd_Val Rte_Read_CustDiagc_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_CustDiagc_VehSpdVld_Logl
# define Rte_Read_VltgRng_Val Rte_Read_CustDiagc_VltgRng_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_GmIgnCntr_Val Rte_Write_CustDiagc_GmIgnCntr_Val
# define Rte_Write_MfgOvrlDi_Logl Rte_Write_CustDiagc_MfgOvrlDi_Logl
# define Rte_Write_SerlComDi_Logl Rte_Write_CustDiagc_SerlComDi_Logl
# define Rte_Write_SysStReqEnaOvrdCombd_Logl Rte_Write_CustDiagc_SysStReqEnaOvrdCombd_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_ClrAllDiagc_Oper Rte_Call_CustDiagc_ClrAllDiagc_Oper
# define Rte_Call_ClrHwAgTrimVal_Oper Rte_Call_CustDiagc_ClrHwAgTrimVal_Oper
# define Rte_Call_ClrTrigStsAry_Oper Rte_Call_CustDiagc_ClrTrigStsAry_Oper
# define Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus Rte_Call_CustDiagc_CustDiagcGmIgnCntr_SetRamBlockStatus
# define Rte_Call_GetGpioMcuEna_Oper Rte_Call_CustDiagc_GetGpioMcuEna_Oper
# define Rte_Call_GetNtcActv_Oper Rte_Call_CustDiagc_GetNtcActv_Oper
# define Rte_Call_GetNtcSts_Oper Rte_Call_CustDiagc_GetNtcSts_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_CustDiagc_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetSigStcHlthData_Oper Rte_Call_CustDiagc_GetSigStcHlthData_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_CustDiagc_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_GmFctDiReq_Oper Rte_Call_CustDiagc_GmFctDiReq_Oper
# define Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper Rte_Call_CustDiagc_PartNrBasMdlPartNrAlphaCodRd_Oper
# define Rte_Call_PartNrBasMdlPartNrRd_Oper Rte_Call_CustDiagc_PartNrBasMdlPartNrRd_Oper
# define Rte_Call_PartNrCalProgdStsRd_Oper Rte_Call_CustDiagc_PartNrCalProgdStsRd_Oper
# define Rte_Call_PartNrCalProgdStsWr_Oper Rte_Call_CustDiagc_PartNrCalProgdStsWr_Oper
# define Rte_Call_PartNrCcaMfgTrakgRd_Oper Rte_Call_CustDiagc_PartNrCcaMfgTrakgRd_Oper
# define Rte_Call_PartNrCmpdVehPartnProdtStructRd_Oper Rte_Call_CustDiagc_PartNrCmpdVehPartnProdtStructRd_Oper
# define Rte_Call_PartNrCtrlPidKeyChk_Oper Rte_Call_CustDiagc_PartNrCtrlPidKeyChk_Oper
# define Rte_Call_PartNrCtrlPidKeyWr_Oper Rte_Call_CustDiagc_PartNrCtrlPidKeyWr_Oper
# define Rte_Call_PartNrCtrlPidSeedRd_Oper Rte_Call_CustDiagc_PartNrCtrlPidSeedRd_Oper
# define Rte_Call_PartNrCtrlPidSeedUpprByteWr_Oper Rte_Call_CustDiagc_PartNrCtrlPidSeedUpprByteWr_Oper
# define Rte_Call_PartNrCustMfgEnaCntrRd_Oper Rte_Call_CustDiagc_PartNrCustMfgEnaCntrRd_Oper
# define Rte_Call_PartNrCustMfgEnaCntrWr_Oper Rte_Call_CustDiagc_PartNrCustMfgEnaCntrWr_Oper
# define Rte_Call_PartNrDataUniversalNrSysIdRd_Oper Rte_Call_CustDiagc_PartNrDataUniversalNrSysIdRd_Oper
# define Rte_Call_PartNrEcuIdRd_Oper Rte_Call_CustDiagc_PartNrEcuIdRd_Oper
# define Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper Rte_Call_CustDiagc_PartNrEndMdlPartNrAlphaCodRd_Oper
# define Rte_Call_PartNrEndMdlPartNrRd_Oper Rte_Call_CustDiagc_PartNrEndMdlPartNrRd_Oper
# define Rte_Call_PartNrGmLanIdRd_Oper Rte_Call_CustDiagc_PartNrGmLanIdRd_Oper
# define Rte_Call_PartNrLstRepairShopCodRd_Oper Rte_Call_CustDiagc_PartNrLstRepairShopCodRd_Oper
# define Rte_Call_PartNrNxtrMfgTrakgRd_Oper Rte_Call_CustDiagc_PartNrNxtrMfgTrakgRd_Oper
# define Rte_Call_PartNrProgmDateRd_Oper Rte_Call_CustDiagc_PartNrProgmDateRd_Oper
# define Rte_Call_PartNrProgmDateWr_Oper Rte_Call_CustDiagc_PartNrProgmDateWr_Oper
# define Rte_Call_PartNrProgmSessionKeyChk_Oper Rte_Call_CustDiagc_PartNrProgmSessionKeyChk_Oper
# define Rte_Call_PartNrProgmSessionSeedRd_Oper Rte_Call_CustDiagc_PartNrProgmSessionSeedRd_Oper
# define Rte_Call_PartNrRepairShopCodRd_Oper Rte_Call_CustDiagc_PartNrRepairShopCodRd_Oper
# define Rte_Call_PartNrRepairShopCodWr_Oper Rte_Call_CustDiagc_PartNrRepairShopCodWr_Oper
# define Rte_Call_PartNrSecuBypAuthnRd_Oper Rte_Call_CustDiagc_PartNrSecuBypAuthnRd_Oper
# define Rte_Call_PartNrSecuBypAuthnWr_Oper Rte_Call_CustDiagc_PartNrSecuBypAuthnWr_Oper
# define Rte_Call_PartNrSysCodVersNrRd_Oper Rte_Call_CustDiagc_PartNrSysCodVersNrRd_Oper
# define Rte_Call_PartNrSysCodVersNrWr_Oper Rte_Call_CustDiagc_PartNrSysCodVersNrWr_Oper
# define Rte_Call_PartNrSysNameRd_Oper Rte_Call_CustDiagc_PartNrSysNameRd_Oper
# define Rte_Call_PartNrSysNameWr_Oper Rte_Call_CustDiagc_PartNrSysNameWr_Oper
# define Rte_Call_PartNrVinDataRd_Oper Rte_Call_CustDiagc_PartNrVinDataRd_Oper
# define Rte_Call_PartNrVinDataWr_Oper Rte_Call_CustDiagc_PartNrVinDataWr_Oper
# define Rte_Call_RtnMaxHwAgCwAndCcw_Oper Rte_Call_CustDiagc_RtnMaxHwAgCwAndCcw_Oper
# define Rte_Call_UpdHwAgTrimVal_Oper Rte_Call_CustDiagc_UpdHwAgTrimVal_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_EotLrngRackTrvlMin_Val Rte_Prm_CustDiagc_EotLrngRackTrvlMin_Val

# define Rte_Prm_GmOvrlStMgrApaMfgEna_Logl Rte_Prm_CustDiagc_GmOvrlStMgrApaMfgEna_Logl

# define Rte_Prm_GmOvrlStMgrEscMfgEna_Logl Rte_Prm_CustDiagc_GmOvrlStMgrEscMfgEna_Logl

# define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl Rte_Prm_CustDiagc_GmOvrlStMgrLkaMfgEna_Logl

# define Rte_Prm_GmStrtStopEna_Logl Rte_Prm_CustDiagc_GmStrtStopEna_Logl

# define Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl Rte_Prm_CustDiagc_InertiaCmpVelDecelGainEnaCal_Logl

# define Rte_Prm_PullCmpActvEna_Logl Rte_Prm_CustDiagc_PullCmpActvEna_Logl

# define Rte_Prm_WhlImbRejctnFctEna_Logl Rte_Prm_CustDiagc_WhlImbRejctnFctEna_Logl

# define Rte_Prm_DiagcMgrFltResp_Ary1D Rte_Prm_CustDiagc_DiagcMgrFltResp_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CustDiagcCtrlPidSeedKeyTmr() (Rte_Inst_CustDiagc->Pim_CustDiagcCtrlPidSeedKeyTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CustDiagcProgmSessionSeedKeyTmr() (Rte_Inst_CustDiagc->Pim_CustDiagcProgmSessionSeedKeyTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DtcNr() (Rte_Inst_CustDiagc->Pim_DtcNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgCntxt() (Rte_Inst_CustDiagc->Pim_MsgCntxt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmIgnCntr() (Rte_Inst_CustDiagc->Pim_GmIgnCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CustDiagcCtrlPidKeyAtmptCntr() (Rte_Inst_CustDiagc->Pim_CustDiagcCtrlPidKeyAtmptCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CustDiagcProgmSessionKeyAtmptCntr() (Rte_Inst_CustDiagc->Pim_CustDiagcProgmSessionKeyAtmptCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevGmFctDiArbnSts() (Rte_Inst_CustDiagc->Pim_PrevGmFctDiArbnSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Srv12LoopCntr() (Rte_Inst_CustDiagc->Pim_Srv12LoopCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SrvCntxt() (Rte_Inst_CustDiagc->Pim_SrvCntxt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CpidActv() (Rte_Inst_CustDiagc->Pim_CpidActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CustDiagcCtrlPidSeedReqd() (Rte_Inst_CustDiagc->Pim_CustDiagcCtrlPidSeedReqd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CustDiagcCtrlPidSeedTmrActvd() (Rte_Inst_CustDiagc->Pim_CustDiagcCtrlPidSeedTmrActvd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CustDiagcProgmSessionSeedReqd() (Rte_Inst_CustDiagc->Pim_CustDiagcProgmSessionSeedReqd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CustDiagcProgmSessionSeedTmrActvd() (Rte_Inst_CustDiagc->Pim_CustDiagcProgmSessionSeedTmrActvd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmDiCtrlPidTstRunng() (Rte_Inst_CustDiagc->Pim_GmDiCtrlPidTstRunng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSysPwrModRun() (Rte_Inst_CustDiagc->Pim_PrevSysPwrModRun) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStReqEnaOvrdCust() (Rte_Inst_CustDiagc->Pim_SysStReqEnaOvrdCust) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_CustDiagcCtrlPidSeedKeyTmr(void)
 *   uint32 *Rte_Pim_CustDiagcProgmSessionSeedKeyTmr(void)
 *   uint32 *Rte_Pim_DtcNr(void)
 *   uint32 *Rte_Pim_MsgCntxt(void)
 *   uint16 *Rte_Pim_GmIgnCntr(void)
 *   uint8 *Rte_Pim_CustDiagcCtrlPidKeyAtmptCntr(void)
 *   uint8 *Rte_Pim_CustDiagcProgmSessionKeyAtmptCntr(void)
 *   GmFctDiArbnSts1 *Rte_Pim_PrevGmFctDiArbnSts(void)
 *   uint8 *Rte_Pim_Srv12LoopCntr(void)
 *   uint8 *Rte_Pim_SrvCntxt(void)
 *   boolean *Rte_Pim_CpidActv(void)
 *   boolean *Rte_Pim_CustDiagcCtrlPidSeedReqd(void)
 *   boolean *Rte_Pim_CustDiagcCtrlPidSeedTmrActvd(void)
 *   boolean *Rte_Pim_CustDiagcProgmSessionSeedReqd(void)
 *   boolean *Rte_Pim_CustDiagcProgmSessionSeedTmrActvd(void)
 *   boolean *Rte_Pim_GmDiCtrlPidTstRunng(void)
 *   boolean *Rte_Pim_PrevSysPwrModRun(void)
 *   boolean *Rte_Pim_SysStReqEnaOvrdCust(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EotLrngRackTrvlMin_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmStrtStopEna_Logl(void)
 *   boolean Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl(void)
 *   boolean Rte_Prm_PullCmpActvEna_Logl(void)
 *   boolean Rte_Prm_WhlImbRejctnFctEna_Logl(void)
 *   uint32 *Rte_Prm_DiagcMgrFltResp_Ary1D(void)
 *
 *********************************************************************************************************************/


# define CustDiagc_START_SEC_CODE
# include "CustDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_BattVltgEcu_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_BattVltgEcu>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_BattVltgEcu_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_BattVltgEcu_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_BattVltgEcu_ReadData CSDataServices_BattVltgEcu_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_BattVltgEcu_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EcuIntT_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EcuIntT>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EcuIntT_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EcuIntT_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EcuIntT_ReadData CSDataServices_EcuIntT_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EcuIntT_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EngSpd_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EngSpd>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EngSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MissMsg0C9_Logl(boolean *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EngSpd_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EngSpd_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EngSpd_ReadData CSDataServices_EngSpd_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EngSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EngSpd_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpdMotOvldProtnCntr_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpdMotOvldProtnCntr>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ThermLimFlgCntr_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpdMotOvldProtnCntr_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpdMotOvldProtnCntr_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpdMotOvldProtnCntr_ReadData CSDataServices_EpdMotOvldProtnCntr_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpdMotOvldProtnCntr_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsAgOvrlSts_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsAgOvrlSts>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ApaSt_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsAgOvrlSts_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsAgOvrlSts_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpsAgOvrlSts_ReadData CSDataServices_EpsAgOvrlSts_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsAgOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsApaAgOvrlReq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsApaAgOvrlReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SteerWhlAgReqTarAg_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsApaAgOvrlReq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsApaAgOvrlReq_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpsApaAgOvrlReq_ReadData CSDataServices_EpsApaAgOvrlReq_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsApaAgOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsMotCurrFb_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsMotCurrFb>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsMotCurrFb_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsMotCurrFb_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpsMotCurrFb_ReadData CSDataServices_EpsMotCurrFb_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurrFb_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsMotCurr_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsMotCurr>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsMotCurr_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsMotCurr_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpsMotCurr_ReadData CSDataServices_EpsMotCurr_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsMotCurr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsStopStrtSts_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsStopStrtSts>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_StrtStopSt_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsStopStrtSts_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsStopStrtSts_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpsStopStrtSts_ReadData CSDataServices_EpsStopStrtSts_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsStopStrtSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsTqOvrlReq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsTqOvrlReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_LkaCmd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsTqOvrlReq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsTqOvrlReq_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpsTqOvrlReq_ReadData CSDataServices_EpsTqOvrlReq_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlReq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_EpsTqOvrlSts_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_EpsTqOvrlSts>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_LkaSt_Val(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_EpsTqOvrlSts_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_EpsTqOvrlSts_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_EpsTqOvrlSts_ReadData CSDataServices_EpsTqOvrlSts_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_EpsTqOvrlSts_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_IgnCycCntr_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_IgnCycCntr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_IgnCycCntr_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_IgnCycCntr_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_IgnCycCntr_ReadData CSDataServices_IgnCycCntr_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_IgnCycCntr_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SplrIntDtcInfo_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SplrIntDtcInfo>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcActv_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcActv_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcSts_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SplrIntDtcInfo_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_SplrIntDtcInfo_ReadData CSDataServices_SplrIntDtcInfo_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SplrIntDtcInfo_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SteerInpTq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SteerInpTq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SteerInpTq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SteerInpTq_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_SteerInpTq_ReadData CSDataServices_SteerInpTq_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerInpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SteerOutpTq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SteerOutpTq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SteerOutpTq_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SteerOutpTq_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_SteerOutpTq_ReadData CSDataServices_SteerOutpTq_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerOutpTq_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SteerWhlAg_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SteerWhlAg>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SteerWhlAg_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SteerWhlAg_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_SteerWhlAg_ReadData CSDataServices_SteerWhlAg_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SteerWhlAg_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_SysPwrMod_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_SysPwrMod>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
 *   Std_ReturnType Rte_Read_MissMsg1F1_Logl(boolean *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_SysPwrMod_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_SysPwrMod_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_SysPwrMod_ReadData CSDataServices_SysPwrMod_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_SysPwrMod_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_TiIgnOn_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_TiIgnOn>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_TiIgnOn_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_TiIgnOn_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_TiIgnOn_ReadData CSDataServices_TiIgnOn_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_TiIgnOn_ReadData(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_VehSpd_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_VehSpd>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_VehSpd_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_VehSpd_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_VehSpd_ReadData CSDataServices_VehSpd_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_VehSpd_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiagc_CODE) CSDataServices_VehSpd_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_CUSTDIAGC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagcClrGmIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CustDiagcClrGmIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CustDiagcClrGmIgnCntr_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CustDiagcClrGmIgnCntr_Oper CustDiagcClrGmIgnCntr_Oper
FUNC(void, CustDiagc_CODE) CustDiagcClrGmIgnCntr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ApaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CtrlrTRng_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CustMfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_DesRtIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngRunActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgCcwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgCwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrimPrfmd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MissMsg0C9_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VltgRng_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MfgOvrlDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SerlComDi_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_ClrAllDiagc_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrHwAgTrimVal_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrTrigStsAry_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, uint32 *BufPtr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GmFctDiReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCalProgdStsRd_Oper(uint8 *CalProgdSts)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCalProgdStsWr_Oper(uint8 CalProgdSts)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCalProgdStsWr1_InvldVal
 *   Std_ReturnType Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCmpdVehPartnProdtStructRd_Oper(uint8 *CmpdVehPartnProdtStruct)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidKeyChk_Oper(const uint8 *CtrlPidKey)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCtrlPidKeyChk1_InvldKey
 *   Std_ReturnType Rte_Call_PartNrCtrlPidKeyWr_Oper(const uint8 *CtrlPidKey)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedRd_Oper(uint8 *CtrlPidSeed)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero
 *   Std_ReturnType Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrGmLanIdRd_Oper(uint8 *GmLanId)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrLstRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrProgmDateWr1_OutOfRange
 *   Std_ReturnType Rte_Call_PartNrProgmSessionKeyChk_Oper(const uint8 *ProgmSessionKey)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PartNrProgmSessionKeyChk1_InvldKey
 *   Std_ReturnType Rte_Call_PartNrProgmSessionSeedRd_Oper(uint8 *ProgmSessionSeed)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdHwAgTrimVal_Oper(uint8 *UpdHwAgTrimValSrvResp_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CustDiagcInit1 CustDiagcInit1
FUNC(void, CustDiagc_CODE) CustDiagcInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagcPer1
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
 *   Std_ReturnType Rte_Read_GmFctDiSts_Val(GmFctDiArbnSts1 *data)
 *   Std_ReturnType Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data)
 *   Std_ReturnType Rte_Read_SysStReqEnaOvrdNxtr_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_GmIgnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SysStReqEnaOvrdCombd_Logl(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CustDiagcPer1 CustDiagcPer1
FUNC(void, CustDiagc_CODE) CustDiagcPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CustDiagc_STOP_SEC_CODE
# include "CustDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_CSDataServices_BattVltgEcu_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EcuIntT_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EngSpd_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpdMotOvldProtnCntr_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpsAgOvrlSts_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpsApaAgOvrlReq_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpsMotCurr_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpsMotCurrFb_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpsStopStrtSts_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpsTqOvrlReq_E_NOT_OK (1U)

# define RTE_E_CSDataServices_EpsTqOvrlSts_E_NOT_OK (1U)

# define RTE_E_CSDataServices_IgnCycCntr_E_NOT_OK (1U)

# define RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK (1U)

# define RTE_E_CSDataServices_SteerInpTq_E_NOT_OK (1U)

# define RTE_E_CSDataServices_SteerOutpTq_E_NOT_OK (1U)

# define RTE_E_CSDataServices_SteerWhlAg_E_NOT_OK (1U)

# define RTE_E_CSDataServices_SysPwrMod_E_NOT_OK (1U)

# define RTE_E_CSDataServices_TiIgnOn_E_NOT_OK (1U)

# define RTE_E_CSDataServices_VehSpd_E_NOT_OK (1U)

# define RTE_E_GetGpio1_E_NOT_OK (1U)

# define RTE_E_GetNtcActv_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetNtcSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_PartNrCalProgdStsWr1_InvldVal (1U)

# define RTE_E_PartNrCtrlPidKeyChk1_InvldKey (1U)

# define RTE_E_PartNrCtrlPidSeedUpprByteWr1_MfgEnaCntrNotZero (1U)

# define RTE_E_PartNrCustMfgEnaCntrWr1_CustMfgEnaCntrZero (1U)

# define RTE_E_PartNrProgmDateWr1_OutOfRange (1U)

# define RTE_E_PartNrProgmSessionKeyChk1_InvldKey (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1486916234
#    error "The magic number of the generated file <C:/Hari/Work/SynergyProjects/EA4/GM_003A_CustDiagc_Impl/tools/contract/Rte_CustDiagc.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1486916234
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CUSTDIAGC_H */
