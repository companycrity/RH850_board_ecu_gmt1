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
 *          File:  Rte_GmTqArbn.h
 *     SW-C Type:  GmTqArbn
 *  Generated at:  Fri Feb 10 12:38:28 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmTqArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMTQARBN_H
# define _RTE_GMTQARBN_H

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

# include "Rte_GmTqArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmTqArbn
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_APASmotngHwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ActPosnServoCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DesLkaTqCmdRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoSmotngEnaRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmTqArbnDesLkaTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmTqArbnEscTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmTqArbnLkaOutpTqReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmTqArbnLkaTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmTqArbnPosnServoSmotngLowrLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmTqArbn, RTE_CONST, RTE_CONST) Rte_Inst_GmTqArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmTqArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmdBasSca_Val (0.0F)
# define Rte_InitValue_DampgCmdSca_Val (0.0F)
# define Rte_InitValue_EscCmd_Val (0.0F)
# define Rte_InitValue_EscCmdArbd_Val (0.0F)
# define Rte_InitValue_EscLimdActv_Logl (FALSE)
# define Rte_InitValue_EscSt_Val (0U)
# define Rte_InitValue_HwAgServoEna_Logl (FALSE)
# define Rte_InitValue_HwOscnEna_Logl (FALSE)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqOscCmd_Val (0.0F)
# define Rte_InitValue_HwTqOvrl_Val (0.0F)
# define Rte_InitValue_LkaSt_Val (0U)
# define Rte_InitValue_LkaTqCmd_Val (0.0F)
# define Rte_InitValue_LkaTqCmdCdnd_Val (0.0F)
# define Rte_InitValue_MotTqCmdOvrl_Val (0.0F)
# define Rte_InitValue_MotTqServoCmd_Val (0.0F)
# define Rte_InitValue_PullCmpCustLrngDi_Logl (FALSE)
# define Rte_InitValue_RtnCmdSca_Val (0.0F)
# define Rte_InitValue_VehSpdMaxSecur_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_EscCmd_Val(P2VAR(float32, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_EscSt_Val(P2VAR(GmTqArbnEscSt1, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_HwAgServoEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_HwOscnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_HwTqOscCmd_Val(P2VAR(float32, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_LkaSt_Val(P2VAR(GmTqArbnLkaSt1, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_LkaTqCmd_Val(P2VAR(float32, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_MotTqServoCmd_Val(P2VAR(float32, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmTqArbn_VehSpdMaxSecur_Val(P2VAR(float32, AUTOMATIC, RTE_GMTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_AssiCmdBasSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_DampgCmdSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_EscCmdArbd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_EscLimdActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_HwTqOvrl_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_LkaTqCmdCdnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_MotTqCmdOvrl_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_PullCmpCustLrngDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmTqArbn_RtnCmdSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaEnaRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaSmotngHwTqLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnEscMaxTq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlUpprLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaAssiScaEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaDampgScaEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaRtnScaEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaSlewEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaDiRateX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaDiRateX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u7p9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaDiRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u7p9_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaDiRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaSmotngX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaSmotngX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaSmotngY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnApaSmotngY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u4p12_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u4p12_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_GmTqArbnLkaSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_GmTqArbn_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EscCmd_Val Rte_Read_GmTqArbn_EscCmd_Val
# define Rte_Read_EscSt_Val Rte_Read_GmTqArbn_EscSt_Val
# define Rte_Read_HwAgServoEna_Logl Rte_Read_GmTqArbn_HwAgServoEna_Logl
# define Rte_Read_HwOscnEna_Logl Rte_Read_GmTqArbn_HwOscnEna_Logl
# define Rte_Read_HwTq_Val Rte_Read_GmTqArbn_HwTq_Val
# define Rte_Read_HwTqOscCmd_Val Rte_Read_GmTqArbn_HwTqOscCmd_Val
# define Rte_Read_LkaSt_Val Rte_Read_GmTqArbn_LkaSt_Val
# define Rte_Read_LkaTqCmd_Val Rte_Read_GmTqArbn_LkaTqCmd_Val
# define Rte_Read_MotTqServoCmd_Val Rte_Read_GmTqArbn_MotTqServoCmd_Val
# define Rte_Read_VehSpdMaxSecur_Val Rte_Read_GmTqArbn_VehSpdMaxSecur_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiCmdBasSca_Val Rte_Write_GmTqArbn_AssiCmdBasSca_Val
# define Rte_Write_DampgCmdSca_Val Rte_Write_GmTqArbn_DampgCmdSca_Val
# define Rte_Write_EscCmdArbd_Val Rte_Write_GmTqArbn_EscCmdArbd_Val
# define Rte_Write_EscLimdActv_Logl Rte_Write_GmTqArbn_EscLimdActv_Logl
# define Rte_Write_HwTqOvrl_Val Rte_Write_GmTqArbn_HwTqOvrl_Val
# define Rte_Write_LkaTqCmdCdnd_Val Rte_Write_GmTqArbn_LkaTqCmdCdnd_Val
# define Rte_Write_MotTqCmdOvrl_Val Rte_Write_GmTqArbn_MotTqCmdOvrl_Val
# define Rte_Write_PullCmpCustLrngDi_Logl Rte_Write_GmTqArbn_PullCmpCustLrngDi_Logl
# define Rte_Write_RtnCmdSca_Val Rte_Write_GmTqArbn_RtnCmdSca_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmTqArbnApaEnaRate_Val Rte_Prm_GmTqArbn_GmTqArbnApaEnaRate_Val

# define Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val Rte_Prm_GmTqArbn_GmTqArbnApaSmotngHwTqLpFilFrq_Val

