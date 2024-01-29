/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_SyncCrc.c
 *     SW-C Type:  CDD_SyncCrc
 *  Generated at:  Mon Jan 11 19:29:21 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_SyncCrc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrc.c
* Module Description: Source file for CM800A Sync CRC.
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       cz7lt6 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 10/07/15  1       KJS     Initial version                                                                 EA4#1844
* 01/12/16  2       KJS     Updates for EA4 design processes and additional features to meet FDD Rev1       EA4#5405
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  CrcHwResvCfg1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  CrcHwResvMod1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  CrcHwSts1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_CDD_SyncCrc.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "CDD_SyncCrc_Cfg_private.h"
#include "CDD_SyncCrc_private.h"
#include "NxtrDet.h"
#include "Os.h"
#include "dcra_regs.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.1]: Cast of a register address to an integer type is required for writing a 
                                            register address to a register. */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.4]: Cast of a variable pointer to void, to a pointer of a structure type for 
                                            passing parameters to non-trusted functions. */
/* MISRA-C:2004 Rule 16.7 [NXTRDEV 16.7.1]: Const is not used due to limitation of function arguments generated by Developer. */
/* MISRA-C:2004 Rule 17.4 [NXTRDEV 17.4.1]: CRC must access memory as an array of whatever data access size is required. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


/********************************************* Embedded Local Constants **********************************************/
#define CRCININVAL8BIT_CNT_U08      0xFFU
#define CRCININVAL16BIT_CNT_U16     0xFFFFU
#define CRCININVAL32BIT_CNT_U32     0xFFFFFFFFU
#define CRCERRVAL_CNT_U08           0U
#define CRCHWRESVCFGRNG_CNT_U08     7U

/******************************************** Module Specific Variables **********************************************/
static CONST(uint16, AUTOMATIC) CRCRESVID_CNT_U16[NROFCRCHWUNIT_CNT_U08] = {0xFFFEU, 0xFFFDU, 0xFFFCU, 0xFFFBU};

/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, CDD_SyncCrc_CODE) RelsCrcHwUnit(uint8 CrcHwIdx_Cnt_T_u08);
static FUNC(void, CDD_SyncCrc_CODE) GetAvlCrcHwUnit(boolean ResvCrcCall_Arg);
static FUNC(void, CDD_SyncCrc_CODE) CrcRegCfg( uint8 CrcHwIdx_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 StrtVal_Arg );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * CrcHwResvCfg1: Enumeration of integer in interval [0...255] with enumerators
 *   CRCHWRESVCFG_32BITCRC32BITWIDTH (0U)
 *   CRCHWRESVCFG_32BITCRC16BITWIDTH (1U)
 *   CRCHWRESVCFG_32BITCRC8BITWIDTH (2U)
 *   CRCHWRESVCFG_16BITCRC16BITWIDTH (3U)
 *   CRCHWRESVCFG_16BITCRC8BITWIDTH (4U)
 *   CRCHWRESVCFG_8BITCRC (5U)
 *   CRCHWRESVCFG_8BITCRCH2F (6U)
 * CrcHwResvMod1: Enumeration of integer in interval [0...255] with enumerators
 *   CRCHWRESVMOD_RELS (0U)
 *   CRCHWRESVMOD_RESV (1U)
 * CrcHwSts1: Enumeration of integer in interval [0...255] with enumerators
 *   CRCHWSTS_NOTAVL (0U)
 *   CRCHWSTS_AVL (1U)
 *   CRCHWSTS_BUSY (2U)
 *   CRCHWSTS_NOTENAD (3U)
 *   CRCHWSTS_RESV (4U)
 *   CRCHWSTS_IDXINVLD (255U)
 *
 * Array Types:
 * ============
 * Ary1D_CrcHwStsRec1_4: Array with 4 element(s) of type CrcHwStsRec1
 *
 * Record Types:
 * =============
 * CrcHwStsRec1: Record with elements
 *   TaskId of type uint16
 *   CrcHwSts of type CrcHwSts1
 *
 *********************************************************************************************************************/


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


