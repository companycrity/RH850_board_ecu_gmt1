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
 *          File:  Rte_CDD_MotAg1Meas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotAg1Meas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAG1MEAS_H
# define _RTE_CDD_MOTAG1MEAS_H

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

# include "Rte_CDD_MotAg1Meas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg1Meas_MotAg1MeclQlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1ErrReg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1ParFltCnt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg1VltgFltCnt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_MotAg1ErrReg_Val (0U)
#  define Rte_InitValue_MotAg1MeclQlfr_Val (0U)
#  define Rte_InitValue_MotAg1ParFltCnt_Val (0U)
#  define Rte_InitValue_MotAg1VltgFltCnt_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_MotAg1ErrReg_Val Rte_Read_CDD_MotAg1Meas_MotAg1ErrReg_Val
#  define Rte_Read_CDD_MotAg1Meas_MotAg1ErrReg_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg1ErrReg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg1ParFltCnt_Val Rte_Read_CDD_MotAg1Meas_MotAg1ParFltCnt_Val
#  define Rte_Read_CDD_MotAg1Meas_MotAg1ParFltCnt_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg1ParFltCnt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg1VltgFltCnt_Val Rte_Read_CDD_MotAg1Meas_MotAg1VltgFltCnt_Val
#  define Rte_Read_CDD_MotAg1Meas_MotAg1VltgFltCnt_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg1VltgFltCnt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotAg1MeclQlfr_Val Rte_Write_CDD_MotAg1Meas_MotAg1MeclQlfr_Val
#  define Rte_Write_CDD_MotAg1Meas_MotAg1MeclQlfr_Val(data) (Rte_CDD_MotAg1Meas_MotAg1MeclQlfr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg1CoeffTbl_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)111, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg1CoeffTbl_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)111, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_MotAg1CoeffTblDft() (&(((P2CONST(Rte_Calprm_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP])->MotAg1CoeffTblDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_MotAg1CoeffTblDft() (&((P2CONST(Rte_Calprm_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP])->MotAg1CoeffTblDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawAgReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawErrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawTurnCntrReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ErrParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ErrParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ParFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ParFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1RawMeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1VltgFltCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1VltgFltNtcStInfoCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1ErrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1MeclRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_26, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1CoeffTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_sm5p12_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg1Meas_MotAg1CorrnTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dMotAg1MeasMotAg1RawAgReg() \
  (&Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawAgReg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotAg1MeasMotAg1RawErrReg() \
  (&Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawErrReg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotAg1MeasMotAg1RawTurnCntrReg() \
  (&Rte_CDD_MotAg1Meas_dMotAg1MeasMotAg1RawTurnCntrReg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1ErrParFltCntPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1ErrParFltCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1ErrParFltNtcStInfoCntPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1ErrParFltNtcStInfoCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1ParFltCntPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1ParFltCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1ParFltNtcStInfoCntPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1ParFltNtcStInfoCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1RawMeclPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1RawMeclPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1VltgFltCntPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1VltgFltCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1VltgFltNtcStInfoCntPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1VltgFltNtcStInfoCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1ErrPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1ErrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg1MeclRollgCntrPrev() \
  (&Rte_CDD_MotAg1Meas_MotAg1MeclRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg1CoeffTbl() (&((*RtePim_MotAg1CoeffTbl())[0]))
#  else
#   define Rte_Pim_MotAg1CoeffTbl() RtePim_MotAg1CoeffTbl()
#  endif
#  define RtePim_MotAg1CoeffTbl() \
  (&Rte_CDD_MotAg1Meas_MotAg1CoeffTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg1CorrnTbl() (&((*RtePim_MotAg1CorrnTbl())[0]))
#  else
#   define Rte_Pim_MotAg1CorrnTbl() RtePim_MotAg1CorrnTbl()
#  endif
#  define RtePim_MotAg1CorrnTbl() \
  (&Rte_CDD_MotAg1Meas_MotAg1CorrnTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_MotAg1Meas_START_SEC_CODE
# include "CDD_MotAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_MotAg1MeasInit1 MotAg1MeasInit1
#  define RTE_RUNNABLE_MotAg1MeasMotAg1CoeffTblRead_Oper MotAg1MeasMotAg1CoeffTblRead_Oper
#  define RTE_RUNNABLE_MotAg1MeasMotAg1CoeffTblWr_Oper MotAg1MeasMotAg1CoeffTblWr_Oper
#  define RTE_RUNNABLE_MotAg1MeasPer2 MotAg1MeasPer2
# endif

FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(float32, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(Ary1D_f32_26, AUTOMATIC, RTE_CDD_MOTAG1MEAS_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, CDD_MotAg1Meas_CODE) MotAg1MeasPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_MotAg1Meas_STOP_SEC_CODE
# include "CDD_MotAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTAG1MEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
