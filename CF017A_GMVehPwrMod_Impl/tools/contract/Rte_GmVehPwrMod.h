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
 *          File:  Rte_GmVehPwrMod.h
 *     SW-C Type:  GmVehPwrMod
 *  Generated at:  Tue Dec 13 09:52:56 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmVehPwrMod> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMVEHPWRMOD_H
# define _RTE_GMVEHPWRMOD_H

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

# include "Rte_GmVehPwrMod_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmVehPwrMod
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSysStReqEnaVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqRefTiActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmVehPwrModHwTqKeepAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmVehPwrModVehSpdAssiKeepMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmVehPwrModVehSpdAssiOnMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmVehPwrMod, RTE_CONST, RTE_CONST) Rte_Inst_GmVehPwrMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmVehPwrMod, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BusOffHiSpd_Logl (FALSE)
# define Rte_InitValue_EngRunActv_Logl (FALSE)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_PrpnSysActvMsgInvld_Logl (FALSE)
# define Rte_InitValue_PwrSplyEnaReq_Logl (FALSE)
# define Rte_InitValue_SysOperMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysOperRampRate_Val (1.0F)
# define Rte_InitValue_SysPwrModMsgInvld_Logl (FALSE)
# define Rte_InitValue_SysPwrModRun_Logl (FALSE)
# define Rte_InitValue_SysStEnaReqOvrd_Logl (FALSE)
# define Rte_InitValue_SysStFltOutpReqDi_Logl (FALSE)
# define Rte_InitValue_SysStReqEna_Logl (FALSE)
# define Rte_InitValue_VehPwrModDftVehSpdEna_Logl (FALSE)
# define Rte_InitValue_VehSpdArbd_Val (0.0F)
# define Rte_InitValue_VehSpdSnsrVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_BusOffHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_EngRunActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_PrpnSysActvMsgInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_SysPwrModMsgInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_SysPwrModRun_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_SysStEnaReqOvrd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_SysStFltOutpReqDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_VehSpdArbd_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehPwrMod_VehSpdSnsrVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehPwrMod_PwrSplyEnaReq_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehPwrMod_SysOperMotTqCmdSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehPwrMod_SysOperRampRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehPwrMod_SysStReqEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmVehPwrMod_GetGpioMcuEna_Oper(P2VAR(boolean, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmVehPwrMod_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmVehPwrMod_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_GMVEHPWRMOD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmVehPwrMod_GmVehPwrModHwTqMinKeepAssi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmVehPwrMod_GmVehPwrModOperRampRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmVehPwrMod_GmVehPwrModVehSpdAssiOnMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmVehPwrMod_GmVehPwrModVehSpdMinKeepAssi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmVehPwrMod_GmVehPwrModHwTqMinKeepTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BusOffHiSpd_Logl Rte_Read_GmVehPwrMod_BusOffHiSpd_Logl
# define Rte_Read_EngRunActv_Logl Rte_Read_GmVehPwrMod_EngRunActv_Logl
# define Rte_Read_HwTq_Val Rte_Read_GmVehPwrMod_HwTq_Val
# define Rte_Read_PrpnSysActvMsgInvld_Logl Rte_Read_GmVehPwrMod_PrpnSysActvMsgInvld_Logl
# define Rte_Read_SysPwrModMsgInvld_Logl Rte_Read_GmVehPwrMod_SysPwrModMsgInvld_Logl
# define Rte_Read_SysPwrModRun_Logl Rte_Read_GmVehPwrMod_SysPwrModRun_Logl
# define Rte_Read_SysStEnaReqOvrd_Logl Rte_Read_GmVehPwrMod_SysStEnaReqOvrd_Logl
# define Rte_Read_SysStFltOutpReqDi_Logl Rte_Read_GmVehPwrMod_SysStFltOutpReqDi_Logl
# define Rte_Read_VehSpdArbd_Val Rte_Read_GmVehPwrMod_VehSpdArbd_Val
# define Rte_Read_VehSpdSnsrVld_Logl Rte_Read_GmVehPwrMod_VehSpdSnsrVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PwrSplyEnaReq_Logl Rte_Write_GmVehPwrMod_PwrSplyEnaReq_Logl
# define Rte_Write_SysOperMotTqCmdSca_Val Rte_Write_GmVehPwrMod_SysOperMotTqCmdSca_Val
# define Rte_Write_SysOperRampRate_Val Rte_Write_GmVehPwrMod_SysOperRampRate_Val
# define Rte_Write_SysStReqEna_Logl Rte_Write_GmVehPwrMod_SysStReqEna_Logl
# define Rte_Write_VehPwrModDftVehSpdEna_Logl Rte_Write_GmVehPwrMod_VehPwrModDftVehSpdEna_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetGpioMcuEna_Oper Rte_Call_GmVehPwrMod_GetGpioMcuEna_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmVehPwrMod_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmVehPwrMod_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val Rte_Prm_GmVehPwrMod_GmVehPwrModHwTqMinKeepAssi_Val