#define CDD_SyncCrc_START_SEC_CODE
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc16BitCrc_u08_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_u08 = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.2.2.1 */

    /* Get the caller's Task ID */
    GetTaskID(&TaskId_Cnt_T_u16);

    /* Reserve CRC HW Unit */
    if( CRCOSREF_CNT_U08 == GetApplicationID() )
    {
        /* Caller is in the same application as this module, call the function directly */
        GetAvlCrcHwUnit(FALSE);
    }
    else
    {
        /* Caller is in a different application as this module, call non-trusted function */
        ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
        CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
    }

    /* Search PIM for the task ID to get the HW unit assigned to this request */
    CrcHwLoopIdx_Cnt_T_u08 = 0U;
    do
    {
        if( TaskId_Cnt_T_u16 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
        {
            CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
            CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        CrcHwLoopIdx_Cnt_T_u08++;
    } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

    if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
    {
        /* Configure HW unit algorithm, access width, and initial start value */
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.POL = (uint8)CRCALG_16BIT;

        if(TRUE == FirstCall_Arg)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = CRCININVAL16BIT_CNT_U16;
        }
        else
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = StrtVal_Arg;
        }

        /* Calculate CRC */
        for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].CIN = DataPtr_Arg[Idx_Cnt_T_u32];
        }

        /* Return calculated CRC value */
        *CalcCrcRes_Arg = (uint16)(DCRA[CrcHwIdx_Cnt_T_u08].COUT);

        /* Release CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
        }
        else
        {
            CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
            CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
        }
    }
    else
    {
        /* CRC HW not available - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_u08 = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 2U, 0U);
        #endif
    }

    return ErrRtn_Cnt_T_u08;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u16_Oper(P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc16BitCrc_u16_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_u08 = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.2.2.2 */
    
    /* Get the caller's Task ID */
    GetTaskID(&TaskId_Cnt_T_u16);

    /* Reserve CRC HW Unit */
    if( CRCOSREF_CNT_U08 == GetApplicationID() )
    {
        /* Caller is in the same application as this module, call the function directly */
        GetAvlCrcHwUnit(FALSE);
    }
    else
    {
        /* Caller is in a different application as this module, call non-trusted function */
        ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
        CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
    }
    
    /* Search PIM for the task ID to get the HW unit assigned to this request */
    CrcHwLoopIdx_Cnt_T_u08 = 0U;
    do
    {
        if( TaskId_Cnt_T_u16 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
        {
            CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
            CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        CrcHwLoopIdx_Cnt_T_u08++;
    } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

    if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
    {
        /* Configure HW unit algorithm, access width, and initial start value */
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.POL = (uint8)CRCALG_16BIT;

        if(TRUE == FirstCall_Arg)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = CRCININVAL16BIT_CNT_U16;
        }
        else
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = StrtVal_Arg;
        }

        /* Calculate CRC */
        for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].CIN = DataPtr_Arg[Idx_Cnt_T_u32];
        }

        /* Return calculated CRC value */
        *CalcCrcRes_Arg = (uint16)(DCRA[CrcHwIdx_Cnt_T_u08].COUT);

        /* Release CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
        }
        else
        {
            CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
            CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
        }
    }
    else
    {
        /* CRC HW not available - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_u08 = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 1U, 0U);
        #endif
    }

    return ErrRtn_Cnt_T_u08;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u08_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_u08 = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.1.2.1 */

    /* Get the caller's Task ID */
    GetTaskID(&TaskId_Cnt_T_u16);

    /* Reserve CRC HW Unit */
    if( CRCOSREF_CNT_U08 == GetApplicationID() )
    {
        /* Caller is in the same application as this module, call the function directly */
        GetAvlCrcHwUnit(FALSE);
    }
    else
    {
        /* Caller is in a different application as this module, call non-trusted function */
        ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
        CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
    }
    
    /* Search PIM for the task ID to get the HW unit assigned to this request */
    CrcHwLoopIdx_Cnt_T_u08 = 0U;
    do
    {
        if( TaskId_Cnt_T_u16 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
        {
            CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
            CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        CrcHwLoopIdx_Cnt_T_u08++;
    } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

    if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
    {
        /* Configure HW unit algorithm, access width, and initial start value */
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.POL = (uint8)CRCALG_32BITETH;

        if(TRUE == FirstCall_Arg)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = CRCININVAL32BIT_CNT_U32;
        }
        else
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = StrtVal_Arg;
        }

        for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].CIN = DataPtr_Arg[Idx_Cnt_T_u32];
        }

        /* Return calculated CRC value */
        *CalcCrcRes_Arg = (uint32)(DCRA[CrcHwIdx_Cnt_T_u08].COUT);

        /* Release CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
        }
        else
        {
            CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
            CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
        }
    }
    else
    {
        /* CRC HW not available - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_u08 = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 5U, 0U);
        #endif
    }

    return ErrRtn_Cnt_T_u08;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u16_Oper(P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u16_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_u08 = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.1.2.2 */
    
    /* Get the caller's Task ID */
    GetTaskID(&TaskId_Cnt_T_u16);

    /* Reserve CRC HW Unit */
    if( CRCOSREF_CNT_U08 == GetApplicationID() )
    {
        /* Caller is in the same application as this module, call the function directly */
        GetAvlCrcHwUnit(FALSE);
    }
    else
    {
        /* Caller is in a different application as this module, call non-trusted function */
        ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
        CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
    }

    /* Search PIM for the task ID to get the HW unit assigned to this request */
    CrcHwLoopIdx_Cnt_T_u08 = 0U;
    do
    {
        if( TaskId_Cnt_T_u16 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
        {
            CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
            CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        CrcHwLoopIdx_Cnt_T_u08++;
    } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

    if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
    {
        /* Configure HW unit algorithm, access width, and initial start value */
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.POL = (uint8)CRCALG_32BITETH;

        if(TRUE == FirstCall_Arg)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = CRCININVAL32BIT_CNT_U32;
        }
        else
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = StrtVal_Arg;
        }

        /* Calculate CRC */
        for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].CIN = DataPtr_Arg[Idx_Cnt_T_u32];
        }

        /* Return calculated CRC value */
        *CalcCrcRes_Arg = (uint32)(DCRA[CrcHwIdx_Cnt_T_u08].COUT);

        /* Release CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
        }
        else
        {
            CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
            CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
        }
    }
    else
    {
        /* CRC HW not available - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_u08 = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 3U, 0U);
        #endif
    }

    return ErrRtn_Cnt_T_u08;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u32_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u32_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_u08 = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.1.2.3 */

    /* Get the caller's Task ID */
    GetTaskID(&TaskId_Cnt_T_u16);

    /* Reserve CRC HW Unit */
    if( CRCOSREF_CNT_U08 == GetApplicationID() )
    {
        /* Caller is in the same application as this module, call the function directly */
        GetAvlCrcHwUnit(FALSE);
    }
    else
    {
        /* Caller is in a different application as this module, call non-trusted function */
        ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
        CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
    }

    /* Search PIM for the task ID to get the HW unit assigned to this request */
    CrcHwLoopIdx_Cnt_T_u08 = 0U;
    do
    {
        if( TaskId_Cnt_T_u16 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
        {
            CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
            CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        CrcHwLoopIdx_Cnt_T_u08++;
    } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

    if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
    {
        /* Configure HW unit algorithm, access width, and initial start value */
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_32BIT;
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.POL = (uint8)CRCALG_32BITETH;

        if(TRUE == FirstCall_Arg)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = CRCININVAL32BIT_CNT_U32;
        }
        else
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = StrtVal_Arg;
        }

        /* Calculate CRC */
        for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].CIN = DataPtr_Arg[Idx_Cnt_T_u32];
        }

        /* Return calculated CRC value */
        *CalcCrcRes_Arg = (uint32)(DCRA[CrcHwIdx_Cnt_T_u08].COUT);

        /* Release CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
        }
        else
        {
            CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
            CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
        }
    }
    else
    {
        /* CRC HW not available - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_u08 = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 4U, 0U);
        #endif
    }

    return ErrRtn_Cnt_T_u08;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc0X2F_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc8BitCrc0X2F_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_u08 = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.4.2.1 */

    /* Get the caller's Task ID */
    GetTaskID(&TaskId_Cnt_T_u16);

    /* Reserve CRC HW Unit */
    if( CRCOSREF_CNT_U08 == GetApplicationID() )
    {
        /* Caller is in the same application as this module, call the function directly */
        GetAvlCrcHwUnit(FALSE);
    }
    else
    {
        /* Caller is in a different application as this module, call non-trusted function */
        ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
        CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
    }

    /* Search PIM for the task ID to get the HW unit assigned to this request */
    CrcHwLoopIdx_Cnt_T_u08 = 0U;
    do
    {
        if( TaskId_Cnt_T_u16 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
        {
            CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
            CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        CrcHwLoopIdx_Cnt_T_u08++;
    } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

    if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
    {
        /* Configure HW unit algorithm, access width, and initial start value */
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.POL = (uint8)CRCALG_8BITH2F;

        if(TRUE == FirstCall_Arg)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = CRCININVAL8BIT_CNT_U08;
        }
        else
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = StrtVal_Arg;
        }

        /* Calculate CRC */
        for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].CIN = DataPtr_Arg[Idx_Cnt_T_u32];
        }

        /* Return calculated CRC value */
        *CalcCrcRes_Arg = (uint8)(DCRA[CrcHwIdx_Cnt_T_u08].COUT);

        /* Release CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
        }
        else
        {
            CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
            CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
        }
    }
    else
    {
        /* CRC HW not available - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_u08 = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 6U, 0U);
        #endif
    }

    return ErrRtn_Cnt_T_u08;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc8BitCrc_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_u08 = E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.3.2.1 */

    /* Get the caller's Task ID */
    GetTaskID(&TaskId_Cnt_T_u16);

    /* Reserve CRC HW Unit */
    if( CRCOSREF_CNT_U08 == GetApplicationID() )
    {
        /* Caller is in the same application as this module, call the function directly */
        GetAvlCrcHwUnit(FALSE);
    }
    else
    {
        /* Caller is in a different application as this module, call non-trusted function */
        ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
        CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
    }

    /* Search PIM for the task ID to get the HW unit assigned to this request */
    CrcHwLoopIdx_Cnt_T_u08 = 0U;
    do
    {
        if( TaskId_Cnt_T_u16 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
        {
            CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
            CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        CrcHwLoopIdx_Cnt_T_u08++;
    } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

    if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
    {
        /* Configure HW unit algorithm, access width, and initial start value */
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
        DCRA[CrcHwIdx_Cnt_T_u08].CTL.BIT.POL = (uint8)CRCALG_8BIT;

        if(TRUE == FirstCall_Arg)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = CRCININVAL8BIT_CNT_U08;
        }
        else
        {
            DCRA[CrcHwIdx_Cnt_T_u08].COUT = StrtVal_Arg;
        }

        /* Calculate CRC */
        for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
        {
            DCRA[CrcHwIdx_Cnt_T_u08].CIN = DataPtr_Arg[Idx_Cnt_T_u32];
        }

        /* Return calculated CRC value */
        *CalcCrcRes_Arg = (uint8)(DCRA[CrcHwIdx_Cnt_T_u08].COUT);
        
        /* Release CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
        }
        else
        {
            CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
            CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
        }
    }
    else
    {
        /* CRC HW not available - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_u08 = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 7U, 0U);
        #endif
    }

    return ErrRtn_Cnt_T_u08;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwInRegAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) ResvKey_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ResvCrcHwUnit_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) Rtn_Cnt_T_u08 = E_NOT_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = 0U;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08 = 0U;
    VAR(boolean, AUTOMATIC) CrcResvd_Cnt_T_logl = FALSE;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    
    /* REQ: CM800A #48 I */ /* REQ: CM800A #67 I */ /* REQ: CM800A #68 I */ /* REQ: CM800A #70 I : FDD sections 5.1.5 */
    if ( ( Mod_Arg == CRCHWRESVMOD_RESV ) && ( CrcCfg_Arg < CRCHWRESVCFGRNG_CNT_U08 ) )
    {
        do
        {
            if (CRCHWSTS_AVL == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].CrcHwSts)
            {
                if( CRCOSREF_CNT_U08 == GetApplicationID() )
                {
                    GetAvlCrcHwUnit(TRUE);
                }
                else
                {
                    ResvCallPrm_Cnt_T_str.ResvCall = TRUE;
                    CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
                }
                *ResvKey_Arg = CRCRESVID_CNT_U16[CrcHwLoopIdx_Cnt_T_u08];
                CrcResvd_Cnt_T_logl = TRUE;
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08; /* Setting the loop index to the limit to 'break' the loop */
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );
        
        if ( TRUE == CrcResvd_Cnt_T_logl )
        {
            CrcRegCfg(CrcHwIdx_Cnt_T_u08, CrcCfg_Arg, StrtVal_Arg);
            
            /* Return addresses of selected input and output registers */
            *CrcHwInRegAdr_Arg = (uint32)(&(DCRA[CrcHwIdx_Cnt_T_u08].CIN));
            *CrcHwOutRegAdr_Arg = (uint32)(&(DCRA[CrcHwIdx_Cnt_T_u08].COUT));
            
            Rtn_Cnt_T_u08 = E_OK;
        }
        else
        {
            /* Set outputs to known values due to an error */
            *CrcHwInRegAdr_Arg = 0U;
            *CrcHwOutRegAdr_Arg = 0U;
            *ResvKey_Arg = 0U;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 0U, 0U);
            #endif
        }
    }
    else if(Mod_Arg == CRCHWRESVMOD_RELS)
    {
        do
        {
            if ( ( CRCHWSTS_RESV == Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].CrcHwSts ) && 
                 ( *ResvKey_Arg == Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].TaskId ) )
            {
                if( CRCOSREF_CNT_U08 == GetApplicationID() )
                {
                    RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
                }
                else
                {
                    CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                    CallNonTrustedFunction((NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
                }
                CrcHwIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
                Rtn_Cnt_T_u08 = E_OK;
            }
            
            CrcHwIdx_Cnt_T_u08++;
        } while ( CrcHwIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );
        
        if(Rtn_Cnt_T_u08 == E_NOT_OK)
        {
            /* Set outputs to known values in case of an error */
            *CrcHwInRegAdr_Arg = 0U;
            *CrcHwOutRegAdr_Arg = 0U;
            *ResvKey_Arg = 0U;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 0U, 1U);
            #endif
        }
    }
    else
    {
        /* Do nothing, invalid option */
        Rtn_Cnt_T_u08 = E_NOT_OK;
       
        /* Set outputs to known values in case of an error */
        *CrcHwInRegAdr_Arg = 0U;
        *CrcHwOutRegAdr_Arg = 0U;
        *ResvKey_Arg = 0U;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 0U, 2U);
        #endif
    }
    /* ENDREQ: CM800A #48 I */ /* ENDREQ: CM800A #67 I */ /* ENDREQ: CM800A #68 I */ 
    /* ENDREQ: CM800A #70 I */

    return Rtn_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SyncCrcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, CDD_SyncCrc_CODE) SyncCrcInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SyncCrcInit1
 *********************************************************************************************************************/
    /* Stub function for application mapping */
    return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_SyncCrc_STOP_SEC_CODE
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Name:         RelsCrcHwUnit
*
* Description:  This routine releases the given CRC hardware unit and places that Task ID back to invalid.
*
* Inputs:       CrcHwIdx_Cnt_T_u08 - Index of the CRC unit to release
*
* Outputs:      None
*
* Usage Notes:
**********************************************************************************************************************/
static FUNC(void, CDD_SyncCrc_CODE) RelsCrcHwUnit(uint8 CrcHwIdx_Cnt_T_u08)
{
    /* REQ: CM800A #48 I : FDD Section 5.1.2 */
    Rte_Enter_SyncCrcExclusiveArea();
    Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].TaskId = INVLDTASKID_CNT_U16;
    Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].CrcHwSts = CRCHWSTS_AVL;
    Rte_Exit_SyncCrcExclusiveArea();
    /* ENDREQ: CM800A #48 I */

    return;
}

