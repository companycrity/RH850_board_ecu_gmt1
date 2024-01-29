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
 *          File:  Rte_GmMsg335BusChassisExp.h
 *     SW-C Type:  GmMsg335BusChassisExp
 *  Generated at:  Tue Aug 30 12:50:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg335BusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG335BUSCHASSISEXP_H
# define _RTE_GMMSG335BUSCHASSISEXP_H

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

# include "Rte_GmMsg335BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg335BusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg335BusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg335BusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg335BusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg335BusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ApaDrvrIntvDetd_Logl (FALSE)
# define Rte_InitValue_ApaSt_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetd_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetdProtnVal_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetdRollgCntr_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetdVld_Val (0U)
# define Rte_InitValue_ElecPowerSteerAvlSts_Val (0U)
# define Rte_InitValue_ElecPowerSteerAvlStsProtnVal_Val (0U)
# define Rte_InitValue_ElecPowerSteerAvlStsRollgCntr_Val (0U)
# define Rte_InitValue_HwTqIdptSig_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg335BusChassisExp_ApaDrvrIntvDetd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG335BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg335BusChassisExp_ApaSt_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG335BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg335BusChassisExp_HwTqIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG335BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_GmMsg335BusChassisExp_LoaMgrHwTqIdptSigFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ApaDrvrIntvDetd_Logl Rte_Read_GmMsg335BusChassisExp_ApaDrvrIntvDetd_Logl
# define Rte_Read_ApaSt_Val Rte_Read_GmMsg335BusChassisExp_ApaSt_Val
# define Rte_Read_HwTqIdptSig_Val Rte_Read_GmMsg335BusChassisExp_HwTqIdptSig_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_DrvrSteerIntvDetd_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val
# define Rte_Write_DrvrSteerIntvDetdProtnVal_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val
# define Rte_Write_DrvrSteerIntvDetdRollgCntr_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val
# define Rte_Write_DrvrSteerIntvDetdVld_Val Rte_Write_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val
# define Rte_Write_ElecPowerSteerAvlSts_Val Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val
# define Rte_Write_ElecPowerSteerAvlStsProtnVal_Val Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val
# define Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val Rte_Write_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val Rte_Prm_GmMsg335BusChassisExp_LoaMgrHwTqIdptSigFltThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg335BusChassisExpRollgCntr() (Rte_Inst_GmMsg335BusChassisExp->Pim_GmMsg335BusChassisExpRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_GmMsg335BusChassisExpRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg335BusChassisExp_START_SEC_CODE
# include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg335BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_ApaDrvrIntvDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ApaSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdProtnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DrvrSteerIntvDetdVld_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlStsProtnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ElecPowerSteerAvlStsRollgCntr_Val(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg335BusChassisExpPer1 GmMsg335BusChassisExpPer1
FUNC(void, GmMsg335BusChassisExp_CODE) GmMsg335BusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Msg335TxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg335TxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg335TxCallBack_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Msg335TxCallBack_Oper Msg335TxCallBack_Oper
FUNC(void, GmMsg335BusChassisExp_CODE) Msg335TxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg335BusChassisExp_STOP_SEC_CODE
# include "GmMsg335BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1472574612
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Sandbox/MM507A_GmMsg335BusChassisExp_Impl/tools/contract/Rte_GmMsg335BusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1472574612
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG335BUSCHASSISEXP_H */
