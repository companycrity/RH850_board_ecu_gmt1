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
 *          File:  Rte_GmOvrlStMgr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmOvrlStMgr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMOVRLSTMGR_H
# define _RTE_GMOVRLSTMGR_H

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

# include "Rte_GmOvrlStMgr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_AbsProtd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_FbReqActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiagc_MfgOvrlDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg17DBusHiSpd_InvldMsg17D_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg17DBusHiSpd_MissMsg17D_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_InvldMsg180BusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusChassisExp_MissMsg180BusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_InvldMsg180BusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg180BusHiSpd_MissMsg180BusHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_MissMsg1E9_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F5BusHiSpd_InvldMsg1F5_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg214BusHiSpd_MissMsg214_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_InvldMsg337_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg337BusChassisExp_MissMsg337_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F5BusHiSpd_ShiftLvrInRvs_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_ApaDrvrIntvDetd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_ApaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_EscSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgServoCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgServoEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwOscnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwOscnFrq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwOscnMotAmp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwTqOscSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmOvrlStMgr_LkaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_ApaEnaArbn_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_EscEnaArbn_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmTqArbn_EscLimdActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgTrajGenn_HwAgTrakgServoCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmOvrlStMgr_HwAgTrajEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmFctDiArbn_LkaEnaArbn_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmTqArbn_LkaTqCmdCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LoaSt1, RTE_VAR_INIT) Rte_LoaMgr_LoaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMaxSecur_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMaxSecurVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMinSecur_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmVehSpdArbn_VehSpdMinSecurVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AbsActvProtd_Logl (FALSE)
#  define Rte_InitValue_ApaDrvrIntvDetd_Logl (FALSE)
#  define Rte_InitValue_ApaEna_Logl (FALSE)
#  define Rte_InitValue_ApaSt_Val (0U)
#  define Rte_InitValue_EscEna_Logl (FALSE)
#  define Rte_InitValue_EscLimdActv_Logl (FALSE)
#  define Rte_InitValue_EscSt_Val (0U)
#  define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
#  define Rte_InitValue_HwAgEotCw_Val (360.0F)
#  define Rte_InitValue_HwAgServoCmd_Val (0.0F)
#  define Rte_InitValue_HwAgServoEna_Logl (FALSE)
#  define Rte_InitValue_HwAgTar_Val (0.0F)
#  define Rte_InitValue_HwAgTraj_Val (0.0F)
#  define Rte_InitValue_HwAgTrajEna_Logl (FALSE)
#  define Rte_InitValue_HwHaptcEna_Logl (FALSE)
#  define Rte_InitValue_HwOscnEna_Logl (FALSE)
#  define Rte_InitValue_HwOscnFrq_Val (10.0F)
#  define Rte_InitValue_HwOscnMotAmp_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqOscSt_Val (0U)
#  define Rte_InitValue_LkaEna_Logl (FALSE)
#  define Rte_InitValue_LkaSt_Val (0U)
#  define Rte_InitValue_LkaTqCmdCdnd_Val (0.0F)
#  define Rte_InitValue_LoaSt_Val (0U)
#  define Rte_InitValue_MfgOvrlDi_Logl (FALSE)
#  define Rte_InitValue_Msg17DBusHiSpdInvld_Logl (FALSE)
#  define Rte_InitValue_Msg17DBusHiSpdMiss_Logl (FALSE)
#  define Rte_InitValue_Msg180BusChassisExpInvld_Logl (FALSE)
#  define Rte_InitValue_Msg180BusChassisExpMiss_Logl (FALSE)
#  define Rte_InitValue_Msg180BusHiSpdInvld_Logl (FALSE)
#  define Rte_InitValue_Msg180BusHiSpdMiss_Logl (FALSE)
#  define Rte_InitValue_Msg1E9BusHiSpdInvld_Logl (FALSE)
#  define Rte_InitValue_Msg1E9BusHiSpdMiss_Logl (FALSE)
#  define Rte_InitValue_Msg1F5BusHiSpdInvld_Logl (FALSE)
#  define Rte_InitValue_Msg214BusHiSpdInvld_Logl (FALSE)
#  define Rte_InitValue_Msg214BusHiSpdMiss_Logl (FALSE)
#  define Rte_InitValue_Msg337BusChassisExpInvld_Logl (FALSE)
#  define Rte_InitValue_Msg337BusChassisExpMiss_Logl (FALSE)
#  define Rte_InitValue_ShiftLvrRvs_Logl (FALSE)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdSecurMax_Val (0.0F)
#  define Rte_InitValue_VehSpdSecurMaxVld_Logl (FALSE)
#  define Rte_InitValue_VehSpdSecurMin_Val (0.0F)
#  define Rte_InitValue_VehSpdSecurMinVld_Logl (FALSE)
#  define Rte_InitValue_VehStabyEnhmtActv_Logl (FALSE)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_GmOvrlStMgr_IgnCntrLcl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AbsActvProtd_Logl Rte_Read_GmOvrlStMgr_AbsActvProtd_Logl
#  define Rte_Read_GmOvrlStMgr_AbsActvProtd_Logl(data) (*(data) = Rte_GmMsg214BusHiSpd_AbsProtd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ApaEna_Logl Rte_Read_GmOvrlStMgr_ApaEna_Logl
#  define Rte_Read_GmOvrlStMgr_ApaEna_Logl(data) (*(data) = Rte_GmFctDiArbn_ApaEnaArbn_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EscEna_Logl Rte_Read_GmOvrlStMgr_EscEna_Logl
#  define Rte_Read_GmOvrlStMgr_EscEna_Logl(data) (*(data) = Rte_GmFctDiArbn_EscEnaArbn_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EscLimdActv_Logl Rte_Read_GmOvrlStMgr_EscLimdActv_Logl
#  define Rte_Read_GmOvrlStMgr_EscLimdActv_Logl(data) (*(data) = Rte_GmTqArbn_EscLimdActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCcw_Val Rte_Read_GmOvrlStMgr_HwAgEotCcw_Val
#  define Rte_Read_GmOvrlStMgr_HwAgEotCcw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCcw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgEotCw_Val Rte_Read_GmOvrlStMgr_HwAgEotCw_Val
#  define Rte_Read_GmOvrlStMgr_HwAgEotCw_Val(data) (*(data) = Rte_EotLrng_HwAgEotCw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTar_Val Rte_Read_GmOvrlStMgr_HwAgTar_Val
#  define Rte_Read_GmOvrlStMgr_HwAgTar_Val(data) (*(data) = Rte_GmMsg337BusChassisExp_SteerWhlAgReqTarAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTraj_Val Rte_Read_GmOvrlStMgr_HwAgTraj_Val
#  define Rte_Read_GmOvrlStMgr_HwAgTraj_Val(data) (*(data) = Rte_HwAgTrajGenn_HwAgTrakgServoCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgTrajEna_Logl Rte_Read_GmOvrlStMgr_HwAgTrajEna_Logl
#  define Rte_Read_GmOvrlStMgr_HwAgTrajEna_Logl(data) (*(data) = Rte_GmOvrlStMgr_HwAgTrajEna_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwHaptcEna_Logl Rte_Read_GmOvrlStMgr_HwHaptcEna_Logl
#  define Rte_Read_GmOvrlStMgr_HwHaptcEna_Logl(data) (*(data) = Rte_GmMsg337BusChassisExp_FbReqActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_GmOvrlStMgr_HwTq_Val
#  define Rte_Read_GmOvrlStMgr_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaEna_Logl Rte_Read_GmOvrlStMgr_LkaEna_Logl
#  define Rte_Read_GmOvrlStMgr_LkaEna_Logl(data) (*(data) = Rte_GmFctDiArbn_LkaEnaArbn_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaTqCmdCdnd_Val Rte_Read_GmOvrlStMgr_LkaTqCmdCdnd_Val
#  define Rte_Read_GmOvrlStMgr_LkaTqCmdCdnd_Val(data) (*(data) = Rte_GmTqArbn_LkaTqCmdCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LoaSt_Val Rte_Read_GmOvrlStMgr_LoaSt_Val
#  define Rte_Read_GmOvrlStMgr_LoaSt_Val(data) (*(data) = Rte_LoaMgr_LoaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MfgOvrlDi_Logl Rte_Read_GmOvrlStMgr_MfgOvrlDi_Logl
#  define Rte_Read_GmOvrlStMgr_MfgOvrlDi_Logl(data) (*(data) = Rte_CustDiagc_MfgOvrlDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg17DBusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdInvld_Logl
#  define Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdInvld_Logl(data) (*(data) = Rte_GmMsg17DBusHiSpd_InvldMsg17D_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg17DBusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdMiss_Logl
#  define Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdMiss_Logl(data) (*(data) = Rte_GmMsg17DBusHiSpd_MissMsg17D_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg180BusChassisExpInvld_Logl Rte_Read_GmOvrlStMgr_Msg180BusChassisExpInvld_Logl
#  define Rte_Read_GmOvrlStMgr_Msg180BusChassisExpInvld_Logl(data) (*(data) = Rte_GmMsg180BusChassisExp_InvldMsg180BusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg180BusChassisExpMiss_Logl Rte_Read_GmOvrlStMgr_Msg180BusChassisExpMiss_Logl
#  define Rte_Read_GmOvrlStMgr_Msg180BusChassisExpMiss_Logl(data) (*(data) = Rte_GmMsg180BusChassisExp_MissMsg180BusChassisExp_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg180BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg180BusHiSpdInvld_Logl
#  define Rte_Read_GmOvrlStMgr_Msg180BusHiSpdInvld_Logl(data) (*(data) = Rte_GmMsg180BusHiSpd_InvldMsg180BusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg180BusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg180BusHiSpdMiss_Logl
#  define Rte_Read_GmOvrlStMgr_Msg180BusHiSpdMiss_Logl(data) (*(data) = Rte_GmMsg180BusHiSpd_MissMsg180BusHiSpd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg1E9BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdInvld_Logl
#  define Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdInvld_Logl(data) (*(data) = Rte_GmMsg1E9BusHiSpd_InvldMsg1E9_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg1E9BusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdMiss_Logl
#  define Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdMiss_Logl(data) (*(data) = Rte_GmMsg1E9BusHiSpd_MissMsg1E9_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg1F5BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg1F5BusHiSpdInvld_Logl
#  define Rte_Read_GmOvrlStMgr_Msg1F5BusHiSpdInvld_Logl(data) (*(data) = Rte_GmMsg1F5BusHiSpd_InvldMsg1F5_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg214BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg214BusHiSpdInvld_Logl
#  define Rte_Read_GmOvrlStMgr_Msg214BusHiSpdInvld_Logl(data) (*(data) = Rte_GmMsg214BusHiSpd_VehStabyEnhmtInvld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg214BusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg214BusHiSpdMiss_Logl
#  define Rte_Read_GmOvrlStMgr_Msg214BusHiSpdMiss_Logl(data) (*(data) = Rte_GmMsg214BusHiSpd_MissMsg214_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg337BusChassisExpInvld_Logl Rte_Read_GmOvrlStMgr_Msg337BusChassisExpInvld_Logl
#  define Rte_Read_GmOvrlStMgr_Msg337BusChassisExpInvld_Logl(data) (*(data) = Rte_GmMsg337BusChassisExp_InvldMsg337_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Msg337BusChassisExpMiss_Logl Rte_Read_GmOvrlStMgr_Msg337BusChassisExpMiss_Logl
#  define Rte_Read_GmOvrlStMgr_Msg337BusChassisExpMiss_Logl(data) (*(data) = Rte_GmMsg337BusChassisExp_MissMsg337_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ShiftLvrRvs_Logl Rte_Read_GmOvrlStMgr_ShiftLvrRvs_Logl
#  define Rte_Read_GmOvrlStMgr_ShiftLvrRvs_Logl(data) (*(data) = Rte_GmMsg1F5BusHiSpd_ShiftLvrInRvs_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_GmOvrlStMgr_SysSt_Val
#  define Rte_Read_GmOvrlStMgr_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_GmOvrlStMgr_VehSpd_Val
#  define Rte_Read_GmOvrlStMgr_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdSecurMax_Val Rte_Read_GmOvrlStMgr_VehSpdSecurMax_Val
#  define Rte_Read_GmOvrlStMgr_VehSpdSecurMax_Val(data) (*(data) = Rte_GmVehSpdArbn_VehSpdMaxSecur_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdSecurMaxVld_Logl Rte_Read_GmOvrlStMgr_VehSpdSecurMaxVld_Logl
#  define Rte_Read_GmOvrlStMgr_VehSpdSecurMaxVld_Logl(data) (*(data) = Rte_GmVehSpdArbn_VehSpdMaxSecurVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdSecurMin_Val Rte_Read_GmOvrlStMgr_VehSpdSecurMin_Val
#  define Rte_Read_GmOvrlStMgr_VehSpdSecurMin_Val(data) (*(data) = Rte_GmVehSpdArbn_VehSpdMinSecur_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdSecurMinVld_Logl Rte_Read_GmOvrlStMgr_VehSpdSecurMinVld_Logl
#  define Rte_Read_GmOvrlStMgr_VehSpdSecurMinVld_Logl(data) (*(data) = Rte_GmVehSpdArbn_VehSpdMinSecurVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehStabyEnhmtActv_Logl Rte_Read_GmOvrlStMgr_VehStabyEnhmtActv_Logl
#  define Rte_Read_GmOvrlStMgr_VehStabyEnhmtActv_Logl(data) (*(data) = Rte_GmMsg1E9BusHiSpd_VehStabyEnhmtActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ApaDrvrIntvDetd_Logl Rte_Write_GmOvrlStMgr_ApaDrvrIntvDetd_Logl
#  define Rte_Write_GmOvrlStMgr_ApaDrvrIntvDetd_Logl(data) (Rte_GmOvrlStMgr_ApaDrvrIntvDetd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ApaSt_Val Rte_Write_GmOvrlStMgr_ApaSt_Val
#  define Rte_Write_GmOvrlStMgr_ApaSt_Val(data) (Rte_GmOvrlStMgr_ApaSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_EscSt_Val Rte_Write_GmOvrlStMgr_EscSt_Val
#  define Rte_Write_GmOvrlStMgr_EscSt_Val(data) (Rte_GmOvrlStMgr_EscSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAgServoCmd_Val Rte_Write_GmOvrlStMgr_HwAgServoCmd_Val
#  define Rte_Write_GmOvrlStMgr_HwAgServoCmd_Val(data) (Rte_GmOvrlStMgr_HwAgServoCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAgServoEna_Logl Rte_Write_GmOvrlStMgr_HwAgServoEna_Logl
#  define Rte_Write_GmOvrlStMgr_HwAgServoEna_Logl(data) (Rte_GmOvrlStMgr_HwAgServoEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwOscnEna_Logl Rte_Write_GmOvrlStMgr_HwOscnEna_Logl
#  define Rte_Write_GmOvrlStMgr_HwOscnEna_Logl(data) (Rte_GmOvrlStMgr_HwOscnEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwOscnFrq_Val Rte_Write_GmOvrlStMgr_HwOscnFrq_Val
#  define Rte_Write_GmOvrlStMgr_HwOscnFrq_Val(data) (Rte_GmOvrlStMgr_HwOscnFrq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwOscnMotAmp_Val Rte_Write_GmOvrlStMgr_HwOscnMotAmp_Val
#  define Rte_Write_GmOvrlStMgr_HwOscnMotAmp_Val(data) (Rte_GmOvrlStMgr_HwOscnMotAmp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqOscSt_Val Rte_Write_GmOvrlStMgr_HwTqOscSt_Val
#  define Rte_Write_GmOvrlStMgr_HwTqOscSt_Val(data) (Rte_GmOvrlStMgr_HwTqOscSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LkaSt_Val Rte_Write_GmOvrlStMgr_LkaSt_Val
#  define Rte_Write_GmOvrlStMgr_LkaSt_Val(data) (Rte_GmOvrlStMgr_LkaSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
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
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GmLoaIgnCntr_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)69, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)69, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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
#  define Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(data) \
  (Rte_Irv_GmOvrlStMgr_IgnCntrLcl = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl() \
  Rte_Irv_GmOvrlStMgr_IgnCntrLcl
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaHwTqFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrApaHwTqThd_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaHwTqThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaVehSpdHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrEscVehSpdHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrHaptcAmp_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrHaptcAmp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrHaptcFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrHaptcFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrHwAgTarLimr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrHwTqFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaHwTqFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaHwTqThd1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaHwTqThd2_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaVehSpdHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaVehSpdLoLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrStandStillThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrStandStillThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaHwTqTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrHaptcDurn_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrHaptcDurn_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrHaptcReactnTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrHaptcReqTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaHwTqTiThd1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaHwTqTiThd2_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val() (((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrShiftLvrTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrStandStillTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrStandStillTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val() (((P2CONST(Rte_Calprm_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaStIgnCntrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaHaptcEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrApaMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrEscMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrEscMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HaptcStTranActvToWaitRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HapticActvRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HapticWaitRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaFltRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaIntvRefTi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaIntvRefTi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LoaMtgtnHaptcFbStrtOnRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevApaIntvRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevHaptcReqRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevShiftLvrRvsRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevVehStandStillRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_TqOscCycRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_TranHaptcWaitToApaStActvRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_GmLoaIgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaFltCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevApaSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevEscSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevHaptcSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevLkaSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_IgnCntrUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaFltPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LkaIntvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_LoaStChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevApaIntvEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevHaptcReqEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevLkaFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevShiftLvrRvsEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_PrevVehStandStillEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_dGmOvrlStMgrApaShiftLvrRvs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_dGmOvrlStMgrApaStandStill; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HwTqLkaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GmOvrlStMgr_HwTqOscnLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HaptcStTranActvToWaitRefTi() \
  (&Rte_GmOvrlStMgr_HaptcStTranActvToWaitRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HapticActvRefTmr() \
  (&Rte_GmOvrlStMgr_HapticActvRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HapticWaitRefTmr() \
  (&Rte_GmOvrlStMgr_HapticWaitRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LkaFltRefTmr() \
  (&Rte_GmOvrlStMgr_LkaFltRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LkaIntvRefTi1() \
  (&Rte_GmOvrlStMgr_LkaIntvRefTi1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LkaIntvRefTi2() \
  (&Rte_GmOvrlStMgr_LkaIntvRefTi2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi() \
  (&Rte_GmOvrlStMgr_LoaMtgtnHaptcFbStrtOnRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevApaIntvRefTi() \
  (&Rte_GmOvrlStMgr_PrevApaIntvRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHaptcReqRefTi() \
  (&Rte_GmOvrlStMgr_PrevHaptcReqRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevShiftLvrRvsRefTi() \
  (&Rte_GmOvrlStMgr_PrevShiftLvrRvsRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVehStandStillRefTi() \
  (&Rte_GmOvrlStMgr_PrevVehStandStillRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqOscCycRefTi() \
  (&Rte_GmOvrlStMgr_TqOscCycRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TranHaptcWaitToApaStActvRefTi() \
  (&Rte_GmOvrlStMgr_TranHaptcWaitToApaStActvRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmLoaIgnCntr() \
  (&Rte_GmOvrlStMgr_GmLoaIgnCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LkaFltCntr() \
  (&Rte_GmOvrlStMgr_LkaFltCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevApaSt() \
  (&Rte_GmOvrlStMgr_PrevApaSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevEscSt() \
  (&Rte_GmOvrlStMgr_PrevEscSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHaptcSt() \
  (&Rte_GmOvrlStMgr_PrevHaptcSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLkaSt() \
  (&Rte_GmOvrlStMgr_PrevLkaSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IgnCntrUpd() \
  (&Rte_GmOvrlStMgr_IgnCntrUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LkaFltPrev() \
  (&Rte_GmOvrlStMgr_LkaFltPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LkaIntvPrev() \
  (&Rte_GmOvrlStMgr_LkaIntvPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoaStChk() \
  (&Rte_GmOvrlStMgr_LoaStChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevApaIntvEna() \
  (&Rte_GmOvrlStMgr_PrevApaIntvEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHaptcReqEna() \
  (&Rte_GmOvrlStMgr_PrevHaptcReqEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLkaFlt() \
  (&Rte_GmOvrlStMgr_PrevLkaFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevShiftLvrRvsEna() \
  (&Rte_GmOvrlStMgr_PrevShiftLvrRvsEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVehStandStillEna() \
  (&Rte_GmOvrlStMgr_PrevVehStandStillEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs() \
  (&Rte_GmOvrlStMgr_dGmOvrlStMgrApaShiftLvrRvs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dGmOvrlStMgrApaStandStill() \
  (&Rte_GmOvrlStMgr_dGmOvrlStMgrApaStandStill) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLkaLpFil() \
  (&Rte_GmOvrlStMgr_HwTqLkaLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLpFil() \
  (&Rte_GmOvrlStMgr_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqOscnLpFil() \
  (&Rte_GmOvrlStMgr_HwTqOscnLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmOvrlStMgr_START_SEC_CODE
# include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GetGmLoaIgnCntr_Oper GetGmLoaIgnCntr_Oper
#  define RTE_RUNNABLE_GmOvrlStMgrInit1 GmOvrlStMgrInit1
#  define RTE_RUNNABLE_GmOvrlStMgrPer1 GmOvrlStMgrPer1
#  define RTE_RUNNABLE_SetGmLoaIgnCntr_Oper SetGmLoaIgnCntr_Oper
# endif

FUNC(void, GmOvrlStMgr_CODE) GetGmLoaIgnCntr_Oper(P2VAR(uint16, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, GmOvrlStMgr_CODE) SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmOvrlStMgr_STOP_SEC_CODE
# include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

#endif /* _RTE_GMOVRLSTMGR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
