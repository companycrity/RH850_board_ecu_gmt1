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
 *          File:  Rte_DiagcMgr.h
 *     SW-C Type:  DiagcMgr
 *  Generated at:  Tue Dec  6 12:14:49 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DiagcMgr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DIAGCMGR_H
# define _RTE_DIAGCMGR_H

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

# include "Rte_DiagcMgr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DiagcMgr
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_NtcFltInfoRec2_20, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiagcMgrNtcFltAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DtcEnaSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_DiagcMgr1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DtcIdxPrevSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevClrDtcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DiagcMgr, RTE_CONST, RTE_CONST) Rte_Inst_DiagcMgr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DiagcMgr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BrdgVltg_Val (6.0F)
# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_DiagcStsCtrldShtDwnFltPrsnt_Logl (FALSE)
# define Rte_InitValue_DiagcStsDftHwAg_Logl (FALSE)
# define Rte_InitValue_DiagcStsDftHwAgSerlComExprtVal_Logl (FALSE)
# define Rte_InitValue_DiagcStsDftVehSpd_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
# define Rte_InitValue_DiagcStsLimdTPrfmnc_Logl (FALSE)
# define Rte_InitValue_DiagcStsWhlImbRejctnDi_Logl (FALSE)
# define Rte_InitValue_EcuTFild_Val (25.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_IgnCntr_Val (0U)
# define Rte_InitValue_MfgDiagcInhb_Logl (FALSE)
# define Rte_InitValue_MfgEnaSt_Val (0U)
# define Rte_InitValue_MotTqCmdMrfScad_Val (0.0F)
# define Rte_InitValue_RegInBRAMDAT1_Val (0U)
# define Rte_InitValue_SysDiMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysDiRampRate_Val (0.1F)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_SysStFltOutpReqDi_Logl (FALSE)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_BrdgVltg_Val(P2VAR(float32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_IgnCntr_Val(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_MfgDiagcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_MfgEnaSt_Val(P2VAR(MfgEnaSt1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_MotTqCmdMrfScad_Val(P2VAR(float32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_RegInBRAMDAT1_Val(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DiagcMgr_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_ClrDiagcFlgProxy_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsDftHwAg_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsDftHwAgSerlComExprtVal_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsDftVehSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsIvtr1Inactv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsIvtr2Inactv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsLimdTPrfmnc_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_DiagcStsWhlImbRejctnDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_SysDiMotTqCmdSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_SysDiRampRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DiagcMgr_SysStFltOutpReqDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_FltInj_logl_Oper(P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl0_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl1_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl10_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl2_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl3_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl4_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl5_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl6_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl7_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl8_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl9_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl1_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl10_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl2_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl3_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl4_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl6_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl7_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl8_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl9_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_SnpshtDataAry_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DiagcMgr_DiagcMgrFltResp_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u32_512, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DiagcMgr_DiagcMgrFltResp_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

