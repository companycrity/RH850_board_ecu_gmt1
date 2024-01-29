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
 *          File:  Rte_GmVehPwrMod.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmVehPwrMod>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMVEHPWRMOD_H
# define _RTE_GMVEHPWRMOD_H

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

# include "Rte_GmVehPwrMod_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_SerlComOutpProxy_BusOffHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_SysStReqEnaOvrdCombd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehPwrMod_PwrSplyEnaReq_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehPwrMod_SysOperMotTqCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehPwrMod_SysOperRampRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehPwrMod_SysStReqEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_SysStFltOutpReqDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdArbd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdSnsrVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BusOffHiSpd_Logl (FALSE)
#  define Rte_InitValue_EngRunActv_Logl (FALSE)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_PrpnSysActvMsgInvld_Logl (FALSE)
#  define Rte_InitValue_PwrSplyEnaReq_Logl (FALSE)
#  define Rte_InitValue_SysOperMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_SysOperRampRate_Val (1.0F)
#  define Rte_InitValue_SysPwrModMsgInvld_Logl (FALSE)
#  define Rte_InitValue_SysPwrModRun_Logl (FALSE)
#  define Rte_InitValue_SysStEnaReqOvrd_Logl (FALSE)
#  define Rte_InitValue_SysStFltOutpReqDi_Logl (FALSE)
#  define Rte_InitValue_SysStReqEna_Logl (FALSE)
#  define Rte_InitValue_VehPwrModDftVehSpdEna_Logl (FALSE)
#  define Rte_InitValue_VehSpdArbd_Val (0.0F)
#  define Rte_InitValue_VehSpdSnsrVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_BusOffHiSpd_Logl Rte_Read_GmVehPwrMod_BusOffHiSpd_Logl
#  define Rte_Read_GmVehPwrMod_BusOffHiSpd_Logl(data) (*(data) = Rte_SerlComOutpProxy_BusOffHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EngRunActv_Logl Rte_Read_GmVehPwrMod_EngRunActv_Logl
#  define Rte_Read_GmVehPwrMod_EngRunActv_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_GmVehPwrMod_HwTq_Val
#  define Rte_Read_GmVehPwrMod_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PrpnSysActvMsgInvld_Logl Rte_Read_GmVehPwrMod_PrpnSysActvMsgInvld_Logl
#  define Rte_Read_GmVehPwrMod_PrpnSysActvMsgInvld_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysPwrModMsgInvld_Logl Rte_Read_GmVehPwrMod_SysPwrModMsgInvld_Logl
#  define Rte_Read_GmVehPwrMod_SysPwrModMsgInvld_Logl(data) (*(data) = Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysPwrModRun_Logl Rte_Read_GmVehPwrMod_SysPwrModRun_Logl
#  define Rte_Read_GmVehPwrMod_SysPwrModRun_Logl(data) (*(data) = Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysStEnaReqOvrd_Logl Rte_Read_GmVehPwrMod_SysStEnaReqOvrd_Logl
#  define Rte_Read_GmVehPwrMod_SysStEnaReqOvrd_Logl(data) (*(data) = Rte_CustDiagc_SysStReqEnaOvrdCombd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysStFltOutpReqDi_Logl Rte_Read_GmVehPwrMod_SysStFltOutpReqDi_Logl
#  define Rte_Read_GmVehPwrMod_SysStFltOutpReqDi_Logl(data) (*(data) = Rte_DiagcMgr_SysStFltOutpReqDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdArbd_Val Rte_Read_GmVehPwrMod_VehSpdArbd_Val
#  define Rte_Read_GmVehPwrMod_VehSpdArbd_Val(data) (*(data) = Rte_GmVehSpdArbn_VehSpdArbd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdSnsrVld_Logl Rte_Read_GmVehPwrMod_VehSpdSnsrVld_Logl
#  define Rte_Read_GmVehPwrMod_VehSpdSnsrVld_Logl(data) (*(data) = Rte_GmVehSpdArbn_VehSpdSnsrVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PwrSplyEnaReq_Logl Rte_Write_GmVehPwrMod_PwrSplyEnaReq_Logl
#  define Rte_Write_GmVehPwrMod_PwrSplyEnaReq_Logl(data) (Rte_GmVehPwrMod_PwrSplyEnaReq_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysOperMotTqCmdSca_Val Rte_Write_GmVehPwrMod_SysOperMotTqCmdSca_Val
#  define Rte_Write_GmVehPwrMod_SysOperMotTqCmdSca_Val(data) (Rte_GmVehPwrMod_SysOperMotTqCmdSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysOperRampRate_Val Rte_Write_GmVehPwrMod_SysOperRampRate_Val
#  define Rte_Write_GmVehPwrMod_SysOperRampRate_Val(data) (Rte_GmVehPwrMod_SysOperRampRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStReqEna_Logl Rte_Write_GmVehPwrMod_SysStReqEna_Logl
#  define Rte_Write_GmVehPwrMod_SysStReqEna_Logl(data) (Rte_GmVehPwrMod_SysStReqEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehPwrModDftVehSpdEna_Logl Rte_Write_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl
#  define Rte_Write_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl(data) (Rte_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_GetGpioMcuEna_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetGpioMcuEna_Oper IoHwAb_GetGpioMcuEna_Oper
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


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmVehPwrModHwTqMinKeepAssi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmVehPwrModOperRampRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmVehPwrModOperRampRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmVehPwrModVehSpdAssiOnMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmVehPwrModVehSpdMinKeepAssi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmVehPwrModHwTqMinKeepTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_TqRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_PrevSysStReqEnaVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_TqRefTiActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_dGmVehPwrModHwTqKeepAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_dGmVehPwrModVehSpdAssiKeepMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmVehPwrMod_dGmVehPwrModVehSpdAssiOnMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_TqRefTi() \
  (&Rte_GmVehPwrMod_TqRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevSysStReqEnaVal() \
  (&Rte_GmVehPwrMod_PrevSysStReqEnaVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqRefTiActv() \
  (&Rte_GmVehPwrMod_TqRefTiActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmVehPwrModHwTqKeepAssi() \
  (&Rte_GmVehPwrMod_dGmVehPwrModHwTqKeepAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin() \
  (&Rte_GmVehPwrMod_dGmVehPwrModVehSpdAssiKeepMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmVehPwrModVehSpdAssiOnMin() \
  (&Rte_GmVehPwrMod_dGmVehPwrModVehSpdAssiOnMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmVehPwrMod_START_SEC_CODE
# include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmVehPwrModInit1 GmVehPwrModInit1
#  define RTE_RUNNABLE_GmVehPwrModPer1 GmVehPwrModPer1
# endif

FUNC(void, GmVehPwrMod_CODE) GmVehPwrModInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmVehPwrMod_CODE) GmVehPwrModPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmVehPwrMod_STOP_SEC_CODE
# include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMVEHPWRMOD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
