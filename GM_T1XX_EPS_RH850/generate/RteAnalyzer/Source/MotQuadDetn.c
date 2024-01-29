/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotQuadDetn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  MotQuadDetn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotQuadDetn>
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
 * MotQuad1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * s18p13
 *   sint32 represents integers with a minimum value of -2147483648 and a maximum 
 *      value of 2147483647. The order-relation on sint32 is: x < y if y - x is
 *      positive. sint32 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 *********************************************************************************************************************/

#include "Rte_MotQuadDetn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_MotQuadDetn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void MotQuadDetn_TestDefines(void);


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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s18p13: Integer in interval [-2147483648...2147483647]
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MotQuad1: Enumeration of integer in interval [0...255] with enumerators
 *   MOTQUAD_QUAD1 (1U)
 *   MOTQUAD_QUAD2 (2U)
 *   MOTQUAD_QUAD3 (3U)
 *   MOTQUAD_QUAD4 (4U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   s18p13 *Rte_Pim_MotAgCumPrev(void)
 *   s18p13 *Rte_Pim_dMotQuadDetnMotAgCumDelta(void)
 *   sint8 *Rte_Pim_MotDirInstsPrev(void)
 *   sint8 *Rte_Pim_MotTqCmdSignPrev(void)
 *   sint8 *Rte_Pim_dMotQuadDetnTqCmdSign(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   s18p13 Rte_Prm_MotQuadDetnMotDirHysInsts_Val(void)
 *
 *********************************************************************************************************************/


#define MotQuadDetn_START_SEC_CODE
#include "MotQuadDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotQuadDetnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotQuadDetn_CODE) MotQuadDetnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnInit1
 *********************************************************************************************************************/

  s18p13 MotAgCumPrev;
  s18p13 dMotQuadDetnMotAgCumDelta;
  sint8 MotDirInstsPrev;
  sint8 MotTqCmdSignPrev;
  sint8 dMotQuadDetnTqCmdSign;

  s18p13 MotQuadDetnMotDirHysInsts_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  MotAgCumPrev = *TSC_MotQuadDetn_Rte_Pim_MotAgCumPrev();
  *TSC_MotQuadDetn_Rte_Pim_MotAgCumPrev() = MotAgCumPrev;
  dMotQuadDetnMotAgCumDelta = *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnMotAgCumDelta();
  *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnMotAgCumDelta() = dMotQuadDetnMotAgCumDelta;
  MotDirInstsPrev = *TSC_MotQuadDetn_Rte_Pim_MotDirInstsPrev();
  *TSC_MotQuadDetn_Rte_Pim_MotDirInstsPrev() = MotDirInstsPrev;
  MotTqCmdSignPrev = *TSC_MotQuadDetn_Rte_Pim_MotTqCmdSignPrev();
  *TSC_MotQuadDetn_Rte_Pim_MotTqCmdSignPrev() = MotTqCmdSignPrev;
  dMotQuadDetnTqCmdSign = *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnTqCmdSign();
  *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnTqCmdSign() = dMotQuadDetnTqCmdSign;

  MotQuadDetnMotDirHysInsts_Val_data = TSC_MotQuadDetn_Rte_Prm_MotQuadDetnMotDirHysInsts_Val();

  MotQuadDetn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotQuadDetnPer1
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
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndMrf_Val(s18p13 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotDirInsts_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotQuad_Val(MotQuad1 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotQuadDetn_CODE) MotQuadDetnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  s18p13 Read_MotAgCumvAlgndMrf_Val;
  float32 Read_MotTqCmd_Val;

  s18p13 MotAgCumPrev;
  s18p13 dMotQuadDetnMotAgCumDelta;
  sint8 MotDirInstsPrev;
  sint8 MotTqCmdSignPrev;
  sint8 dMotQuadDetnTqCmdSign;

  s18p13 MotQuadDetnMotDirHysInsts_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  MotAgCumPrev = *TSC_MotQuadDetn_Rte_Pim_MotAgCumPrev();
  *TSC_MotQuadDetn_Rte_Pim_MotAgCumPrev() = MotAgCumPrev;
  dMotQuadDetnMotAgCumDelta = *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnMotAgCumDelta();
  *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnMotAgCumDelta() = dMotQuadDetnMotAgCumDelta;
  MotDirInstsPrev = *TSC_MotQuadDetn_Rte_Pim_MotDirInstsPrev();
  *TSC_MotQuadDetn_Rte_Pim_MotDirInstsPrev() = MotDirInstsPrev;
  MotTqCmdSignPrev = *TSC_MotQuadDetn_Rte_Pim_MotTqCmdSignPrev();
  *TSC_MotQuadDetn_Rte_Pim_MotTqCmdSignPrev() = MotTqCmdSignPrev;
  dMotQuadDetnTqCmdSign = *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnTqCmdSign();
  *TSC_MotQuadDetn_Rte_Pim_dMotQuadDetnTqCmdSign() = dMotQuadDetnTqCmdSign;

  MotQuadDetnMotDirHysInsts_Val_data = TSC_MotQuadDetn_Rte_Prm_MotQuadDetnMotDirHysInsts_Val();

  fct_status = TSC_MotQuadDetn_Rte_Read_MotAgCumvAlgndMrf_Val(&Read_MotAgCumvAlgndMrf_Val);
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

  fct_status = TSC_MotQuadDetn_Rte_Read_MotTqCmd_Val(&Read_MotTqCmd_Val);
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

  fct_status = TSC_MotQuadDetn_Rte_Write_MotDirInsts_Val(Rte_InitValue_MotDirInsts_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotQuadDetn_Rte_Write_MotQuad_Val(Rte_InitValue_MotQuad_Val);
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


#define MotQuadDetn_STOP_SEC_CODE
#include "MotQuadDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void MotQuadDetn_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Tq1_LowerLimit;
  float32 Test_float32_UL_1 = Tq1_UpperLimit;

  s18p13 Test_s18p13_LL_1 = Ag6_LowerLimit;
  s18p13 Test_s18p13_UL_1 = Ag6_UpperLimit;
  s18p13 Test_s18p13_LL_2 = Ag7_LowerLimit;
  s18p13 Test_s18p13_UL_2 = Ag7_UpperLimit;

  sint8 Test_sint8_LL_1 = Cnt2_LowerLimit;
  sint8 Test_sint8_UL_1 = Cnt2_UpperLimit;

  /* Enumeration Data Types */

  MotQuad1 Test_MotQuad1_V_1 = MOTQUAD_QUAD1;
  MotQuad1 Test_MotQuad1_V_2 = MOTQUAD_QUAD2;
  MotQuad1 Test_MotQuad1_V_3 = MOTQUAD_QUAD3;
  MotQuad1 Test_MotQuad1_V_4 = MOTQUAD_QUAD4;
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
