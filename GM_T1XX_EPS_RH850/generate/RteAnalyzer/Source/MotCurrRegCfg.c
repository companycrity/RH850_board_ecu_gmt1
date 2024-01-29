/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotCurrRegCfg.c
 *        Config:  EPS.dpa
 *     SW-C Type:  MotCurrRegCfg
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotCurrRegCfg>
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
 * u10p6
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u11p5
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

#include "Rte_MotCurrRegCfg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_MotCurrRegCfg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void MotCurrRegCfg_TestDefines(void);


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
 * u10p6: Integer in interval [0...65535]
 * u11p5: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
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
 *
 * Array Types:
 * ============
 * Ary1D_u10p6_4: Array with 4 element(s) of type u10p6
 * Ary1D_u11p5_4: Array with 4 element(s) of type u11p5
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
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
 *   float32 *Rte_Pim_dMotCurrRegCfgMotVelMrfFild(void)
 *   FilLpRec1 *Rte_Pim_MotVelMrfFild(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   boolean Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *   u10p6 *Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_4
 *   u10p6 *Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_4
 *   u11p5 *Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_4
 *   u9p7 *Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *
 *********************************************************************************************************************/


#define MotCurrRegCfg_START_SEC_CODE
#include "MotCurrRegCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrRegCfg_CODE) MotCurrRegCfgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgInit1
 *********************************************************************************************************************/

  float32 dMotCurrRegCfgMotVelMrfFild;
  FilLpRec1 MotVelMrfFild;

  float32 MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val_data;
  float32 MotCurrRegCfgIntglGainSampleTi_Val_data;
  float32 MotCurrRegCfgMotAgCompuDly_Val_data;
  float32 MotCurrRegCfgMotDampgRatDax_Val_data;
  float32 MotCurrRegCfgMotDampgRatQax_Val_data;
  float32 MotCurrRegCfgMotRVirtDax_Val_data;
  float32 MotCurrRegCfgMotRVirtQax_Val_data;
  float32 MotCurrRegCfgMotVelFilFrq_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  boolean MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl_data;
  boolean MotRefMdlFbCtrlDi_Logl_data;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D_data;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D_data;
  Ary1D_u11p5_4 MotCurrRegCfgMotCtrlPrmSelnX_Ary1D_data;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqDaxY_Ary1D_data;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqQaxY_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCurrRegCfgMotVelMrfFild = *TSC_MotCurrRegCfg_Rte_Pim_dMotCurrRegCfgMotVelMrfFild();
  *TSC_MotCurrRegCfg_Rte_Pim_dMotCurrRegCfgMotVelMrfFild() = dMotCurrRegCfgMotVelMrfFild;
  MotVelMrfFild = *TSC_MotCurrRegCfg_Rte_Pim_MotVelMrfFild();
  *TSC_MotCurrRegCfg_Rte_Pim_MotVelMrfFild() = MotVelMrfFild;

  MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val();
  MotCurrRegCfgIntglGainSampleTi_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val();
  MotCurrRegCfgMotAgCompuDly_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val();
  MotCurrRegCfgMotDampgRatDax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val();
  MotCurrRegCfgMotDampgRatQax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val();
  MotCurrRegCfgMotRVirtDax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotRVirtDax_Val();
  MotCurrRegCfgMotRVirtQax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotRVirtQax_Val();
  MotCurrRegCfgMotVelFilFrq_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotCurrRegCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl();
  MotRefMdlFbCtrlDi_Logl_data = TSC_MotCurrRegCfg_Rte_Prm_MotRefMdlFbCtrlDi_Logl();
  (void)memcpy(MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(), sizeof(Ary1D_u10p6_4));
  (void)memcpy(MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(), sizeof(Ary1D_u10p6_4));
  (void)memcpy(MotCurrRegCfgMotCtrlPrmSelnX_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(), sizeof(Ary1D_u11p5_4));
  (void)memcpy(MotCurrRegCfgMotNatFrqDaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D(), sizeof(Ary1D_u9p7_4));
  (void)memcpy(MotCurrRegCfgMotNatFrqQaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D(), sizeof(Ary1D_u9p7_4));

  MotCurrRegCfg_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegCfgPer1
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
 *   Std_ReturnType Rte_Read_CurrMeasLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotREstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAgElecDly_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDampgDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDampgQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotIntglGainDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotIntglGainQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotPropGainDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotPropGainQax_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrRegCfg_CODE) MotCurrRegCfgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_CurrMeasLoaMtgtnEna_Logl;
  boolean Read_DualEcuMotCtrlMtgtnEna_Logl;
  boolean Read_IvtrLoaMtgtnEna_Logl;
  MotCurrEolCalSt2 Read_MotCurrEolCalSt_Val;
  float32 Read_MotInduDaxEstimd_Val;
  float32 Read_MotInduQaxEstimd_Val;
  float32 Read_MotREstimd_Val;
  float32 Read_MotVelMrf_Val;
  float32 Read_VehSpd_Val;

  float32 dMotCurrRegCfgMotVelMrfFild;
  FilLpRec1 MotVelMrfFild;

  float32 MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val_data;
  float32 MotCurrRegCfgIntglGainSampleTi_Val_data;
  float32 MotCurrRegCfgMotAgCompuDly_Val_data;
  float32 MotCurrRegCfgMotDampgRatDax_Val_data;
  float32 MotCurrRegCfgMotDampgRatQax_Val_data;
  float32 MotCurrRegCfgMotRVirtDax_Val_data;
  float32 MotCurrRegCfgMotRVirtQax_Val_data;
  float32 MotCurrRegCfgMotVelFilFrq_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  boolean MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl_data;
  boolean MotRefMdlFbCtrlDi_Logl_data;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D_data;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D_data;
  Ary1D_u11p5_4 MotCurrRegCfgMotCtrlPrmSelnX_Ary1D_data;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqDaxY_Ary1D_data;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqQaxY_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCurrRegCfgMotVelMrfFild = *TSC_MotCurrRegCfg_Rte_Pim_dMotCurrRegCfgMotVelMrfFild();
  *TSC_MotCurrRegCfg_Rte_Pim_dMotCurrRegCfgMotVelMrfFild() = dMotCurrRegCfgMotVelMrfFild;
  MotVelMrfFild = *TSC_MotCurrRegCfg_Rte_Pim_MotVelMrfFild();
  *TSC_MotCurrRegCfg_Rte_Pim_MotVelMrfFild() = MotVelMrfFild;

  MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val();
  MotCurrRegCfgIntglGainSampleTi_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val();
  MotCurrRegCfgMotAgCompuDly_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val();
  MotCurrRegCfgMotDampgRatDax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val();
  MotCurrRegCfgMotDampgRatQax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val();
  MotCurrRegCfgMotRVirtDax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotRVirtDax_Val();
  MotCurrRegCfgMotRVirtQax_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotRVirtQax_Val();
  MotCurrRegCfgMotVelFilFrq_Val_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotCurrRegCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl_data = TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl();
  MotRefMdlFbCtrlDi_Logl_data = TSC_MotCurrRegCfg_Rte_Prm_MotRefMdlFbCtrlDi_Logl();
  (void)memcpy(MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(), sizeof(Ary1D_u10p6_4));
  (void)memcpy(MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(), sizeof(Ary1D_u10p6_4));
  (void)memcpy(MotCurrRegCfgMotCtrlPrmSelnX_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(), sizeof(Ary1D_u11p5_4));
  (void)memcpy(MotCurrRegCfgMotNatFrqDaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D(), sizeof(Ary1D_u9p7_4));
  (void)memcpy(MotCurrRegCfgMotNatFrqQaxY_Ary1D_data, TSC_MotCurrRegCfg_Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D(), sizeof(Ary1D_u9p7_4));

  fct_status = TSC_MotCurrRegCfg_Rte_Read_CurrMeasLoaMtgtnEna_Logl(&Read_CurrMeasLoaMtgtnEna_Logl);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(&Read_DualEcuMotCtrlMtgtnEna_Logl);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_IvtrLoaMtgtnEna_Logl(&Read_IvtrLoaMtgtnEna_Logl);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_MotCurrEolCalSt_Val(&Read_MotCurrEolCalSt_Val);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_MotInduDaxEstimd_Val(&Read_MotInduDaxEstimd_Val);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_MotInduQaxEstimd_Val(&Read_MotInduQaxEstimd_Val);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_MotREstimd_Val(&Read_MotREstimd_Val);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_MotVelMrf_Val(&Read_MotVelMrf_Val);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_MotCurrRegCfg_Rte_Write_MotAgElecDly_Val(Rte_InitValue_MotAgElecDly_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCurrRegCfg_Rte_Write_MotDampgDax_Val(Rte_InitValue_MotDampgDax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCurrRegCfg_Rte_Write_MotDampgQax_Val(Rte_InitValue_MotDampgQax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCurrRegCfg_Rte_Write_MotIntglGainDax_Val(Rte_InitValue_MotIntglGainDax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCurrRegCfg_Rte_Write_MotIntglGainQax_Val(Rte_InitValue_MotIntglGainQax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCurrRegCfg_Rte_Write_MotPropGainDax_Val(Rte_InitValue_MotPropGainDax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotCurrRegCfg_Rte_Write_MotPropGainQax_Val(Rte_InitValue_MotPropGainQax_Val);
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


#define MotCurrRegCfg_STOP_SEC_CODE
#include "MotCurrRegCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void MotCurrRegCfg_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Ag12_LowerLimit;
  float32 Test_float32_UL_1 = Ag12_UpperLimit;
  float32 Test_float32_LL_2 = Frq2_LowerLimit;
  float32 Test_float32_UL_2 = Frq2_UpperLimit;
  float32 Test_float32_LL_3 = Indu1_LowerLimit;
  float32 Test_float32_UL_3 = Indu1_UpperLimit;
  float32 Test_float32_LL_4 = R1_LowerLimit;
  float32 Test_float32_UL_4 = R1_UpperLimit;
  float32 Test_float32_LL_5 = R2_LowerLimit;
  float32 Test_float32_UL_5 = R2_UpperLimit;
  float32 Test_float32_LL_6 = R3_LowerLimit;
  float32 Test_float32_UL_6 = R3_UpperLimit;
  float32 Test_float32_LL_7 = R4_LowerLimit;
  float32 Test_float32_UL_7 = R4_UpperLimit;
  float32 Test_float32_LL_8 = R5_LowerLimit;
  float32 Test_float32_UL_8 = R5_UpperLimit;
  float32 Test_float32_LL_9 = Spd1_LowerLimit;
  float32 Test_float32_UL_9 = Spd1_UpperLimit;
  float32 Test_float32_LL_10 = Spd3_LowerLimit;
  float32 Test_float32_UL_10 = Spd3_UpperLimit;
  float32 Test_float32_LL_11 = Ti10_LowerLimit;
  float32 Test_float32_UL_11 = Ti10_UpperLimit;
  float32 Test_float32_LL_12 = Ti11_LowerLimit;
  float32 Test_float32_UL_12 = Ti11_UpperLimit;
  float32 Test_float32_LL_13 = Uls10_LowerLimit;
  float32 Test_float32_UL_13 = Uls10_UpperLimit;
  float32 Test_float32_LL_14 = Vel1_LowerLimit;
  float32 Test_float32_UL_14 = Vel1_UpperLimit;

  u10p6 Test_u10p6_LL_1 = Frq3_LowerLimit;
  u10p6 Test_u10p6_UL_1 = Frq3_UpperLimit;
  u10p6 Test_u10p6_LL_2 = Frq4_LowerLimit;
  u10p6 Test_u10p6_UL_2 = Frq4_UpperLimit;

  u11p5 Test_u11p5_LL_1 = Vel4_LowerLimit;
  u11p5 Test_u11p5_UL_1 = Vel4_UpperLimit;

  u9p7 Test_u9p7_LL_1 = Frq5_LowerLimit;
  u9p7 Test_u9p7_UL_1 = Frq5_UpperLimit;
  u9p7 Test_u9p7_LL_2 = Frq6_LowerLimit;
  u9p7 Test_u9p7_UL_2 = Frq6_UpperLimit;

  uint8 Test_uint8_LL_1 = Cnt14_LowerLimit;
  uint8 Test_uint8_UL_1 = Cnt14_UpperLimit;

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
