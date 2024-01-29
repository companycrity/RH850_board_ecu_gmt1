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
 *          File:  Rte_GmMsg184BusHiSpd.h
 *     SW-C Type:  GmMsg184BusHiSpd
 *  Generated at:  Fri Dec  9 10:10:12 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg184BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG184BUSHISPD_H
# define _RTE_GMMSG184BUSHISPD_H

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

# include "Rte_GmMsg184BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg184BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg184BusHiSpdRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg184BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg184BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg184BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HandsOffSteerWhlDetnMod_Val (0U)
# define Rte_InitValue_HandsOffSteerWhlDetnSt_Val (0U)
# define Rte_InitValue_HandsOffSteerWhlDetnStVld_Val (0U)
# define Rte_InitValue_HowDetnFlg_Logl (TRUE)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqIdptSig_Val (4U)
# define Rte_InitValue_LkaDrvrAppldTq_Val (0U)
# define Rte_InitValue_LkaDrvrAppldTqVld_Val (0U)
# define Rte_InitValue_LkaElecPwrSteerTotTqDlvd_Val (0U)
# define Rte_InitValue_LkaSt_Val (0U)
# define Rte_InitValue_LkaTqDlvd_Val (0.0F)
# define Rte_InitValue_LkaTqOvrlDeltaTqDlvd_Val (0U)
# define Rte_InitValue_LkaTqOvrlDlvdRollgCntr_Val (0U)
# define Rte_InitValue_LkaTqOvrlStsChks_Val (0U)
# define Rte_InitValue_LkaTqOvrlTqDlvdSts_Val (0U)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg184BusHiSpd_HowDetnFlg_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG184BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg184BusHiSpd_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG184BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg184BusHiSpd_HwTqIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG184BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg184BusHiSpd_LkaSt_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG184BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg184BusHiSpd_LkaTqDlvd_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG184BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg184BusHiSpd_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG184BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_GmMsg184BusHiSpd_LoaMgrHwTqIdptSigFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(sint8, RTE_CODE) Rte_Prm_GmMsg184BusHiSpd_GmMsg184BusHiSpdTqPolarity_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_GmMsg184BusHiSpd_GmOvrlStMgrLkaMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HowDetnFlg_Logl Rte_Read_GmMsg184BusHiSpd_HowDetnFlg_Logl
# define Rte_Read_HwTq_Val Rte_Read_GmMsg184BusHiSpd_HwTq_Val
# define Rte_Read_HwTqIdptSig_Val Rte_Read_GmMsg184BusHiSpd_HwTqIdptSig_Val
# define Rte_Read_LkaSt_Val Rte_Read_GmMsg184BusHiSpd_LkaSt_Val
# define Rte_Read_LkaTqDlvd_Val Rte_Read_GmMsg184BusHiSpd_LkaTqDlvd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_GmMsg184BusHiSpd_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HandsOffSteerWhlDetnMod_Val Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val
# define Rte_Write_HandsOffSteerWhlDetnSt_Val Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val
# define Rte_Write_HandsOffSteerWhlDetnStVld_Val Rte_Write_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val
# define Rte_Write_LkaDrvrAppldTq_Val Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val
# define Rte_Write_LkaDrvrAppldTqVld_Val Rte_Write_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val
# define Rte_Write_LkaElecPwrSteerTotTqDlvd_Val Rte_Write_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val
# define Rte_Write_LkaTqOvrlDeltaTqDlvd_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val
# define Rte_Write_LkaTqOvrlDlvdRollgCntr_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val
# define Rte_Write_LkaTqOvrlStsChks_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val
# define Rte_Write_LkaTqOvrlTqDlvdSts_Val Rte_Write_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val Rte_Prm_GmMsg184BusHiSpd_LoaMgrHwTqIdptSigFltThd_Val

# define Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val Rte_Prm_GmMsg184BusHiSpd_GmMsg184BusHiSpdTqPolarity_Val

# define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl Rte_Prm_GmMsg184BusHiSpd_GmOvrlStMgrLkaMfgEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg184BusHiSpdRollgCntr() (Rte_Inst_GmMsg184BusHiSpd->Pim_GmMsg184BusHiSpdRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_GmMsg184BusHiSpdRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *   sint8 Rte_Prm_GmMsg184BusHiSpdTqPolarity_Val(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *
 *********************************************************************************************************************/


# define GmMsg184BusHiSpd_START_SEC_CODE
# include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg184BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_HowDetnFlg_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaTqDlvd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnMod_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HandsOffSteerWhlDetnStVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaDrvrAppldTq_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaDrvrAppldTqVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaElecPwrSteerTotTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlDeltaTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlDlvdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlStsChks_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaTqOvrlTqDlvdSts_Val(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg184BusHiSpdPer1 GmMsg184BusHiSpdPer1
FUNC(void, GmMsg184BusHiSpd_CODE) GmMsg184BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MsgTxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MsgTxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MsgTxCallBack_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MsgTxCallBack_Oper MsgTxCallBack_Oper
FUNC(void, GmMsg184BusHiSpd_CODE) MsgTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg184BusHiSpd_STOP_SEC_CODE
# include "GmMsg184BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481294747
#    error "The magic number of the generated file <C:/Hari/Work/SynergyProjects/EA4/MM502A_GmMsg184BusHiSpd_Impl/tools/contract/Rte_GmMsg184BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481294747
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG184BUSHISPD_H */
