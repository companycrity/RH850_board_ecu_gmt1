/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmVehPwrMod.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmVehPwrMod
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmVehPwrMod>
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

#include "Rte_GmVehPwrMod.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmVehPwrMod.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


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
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_TqRefTi(void)
 *   boolean *Rte_Pim_PrevSysStReqEnaVal(void)
 *   boolean *Rte_Pim_TqRefTiActv(void)
 *   boolean *Rte_Pim_dGmVehPwrModHwTqKeepAssi(void)
 *   boolean *Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin(void)
 *   boolean *Rte_Pim_dGmVehPwrModVehSpdAssiOnMin(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val(void)
 *   float32 Rte_Prm_GmVehPwrModOperRampRate_Val(void)
 *   float32 Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val(void)
 *   float32 Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val(void)
 *   uint32 Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val(void)
 *
 *********************************************************************************************************************/


#define GmVehPwrMod_START_SEC_CODE
#include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehPwrModInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehPwrModInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmVehPwrMod_CODE) GmVehPwrModInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehPwrModInit1
 *********************************************************************************************************************/

  uint32 TqRefTi;
  boolean PrevSysStReqEnaVal;
  boolean TqRefTiActv;
  boolean dGmVehPwrModHwTqKeepAssi;
  boolean dGmVehPwrModVehSpdAssiKeepMin;
  boolean dGmVehPwrModVehSpdAssiOnMin;

  float32 GmVehPwrModHwTqMinKeepAssi_Val_data;
  float32 GmVehPwrModOperRampRate_Val_data;
  float32 GmVehPwrModVehSpdAssiOnMin_Val_data;
  float32 GmVehPwrModVehSpdMinKeepAssi_Val_data;
  uint32 GmVehPwrModHwTqMinKeepTmr_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TqRefTi = *TSC_GmVehPwrMod_Rte_Pim_TqRefTi();
  *TSC_GmVehPwrMod_Rte_Pim_TqRefTi() = TqRefTi;
  PrevSysStReqEnaVal = *TSC_GmVehPwrMod_Rte_Pim_PrevSysStReqEnaVal();
  *TSC_GmVehPwrMod_Rte_Pim_PrevSysStReqEnaVal() = PrevSysStReqEnaVal;
  TqRefTiActv = *TSC_GmVehPwrMod_Rte_Pim_TqRefTiActv();
  *TSC_GmVehPwrMod_Rte_Pim_TqRefTiActv() = TqRefTiActv;
  dGmVehPwrModHwTqKeepAssi = *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModHwTqKeepAssi();
  *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModHwTqKeepAssi() = dGmVehPwrModHwTqKeepAssi;
  dGmVehPwrModVehSpdAssiKeepMin = *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin();
  *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin() = dGmVehPwrModVehSpdAssiKeepMin;
  dGmVehPwrModVehSpdAssiOnMin = *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiOnMin();
  *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiOnMin() = dGmVehPwrModVehSpdAssiOnMin;

  GmVehPwrModHwTqMinKeepAssi_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val();
  GmVehPwrModOperRampRate_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModOperRampRate_Val();
  GmVehPwrModVehSpdAssiOnMin_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val();
  GmVehPwrModVehSpdMinKeepAssi_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val();
  GmVehPwrModHwTqMinKeepTmr_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehPwrModPer1
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
 *   Std_ReturnType Rte_Read_BusOffHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EngRunActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PrpnSysActvMsgInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysPwrModMsgInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysPwrModRun_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStEnaReqOvrd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdArbd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSnsrVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrSplyEnaReq_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysOperMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysOperRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehPwrModDftVehSpdEna_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehPwrModPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmVehPwrMod_CODE) GmVehPwrModPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehPwrModPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_BusOffHiSpd_Logl;
  boolean Read_EngRunActv_Logl;
  float32 Read_HwTq_Val;
  boolean Read_PrpnSysActvMsgInvld_Logl;
  boolean Read_SysPwrModMsgInvld_Logl;
  boolean Read_SysPwrModRun_Logl;
  boolean Read_SysStEnaReqOvrd_Logl;
  boolean Read_SysStFltOutpReqDi_Logl;
  float32 Read_VehSpdArbd_Val;
  boolean Read_VehSpdSnsrVld_Logl;

  uint32 TqRefTi;
  boolean PrevSysStReqEnaVal;
  boolean TqRefTiActv;
  boolean dGmVehPwrModHwTqKeepAssi;
  boolean dGmVehPwrModVehSpdAssiKeepMin;
  boolean dGmVehPwrModVehSpdAssiOnMin;

  float32 GmVehPwrModHwTqMinKeepAssi_Val_data;
  float32 GmVehPwrModOperRampRate_Val_data;
  float32 GmVehPwrModVehSpdAssiOnMin_Val_data;
  float32 GmVehPwrModVehSpdMinKeepAssi_Val_data;
  uint32 GmVehPwrModHwTqMinKeepTmr_Val_data;

  boolean Call_GetGpioMcuEna_Oper_PinSt_Arg = FALSE;
  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg = 0U;
  uint32 Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TqRefTi = *TSC_GmVehPwrMod_Rte_Pim_TqRefTi();
  *TSC_GmVehPwrMod_Rte_Pim_TqRefTi() = TqRefTi;
  PrevSysStReqEnaVal = *TSC_GmVehPwrMod_Rte_Pim_PrevSysStReqEnaVal();
  *TSC_GmVehPwrMod_Rte_Pim_PrevSysStReqEnaVal() = PrevSysStReqEnaVal;
  TqRefTiActv = *TSC_GmVehPwrMod_Rte_Pim_TqRefTiActv();
  *TSC_GmVehPwrMod_Rte_Pim_TqRefTiActv() = TqRefTiActv;
  dGmVehPwrModHwTqKeepAssi = *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModHwTqKeepAssi();
  *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModHwTqKeepAssi() = dGmVehPwrModHwTqKeepAssi;
  dGmVehPwrModVehSpdAssiKeepMin = *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin();
  *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin() = dGmVehPwrModVehSpdAssiKeepMin;
  dGmVehPwrModVehSpdAssiOnMin = *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiOnMin();
  *TSC_GmVehPwrMod_Rte_Pim_dGmVehPwrModVehSpdAssiOnMin() = dGmVehPwrModVehSpdAssiOnMin;

  GmVehPwrModHwTqMinKeepAssi_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val();
  GmVehPwrModOperRampRate_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModOperRampRate_Val();
  GmVehPwrModVehSpdAssiOnMin_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val();
  GmVehPwrModVehSpdMinKeepAssi_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val();
  GmVehPwrModHwTqMinKeepTmr_Val_data = TSC_GmVehPwrMod_Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val();

  fct_status = TSC_GmVehPwrMod_Rte_Read_BusOffHiSpd_Logl(&Read_BusOffHiSpd_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_EngRunActv_Logl(&Read_EngRunActv_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_PrpnSysActvMsgInvld_Logl(&Read_PrpnSysActvMsgInvld_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_SysPwrModMsgInvld_Logl(&Read_SysPwrModMsgInvld_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_SysPwrModRun_Logl(&Read_SysPwrModRun_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_SysStEnaReqOvrd_Logl(&Read_SysStEnaReqOvrd_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_SysStFltOutpReqDi_Logl(&Read_SysStFltOutpReqDi_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_VehSpdArbd_Val(&Read_VehSpdArbd_Val);
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

  fct_status = TSC_GmVehPwrMod_Rte_Read_VehSpdSnsrVld_Logl(&Read_VehSpdSnsrVld_Logl);
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

  fct_status = TSC_GmVehPwrMod_Rte_Write_PwrSplyEnaReq_Logl(Rte_InitValue_PwrSplyEnaReq_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmVehPwrMod_Rte_Write_SysOperMotTqCmdSca_Val(Rte_InitValue_SysOperMotTqCmdSca_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmVehPwrMod_Rte_Write_SysOperRampRate_Val(Rte_InitValue_SysOperRampRate_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmVehPwrMod_Rte_Write_SysStReqEna_Logl(Rte_InitValue_SysStReqEna_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmVehPwrMod_Rte_Write_VehPwrModDftVehSpdEna_Logl(Rte_InitValue_VehPwrModDftVehSpdEna_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmVehPwrMod_Rte_Call_GetGpioMcuEna_Oper(&Call_GetGpioMcuEna_Oper_PinSt_Arg);
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
    case RTE_E_GetGpio_PortIf1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_GmVehPwrMod_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr_Arg);
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

  fct_status = TSC_GmVehPwrMod_Rte_Call_GetTiSpan100MicroSec32bit_Oper(0U, &Call_GetTiSpan100MicroSec32bit_Oper_TiSpan_Arg);
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


#define GmVehPwrMod_STOP_SEC_CODE
#include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