# define Rte_Prm_GmVehPwrModOperRampRate_Val Rte_Prm_GmVehPwrMod_GmVehPwrModOperRampRate_Val

# define Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val Rte_Prm_GmVehPwrMod_GmVehPwrModVehSpdAssiOnMin_Val

# define Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val Rte_Prm_GmVehPwrMod_GmVehPwrModVehSpdMinKeepAssi_Val

# define Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val Rte_Prm_GmVehPwrMod_GmVehPwrModHwTqMinKeepTmr_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_TqRefTi() (Rte_Inst_GmVehPwrMod->Pim_TqRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSysStReqEnaVal() (Rte_Inst_GmVehPwrMod->Pim_PrevSysStReqEnaVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqRefTiActv() (Rte_Inst_GmVehPwrMod->Pim_TqRefTiActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmVehPwrModHwTqKeepAssi() (Rte_Inst_GmVehPwrMod->Pim_dGmVehPwrModHwTqKeepAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin() (Rte_Inst_GmVehPwrMod->Pim_dGmVehPwrModVehSpdAssiKeepMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmVehPwrModVehSpdAssiOnMin() (Rte_Inst_GmVehPwrMod->Pim_dGmVehPwrModVehSpdAssiOnMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_TqRefTi(void)
 *   boolean *Rte_Pim_PrevSysStReqEnaVal(void)
 *   boolean *Rte_Pim_TqRefTiActv(void)
 *   boolean *Rte_Pim_dGmVehPwrModHwTqKeepAssi(void)
 *   boolean *Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin(void)
 *   boolean *Rte_Pim_dGmVehPwrModVehSpdAssiOnMin(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val(void)
 *   float32 Rte_Prm_GmVehPwrModOperRampRate_Val(void)
 *   float32 Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val(void)
 *   float32 Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val(void)
 *   uint32 Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val(void)
 *
 *********************************************************************************************************************/


# define GmVehPwrMod_START_SEC_CODE
# include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehPwrModInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmVehPwrModInit1 GmVehPwrModInit1
FUNC(void, GmVehPwrMod_CODE) GmVehPwrModInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehPwrModPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BusOffHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EngRunActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PrpnSysActvMsgInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysPwrModMsgInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysPwrModRun_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStEnaReqOvrd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdArbd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSnsrVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrSplyEnaReq_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysOperMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysOperRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehPwrModDftVehSpdEna_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmVehPwrModPer1 GmVehPwrModPer1
FUNC(void, GmVehPwrMod_CODE) GmVehPwrModPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmVehPwrMod_STOP_SEC_CODE
# include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481641752
#    error "The magic number of the generated file <C:/component/CF017A_GMVehPwrMod_Impl/tools/contract/Rte_GmVehPwrMod.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481641752
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMVEHPWRMOD_H */
