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
 *          File:  Rte_GmMsg1CABusChassisExp.h
 *     SW-C Type:  GmMsg1CABusChassisExp
 *  Generated at:  Tue Aug 30 11:54:22 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1CABusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1CABUSCHASSISEXP_H
# define _RTE_GMMSG1CABUSCHASSISEXP_H

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

# include "Rte_GmMsg1CABusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg1CABusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1CABusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg1CABusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg1CABusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg1CABusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ElecPwrSteerTotTqDlvd_Val (0U)
# define Rte_InitValue_EscSt_Val (0U)
# define Rte_InitValue_EscTqDlvd_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_TqOvrlDeltaTqDlvd_Val (0U)
# define Rte_InitValue_TqOvrlDlvdChks_Val (0U)
# define Rte_InitValue_TqOvrlDlvdRollgCntr_Val (0U)
# define Rte_InitValue_TqOvrlTqDlvdSts_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1CABusChassisExp_EscSt_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG1CABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1CABusChassisExp_EscTqDlvd_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG1CABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1CABusChassisExp_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG1CABUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(sint8, RTE_CODE) Rte_Prm_GmMsg1CABusChassisExp_GmMsg1CaBusChassisExpTqPolarity_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EscSt_Val Rte_Read_GmMsg1CABusChassisExp_EscSt_Val
# define Rte_Read_EscTqDlvd_Val Rte_Read_GmMsg1CABusChassisExp_EscTqDlvd_Val
# define Rte_Read_HwTq_Val Rte_Read_GmMsg1CABusChassisExp_HwTq_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ElecPwrSteerTotTqDlvd_Val Rte_Write_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val
# define Rte_Write_TqOvrlDeltaTqDlvd_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val
# define Rte_Write_TqOvrlDlvdChks_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val
# define Rte_Write_TqOvrlDlvdRollgCntr_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val
# define Rte_Write_TqOvrlTqDlvdSts_Val Rte_Write_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val Rte_Prm_GmMsg1CABusChassisExp_GmMsg1CaBusChassisExpTqPolarity_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg1CABusChassisExpRollgCntr() (Rte_Inst_GmMsg1CABusChassisExp->Pim_GmMsg1CABusChassisExpRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_GmMsg1CABusChassisExpRollgCntr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   sint8 Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg1CABusChassisExp_START_SEC_CODE
# include "GmMsg1CABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1CABusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_EscSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EscTqDlvd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ElecPwrSteerTotTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDeltaTqDlvd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDlvdChks_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDlvdRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlTqDlvdSts_Val(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg1CABusChassisExpPer1 GmMsg1CABusChassisExpPer1
FUNC(void, GmMsg1CABusChassisExp_CODE) GmMsg1CABusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Msg1CATxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg1CATxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg1CATxCallBack_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Msg1CATxCallBack_Oper Msg1CATxCallBack_Oper
FUNC(void, GmMsg1CABusChassisExp_CODE) Msg1CATxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg1CABusChassisExp_STOP_SEC_CODE
# include "GmMsg1CABusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1472564849
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Sandbox/MM505A_GmMsg1CABusChassisExp_Impl/tools/contract/Rte_GmMsg1CABusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1472564849
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG1CABUSCHASSISEXP_H */