FUNC(void, RTE_CODE) Rte_Enter_DiagcMgr_DiagcMgrExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_DiagcMgr_DiagcMgrExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BrdgVltg_Val Rte_Read_DiagcMgr_BrdgVltg_Val
# define Rte_Read_EcuTFild_Val Rte_Read_DiagcMgr_EcuTFild_Val
# define Rte_Read_HwTq_Val Rte_Read_DiagcMgr_HwTq_Val
# define Rte_Read_IgnCntr_Val Rte_Read_DiagcMgr_IgnCntr_Val
# define Rte_Read_MfgDiagcInhb_Logl Rte_Read_DiagcMgr_MfgDiagcInhb_Logl
# define Rte_Read_MfgEnaSt_Val Rte_Read_DiagcMgr_MfgEnaSt_Val
# define Rte_Read_MotTqCmdMrfScad_Val Rte_Read_DiagcMgr_MotTqCmdMrfScad_Val
# define Rte_Read_RegInBRAMDAT1_Val Rte_Read_DiagcMgr_RegInBRAMDAT1_Val
# define Rte_Read_SysSt_Val Rte_Read_DiagcMgr_SysSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_DiagcMgr_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ClrDiagcFlgProxy_Val Rte_Write_DiagcMgr_ClrDiagcFlgProxy_Val
# define Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl Rte_Write_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl
# define Rte_Write_DiagcStsDftHwAg_Logl Rte_Write_DiagcMgr_DiagcStsDftHwAg_Logl
# define Rte_Write_DiagcStsDftHwAgSerlComExprtVal_Logl Rte_Write_DiagcMgr_DiagcStsDftHwAgSerlComExprtVal_Logl
# define Rte_Write_DiagcStsDftVehSpd_Logl Rte_Write_DiagcMgr_DiagcStsDftVehSpd_Logl
# define Rte_Write_DiagcStsIvtr1Inactv_Logl Rte_Write_DiagcMgr_DiagcStsIvtr1Inactv_Logl
# define Rte_Write_DiagcStsIvtr2Inactv_Logl Rte_Write_DiagcMgr_DiagcStsIvtr2Inactv_Logl
# define Rte_Write_DiagcStsLimdTPrfmnc_Logl Rte_Write_DiagcMgr_DiagcStsLimdTPrfmnc_Logl
# define Rte_Write_DiagcStsWhlImbRejctnDi_Logl Rte_Write_DiagcMgr_DiagcStsWhlImbRejctnDi_Logl
# define Rte_Write_SysDiMotTqCmdSca_Val Rte_Write_DiagcMgr_SysDiMotTqCmdSca_Val
# define Rte_Write_SysDiRampRate_Val Rte_Write_DiagcMgr_SysDiRampRate_Val
# define Rte_Write_SysStFltOutpReqDi_Logl Rte_Write_DiagcMgr_SysStFltOutpReqDi_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_logl_Oper Rte_Call_DiagcMgr_FltInj_logl_Oper
# define Rte_Call_GetDiagcDataAppl0_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl0_Oper
# define Rte_Call_GetDiagcDataAppl1_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl1_Oper
# define Rte_Call_GetDiagcDataAppl10_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl10_Oper
# define Rte_Call_GetDiagcDataAppl2_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl2_Oper
# define Rte_Call_GetDiagcDataAppl3_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl3_Oper
# define Rte_Call_GetDiagcDataAppl4_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl4_Oper
# define Rte_Call_GetDiagcDataAppl5_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl5_Oper
# define Rte_Call_GetDiagcDataAppl6_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl6_Oper
# define Rte_Call_GetDiagcDataAppl7_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl7_Oper
# define Rte_Call_GetDiagcDataAppl8_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl8_Oper
# define Rte_Call_GetDiagcDataAppl9_Oper Rte_Call_DiagcMgr_GetDiagcDataAppl9_Oper
# define Rte_Call_GetNtcDebCntrAppl0_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl0_Oper
# define Rte_Call_GetNtcDebCntrAppl1_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl1_Oper
# define Rte_Call_GetNtcDebCntrAppl10_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl10_Oper
# define Rte_Call_GetNtcDebCntrAppl2_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl2_Oper
# define Rte_Call_GetNtcDebCntrAppl3_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl3_Oper
# define Rte_Call_GetNtcDebCntrAppl4_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl4_Oper
# define Rte_Call_GetNtcDebCntrAppl5_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl5_Oper
# define Rte_Call_GetNtcDebCntrAppl6_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl6_Oper
# define Rte_Call_GetNtcDebCntrAppl7_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl7_Oper
# define Rte_Call_GetNtcDebCntrAppl8_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl8_Oper
# define Rte_Call_GetNtcDebCntrAppl9_Oper Rte_Call_DiagcMgr_GetNtcDebCntrAppl9_Oper
# define Rte_Call_GetNtcInfoAppl0_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl0_Oper
# define Rte_Call_GetNtcInfoAppl1_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl1_Oper
# define Rte_Call_GetNtcInfoAppl10_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl10_Oper
# define Rte_Call_GetNtcInfoAppl2_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl2_Oper
# define Rte_Call_GetNtcInfoAppl3_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl3_Oper
# define Rte_Call_GetNtcInfoAppl4_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl4_Oper
# define Rte_Call_GetNtcInfoAppl5_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl5_Oper
# define Rte_Call_GetNtcInfoAppl6_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl6_Oper
# define Rte_Call_GetNtcInfoAppl7_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl7_Oper
# define Rte_Call_GetNtcInfoAppl8_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl8_Oper
# define Rte_Call_GetNtcInfoAppl9_Oper Rte_Call_DiagcMgr_GetNtcInfoAppl9_Oper
# define Rte_Call_SnpshtDataAry_SetRamBlockStatus Rte_Call_DiagcMgr_SnpshtDataAry_SetRamBlockStatus


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_DiagcMgrExclusiveArea Rte_Enter_DiagcMgr_DiagcMgrExclusiveArea
# define Rte_Exit_DiagcMgrExclusiveArea Rte_Exit_DiagcMgr_DiagcMgrExclusiveArea


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_DiagcMgrFltResp_Ary1D Rte_Prm_DiagcMgr_DiagcMgrFltResp_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_DtcEnaSts() (Rte_Inst_DiagcMgr->Pim_DtcEnaSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlg() (Rte_Inst_DiagcMgr->Pim_ClrDiagcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevClrDtcFlg() (Rte_Inst_DiagcMgr->Pim_PrevClrDtcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DiagcMgrNtcFltAry() (*Rte_Inst_DiagcMgr->Pim_DiagcMgrNtcFltAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DiagcMgrNtcFltAry() (Rte_Inst_DiagcMgr->Pim_DiagcMgrNtcFltAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DtcIdxPrevSts() (*Rte_Inst_DiagcMgr->Pim_DtcIdxPrevSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DtcIdxPrevSts() (Rte_Inst_DiagcMgr->Pim_DtcIdxPrevSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_DtcEnaSts(void)
 *   uint8 *Rte_Pim_ClrDiagcFlg(void)
 *   uint8 *Rte_Pim_PrevClrDtcFlg(void)
 *   NtcFltInfoRec2 *Rte_Pim_DiagcMgrNtcFltAry(void)
 *   uint8 *Rte_Pim_DtcIdxPrevSts(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 *Rte_Prm_DiagcMgrFltResp_Ary1D(void)
 *
 *********************************************************************************************************************/


# define DiagcMgr_START_SEC_CODE
# include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrAllDiagc_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrAllDiagc>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ClrDiagcFlgProxy_Val(uint8 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrAllDiagc_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ClrAllDiagc_Oper ClrAllDiagc_Oper
FUNC(void, DiagcMgr_CODE) ClrAllDiagc_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrSnpshtData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrSnpshtData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnpshtDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrSnpshtData_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ClrSnpshtData_Oper ClrSnpshtData_Oper
FUNC(void, DiagcMgr_CODE) ClrSnpshtData_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrIninCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DiagcMgrIninCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DiagcMgrIninCore_Oper DiagcMgrIninCore_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, DiagcMgr_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(Ary1D_NtcInfoRec4_DiagcMgr, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsDftHwAg_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsDftHwAgSerlComExprtVal_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsDftVehSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsIvtr1Inactv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsIvtr2Inactv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsLimdTPrfmnc_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsWhlImbRejctnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysDiMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysDiRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStFltOutpReqDi_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_logl_Oper(boolean *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl0_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl1_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl10_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl2_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl3_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl4_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl5_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl6_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl7_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl8_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl9_Oper(DiagcDataRec1 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DiagcMgrPer1 DiagcMgrPer1
FUNC(void, DiagcMgr_CODE) DiagcMgrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DiagcMgrPer2 DiagcMgrPer2
FUNC(void, DiagcMgr_CODE) DiagcMgrPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcActvCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcActvCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcActvCore_Oper GetNtcActvCore_Oper
FUNC(void, DiagcMgr_CODE) GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcQlfrStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcQlfrStsCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcQlfrStsCore_Oper GetNtcQlfrStsCore_Oper
FUNC(void, DiagcMgr_CODE) GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcStsCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcStsCore_Oper GetNtcStsCore_Oper
FUNC(void, DiagcMgr_CODE) GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadNtcFltAry_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadNtcFltAry>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadNtcFltAry_Oper(ReadFltInfoRec1 *DiagcMgrReadFltInfo_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ReadNtcFltAry_Oper ReadNtcFltAry_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) ReadNtcFltAry_Oper(P2VAR(ReadFltInfoRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, DiagcMgr_CODE) ReadNtcFltAry_Oper(P2VAR(Ary1D_ReadFltInfoRec1_20, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadNtcInfoAndDebCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadNtcInfoAndDebCntr>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl1_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl10_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl2_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl3_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl4_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl6_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl7_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl8_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl9_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *DebCntr_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ReadNtcInfoAndDebCntr_Oper ReadNtcInfoAndDebCntr_Oper
FUNC(void, DiagcMgr_CODE) ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadSnpshtData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadSnpshtData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadSnpshtData_Oper(SnpshtDataRec1 *ReadSnpshtDataAry_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ReadSnpshtData_Oper ReadSnpshtData_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) ReadSnpshtData_Oper(P2VAR(SnpshtDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, DiagcMgr_CODE) ReadSnpshtData_Oper(P2VAR(Ary1D_SnpshtDataRec1_8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetNtcStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetNtcStsCore>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IgnCntr_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MfgDiagcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RegInBRAMDAT1_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnpshtDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_DiagcMgrExclusiveArea(void)
 *   void Rte_Exit_DiagcMgrExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetNtcStsCore_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetNtcStsCore_Oper SetNtcStsCore_Oper
FUNC(Std_ReturnType, DiagcMgr_CODE) SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoDebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DiagcMgr_STOP_SEC_CODE
# include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcStsCore_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481041143
#    error "The magic number of the generated file <C:/Component/ES101A_DiagcMgr_Impl/tools/contract/generate/RteGen/DiagcMgr/Rte_DiagcMgr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481041143
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_DIAGCMGR_H */
