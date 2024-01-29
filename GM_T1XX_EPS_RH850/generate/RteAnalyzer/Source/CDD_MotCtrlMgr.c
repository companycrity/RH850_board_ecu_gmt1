/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotCtrlMgr.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_MotCtrlMgr
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotCtrlMgr>
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
 * MotCurrEolCalSt2
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * SigQlfr1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * s15p16
 *   sint32 represents integers with a minimum value of -2147483648 and a maximum 
 *      value of 2147483647. The order-relation on sint32 is: x < y if y - x is
 *      positive. sint32 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 * u0p16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_MotCtrlMgr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_MotCtrlMgr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void CDD_MotCtrlMgr_TestDefines(void);


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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s15p16: Integer in interval [-2147483648...2147483647]
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * u0p16: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MotCurrEolCalSt2: Enumeration of integer in interval [0...255] with enumerators
 *   MCECS_OFFSCMDSTRT (0U)
 *   MCECS_OFFSCMDHI (1U)
 *   MCECS_OFFSCMDLO (2U)
 *   MCECS_OFFSCMDZERO (3U)
 *   MCECS_OFFSCMDEND (4U)
 *   MCECS_GAINCMDAD (5U)
 *   MCECS_GAINCMDBE (6U)
 *   MCECS_GAINCMDCF (7U)
 *   MCECS_CMDSAFEST (8U)
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_8: Array with 8 element(s) of type u0p16
 * Ary1D_u32_8: Array with 8 element(s) of type uint32
 *
 *********************************************************************************************************************/


