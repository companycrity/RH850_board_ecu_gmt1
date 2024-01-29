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
 *          File:  Rte_AssiSumLim.h
 *     SW-C Type:  AssiSumLim
 *  Generated at:  Wed Jul 15 11:45:50 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AssiSumLim> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSISUMLIM_H
# define _RTE_ASSISUMLIM_H

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

# include "Rte_AssiSumLim_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_AssiSumLim
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_AssiSumLim, RTE_CONST, RTE_CONST) Rte_Inst_AssiSumLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_AssiSumLim, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmd_Val (0.0F)
# define Rte_InitValue_DampgCmd_Val (0.0F)
# define Rte_InitValue_EotActvCmd_Val (0.0F)
# define Rte_InitValue_EotAssiSca_Val (1.0F)
# define Rte_InitValue_EotDampgCmd_Val (0.0F)
# define Rte_InitValue_EotMotTqLim_Val (8.8F)
# define Rte_InitValue_HwTqLoaMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotTqCmd_Val (0.0F)
# define Rte_InitValue_MotTqCmdLimDi_Logl (FALSE)
# define Rte_InitValue_MotTqCmdLimdPreStall_Val (0.0F)
# define Rte_InitValue_MotTqCmdLimrMin_Val (8.8F)
# define Rte_InitValue_MotTqCmdOvrl_Val (0.0F)
# define Rte_InitValue_MotTqCmdPreLim_Val (0.0F)
# define Rte_InitValue_PinionCentrLrnCmd_Val (0.0F)
# define Rte_InitValue_PinionCentrLrnEna_Logl (FALSE)
# define Rte_InitValue_PullCmpCmd_Val (0.0F)
# define Rte_InitValue_PwrLimrRednFac_Val (0.0F)
# define Rte_InitValue_RtnCmd_Val (0.0F)
# define Rte_InitValue_StallMotTqLim_Val (8.8F)
# define Rte_InitValue_SysMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysProtnRednFac_Val (0.0F)
# define Rte_InitValue_ThermMotTqLim_Val (8.8F)
# define Rte_InitValue_ThermRednFac_Val (0.0F)
# define Rte_InitValue_TqLoaCmd_Val (0.0F)
# define Rte_InitValue_TqSteerMtgtnCmd_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdMotTqLim_Val (8.8F)
# define Rte_InitValue_WhlImbRejctnCmd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_AssiCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_DampgCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotActvCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotAssiSca_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotDampgCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_HwTqLoaMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_MotTqCmdLimDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_MotTqCmdOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PinionCentrLrnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PinionCentrLrnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PullCmpCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PwrLimrRednFac_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_RtnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_StallMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_SysMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_ThermMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_ThermRednFac_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_TqLoaCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_TqSteerMtgtnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_VehSpdMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_WhlImbRejctnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmdLimdPreStall_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmdLimrMin_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmdPreLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_SysProtnRednFac_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiSumLim_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, P2VAR(SigQlfr1, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) NtcQlfr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiSumLim_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimPullCmpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmd(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmdEna(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmd(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmdEna(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmd_Val Rte_Read_AssiSumLim_AssiCmd_Val
# define Rte_Read_DampgCmd_Val Rte_Read_AssiSumLim_DampgCmd_Val
# define Rte_Read_EotActvCmd_Val Rte_Read_AssiSumLim_EotActvCmd_Val
# define Rte_Read_EotAssiSca_Val Rte_Read_AssiSumLim_EotAssiSca_Val
# define Rte_Read_EotDampgCmd_Val Rte_Read_AssiSumLim_EotDampgCmd_Val
# define Rte_Read_EotMotTqLim_Val Rte_Read_AssiSumLim_EotMotTqLim_Val
# define Rte_Read_HwTqLoaMtgtnEna_Logl Rte_Read_AssiSumLim_HwTqLoaMtgtnEna_Logl
# define Rte_Read_MotTqCmdLimDi_Logl Rte_Read_AssiSumLim_MotTqCmdLimDi_Logl
# define Rte_Read_MotTqCmdOvrl_Val Rte_Read_AssiSumLim_MotTqCmdOvrl_Val
# define Rte_Read_PinionCentrLrnCmd_Val Rte_Read_AssiSumLim_PinionCentrLrnCmd_Val
# define Rte_Read_PinionCentrLrnEna_Logl Rte_Read_AssiSumLim_PinionCentrLrnEna_Logl
# define Rte_Read_PullCmpCmd_Val Rte_Read_AssiSumLim_PullCmpCmd_Val
# define Rte_Read_PwrLimrRednFac_Val Rte_Read_AssiSumLim_PwrLimrRednFac_Val
# define Rte_Read_RtnCmd_Val Rte_Read_AssiSumLim_RtnCmd_Val
# define Rte_Read_StallMotTqLim_Val Rte_Read_AssiSumLim_StallMotTqLim_Val
# define Rte_Read_SysMotTqCmdSca_Val Rte_Read_AssiSumLim_SysMotTqCmdSca_Val
# define Rte_Read_ThermMotTqLim_Val Rte_Read_AssiSumLim_ThermMotTqLim_Val
# define Rte_Read_ThermRednFac_Val Rte_Read_AssiSumLim_ThermRednFac_Val
# define Rte_Read_TqLoaCmd_Val Rte_Read_AssiSumLim_TqLoaCmd_Val
# define Rte_Read_TqSteerMtgtnCmd_Val Rte_Read_AssiSumLim_TqSteerMtgtnCmd_Val
# define Rte_Read_VehSpd_Val Rte_Read_AssiSumLim_VehSpd_Val
# define Rte_Read_VehSpdMotTqLim_Val Rte_Read_AssiSumLim_VehSpdMotTqLim_Val
# define Rte_Read_WhlImbRejctnCmd_Val Rte_Read_AssiSumLim_WhlImbRejctnCmd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotTqCmd_Val Rte_Write_AssiSumLim_MotTqCmd_Val
# define Rte_Write_MotTqCmdLimdPreStall_Val Rte_Write_AssiSumLim_MotTqCmdLimdPreStall_Val
# define Rte_Write_MotTqCmdLimrMin_Val Rte_Write_AssiSumLim_MotTqCmdLimrMin_Val
# define Rte_Write_MotTqCmdPreLim_Val Rte_Write_AssiSumLim_MotTqCmdPreLim_Val
# define Rte_Write_SysProtnRednFac_Val Rte_Write_AssiSumLim_SysProtnRednFac_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_AssiSumLim_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_AssiSumLim_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd() \
  Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmd()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna() \
  Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmdEna()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(data) \
  Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmd(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(data) \
  Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmdEna(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_AssiSumLimPullCmpLim_Val Rte_Prm_AssiSumLim_AssiSumLimPullCmpLim_Val

# define Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4FailStep_Val

# define Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4PassStep_Val



/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiSumLimPullCmpLim_Val(void)
 *   uint16 Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val(void)
 *   uint16 Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val(void)
 *
 *********************************************************************************************************************/


# define AssiSumLim_START_SEC_CODE
# include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiSumLimInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_AssiSumLimInit1 AssiSumLimInit1
FUNC(void, AssiSumLim_CODE) AssiSumLimInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiSumLimPer1
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
 *   Std_ReturnType Rte_Read_AssiCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotActvCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotAssiSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotDampgCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdLimDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionCentrLrnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionCentrLrnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PullCmpCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PwrLimrRednFac_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermRednFac_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TqLoaCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TqSteerMtgtnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdLimdPreStall_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdLimrMin_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdPreLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysProtnRednFac_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd(void)
 *   boolean Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_AssiSumLimPer1 AssiSumLimPer1
FUNC(void, AssiSumLim_CODE) AssiSumLimPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetManTqCmd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetManTqCmd>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(float32 data)
 *   void Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(boolean data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetManTqCmd1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetManTqCmd_Oper SetManTqCmd_Oper
FUNC(Std_ReturnType, AssiSumLim_CODE) SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define AssiSumLim_STOP_SEC_CODE
# include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts1_E_NOT_OK (1U)

# define RTE_E_SetManTqCmd1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1436980029
#    error "The magic number of the generated file <C:/Component/SF004B_AssiSumLim_Impl/tools/contract/Rte_AssiSumLim.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1436980029
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_ASSISUMLIM_H */
