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
 *          File:  Rte_CDD_Tauj1CfgAndUse.h
 *     SW-C Type:  CDD_Tauj1CfgAndUse
 *  Generated at:  Tue Aug 11 13:22:48 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_Tauj1CfgAndUse> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_TAUJ1CFGANDUSE_H
# define _RTE_CDD_TAUJ1CFGANDUSE_H

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

# include "Rte_CDD_Tauj1CfgAndUse_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_Tauj1CfgAndUse
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiCntrDPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiCntrEPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiCntrFPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_Tauj1CfgAndUse, RTE_CONST, RTE_CONST) Rte_Inst_CDD_Tauj1CfgAndUse; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_Tauj1CfgAndUse, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PhaOnTiMeasdD_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdE_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdF_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PhaOnTiMeasdD_Val Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdD_Val
# define Rte_Write_PhaOnTiMeasdE_Val Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdE_Val
# define Rte_Write_PhaOnTiMeasdF_Val Rte_Write_CDD_Tauj1CfgAndUse_PhaOnTiMeasdF_Val


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PhaOnTiCntrDPrev() (Rte_Inst_CDD_Tauj1CfgAndUse->Pim_PhaOnTiCntrDPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiCntrEPrev() (Rte_Inst_CDD_Tauj1CfgAndUse->Pim_PhaOnTiCntrEPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiCntrFPrev() (Rte_Inst_CDD_Tauj1CfgAndUse->Pim_PhaOnTiCntrFPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_PhaOnTiCntrDPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrEPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrFPrev(void)
 *
 *********************************************************************************************************************/


# define CDD_Tauj1CfgAndUse_START_SEC_CODE
# include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Tauj1CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Tauj1CfgAndUseInit1 Tauj1CfgAndUseInit1
FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUseInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Tauj1CfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdD_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdE_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdF_Val(uint32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Tauj1CfgAndUsePer1 Tauj1CfgAndUsePer1
FUNC(void, CDD_Tauj1CfgAndUse_CODE) Tauj1CfgAndUsePer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_Tauj1CfgAndUse_STOP_SEC_CODE
# include "CDD_Tauj1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1439305686
#    error "The magic number of the generated file <C:/component/CM460A_Tauj1CfgAndUse_Impl/tools/contract/Rte_CDD_Tauj1CfgAndUse.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1439305686
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_TAUJ1CFGANDUSE_H */