#define CDD_MotCtrlMgr_START_SEC_CODE
#include "CDD_MotCtrlMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlMgrPer1
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
 *   Std_ReturnType Rte_Write_Adc0ScanGroup2Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc0ScanGroup2Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc0ScanGroup3Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc0ScanGroup3Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc0SelfDiag0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc0SelfDiag2_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc0SelfDiag4_Val(float32 data)
 *   Std_ReturnType Rte_Write_FastLoopCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_MotAg0ErrReg_Val(uint32 data)
 *   Std_ReturnType Rte_Write_MotAg0Mecl_Val(u0p16 data)
 *   Std_ReturnType Rte_Write_MotAg0MeclRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotAg0ParFltCnt_Val(uint16 data)
 *   Std_ReturnType Rte_Write_MotAg0VltgFltCnt_Val(uint16 data)
 *   Std_ReturnType Rte_Write_MotAg1ErrReg_Val(uint32 data)
 *   Std_ReturnType Rte_Write_MotAg1Mecl_Val(u0p16 data)
 *   Std_ReturnType Rte_Write_MotAg1MeclRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotAg1ParFltCnt_Val(uint16 data)
 *   Std_ReturnType Rte_Write_MotAg1VltgFltCnt_Val(uint16 data)
 *   Std_ReturnType Rte_Write_MotAgBuf_Ary1D(const u0p16 *data)
 *     Argument data: u0p16* is of type Ary1D_u0p16_8
 *   Std_ReturnType Rte_Write_MotAgBufIdx_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotAgCumvAlgndMrfRev_Val(s15p16 data)
 *   Std_ReturnType Rte_Write_MotAgCumvInid_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAgTiBuf_Ary1D(const uint32 *data)
 *     Argument data: uint32* is of type Ary1D_u32_8
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyA_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyB_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyC_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyD_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyE_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyF_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrCorrdA_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrCorrdB_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrCorrdC_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrCorrdD_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrCorrdE_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrCorrdF_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrRollgCntr1_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotCurrRollgCntr2_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ntc5DErrCnt_Val(uint16 data)
 *   Std_ReturnType Rte_Write_Ntc6DErrCnt_Val(uint16 data)
 *   Std_ReturnType Rte_Write_PhaOnTiSumA_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiSumB_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiSumC_Val(uint32 data)
 *   Std_ReturnType Rte_Write_SlowLoopCntr_Val(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlMgrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlMgrPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Ary1D_u0p16_8 Write_MotAgBuf_Ary1D;
  Ary1D_u32_8 Write_MotAgTiBuf_Ary1D;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup2Ref0_Val(Rte_InitValue_Adc0ScanGroup2Ref0_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup2Ref1_Val(Rte_InitValue_Adc0ScanGroup2Ref1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup3Ref0_Val(Rte_InitValue_Adc0ScanGroup3Ref0_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup3Ref1_Val(Rte_InitValue_Adc0ScanGroup3Ref1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Adc0SelfDiag0_Val(Rte_InitValue_Adc0SelfDiag0_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Adc0SelfDiag2_Val(Rte_InitValue_Adc0SelfDiag2_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Adc0SelfDiag4_Val(Rte_InitValue_Adc0SelfDiag4_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_FastLoopCntr_Val(Rte_InitValue_FastLoopCntr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0ErrReg_Val(Rte_InitValue_MotAg0ErrReg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0Mecl_Val(Rte_InitValue_MotAg0Mecl_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0MeclRollgCntr_Val(Rte_InitValue_MotAg0MeclRollgCntr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0ParFltCnt_Val(Rte_InitValue_MotAg0ParFltCnt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0VltgFltCnt_Val(Rte_InitValue_MotAg0VltgFltCnt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1ErrReg_Val(Rte_InitValue_MotAg1ErrReg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1Mecl_Val(Rte_InitValue_MotAg1Mecl_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1MeclRollgCntr_Val(Rte_InitValue_MotAg1MeclRollgCntr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1ParFltCnt_Val(Rte_InitValue_MotAg1ParFltCnt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1VltgFltCnt_Val(Rte_InitValue_MotAg1VltgFltCnt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_MotAgBuf_Ary1D, 0, sizeof(Write_MotAgBuf_Ary1D));
  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAgBuf_Ary1D(Write_MotAgBuf_Ary1D);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAgBufIdx_Val(Rte_InitValue_MotAgBufIdx_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAgCumvAlgndMrfRev_Val(Rte_InitValue_MotAgCumvAlgndMrfRev_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAgCumvInid_Logl(Rte_InitValue_MotAgCumvInid_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_MotAgTiBuf_Ary1D, 0, sizeof(Write_MotAgTiBuf_Ary1D));
  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotAgTiBuf_Ary1D(Write_MotAgTiBuf_Ary1D);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyA_Val(Rte_InitValue_MotCurrAdcVlyA_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyB_Val(Rte_InitValue_MotCurrAdcVlyB_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyC_Val(Rte_InitValue_MotCurrAdcVlyC_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyD_Val(Rte_InitValue_MotCurrAdcVlyD_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyE_Val(Rte_InitValue_MotCurrAdcVlyE_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyF_Val(Rte_InitValue_MotCurrAdcVlyF_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdA_Val(Rte_InitValue_MotCurrCorrdA_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdB_Val(Rte_InitValue_MotCurrCorrdB_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdC_Val(Rte_InitValue_MotCurrCorrdC_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdD_Val(Rte_InitValue_MotCurrCorrdD_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdE_Val(Rte_InitValue_MotCurrCorrdE_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdF_Val(Rte_InitValue_MotCurrCorrdF_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrDax_Val(Rte_InitValue_MotCurrDax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrQax_Val(Rte_InitValue_MotCurrQax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrRollgCntr1_Val(Rte_InitValue_MotCurrRollgCntr1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrRollgCntr2_Val(Rte_InitValue_MotCurrRollgCntr2_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Ntc5DErrCnt_Val(Rte_InitValue_Ntc5DErrCnt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_Ntc6DErrCnt_Val(Rte_InitValue_Ntc6DErrCnt_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_PhaOnTiSumA_Val(Rte_InitValue_PhaOnTiSumA_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_PhaOnTiSumB_Val(Rte_InitValue_PhaOnTiSumB_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_PhaOnTiSumC_Val(Rte_InitValue_PhaOnTiSumC_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Write_SlowLoopCntr_Val(Rte_InitValue_SlowLoopCntr_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Call_DmaWaitForMotCtrlTo2MilliSecTrf_Oper();
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
    case RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  CDD_MotCtrlMgr_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlMgrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AdcDiagcEndPtrOutp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AdcDiagcStrtPtrOutp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CurrMeasCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrMeasLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_CurrMeasWrmIninTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LoopCntr2MilliSec_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg0MeclQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotAg1MeclQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotAgElecDly_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAgElecDlyRpl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAgMecl0Polarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_MotAgMecl1Polarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_MotAgMeclCorrlnSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotBackEmfVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyAAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyBAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyCAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyDAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyEAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyFAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxMax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxToMotTqGain_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQlfr1_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotCurrQlfr2_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotDampgDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotDampgQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotElecMeclPolarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimdIvs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimdIvs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotIntglGainDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotIntglGainQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotPropGainDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotPropGainQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotREstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotReacncDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotReacncQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqRplCoggOrder1Mgn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqRplCoggOrder1Pha_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqRplCoggOrder2Mgn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqRplCoggOrder2Pha_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqRplCoggOrder3Mgn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqRplCoggOrder3Pha_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVltgDaxFf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVltgQaxFf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DmaEna2MilliSecToMotCtrlTrf_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlMgrPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlMgrPer2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 Read_AdcDiagcEndPtrOutp_Val;
  uint8 Read_AdcDiagcStrtPtrOutp_Val;
  float32 Read_BrdgVltg_Val;
  uint8 Read_CurrMeasCorrlnSts_Val;
  boolean Read_CurrMeasLoaMtgtnEna_Logl;
  boolean Read_CurrMeasWrmIninTestCmpl_Logl;
  boolean Read_DiagcStsIvtr1Inactv_Logl;
  boolean Read_DiagcStsIvtr2Inactv_Logl;
  boolean Read_DualEcuMotCtrlMtgtnEna_Logl;
  float32 Read_EcuTFild_Val;
  boolean Read_IvtrLoaMtgtnEna_Logl;
  uint16 Read_LoopCntr2MilliSec_Val;
  SigQlfr1 Read_MotAg0MeclQlfr_Val;
  SigQlfr1 Read_MotAg1MeclQlfr_Val;
  float32 Read_MotAgElecDly_Val;
  float32 Read_MotAgElecDlyRpl_Val;
  sint8 Read_MotAgMecl0Polarity_Val;
  sint8 Read_MotAgMecl1Polarity_Val;
  uint8 Read_MotAgMeclCorrlnSt_Val;
  float32 Read_MotBackEmfVltg_Val;
  boolean Read_MotCurrAdcVlyAAdcFaild_Logl;
  boolean Read_MotCurrAdcVlyBAdcFaild_Logl;
  boolean Read_MotCurrAdcVlyCAdcFaild_Logl;
  boolean Read_MotCurrAdcVlyDAdcFaild_Logl;
  boolean Read_MotCurrAdcVlyEAdcFaild_Logl;
  boolean Read_MotCurrAdcVlyFAdcFaild_Logl;
  float32 Read_MotCurrDaxCmd_Val;
  float32 Read_MotCurrDaxMax_Val;
  MotCurrEolCalSt2 Read_MotCurrEolCalSt_Val;
  float32 Read_MotCurrQaxCmd_Val;
  float32 Read_MotCurrQaxToMotTqGain_Val;
  SigQlfr1 Read_MotCurrQlfr1_Val;
  SigQlfr1 Read_MotCurrQlfr2_Val;
  float32 Read_MotDampgDax_Val;
  float32 Read_MotDampgQax_Val;
  sint8 Read_MotElecMeclPolarity_Val;
  float32 Read_MotInduDaxEstimdIvs_Val;
  float32 Read_MotInduQaxEstimdIvs_Val;
  float32 Read_MotIntglGainDax_Val;
  float32 Read_MotIntglGainQax_Val;
  float32 Read_MotPropGainDax_Val;
  float32 Read_MotPropGainQax_Val;
  float32 Read_MotREstimd_Val;
  float32 Read_MotReacncDax_Val;
  float32 Read_MotReacncQax_Val;
  float32 Read_MotTqRplCoggOrder1Mgn_Val;
  float32 Read_MotTqRplCoggOrder1Pha_Val;
  float32 Read_MotTqRplCoggOrder2Mgn_Val;
  float32 Read_MotTqRplCoggOrder2Pha_Val;
  float32 Read_MotTqRplCoggOrder3Mgn_Val;
  float32 Read_MotTqRplCoggOrder3Pha_Val;
  float32 Read_MotVelMrf_Val;
  float32 Read_MotVltgDaxFf_Val;
  float32 Read_MotVltgQaxFf_Val;
  SysSt1 Read_SysSt_Val;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_AdcDiagcEndPtrOutp_Val(&Read_AdcDiagcEndPtrOutp_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_AdcDiagcStrtPtrOutp_Val(&Read_AdcDiagcStrtPtrOutp_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_BrdgVltg_Val(&Read_BrdgVltg_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_CurrMeasCorrlnSts_Val(&Read_CurrMeasCorrlnSts_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_CurrMeasLoaMtgtnEna_Logl(&Read_CurrMeasLoaMtgtnEna_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_CurrMeasWrmIninTestCmpl_Logl(&Read_CurrMeasWrmIninTestCmpl_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_DiagcStsIvtr1Inactv_Logl(&Read_DiagcStsIvtr1Inactv_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_DiagcStsIvtr2Inactv_Logl(&Read_DiagcStsIvtr2Inactv_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(&Read_DualEcuMotCtrlMtgtnEna_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_EcuTFild_Val(&Read_EcuTFild_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_IvtrLoaMtgtnEna_Logl(&Read_IvtrLoaMtgtnEna_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_LoopCntr2MilliSec_Val(&Read_LoopCntr2MilliSec_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotAg0MeclQlfr_Val(&Read_MotAg0MeclQlfr_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotAg1MeclQlfr_Val(&Read_MotAg1MeclQlfr_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotAgElecDly_Val(&Read_MotAgElecDly_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotAgElecDlyRpl_Val(&Read_MotAgElecDlyRpl_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotAgMecl0Polarity_Val(&Read_MotAgMecl0Polarity_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotAgMecl1Polarity_Val(&Read_MotAgMecl1Polarity_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotAgMeclCorrlnSt_Val(&Read_MotAgMeclCorrlnSt_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotBackEmfVltg_Val(&Read_MotBackEmfVltg_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyAAdcFaild_Logl(&Read_MotCurrAdcVlyAAdcFaild_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyBAdcFaild_Logl(&Read_MotCurrAdcVlyBAdcFaild_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyCAdcFaild_Logl(&Read_MotCurrAdcVlyCAdcFaild_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyDAdcFaild_Logl(&Read_MotCurrAdcVlyDAdcFaild_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyEAdcFaild_Logl(&Read_MotCurrAdcVlyEAdcFaild_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyFAdcFaild_Logl(&Read_MotCurrAdcVlyFAdcFaild_Logl);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrDaxCmd_Val(&Read_MotCurrDaxCmd_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrDaxMax_Val(&Read_MotCurrDaxMax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrEolCalSt_Val(&Read_MotCurrEolCalSt_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQaxCmd_Val(&Read_MotCurrQaxCmd_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQaxToMotTqGain_Val(&Read_MotCurrQaxToMotTqGain_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQlfr1_Val(&Read_MotCurrQlfr1_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQlfr2_Val(&Read_MotCurrQlfr2_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotDampgDax_Val(&Read_MotDampgDax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotDampgQax_Val(&Read_MotDampgQax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotElecMeclPolarity_Val(&Read_MotElecMeclPolarity_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotInduDaxEstimdIvs_Val(&Read_MotInduDaxEstimdIvs_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotInduQaxEstimdIvs_Val(&Read_MotInduQaxEstimdIvs_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotIntglGainDax_Val(&Read_MotIntglGainDax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotIntglGainQax_Val(&Read_MotIntglGainQax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotPropGainDax_Val(&Read_MotPropGainDax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotPropGainQax_Val(&Read_MotPropGainQax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotREstimd_Val(&Read_MotREstimd_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotReacncDax_Val(&Read_MotReacncDax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotReacncQax_Val(&Read_MotReacncQax_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder1Mgn_Val(&Read_MotTqRplCoggOrder1Mgn_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder1Pha_Val(&Read_MotTqRplCoggOrder1Pha_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder2Mgn_Val(&Read_MotTqRplCoggOrder2Mgn_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder2Pha_Val(&Read_MotTqRplCoggOrder2Pha_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder3Mgn_Val(&Read_MotTqRplCoggOrder3Mgn_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder3Pha_Val(&Read_MotTqRplCoggOrder3Pha_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotVelMrf_Val(&Read_MotVelMrf_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotVltgDaxFf_Val(&Read_MotVltgDaxFf_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_MotVltgQaxFf_Val(&Read_MotVltgQaxFf_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Read_SysSt_Val(&Read_SysSt_Val);
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

  fct_status = TSC_CDD_MotCtrlMgr_Rte_Call_DmaEna2MilliSecToMotCtrlTrf_Oper();
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


#define CDD_MotCtrlMgr_STOP_SEC_CODE
#include "CDD_MotCtrlMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_MotCtrlMgr_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Ag12_LowerLimit;
  float32 Test_float32_UL_1 = Ag12_UpperLimit;
  float32 Test_float32_LL_2 = Curr1_LowerLimit;
  float32 Test_float32_UL_2 = Curr1_UpperLimit;
  float32 Test_float32_LL_3 = Curr6_LowerLimit;
  float32 Test_float32_UL_3 = Curr6_UpperLimit;
  float32 Test_float32_LL_4 = Curr7_LowerLimit;
  float32 Test_float32_UL_4 = Curr7_UpperLimit;
  float32 Test_float32_LL_5 = R2_LowerLimit;
  float32 Test_float32_UL_5 = R2_UpperLimit;
  float32 Test_float32_LL_6 = R3_LowerLimit;
  float32 Test_float32_UL_6 = R3_UpperLimit;
  float32 Test_float32_LL_7 = R4_LowerLimit;
  float32 Test_float32_UL_7 = R4_UpperLimit;
  float32 Test_float32_LL_8 = R7_LowerLimit;
  float32 Test_float32_UL_8 = R7_UpperLimit;
  float32 Test_float32_LL_9 = T1_LowerLimit;
  float32 Test_float32_UL_9 = T1_UpperLimit;
  float32 Test_float32_LL_10 = Vel1_LowerLimit;
  float32 Test_float32_UL_10 = Vel1_UpperLimit;
  float32 Test_float32_LL_11 = Volt1_LowerLimit;
  float32 Test_float32_UL_11 = Volt1_UpperLimit;
  float32 Test_float32_LL_12 = Volt17_LowerLimit;
  float32 Test_float32_UL_12 = Volt17_UpperLimit;
  float32 Test_float32_LL_13 = Volt3_LowerLimit;
  float32 Test_float32_UL_13 = Volt3_UpperLimit;

  s15p16 Test_s15p16_LL_1 = Ag8_LowerLimit;
  s15p16 Test_s15p16_UL_1 = Ag8_UpperLimit;

  sint8 Test_sint8_LL_1 = Uls3_LowerLimit;
  sint8 Test_sint8_UL_1 = Uls3_UpperLimit;

  u0p16 Test_u0p16_LL_1 = Ag5_LowerLimit;
  u0p16 Test_u0p16_UL_1 = Ag5_UpperLimit;

  uint16 Test_uint16_LL_1 = Cnt16_LowerLimit;
  uint16 Test_uint16_UL_1 = Cnt16_UpperLimit;

  uint32 Test_uint32_LL_1 = Cnt15_LowerLimit;
  uint32 Test_uint32_UL_1 = Cnt15_UpperLimit;
  uint32 Test_uint32_LL_2 = Cnt17_LowerLimit;
  uint32 Test_uint32_UL_2 = Cnt17_UpperLimit;

  uint8 Test_uint8_LL_1 = Cnt22_LowerLimit;
  uint8 Test_uint8_UL_1 = Cnt22_UpperLimit;

  /* Enumeration Data Types */

  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_1 = MCECS_OFFSCMDSTRT;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_2 = MCECS_OFFSCMDHI;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_3 = MCECS_OFFSCMDLO;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_4 = MCECS_OFFSCMDZERO;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_5 = MCECS_OFFSCMDEND;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_6 = MCECS_GAINCMDAD;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_7 = MCECS_GAINCMDBE;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_8 = MCECS_GAINCMDCF;
  MotCurrEolCalSt2 Test_MotCurrEolCalSt2_V_9 = MCECS_CMDSAFEST;

  SigQlfr1 Test_SigQlfr1_V_1 = SIGQLFR_NORES;
  SigQlfr1 Test_SigQlfr1_V_2 = SIGQLFR_PASSD;
  SigQlfr1 Test_SigQlfr1_V_3 = SIGQLFR_FAILD;

  SysSt1 Test_SysSt1_V_1 = SYSST_DI;
  SysSt1 Test_SysSt1_V_2 = SYSST_OFF;
  SysSt1 Test_SysSt1_V_3 = SYSST_ENA;
  SysSt1 Test_SysSt1_V_4 = SYSST_WRMININ;
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
