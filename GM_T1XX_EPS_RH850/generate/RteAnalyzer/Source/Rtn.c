/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rtn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  Rtn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Rtn>
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
 * s11p4
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * u12p4
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u5p11
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

#include "Rte_Rtn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_Rtn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void Rtn_TestDefines(void);


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
 * s11p4: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u12p4: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s11p4_14: Array with 14 element(s) of type s11p4
 * Ary1D_u12p4_16: Array with 16 element(s) of type u12p4
 * Ary1D_u5p11_16: Array with 16 element(s) of type u5p11
 * Ary1D_u7p9_4: Array with 4 element(s) of type u7p9
 * Ary1D_u8p8_14: Array with 14 element(s) of type u8p8
 * Ary1D_u8p8_4: Array with 4 element(s) of type u8p8
 * Ary1D_u8p8_8: Array with 8 element(s) of type u8p8
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
 * Ary1D_u9p7_9: Array with 9 element(s) of type u9p7
 * Ary2D_u12p4_9_16: Array with 9 element(s) of type Ary1D_u12p4_16
 * Ary2D_u5p11_9_16: Array with 9 element(s) of type Ary1D_u5p11_16
 * Ary2D_u7p9_9_4: Array with 9 element(s) of type Ary1D_u7p9_4
 * Ary2D_u8p8_9_4: Array with 9 element(s) of type Ary1D_u8p8_4
 * Ary2D_u8p8_9_8: Array with 9 element(s) of type Ary1D_u8p8_8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevHwAgAuthy(void)
 *   float32 *Rte_Pim_PrevHwAgOffsLimd(void)
 *   float32 *Rte_Pim_dRtnAbsltHwAgOffsCalcd(void)
 *   float32 *Rte_Pim_dRtnAssiMechTRtnSca(void)
 *   float32 *Rte_Pim_dRtnBascRtn(void)
 *   float32 *Rte_Pim_dRtnHwAgAuthySca(void)
 *   float32 *Rte_Pim_dRtnHwAgRtnCmd(void)
 *   float32 *Rte_Pim_dRtnHwTqRtnSca(void)
 *   float32 *Rte_Pim_dRtnHwVelRtnSca(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_RtnHwAuthySlew_Val(void)
 *   float32 Rte_Prm_RtnOffsRng_Val(void)
 *   float32 Rte_Prm_RtnOffsSlew_Val(void)
 *   u12p4 *Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_9_16
 *   u5p11 *Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_9_16
 *   u8p8 *Rte_Prm_RtnHwAuthyScaX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_4
 *   u9p7 *Rte_Prm_RtnHwAuthyScaY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u8p8 *Rte_Prm_RtnScaTqX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u8p8 *Rte_Prm_RtnScaTqY_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u7p9 *Rte_Prm_RtnScaVelX_Ary2D(void)
 *     Returnvalue: u7p9* is of type Ary2D_u7p9_9_4
 *   u8p8 *Rte_Prm_RtnScaVelY_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_4
 *   s11p4 *Rte_Prm_RtnTScaX_Ary1D(void)
 *     Returnvalue: s11p4* is of type Ary1D_s11p4_14
 *   u8p8 *Rte_Prm_RtnTScaY_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_14
 *   u9p7 *Rte_Prm_RtnVehSpdSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_9
 *
 *********************************************************************************************************************/


#define Rtn_START_SEC_CODE
#include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Rtn_CODE) RtnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnInit1
 *********************************************************************************************************************/

  float32 PrevHwAgAuthy;
  float32 PrevHwAgOffsLimd;
  float32 dRtnAbsltHwAgOffsCalcd;
  float32 dRtnAssiMechTRtnSca;
  float32 dRtnBascRtn;
  float32 dRtnHwAgAuthySca;
  float32 dRtnHwAgRtnCmd;
  float32 dRtnHwTqRtnSca;
  float32 dRtnHwVelRtnSca;

  float32 RtnHwAuthySlew_Val_data;
  float32 RtnOffsRng_Val_data;
  float32 RtnOffsSlew_Val_data;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D_data;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D_data;
  Ary1D_u8p8_4 RtnHwAuthyScaX_Ary1D_data;
  Ary1D_u9p7_4 RtnHwAuthyScaY_Ary1D_data;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D_data;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D_data;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D_data;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D_data;
  Ary1D_s11p4_14 RtnTScaX_Ary1D_data;
  Ary1D_u8p8_14 RtnTScaY_Ary1D_data;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevHwAgAuthy = *TSC_Rtn_Rte_Pim_PrevHwAgAuthy();
  *TSC_Rtn_Rte_Pim_PrevHwAgAuthy() = PrevHwAgAuthy;
  PrevHwAgOffsLimd = *TSC_Rtn_Rte_Pim_PrevHwAgOffsLimd();
  *TSC_Rtn_Rte_Pim_PrevHwAgOffsLimd() = PrevHwAgOffsLimd;
  dRtnAbsltHwAgOffsCalcd = *TSC_Rtn_Rte_Pim_dRtnAbsltHwAgOffsCalcd();
  *TSC_Rtn_Rte_Pim_dRtnAbsltHwAgOffsCalcd() = dRtnAbsltHwAgOffsCalcd;
  dRtnAssiMechTRtnSca = *TSC_Rtn_Rte_Pim_dRtnAssiMechTRtnSca();
  *TSC_Rtn_Rte_Pim_dRtnAssiMechTRtnSca() = dRtnAssiMechTRtnSca;
  dRtnBascRtn = *TSC_Rtn_Rte_Pim_dRtnBascRtn();
  *TSC_Rtn_Rte_Pim_dRtnBascRtn() = dRtnBascRtn;
  dRtnHwAgAuthySca = *TSC_Rtn_Rte_Pim_dRtnHwAgAuthySca();
  *TSC_Rtn_Rte_Pim_dRtnHwAgAuthySca() = dRtnHwAgAuthySca;
  dRtnHwAgRtnCmd = *TSC_Rtn_Rte_Pim_dRtnHwAgRtnCmd();
  *TSC_Rtn_Rte_Pim_dRtnHwAgRtnCmd() = dRtnHwAgRtnCmd;
  dRtnHwTqRtnSca = *TSC_Rtn_Rte_Pim_dRtnHwTqRtnSca();
  *TSC_Rtn_Rte_Pim_dRtnHwTqRtnSca() = dRtnHwTqRtnSca;
  dRtnHwVelRtnSca = *TSC_Rtn_Rte_Pim_dRtnHwVelRtnSca();
  *TSC_Rtn_Rte_Pim_dRtnHwVelRtnSca() = dRtnHwVelRtnSca;

  RtnHwAuthySlew_Val_data = TSC_Rtn_Rte_Prm_RtnHwAuthySlew_Val();
  RtnOffsRng_Val_data = TSC_Rtn_Rte_Prm_RtnOffsRng_Val();
  RtnOffsSlew_Val_data = TSC_Rtn_Rte_Prm_RtnOffsSlew_Val();
  (void)memcpy(RtnHwAgOffsCalcdX_Ary2D_data, TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(), sizeof(Ary2D_u12p4_9_16));
  (void)memcpy(RtnHwAgOffsCalcdY_Ary2D_data, TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(), sizeof(Ary2D_u5p11_9_16));
  (void)memcpy(RtnHwAuthyScaX_Ary1D_data, TSC_Rtn_Rte_Prm_RtnHwAuthyScaX_Ary1D(), sizeof(Ary1D_u8p8_4));
  (void)memcpy(RtnHwAuthyScaY_Ary1D_data, TSC_Rtn_Rte_Prm_RtnHwAuthyScaY_Ary1D(), sizeof(Ary1D_u9p7_4));
  (void)memcpy(RtnScaTqX_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaTqX_Ary2D(), sizeof(Ary2D_u8p8_9_8));
  (void)memcpy(RtnScaTqY_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaTqY_Ary2D(), sizeof(Ary2D_u8p8_9_8));
  (void)memcpy(RtnScaVelX_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaVelX_Ary2D(), sizeof(Ary2D_u7p9_9_4));
  (void)memcpy(RtnScaVelY_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaVelY_Ary2D(), sizeof(Ary2D_u8p8_9_4));
  (void)memcpy(RtnTScaX_Ary1D_data, TSC_Rtn_Rte_Prm_RtnTScaX_Ary1D(), sizeof(Ary1D_s11p4_14));
  (void)memcpy(RtnTScaY_Ary1D_data, TSC_Rtn_Rte_Prm_RtnTScaY_Ary1D(), sizeof(Ary1D_u8p8_14));
  (void)memcpy(RtnVehSpdSeln_Ary1D_data, TSC_Rtn_Rte_Prm_RtnVehSpdSeln_Ary1D(), sizeof(Ary1D_u9p7_9));

  Rtn_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnPer1
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
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthySca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgRtnOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RtnCmdDiagcDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RtnCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmdScaServo_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RtnCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Rtn_CODE) RtnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_AssiMechT_Val;
  float32 Read_HwAg_Val;
  float32 Read_HwAgAuthySca_Val;
  float32 Read_HwAgRtnOffs_Val;
  float32 Read_HwTq_Val;
  float32 Read_HwVel_Val;
  boolean Read_RtnCmdDi_Logl;
  boolean Read_RtnCmdDiagcDi_Logl;
  float32 Read_RtnCmdSca_Val;
  float32 Read_RtnCmdScaServo_Val;
  float32 Read_VehSpd_Val;
  boolean Read_VehSpdVld_Logl;

  float32 PrevHwAgAuthy;
  float32 PrevHwAgOffsLimd;
  float32 dRtnAbsltHwAgOffsCalcd;
  float32 dRtnAssiMechTRtnSca;
  float32 dRtnBascRtn;
  float32 dRtnHwAgAuthySca;
  float32 dRtnHwAgRtnCmd;
  float32 dRtnHwTqRtnSca;
  float32 dRtnHwVelRtnSca;

  float32 RtnHwAuthySlew_Val_data;
  float32 RtnOffsRng_Val_data;
  float32 RtnOffsSlew_Val_data;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D_data;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D_data;
  Ary1D_u8p8_4 RtnHwAuthyScaX_Ary1D_data;
  Ary1D_u9p7_4 RtnHwAuthyScaY_Ary1D_data;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D_data;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D_data;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D_data;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D_data;
  Ary1D_s11p4_14 RtnTScaX_Ary1D_data;
  Ary1D_u8p8_14 RtnTScaY_Ary1D_data;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevHwAgAuthy = *TSC_Rtn_Rte_Pim_PrevHwAgAuthy();
  *TSC_Rtn_Rte_Pim_PrevHwAgAuthy() = PrevHwAgAuthy;
  PrevHwAgOffsLimd = *TSC_Rtn_Rte_Pim_PrevHwAgOffsLimd();
  *TSC_Rtn_Rte_Pim_PrevHwAgOffsLimd() = PrevHwAgOffsLimd;
  dRtnAbsltHwAgOffsCalcd = *TSC_Rtn_Rte_Pim_dRtnAbsltHwAgOffsCalcd();
  *TSC_Rtn_Rte_Pim_dRtnAbsltHwAgOffsCalcd() = dRtnAbsltHwAgOffsCalcd;
  dRtnAssiMechTRtnSca = *TSC_Rtn_Rte_Pim_dRtnAssiMechTRtnSca();
  *TSC_Rtn_Rte_Pim_dRtnAssiMechTRtnSca() = dRtnAssiMechTRtnSca;
  dRtnBascRtn = *TSC_Rtn_Rte_Pim_dRtnBascRtn();
  *TSC_Rtn_Rte_Pim_dRtnBascRtn() = dRtnBascRtn;
  dRtnHwAgAuthySca = *TSC_Rtn_Rte_Pim_dRtnHwAgAuthySca();
  *TSC_Rtn_Rte_Pim_dRtnHwAgAuthySca() = dRtnHwAgAuthySca;
  dRtnHwAgRtnCmd = *TSC_Rtn_Rte_Pim_dRtnHwAgRtnCmd();
  *TSC_Rtn_Rte_Pim_dRtnHwAgRtnCmd() = dRtnHwAgRtnCmd;
  dRtnHwTqRtnSca = *TSC_Rtn_Rte_Pim_dRtnHwTqRtnSca();
  *TSC_Rtn_Rte_Pim_dRtnHwTqRtnSca() = dRtnHwTqRtnSca;
  dRtnHwVelRtnSca = *TSC_Rtn_Rte_Pim_dRtnHwVelRtnSca();
  *TSC_Rtn_Rte_Pim_dRtnHwVelRtnSca() = dRtnHwVelRtnSca;

  RtnHwAuthySlew_Val_data = TSC_Rtn_Rte_Prm_RtnHwAuthySlew_Val();
  RtnOffsRng_Val_data = TSC_Rtn_Rte_Prm_RtnOffsRng_Val();
  RtnOffsSlew_Val_data = TSC_Rtn_Rte_Prm_RtnOffsSlew_Val();
  (void)memcpy(RtnHwAgOffsCalcdX_Ary2D_data, TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(), sizeof(Ary2D_u12p4_9_16));
  (void)memcpy(RtnHwAgOffsCalcdY_Ary2D_data, TSC_Rtn_Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(), sizeof(Ary2D_u5p11_9_16));
  (void)memcpy(RtnHwAuthyScaX_Ary1D_data, TSC_Rtn_Rte_Prm_RtnHwAuthyScaX_Ary1D(), sizeof(Ary1D_u8p8_4));
  (void)memcpy(RtnHwAuthyScaY_Ary1D_data, TSC_Rtn_Rte_Prm_RtnHwAuthyScaY_Ary1D(), sizeof(Ary1D_u9p7_4));
  (void)memcpy(RtnScaTqX_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaTqX_Ary2D(), sizeof(Ary2D_u8p8_9_8));
  (void)memcpy(RtnScaTqY_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaTqY_Ary2D(), sizeof(Ary2D_u8p8_9_8));
  (void)memcpy(RtnScaVelX_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaVelX_Ary2D(), sizeof(Ary2D_u7p9_9_4));
  (void)memcpy(RtnScaVelY_Ary2D_data, TSC_Rtn_Rte_Prm_RtnScaVelY_Ary2D(), sizeof(Ary2D_u8p8_9_4));
  (void)memcpy(RtnTScaX_Ary1D_data, TSC_Rtn_Rte_Prm_RtnTScaX_Ary1D(), sizeof(Ary1D_s11p4_14));
  (void)memcpy(RtnTScaY_Ary1D_data, TSC_Rtn_Rte_Prm_RtnTScaY_Ary1D(), sizeof(Ary1D_u8p8_14));
  (void)memcpy(RtnVehSpdSeln_Ary1D_data, TSC_Rtn_Rte_Prm_RtnVehSpdSeln_Ary1D(), sizeof(Ary1D_u9p7_9));

  fct_status = TSC_Rtn_Rte_Read_AssiMechT_Val(&Read_AssiMechT_Val);
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

  fct_status = TSC_Rtn_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_Rtn_Rte_Read_HwAgAuthySca_Val(&Read_HwAgAuthySca_Val);
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

  fct_status = TSC_Rtn_Rte_Read_HwAgRtnOffs_Val(&Read_HwAgRtnOffs_Val);
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

  fct_status = TSC_Rtn_Rte_Read_HwTq_Val(&Read_HwTq_Val);
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

  fct_status = TSC_Rtn_Rte_Read_HwVel_Val(&Read_HwVel_Val);
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

  fct_status = TSC_Rtn_Rte_Read_RtnCmdDi_Logl(&Read_RtnCmdDi_Logl);
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

  fct_status = TSC_Rtn_Rte_Read_RtnCmdDiagcDi_Logl(&Read_RtnCmdDiagcDi_Logl);
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

  fct_status = TSC_Rtn_Rte_Read_RtnCmdSca_Val(&Read_RtnCmdSca_Val);
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

  fct_status = TSC_Rtn_Rte_Read_RtnCmdScaServo_Val(&Read_RtnCmdScaServo_Val);
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

  fct_status = TSC_Rtn_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_Rtn_Rte_Read_VehSpdVld_Logl(&Read_VehSpdVld_Logl);
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

  fct_status = TSC_Rtn_Rte_Write_RtnCmd_Val(Rte_InitValue_RtnCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Rtn_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
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


#define Rtn_STOP_SEC_CODE
#include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void Rtn_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Ag15_LowerLimit;
  float32 Test_float32_UL_1 = Ag15_UpperLimit;
  float32 Test_float32_LL_2 = Ag16_LowerLimit;
  float32 Test_float32_UL_2 = Ag16_UpperLimit;
  float32 Test_float32_LL_3 = Ag17_LowerLimit;
  float32 Test_float32_UL_3 = Ag17_UpperLimit;
  float32 Test_float32_LL_4 = Rate4_LowerLimit;
  float32 Test_float32_UL_4 = Rate4_UpperLimit;
  float32 Test_float32_LL_5 = Spd1_LowerLimit;
  float32 Test_float32_UL_5 = Spd1_UpperLimit;
  float32 Test_float32_LL_6 = T1_LowerLimit;
  float32 Test_float32_UL_6 = T1_UpperLimit;
  float32 Test_float32_LL_7 = Tq1_LowerLimit;
  float32 Test_float32_UL_7 = Tq1_UpperLimit;
  float32 Test_float32_LL_8 = Tq2_LowerLimit;
  float32 Test_float32_UL_8 = Tq2_UpperLimit;
  float32 Test_float32_LL_9 = Uls16_LowerLimit;
  float32 Test_float32_UL_9 = Uls16_UpperLimit;
  float32 Test_float32_LL_10 = Uls2_LowerLimit;
  float32 Test_float32_UL_10 = Uls2_UpperLimit;
  float32 Test_float32_LL_11 = Uls5_LowerLimit;
  float32 Test_float32_UL_11 = Uls5_UpperLimit;
  float32 Test_float32_LL_12 = Vel3_LowerLimit;
  float32 Test_float32_UL_12 = Vel3_UpperLimit;
  float32 Test_float32_LL_13 = Vel5_LowerLimit;
  float32 Test_float32_UL_13 = Vel5_UpperLimit;

  s11p4 Test_s11p4_LL_1 = T6_LowerLimit;
  s11p4 Test_s11p4_UL_1 = T6_UpperLimit;

  u12p4 Test_u12p4_LL_1 = Ag18_LowerLimit;
  u12p4 Test_u12p4_UL_1 = Ag18_UpperLimit;

  u5p11 Test_u5p11_LL_1 = Tq14_LowerLimit;
  u5p11 Test_u5p11_UL_1 = Tq14_UpperLimit;

  u7p9 Test_u7p9_LL_1 = Vel6_LowerLimit;
  u7p9 Test_u7p9_UL_1 = Vel6_UpperLimit;

  u8p8 Test_u8p8_LL_1 = Tq6_LowerLimit;
  u8p8 Test_u8p8_UL_1 = Tq6_UpperLimit;
  u8p8 Test_u8p8_LL_2 = Uls17_LowerLimit;
  u8p8 Test_u8p8_UL_2 = Uls17_UpperLimit;
  u8p8 Test_u8p8_LL_3 = Uls19_LowerLimit;
  u8p8 Test_u8p8_UL_3 = Uls19_UpperLimit;
  u8p8 Test_u8p8_LL_4 = Uls23_LowerLimit;
  u8p8 Test_u8p8_UL_4 = Uls23_UpperLimit;

  u9p7 Test_u9p7_LL_1 = Spd2_LowerLimit;
  u9p7 Test_u9p7_UL_1 = Spd2_UpperLimit;
  u9p7 Test_u9p7_LL_2 = Uls18_LowerLimit;
  u9p7 Test_u9p7_UL_2 = Uls18_UpperLimit;

  uint16 Test_uint16_LL_1 = Cnt16_LowerLimit;
  uint16 Test_uint16_UL_1 = Cnt16_UpperLimit;
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
