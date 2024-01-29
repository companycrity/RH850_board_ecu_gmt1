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
 *          File:  Rte_CDD_VrfyCritReg.h
 *     SW-C Type:  CDD_VrfyCritReg
 *  Generated at:  Mon Apr 25 10:49:17 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_VrfyCritReg> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_VRFYCRITREG_H
# define _RTE_CDD_VRFYCRITREG_H

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

# include "Rte_CDD_VrfyCritReg_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_VrfyCritReg
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegSysCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegSysCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegSysCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_VrfyCritReg, RTE_CONST, RTE_CONST) Rte_Inst_CDD_VrfyCritReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_VrfyCritReg, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_VrfyCritReg_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_VrfyCritReg_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dVrfyCritRegCritRegActVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegCritRegActVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegCritRegAdr() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegCritRegAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegCritRegDesVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegCritRegDesVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegSysCritRegActVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegSysCritRegActVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegSysCritRegAdr() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegSysCritRegAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegSysCritRegDesVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegSysCritRegDesVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_dVrfyCritRegCritRegActVal(void)
 *   uint32 *Rte_Pim_dVrfyCritRegCritRegAdr(void)
 *   uint32 *Rte_Pim_dVrfyCritRegCritRegDesVal(void)
 *   uint32 *Rte_Pim_dVrfyCritRegSysCritRegActVal(void)
 *   uint32 *Rte_Pim_dVrfyCritRegSysCritRegAdr(void)
 *   uint32 *Rte_Pim_dVrfyCritRegSysCritRegDesVal(void)
 *
 *********************************************************************************************************************/


# define CDD_VrfyCritReg_START_SEC_CODE
# include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: VrfyCritRegInit1
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VrfyCritRegInit1 VrfyCritRegInit1
FUNC(void, CDD_VrfyCritReg_CODE) VrfyCritRegInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VrfyCritRegPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VrfyCritRegPer1 VrfyCritRegPer1
FUNC(void, CDD_VrfyCritReg_CODE) VrfyCritRegPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_VrfyCritReg_STOP_SEC_CODE
# include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1461591878
#    error "The magic number of the generated file <C:/Component/CM111A_VrfyCritReg_Impl/tools/contract/generate/RteGen/Rte_CDD_VrfyCritReg.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461591878
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_VRFYCRITREG_H */