/**********************************************************************************************************************
* Name:         NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit
*
* Description:  Non-trusted handler to call RelsCrcHwUnit from an outside application context
*
* Inputs:       FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*
* Outputs:      None
*
* Usage Notes:  
**********************************************************************************************************************/
FUNC(void, CDD_SyncCrc_CODE) NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit( NonTrustedFunctionIndexType FunctionIndex, 
                                                                       NonTrustedFunctionParameterRefType FunctionParams)
{
    /* REQ: CM800A #48 I : FDD Section 5.1.2 */
    RelsCrcHwUnit(((NtCrcIdxRec*)FunctionParams)->CrcHwIdx);
    /* ENDREQ: CM800A #48 I */
    return;
}

/**********************************************************************************************************************
* Name:         GetAvlCrcHwUnit
*
* Description:  This routine checks for an available CRC hardware unit. If one is found it is reserved and the index
*               is written to Rte_Pim_SyncCrcAvlHwIdx 
*
* Inputs:       None
*
* Outputs:      None
*
* Usage Notes:  While the CRC functions are defined to be re-entrant, they all rely on the PIM SyncCrcHwSts for 
*               permission to calculate the CRC. This function assigns the hardware index for the CRC functions 
*               to use for their calculations. It uses the task ID as a the "key" for the caller to identify their 
*               CRC index. This function shall only be called from a task context. 
**********************************************************************************************************************/
static FUNC(void, CDD_SyncCrc_CODE) GetAvlCrcHwUnit(boolean ResvCrcCall_Arg)
{
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08 = 0U;
    VAR(uint16, AUTOMATIC) TaskId_Cnt_T_u16 = INVLDTASKID_CNT_U16;

    /* REQ: CM800A #48 I */ /* REQ: CM800A #67 */ /* REQ: CM800A #81 : FDD Section 5.1.4 */

    /* Task ID must be saved prior to entering the exclusive area, otherwise the TaskID will return an incorrect value */
    GetTaskID(&TaskId_Cnt_T_u16);

    Rte_Enter_SyncCrcExclusiveArea();
    do
    {
        if (CRCHWSTS_AVL == Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts)
        {
            if (ResvCrcCall_Arg == FALSE)
            {
                Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts = CRCHWSTS_BUSY;
                Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].TaskId = TaskId_Cnt_T_u16;
            }
            else
            {
                Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts = CRCHWSTS_RESV;
                Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].TaskId = CRCRESVID_CNT_U16[Idx_Cnt_T_u08];
            }
            
            /* Set Idx_Cnt_T_u08 to the loop limit break loop */
            Idx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
        }
        
        Idx_Cnt_T_u08++;
    } while( Idx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );
    Rte_Exit_SyncCrcExclusiveArea();
    /* ENDREQ: CM800A #48 I */ /* ENDREQ: CM800A #67 */ /* ENDREQ: CM800A #81 */

    return;
}

