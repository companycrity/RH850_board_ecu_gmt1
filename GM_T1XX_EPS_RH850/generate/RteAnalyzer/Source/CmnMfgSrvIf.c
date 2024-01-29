/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CmnMfgSrvIf.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CmnMfgSrvIf
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CmnMfgSrvIf>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */

/* PRQA S 3109 EOF */
/* PRQA S 3112 EOF */
/* PRQA S 3197 EOF */
/* PRQA S 3198 EOF */
/* PRQA S 3199 EOF */
/* PRQA S 3201 EOF */
/* PRQA S 3203 EOF */
/* PRQA S 3205 EOF */
/* PRQA S 3206 EOF */
/* PRQA S 3218 EOF */
/* PRQA S 3229 EOF */
/* PRQA S 2002 EOF */
/* PRQA S 3334 EOF */
/* PRQA S 3417 EOF */
/* PRQA S 3426 EOF */
/* PRQA S 3453 EOF */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * MfgEnaSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CmnMfgSrvIf.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CmnMfgSrvIf.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void CmnMfgSrvIf_TestDefines(void);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MfgEnaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   MFGENAST_PRDNMOD (0U)
 *   MFGENAST_MFGMOD (1U)
 *   MFGENAST_TESTMOD (2U)
 *
 * Array Types:
 * ============
 * Ary1D_u8_CmnMfgSrvIf: Array with 65535 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_CmnMfgSrvUnlckd(void)
 *   uint8 *Rte_Pim_DataBuf(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_CmnMfgSrvIf
 *
 *********************************************************************************************************************/


#define CmnMfgSrvIf_START_SEC_CODE
#include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CmnMfgSrvIfCmnMfgSrvIfImdtTx>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(const uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen)
 *     Argument CmnMfgSrvCmnMfgSrvDataBufferPtr: uint8* is of type Ary1D_u8_CmnMfgSrvIf
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(uint8, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
 *********************************************************************************************************************/

  boolean CmnMfgSrvUnlckd;
  Ary1D_u8_CmnMfgSrvIf DataBuf;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  CmnMfgSrvUnlckd = *TSC_CmnMfgSrvIf_Rte_Pim_CmnMfgSrvUnlckd();
  *TSC_CmnMfgSrvIf_Rte_Pim_CmnMfgSrvUnlckd() = CmnMfgSrvUnlckd;

  (void)memcpy(DataBuf, TSC_CmnMfgSrvIf_Rte_Pim_DataBuf(), sizeof(Ary1D_u8_CmnMfgSrvIf));
  (void)memcpy(TSC_CmnMfgSrvIf_Rte_Pim_DataBuf(), DataBuf, sizeof(Ary1D_u8_CmnMfgSrvIf));


  CmnMfgSrvIf_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvIfInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, uint16 *CmnMfgSrvCmnMfgSrvRespLen, uint8 *CmnMfgSrvCmnMfgSrvRespCod)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvIfInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvIfInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  MfgEnaSt1 Read_MfgEnaSt_Val;

  boolean CmnMfgSrvUnlckd;
  Ary1D_u8_CmnMfgSrvIf DataBuf;

  uint8 Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper_CmnMfgSrvCmnMfgSrvDataBufferPtr = 0U;
  uint16 Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper_CmnMfgSrvCmnMfgSrvRespLen = 0U;
  uint8 Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper_CmnMfgSrvCmnMfgSrvRespCod = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  CmnMfgSrvUnlckd = *TSC_CmnMfgSrvIf_Rte_Pim_CmnMfgSrvUnlckd();
  *TSC_CmnMfgSrvIf_Rte_Pim_CmnMfgSrvUnlckd() = CmnMfgSrvUnlckd;

  (void)memcpy(DataBuf, TSC_CmnMfgSrvIf_Rte_Pim_DataBuf(), sizeof(Ary1D_u8_CmnMfgSrvIf));
  (void)memcpy(TSC_CmnMfgSrvIf_Rte_Pim_DataBuf(), DataBuf, sizeof(Ary1D_u8_CmnMfgSrvIf));


  fct_status = TSC_CmnMfgSrvIf_Rte_Read_MfgEnaSt_Val(&Read_MfgEnaSt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CmnMfgSrvIf_Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0U, 0U, 0U, &Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper_CmnMfgSrvCmnMfgSrvDataBufferPtr, 0U, &Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper_CmnMfgSrvCmnMfgSrvRespLen, &Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper_CmnMfgSrvCmnMfgSrvRespCod);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CmnMfgSrvIf_STOP_SEC_CODE
#include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CmnMfgSrvIf_TestDefines(void)
{
  /* Enumeration Data Types */

  MfgEnaSt1 Test_MfgEnaSt1_V_1 = MFGENAST_PRDNMOD;
  MfgEnaSt1 Test_MfgEnaSt1_V_2 = MFGENAST_MFGMOD;
  MfgEnaSt1 Test_MfgEnaSt1_V_3 = MFGENAST_TESTMOD;
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

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
