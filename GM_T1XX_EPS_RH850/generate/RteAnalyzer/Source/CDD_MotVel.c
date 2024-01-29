/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotVel.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_MotVel
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotVel>
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
 * u0p16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_MotVel.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_MotVel.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void CDD_MotVel_TestDefines(void);


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
 * sint8: Integer in interval [-128...127] (standard type)
 * u0p16: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_8: Array with 8 element(s) of type u0p16
 * Ary1D_u32_8: Array with 8 element(s) of type uint32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotVelAvrgTi(void)
 *   float32 *Rte_Pim_dMotVelTiStampRef(void)
 *   u0p16 *Rte_Pim_dMotVelMotAgRef(void)
 *   uint8 *Rte_Pim_MotAgBufIdxPrev(void)
 *   uint8 *Rte_Pim_MotAgBufIdxPrim(void)
 *   uint8 *Rte_Pim_MotVelIninCntr(void)
 *   u0p16 *Rte_Pim_MotAgBufPrev(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_8
 *   uint32 *Rte_Pim_MotAgTiBufPrev(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_8
 *
 *********************************************************************************************************************/


#define CDD_MotVel_START_SEC_CODE
#include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotVel_CODE) MotVelInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelInit1
 *********************************************************************************************************************/

  float32 dMotVelAvrgTi;
  float32 dMotVelTiStampRef;
  u0p16 dMotVelMotAgRef;
  uint8 MotAgBufIdxPrev;
  uint8 MotAgBufIdxPrim;
  uint8 MotVelIninCntr;
  Ary1D_u0p16_8 MotAgBufPrev;
  Ary1D_u32_8 MotAgTiBufPrev;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotVelAvrgTi = *TSC_CDD_MotVel_Rte_Pim_dMotVelAvrgTi();
  *TSC_CDD_MotVel_Rte_Pim_dMotVelAvrgTi() = dMotVelAvrgTi;
  dMotVelTiStampRef = *TSC_CDD_MotVel_Rte_Pim_dMotVelTiStampRef();
  *TSC_CDD_MotVel_Rte_Pim_dMotVelTiStampRef() = dMotVelTiStampRef;
  dMotVelMotAgRef = *TSC_CDD_MotVel_Rte_Pim_dMotVelMotAgRef();
  *TSC_CDD_MotVel_Rte_Pim_dMotVelMotAgRef() = dMotVelMotAgRef;
  MotAgBufIdxPrev = *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrev();
  *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrev() = MotAgBufIdxPrev;
  MotAgBufIdxPrim = *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrim();
  *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrim() = MotAgBufIdxPrim;
  MotVelIninCntr = *TSC_CDD_MotVel_Rte_Pim_MotVelIninCntr();
  *TSC_CDD_MotVel_Rte_Pim_MotVelIninCntr() = MotVelIninCntr;

  (void)memcpy(MotAgBufPrev, TSC_CDD_MotVel_Rte_Pim_MotAgBufPrev(), sizeof(Ary1D_u0p16_8));
  (void)memcpy(TSC_CDD_MotVel_Rte_Pim_MotAgBufPrev(), MotAgBufPrev, sizeof(Ary1D_u0p16_8));


  (void)memcpy(MotAgTiBufPrev, TSC_CDD_MotVel_Rte_Pim_MotAgTiBufPrev(), sizeof(Ary1D_u32_8));
  (void)memcpy(TSC_CDD_MotVel_Rte_Pim_MotAgTiBufPrev(), MotAgTiBufPrev, sizeof(Ary1D_u32_8));


  CDD_MotVel_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelPer2
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
 *   Std_ReturnType Rte_Read_AssiMechPolarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_MotAgBuf_Ary1D(u0p16 *data)
 *     Argument data: u0p16* is of type Ary1D_u0p16_8
 *   Std_ReturnType Rte_Read_MotAgBufIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgMeclIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgTiBuf_Ary1D(uint32 *data)
 *     Argument data: uint32* is of type Ary1D_u32_8
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotVelCrf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVelMrf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVelVld_Logl(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotVel_CODE) MotVelPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelPer2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  sint8 Read_AssiMechPolarity_Val;
  Ary1D_u0p16_8 Read_MotAgBuf_Ary1D;
  uint8 Read_MotAgBufIdx_Val;
  uint8 Read_MotAgMeclIdptSig_Val;
  Ary1D_u32_8 Read_MotAgTiBuf_Ary1D;

  float32 dMotVelAvrgTi;
  float32 dMotVelTiStampRef;
  u0p16 dMotVelMotAgRef;
  uint8 MotAgBufIdxPrev;
  uint8 MotAgBufIdxPrim;
  uint8 MotVelIninCntr;
  Ary1D_u0p16_8 MotAgBufPrev;
  Ary1D_u32_8 MotAgTiBufPrev;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotVelAvrgTi = *TSC_CDD_MotVel_Rte_Pim_dMotVelAvrgTi();
  *TSC_CDD_MotVel_Rte_Pim_dMotVelAvrgTi() = dMotVelAvrgTi;
  dMotVelTiStampRef = *TSC_CDD_MotVel_Rte_Pim_dMotVelTiStampRef();
  *TSC_CDD_MotVel_Rte_Pim_dMotVelTiStampRef() = dMotVelTiStampRef;
  dMotVelMotAgRef = *TSC_CDD_MotVel_Rte_Pim_dMotVelMotAgRef();
  *TSC_CDD_MotVel_Rte_Pim_dMotVelMotAgRef() = dMotVelMotAgRef;
  MotAgBufIdxPrev = *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrev();
  *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrev() = MotAgBufIdxPrev;
  MotAgBufIdxPrim = *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrim();
  *TSC_CDD_MotVel_Rte_Pim_MotAgBufIdxPrim() = MotAgBufIdxPrim;
  MotVelIninCntr = *TSC_CDD_MotVel_Rte_Pim_MotVelIninCntr();
  *TSC_CDD_MotVel_Rte_Pim_MotVelIninCntr() = MotVelIninCntr;

  (void)memcpy(MotAgBufPrev, TSC_CDD_MotVel_Rte_Pim_MotAgBufPrev(), sizeof(Ary1D_u0p16_8));
  (void)memcpy(TSC_CDD_MotVel_Rte_Pim_MotAgBufPrev(), MotAgBufPrev, sizeof(Ary1D_u0p16_8));


  (void)memcpy(MotAgTiBufPrev, TSC_CDD_MotVel_Rte_Pim_MotAgTiBufPrev(), sizeof(Ary1D_u32_8));
  (void)memcpy(TSC_CDD_MotVel_Rte_Pim_MotAgTiBufPrev(), MotAgTiBufPrev, sizeof(Ary1D_u32_8));


  fct_status = TSC_CDD_MotVel_Rte_Read_AssiMechPolarity_Val(&Read_AssiMechPolarity_Val);
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

  fct_status = TSC_CDD_MotVel_Rte_Read_MotAgBuf_Ary1D(Read_MotAgBuf_Ary1D);
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

  fct_status = TSC_CDD_MotVel_Rte_Read_MotAgBufIdx_Val(&Read_MotAgBufIdx_Val);
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

  fct_status = TSC_CDD_MotVel_Rte_Read_MotAgMeclIdptSig_Val(&Read_MotAgMeclIdptSig_Val);
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

  fct_status = TSC_CDD_MotVel_Rte_Read_MotAgTiBuf_Ary1D(Read_MotAgTiBuf_Ary1D);
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

  fct_status = TSC_CDD_MotVel_Rte_Write_MotVelCrf_Val(Rte_InitValue_MotVelCrf_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotVel_Rte_Write_MotVelMrf_Val(Rte_InitValue_MotVelMrf_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_CDD_MotVel_Rte_Write_MotVelVld_Logl(Rte_InitValue_MotVelVld_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotVel_STOP_SEC_CODE
#include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_MotVel_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Ti7_LowerLimit;
  float32 Test_float32_UL_1 = Ti7_UpperLimit;
  float32 Test_float32_LL_2 = Vel1_LowerLimit;
  float32 Test_float32_UL_2 = Vel1_UpperLimit;

  sint8 Test_sint8_LL_1 = Uls3_LowerLimit;
  sint8 Test_sint8_UL_1 = Uls3_UpperLimit;

  u0p16 Test_u0p16_LL_1 = Ag5_LowerLimit;
  u0p16 Test_u0p16_UL_1 = Ag5_UpperLimit;

  uint32 Test_uint32_LL_1 = Cnt15_LowerLimit;
  uint32 Test_uint32_UL_1 = Cnt15_UpperLimit;

  uint8 Test_uint8_LL_1 = Cnt18_LowerLimit;
  uint8 Test_uint8_UL_1 = Cnt18_UpperLimit;
  uint8 Test_uint8_LL_2 = Cnt22_LowerLimit;
  uint8 Test_uint8_UL_2 = Cnt22_UpperLimit;
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
