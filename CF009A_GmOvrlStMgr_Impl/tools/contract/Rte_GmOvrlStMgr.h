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
 *          File:  Rte_GmOvrlStMgr.h
 *     SW-C Type:  GmOvrlStMgr
 *  Generated at:  Tue Dec 13 11:27:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmOvrlStMgr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMOVRLSTMGR_H
# define _RTE_GMOVRLSTMGR_H

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

# include "Rte_GmOvrlStMgr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmOvrlStMgr
{
  /* PIM Handles section */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmLoaIgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HaptcStTranActvToWaitRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HapticActvRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HapticWaitRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLkaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqOscnLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IgnCntrUpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LkaFltCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LkaFltPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LkaFltRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LkaIntvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LkaIntvRefTi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LkaIntvRefTi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LoaMtgtnHaptcFbStrtOnRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LoaStChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevApaIntvEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevApaIntvRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevApaSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevEscSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHaptcReqEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHaptcReqRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHaptcSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLkaFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLkaSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevShiftLvrRvsEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevShiftLvrRvsRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehStandStillEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehStandStillRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqOscCycRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TranHaptcWaitToApaStActvRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmOvrlStMgrApaShiftLvrRvs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmOvrlStMgrApaStandStill; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmOvrlStMgr, RTE_CONST, RTE_CONST) Rte_Inst_GmOvrlStMgr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmOvrlStMgr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AbsActvProtd_Logl (FALSE)
