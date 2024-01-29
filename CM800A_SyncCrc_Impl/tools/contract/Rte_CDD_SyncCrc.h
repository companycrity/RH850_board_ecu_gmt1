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
 *          File:  Rte_CDD_SyncCrc.h
 *     SW-C Type:  CDD_SyncCrc
 *  Generated at:  Mon Jan 11 19:29:20 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_SyncCrc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_SYNCCRC_H
# define _RTE_CDD_SYNCCRC_H

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

# include "Rte_CDD_SyncCrc_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_SyncCrc
{
  /* PIM Handles section */
  P2VAR(Ary1D_CrcHwStsRec1_4, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CrcHwSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_SyncCrc, RTE_CONST, RTE_CONST) Rte_Inst_CDD_SyncCrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_SyncCrc, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_Enter_CDD_SyncCrc_SyncCrcExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_CDD_SyncCrc_SyncCrcExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_SyncCrcExclusiveArea Rte_Enter_CDD_SyncCrc_SyncCrcExclusiveArea
# define Rte_Exit_SyncCrcExclusiveArea Rte_Exit_CDD_SyncCrc_SyncCrcExclusiveArea


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_CrcHwSts() (*Rte_Inst_CDD_SyncCrc->Pim_CrcHwSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_CrcHwSts() (Rte_Inst_CDD_SyncCrc->Pim_CrcHwSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   CrcHwStsRec1 *Rte_Pim_CrcHwSts(void)
 *
 *********************************************************************************************************************/


# define CDD_SyncCrc_START_SEC_CODE
# include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc16BitCrc_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc16BitCrc_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc16BitCrc_u08_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, uint16 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc16BitCrc_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Calc16BitCrc_u08_Oper Calc16BitCrc_u08_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc16BitCrc_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc16BitCrc_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc16BitCrc_u16_Oper(uint16 *DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, uint16 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc16BitCrc_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Calc16BitCrc_u16_Oper Calc16BitCrc_u16_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u16_Oper(P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc32BitCrc_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc32BitCrc_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc32BitCrc_u08_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc32BitCrc_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Calc32BitCrc_u08_Oper Calc32BitCrc_u08_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc32BitCrc_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc32BitCrc_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc32BitCrc_u16_Oper(uint16 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc32BitCrc_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Calc32BitCrc_u16_Oper Calc32BitCrc_u16_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u16_Oper(P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc32BitCrc_u32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc32BitCrc_u32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Calc32BitCrc_u32_Oper Calc32BitCrc_u32_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u32_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc8BitCrc0X2F_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc8BitCrc0X2F>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc8BitCrc0X2F_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, uint8 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc8BitCrc_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Calc8BitCrc0X2F_Oper Calc8BitCrc0X2F_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc0X2F_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc8BitCrc_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc8BitCrc>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc8BitCrc_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, uint8 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc8BitCrc_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Calc8BitCrc_Oper Calc8BitCrc_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ResvCrcHwUnit_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ResvCrcHwUnit>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 *CrcHwInRegAdr_Arg, uint32 *CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, uint16 *ResvKey_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ResvCrcHwUnit_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ResvCrcHwUnit_Oper ResvCrcHwUnit_Oper
FUNC(Std_ReturnType, CDD_SyncCrc_CODE) ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwInRegAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) ResvKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SyncCrcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SyncCrcInit1 SyncCrcInit1
FUNC(void, CDD_SyncCrc_CODE) SyncCrcInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_SyncCrc_STOP_SEC_CODE
# include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_Calc16BitCrc_u08_PortIf1_E_NOT_OK (1U)

# define RTE_E_Calc16BitCrc_u16_PortIf1_E_NOT_OK (1U)

# define RTE_E_Calc32BitCrc_u08_PortIf1_E_NOT_OK (1U)

# define RTE_E_Calc32BitCrc_u16_PortIf1_E_NOT_OK (1U)

# define RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK (1U)

# define RTE_E_Calc8BitCrc_PortIf1_E_NOT_OK (1U)

# define RTE_E_ResvCrcHwUnit_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1452561408
#    error "The magic number of the generated file <C:/Component/CM800A_SyncCrc_Impl/tools/contract/Rte_CDD_SyncCrc.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1452561408
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_SYNCCRC_H */
