/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmTqArbn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  GmTqArbn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmTqArbn>
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
 * GmTqArbnEscSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * GmTqArbnLkaSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u1p15
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u4p12
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u7p9
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u8p8
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_GmTqArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_GmTqArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void GmTqArbn_TestDefines(void);


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
 * u1p15: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * GmTqArbnEscSt1: Enumeration of integer in interval [0...255] with enumerators
 *   GMTQARBNESCST_INACTV (0U)
 *   GMTQARBNESCST_ACTV (1U)
 *   GMTQARBNESCST_TMPLIMD (2U)
 *   GMTQARBNESCST_PRMNTFAILD (3U)
 *   GMTQARBNESCST_MFGDI (4U)
 * GmTqArbnLkaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   GMTQARBNLKAST_INACTV (0U)
 *   GMTQARBNLKAST_ACTV (1U)
 *   GMTQARBNLKAST_TMPLIMD (2U)
 *   GMTQARBNLKAST_PRMNTFAILD (3U)
 *   GMTQARBNLKAST_MFGDI (4U)
 *
 * Array Types:
 * ============
 * Ary1D_u1p15_10: Array with 10 element(s) of type u1p15
 * Ary1D_u4p12_20: Array with 20 element(s) of type u4p12
 * Ary1D_u4p12_6: Array with 6 element(s) of type u4p12
 * Ary1D_u7p9_6: Array with 6 element(s) of type u7p9
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_u4p12_12_20: Array with 12 element(s) of type Ary1D_u4p12_20
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_ActPosnServoCmd(void)
 *   float32 *Rte_Pim_DesLkaTqCmdRateLim(void)
 *   float32 *Rte_Pim_PosnServoSmotngEnaRateLim(void)
 *   float32 *Rte_Pim_dGmTqArbnDesLkaTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnEscTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnLkaOutpTqReq(void)
 *   float32 *Rte_Pim_dGmTqArbnLkaTqCmd(void)
 *   float32 *Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim(void)
 *   FilLpRec1 *Rte_Pim_APASmotngHwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmTqArbnApaEnaRate_Val(void)
 *   float32 Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_GmTqArbnEscMaxTq_Val(void)
 *   float32 Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val(void)
 *   boolean Rte_Prm_GmTqArbnApaAssiScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnApaDampgScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnApaRtnScaEna_Logl(void)
 *   boolean Rte_Prm_GmTqArbnLkaSlewEna_Logl(void)
 *   u4p12 *Rte_Prm_GmTqArbnApaDiRateX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_6
 *   u7p9 *Rte_Prm_GmTqArbnApaDiRateY_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_6
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngX_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_10
 *   u1p15 *Rte_Prm_GmTqArbnApaSmotngY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_10
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(void)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_20
 *   u4p12 *Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(void)
 *     Returnvalue: u4p12* is of type Ary2D_u4p12_12_20
 *   u8p8 *Rte_Prm_GmTqArbnLkaSlewX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u4p12 *Rte_Prm_GmTqArbnLkaSlewY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_6
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define GmTqArbn_START_SEC_CODE
#include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmTqArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmTqArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmTqArbn_CODE) GmTqArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmTqArbnInit1
 *********************************************************************************************************************/

  float32 ActPosnServoCmd;
  float32 DesLkaTqCmdRateLim;
  float32 PosnServoSmotngEnaRateLim;
  float32 dGmTqArbnDesLkaTqCmd;
  float32 dGmTqArbnEscTqCmd;
  float32 dGmTqArbnLkaOutpTqReq;
  float32 dGmTqArbnLkaTqCmd;
  float32 dGmTqArbnPosnServoSmotngLowrLim;
  FilLpRec1 APASmotngHwTqLpFil;

  float32 GmTqArbnApaEnaRate_Val_data;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val_data;
  float32 GmTqArbnEscMaxTq_Val_data;
  float32 GmTqArbnLkaOutpOvrlUpprLim_Val_data;
  boolean GmTqArbnApaAssiScaEna_Logl_data;
  boolean GmTqArbnApaDampgScaEna_Logl_data;
  boolean GmTqArbnApaRtnScaEna_Logl_data;
  boolean GmTqArbnLkaSlewEna_Logl_data;
  Ary1D_u4p12_6 GmTqArbnApaDiRateX_Ary1D_data;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D_data;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D_data;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D_data;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D_data;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D_data;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D_data;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  ActPosnServoCmd = *TSC_GmTqArbn_Rte_Pim_ActPosnServoCmd();
  *TSC_GmTqArbn_Rte_Pim_ActPosnServoCmd() = ActPosnServoCmd;
  DesLkaTqCmdRateLim = *TSC_GmTqArbn_Rte_Pim_DesLkaTqCmdRateLim();
  *TSC_GmTqArbn_Rte_Pim_DesLkaTqCmdRateLim() = DesLkaTqCmdRateLim;
  PosnServoSmotngEnaRateLim = *TSC_GmTqArbn_Rte_Pim_PosnServoSmotngEnaRateLim();
  *TSC_GmTqArbn_Rte_Pim_PosnServoSmotngEnaRateLim() = PosnServoSmotngEnaRateLim;
  dGmTqArbnDesLkaTqCmd = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnDesLkaTqCmd();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnDesLkaTqCmd() = dGmTqArbnDesLkaTqCmd;
  dGmTqArbnEscTqCmd = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnEscTqCmd();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnEscTqCmd() = dGmTqArbnEscTqCmd;
  dGmTqArbnLkaOutpTqReq = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaOutpTqReq();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaOutpTqReq() = dGmTqArbnLkaOutpTqReq;
  dGmTqArbnLkaTqCmd = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaTqCmd();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaTqCmd() = dGmTqArbnLkaTqCmd;
  dGmTqArbnPosnServoSmotngLowrLim = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim() = dGmTqArbnPosnServoSmotngLowrLim;
  APASmotngHwTqLpFil = *TSC_GmTqArbn_Rte_Pim_APASmotngHwTqLpFil();
  *TSC_GmTqArbn_Rte_Pim_APASmotngHwTqLpFil() = APASmotngHwTqLpFil;

  GmTqArbnApaEnaRate_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaEnaRate_Val();
  GmTqArbnApaSmotngHwTqLpFilFrq_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val();
  GmTqArbnEscMaxTq_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnEscMaxTq_Val();
  GmTqArbnLkaOutpOvrlUpprLim_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val();
  GmTqArbnApaAssiScaEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaAssiScaEna_Logl();
  GmTqArbnApaDampgScaEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDampgScaEna_Logl();
  GmTqArbnApaRtnScaEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaRtnScaEna_Logl();
  GmTqArbnLkaSlewEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewEna_Logl();
  (void)memcpy(GmTqArbnApaDiRateX_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDiRateX_Ary1D(), sizeof(Ary1D_u4p12_6));
  (void)memcpy(GmTqArbnApaDiRateY_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDiRateY_Ary1D(), sizeof(Ary1D_u7p9_6));
  (void)memcpy(GmTqArbnApaSmotngX_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngX_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(GmTqArbnApaSmotngY_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngY_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(GmTqArbnLkaOutpOvrlX_Ary2D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(), sizeof(Ary2D_u4p12_12_20));
  (void)memcpy(GmTqArbnLkaOutpOvrlY_Ary2D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(), sizeof(Ary2D_u4p12_12_20));
  (void)memcpy(GmTqArbnLkaSlewX_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewX_Ary1D(), sizeof(Ary1D_u8p8_6));
  (void)memcpy(GmTqArbnLkaSlewY_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewY_Ary1D(), sizeof(Ary1D_u4p12_6));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_GmTqArbn_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));

  GmTqArbn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmTqArbnPer1
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
 *   Std_ReturnType Rte_Read_EscCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EscSt_Val(GmTqArbnEscSt1 *data)
 *   Std_ReturnType Rte_Read_HwAgServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwOscnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOscCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaSt_Val(GmTqArbnLkaSt1 *data)
 *   Std_ReturnType Rte_Read_LkaTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqServoCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMaxSecur_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdBasSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_DampgCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_EscCmdArbd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EscLimdActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwTqOvrl_Val(float32 data)
 *   Std_ReturnType Rte_Write_LkaTqCmdCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdOvrl_Val(float32 data)
 *   Std_ReturnType Rte_Write_PullCmpCustLrngDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RtnCmdSca_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GmTqArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GmTqArbn_CODE) GmTqArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmTqArbnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_EscCmd_Val;
  GmTqArbnEscSt1 Read_EscSt_Val;
  boolean Read_HwAgServoEna_Logl;
  boolean Read_HwOscnEna_Logl;
  float32 Read_HwTq_Val;
  float32 Read_HwTqOscCmd_Val;
  GmTqArbnLkaSt1 Read_LkaSt_Val;
  float32 Read_LkaTqCmd_Val;
  float32 Read_MotTqServoCmd_Val;
  float32 Read_VehSpdMaxSecur_Val;

  float32 ActPosnServoCmd;
  float32 DesLkaTqCmdRateLim;
  float32 PosnServoSmotngEnaRateLim;
  float32 dGmTqArbnDesLkaTqCmd;
  float32 dGmTqArbnEscTqCmd;
  float32 dGmTqArbnLkaOutpTqReq;
  float32 dGmTqArbnLkaTqCmd;
  float32 dGmTqArbnPosnServoSmotngLowrLim;
  FilLpRec1 APASmotngHwTqLpFil;

  float32 GmTqArbnApaEnaRate_Val_data;
  float32 GmTqArbnApaSmotngHwTqLpFilFrq_Val_data;
  float32 GmTqArbnEscMaxTq_Val_data;
  float32 GmTqArbnLkaOutpOvrlUpprLim_Val_data;
  boolean GmTqArbnApaAssiScaEna_Logl_data;
  boolean GmTqArbnApaDampgScaEna_Logl_data;
  boolean GmTqArbnApaRtnScaEna_Logl_data;
  boolean GmTqArbnLkaSlewEna_Logl_data;
  Ary1D_u4p12_6 GmTqArbnApaDiRateX_Ary1D_data;
  Ary1D_u7p9_6 GmTqArbnApaDiRateY_Ary1D_data;
  Ary1D_u1p15_10 GmTqArbnApaSmotngX_Ary1D_data;
  Ary1D_u1p15_10 GmTqArbnApaSmotngY_Ary1D_data;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlX_Ary2D_data;
  Ary2D_u4p12_12_20 GmTqArbnLkaOutpOvrlY_Ary2D_data;
  Ary1D_u8p8_6 GmTqArbnLkaSlewX_Ary1D_data;
  Ary1D_u4p12_6 GmTqArbnLkaSlewY_Ary1D_data;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  ActPosnServoCmd = *TSC_GmTqArbn_Rte_Pim_ActPosnServoCmd();
  *TSC_GmTqArbn_Rte_Pim_ActPosnServoCmd() = ActPosnServoCmd;
  DesLkaTqCmdRateLim = *TSC_GmTqArbn_Rte_Pim_DesLkaTqCmdRateLim();
  *TSC_GmTqArbn_Rte_Pim_DesLkaTqCmdRateLim() = DesLkaTqCmdRateLim;
  PosnServoSmotngEnaRateLim = *TSC_GmTqArbn_Rte_Pim_PosnServoSmotngEnaRateLim();
  *TSC_GmTqArbn_Rte_Pim_PosnServoSmotngEnaRateLim() = PosnServoSmotngEnaRateLim;
  dGmTqArbnDesLkaTqCmd = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnDesLkaTqCmd();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnDesLkaTqCmd() = dGmTqArbnDesLkaTqCmd;
  dGmTqArbnEscTqCmd = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnEscTqCmd();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnEscTqCmd() = dGmTqArbnEscTqCmd;
  dGmTqArbnLkaOutpTqReq = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaOutpTqReq();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaOutpTqReq() = dGmTqArbnLkaOutpTqReq;
  dGmTqArbnLkaTqCmd = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaTqCmd();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnLkaTqCmd() = dGmTqArbnLkaTqCmd;
  dGmTqArbnPosnServoSmotngLowrLim = *TSC_GmTqArbn_Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim();
  *TSC_GmTqArbn_Rte_Pim_dGmTqArbnPosnServoSmotngLowrLim() = dGmTqArbnPosnServoSmotngLowrLim;
  APASmotngHwTqLpFil = *TSC_GmTqArbn_Rte_Pim_APASmotngHwTqLpFil();
  *TSC_GmTqArbn_Rte_Pim_APASmotngHwTqLpFil() = APASmotngHwTqLpFil;

  GmTqArbnApaEnaRate_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaEnaRate_Val();
  GmTqArbnApaSmotngHwTqLpFilFrq_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngHwTqLpFilFrq_Val();
  GmTqArbnEscMaxTq_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnEscMaxTq_Val();
  GmTqArbnLkaOutpOvrlUpprLim_Val_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlUpprLim_Val();
  GmTqArbnApaAssiScaEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaAssiScaEna_Logl();
  GmTqArbnApaDampgScaEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDampgScaEna_Logl();
  GmTqArbnApaRtnScaEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnApaRtnScaEna_Logl();
  GmTqArbnLkaSlewEna_Logl_data = TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewEna_Logl();
  (void)memcpy(GmTqArbnApaDiRateX_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDiRateX_Ary1D(), sizeof(Ary1D_u4p12_6));
  (void)memcpy(GmTqArbnApaDiRateY_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaDiRateY_Ary1D(), sizeof(Ary1D_u7p9_6));
  (void)memcpy(GmTqArbnApaSmotngX_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngX_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(GmTqArbnApaSmotngY_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnApaSmotngY_Ary1D(), sizeof(Ary1D_u1p15_10));
  (void)memcpy(GmTqArbnLkaOutpOvrlX_Ary2D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlX_Ary2D(), sizeof(Ary2D_u4p12_12_20));
  (void)memcpy(GmTqArbnLkaOutpOvrlY_Ary2D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaOutpOvrlY_Ary2D(), sizeof(Ary2D_u4p12_12_20));
  (void)memcpy(GmTqArbnLkaSlewX_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewX_Ary1D(), sizeof(Ary1D_u8p8_6));
  (void)memcpy(GmTqArbnLkaSlewY_Ary1D_data, TSC_GmTqArbn_Rte_Prm_GmTqArbnLkaSlewY_Ary1D(), sizeof(Ary1D_u4p12_6));
  (void)memcpy(SysGlbPrmVehSpdBilnrSeln_Ary1D_data, TSC_GmTqArbn_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(), sizeof(Ary1D_u9p7_12));

  fct_status = TSC_GmTqArbn_Rte_Read_EscCmd_Val(&Read_EscCmd_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Read_EscSt_Val(&Read_EscSt_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Read_HwAgServoEna_Logl(&Read_HwAgServoEna_Logl);
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

  fct_status = TSC_GmTqArbn_Rte_Read_HwOscnEna_Logl(&Read_HwOscnEna_Logl);
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

  fct_status = TSC_GmTqArbn_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Read_HwTqOscCmd_Val(&Read_HwTqOscCmd_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Read_LkaSt_Val(&Read_LkaSt_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Read_LkaTqCmd_Val(&Read_LkaTqCmd_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Read_MotTqServoCmd_Val(&Read_MotTqServoCmd_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Read_VehSpdMaxSecur_Val(&Read_VehSpdMaxSecur_Val);
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

  fct_status = TSC_GmTqArbn_Rte_Write_AssiCmdBasSca_Val(Rte_InitValue_AssiCmdBasSca_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_DampgCmdSca_Val(Rte_InitValue_DampgCmdSca_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_EscCmdArbd_Val(Rte_InitValue_EscCmdArbd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_EscLimdActv_Logl(Rte_InitValue_EscLimdActv_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_HwTqOvrl_Val(Rte_InitValue_HwTqOvrl_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_LkaTqCmdCdnd_Val(Rte_InitValue_LkaTqCmdCdnd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_MotTqCmdOvrl_Val(Rte_InitValue_MotTqCmdOvrl_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_PullCmpCustLrngDi_Logl(Rte_InitValue_PullCmpCustLrngDi_Logl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_GmTqArbn_Rte_Write_RtnCmdSca_Val(Rte_InitValue_RtnCmdSca_Val);
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


#define GmTqArbn_STOP_SEC_CODE
#include "GmTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void GmTqArbn_TestDefines(void)
{
  /* Enumeration Data Types */

  GmTqArbnEscSt1 Test_GmTqArbnEscSt1_V_1 = GMTQARBNESCST_INACTV;
  GmTqArbnEscSt1 Test_GmTqArbnEscSt1_V_2 = GMTQARBNESCST_ACTV;
  GmTqArbnEscSt1 Test_GmTqArbnEscSt1_V_3 = GMTQARBNESCST_TMPLIMD;
  GmTqArbnEscSt1 Test_GmTqArbnEscSt1_V_4 = GMTQARBNESCST_PRMNTFAILD;
  GmTqArbnEscSt1 Test_GmTqArbnEscSt1_V_5 = GMTQARBNESCST_MFGDI;

  GmTqArbnLkaSt1 Test_GmTqArbnLkaSt1_V_1 = GMTQARBNLKAST_INACTV;
  GmTqArbnLkaSt1 Test_GmTqArbnLkaSt1_V_2 = GMTQARBNLKAST_ACTV;
  GmTqArbnLkaSt1 Test_GmTqArbnLkaSt1_V_3 = GMTQARBNLKAST_TMPLIMD;
  GmTqArbnLkaSt1 Test_GmTqArbnLkaSt1_V_4 = GMTQARBNLKAST_PRMNTFAILD;
  GmTqArbnLkaSt1 Test_GmTqArbnLkaSt1_V_5 = GMTQARBNLKAST_MFGDI;
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