# define Rte_InitValue_ApaDrvrIntvDetd_Logl (FALSE)
# define Rte_InitValue_ApaEna_Logl (FALSE)
# define Rte_InitValue_ApaSt_Val (0U)
# define Rte_InitValue_EscEna_Logl (FALSE)
# define Rte_InitValue_EscLimdActv_Logl (FALSE)
# define Rte_InitValue_EscSt_Val (0U)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_HwAgServoCmd_Val (0.0F)
# define Rte_InitValue_HwAgServoEna_Logl (FALSE)
# define Rte_InitValue_HwAgTar_Val (0.0F)
# define Rte_InitValue_HwAgTraj_Val (0.0F)
# define Rte_InitValue_HwAgTrajEna_Logl (FALSE)
# define Rte_InitValue_HwHaptcEna_Logl (FALSE)
# define Rte_InitValue_HwOscnEna_Logl (FALSE)
# define Rte_InitValue_HwOscnFrq_Val (10.0F)
# define Rte_InitValue_HwOscnMotAmp_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqOscSt_Val (0U)
# define Rte_InitValue_LkaEna_Logl (FALSE)
# define Rte_InitValue_LkaSt_Val (0U)
# define Rte_InitValue_LkaTqCmdCdnd_Val (0.0F)
# define Rte_InitValue_LoaSt_Val (0U)
# define Rte_InitValue_MfgOvrlDi_Logl (FALSE)
# define Rte_InitValue_Msg17DBusHiSpdInvld_Logl (FALSE)
# define Rte_InitValue_Msg17DBusHiSpdMiss_Logl (FALSE)
# define Rte_InitValue_Msg180BusChassisExpInvld_Logl (FALSE)
# define Rte_InitValue_Msg180BusChassisExpMiss_Logl (FALSE)
# define Rte_InitValue_Msg180BusHiSpdInvld_Logl (FALSE)
# define Rte_InitValue_Msg180BusHiSpdMiss_Logl (FALSE)
# define Rte_InitValue_Msg1E9BusHiSpdInvld_Logl (FALSE)
# define Rte_InitValue_Msg1E9BusHiSpdMiss_Logl (FALSE)
# define Rte_InitValue_Msg1F5BusHiSpdInvld_Logl (FALSE)
# define Rte_InitValue_Msg214BusHiSpdInvld_Logl (FALSE)
# define Rte_InitValue_Msg214BusHiSpdMiss_Logl (FALSE)
# define Rte_InitValue_Msg337BusChassisExpInvld_Logl (FALSE)
# define Rte_InitValue_Msg337BusChassisExpMiss_Logl (FALSE)
# define Rte_InitValue_ShiftLvrRvs_Logl (FALSE)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdSecurMax_Val (0.0F)
# define Rte_InitValue_VehSpdSecurMaxVld_Logl (FALSE)
# define Rte_InitValue_VehSpdSecurMin_Val (0.0F)
# define Rte_InitValue_VehSpdSecurMinVld_Logl (FALSE)
# define Rte_InitValue_VehStabyEnhmtActv_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_AbsActvProtd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_ApaEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_EscEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_EscLimdActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_HwAgEotCcw_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_HwAgEotCw_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_HwAgTar_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_HwAgTraj_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_HwAgTrajEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_HwHaptcEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_LkaEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_LkaTqCmdCdnd_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_LoaSt_Val(P2VAR(LoaSt1, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_MfgOvrlDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdMiss_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg180BusChassisExpInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg180BusChassisExpMiss_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg180BusHiSpdInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg180BusHiSpdMiss_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdMiss_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg1F5BusHiSpdInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg214BusHiSpdInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg214BusHiSpdMiss_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg337BusChassisExpInvld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_Msg337BusChassisExpMiss_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_ShiftLvrRvs_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_VehSpdSecurMax_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_VehSpdSecurMaxVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_VehSpdSecurMin_Val(P2VAR(float32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_VehSpdSecurMinVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmOvrlStMgr_VehStabyEnhmtActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_ApaDrvrIntvDetd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_ApaSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_EscSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_HwAgServoCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_HwAgServoEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_HwOscnEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_HwOscnFrq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_HwOscnMotAmp_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_HwTqOscSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmOvrlStMgr_LkaSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmOvrlStMgr_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmOvrlStMgr_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmOvrlStMgr_GmLoaIgnCntr_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmOvrlStMgr_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmOvrlStMgr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHwTqFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHwTqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaVehSpdHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrEscVehSpdHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcAmp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHwAgTarLimr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHwTqFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqThd1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqThd2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaVehSpdHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaVehSpdLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrStandStillThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHwTqTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcDurn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcReactnTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcReqTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqTiThd1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqTiThd2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrShiftLvrTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrStandStillTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaStIgnCntrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHaptcEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrEscMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_GmOvrlStMgr_GmOvrlStMgrInit1_IgnCntrLcl(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_IrvRead_GmOvrlStMgr_GmOvrlStMgrPer1_IgnCntrLcl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AbsActvProtd_Logl Rte_Read_GmOvrlStMgr_AbsActvProtd_Logl
# define Rte_Read_ApaEna_Logl Rte_Read_GmOvrlStMgr_ApaEna_Logl
# define Rte_Read_EscEna_Logl Rte_Read_GmOvrlStMgr_EscEna_Logl
# define Rte_Read_EscLimdActv_Logl Rte_Read_GmOvrlStMgr_EscLimdActv_Logl
# define Rte_Read_HwAgEotCcw_Val Rte_Read_GmOvrlStMgr_HwAgEotCcw_Val
# define Rte_Read_HwAgEotCw_Val Rte_Read_GmOvrlStMgr_HwAgEotCw_Val
# define Rte_Read_HwAgTar_Val Rte_Read_GmOvrlStMgr_HwAgTar_Val
# define Rte_Read_HwAgTraj_Val Rte_Read_GmOvrlStMgr_HwAgTraj_Val
# define Rte_Read_HwAgTrajEna_Logl Rte_Read_GmOvrlStMgr_HwAgTrajEna_Logl
# define Rte_Read_HwHaptcEna_Logl Rte_Read_GmOvrlStMgr_HwHaptcEna_Logl
# define Rte_Read_HwTq_Val Rte_Read_GmOvrlStMgr_HwTq_Val
# define Rte_Read_LkaEna_Logl Rte_Read_GmOvrlStMgr_LkaEna_Logl
# define Rte_Read_LkaTqCmdCdnd_Val Rte_Read_GmOvrlStMgr_LkaTqCmdCdnd_Val
# define Rte_Read_LoaSt_Val Rte_Read_GmOvrlStMgr_LoaSt_Val
# define Rte_Read_MfgOvrlDi_Logl Rte_Read_GmOvrlStMgr_MfgOvrlDi_Logl
# define Rte_Read_Msg17DBusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdInvld_Logl
# define Rte_Read_Msg17DBusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg17DBusHiSpdMiss_Logl
# define Rte_Read_Msg180BusChassisExpInvld_Logl Rte_Read_GmOvrlStMgr_Msg180BusChassisExpInvld_Logl
# define Rte_Read_Msg180BusChassisExpMiss_Logl Rte_Read_GmOvrlStMgr_Msg180BusChassisExpMiss_Logl
# define Rte_Read_Msg180BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg180BusHiSpdInvld_Logl
# define Rte_Read_Msg180BusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg180BusHiSpdMiss_Logl
# define Rte_Read_Msg1E9BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdInvld_Logl
# define Rte_Read_Msg1E9BusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg1E9BusHiSpdMiss_Logl
# define Rte_Read_Msg1F5BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg1F5BusHiSpdInvld_Logl
# define Rte_Read_Msg214BusHiSpdInvld_Logl Rte_Read_GmOvrlStMgr_Msg214BusHiSpdInvld_Logl
# define Rte_Read_Msg214BusHiSpdMiss_Logl Rte_Read_GmOvrlStMgr_Msg214BusHiSpdMiss_Logl
# define Rte_Read_Msg337BusChassisExpInvld_Logl Rte_Read_GmOvrlStMgr_Msg337BusChassisExpInvld_Logl
# define Rte_Read_Msg337BusChassisExpMiss_Logl Rte_Read_GmOvrlStMgr_Msg337BusChassisExpMiss_Logl
# define Rte_Read_ShiftLvrRvs_Logl Rte_Read_GmOvrlStMgr_ShiftLvrRvs_Logl
# define Rte_Read_SysSt_Val Rte_Read_GmOvrlStMgr_SysSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_GmOvrlStMgr_VehSpd_Val
# define Rte_Read_VehSpdSecurMax_Val Rte_Read_GmOvrlStMgr_VehSpdSecurMax_Val
# define Rte_Read_VehSpdSecurMaxVld_Logl Rte_Read_GmOvrlStMgr_VehSpdSecurMaxVld_Logl
# define Rte_Read_VehSpdSecurMin_Val Rte_Read_GmOvrlStMgr_VehSpdSecurMin_Val
# define Rte_Read_VehSpdSecurMinVld_Logl Rte_Read_GmOvrlStMgr_VehSpdSecurMinVld_Logl
# define Rte_Read_VehStabyEnhmtActv_Logl Rte_Read_GmOvrlStMgr_VehStabyEnhmtActv_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ApaDrvrIntvDetd_Logl Rte_Write_GmOvrlStMgr_ApaDrvrIntvDetd_Logl
# define Rte_Write_ApaSt_Val Rte_Write_GmOvrlStMgr_ApaSt_Val
# define Rte_Write_EscSt_Val Rte_Write_GmOvrlStMgr_EscSt_Val
# define Rte_Write_HwAgServoCmd_Val Rte_Write_GmOvrlStMgr_HwAgServoCmd_Val
# define Rte_Write_HwAgServoEna_Logl Rte_Write_GmOvrlStMgr_HwAgServoEna_Logl
# define Rte_Write_HwOscnEna_Logl Rte_Write_GmOvrlStMgr_HwOscnEna_Logl
# define Rte_Write_HwOscnFrq_Val Rte_Write_GmOvrlStMgr_HwOscnFrq_Val
# define Rte_Write_HwOscnMotAmp_Val Rte_Write_GmOvrlStMgr_HwOscnMotAmp_Val
# define Rte_Write_HwTqOscSt_Val Rte_Write_GmOvrlStMgr_HwTqOscSt_Val
# define Rte_Write_LkaSt_Val Rte_Write_GmOvrlStMgr_LkaSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmOvrlStMgr_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmOvrlStMgr_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_GmLoaIgnCntr_GetErrorStatus Rte_Call_GmOvrlStMgr_GmLoaIgnCntr_GetErrorStatus
# define Rte_Call_GmLoaIgnCntr_SetRamBlockStatus Rte_Call_GmOvrlStMgr_GmLoaIgnCntr_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmOvrlStMgr_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(data) \
  Rte_IrvWrite_GmOvrlStMgr_GmOvrlStMgrInit1_IgnCntrLcl(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl() \
  Rte_IrvRead_GmOvrlStMgr_GmOvrlStMgrPer1_IgnCntrLcl()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHwTqFilFrq_Val

# define Rte_Prm_GmOvrlStMgrApaHwTqThd_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHwTqThd_Val

# define Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaVehSpdHiLim_Val

# define Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrEscVehSpdHiLim_Val

# define Rte_Prm_GmOvrlStMgrHaptcAmp_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcAmp_Val

# define Rte_Prm_GmOvrlStMgrHaptcFrq_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcFrq_Val

# define Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHwAgTarLimr_Val

# define Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHwTqFilFrq_Val

# define Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqFilFrq_Val

# define Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqThd1_Val

# define Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqThd2_Val

# define Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaVehSpdHiLim_Val

# define Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaVehSpdLoLim_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFrq_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val

# define Rte_Prm_GmOvrlStMgrStandStillThd_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrStandStillThd_Val

# define Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHwTqTiThd_Val

# define Rte_Prm_GmOvrlStMgrHaptcDurn_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcDurn_Val

# define Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcReactnTi_Val

# define Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrHaptcReqTiThd_Val

# define Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqTiThd1_Val

# define Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaHwTqTiThd2_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val

# define Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val

# define Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrShiftLvrTiThd_Val

# define Rte_Prm_GmOvrlStMgrStandStillTiThd_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrStandStillTiThd_Val

# define Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaStIgnCntrThd_Val

# define Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaHaptcEna_Logl

# define Rte_Prm_GmOvrlStMgrApaMfgEna_Logl Rte_Prm_GmOvrlStMgr_GmOvrlStMgrApaMfgEna_Logl

# define Rte_Prm_GmOvrlStMgrEscMfgEna_Logl Rte_Prm_GmOvrlStMgr_GmOvrlStMgrEscMfgEna_Logl

# define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLkaMfgEna_Logl

# define Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D

# define Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D Rte_Prm_GmOvrlStMgr_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HaptcStTranActvToWaitRefTi() (Rte_Inst_GmOvrlStMgr->Pim_HaptcStTranActvToWaitRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HapticActvRefTmr() (Rte_Inst_GmOvrlStMgr->Pim_HapticActvRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HapticWaitRefTmr() (Rte_Inst_GmOvrlStMgr->Pim_HapticWaitRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LkaFltRefTmr() (Rte_Inst_GmOvrlStMgr->Pim_LkaFltRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LkaIntvRefTi1() (Rte_Inst_GmOvrlStMgr->Pim_LkaIntvRefTi1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LkaIntvRefTi2() (Rte_Inst_GmOvrlStMgr->Pim_LkaIntvRefTi2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi() (Rte_Inst_GmOvrlStMgr->Pim_LoaMtgtnHaptcFbStrtOnRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevApaIntvRefTi() (Rte_Inst_GmOvrlStMgr->Pim_PrevApaIntvRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHaptcReqRefTi() (Rte_Inst_GmOvrlStMgr->Pim_PrevHaptcReqRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevShiftLvrRvsRefTi() (Rte_Inst_GmOvrlStMgr->Pim_PrevShiftLvrRvsRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehStandStillRefTi() (Rte_Inst_GmOvrlStMgr->Pim_PrevVehStandStillRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqOscCycRefTi() (Rte_Inst_GmOvrlStMgr->Pim_TqOscCycRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TranHaptcWaitToApaStActvRefTi() (Rte_Inst_GmOvrlStMgr->Pim_TranHaptcWaitToApaStActvRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmLoaIgnCntr() (Rte_Inst_GmOvrlStMgr->Pim_GmLoaIgnCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LkaFltCntr() (Rte_Inst_GmOvrlStMgr->Pim_LkaFltCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevApaSt() (Rte_Inst_GmOvrlStMgr->Pim_PrevApaSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevEscSt() (Rte_Inst_GmOvrlStMgr->Pim_PrevEscSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHaptcSt() (Rte_Inst_GmOvrlStMgr->Pim_PrevHaptcSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLkaSt() (Rte_Inst_GmOvrlStMgr->Pim_PrevLkaSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IgnCntrUpd() (Rte_Inst_GmOvrlStMgr->Pim_IgnCntrUpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LkaFltPrev() (Rte_Inst_GmOvrlStMgr->Pim_LkaFltPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LkaIntvPrev() (Rte_Inst_GmOvrlStMgr->Pim_LkaIntvPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LoaStChk() (Rte_Inst_GmOvrlStMgr->Pim_LoaStChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevApaIntvEna() (Rte_Inst_GmOvrlStMgr->Pim_PrevApaIntvEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHaptcReqEna() (Rte_Inst_GmOvrlStMgr->Pim_PrevHaptcReqEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLkaFlt() (Rte_Inst_GmOvrlStMgr->Pim_PrevLkaFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevShiftLvrRvsEna() (Rte_Inst_GmOvrlStMgr->Pim_PrevShiftLvrRvsEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehStandStillEna() (Rte_Inst_GmOvrlStMgr->Pim_PrevVehStandStillEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs() (Rte_Inst_GmOvrlStMgr->Pim_dGmOvrlStMgrApaShiftLvrRvs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmOvrlStMgrApaStandStill() (Rte_Inst_GmOvrlStMgr->Pim_dGmOvrlStMgrApaStandStill) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLkaLpFil() (Rte_Inst_GmOvrlStMgr->Pim_HwTqLkaLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLpFil() (Rte_Inst_GmOvrlStMgr->Pim_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqOscnLpFil() (Rte_Inst_GmOvrlStMgr->Pim_HwTqOscnLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_HaptcStTranActvToWaitRefTi(void)
 *   uint32 *Rte_Pim_HapticActvRefTmr(void)
 *   uint32 *Rte_Pim_HapticWaitRefTmr(void)
 *   uint32 *Rte_Pim_LkaFltRefTmr(void)
 *   uint32 *Rte_Pim_LkaIntvRefTi1(void)
 *   uint32 *Rte_Pim_LkaIntvRefTi2(void)
 *   uint32 *Rte_Pim_LoaMtgtnHaptcFbStrtOnRefTi(void)
 *   uint32 *Rte_Pim_PrevApaIntvRefTi(void)
 *   uint32 *Rte_Pim_PrevHaptcReqRefTi(void)
 *   uint32 *Rte_Pim_PrevShiftLvrRvsRefTi(void)
 *   uint32 *Rte_Pim_PrevVehStandStillRefTi(void)
 *   uint32 *Rte_Pim_TqOscCycRefTi(void)
 *   uint32 *Rte_Pim_TranHaptcWaitToApaStActvRefTi(void)
 *   uint16 *Rte_Pim_GmLoaIgnCntr(void)
 *   uint8 *Rte_Pim_LkaFltCntr(void)
 *   uint8 *Rte_Pim_PrevApaSt(void)
 *   uint8 *Rte_Pim_PrevEscSt(void)
 *   uint8 *Rte_Pim_PrevHaptcSt(void)
 *   uint8 *Rte_Pim_PrevLkaSt(void)
 *   boolean *Rte_Pim_IgnCntrUpd(void)
 *   boolean *Rte_Pim_LkaFltPrev(void)
 *   boolean *Rte_Pim_LkaIntvPrev(void)
 *   boolean *Rte_Pim_LoaStChk(void)
 *   boolean *Rte_Pim_PrevApaIntvEna(void)
 *   boolean *Rte_Pim_PrevHaptcReqEna(void)
 *   boolean *Rte_Pim_PrevLkaFlt(void)
 *   boolean *Rte_Pim_PrevShiftLvrRvsEna(void)
 *   boolean *Rte_Pim_PrevVehStandStillEna(void)
 *   boolean *Rte_Pim_dGmOvrlStMgrApaShiftLvrRvs(void)
 *   boolean *Rte_Pim_dGmOvrlStMgrApaStandStill(void)
 *   FilLpRec1 *Rte_Pim_HwTqLkaLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqOscnLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmOvrlStMgrApaHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrApaHwTqThd_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrApaVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrEscVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHaptcAmp_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHaptcFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHwAgTarLimr_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqFilFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqThd1_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaHwTqThd2_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaVehSpdHiLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLkaVehSpdLoLim_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMax_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbTqMin_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFrq_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrLoaMtgtnStrtHaptcAmp_Val(void)
 *   float32 Rte_Prm_GmOvrlStMgrStandStillThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrApaHwTqTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcDurn_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcReactnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrHaptcReqTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLkaHwTqTiThd1_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLkaHwTqTiThd2_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOffTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbOnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrShiftLvrTiThd_Val(void)
 *   uint32 Rte_Prm_GmOvrlStMgrStandStillTiThd_Val(void)
 *   uint16 Rte_Prm_GmOvrlStMgrLoaStIgnCntrThd_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaHaptcEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *   u2p14 *Rte_Prm_GmOvrlStMgrLoaMtgtnTqOscnAmpY_Ary1D(void)
 *   u10p6 *Rte_Prm_GmOvrlStMgrLoaMtgtnVehSpdX_Ary1D(void)
 *
 *********************************************************************************************************************/


# define GmOvrlStMgr_START_SEC_CODE
# include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetGmLoaIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetGmLoaIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetGmLoaIgnCntr_Oper(uint16 *GmLoaIgnCntr_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetGmLoaIgnCntr_Oper GetGmLoaIgnCntr_Oper
FUNC(void, GmOvrlStMgr_CODE) GetGmLoaIgnCntr_Oper(P2VAR(uint16, AUTOMATIC, RTE_GMOVRLSTMGR_APPL_VAR) GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmOvrlStMgrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GmOvrlStMgrInit1_IgnCntrLcl(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmOvrlStMgrInit1 GmOvrlStMgrInit1
FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmOvrlStMgrPer1
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
 *   Std_ReturnType Rte_Read_AbsActvProtd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ApaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscLimdActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTar_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTraj_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrajEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwHaptcEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LkaTqCmdCdnd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_MfgOvrlDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg17DBusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg17DBusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusChassisExpInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusChassisExpMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg180BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1E9BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1E9BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg1F5BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg214BusHiSpdInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg214BusHiSpdMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg337BusChassisExpInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Msg337BusChassisExpMiss_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ShiftLvrRvs_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMaxVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSecurMinVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtActv_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApaDrvrIntvDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_ApaSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EscSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwAgServoCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgServoEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwOscnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwOscnFrq_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwOscnMotAmp_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqOscSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaSt_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_GmOvrlStMgrPer1_IgnCntrLcl(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmOvrlStMgrPer1 GmOvrlStMgrPer1
FUNC(void, GmOvrlStMgr_CODE) GmOvrlStMgrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetGmLoaIgnCntr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetGmLoaIgnCntr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_GmLoaIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetGmLoaIgnCntr_Oper SetGmLoaIgnCntr_Oper
FUNC(void, GmOvrlStMgr_CODE) SetGmLoaIgnCntr_Oper(uint16 GmLoaIgnCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmOvrlStMgr_STOP_SEC_CODE
# include "GmOvrlStMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481617708
#    error "The magic number of the generated file <C:/Component/CF009A_GmOvrlStMgr_Impl_4.1.0/tools/contract/Rte_GmOvrlStMgr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481617708
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMOVRLSTMGR_H */