/**********************************************************************************************************************
* Name:         NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit
*
* Description:  Non-trusted handler to call GetAvlCrcHwUnit from an outside application context
*
* Inputs:       FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*
* Outputs:      None
*
* Usage Notes:  
**********************************************************************************************************************/
FUNC(void, CDD_SyncCrc_CODE) NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit( NonTrustedFunctionIndexType FunctionIndex,
                                                                         NonTrustedFunctionParameterRefType FunctionParams)
{
    /* REQ: CM800A #48 I */ /* REQ: CM800A #67 * : FDD Section 5.1.4 */
    GetAvlCrcHwUnit(((NtResvCallRec*)FunctionParams)->ResvCall);
    /* ENDREQ: CM800A #48 I */ /* ENDREQ: CM800A #67 */

    return;
}


/**********************************************************************************************************************
* Name:         CrcRegCfg
*
* Description:  Local function to configure the CRC register for the API calls. 
*
* Inputs:       CrcCfg_Arg - Selected configuration for the CRC calculation
*               
*
* Outputs:      None
*
* Usage Notes:  
**********************************************************************************************************************/
static FUNC(void, CDD_SyncCrc_CODE) CrcRegCfg( uint8 CrcHwIdx_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 StrtVal_Arg )
{
    switch(CrcCfg_Arg)
    {
        /* 8 Bit CRC */
        case CRCHWRESVCFG_8BITCRC:
            DCRA[CrcHwIdx_Arg].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            DCRA[CrcHwIdx_Arg].CTL.BIT.POL = (uint8)CRCALG_8BIT;
            DCRA[CrcHwIdx_Arg].COUT = (uint8)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_8BITCRCH2F:
            DCRA[CrcHwIdx_Arg].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            DCRA[CrcHwIdx_Arg].CTL.BIT.POL = (uint8)CRCALG_8BITH2F;
            DCRA[CrcHwIdx_Arg].COUT = (uint8)StrtVal_Arg;
        break;
        /* 16 Bit CRC */
        case CRCHWRESVCFG_16BITCRC8BITWIDTH:
            DCRA[CrcHwIdx_Arg].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            DCRA[CrcHwIdx_Arg].CTL.BIT.POL = (uint8)CRCALG_16BIT;
            DCRA[CrcHwIdx_Arg].COUT = (uint16)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_16BITCRC16BITWIDTH:
            DCRA[CrcHwIdx_Arg].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
            DCRA[CrcHwIdx_Arg].CTL.BIT.POL = (uint8)CRCALG_16BIT;
            DCRA[CrcHwIdx_Arg].COUT = (uint16)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_32BITCRC8BITWIDTH:
            DCRA[CrcHwIdx_Arg].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            DCRA[CrcHwIdx_Arg].CTL.BIT.POL = (uint8)CRCALG_32BITETH;
            DCRA[CrcHwIdx_Arg].COUT = (uint32)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_32BITCRC16BITWIDTH:
            DCRA[CrcHwIdx_Arg].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
            DCRA[CrcHwIdx_Arg].CTL.BIT.POL = (uint8)CRCALG_32BITETH;
            DCRA[CrcHwIdx_Arg].COUT = (uint32)StrtVal_Arg;
        break;
        /* Default value is assigned to 32-bit Crc with 32-bit access width. The switch argument value is range
           checked prior to the switch case, so the value is ensured to be within one of the enumerated values. 
           This allows full coverage for unit testing. */
        case CRCHWRESVCFG_32BITCRC32BITWIDTH:
        default:
            DCRA[CrcHwIdx_Arg].CTL.BIT.ISZ = (uint8)CRCDATAACSWIDTH_32BIT;
            DCRA[CrcHwIdx_Arg].CTL.BIT.POL = (uint8)CRCALG_32BITETH;
            DCRA[CrcHwIdx_Arg].COUT = (uint32)StrtVal_Arg;
        break;
    }
    
    return;
}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
