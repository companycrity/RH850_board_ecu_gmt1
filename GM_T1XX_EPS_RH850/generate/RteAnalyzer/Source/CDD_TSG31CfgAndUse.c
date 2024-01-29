/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_TSG31CfgAndUse.c
 *        Config:  EPS.dpa
 *     SW-C Type:  CDD_TSG31CfgAndUse
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_TSG31CfgAndUse>
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
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_TSG31CfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_CDD_TSG31CfgAndUse.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void CDD_TSG31CfgAndUse_TestDefines(void);


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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_TSG31CfgAndUseAdcStrtOfCnvnPeak(void)
 *   uint32 *Rte_Pim_TSG31CfgAndUseMotAg0SPIStart(void)
 *   boolean *Rte_Pim_TSG31CfgAndUseSysStEnaPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 Rte_Prm_CurrMeasEolFixdPwmPerd_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val(void)
 *   uint32 Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val(void)
 *   uint32 Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val(void)
 *   uint32 Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val(void)
 *   uint32 Rte_Prm_TSG31CfgAndUseMtrAg0SPIStart_Val(void)
 *   uint32 Rte_Prm_TSG31CfgAndUsePwmDbnd_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_TSG31CfgAndUse_START_SEC_CODE
#include "CDD_TSG31CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSG31CfgAndUseInit1
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
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TSG31CfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_TSG31CfgAndUse_CODE) TSG31CfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TSG31CfgAndUseInit1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 TSG31CfgAndUseAdcStrtOfCnvnPeak;
  uint32 TSG31CfgAndUseMotAg0SPIStart;
  boolean TSG31CfgAndUseSysStEnaPrev;

  uint32 CurrMeasEolFixdPwmPerd_Val_data;
  uint32 CurrMeasEolOffsHiCmuOffs_Val_data;
  uint32 CurrMeasEolOffsLoCmuOffs_Val_data;
  uint32 TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val_data;
  uint32 TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val_data;
  uint32 TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val_data;
  uint32 TSG31CfgAndUseMtrAg0SPIStart_Val_data;
  uint32 TSG31CfgAndUsePwmDbnd_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TSG31CfgAndUseAdcStrtOfCnvnPeak = *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseAdcStrtOfCnvnPeak();
  *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseAdcStrtOfCnvnPeak() = TSG31CfgAndUseAdcStrtOfCnvnPeak;
  TSG31CfgAndUseMotAg0SPIStart = *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseMotAg0SPIStart();
  *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseMotAg0SPIStart() = TSG31CfgAndUseMotAg0SPIStart;
  TSG31CfgAndUseSysStEnaPrev = *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseSysStEnaPrev();
  *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseSysStEnaPrev() = TSG31CfgAndUseSysStEnaPrev;

  CurrMeasEolFixdPwmPerd_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
  CurrMeasEolOffsHiCmuOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
  CurrMeasEolOffsLoCmuOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
  TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val();
  TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val();
  TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val();
  TSG31CfgAndUseMtrAg0SPIStart_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseMtrAg0SPIStart_Val();
  TSG31CfgAndUsePwmDbnd_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUsePwmDbnd_Val();

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  CDD_TSG31CfgAndUse_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TSG31CfgAndUsePer2
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
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TSG31CfgAndUsePer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_TSG31CfgAndUse_CODE) TSG31CfgAndUsePer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TSG31CfgAndUsePer2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  MotCurrEolCalSt2 Read_MotCurrEolCalSt_Val;
  SysSt1 Read_SysSt_Val;

  uint32 TSG31CfgAndUseAdcStrtOfCnvnPeak;
  uint32 TSG31CfgAndUseMotAg0SPIStart;
  boolean TSG31CfgAndUseSysStEnaPrev;

  uint32 CurrMeasEolFixdPwmPerd_Val_data;
  uint32 CurrMeasEolOffsHiCmuOffs_Val_data;
  uint32 CurrMeasEolOffsLoCmuOffs_Val_data;
  uint32 TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val_data;
  uint32 TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val_data;
  uint32 TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val_data;
  uint32 TSG31CfgAndUseMtrAg0SPIStart_Val_data;
  uint32 TSG31CfgAndUsePwmDbnd_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TSG31CfgAndUseAdcStrtOfCnvnPeak = *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseAdcStrtOfCnvnPeak();
  *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseAdcStrtOfCnvnPeak() = TSG31CfgAndUseAdcStrtOfCnvnPeak;
  TSG31CfgAndUseMotAg0SPIStart = *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseMotAg0SPIStart();
  *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseMotAg0SPIStart() = TSG31CfgAndUseMotAg0SPIStart;
  TSG31CfgAndUseSysStEnaPrev = *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseSysStEnaPrev();
  *TSC_CDD_TSG31CfgAndUse_Rte_Pim_TSG31CfgAndUseSysStEnaPrev() = TSG31CfgAndUseSysStEnaPrev;

  CurrMeasEolFixdPwmPerd_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
  CurrMeasEolOffsHiCmuOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
  CurrMeasEolOffsLoCmuOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
  TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvn2Offs_Val();
  TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs_Val();
  TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs_Val();
  TSG31CfgAndUseMtrAg0SPIStart_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUseMtrAg0SPIStart_Val();
  TSG31CfgAndUsePwmDbnd_Val_data = TSC_CDD_TSG31CfgAndUse_Rte_Prm_TSG31CfgAndUsePwmDbnd_Val();

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Read_MotCurrEolCalSt_Val(&Read_MotCurrEolCalSt_Val);
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

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Read_SysSt_Val(&Read_SysSt_Val);
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

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper();
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
    case RTE_E_SetFctGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctPeriphPhaALowrCmd_Oper();
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
    case RTE_E_SetFctPeriph1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper();
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
    case RTE_E_SetFctPeriph1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper();
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
    case RTE_E_SetFctPeriph1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper();
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
    case RTE_E_SetFctPeriph1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper();
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
    case RTE_E_SetFctPeriph1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper();
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
    case RTE_E_SetFctPeriph1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_CDD_TSG31CfgAndUse_Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(FALSE);
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
    case RTE_E_SetGpio1_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_TSG31CfgAndUse_STOP_SEC_CODE
#include "CDD_TSG31CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void CDD_TSG31CfgAndUse_TestDefines(void)
{
  /* Primitive Types */

  uint32 Test_uint32_LL_1 = Cnt8_LowerLimit;
  uint32 Test_uint32_UL_1 = Cnt8_UpperLimit;
  uint32 Test_uint32_LL_2 = Ti1_LowerLimit;
  uint32 Test_uint32_UL_2 = Ti1_UpperLimit;
  uint32 Test_uint32_LL_3 = Ti2_LowerLimit;
  uint32 Test_uint32_UL_3 = Ti2_UpperLimit;
  uint32 Test_uint32_LL_4 = Ti3_LowerLimit;
  uint32 Test_uint32_UL_4 = Ti3_UpperLimit;
  uint32 Test_uint32_LL_5 = Ti4_LowerLimit;
  uint32 Test_uint32_UL_5 = Ti4_UpperLimit;

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
