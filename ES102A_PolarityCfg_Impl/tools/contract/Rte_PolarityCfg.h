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
 *          File:  Rte_PolarityCfg.h
 *     SW-C Type:  PolarityCfg
 *  Generated at:  Tue Jun  2 14:35:26 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PolarityCfg> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_POLARITYCFG_H
# define _RTE_POLARITYCFG_H

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

# include "Rte_PolarityCfg_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PolarityCfg
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PolarityCfgSaved; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PolarityCfg, RTE_CONST, RTE_CONST) Rte_Inst_PolarityCfg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PolarityCfg, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiMechPolarity_Val (1)
# define Rte_InitValue_HwAg0Polarity_Val (1)
# define Rte_InitValue_HwAg1Polarity_Val (1)
# define Rte_InitValue_HwAg2Polarity_Val (1)
# define Rte_InitValue_HwAg3Polarity_Val (1)
# define Rte_InitValue_HwAg4Polarity_Val (1)
# define Rte_InitValue_HwAg5Polarity_Val (1)
# define Rte_InitValue_HwAg6Polarity_Val (1)
# define Rte_InitValue_HwAg7Polarity_Val (1)
# define Rte_InitValue_HwTq0Polarity_Val (1)
# define Rte_InitValue_HwTq1Polarity_Val (1)
# define Rte_InitValue_HwTq2Polarity_Val (1)
# define Rte_InitValue_HwTq3Polarity_Val (1)
# define Rte_InitValue_HwTq4Polarity_Val (1)
# define Rte_InitValue_HwTq5Polarity_Val (1)
# define Rte_InitValue_HwTq6Polarity_Val (1)
# define Rte_InitValue_HwTq7Polarity_Val (1)
# define Rte_InitValue_MotAgMecl0Polarity_Val (1)
# define Rte_InitValue_MotAgMecl1Polarity_Val (1)
# define Rte_InitValue_MotAgMecl2Polarity_Val (1)
# define Rte_InitValue_MotAgMecl3Polarity_Val (1)
# define Rte_InitValue_MotAgMecl4Polarity_Val (1)
# define Rte_InitValue_MotAgMecl5Polarity_Val (1)
# define Rte_InitValue_MotAgMecl6Polarity_Val (1)
# define Rte_InitValue_MotAgMecl7Polarity_Val (1)
# define Rte_InitValue_MotElecMeclPolarity_Val (1)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_AssiMechPolarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg0Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg1Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg2Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg3Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg4Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg5Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg6Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwAg7Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq0Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq1Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq2Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq3Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq4Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq5Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq6Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_HwTq7Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl0Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl1Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl2Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl3Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl4Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl5Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl6Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotAgMecl7Polarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PolarityCfg_MotElecMeclPolarity_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PolarityCfg_PolarityCfgSaved_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiMechPolarity_Val Rte_Write_PolarityCfg_AssiMechPolarity_Val
# define Rte_Write_HwAg0Polarity_Val Rte_Write_PolarityCfg_HwAg0Polarity_Val
# define Rte_Write_HwAg1Polarity_Val Rte_Write_PolarityCfg_HwAg1Polarity_Val
# define Rte_Write_HwAg2Polarity_Val Rte_Write_PolarityCfg_HwAg2Polarity_Val
# define Rte_Write_HwAg3Polarity_Val Rte_Write_PolarityCfg_HwAg3Polarity_Val
# define Rte_Write_HwAg4Polarity_Val Rte_Write_PolarityCfg_HwAg4Polarity_Val
# define Rte_Write_HwAg5Polarity_Val Rte_Write_PolarityCfg_HwAg5Polarity_Val
# define Rte_Write_HwAg6Polarity_Val Rte_Write_PolarityCfg_HwAg6Polarity_Val
# define Rte_Write_HwAg7Polarity_Val Rte_Write_PolarityCfg_HwAg7Polarity_Val
# define Rte_Write_HwTq0Polarity_Val Rte_Write_PolarityCfg_HwTq0Polarity_Val
# define Rte_Write_HwTq1Polarity_Val Rte_Write_PolarityCfg_HwTq1Polarity_Val
# define Rte_Write_HwTq2Polarity_Val Rte_Write_PolarityCfg_HwTq2Polarity_Val
# define Rte_Write_HwTq3Polarity_Val Rte_Write_PolarityCfg_HwTq3Polarity_Val
# define Rte_Write_HwTq4Polarity_Val Rte_Write_PolarityCfg_HwTq4Polarity_Val
# define Rte_Write_HwTq5Polarity_Val Rte_Write_PolarityCfg_HwTq5Polarity_Val
# define Rte_Write_HwTq6Polarity_Val Rte_Write_PolarityCfg_HwTq6Polarity_Val
# define Rte_Write_HwTq7Polarity_Val Rte_Write_PolarityCfg_HwTq7Polarity_Val
# define Rte_Write_MotAgMecl0Polarity_Val Rte_Write_PolarityCfg_MotAgMecl0Polarity_Val
# define Rte_Write_MotAgMecl1Polarity_Val Rte_Write_PolarityCfg_MotAgMecl1Polarity_Val
# define Rte_Write_MotAgMecl2Polarity_Val Rte_Write_PolarityCfg_MotAgMecl2Polarity_Val
# define Rte_Write_MotAgMecl3Polarity_Val Rte_Write_PolarityCfg_MotAgMecl3Polarity_Val
# define Rte_Write_MotAgMecl4Polarity_Val Rte_Write_PolarityCfg_MotAgMecl4Polarity_Val
# define Rte_Write_MotAgMecl5Polarity_Val Rte_Write_PolarityCfg_MotAgMecl5Polarity_Val
# define Rte_Write_MotAgMecl6Polarity_Val Rte_Write_PolarityCfg_MotAgMecl6Polarity_Val
# define Rte_Write_MotAgMecl7Polarity_Val Rte_Write_PolarityCfg_MotAgMecl7Polarity_Val
# define Rte_Write_MotElecMeclPolarity_Val Rte_Write_PolarityCfg_MotElecMeclPolarity_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PolarityCfgSaved_SetRamBlockStatus Rte_Call_PolarityCfg_PolarityCfgSaved_SetRamBlockStatus


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PolarityCfgSaved() (Rte_Inst_PolarityCfg->Pim_PolarityCfgSaved) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_PolarityCfgSaved(void)
 *
 *********************************************************************************************************************/


# define PolarityCfg_START_SEC_CODE
# include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechPolarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotElecMeclPolarity_Val(sint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PolarityCfgInit1 PolarityCfgInit1
FUNC(void, PolarityCfg_CODE) PolarityCfgInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PolarityCfgRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PolarityCfgRead_Oper(uint32 *PolarityCfgSaved)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PolarityCfgRead1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PolarityCfgRead_Oper PolarityCfgRead_Oper
FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgRead_Oper(P2VAR(uint32, AUTOMATIC, RTE_POLARITYCFG_APPL_VAR) PolarityCfgSaved); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PolarityCfgWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PolarityCfgSaved_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PolarityCfgWr_Oper(uint32 PolarityCfgSaved)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PolarityCfgWr1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PolarityCfgWr_Oper PolarityCfgWr_Oper
FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgWr_Oper(uint32 PolarityCfgSaved); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PolarityCfg_STOP_SEC_CODE
# include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_PolarityCfgRead1_E_NOT_OK (1U)

# define RTE_E_PolarityCfgWr1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1433264379
#    error "The magic number of the generated file <C:/component/ES102A_PolarityCfg_Impl/tools/contract/Rte_PolarityCfg.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1433264379
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_POLARITYCFG_H */
