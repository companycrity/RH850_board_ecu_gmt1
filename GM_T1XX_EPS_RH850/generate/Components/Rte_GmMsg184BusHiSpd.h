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
 *          File:  Rte_GmMsg184BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg184BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG184BUSHISPD_H
# define _RTE_GMMSG184BUSHISPD_H

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

# include "Rte_GmMsg184BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_HowDetn_HowDetnFlg_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_LkaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_LkaTqCmdCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HandsOffSteerWhlDetnMod_Val (0U)
#  define Rte_InitValue_HandsOffSteerWhlDetnSt_Val (0U)
#  define Rte_InitValue_HandsOffSteerWhlDetnStVld_Val (0U)
#  define Rte_InitValue_HowDetnFlg_Logl (TRUE)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqIdptSig_Val (4U)
#  define Rte_InitValue_LkaDrvrAppldTq_Val (0U)
#  define Rte_InitValue_LkaDrvrAppldTqVld_Val (0U)
#  define Rte_InitValue_LkaElecPwrSteerTotTqDlvd_Val (0U)
#  define Rte_InitValue_LkaSt_Val (0U)
#  define Rte_InitValue_LkaTqDlvd_Val (0.0F)
#  define Rte_InitValue_LkaTqOvrlDeltaTqDlvd_Val (0U)
#  define Rte_InitValue_LkaTqOvrlDlvdRollgCntr_Val (0U)
#  define Rte_InitValue_LkaTqOvrlStsChks_Val (0U)
#  define Rte_InitValue_LkaTqOvrlTqDlvdSts_Val (0U)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HowDetnFlg_Logl Rte_Read_GmMsg184BusHiSpd_HowDetnFlg_Logl
#  define Rte_Read_GmMsg184BusHiSpd_HowDetnFlg_Logl(data) (*(data) = Rte_HowDetn_HowDetnFlg_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_GmMsg184BusHiSpd_HwTq_Val
#  define Rte_Read_GmMsg184BusHiSpd_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqIdptSig_Val Rte_Read_GmMsg184BusHiSpd_HwTqIdptSig_Val
#  define Rte_Read_GmMsg184BusHiSpd_HwTqIdptSig_Val(data) (*(data) = Rte_HwTqCorrln_HwTqIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaSt_Val Rte_Read_GmMsg184BusHiSpd_LkaSt_Val
#  define Rte_Read_GmMsg184BusHiSpd_LkaSt_Val(data) (*(data) = Rte_GmOvrlStMgr_LkaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaTqDlvd_Val Rte_Read_GmMsg184BusHiSpd_LkaTqDlvd_Val
#  define Rte_Read_GmMsg184BusHiSpd_LkaTqDlvd_Val(data) (*(data) = Rte_GmTqArbn_LkaTqCmdCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_GmMsg184BusHiSpd_VehSpdVld_Logl
#  define Rte_Read_GmMsg184BusHiSpd_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HandsOffSteerWhlDetnMod_Val Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val
#  define Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val(data) (Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HandsOffSteerWhlDetnSt_Val Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val
#  define Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val(data) (Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HandsOffSteerWhlDetnStVld_Val Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val
#  define Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val(data) (Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaDrvrAppldTq_Val Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val
#  define Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val(data) (Rte_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaDrvrAppldTqVld_Val Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val
#  define Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val(data) (Rte_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaElecPwrSteerTotTqDlvd_Val Rte_Write_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val
#  define Rte_Write_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val(data) (Rte_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaTqOvrlDeltaTqDlvd_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val
#  define Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val(data) (Rte_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaTqOvrlDlvdRollgCntr_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val
#  define Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val(data) (Rte_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaTqOvrlStsChks_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val
#  define Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val(data) (Rte_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaTqOvrlTqDlvdSts_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val
#  define Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val(data) (Rte_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSigFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg184BusHiSpdTqPolarity_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg184BusHiSpd_GmMsg184BusHiSpdRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg184BusHiSpdRollgCntr() \
  (&Rte_GmMsg184BusHiSpd_GmMsg184BusHiSpdRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg184BusHiSpd_START_SEC_CODE
# include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg184BusHiSpdPer1 GmMsg184BusHiSpdPer1
#  define RTE_RUNNABLE_MsgTxCallBack_Oper MsgTxCallBack_Oper
# endif

FUNC(void, GmMsg184BusHiSpd_CODE) GmMsg184BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmMsg184BusHiSpd_CODE) MsgTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg184BusHiSpd_STOP_SEC_CODE
# include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG184BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
