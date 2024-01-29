/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgTrajGenn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  HwAgTrajGenn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgTrajGenn>
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
 * HwAgTrajCmdSt1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_HwAgTrajGenn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_HwAgTrajGenn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void HwAgTrajGenn_TestDefines(void);


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
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Enumeration Types:
 * ==================
 * HwAgTrajCmdSt1: Enumeration of integer in interval [0...65535] with enumerators
 *   HWAGTRAJCMDST_WAIT (0U)
 *   HWAGTRAJCMDST_HWAGA (1U)
 *   HWAGTRAJCMDST_CONVEL (2U)
 *   HWAGTRAJCMDST_HWAGDECEL (3U)
 *   HWAGTRAJCMDST_HLD (4U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AMax(void)
 *   float32 *Rte_Pim_HwPosnIni(void)
 *   float32 *Rte_Pim_HwPosnOffs(void)
 *   float32 *Rte_Pim_SignHwPosnDelta(void)
 *   float32 *Rte_Pim_TiDeltaA(void)
 *   float32 *Rte_Pim_TiDeltaVel(void)
 *   float32 *Rte_Pim_TiSt(void)
 *   float32 *Rte_Pim_VelMax(void)
 *   HwAgTrajCmdSt1 *Rte_Pim_CmdSt(void)
 *   boolean *Rte_Pim_CalcFlg(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgTrajGennAMax_Val(void)
 *   float32 Rte_Prm_HwAgTrajGennAgMax_Val(void)
 *   float32 Rte_Prm_HwAgTrajGennVelMax_Val(void)
 *
 *********************************************************************************************************************/


#define HwAgTrajGenn_START_SEC_CODE
#include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrajGennInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrajGennInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrajGennInit1
 *********************************************************************************************************************/

  float32 AMax;
  float32 HwPosnIni;
  float32 HwPosnOffs;
  float32 SignHwPosnDelta;
  float32 TiDeltaA;
  float32 TiDeltaVel;
  float32 TiSt;
  float32 VelMax;
  HwAgTrajCmdSt1 CmdSt;
  boolean CalcFlg;

  float32 HwAgTrajGennAMax_Val_data;
  float32 HwAgTrajGennAgMax_Val_data;
  float32 HwAgTrajGennVelMax_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AMax = *TSC_HwAgTrajGenn_Rte_Pim_AMax();
  *TSC_HwAgTrajGenn_Rte_Pim_AMax() = AMax;
  HwPosnIni = *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni();
  *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni() = HwPosnIni;
  HwPosnOffs = *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs();
  *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs() = HwPosnOffs;
  SignHwPosnDelta = *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta();
  *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta() = SignHwPosnDelta;
  TiDeltaA = *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA();
  *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA() = TiDeltaA;
  TiDeltaVel = *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel();
  *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel() = TiDeltaVel;
  TiSt = *TSC_HwAgTrajGenn_Rte_Pim_TiSt();
  *TSC_HwAgTrajGenn_Rte_Pim_TiSt() = TiSt;
  VelMax = *TSC_HwAgTrajGenn_Rte_Pim_VelMax();
  *TSC_HwAgTrajGenn_Rte_Pim_VelMax() = VelMax;
  CmdSt = *TSC_HwAgTrajGenn_Rte_Pim_CmdSt();
  *TSC_HwAgTrajGenn_Rte_Pim_CmdSt() = CmdSt;
  CalcFlg = *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg();
  *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg() = CalcFlg;

  HwAgTrajGennAMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAMax_Val();
  HwAgTrajGennAgMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAgMax_Val();
  HwAgTrajGennVelMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennVelMax_Val();

  HwAgTrajGenn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrajGennPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrajGennEna_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgTrakgServoCmd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwATar(void)
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwAgTar(void)
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwVelTar(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrajGennPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrajGennPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  boolean Read_HwAgTrajGennEna_Logl;

  float32 AMax;
  float32 HwPosnIni;
  float32 HwPosnOffs;
  float32 SignHwPosnDelta;
  float32 TiDeltaA;
  float32 TiDeltaVel;
  float32 TiSt;
  float32 VelMax;
  HwAgTrajCmdSt1 CmdSt;
  boolean CalcFlg;

  float32 HwAgTrajGennAMax_Val_data;
  float32 HwAgTrajGennAgMax_Val_data;
  float32 HwAgTrajGennVelMax_Val_data;

  float32 HwAgTrajGennPer1_HwATar;
  float32 HwAgTrajGennPer1_HwAgTar;
  float32 HwAgTrajGennPer1_HwVelTar;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AMax = *TSC_HwAgTrajGenn_Rte_Pim_AMax();
  *TSC_HwAgTrajGenn_Rte_Pim_AMax() = AMax;
  HwPosnIni = *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni();
  *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni() = HwPosnIni;
  HwPosnOffs = *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs();
  *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs() = HwPosnOffs;
  SignHwPosnDelta = *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta();
  *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta() = SignHwPosnDelta;
  TiDeltaA = *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA();
  *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA() = TiDeltaA;
  TiDeltaVel = *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel();
  *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel() = TiDeltaVel;
  TiSt = *TSC_HwAgTrajGenn_Rte_Pim_TiSt();
  *TSC_HwAgTrajGenn_Rte_Pim_TiSt() = TiSt;
  VelMax = *TSC_HwAgTrajGenn_Rte_Pim_VelMax();
  *TSC_HwAgTrajGenn_Rte_Pim_VelMax() = VelMax;
  CmdSt = *TSC_HwAgTrajGenn_Rte_Pim_CmdSt();
  *TSC_HwAgTrajGenn_Rte_Pim_CmdSt() = CmdSt;
  CalcFlg = *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg();
  *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg() = CalcFlg;

  HwAgTrajGennAMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAMax_Val();
  HwAgTrajGennAgMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAgMax_Val();
  HwAgTrajGennVelMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennVelMax_Val();

  fct_status = TSC_HwAgTrajGenn_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_HwAgTrajGenn_Rte_Read_HwAgTrajGennEna_Logl(&Read_HwAgTrajGennEna_Logl);
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

  fct_status = TSC_HwAgTrajGenn_Rte_Write_HwAgTrakgServoCmd_Val(Rte_InitValue_HwAgTrakgServoCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  HwAgTrajGennPer1_HwATar = TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwATar();
  HwAgTrajGennPer1_HwAgTar = TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwAgTar();
  HwAgTrajGennPer1_HwVelTar = TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwVelTar();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetTrajTarPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetTrajTarPrm>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(float32 data)
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(float32 data)
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(float32 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetTrajTarPrm_Oper(float32 HwAgTrajGennHwAgTar_Arg, float32 HwAgTrajGennHwVelTar_Arg, float32 HwAgTrajGennHwATar_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetTrajTarPrm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgTrajGenn_CODE) SetTrajTarPrm_Oper(float32 HwAgTrajGennHwAgTar_Arg, float32 HwAgTrajGennHwVelTar_Arg, float32 HwAgTrajGennHwATar_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetTrajTarPrm_Oper
 *********************************************************************************************************************/

  float32 AMax;
  float32 HwPosnIni;
  float32 HwPosnOffs;
  float32 SignHwPosnDelta;
  float32 TiDeltaA;
  float32 TiDeltaVel;
  float32 TiSt;
  float32 VelMax;
  HwAgTrajCmdSt1 CmdSt;
  boolean CalcFlg;

  float32 HwAgTrajGennAMax_Val_data;
  float32 HwAgTrajGennAgMax_Val_data;
  float32 HwAgTrajGennVelMax_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  AMax = *TSC_HwAgTrajGenn_Rte_Pim_AMax();
  *TSC_HwAgTrajGenn_Rte_Pim_AMax() = AMax;
  HwPosnIni = *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni();
  *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni() = HwPosnIni;
  HwPosnOffs = *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs();
  *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs() = HwPosnOffs;
  SignHwPosnDelta = *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta();
  *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta() = SignHwPosnDelta;
  TiDeltaA = *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA();
  *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA() = TiDeltaA;
  TiDeltaVel = *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel();
  *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel() = TiDeltaVel;
  TiSt = *TSC_HwAgTrajGenn_Rte_Pim_TiSt();
  *TSC_HwAgTrajGenn_Rte_Pim_TiSt() = TiSt;
  VelMax = *TSC_HwAgTrajGenn_Rte_Pim_VelMax();
  *TSC_HwAgTrajGenn_Rte_Pim_VelMax() = VelMax;
  CmdSt = *TSC_HwAgTrajGenn_Rte_Pim_CmdSt();
  *TSC_HwAgTrajGenn_Rte_Pim_CmdSt() = CmdSt;
  CalcFlg = *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg();
  *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg() = CalcFlg;

  HwAgTrajGennAMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAMax_Val();
  HwAgTrajGennAgMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAgMax_Val();
  HwAgTrajGennVelMax_Val_data = TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennVelMax_Val();

  TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(10.0F);
  TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(0.0F);
  TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(10.0F);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgTrajGenn_STOP_SEC_CODE
#include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void HwAgTrajGenn_TestDefines(void)
{
  /* Enumeration Data Types */

  HwAgTrajCmdSt1 Test_HwAgTrajCmdSt1_V_1 = HWAGTRAJCMDST_WAIT;
  HwAgTrajCmdSt1 Test_HwAgTrajCmdSt1_V_2 = HWAGTRAJCMDST_HWAGA;
  HwAgTrajCmdSt1 Test_HwAgTrajCmdSt1_V_3 = HWAGTRAJCMDST_CONVEL;
  HwAgTrajCmdSt1 Test_HwAgTrajCmdSt1_V_4 = HWAGTRAJCMDST_HWAGDECEL;
  HwAgTrajCmdSt1 Test_HwAgTrajCmdSt1_V_5 = HWAGTRAJCMDST_HLD;
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