# define Rte_Prm_GmTqArbnEscMaxTq_Val Rte_Prm_GmTqArbn_GmTqArbnEscMaxTq_Val

# define Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlUpprLim_Val

# define Rte_Prm_GmTqArbnApaAssiScaEna_Logl Rte_Prm_GmTqArbn_GmTqArbnApaAssiScaEna_Logl

# define Rte_Prm_GmTqArbnApaDampgScaEna_Logl Rte_Prm_GmTqArbn_GmTqArbnApaDampgScaEna_Logl

# define Rte_Prm_GmTqArbnApaRtnScaEna_Logl Rte_Prm_GmTqArbn_GmTqArbnApaRtnScaEna_Logl

# define Rte_Prm_GmTqArbnLkaSlewEna_Logl Rte_Prm_GmTqArbn_GmTqArbnLkaSlewEna_Logl

# define Rte_Prm_GmTqArbnApaDiRateX_Ary1D Rte_Prm_GmTqArbn_GmTqArbnApaDiRateX_Ary1D

# define Rte_Prm_GmTqArbnApaDiRateY_Ary1D Rte_Prm_GmTqArbn_GmTqArbnApaDiRateY_Ary1D

# define Rte_Prm_GmTqArbnApaSmotngX_Ary1D Rte_Prm_GmTqArbn_GmTqArbnApaSmotngX_Ary1D

# define Rte_Prm_GmTqArbnApaSmotngY_Ary1D Rte_Prm_GmTqArbn_GmTqArbnApaSmotngY_Ary1D

# define Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlX_Ary2D

# define Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D Rte_Prm_GmTqArbn_GmTqArbnLkaOutpOvrlY_Ary2D

# define Rte_Prm_GmTqArbnLkaSlewX_Ary1D Rte_Prm_GmTqArbn_GmTqArbnLkaSlewX_Ary1D

# define Rte_Prm_GmTqArbnLkaSlewY_Ary1D Rte_Prm_GmTqArbn_GmTqArbnLkaSlewY_Ary1D

# define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D Rte_Prm_GmTqArbn_SysGlbPrmVehSpdBilnrSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_ActPosnServoCmd() (Rte_Inst_GmTqArbn->Pim_ActPosnServoCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DesLkaTqCmdRateLim() (Rte_Inst_GmTqArbn->Pim_DesLkaTqCmdRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoSmotngEnaRateLim() (Rte_Inst_GmTqArbn->Pim_PosnServoSmotngEnaRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmTqArbnDesLkaTqCmd() (Rte_Inst_GmTqArbn->Pim_dGmTqArbnDesLkaTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmTqArbnEscTqCmd() (Rte_Inst_GmTqArbn->Pim_dGmTqArbnEscTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmTqArbnLkaOutpTqReq() (Rte_Inst_GmTqArbn->Pim_dGmTqArbnLkaOutpTqReq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmTqArbnLkaTqCmd() (Rte_Inst_GmTqArbn->Pim_dGmTqArbnLkaTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim() (Rte_Inst_GmTqArbn->Pim_dGmTqArbnPosnServoSmotngLowrLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_APASmotngHwTqLpFil() (Rte_Inst_GmTqArbn->Pim_APASmotngHwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_ActPosnServoCmd(void)
 *   float32 *Rte_Pim_DesLkaTqCmdRateLim(void)
 *   float32 *Rte_Pim_PosnServoSmotngEnaRateLim(void)
 *   float32 *Rte_Pim_dGmTqArbnDesLkaTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnEscTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnLkaOutpTqReq(void)
 *   float32 *Rte_Pim_dGmTqArbnLkaTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim(void)
 *   FilLpRec1 *Rte_Pim_APASmotngHwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmTqArbnApaEnaRate_Val(void)
 *   float32 Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_GmTqArbnEscMaxTq_Val(void)
 *   float32 Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val(void)
 *   boolean Rte_Prm_GmTqArbnApaAssiScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnApaDampgScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnApaRtnScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnLkaSlewEna_Logl(void)
 *   u4p12 *Rte_Prm_GmTqArbnApaDiRateX_Ary1D(void)
 *   u7p9 *Rte_Prm_GmTqArbnApaDiRateY_Ary1D(void)
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngX_Ary1D(void)
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngY_Ary1D(void)
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(void)
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(void)
 *   u8p8 *Rte_Prm_GmTqArbnLkaSlewX_Ary1D(void)
 *   u4p12 *Rte_Prm_GmTqArbnLkaSlewY_Ary1D(void)
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


# define GmTqArbn_START_SEC_CODE
# include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmTqArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmTqArbnInit1 GmTqArbnInit1
FUNC(void, GmTqArbn_CODE) GmTqArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmTqArbnPer1
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
 *   Std_ReturnType Rte_Read_EscCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EscSt_Val(GmTqArbnEscSt1 *data)
 *   Std_ReturnType Rte_Read_HwAgServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwOscnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOscCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaSt_Val(GmTqArbnLkaSt1 *data)
 *   Std_ReturnType Rte_Read_LkaTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqServoCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMaxSecur_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdBasSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_DampgCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_EscCmdArbd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EscLimdActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwTqOvrl_Val(float32 data)
 *   Std_ReturnType Rte_Write_LkaTqCmdCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdOvrl_Val(float32 data)
 *   Std_ReturnType Rte_Write_PullCmpCustLrngDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RtnCmdSca_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmTqArbnPer1 GmTqArbnPer1
FUNC(void, GmTqArbn_CODE) GmTqArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmTqArbn_STOP_SEC_CODE
# include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1486737980
#    error "The magic number of the generated file <C:/component/CF010A_GmTqArbn_Impl/tools/contract/Rte_GmTqArbn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1486737980
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMTQARBN_H */
