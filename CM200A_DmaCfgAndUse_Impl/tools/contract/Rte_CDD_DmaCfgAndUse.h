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
 *          File:  Rte_CDD_DmaCfgAndUse.h
 *     SW-C Type:  CDD_DmaCfgAndUse
 *  Generated at:  Fri Jun 10 09:23:55 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_DmaCfgAndUse> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_DMACFGANDUSE_H
# define _RTE_CDD_DMACFGANDUSE_H

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

# include "Rte_CDD_DmaCfgAndUse_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_DmaCfgAndUse
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DmaCfgAndUse2MilliSecAdcStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0ReadPtrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg0TrsmStrt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg1ReadPtrRst; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg1TrsmStrt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_d2MilliSecAdcActDmaTrfTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_d2MilliSecAdcMaxDmaTrfTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_DmaCfgAndUse, RTE_CONST, RTE_CONST) Rte_Inst_CDD_DmaCfgAndUse; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_DmaCfgAndUse, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_Adc1CfgAndUseAdc1EnaCnvn_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_DMACFGANDUSE_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_DMACFGANDUSE_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper Rte_Call_CDD_DmaCfgAndUse_Adc1CfgAndUseAdc1EnaCnvn_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_CDD_DmaCfgAndUse_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_CDD_DmaCfgAndUse_GetTiSpan1MicroSec32bit_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi() (Rte_Inst_CDD_DmaCfgAndUse->Pim_DmaCfgAndUse2MilliSecAdcStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0ReadPtrRst() (Rte_Inst_CDD_DmaCfgAndUse->Pim_MotAg0ReadPtrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg0TrsmStrt() (Rte_Inst_CDD_DmaCfgAndUse->Pim_MotAg0TrsmStrt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg1ReadPtrRst() (Rte_Inst_CDD_DmaCfgAndUse->Pim_MotAg1ReadPtrRst) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg1TrsmStrt() (Rte_Inst_CDD_DmaCfgAndUse->Pim_MotAg1TrsmStrt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_d2MilliSecAdcActDmaTrfTi() (Rte_Inst_CDD_DmaCfgAndUse->Pim_d2MilliSecAdcActDmaTrfTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_d2MilliSecAdcMaxDmaTrfTi() (Rte_Inst_CDD_DmaCfgAndUse->Pim_d2MilliSecAdcMaxDmaTrfTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi(void)
 *   uint32 *Rte_Pim_MotAg0ReadPtrRst(void)
 *   uint32 *Rte_Pim_MotAg0TrsmStrt(void)
 *   uint32 *Rte_Pim_MotAg1ReadPtrRst(void)
 *   uint32 *Rte_Pim_MotAg1TrsmStrt(void)
 *   uint32 *Rte_Pim_d2MilliSecAdcActDmaTrfTi(void)
 *   uint32 *Rte_Pim_d2MilliSecAdcMaxDmaTrfTi(void)
 *
 *********************************************************************************************************************/


# define CDD_DmaCfgAndUse_START_SEC_CODE
# include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaCfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DmaCfgAndUseInit1 DmaCfgAndUseInit1
FUNC(void, CDD_DmaCfgAndUse_CODE) DmaCfgAndUseInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaCfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DmaCfgAndUsePer1 DmaCfgAndUsePer1
FUNC(void, CDD_DmaCfgAndUse_CODE) DmaCfgAndUsePer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaEna2MilliSecToMotCtrlTrf_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DmaEna2MilliSecToMotCtrlTrf>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DmaEna2MilliSecToMotCtrlTrf_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DmaEna2MilliSecToMotCtrlTrf_Oper DmaEna2MilliSecToMotCtrlTrf_Oper
FUNC(void, CDD_DmaCfgAndUse_CODE) DmaEna2MilliSecToMotCtrlTrf_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaWaitForMotCtrlTo2MilliSecTrf_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DmaWaitForMotCtrlTo2MilliSecTrf>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DmaWaitForMotCtrlTo2MilliSecTrf_Oper DmaWaitForMotCtrlTo2MilliSecTrf_Oper
FUNC(Std_ReturnType, CDD_DmaCfgAndUse_CODE) DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_DmaCfgAndUse_STOP_SEC_CODE
# include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1465556318
#    error "The magic number of the generated file <C:/Component/CM200A_DmaCfgAndUse_Impl/tools/contract/Rte_CDD_DmaCfgAndUse.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1465556318
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_DMACFGANDUSE_H */
