/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SerlComInpProxy.c
 *        Config:  EPS.dpa
 *     SW-C Type:  SerlComInpProxy
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SerlComInpProxy>
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

#include "Rte_SerlComInpProxy.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_SerlComInpProxy.h"


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
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u8_12: Array with 12 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define SerlComInpProxy_START_SEC_CODE
#include "SerlComInpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComInpProxyGmLanIdRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SerlComInpProxyGmLanIdRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SerlComInpProxyGmLanIdRd_Oper(uint8 *GmLanId)
 *     Argument GmLanId: uint8* is of type Ary1D_u8_12
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyGmLanIdRd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyGmLanIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) GmLanId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyGmLanIdRd_Oper
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComInpProxyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComInpProxyPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SerlComDi_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AbsActvProtdProtnValRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsActvProtdRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsActvProtdRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsFaildRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_BackUpPwrModMstVirtDevAuthyRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_BusOffChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_BusOffHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EngOilTRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EngOilVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EngRunActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EngSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_EngSpdStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LeWhlDstPlsCntrRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LeWhlDstTiStampRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LeWhlDstVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LeWhlRotlStsRstRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LeWhlSeqNrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaCmdProtnValRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaCmdRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaCmdTqReqActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaCmdTqValRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg0C5_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg0C9_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg17D_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg180BusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg180BusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg182_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg1E9_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg1F1_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg1F5_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg214_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg232_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg337BusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg348BusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg348BusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg34ABusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg34ABusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg3F1_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg4D1_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg500BusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_OutdAirTCorrdValMaskRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutdAirTCorrdValRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutdAirTCorrdValVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PtCrkActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RdntVehStabyEnhmtSysActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RiWhlDstPlsCntrRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_RiWhlDstTiStampRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_RiWhlDstVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RiWhlRotlStsRstRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RiWhlSeqNrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ShiftLvrPosnRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ShiftLvrPosnVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerSysPrfmncModReqRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqActvVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqProtnValRaw_Val(uint32 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqTarAgRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlFbReqActvProtnValRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlFbReqActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlFbReqActvRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysBackUpPwrModEnaRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysBackUpPwrModRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysPwrModRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlAlvRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlCmdChksRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDeltaTqCmdActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlDeltaTqCmdValRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TracCtrlSysActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TracCtrlSysEnaRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehDynCtrlSysStRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehDynOverUnderSteerVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehDynYawRateRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_VehDynYawRateVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLatARaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLatAVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLgtALoReslRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLgtALoReslVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlPlsPerRevRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlRotlStsTiStampReslRaw_Val(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_SerlComDi_Logl;

  uint32 Call_GetRefTmr100MicroSec32bit_Oper_RefTmr = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_SerlComInpProxy_Rte_Read_SerlComDi_Logl(&Read_SerlComDi_Logl);
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

  fct_status = TSC_SerlComInpProxy_Rte_Write_AbsActvProtdProtnValRaw_Val(Rte_InitValue_AbsActvProtdProtnValRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_AbsActvProtdRaw_Val(Rte_InitValue_AbsActvProtdRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_AbsActvProtdRollgCntrRaw_Val(Rte_InitValue_AbsActvProtdRollgCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_AbsActvRaw_Val(Rte_InitValue_AbsActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_AbsFaildRaw_Val(Rte_InitValue_AbsFaildRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_BackUpPwrModMstVirtDevAuthyRaw_Val(Rte_InitValue_BackUpPwrModMstVirtDevAuthyRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_BusOffChassisExp_Logl(Rte_InitValue_BusOffChassisExp_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_BusOffHiSpd_Logl(Rte_InitValue_BusOffHiSpd_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_EngOilTRaw_Val(Rte_InitValue_EngOilTRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_EngOilVldRaw_Val(Rte_InitValue_EngOilVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_EngRunActvRaw_Val(Rte_InitValue_EngRunActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_EngSpdRaw_Val(Rte_InitValue_EngSpdRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_EngSpdStsRaw_Val(Rte_InitValue_EngSpdStsRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LeWhlDstPlsCntrRaw_Val(Rte_InitValue_LeWhlDstPlsCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LeWhlDstTiStampRaw_Val(Rte_InitValue_LeWhlDstTiStampRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LeWhlDstVldRaw_Val(Rte_InitValue_LeWhlDstVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LeWhlRotlStsRstRaw_Val(Rte_InitValue_LeWhlRotlStsRstRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LeWhlSeqNrRaw_Val(Rte_InitValue_LeWhlSeqNrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LkaCmdProtnValRaw_Val(Rte_InitValue_LkaCmdProtnValRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LkaCmdRollgCntrRaw_Val(Rte_InitValue_LkaCmdRollgCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LkaCmdTqReqActvRaw_Val(Rte_InitValue_LkaCmdTqReqActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LkaCmdTqValRaw_Val(Rte_InitValue_LkaCmdTqValRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg0C5_Val(Rte_InitValue_LstRxnTiMsg0C5_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg0C9_Val(Rte_InitValue_LstRxnTiMsg0C9_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg17D_Val(Rte_InitValue_LstRxnTiMsg17D_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg180BusChassisExp_Val(Rte_InitValue_LstRxnTiMsg180BusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg180BusHiSpd_Val(Rte_InitValue_LstRxnTiMsg180BusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg182_Val(Rte_InitValue_LstRxnTiMsg182_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg1E9_Val(Rte_InitValue_LstRxnTiMsg1E9_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg1F1_Val(Rte_InitValue_LstRxnTiMsg1F1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg1F5_Val(Rte_InitValue_LstRxnTiMsg1F5_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg214_Val(Rte_InitValue_LstRxnTiMsg214_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg232_Val(Rte_InitValue_LstRxnTiMsg232_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg337BusChassisExp_Val(Rte_InitValue_LstRxnTiMsg337BusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg348BusChassisExp_Val(Rte_InitValue_LstRxnTiMsg348BusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg348BusHiSpd_Val(Rte_InitValue_LstRxnTiMsg348BusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg34ABusChassisExp_Val(Rte_InitValue_LstRxnTiMsg34ABusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg34ABusHiSpd_Val(Rte_InitValue_LstRxnTiMsg34ABusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg3F1_Val(Rte_InitValue_LstRxnTiMsg3F1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg4D1_Val(Rte_InitValue_LstRxnTiMsg4D1_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg500BusHiSpd_Val(Rte_InitValue_LstRxnTiMsg500BusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_OutdAirTCorrdValMaskRaw_Val(Rte_InitValue_OutdAirTCorrdValMaskRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_OutdAirTCorrdValRaw_Val(Rte_InitValue_OutdAirTCorrdValRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_OutdAirTCorrdValVldRaw_Val(Rte_InitValue_OutdAirTCorrdValVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_PtCrkActvRaw_Val(Rte_InitValue_PtCrkActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_RdntVehStabyEnhmtSysActvRaw_Val(Rte_InitValue_RdntVehStabyEnhmtSysActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(Rte_InitValue_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_RiWhlDstPlsCntrRaw_Val(Rte_InitValue_RiWhlDstPlsCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_RiWhlDstTiStampRaw_Val(Rte_InitValue_RiWhlDstTiStampRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_RiWhlDstVldRaw_Val(Rte_InitValue_RiWhlDstVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_RiWhlRotlStsRstRaw_Val(Rte_InitValue_RiWhlRotlStsRstRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_RiWhlSeqNrRaw_Val(Rte_InitValue_RiWhlSeqNrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_ShiftLvrPosnRaw_Val(Rte_InitValue_ShiftLvrPosnRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_ShiftLvrPosnVldRaw_Val(Rte_InitValue_ShiftLvrPosnVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerSysPrfmncModReqRaw_Val(Rte_InitValue_SteerSysPrfmncModReqRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqActvRaw_Val(Rte_InitValue_SteerWhlAgReqActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqActvVldRaw_Val(Rte_InitValue_SteerWhlAgReqActvVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqProtnValRaw_Val(Rte_InitValue_SteerWhlAgReqProtnValRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqRollgCntrRaw_Val(Rte_InitValue_SteerWhlAgReqRollgCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqTarAgRaw_Val(Rte_InitValue_SteerWhlAgReqTarAgRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlFbReqActvProtnValRaw_Val(Rte_InitValue_SteerWhlFbReqActvProtnValRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlFbReqActvRaw_Val(Rte_InitValue_SteerWhlFbReqActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SteerWhlFbReqActvRollgCntrRaw_Val(Rte_InitValue_SteerWhlFbReqActvRollgCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SysBackUpPwrModEnaRaw_Val(Rte_InitValue_SysBackUpPwrModEnaRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SysBackUpPwrModRaw_Val(Rte_InitValue_SysBackUpPwrModRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_SysPwrModRaw_Val(Rte_InitValue_SysPwrModRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_TqOvrlAlvRollgCntrRaw_Val(Rte_InitValue_TqOvrlAlvRollgCntrRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_TqOvrlCmdChksRaw_Val(Rte_InitValue_TqOvrlCmdChksRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_TqOvrlDeltaTqCmdActvRaw_Val(Rte_InitValue_TqOvrlDeltaTqCmdActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_TqOvrlDeltaTqCmdValRaw_Val(Rte_InitValue_TqOvrlDeltaTqCmdValRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_TracCtrlSysActvRaw_Val(Rte_InitValue_TracCtrlSysActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_TracCtrlSysEnaRaw_Val(Rte_InitValue_TracCtrlSysEnaRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehDynCtrlSysStRaw_Val(Rte_InitValue_VehDynCtrlSysStRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehDynOverUnderSteerVldRaw_Val(Rte_InitValue_VehDynOverUnderSteerVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehDynYawRateRaw_Val(Rte_InitValue_VehDynYawRateRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehDynYawRateVldRaw_Val(Rte_InitValue_VehDynYawRateVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtActvRaw_Val(Rte_InitValue_VehStabyEnhmtActvRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLatARaw_Val(Rte_InitValue_VehStabyEnhmtLatARaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLatAVldRaw_Val(Rte_InitValue_VehStabyEnhmtLatAVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLgtALoReslRaw_Val(Rte_InitValue_VehStabyEnhmtLgtALoReslRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLgtALoReslVldRaw_Val(Rte_InitValue_VehStabyEnhmtLgtALoReslVldRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtStsRaw_Val(Rte_InitValue_VehStabyEnhmtStsRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnRawBusChassisExp_Val(Rte_InitValue_WhlGndVelLeDrvnRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnRawBusHiSpd_Val(Rte_InitValue_WhlGndVelLeDrvnRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnVldRawBusChassisExp_Val(Rte_InitValue_WhlGndVelLeDrvnVldRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnVldRawBusHiSpd_Val(Rte_InitValue_WhlGndVelLeDrvnVldRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnRawBusChassisExp_Val(Rte_InitValue_WhlGndVelLeNonDrvnRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnRawBusHiSpd_Val(Rte_InitValue_WhlGndVelLeNonDrvnRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnRawBusChassisExp_Val(Rte_InitValue_WhlGndVelRiDrvnRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnRawBusHiSpd_Val(Rte_InitValue_WhlGndVelRiDrvnRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnVldRawBusChassisExp_Val(Rte_InitValue_WhlGndVelRiDrvnVldRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnVldRawBusHiSpd_Val(Rte_InitValue_WhlGndVelRiDrvnVldRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnRawBusChassisExp_Val(Rte_InitValue_WhlGndVelRiNonDrvnRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnRawBusHiSpd_Val(Rte_InitValue_WhlGndVelRiNonDrvnRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlPlsPerRevRaw_Val(Rte_InitValue_WhlPlsPerRevRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Write_WhlRotlStsTiStampReslRaw_Val(Rte_InitValue_WhlRotlStsTiStampReslRaw_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_SerlComInpProxy_Rte_Call_GetRefTmr100MicroSec32bit_Oper(&Call_GetRefTmr100MicroSec32bit_Oper_RefTmr);
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


#define SerlComInpProxy_STOP_SEC_CODE
#include "SerlComInpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
